const {execSync} = require('child_process');

/**
 * Run `ssh -Q`
 * @param option {'cipher'|'cipher-auth'|'compression'|
 *                'kex'|'key'|'key-cert'|'key-plain'|
 *                'key-sig'|'mac'|'protocol-version'|'sig'}
 */
module.exports.query = (option) =>
  token(choice(
    ...execSync(`ssh -Q ${option}`)
    .toString().split('\n').slice(0, -1)
  ));

/**
 * @param word {string}
 * @param name {'keyword'|'criteria'}
 */
module.exports.keyword = (word, name = 'keyword') =>
  field(name, alias(new RegExp(word, 'i'), word));

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
 * @param option {SymbolRule<'cipher'|'kex'|'key_sig'|'mac'|'sig'>}
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
