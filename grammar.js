/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://man.openbsd.org/ssh_config|OpenSSH manual}
 */

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
const query = (option) =>
  token(choice(...execSync(`ssh -Q ${option}`).toString().split('\n').slice(0, -1)));

/**
 * @param word {string}
 */
const keyword = (word) =>
  field('keyword', alias(new RegExp(word, 'i'), word));

/**
 * @param arg {RuleOrLiteral}
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

/**
 * @param prefix {'+-'|'+-^'}
 * @param option {SymbolRule<AlgorithmSymbol>}
 */
const algorithms = (prefix, option) =>
  argument(seq(
    optional(choice(...prefix)),
    list(',', option)
  ));

module.exports = grammar({
  name: 'ssh_config',

  extras: _ => [],

  inline: $ => [
    $._add_keys_to_agent_arg,
    $._control_master_arg,
    $._control_persist_arg,
    $._forward_agent_arg,
    $._identity_agent_arg,
    $._ipqos_arg,
  ],

  rules: {
    config: $ => repeat(choice(
      seq(
        optional($._space),
        optional($.comment),
        $._eol
      ),
      seq(
        optional($._space),
        $.host_declaration
      ),
      // TODO: seq(
      //   optional($._space),
      //   $.match_declaration
      // ),
      seq(
        optional($._space),
        $.parameter,
        optional($._space),
        $._eol
      )
    )),

    host_declaration: $ => prec.right(seq(
      keyword('Host'),
      $._sep,
      list($._space, argument(
        seq(optional('!'), $.pattern)
      )),
      optional($._space),
      $._eol,
      $._declarations
    )),

    _declarations: $ => prec.right(
      repeat1(seq(
        optional($._space),
        choice($.comment, $.parameter),
        optional($._space),
        $._eol
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
      $._enable_escape_command_line,
      $._enable_ssh_keysign,
      $._escape_char,
      $._exit_on_forward_failure,
      $._fingerprint_hash,
      $._fork_after_authentication,
      $._forward_agent,
      $._forward_x11,
      $._forward_x11_timeout,
      $._forward_x11_trusted,
      $._global_known_hosts_file,
      $._gssapi_authentication,
      $._gssapi_delegate_credentials,
      $._hostbased_accepted_algorithms,
      $._hostbased_authentication,
      $._host_key_algorithms,
      $._host_key_alias,
      $._hostname,
      $._identities_only,
      $._identity_agent,
      $._identity_file,
      $._ignore_unknown,
      $._ipqos,
      $._kbd_interactive_authentication,
      $._kex_algorithms,
      $._known_hosts_command,
      $._local_command,
      $._local_forward,
      $._log_level,
      $._log_verbose,
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
      argument($.pattern)
    ),

    _bind_interface: $ => seq(
      keyword('BindInterface'),
      $._sep,
      argument($.pattern)
    ),

    _canonical_domains: $ => seq(
      keyword('CanonicalDomains'),
      $._sep,
      list($._space, argument($.pattern))
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
      field('source_domain_list', list(',', $.pattern)),
      ':',
      field('target_domain_list', list(',', $.pattern)),
    ),

    _ca_signature_algorithms: $ => seq(
      keyword('CASignatureAlgorithms'),
      $._sep,
      algorithms('+-', $.sig)
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
      algorithms('+-^', $.cipher)
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

    _dynamic_forward: $ => seq(
      keyword('DynamicForward'),
      $._sep,
      argument(list($._space, $._dynamic_forward_value))
    ),

    _dynamic_forward_value: $ => choice(
      field('port', alias($._number, $.number)),
      seq(
        field('bind_address', choice('*', $.string)),
        ':',
        field('port', alias($._number, $.number))
      )
    ),

    _enable_escape_command_line: $ => seq(
      keyword('EnableEscapeCommandline'),
      $._sep,
      argument($._boolean)
    ),

    _enable_ssh_keysign: $ => seq(
      keyword('EnableSSHKeysign'),
      $._sep,
      argument($._boolean)
    ),

    _escape_char: $ => seq(
      keyword('EscapeChar'),
      $._sep,
      argument(choice(/\S|\^[A-Za-z]/, 'none'))
    ),

    _exit_on_forward_failure: $ => seq(
      keyword('ExitOnForwardFailure'),
      $._sep,
      argument($._boolean)
    ),

    _fingerprint_hash: $ => seq(
      keyword('FingerprintHash'),
      $._sep,
      argument(choice('md5', 'sha256'))
    ),

    _fork_after_authentication: $ => seq(
      keyword('ForkAfterAuthentication'),
      $._sep,
      argument($._boolean)
    ),

    _forward_agent: $ => seq(
      keyword('ForwardAgent'),
      $._sep,
      argument($._forward_agent_arg)
    ),

    _forward_agent_arg: $ => choice(
      $._boolean,
      $.string,
      $._var_value
    ),

    _forward_x11: $ => seq(
      keyword('ForwardX11'),
      $._sep,
      argument($._boolean)
    ),

    _forward_x11_timeout: $ => seq(
      keyword('ForwardX11Timeout'),
      $._sep,
      argument($.time)
    ),

    _forward_x11_trusted: $ => seq(
      keyword('ForwardX11Trusted'),
      $._sep,
      argument($._boolean)
    ),

    _global_known_hosts_file: $ => seq(
      keyword('GlobalKnownHostsFile'),
      $._sep,
      list($._space, argument($.string))
    ),

    _gssapi_authentication: $ => seq(
      keyword('GSSAPIAuthentication'),
      $._sep,
      argument($._boolean)
    ),

    _gssapi_delegate_credentials: $ => seq(
      keyword('GSSAPIDelegateCredentials'),
      $._sep,
      argument($._boolean)
    ),

    _hostbased_accepted_algorithms: $ => seq(
      choice(
        keyword('HostbasedAcceptedAlgorithms'),
        keyword('HostbasedKeyTypes')
      ),
      $._sep,
      algorithms('+-^', $.key_sig)
    ),

    _hostbased_authentication: $ => seq(
      keyword('HostbasedAuthentication'),
      $._sep,
      argument($._boolean)
    ),

    _host_key_algorithms: $ => seq(
      keyword('HostKeyAlgorithms'),
      $._sep,
      algorithms('+-^', $.key_sig)
    ),

    _host_key_alias: $ => seq(
      keyword('HostKeyAlias'),
      $._sep,
      argument($.string)
    ),

    _hostname: $ => seq(
      keyword('Hostname'),
      $._sep,
      argument($._hostname_string)
    ),

    _identities_only: $ => seq(
      keyword('IdentitiesOnly'),
      $._sep,
      argument($._boolean)
    ),

    _identity_agent: $ => seq(
      keyword('IdentityAgent'),
      $._sep,
      argument($._identity_agent_arg)
    ),

    _identity_agent_arg: $ => choice(
      'none',
      'SSH_AUTH_SOCK',
      $._file_string,
      $._var_value
    ),

    _identity_file: $ => seq(
      keyword('IdentityFile'),
      $._sep,
      argument($._file_string)
    ),

    _ignore_unknown: $ => seq(
      keyword('IgnoreUnknown'),
      $._sep,
      argument(list($._space, $.pattern))
    ),

    _ipqos: $ => prec.right(seq(
      keyword('IPQoS'),
      $._sep,
      argument($._ipqos_arg),
      optional(seq($._space, argument($._ipqos_arg)))
    )),

    _ipqos_arg: $ => choice(
      $.ipqos,
      alias($._number, $.number),
      'none'
    ),

    _kbd_interactive_authentication: $ => seq(
      choice(
        keyword('KbdInteractiveAuthentication'),
        keyword('ChallengeResponseAuthentication')
      ),
      $._sep,
      argument($._boolean)
    ),

    _kex_algorithms: $ => seq(
      keyword('KexAlgorithms'),
      $._sep,
      algorithms('+-^', $.kex)
    ),

    _known_hosts_command: $ => seq(
      keyword('KnownHostsCommand'),
      $._sep,
      argument($._hosts_string)
    ),

    _local_command: $ => seq(
      keyword('LocalCommand'),
      $._sep,
      argument($._token_string)
    ),

    _local_forward: $ => seq(
      keyword('LocalForward'),
      $._sep,
      argument($._local_forward_value1),
      $._space,
      argument($._local_forward_value2)
    ),

    _local_forward_value1: $ => choice(
      $._file_string,
      field('port', alias($._number, $.number)),
      seq(
        field('bind_address', choice('*', $.string)),
        ':',
        field('port', alias($._number, $.number))
      )
    ),

    _local_forward_value2: $ => choice(
      $._file_string,
      seq(
        field('host', choice('*', $.string)),
        ':',
        field('port', alias($._number, $.number))
      )
    ),

    _log_level: $ => seq(
      keyword('LogLevel'),
      $._sep,
      argument($.verbosity)
    ),

    _log_verbose: $ => seq(
      keyword('LogVerbose'),
      $._sep,
      argument(choice(
        list(',', $._log_verbose_value),
        seq('"', list(',', $._log_verbose_quoted), '"')
      ))
    ),

    _log_verbose_value: $ => seq(
      field('file', pattern(/\S/)),
      ':',
      field('function', pattern(/[a-zA-Z0-9_()]/)),
      ':',
      field('line', choice('*', alias($._number, $.number)))
    ),

    _log_verbose_quoted: $ => seq(
      field('file', pattern(/[^"]/)),
      ':',
      field('function', pattern(/[a-zA-Z0-9_()]/)),
      ':',
      field('line', choice('*', alias($._number, $.number)))
    ),

    ipqos: _ => token(choice(
      'af11', 'af12', 'af13',
      'af21', 'af22', 'af23',
      'af31', 'af32', 'af33',
      'af41', 'af42', 'af43',
      'cs0', 'cs1', 'cs2',
      'cs3', 'cs4', 'cs5',
      'cs6', 'cs7', 'ef',
      'le', 'lowdelay',
      'throughput',
      'reliability'
    )),

    verbosity: _ => token(choice(
      'QUIET', 'FATAL', 'ERROR', 'INFO', 'VERBOSE',
      'DEBUG', 'DEBUG1', 'DEBUG2', 'DEBUG3'
    )),

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

    token: _ => /%[%CdfHhIiKkLlnprTtu]/,

    _var_value: $ => alias(
      seq('$', field('name', $._var_name)),
      $.variable
    ),

    _var_name: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    variable: $ => seq('${', field('name', $._var_name), '}'),

    _file_string: $ => alias(
      choice(
        repeat1(choice(/\S/, $._file_token, $.variable)),
        seq('"', repeat1(choice(/[^"]/, $._file_token, $.variable)), '"'),
      ),
      $.string
    ),

    _hosts_string: $ => alias(
      choice(
        repeat1(choice(/\S/, $._hosts_token, $.variable)),
        seq('"', repeat1(choice(/[^"]/, $._hosts_token, $.variable)), '"'),
      ),
      $.string
    ),

    _hostname_string: $ => alias(
      choice(
        repeat1(choice(/\S/, $._hostname_token)),
        seq('"', repeat1(choice(/[^"]/, $._hostname_token)), '"'),
      ),
      $.string
    ),

    _token_string: $ => alias(
      choice(
        repeat1(choice(/\S/, $.token)),
        seq('"', repeat1(choice(/[^"]/, $.token)), '"'),
      ),
      $.string
    ),

    string: _ => choice(/\S+/, seq('"', /[^"]+/, '"')),

    _file_pattern: $ => alias(
      choice(
        pattern(/\S/, $._file_token),
        seq('"', pattern(/[^"]/, $._file_token), '"'),
      ),
      $.pattern
    ),

    _file_pattern_vars: $ => alias(
      choice(
        pattern(/\S/, $.variable, $._file_token),
        seq('"', pattern(/[^"]/, $.variable, $._file_token), '"'),
      ),
      $.pattern
    ),

    pattern: _ => choice(
        pattern(/\S/),
        seq('"', pattern(/[^"]/), '"'),
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

    _eol: _ => /\r?\n/
  }
});
