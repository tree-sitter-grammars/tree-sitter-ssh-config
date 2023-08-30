/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://man.openbsd.org/ssh_config|OpenSSH manual}
 */

const {execSync} = require('child_process');

/**
 * Run `ssh -Q`
 * @param option {'cipher'|'cipher-auth'|'compression'|
 *                'kex'|'key'|'key-cert'|'key-plain'|
 *                'key-sig'|'mac'|'protocol-version'|'sig'}
 */
const query = (option) =>
  token(choice(...execSync(`ssh -Q ${option}`).toString().split('\n').slice(0, -1)));

/**
 * Case-insensitive
 * @param word {string}
 */
const ci = (word) =>
  alias(new RegExp(word, 'i'), word);

/**
 * @param rule {Rule}
 */
const pattern_list = (rule) =>
  seq(rule, repeat(seq(',', rule)));

/**
 * @param extra {...Rule}
 */
const pattern = (...extra) =>
  seq(
    optional('!'),
    repeat1(
      choice('*', '?', /\S/, ...extra)
    )
  );

module.exports = grammar({
  name: 'ssh_config',

  extras: _ => [],

  rules: {
    config: $ => repeat(
      seq(
        optional($._space),
        optional(
          choice(
            $.comment,
            // TODO: $.host,
            // TODO: $.match,
            // TODO: $.option
          ),
        ),
        optional($._space),
        /\r?\n/
      )
    ),

    cipher: _ => query('cipher'),

    cipher_auth: _ => query('cipher-auth'),

    compression: _ => query('compression'),

    kex: _ => query('kex'),

    key: _ => query('key'),

    key_cert: _ => query('key-cert'),

    key_plain: _ => query('key-plain'),

    key_sig: _ => query('key-sig'),

    mac: _ => query('mac'),

    protocol_version: _ => query('protocol-version'),

    sig: _ => query('sig'),

    _file_token: $ => alias(/%[%CdhikLlnpru]/, $.token),

    _hosts_token: $ => alias(/%[%CdhikLlnprufHIKt]/, $.token),

    _hostname_token: $ => alias(/%[%h]/, $.token),

    _proxy_token: $ => alias(/%[%hnpr]/, $.token),

    _token: $ => alias(/%[%CdfHhIiKkLlnprTtu]/, $.token),

    variable: _ => seq(
      '${', field('name', /[a-zA-Z_][a-zA-Z0-9_]*/), '}'
    ),

    comment: _ => /#.*/,

    _space: _ => /[ \t]+/,
  }
});
