/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://man.openbsd.org/ssh_config|OpenSSH manual}
 */

const u = require('./utils');

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
      u.keyword('Host'),
      $._sep,
      u.list($._space, u.argument(
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
      u.keyword('AddKeysToAgent'),
      $._sep,
      u.argument($._add_keys_to_agent_arg)
    ),

    _add_keys_to_agent_arg: $ => choice(
      $._boolean,
      'ask',
      prec.right(seq(
        'confirm',
        optional(seq($._space, $.time))
      )),
      $.time
    ),

    _address_family: $ => seq(
      u.keyword('AddressFamily'),
      $._sep,
      u.argument(choice('inet', 'inet6'))
    ),

    _batch_mode: $ => seq(
      u.keyword('BatchMode'),
      $._sep,
      u.argument($._boolean)
    ),

    _bind_address: $ => seq(
      u.keyword('BindAddress'),
      $._sep,
      u.argument($.pattern)
    ),

    _bind_interface: $ => seq(
      u.keyword('BindInterface'),
      $._sep,
      u.argument($.pattern)
    ),

    _canonical_domains: $ => seq(
      u.keyword('CanonicalDomains'),
      $._sep,
      u.list($._space, u.argument($.pattern))
    ),

    _canonicalize_fallback_local: $ => seq(
      u.keyword('CanonicalizeFallbackLocal'),
      $._sep,
      u.argument($._boolean)
    ),

    _canonicalize_hostname: $ => seq(
      u.keyword('CanonicalizeHostname'),
      $._sep,
      u.argument($._boolean)
    ),

    _canonicalize_max_dots: $ => seq(
      u.keyword('CanonicalizeMaxDots'),
      $._sep,
      u.argument(alias($._number, $.number))
    ),

    _canonicalize_permitted_cnames: $ => seq(
      u.keyword('CanonicalizePermittedCNAMEs'),
      $._sep,
      choice(
        'none',
        u.list($._space, u.argument($._cnames_map))
      )
    ),

    _cnames_map: $ => seq(
      field('source_domain_list', u.list(',', $.pattern)),
      ':',
      field('target_domain_list', u.list(',', $.pattern)),
    ),

    _ca_signature_algorithms: $ => seq(
      u.keyword('CASignatureAlgorithms'),
      $._sep,
      u.algorithms('+-', $.sig)
    ),

    _certificate_file: $ => seq(
      u.keyword('CertificateFile'),
      $._sep,
      u.argument($._file_pattern_vars)
    ),

    _check_host_ip: $ => seq(
      u.keyword('CheckHostIP'),
      $._sep,
      u.argument($._boolean)
    ),

    _ciphers: $ => seq(
      u.keyword('Ciphers'),
      $._sep,
      u.algorithms('+-^', $.cipher)
    ),

    _clear_all_forwardings: $ => seq(
      u.keyword('ClearAllForwardings'),
      $._sep,
      u.argument($._boolean)
    ),

    _compression: $ => seq(
      u.keyword('Compression'),
      $._sep,
      u.argument($._boolean)
    ),

    _connection_attempts: $ => seq(
      u.keyword('ConnectionAttempts'),
      $._sep,
      u.argument(alias($._number, $.number))
    ),

    _connect_timeout: $ => seq(
      u.keyword('ConnectTimeout'),
      $._sep,
      u.argument(alias($._number, $.number))
    ),

    _control_master: $ => seq(
      u.keyword('ControlMaster'),
      $._sep,
      u.argument($._control_master_arg)
    ),

    _control_master_arg: $ => choice(
      $._boolean,
      'ask',
      'auto',
      'autoask'
    ),

    _control_persist: $ => seq(
      u.keyword('ControlPersist'),
      $._sep,
      u.argument($._control_persist_arg)
    ),

    _control_persist_arg: $ => choice(
      $._boolean,
      $.time
    ),

    _control_path: $ => seq(
      u.keyword('ControlPath'),
      $._sep,
      u.argument($._file_pattern_vars)
    ),

    _dynamic_forward: $ => seq(
      u.keyword('DynamicForward'),
      $._sep,
      u.argument(u.list($._space, $._dynamic_forward_value))
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
      u.keyword('EnableEscapeCommandline'),
      $._sep,
      u.argument($._boolean)
    ),

    _enable_ssh_keysign: $ => seq(
      u.keyword('EnableSSHKeysign'),
      $._sep,
      u.argument($._boolean)
    ),

    _escape_char: $ => seq(
      u.keyword('EscapeChar'),
      $._sep,
      u.argument(choice(/\S|\^[A-Za-z]/, 'none'))
    ),

    _exit_on_forward_failure: $ => seq(
      u.keyword('ExitOnForwardFailure'),
      $._sep,
      u.argument($._boolean)
    ),

    _fingerprint_hash: $ => seq(
      u.keyword('FingerprintHash'),
      $._sep,
      u.argument(choice('md5', 'sha256'))
    ),

    _fork_after_authentication: $ => seq(
      u.keyword('ForkAfterAuthentication'),
      $._sep,
      u.argument($._boolean)
    ),

    _forward_agent: $ => seq(
      u.keyword('ForwardAgent'),
      $._sep,
      u.argument($._forward_agent_arg)
    ),

    _forward_agent_arg: $ => choice(
      $._boolean,
      $.string,
      $._var_value
    ),

    _forward_x11: $ => seq(
      u.keyword('ForwardX11'),
      $._sep,
      u.argument($._boolean)
    ),

    _forward_x11_timeout: $ => seq(
      u.keyword('ForwardX11Timeout'),
      $._sep,
      u.argument($.time)
    ),

    _forward_x11_trusted: $ => seq(
      u.keyword('ForwardX11Trusted'),
      $._sep,
      u.argument($._boolean)
    ),

    _global_known_hosts_file: $ => seq(
      u.keyword('GlobalKnownHostsFile'),
      $._sep,
      u.list($._space, u.argument($.string))
    ),

    _gssapi_authentication: $ => seq(
      u.keyword('GSSAPIAuthentication'),
      $._sep,
      u.argument($._boolean)
    ),

    _gssapi_delegate_credentials: $ => seq(
      u.keyword('GSSAPIDelegateCredentials'),
      $._sep,
      u.argument($._boolean)
    ),

    _hostbased_accepted_algorithms: $ => seq(
      choice(
        u.keyword('HostbasedAcceptedAlgorithms'),
        u.keyword('HostbasedKeyTypes')
      ),
      $._sep,
      u.algorithms('+-^', $.key_sig)
    ),

    _hostbased_authentication: $ => seq(
      u.keyword('HostbasedAuthentication'),
      $._sep,
      u.argument($._boolean)
    ),

    _host_key_algorithms: $ => seq(
      u.keyword('HostKeyAlgorithms'),
      $._sep,
      u.algorithms('+-^', $.key_sig)
    ),

    _host_key_alias: $ => seq(
      u.keyword('HostKeyAlias'),
      $._sep,
      u.argument($.string)
    ),

    _hostname: $ => seq(
      u.keyword('Hostname'),
      $._sep,
      u.argument($._hostname_string)
    ),

    _identities_only: $ => seq(
      u.keyword('IdentitiesOnly'),
      $._sep,
      u.argument($._boolean)
    ),

    _identity_agent: $ => seq(
      u.keyword('IdentityAgent'),
      $._sep,
      u.argument($._identity_agent_arg)
    ),

    _identity_agent_arg: $ => choice(
      'none',
      'SSH_AUTH_SOCK',
      $._file_string,
      $._var_value
    ),

    _identity_file: $ => seq(
      u.keyword('IdentityFile'),
      $._sep,
      u.argument($._file_string)
    ),

    _ignore_unknown: $ => seq(
      u.keyword('IgnoreUnknown'),
      $._sep,
      u.argument(u.list($._space, $.pattern))
    ),

    _ipqos: $ => prec.right(seq(
      u.keyword('IPQoS'),
      $._sep,
      u.argument($._ipqos_arg),
      optional(seq($._space, u.argument($._ipqos_arg)))
    )),

    _ipqos_arg: $ => choice(
      $.ipqos,
      alias($._number, $.number),
      'none'
    ),

    _kbd_interactive_authentication: $ => seq(
      choice(
        u.keyword('KbdInteractiveAuthentication'),
        u.keyword('ChallengeResponseAuthentication')
      ),
      $._sep,
      u.argument($._boolean)
    ),

    _kex_algorithms: $ => seq(
      u.keyword('KexAlgorithms'),
      $._sep,
      u.algorithms('+-^', $.kex)
    ),

    _known_hosts_command: $ => seq(
      u.keyword('KnownHostsCommand'),
      $._sep,
      u.argument($._hosts_string)
    ),

    _local_command: $ => seq(
      u.keyword('LocalCommand'),
      $._sep,
      u.argument($._token_string)
    ),

    _local_forward: $ => seq(
      u.keyword('LocalForward'),
      $._sep,
      u.argument($._local_forward_value1),
      $._space,
      u.argument($._local_forward_value2)
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
      u.keyword('LogLevel'),
      $._sep,
      u.argument($.verbosity)
    ),

    _log_verbose: $ => seq(
      u.keyword('LogVerbose'),
      $._sep,
      u.argument(choice(
        u.list(',', $._log_verbose_value),
        seq('"', u.list(',', $._log_verbose_quoted), '"')
      ))
    ),

    _log_verbose_value: $ =>
      u.override(/S/, alias($._number, $.number)),

    _log_verbose_quoted: $ =>
      u.override(/[^"]/, alias($._number, $.number)),

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

    cipher: _ => u.query('cipher'),

    cipher_auth: _ => u.query('cipher-auth'),

    compression: _ => u.query('compression'),

    kex: _ => u.query('kex'),

    key: _ => u.query('key'),

    key_cert: _ => u.query('key-cert'),

    key_plain: _ => u.query('key-plain'),

    key_sig: _ => u.query('key-sig'),

    mac: _ => u.query('mac'),

    protocol_version: _ => u.query('protocol-version'),

    sig: _ => u.query('sig'),

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
        u.pattern(/\S/, $._file_token),
        seq('"', u.pattern(/[^"]/, $._file_token), '"'),
      ),
      $.pattern
    ),

    _file_pattern_vars: $ => alias(
      choice(
        u.pattern(/\S/, $.variable, $._file_token),
        seq('"', u.pattern(/[^"]/, $.variable, $._file_token), '"'),
      ),
      $.pattern
    ),

    pattern: _ => choice(
        u.pattern(/\S/),
        seq('"', u.pattern(/[^"]/), '"'),
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
      alias(/[ \t]*=[ \t]*/, '=')
    ),

    _space: _ => /[ \t]+/,

    _eol: _ => /\r?\n/
  }
});
