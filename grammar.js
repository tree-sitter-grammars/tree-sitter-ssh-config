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
 * @param word {string}
 */
const keyword = (word) =>
  field('keyword', alias(new RegExp(word, 'i'), word));

/**
 * @param arg {Rule}
 */
const argument = (arg) =>
  field('argument', arg);

/**
 * @param sep {','|SymbolRule<'_space'>}
 * @param rule {Rule}
 */
const list = (sep, rule) =>
  prec.right(seq(rule, repeat(seq(sep, rule))));

/**
 * @param content {RegExp}
 * @param extra {...Rule}
 */
const pattern = (content, ...extra) =>
  repeat1(choice('*', '?', content, ...extra));

module.exports = grammar({
  name: 'ssh_config',

  extras: _ => [],

  inline: $ => [
    $._add_keys_to_agent_arg,
    $._control_master_arg,
    $._control_persist_arg,
  ],

  rules: {
    config: $ => repeat(
      seq(
        optional($._space),
        optional(
          choice(
            $.comment,
            $.host_declaration,
            // TODO: $.match_declaration,
            $.parameter
          ),
        ),
        optional($._space),
        /\r?\n/
      )
    ),

    host_declaration: $ => prec.right(seq(
      keyword('Host'),
      $._sep,
      list($._space, argument(
        seq(optional('!'), $._pattern)
      )),
      optional($._space),
      /\r?\n/,
      $._declarations
    )),

    _declarations: $ => prec.right(
      repeat1(seq(
        optional($._space),
        choice($.comment, $.parameter),
        optional($._space),
        /\r?\n/
      ))
    ),

    parameter: $ => choice(
      $._add_keys_to_agent,
      $._address_family,
      $._batch_mode,
      $._bind_address,
      $._bind_interface,
      $._canonical_domains,
      $._canonicalize_fallback_local,
      $._canonicalize_hostname,
      $._canonicalize_max_dots,
      $._canonicalize_permitted_cnames,
      $._ca_signature_algorithms,
      $._certificate_file,
      $._check_host_ip,
      $._ciphers,
      $._clear_all_forwardings,
      $._compression,
      $._connection_attempts,
      $._connect_timeout,
      $._control_master,
      $._control_path,
      $._control_persist,
    ),

    _add_keys_to_agent: $ => seq(
      keyword('AddKeysToAgent'),
      $._sep,
      argument($._add_keys_to_agent_arg)
    ),

    _add_keys_to_agent_arg: $ => choice(
      $._boolean,
      'ask',
      prec.right(seq(
        'confirm',
        optional(seq($._sep, $.time))
      )),
      $.time
    ),

    _address_family: $ => seq(
      keyword('AddressFamily'),
      $._sep,
      argument(choice('inet', 'inet6'))
    ),

    _batch_mode: $ => seq(
      keyword('BatchMode'),
      $._sep,
      argument($._boolean)
    ),

    _bind_address: $ => seq(
      keyword('BindAddress'),
      $._sep,
      argument($._pattern)
    ),

    _bind_interface: $ => seq(
      keyword('BindInterface'),
      $._sep,
      argument($._pattern)
    ),

    _canonical_domains: $ => seq(
      keyword('CanonicalDomains'),
      $._sep,
      list($._space, argument($._pattern))
    ),

    _canonicalize_fallback_local: $ => seq(
      keyword('CanonicalizeFallbackLocal'),
      $._sep,
      argument($._boolean)
    ),

    _canonicalize_hostname: $ => seq(
      keyword('CanonicalizeHostname'),
      $._sep,
      argument($._boolean)
    ),

    _canonicalize_max_dots: $ => seq(
      keyword('CanonicalizeMaxDots'),
      $._sep,
      argument(alias($._number, $.number))
    ),

    _canonicalize_permitted_cnames: $ => seq(
      keyword('CanonicalizePermittedCNAMEs'),
      $._sep,
      choice(
        'none',
        list($._space, argument($._cnames_map))
      )
    ),

    _cnames_map: $ => seq(
      field('source_domain_list', list(',', $._pattern)),
      ':',
      field('target_domain_list', list(',', $._pattern)),
    ),

    _ca_signature_algorithms: $ => seq(
      keyword('CASignatureAlgorithms'),
      $._sep,
      argument(seq(
        optional(choice('+', '-')),
        list(',', $.sig)
      ))
    ),

    _certificate_file: $ => seq(
      keyword('CertificateFile'),
      $._sep,
      argument($._file_pattern_vars)
    ),

    _check_host_ip: $ => seq(
      keyword('CheckHostIP'),
      $._sep,
      argument($._boolean)
    ),

    _ciphers: $ => seq(
      keyword('Ciphers'),
      $._sep,
      argument(seq(
        optional(choice('+', '-', '^')),
        list(',', $.cipher)
      ))
    ),

    _clear_all_forwardings: $ => seq(
      keyword('ClearAllForwardings'),
      $._sep,
      argument($._boolean)
    ),

    _compression: $ => seq(
      keyword('Compression'),
      $._sep,
      argument($._boolean)
    ),

    _connection_attempts: $ => seq(
      keyword('ConnectionAttempts'),
      $._sep,
      argument(alias($._number, $.number))
    ),

    _connect_timeout: $ => seq(
      keyword('ConnectTimeout'),
      $._sep,
      argument(alias($._number, $.number))
    ),

    _control_master: $ => seq(
      keyword('ControlMaster'),
      $._sep,
      argument($._control_master_arg)
    ),

    _control_master_arg: $ => choice(
      $._boolean,
      'ask',
      'auto',
      'autoask'
    ),

    _control_persist: $ => seq(
      keyword('ControlPersist'),
      $._sep,
      argument($._control_persist_arg)
    ),

    _control_persist_arg: $ => choice(
      $._boolean,
      $.time
    ),

    _control_path: $ => seq(
      keyword('ControlPath'),
      $._sep,
      argument($._file_pattern_vars)
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

    _file_pattern: $ => alias(
      choice(
        seq(pattern(/\S/, $._file_token)),
        seq('"', pattern(/[^"]/, $._file_token), '"'),
      ),
      $.pattern
    ),

    _file_pattern_vars: $ => alias(
      choice(
        seq(pattern(/\S/, $.variable, $._file_token)),
        seq('"', pattern(/[^"]/, $.variable, $._file_token), '"'),
      ),
      $.pattern
    ),

    _pattern: $ => alias(
      choice(
        seq(pattern(/\S/)),
        seq('"', pattern(/[^"]/), '"'),
      ),
      $.pattern
    ),

    _boolean: _ => choice('yes', 'no'),

    _number: _ => /[1-9][0-9]*|0/,

    time: $ => choice(
      $._number,
      seq($._number, /[wW]/),
      seq(
          optional(seq($._number, /[wW]/)),
          $._number, /[dD]/,
      ),
      seq(
          optional(seq($._number, /[wW]/)),
          optional(seq($._number, /[dD]/)),
          $._number, /[hH]/,
      ),
      seq(
          optional(seq($._number, /[wW]/)),
          optional(seq($._number, /[dD]/)),
          optional(seq($._number, /[hH]/)),
          $._number, /[mM]/,
      ),
      seq(
          optional(seq($._number, /[wW]/)),
          optional(seq($._number, /[dD]/)),
          optional(seq($._number, /[hH]/)),
          optional(seq($._number, /[mM]/)),
          $._number, /[sS]/,
      )
    ),

    comment: _ => /#.*/,

    _sep: $ => choice(
      $._space,
      seq(
        optional($._space),
        '=',
        optional($._space)
      )
    ),

    _space: _ => /[ \t]+/,
  }
});
