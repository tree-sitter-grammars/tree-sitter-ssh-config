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

/**
 * Run `ssh -Q`
 * @param option {AlgorithmType}
 */
module.exports.query = (option) =>
  token(choice(...execSync(`ssh -Q ${option}`).toString().split('\n').slice(0, -1)));

/**
 * @param word {string}
 */
module.exports.keyword = (word) =>
  field('keyword', alias(new RegExp(word, 'i'), word));

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
 * @param rule {AliasRule}
 */
module.exports.override = (content, rule) =>
  seq(
    field('file', module.exports.pattern(content)),
    ':',
    field('function', module.exports.pattern(/[a-zA-Z0-9_()]/)),
    ':',
    field('line', choice('*', rule))
  );
