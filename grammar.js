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

  conflicts: $ => [
    // XXX: conflict in _forward_value[12]
    [$._file_string, $._string]
  ],

  inline: $ => [
    $._add_keys_to_agent_arg,
    $._control_master_arg,
    $._control_persist_arg,
    $._forward_agent_arg,
    $._identity_agent_arg,
    $._ipqos_arg,
    $._proxy_command_arg,
    $._proxy_jump_arg,
    $._request_tty_arg,
    $._security_key_provider_arg,
    $._strict_host_key_checking_arg,
    $._tunnel_arg,
    $._tunnel_device_arg,
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
      seq(
        optional($._space),
        $.match_declaration
      ),
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
        seq(optional('!'), $._pattern)
      )),
      optional($._space),
      $._eol,
      $._declarations
    )),

    match_declaration: $ => prec.right(seq(
      u.keyword('Match'),
      $._sep,
      choice(
        $._all,
        u.list($._space, $.condition)
      ),
      optional($._space),
      $._eol,
      $._declarations
    )),

    condition: $ => choice(
      $._match_canonical,
      $._match_final,
      $._match_exec,
      $._match_localnetwork,
      $._match_host,
      $._match_originalhost,
      $._match_tagged,
      $._match_user,
      $._match_localuser
    ),

    _all: _ => alias(/[aA][lL][lL]/, 'all'),

    _match_canonical: $ => prec.right(seq(
      u.keyword('canonical', 'criteria'),
      optional(seq($._sep, $._all))
    )),

    _match_final: $ => prec.right(seq(
      u.keyword('final', 'criteria'),
      optional(seq($._sep, $._all))
    )),

    _match_exec: $ => seq(
      u.keyword('exec', 'criteria'),
      $._sep,
      u.argument(choice(
        alias(u.token(/\S/, $._file_token), $.string),
        seq('"', alias(u.token(/[^"]/, $._file_token), $.string), '"')
      ))
    ),

    _match_localnetwork: $ => seq(
      u.keyword('localnetwork', 'criteria'),
      $._sep,
      u.argument(choice(
        u.list(',', seq(optional('!'), alias(/\S+/, $.string))),
        seq('"', u.list(',', alias(/[^"]+/, $.string)), '"')
      ))
    ),

    _match_host: $ => seq(
      u.keyword('host', 'criteria'),
      $._sep,
      u.argument($._match_value)
    ),

    _match_originalhost: $ => seq(
      u.keyword('originalhost', 'criteria'),
      $._sep,
      u.argument($._match_value)
    ),

    _match_tagged: $ => seq(
      u.keyword('tagged', 'criteria'),
      $._sep,
      u.argument($._match_value)
    ),

    _match_user: $ => seq(
      u.keyword('user', 'criteria'),
      $._sep,
      u.argument($._match_value)
    ),

    _match_localuser: $ => seq(
      u.keyword('localuser', 'criteria'),
      $._sep,
      u.argument($._match_value)
    ),

    _match_value: $ => choice(
      u.list(',', alias(
        seq(optional('!'), u.pattern(/\S/)),
        $.pattern
      )),
      seq('"', u.list(',', alias(
        seq(optional('!'), u.pattern(/[^"]/)),
        $.pattern
      )), '"')
    ),

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
      $._dynamic_forward,
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
      $._include,
      $._ipqos,
      $._kbd_interactive_authentication,
      $._kex_algorithms,
      $._known_hosts_command,
      $._local_command,
      $._local_forward,
      $._log_level,
      $._log_verbose,
      $._macs,
      $._no_host_authentication_for_localhost,
      $._number_of_password_prompts,
      $._password_authentication,
      $._permit_local_command,
      $._permit_remote_open,
      $._pkcs11_provider,
      $._port,
      $._preferred_authentications,
      $._proxy_command,
      $._proxy_jump,
      $._proxy_use_fdpass,
      $._pubkey_accepted_algorithms,
      $._pubkey_authentication,
      $._rekey_limit,
      $._remote_command,
      $._remote_forward,
      $._request_tty,
      $._required_rsa_size,
      $._revoked_host_keys,
      $._security_key_provider,
      $._send_env,
      $._server_alive_count_max,
      $._server_alive_interval,
      $._session_type,
      $._set_env,
      $._stdin_null,
      $._stream_local_bind_mask,
      $._stream_local_bind_unlink,
      $._strict_host_key_checking,
      $._syslog_facility,
      $._tcp_keep_alive,
      $._tag,
      $._tunnel,
      $._tunnel_device,
      $._update_host_keys,
      $._use_keychain,
      $._user,
      $._user_known_hosts_file,
      $._verify_host_key_dns,
      $._visual_host_key,
      $._xauth_location,
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
      u.argument(choice('any', 'inet', 'inet6'))
    ),

    _batch_mode: $ => seq(
      u.keyword('BatchMode'),
      $._sep,
      u.argument($._boolean)
    ),

    _bind_address: $ => seq(
      u.keyword('BindAddress'),
      $._sep,
      u.argument($._pattern)
    ),

    _bind_interface: $ => seq(
      u.keyword('BindInterface'),
      $._sep,
      u.argument($._pattern)
    ),

    _canonical_domains: $ => seq(
      u.keyword('CanonicalDomains'),
      $._sep,
      u.list($._space, u.argument($._pattern))
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
      u.argument($.number)
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
      field('source_domain_list', u.list(',', $._pattern)),
      ':',
      field('target_domain_list', u.list(',', $._pattern)),
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
      u.argument($.number)
    ),

    _connect_timeout: $ => seq(
      u.keyword('ConnectTimeout'),
      $._sep,
      u.argument($.number)
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
      u.list($._space, u.argument($._dynamic_forward_value))
    ),

    _forward_value_inner: $ => seq(
        field('bind_address', choice('*', $._string)),
        ':',
        field('port', $.number)
    ),

    _dynamic_forward_value: $ => choice(
      field('port', $.number),
      $._forward_value_inner,
      seq('"', $._forward_value_inner, '"')
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
      $._string,
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
      u.list($._space, u.argument($._string))
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
      u.argument($._string)
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
      u.argument(u.list($._space, $._pattern))
    ),

    _include: $ => seq(
      u.keyword('Include'),
      $._sep,
      u.argument($._pattern)
    ),

    _ipqos: $ => prec.right(seq(
      u.keyword('IPQoS'),
      $._sep,
      u.argument($._ipqos_arg),
      optional(seq($._space, u.argument($._ipqos_arg)))
    )),

    _ipqos_arg: $ => choice(
      $.ipqos,
      $.number,
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
      u.argument($._forward_value1),
      $._space,
      u.argument($._forward_value2)
    ),

    _forward_value1: $ => choice(
      field('socket', $._file_string),
      field('port', $.number),
      $._forward_value_inner,
      seq('"', $._forward_value_inner, '"')
    ),

    _forward_value2: $ => choice(
      field('socket', $._file_string),
      $._forward_value_inner,
      seq('"', $._forward_value_inner, '"')
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
      u.override(/S/, $.number),

    _log_verbose_quoted: $ =>
      u.override(/[^"]/, $.number),

    _macs: $ => seq(
      u.keyword('MACs'),
      $._sep,
      u.algorithms('+-^', $.mac)
    ),

    _no_host_authentication_for_localhost: $ => seq(
      u.keyword('NoHostAuthenticationForLocalhost'),
      $._sep,
      u.argument($._boolean)
    ),

    _number_of_password_prompts: $ => seq(
      u.keyword('NumberOfPasswordPrompts'),
      $._sep,
      u.argument($.number)
    ),

    _password_authentication: $ => seq(
      u.keyword('PasswordAuthentication'),
      $._sep,
      u.argument($._boolean)
    ),

    _permit_local_command: $ => seq(
      u.keyword('PermitLocalCommand'),
      $._sep,
      u.argument($._boolean)
    ),

    _permit_remote_open: $ => seq(
      u.keyword('PermitRemoteOpen'),
      $._sep,
      u.argument(u.list($._space, $._permit_remote_open_value))
    ),

    _permit_remote_open_value: $ => choice(
      'any',
      'none',
      seq(
        field('host', choice('*', alias(/\S+/, $.string))),
        ':',
        field('port', choice('*', $.number))
      ),
      seq(
        '"',
        field('host', choice('*', alias(/[^"]+/, $.string))),
        ':',
        field('port', choice('*', $.number)),
        '"'
      ),
    ),

    _pkcs11_provider: $ => seq(
      u.keyword('PKCS11Provider'),
      $._sep,
      u.argument($._string)
    ),

    _port: $ => seq(
      u.keyword('Port'),
      $._sep,
      u.argument($.number)
    ),

    _preferred_authentications: $ => seq(
      u.keyword('PreferredAuthentications'),
      $._sep,
      u.argument(u.list(',', $.authentication))
    ),

    _proxy_command: $ => seq(
      u.keyword('ProxyCommand'),
      $._sep,
      u.argument($._proxy_command_arg)
    ),

    _proxy_command_arg: $ => choice(
      'none',
      $._proxy_string
    ),

    _proxy_jump: $ => seq(
      u.keyword('ProxyJump'),
      $._sep,
      u.argument($._proxy_jump_arg)
    ),

    _proxy_jump_arg: $ => choice(
      'none',
      seq(
        optional(seq(
          field('user', alias(/\S+/, $.string)),
          '@'
        )),
        field('host', alias(/S+/, $.string)),
        optional(seq(
          ':',
          field('port', $.number)
        ))
      ),
      field('uri', alias(/ssh:\/\/\S+/, $.uri))
    ),

    _proxy_use_fdpass: $ => seq(
      u.keyword('ProxyUseFdpass'),
      $._sep,
      u.argument($._boolean)
    ),

    _pubkey_accepted_algorithms: $ => seq(
      choice(
        u.keyword('PubkeyAcceptedAlgorithms'),
        u.keyword('PubkeyAcceptedKeyTypes')
      ),
      $._sep,
      u.algorithms('+-^', $.key_sig)
    ),

    _pubkey_authentication: $ => seq(
      u.keyword('PubkeyAuthentication'),
      $._sep,
      u.argument($._pubkey_authentication_arg)
    ),

    _pubkey_authentication_arg: $ => choice(
      $._boolean,
      'unbound',
      'host-bound'
    ),

    _rekey_limit: $ => prec.right(seq(
      u.keyword('RekeyLimit'),
      $._sep,
      choice(
        u.argument('none'),
        u.argument($.bytes),
        seq(
          u.argument($.bytes),
          $._space,
          u.argument($.time)
        )
      )
    )),

    _remote_command: $ => seq(
      u.keyword('RemoteCommand'),
      $._sep,
      u.argument(alias(
        u.token(/[^\r\n]/, $._file_token, $.variable),
        $.string
      ))
    ),

    _remote_forward: $ => prec.right(seq(
      u.keyword('RemoteForward'),
      $._sep,
      u.argument($._forward_value1),
      optional(seq(
        $._space,
        u.argument($._forward_value2)
      ))
    )),

    _request_tty: $ => seq(
      u.keyword('RequestTTY'),
      $._sep,
      u.argument($._request_tty_arg)
    ),

    _request_tty_arg: $ => choice(
      $._boolean,
      'force',
      'auto'
    ),

    _required_rsa_size: $ => seq(
      u.keyword('RequiredRSASize'),
      $._sep,
      u.argument($.number)
    ),

    _revoked_host_keys: $ => seq(
      u.keyword('RevokedHostKeys'),
      $._sep,
      u.argument($._file_string)
    ),

    _security_key_provider: $ => seq(
      u.keyword('SecurityKeyProvider'),
      $._sep,
      u.argument($._security_key_provider_arg)
    ),

    _security_key_provider_arg: $ => choice(
      $._string,
      $._var_value
    ),

    _send_env: $ => seq(
      u.keyword('SendEnv'),
      $._sep,
      u.list($._space, u.argument($._send_env_value))
    ),

    _send_env_value: $ => seq(
      optional('-'),
      alias(
        u.pattern(/[a-zA-Z0-9_]/),
        $.variable
      )
    ),

    _server_alive_count_max: $ => seq(
      u.keyword('ServerAliveCountMax'),
      $._sep,
      u.argument($.number)
    ),

    _server_alive_interval: $ => seq(
      u.keyword('ServerAliveInterval'),
      $._sep,
      u.argument($.number)
    ),

    _session_type: $ => seq(
      u.keyword('SessionType'),
      $._sep,
      u.argument(choice(
        'none', 'subsystem', 'default'
      ))
    ),

    _set_env: $ => seq(
      u.keyword('SessionType'),
      $._sep,
      u.list($._space, u.argument($._set_env_value))
    ),

    _set_env_value: $ => seq(
      alias($._var_name, $.variable),
      '=',
      $._string
    ),

    _stdin_null: $ => seq(
      u.keyword('StdinNull'),
      $._sep,
      u.argument($._boolean)
    ),

    _stream_local_bind_mask: $ => seq(
      u.keyword('StreamLocalBindMask'),
      $._sep,
      u.argument(alias(/0?[0-7]{3}/, $.number))
    ),

    _stream_local_bind_unlink: $ => seq(
      u.keyword('StreamLocalBindUnlink'),
      $._sep,
      u.argument($._boolean)
    ),

    _strict_host_key_checking: $ => seq(
      u.keyword('StrictHostKeyChecking'),
      $._sep,
      u.argument($._strict_host_key_checking_arg)
    ),

    _strict_host_key_checking_arg: $ => choice(
      $._boolean,
      'accept-new',
      'off',
      'ask'
    ),

    _syslog_facility: $ => seq(
      u.keyword('SyslogFacility'),
      $._sep,
      u.argument($.facility)
    ),

    _tcp_keep_alive: $ => seq(
      u.keyword('TCPKeepAlive'),
      $._sep,
      u.argument($._boolean)
    ),

    _tag: $ => seq(
      u.keyword('Tag'),
      $._sep,
      u.argument($._string)
    ),

    _tunnel: $ => seq(
      u.keyword('Tunnel'),
      $._sep,
      u.argument($._tunnel_arg)
    ),

    _tunnel_arg: $ => choice(
      $._boolean,
      'point-to-point',
      'ethernet'
    ),

    _tunnel_device: $ => seq(
      u.keyword('TunnelDevice'),
      $._sep,
      u.argument($._tunnel_device_arg)
    ),

    _tunnel_device_arg: $ => seq(
      field('local_tun', choice('any', $.number)),
      optional(seq(
        ':',
        field('remote_tun', choice('any', $.number))
      ))
    ),

    _update_host_keys: $ => seq(
      u.keyword('UpdateHostKeys'),
      $._sep,
      u.argument(choice($._boolean, 'ask'))
    ),

    _use_keychain: $ => seq(
      u.keyword('UseKeychain'),
      $._sep,
      $._boolean
    ),

    _user: $ => seq(
      u.keyword('User'),
      $._sep,
      u.argument($._string)
    ),

    _user_known_hosts_file: $ => seq(
      u.keyword('UserKnownHostsFile'),
      $._sep,
      u.list($._space, u.argument(
        choice('none', $._file_string)
      ))
    ),

    _verify_host_key_dns: $ => seq(
      u.keyword('VerifyHostKeyDNS'),
      $._sep,
      u.argument(choice($._boolean, 'ask'))
    ),

    _visual_host_key: $ => seq(
      u.keyword('VisualHostKey'),
      $._sep,
      u.argument($._boolean)
    ),

    _xauth_location: $ => seq(
      u.keyword('XAuthLocation'),
      $._sep,
      u.argument($._string)
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

    facility: _ => token(choice(
      'DAEMON', 'USER', 'AUTH',
      'LOCAL0', 'LOCAL1', 'LOCAL2', 'LOCAL3',
      'LOCAL4', 'LOCAL5', 'LOCAL6', 'LOCAL7'
    )),

    authentication: _ => token(choice(
      'gssapi-with-mic', 'hostbased', 'publickey',
      'keyboard-interactive', 'password'
    )),

    cipher: _ => u.query('cipher'),

    kex: _ => u.query('kex'),

    key_sig: _ => u.query('key-sig'),

    mac: _ => u.query('mac'),

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

    _file_string: $ => choice(
      alias(u.token(/\S/, $._file_token, $.variable), $.string),
      seq('"', alias(u.token(/[^"]/, $._file_token, $.variable), $.string), '"'),
    ),

    _hosts_string: $ => alias(
      u.token(/[^\r\n]/, $._hosts_token, $.variable),
      $.string
    ),

    _hostname_string: $ => choice(
      alias(u.token(/\S/, $._hostname_token), $.string),
      seq('"', alias(u.token(/[^"]/, $._hostname_token), $.string), '"')
    ),

    _proxy_string: $ => alias(
      u.token(/[^\r\n]/, $._proxy_token),
      $.string
    ),

    _token_string: $ => alias(
      u.token(/[^\r\n]/, $.token),
      $.string
    ),

    _string: $ => choice(
      alias(repeat1(/\S/), $.string),
      seq('"', alias(repeat1(/[^"]/), $.string), '"')
    ),

    _file_pattern: $ => choice(
      alias(u.pattern(/\S/, $._file_token), $.pattern),
      seq('"', alias(u.pattern(/[^"]/, $._file_token), $.pattern), '"'),
    ),

    _file_pattern_vars: $ => choice(
      alias(u.pattern(/\S/, $.variable, $._file_token), $.pattern),
      seq('"', alias(u.pattern(/[^"]/, $.variable, $._file_token), $.pattern), '"')
    ),

    _pattern: $ => choice(
      alias(u.pattern(/\S/), $.pattern),
      seq('"', alias(u.pattern(/[^"]/), $.pattern), '"')
    ),

    _boolean: _ => choice('yes', 'no'),

    _number: _ => /[1-9][0-9]*|0/,

    number: $ => prec(1, $._number),

    bytes: $ => seq(
      $._number,
      optional(/[kmgKMG]/)
    ),

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
