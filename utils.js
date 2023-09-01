const {execSync} = require('child_process');

/**
 * @typedef {'cipher'|'cipher-auth'|'compression'|
 *           'kex'|'key'|'key-cert'|'key-plain'|
 *           'key-sig'|'mac'|'protocol-version'|
 *           'sig'} AlgorithmType
 *
 * @typedef {'cipher'|'cipher_auth'|'compression'|
 *           'kex'|'key'|'key_cert'|'key_plain'|
 *           'key_sig'|'mac'|'protocol_version'|
 *           'sig'} AlgorithmSymbol
 */

/** @param char {string} */
const ci = (char) =>
  (char >= 'a' && char <= 'z') ?
    `[${char}${char.toUpperCase()}]` :
    (char >= 'A' && char <= 'Z') ?
      `[${char.toLowerCase()}${char}]` : char;

/**
 * Run `ssh -Q`
 * @param option {AlgorithmType}
 */
module.exports.query = (option) =>
  token(choice(
    ...execSync(`ssh -Q ${option}`)
    .toString().split('\n').slice(0, -1)
  ));

/**
 * @param word {string}
 */
module.exports.keyword = (word) =>
  field('keyword', alias(
    new RegExp(word.split('').map(ci).join('')), word
  ));

/**
 * @param arg {RuleOrLiteral}
 */
module.exports.argument = (arg) =>
  field('argument', arg);

/**
 * @param sep {','|SymbolRule<'_space'>}
 * @param rule {Rule}
 */
module.exports.list = (sep, rule) =>
  prec.right(seq(rule, repeat(seq(sep, rule))));

/**
 * @param content {RegExp}
 * @param extra {...Rule}
 */
module.exports.pattern = (content, ...extra) =>
  repeat1(choice('*', '?', content, ...extra));

/**
 * @param content {RegExp}
 * @param token {Rule}
 * @param extra {...Rule}
 */
module.exports.token = (content, token, ...extra) =>
  repeat1(choice(content, token, ...extra));

/**
 * @param prefix {'+-'|'+-^'}
 * @param option {SymbolRule<AlgorithmSymbol>}
 */
module.exports.algorithms = (prefix, option) =>
  module.exports.argument(seq(
    optional(choice(...prefix)),
    module.exports.list(',', option)
  ));

/**
 * @param content {RegExp}
 * @param rule {SymbolRule<'number'>}
 */
module.exports.override = (content, rule) =>
  seq(
    field('file', module.exports.pattern(content)),
    ':',
    field('function', module.exports.pattern(content)),
    ':',
    field('line', choice('*', rule))
  );
