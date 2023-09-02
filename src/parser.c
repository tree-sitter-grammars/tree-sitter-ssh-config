#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 715
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 327
#define ALIAS_COUNT 0
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 57

enum {
  aux_sym_host_declaration_token1 = 1,
  anon_sym_BANG = 2,
  aux_sym__add_keys_to_agent_token1 = 3,
  anon_sym_ask = 4,
  anon_sym_confirm = 5,
  aux_sym__address_family_token1 = 6,
  anon_sym_inet = 7,
  anon_sym_inet6 = 8,
  aux_sym__batch_mode_token1 = 9,
  aux_sym__bind_address_token1 = 10,
  aux_sym__bind_interface_token1 = 11,
  aux_sym__canonical_domains_token1 = 12,
  aux_sym__canonicalize_fallback_local_token1 = 13,
  aux_sym__canonicalize_hostname_token1 = 14,
  aux_sym__canonicalize_max_dots_token1 = 15,
  aux_sym__canonicalize_permitted_cnames_token1 = 16,
  anon_sym_none = 17,
  anon_sym_COMMA = 18,
  anon_sym_COLON = 19,
  aux_sym__ca_signature_algorithms_token1 = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  aux_sym__certificate_file_token1 = 23,
  aux_sym__check_host_ip_token1 = 24,
  aux_sym__ciphers_token1 = 25,
  anon_sym_CARET = 26,
  aux_sym__clear_all_forwardings_token1 = 27,
  aux_sym__compression_token1 = 28,
  aux_sym__connection_attempts_token1 = 29,
  aux_sym__connect_timeout_token1 = 30,
  aux_sym__control_master_token1 = 31,
  anon_sym_auto = 32,
  anon_sym_autoask = 33,
  aux_sym__control_persist_token1 = 34,
  aux_sym__control_path_token1 = 35,
  anon_sym_STAR = 36,
  aux_sym__enable_escape_command_line_token1 = 37,
  aux_sym__enable_ssh_keysign_token1 = 38,
  aux_sym__escape_char_token1 = 39,
  aux_sym__escape_char_token2 = 40,
  aux_sym__exit_on_forward_failure_token1 = 41,
  aux_sym__fingerprint_hash_token1 = 42,
  anon_sym_md5 = 43,
  anon_sym_sha256 = 44,
  aux_sym__fork_after_authentication_token1 = 45,
  aux_sym__forward_agent_token1 = 46,
  aux_sym__forward_x11_token1 = 47,
  aux_sym__forward_x11_timeout_token1 = 48,
  aux_sym__forward_x11_trusted_token1 = 49,
  aux_sym__global_known_hosts_file_token1 = 50,
  aux_sym__gssapi_authentication_token1 = 51,
  aux_sym__gssapi_delegate_credentials_token1 = 52,
  aux_sym__hostbased_accepted_algorithms_token1 = 53,
  aux_sym__hostbased_accepted_algorithms_token2 = 54,
  aux_sym__hostbased_authentication_token1 = 55,
  aux_sym__host_key_algorithms_token1 = 56,
  aux_sym__host_key_alias_token1 = 57,
  aux_sym__hostname_token1 = 58,
  aux_sym__identities_only_token1 = 59,
  aux_sym__identity_agent_token1 = 60,
  anon_sym_SSH_AUTH_SOCK = 61,
  aux_sym__identity_file_token1 = 62,
  aux_sym__ignore_unknown_token1 = 63,
  aux_sym__ipqos_token1 = 64,
  aux_sym__kbd_interactive_authentication_token1 = 65,
  aux_sym__kbd_interactive_authentication_token2 = 66,
  aux_sym__kex_algorithms_token1 = 67,
  aux_sym__known_hosts_command_token1 = 68,
  aux_sym__local_command_token1 = 69,
  aux_sym__local_forward_token1 = 70,
  aux_sym__log_level_token1 = 71,
  aux_sym__log_verbose_token1 = 72,
  anon_sym_DQUOTE = 73,
  anon_sym_QMARK = 74,
  aux_sym__log_verbose_value_token1 = 75,
  aux_sym__log_verbose_quoted_token1 = 76,
  aux_sym__macs_token1 = 77,
  aux_sym__no_host_authentication_for_localhost_token1 = 78,
  aux_sym__number_of_password_prompts_token1 = 79,
  aux_sym__password_authentication_token1 = 80,
  aux_sym__permit_local_command_token1 = 81,
  aux_sym__permit_remote_open_token1 = 82,
  anon_sym_any = 83,
  aux_sym__permit_remote_open_value_token1 = 84,
  aux_sym__permit_remote_open_value_token2 = 85,
  aux_sym__pkcs11_provider_token1 = 86,
  aux_sym__port_token1 = 87,
  aux_sym__preferred_authentications_token1 = 88,
  aux_sym__proxy_command_token1 = 89,
  aux_sym__proxy_jump_token1 = 90,
  anon_sym_AT = 91,
  aux_sym__proxy_jump_arg_token1 = 92,
  aux_sym__proxy_use_fdpass_token1 = 93,
  aux_sym__pubkey_accepted_algorithms_token1 = 94,
  aux_sym__pubkey_authentication_token1 = 95,
  anon_sym_unbound = 96,
  anon_sym_host_DASHbound = 97,
  aux_sym__rekey_limit_token1 = 98,
  aux_sym__remote_command_token1 = 99,
  aux_sym__remote_forward_token1 = 100,
  aux_sym__request_tty_token1 = 101,
  anon_sym_force = 102,
  aux_sym__required_rsa_size_token1 = 103,
  aux_sym__revoked_host_keys_token1 = 104,
  aux_sym__security_key_provider_token1 = 105,
  aux_sym__send_env_token1 = 106,
  aux_sym__send_env_value_token1 = 107,
  aux_sym__server_alive_count_max_token1 = 108,
  aux_sym__server_alive_interval_token1 = 109,
  aux_sym__session_type_token1 = 110,
  anon_sym_subsystem = 111,
  anon_sym_default = 112,
  anon_sym_EQ = 113,
  aux_sym__stdin_null_token1 = 114,
  aux_sym__stream_local_bind_mask_token1 = 115,
  aux_sym__stream_local_bind_mask_token2 = 116,
  aux_sym__stream_local_bind_unlink_token1 = 117,
  aux_sym__strict_host_key_checking_token1 = 118,
  anon_sym_accept_DASHnew = 119,
  anon_sym_off = 120,
  aux_sym__tcp_keep_alive_token1 = 121,
  aux_sym__tag_token1 = 122,
  aux_sym__tunnel_token1 = 123,
  anon_sym_point_DASHto_DASHpoint = 124,
  anon_sym_ethernet = 125,
  aux_sym__tunnel_device_token1 = 126,
  aux_sym__update_host_keys_token1 = 127,
  aux_sym__user_token1 = 128,
  aux_sym__user_known_hosts_file_token1 = 129,
  aux_sym__verify_host_key_dns_token1 = 130,
  aux_sym__visual_host_key_token1 = 131,
  aux_sym__xauth_location_token1 = 132,
  sym_ipqos = 133,
  sym_verbosity = 134,
  sym_authentication = 135,
  sym_cipher = 136,
  sym_kex = 137,
  sym_key_sig = 138,
  sym_mac = 139,
  sym_protocol_version = 140,
  sym_sig = 141,
  aux_sym__file_token_token1 = 142,
  aux_sym__hosts_token_token1 = 143,
  aux_sym__hostname_token_token1 = 144,
  aux_sym__proxy_token_token1 = 145,
  sym_token = 146,
  anon_sym_DOLLAR = 147,
  sym__var_name = 148,
  anon_sym_DOLLAR_LBRACE = 149,
  anon_sym_RBRACE = 150,
  aux_sym__file_string_token1 = 151,
  anon_sym_yes = 152,
  anon_sym_no = 153,
  sym__number = 154,
  aux_sym_bytes_token1 = 155,
  aux_sym_time_token1 = 156,
  aux_sym_time_token2 = 157,
  aux_sym_time_token3 = 158,
  aux_sym_time_token4 = 159,
  aux_sym_time_token5 = 160,
  sym_comment = 161,
  aux_sym__sep_token1 = 162,
  sym__space = 163,
  sym__eol = 164,
  sym_config = 165,
  sym_host_declaration = 166,
  sym__declarations = 167,
  sym_parameter = 168,
  sym__add_keys_to_agent = 169,
  sym__address_family = 170,
  sym__batch_mode = 171,
  sym__bind_address = 172,
  sym__bind_interface = 173,
  sym__canonical_domains = 174,
  sym__canonicalize_fallback_local = 175,
  sym__canonicalize_hostname = 176,
  sym__canonicalize_max_dots = 177,
  sym__canonicalize_permitted_cnames = 178,
  sym__cnames_map = 179,
  sym__ca_signature_algorithms = 180,
  sym__certificate_file = 181,
  sym__check_host_ip = 182,
  sym__ciphers = 183,
  sym__clear_all_forwardings = 184,
  sym__compression = 185,
  sym__connection_attempts = 186,
  sym__connect_timeout = 187,
  sym__control_master = 188,
  sym__control_persist = 189,
  sym__control_path = 190,
  sym__enable_escape_command_line = 191,
  sym__enable_ssh_keysign = 192,
  sym__escape_char = 193,
  sym__exit_on_forward_failure = 194,
  sym__fingerprint_hash = 195,
  sym__fork_after_authentication = 196,
  sym__forward_agent = 197,
  sym__forward_x11 = 198,
  sym__forward_x11_timeout = 199,
  sym__forward_x11_trusted = 200,
  sym__global_known_hosts_file = 201,
  sym__gssapi_authentication = 202,
  sym__gssapi_delegate_credentials = 203,
  sym__hostbased_accepted_algorithms = 204,
  sym__hostbased_authentication = 205,
  sym__host_key_algorithms = 206,
  sym__host_key_alias = 207,
  sym__hostname = 208,
  sym__identities_only = 209,
  sym__identity_agent = 210,
  sym__identity_file = 211,
  sym__ignore_unknown = 212,
  sym__ipqos = 213,
  sym__kbd_interactive_authentication = 214,
  sym__kex_algorithms = 215,
  sym__known_hosts_command = 216,
  sym__local_command = 217,
  sym__local_forward = 218,
  sym__forward_value1 = 219,
  sym__forward_value2 = 220,
  sym__log_level = 221,
  sym__log_verbose = 222,
  sym__log_verbose_value = 223,
  sym__log_verbose_quoted = 224,
  sym__macs = 225,
  sym__no_host_authentication_for_localhost = 226,
  sym__number_of_password_prompts = 227,
  sym__password_authentication = 228,
  sym__permit_local_command = 229,
  sym__permit_remote_open = 230,
  sym__permit_remote_open_value = 231,
  sym__pkcs11_provider = 232,
  sym__port = 233,
  sym__preferred_authentications = 234,
  sym__proxy_command = 235,
  sym__proxy_jump = 236,
  sym__proxy_use_fdpass = 237,
  sym__pubkey_accepted_algorithms = 238,
  sym__pubkey_authentication = 239,
  sym__pubkey_authentication_arg = 240,
  sym__rekey_limit = 241,
  sym__remote_command = 242,
  sym__remote_forward = 243,
  sym__request_tty = 244,
  sym__required_rsa_size = 245,
  sym__revoked_host_keys = 246,
  sym__security_key_provider = 247,
  sym__send_env = 248,
  sym__send_env_value = 249,
  sym__server_alive_count_max = 250,
  sym__server_alive_interval = 251,
  sym__session_type = 252,
  sym__set_env = 253,
  sym__set_env_value = 254,
  sym__stdin_null = 255,
  sym__stream_local_bind_mask = 256,
  sym__stream_local_bind_unlink = 257,
  sym__strict_host_key_checking = 258,
  sym__tcp_keep_alive = 259,
  sym__tag = 260,
  sym__tunnel = 261,
  sym__tunnel_device = 262,
  sym__update_host_keys = 263,
  sym__user = 264,
  sym__user_known_hosts_file = 265,
  sym__verify_host_key_dns = 266,
  sym__visual_host_key = 267,
  sym__xauth_location = 268,
  sym__file_token = 269,
  sym__hosts_token = 270,
  sym__hostname_token = 271,
  sym__proxy_token = 272,
  sym__var_value = 273,
  sym_variable = 274,
  sym__file_string = 275,
  sym__hosts_string = 276,
  sym__hostname_string = 277,
  aux_sym__proxy_string_content = 278,
  sym__proxy_string = 279,
  sym__token_string = 280,
  sym_string = 281,
  sym__file_pattern_vars = 282,
  sym_pattern = 283,
  sym__boolean = 284,
  sym_number = 285,
  sym_bytes = 286,
  sym_time = 287,
  sym__sep = 288,
  aux_sym_config_repeat1 = 289,
  aux_sym_host_declaration_repeat1 = 290,
  aux_sym__declarations_repeat1 = 291,
  aux_sym__canonical_domains_repeat1 = 292,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 293,
  aux_sym__cnames_map_repeat1 = 294,
  aux_sym__ca_signature_algorithms_repeat1 = 295,
  aux_sym__ciphers_repeat1 = 296,
  aux_sym__global_known_hosts_file_repeat1 = 297,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 298,
  aux_sym__ignore_unknown_repeat1 = 299,
  aux_sym__kex_algorithms_repeat1 = 300,
  aux_sym__local_command_repeat1 = 301,
  aux_sym__log_verbose_repeat1 = 302,
  aux_sym__log_verbose_repeat2 = 303,
  aux_sym__log_verbose_value_repeat1 = 304,
  aux_sym__log_verbose_quoted_repeat1 = 305,
  aux_sym__macs_repeat1 = 306,
  aux_sym__permit_remote_open_repeat1 = 307,
  aux_sym__preferred_authentications_repeat1 = 308,
  aux_sym__proxy_command_arg_repeat1 = 309,
  aux_sym__remote_command_repeat1 = 310,
  aux_sym__send_env_repeat1 = 311,
  aux_sym__send_env_value_repeat1 = 312,
  aux_sym__set_env_repeat1 = 313,
  aux_sym__user_known_hosts_file_repeat1 = 314,
  aux_sym__file_string_repeat1 = 315,
  aux_sym__file_string_repeat2 = 316,
  aux_sym__hosts_string_repeat1 = 317,
  aux_sym__hosts_string_repeat2 = 318,
  aux_sym__hostname_string_repeat1 = 319,
  aux_sym__hostname_string_repeat2 = 320,
  aux_sym__proxy_string_repeat1 = 321,
  aux_sym__token_string_repeat1 = 322,
  aux_sym__token_string_repeat2 = 323,
  aux_sym__file_pattern_vars_repeat1 = 324,
  aux_sym__file_pattern_vars_repeat2 = 325,
  aux_sym_pattern_repeat1 = 326,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_host_declaration_token1] = "Host",
  [anon_sym_BANG] = "!",
  [aux_sym__add_keys_to_agent_token1] = "AddKeysToAgent",
  [anon_sym_ask] = "ask",
  [anon_sym_confirm] = "confirm",
  [aux_sym__address_family_token1] = "AddressFamily",
  [anon_sym_inet] = "inet",
  [anon_sym_inet6] = "inet6",
  [aux_sym__batch_mode_token1] = "BatchMode",
  [aux_sym__bind_address_token1] = "BindAddress",
  [aux_sym__bind_interface_token1] = "BindInterface",
  [aux_sym__canonical_domains_token1] = "CanonicalDomains",
  [aux_sym__canonicalize_fallback_local_token1] = "CanonicalizeFallbackLocal",
  [aux_sym__canonicalize_hostname_token1] = "CanonicalizeHostname",
  [aux_sym__canonicalize_max_dots_token1] = "CanonicalizeMaxDots",
  [aux_sym__canonicalize_permitted_cnames_token1] = "CanonicalizePermittedCNAMEs",
  [anon_sym_none] = "none",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [aux_sym__ca_signature_algorithms_token1] = "CASignatureAlgorithms",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym__certificate_file_token1] = "CertificateFile",
  [aux_sym__check_host_ip_token1] = "CheckHostIP",
  [aux_sym__ciphers_token1] = "Ciphers",
  [anon_sym_CARET] = "^",
  [aux_sym__clear_all_forwardings_token1] = "ClearAllForwardings",
  [aux_sym__compression_token1] = "Compression",
  [aux_sym__connection_attempts_token1] = "ConnectionAttempts",
  [aux_sym__connect_timeout_token1] = "ConnectTimeout",
  [aux_sym__control_master_token1] = "ControlMaster",
  [anon_sym_auto] = "auto",
  [anon_sym_autoask] = "autoask",
  [aux_sym__control_persist_token1] = "ControlPersist",
  [aux_sym__control_path_token1] = "ControlPath",
  [anon_sym_STAR] = "*",
  [aux_sym__enable_escape_command_line_token1] = "EnableEscapeCommandline",
  [aux_sym__enable_ssh_keysign_token1] = "EnableSSHKeysign",
  [aux_sym__escape_char_token1] = "EscapeChar",
  [aux_sym__escape_char_token2] = "_escape_char_token2",
  [aux_sym__exit_on_forward_failure_token1] = "ExitOnForwardFailure",
  [aux_sym__fingerprint_hash_token1] = "FingerprintHash",
  [anon_sym_md5] = "md5",
  [anon_sym_sha256] = "sha256",
  [aux_sym__fork_after_authentication_token1] = "ForkAfterAuthentication",
  [aux_sym__forward_agent_token1] = "ForwardAgent",
  [aux_sym__forward_x11_token1] = "ForwardX11",
  [aux_sym__forward_x11_timeout_token1] = "ForwardX11Timeout",
  [aux_sym__forward_x11_trusted_token1] = "ForwardX11Trusted",
  [aux_sym__global_known_hosts_file_token1] = "GlobalKnownHostsFile",
  [aux_sym__gssapi_authentication_token1] = "GSSAPIAuthentication",
  [aux_sym__gssapi_delegate_credentials_token1] = "GSSAPIDelegateCredentials",
  [aux_sym__hostbased_accepted_algorithms_token1] = "HostbasedAcceptedAlgorithms",
  [aux_sym__hostbased_accepted_algorithms_token2] = "HostbasedKeyTypes",
  [aux_sym__hostbased_authentication_token1] = "HostbasedAuthentication",
  [aux_sym__host_key_algorithms_token1] = "HostKeyAlgorithms",
  [aux_sym__host_key_alias_token1] = "HostKeyAlias",
  [aux_sym__hostname_token1] = "Hostname",
  [aux_sym__identities_only_token1] = "IdentitiesOnly",
  [aux_sym__identity_agent_token1] = "IdentityAgent",
  [anon_sym_SSH_AUTH_SOCK] = "SSH_AUTH_SOCK",
  [aux_sym__identity_file_token1] = "IdentityFile",
  [aux_sym__ignore_unknown_token1] = "IgnoreUnknown",
  [aux_sym__ipqos_token1] = "IPQoS",
  [aux_sym__kbd_interactive_authentication_token1] = "KbdInteractiveAuthentication",
  [aux_sym__kbd_interactive_authentication_token2] = "ChallengeResponseAuthentication",
  [aux_sym__kex_algorithms_token1] = "KexAlgorithms",
  [aux_sym__known_hosts_command_token1] = "KnownHostsCommand",
  [aux_sym__local_command_token1] = "LocalCommand",
  [aux_sym__local_forward_token1] = "LocalForward",
  [aux_sym__log_level_token1] = "LogLevel",
  [aux_sym__log_verbose_token1] = "LogVerbose",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_QMARK] = "\?",
  [aux_sym__log_verbose_value_token1] = "_log_verbose_value_token1",
  [aux_sym__log_verbose_quoted_token1] = "_log_verbose_quoted_token1",
  [aux_sym__macs_token1] = "MACs",
  [aux_sym__no_host_authentication_for_localhost_token1] = "NoHostAuthenticationForLocalhost",
  [aux_sym__number_of_password_prompts_token1] = "NumberOfPasswordPrompts",
  [aux_sym__password_authentication_token1] = "PasswordAuthentication",
  [aux_sym__permit_local_command_token1] = "PermitLocalCommand",
  [aux_sym__permit_remote_open_token1] = "PermitRemoteOpen",
  [anon_sym_any] = "any",
  [aux_sym__permit_remote_open_value_token1] = "_permit_remote_open_value_token1",
  [aux_sym__permit_remote_open_value_token2] = "_permit_remote_open_value_token2",
  [aux_sym__pkcs11_provider_token1] = "PKCS11Provider",
  [aux_sym__port_token1] = "Port",
  [aux_sym__preferred_authentications_token1] = "PreferredAuthentications",
  [aux_sym__proxy_command_token1] = "ProxyCommand",
  [aux_sym__proxy_jump_token1] = "ProxyJump",
  [anon_sym_AT] = "@",
  [aux_sym__proxy_jump_arg_token1] = "string",
  [aux_sym__proxy_use_fdpass_token1] = "ProxyUseFdpass",
  [aux_sym__pubkey_accepted_algorithms_token1] = "PubkeyAcceptedAlgorithms",
  [aux_sym__pubkey_authentication_token1] = "PubkeyAuthentication",
  [anon_sym_unbound] = "unbound",
  [anon_sym_host_DASHbound] = "host-bound",
  [aux_sym__rekey_limit_token1] = "RekeyLimit",
  [aux_sym__remote_command_token1] = "RemoteCommand",
  [aux_sym__remote_forward_token1] = "RemoteForward",
  [aux_sym__request_tty_token1] = "RequestTTY",
  [anon_sym_force] = "force",
  [aux_sym__required_rsa_size_token1] = "RequiredRSASize",
  [aux_sym__revoked_host_keys_token1] = "RevokedHostKeys",
  [aux_sym__security_key_provider_token1] = "SecurityKeyProvider",
  [aux_sym__send_env_token1] = "SendEnv",
  [aux_sym__send_env_value_token1] = "_send_env_value_token1",
  [aux_sym__server_alive_count_max_token1] = "ServerAliveCountMax",
  [aux_sym__server_alive_interval_token1] = "ServerAliveInterval",
  [aux_sym__session_type_token1] = "SessionType",
  [anon_sym_subsystem] = "subsystem",
  [anon_sym_default] = "default",
  [anon_sym_EQ] = "=",
  [aux_sym__stdin_null_token1] = "StdinNull",
  [aux_sym__stream_local_bind_mask_token1] = "StreamLocalBindMask",
  [aux_sym__stream_local_bind_mask_token2] = "number",
  [aux_sym__stream_local_bind_unlink_token1] = "StreamLocalBindUnlink",
  [aux_sym__strict_host_key_checking_token1] = "StrictHostKeyChecking",
  [anon_sym_accept_DASHnew] = "accept-new",
  [anon_sym_off] = "off",
  [aux_sym__tcp_keep_alive_token1] = "TCPKeepAlive",
  [aux_sym__tag_token1] = "Tag",
  [aux_sym__tunnel_token1] = "Tunnel",
  [anon_sym_point_DASHto_DASHpoint] = "point-to-point",
  [anon_sym_ethernet] = "ethernet",
  [aux_sym__tunnel_device_token1] = "TunnelDevice",
  [aux_sym__update_host_keys_token1] = "UpdateHostKeys",
  [aux_sym__user_token1] = "User",
  [aux_sym__user_known_hosts_file_token1] = "UserKnownHostsFile",
  [aux_sym__verify_host_key_dns_token1] = "VerifyHostKeyDNS",
  [aux_sym__visual_host_key_token1] = "VisualHostKey",
  [aux_sym__xauth_location_token1] = "XAuthLocation",
  [sym_ipqos] = "ipqos",
  [sym_verbosity] = "verbosity",
  [sym_authentication] = "authentication",
  [sym_cipher] = "cipher",
  [sym_kex] = "kex",
  [sym_key_sig] = "key_sig",
  [sym_mac] = "mac",
  [sym_protocol_version] = "protocol_version",
  [sym_sig] = "sig",
  [aux_sym__file_token_token1] = "token",
  [aux_sym__hosts_token_token1] = "token",
  [aux_sym__hostname_token_token1] = "token",
  [aux_sym__proxy_token_token1] = "token",
  [sym_token] = "token",
  [anon_sym_DOLLAR] = "variable",
  [sym__var_name] = "_var_name",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym__file_string_token1] = "_file_string_token1",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym__number] = "_number",
  [aux_sym_bytes_token1] = "bytes_token1",
  [aux_sym_time_token1] = "time_token1",
  [aux_sym_time_token2] = "time_token2",
  [aux_sym_time_token3] = "time_token3",
  [aux_sym_time_token4] = "time_token4",
  [aux_sym_time_token5] = "time_token5",
  [sym_comment] = "comment",
  [aux_sym__sep_token1] = "=",
  [sym__space] = "_space",
  [sym__eol] = "_eol",
  [sym_config] = "config",
  [sym_host_declaration] = "host_declaration",
  [sym__declarations] = "_declarations",
  [sym_parameter] = "parameter",
  [sym__add_keys_to_agent] = "_add_keys_to_agent",
  [sym__address_family] = "_address_family",
  [sym__batch_mode] = "_batch_mode",
  [sym__bind_address] = "_bind_address",
  [sym__bind_interface] = "_bind_interface",
  [sym__canonical_domains] = "_canonical_domains",
  [sym__canonicalize_fallback_local] = "_canonicalize_fallback_local",
  [sym__canonicalize_hostname] = "_canonicalize_hostname",
  [sym__canonicalize_max_dots] = "_canonicalize_max_dots",
  [sym__canonicalize_permitted_cnames] = "_canonicalize_permitted_cnames",
  [sym__cnames_map] = "_cnames_map",
  [sym__ca_signature_algorithms] = "_ca_signature_algorithms",
  [sym__certificate_file] = "_certificate_file",
  [sym__check_host_ip] = "_check_host_ip",
  [sym__ciphers] = "_ciphers",
  [sym__clear_all_forwardings] = "_clear_all_forwardings",
  [sym__compression] = "_compression",
  [sym__connection_attempts] = "_connection_attempts",
  [sym__connect_timeout] = "_connect_timeout",
  [sym__control_master] = "_control_master",
  [sym__control_persist] = "_control_persist",
  [sym__control_path] = "_control_path",
  [sym__enable_escape_command_line] = "_enable_escape_command_line",
  [sym__enable_ssh_keysign] = "_enable_ssh_keysign",
  [sym__escape_char] = "_escape_char",
  [sym__exit_on_forward_failure] = "_exit_on_forward_failure",
  [sym__fingerprint_hash] = "_fingerprint_hash",
  [sym__fork_after_authentication] = "_fork_after_authentication",
  [sym__forward_agent] = "_forward_agent",
  [sym__forward_x11] = "_forward_x11",
  [sym__forward_x11_timeout] = "_forward_x11_timeout",
  [sym__forward_x11_trusted] = "_forward_x11_trusted",
  [sym__global_known_hosts_file] = "_global_known_hosts_file",
  [sym__gssapi_authentication] = "_gssapi_authentication",
  [sym__gssapi_delegate_credentials] = "_gssapi_delegate_credentials",
  [sym__hostbased_accepted_algorithms] = "_hostbased_accepted_algorithms",
  [sym__hostbased_authentication] = "_hostbased_authentication",
  [sym__host_key_algorithms] = "_host_key_algorithms",
  [sym__host_key_alias] = "_host_key_alias",
  [sym__hostname] = "_hostname",
  [sym__identities_only] = "_identities_only",
  [sym__identity_agent] = "_identity_agent",
  [sym__identity_file] = "_identity_file",
  [sym__ignore_unknown] = "_ignore_unknown",
  [sym__ipqos] = "_ipqos",
  [sym__kbd_interactive_authentication] = "_kbd_interactive_authentication",
  [sym__kex_algorithms] = "_kex_algorithms",
  [sym__known_hosts_command] = "_known_hosts_command",
  [sym__local_command] = "_local_command",
  [sym__local_forward] = "_local_forward",
  [sym__forward_value1] = "_forward_value1",
  [sym__forward_value2] = "_forward_value2",
  [sym__log_level] = "_log_level",
  [sym__log_verbose] = "_log_verbose",
  [sym__log_verbose_value] = "_log_verbose_value",
  [sym__log_verbose_quoted] = "_log_verbose_quoted",
  [sym__macs] = "_macs",
  [sym__no_host_authentication_for_localhost] = "_no_host_authentication_for_localhost",
  [sym__number_of_password_prompts] = "_number_of_password_prompts",
  [sym__password_authentication] = "_password_authentication",
  [sym__permit_local_command] = "_permit_local_command",
  [sym__permit_remote_open] = "_permit_remote_open",
  [sym__permit_remote_open_value] = "_permit_remote_open_value",
  [sym__pkcs11_provider] = "_pkcs11_provider",
  [sym__port] = "_port",
  [sym__preferred_authentications] = "_preferred_authentications",
  [sym__proxy_command] = "_proxy_command",
  [sym__proxy_jump] = "_proxy_jump",
  [sym__proxy_use_fdpass] = "_proxy_use_fdpass",
  [sym__pubkey_accepted_algorithms] = "_pubkey_accepted_algorithms",
  [sym__pubkey_authentication] = "_pubkey_authentication",
  [sym__pubkey_authentication_arg] = "_pubkey_authentication_arg",
  [sym__rekey_limit] = "_rekey_limit",
  [sym__remote_command] = "_remote_command",
  [sym__remote_forward] = "_remote_forward",
  [sym__request_tty] = "_request_tty",
  [sym__required_rsa_size] = "_required_rsa_size",
  [sym__revoked_host_keys] = "_revoked_host_keys",
  [sym__security_key_provider] = "_security_key_provider",
  [sym__send_env] = "_send_env",
  [sym__send_env_value] = "_send_env_value",
  [sym__server_alive_count_max] = "_server_alive_count_max",
  [sym__server_alive_interval] = "_server_alive_interval",
  [sym__session_type] = "_session_type",
  [sym__set_env] = "_set_env",
  [sym__set_env_value] = "_set_env_value",
  [sym__stdin_null] = "_stdin_null",
  [sym__stream_local_bind_mask] = "_stream_local_bind_mask",
  [sym__stream_local_bind_unlink] = "_stream_local_bind_unlink",
  [sym__strict_host_key_checking] = "_strict_host_key_checking",
  [sym__tcp_keep_alive] = "_tcp_keep_alive",
  [sym__tag] = "_tag",
  [sym__tunnel] = "_tunnel",
  [sym__tunnel_device] = "_tunnel_device",
  [sym__update_host_keys] = "_update_host_keys",
  [sym__user] = "_user",
  [sym__user_known_hosts_file] = "_user_known_hosts_file",
  [sym__verify_host_key_dns] = "_verify_host_key_dns",
  [sym__visual_host_key] = "_visual_host_key",
  [sym__xauth_location] = "_xauth_location",
  [sym__file_token] = "_file_token",
  [sym__hosts_token] = "_hosts_token",
  [sym__hostname_token] = "_hostname_token",
  [sym__proxy_token] = "_proxy_token",
  [sym__var_value] = "_var_value",
  [sym_variable] = "variable",
  [sym__file_string] = "_file_string",
  [sym__hosts_string] = "_hosts_string",
  [sym__hostname_string] = "_hostname_string",
  [aux_sym__proxy_string_content] = "_proxy_string_content",
  [sym__proxy_string] = "_proxy_string",
  [sym__token_string] = "_token_string",
  [sym_string] = "string",
  [sym__file_pattern_vars] = "_file_pattern_vars",
  [sym_pattern] = "pattern",
  [sym__boolean] = "_boolean",
  [sym_number] = "number",
  [sym_bytes] = "bytes",
  [sym_time] = "time",
  [sym__sep] = "_sep",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_host_declaration_repeat1] = "host_declaration_repeat1",
  [aux_sym__declarations_repeat1] = "_declarations_repeat1",
  [aux_sym__canonical_domains_repeat1] = "_canonical_domains_repeat1",
  [aux_sym__canonicalize_permitted_cnames_repeat1] = "_canonicalize_permitted_cnames_repeat1",
  [aux_sym__cnames_map_repeat1] = "_cnames_map_repeat1",
  [aux_sym__ca_signature_algorithms_repeat1] = "_ca_signature_algorithms_repeat1",
  [aux_sym__ciphers_repeat1] = "_ciphers_repeat1",
  [aux_sym__global_known_hosts_file_repeat1] = "_global_known_hosts_file_repeat1",
  [aux_sym__hostbased_accepted_algorithms_repeat1] = "_hostbased_accepted_algorithms_repeat1",
  [aux_sym__ignore_unknown_repeat1] = "_ignore_unknown_repeat1",
  [aux_sym__kex_algorithms_repeat1] = "_kex_algorithms_repeat1",
  [aux_sym__local_command_repeat1] = "_local_command_repeat1",
  [aux_sym__log_verbose_repeat1] = "_log_verbose_repeat1",
  [aux_sym__log_verbose_repeat2] = "_log_verbose_repeat2",
  [aux_sym__log_verbose_value_repeat1] = "_log_verbose_value_repeat1",
  [aux_sym__log_verbose_quoted_repeat1] = "_log_verbose_quoted_repeat1",
  [aux_sym__macs_repeat1] = "_macs_repeat1",
  [aux_sym__permit_remote_open_repeat1] = "_permit_remote_open_repeat1",
  [aux_sym__preferred_authentications_repeat1] = "_preferred_authentications_repeat1",
  [aux_sym__proxy_command_arg_repeat1] = "_proxy_command_arg_repeat1",
  [aux_sym__remote_command_repeat1] = "_remote_command_repeat1",
  [aux_sym__send_env_repeat1] = "_send_env_repeat1",
  [aux_sym__send_env_value_repeat1] = "_send_env_value_repeat1",
  [aux_sym__set_env_repeat1] = "_set_env_repeat1",
  [aux_sym__user_known_hosts_file_repeat1] = "_user_known_hosts_file_repeat1",
  [aux_sym__file_string_repeat1] = "_file_string_repeat1",
  [aux_sym__file_string_repeat2] = "_file_string_repeat2",
  [aux_sym__hosts_string_repeat1] = "_hosts_string_repeat1",
  [aux_sym__hosts_string_repeat2] = "_hosts_string_repeat2",
  [aux_sym__hostname_string_repeat1] = "_hostname_string_repeat1",
  [aux_sym__hostname_string_repeat2] = "_hostname_string_repeat2",
  [aux_sym__proxy_string_repeat1] = "_proxy_string_repeat1",
  [aux_sym__token_string_repeat1] = "_token_string_repeat1",
  [aux_sym__token_string_repeat2] = "_token_string_repeat2",
  [aux_sym__file_pattern_vars_repeat1] = "_file_pattern_vars_repeat1",
  [aux_sym__file_pattern_vars_repeat2] = "_file_pattern_vars_repeat2",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_host_declaration_token1] = aux_sym_host_declaration_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym__add_keys_to_agent_token1] = aux_sym__add_keys_to_agent_token1,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_confirm] = anon_sym_confirm,
  [aux_sym__address_family_token1] = aux_sym__address_family_token1,
  [anon_sym_inet] = anon_sym_inet,
  [anon_sym_inet6] = anon_sym_inet6,
  [aux_sym__batch_mode_token1] = aux_sym__batch_mode_token1,
  [aux_sym__bind_address_token1] = aux_sym__bind_address_token1,
  [aux_sym__bind_interface_token1] = aux_sym__bind_interface_token1,
  [aux_sym__canonical_domains_token1] = aux_sym__canonical_domains_token1,
  [aux_sym__canonicalize_fallback_local_token1] = aux_sym__canonicalize_fallback_local_token1,
  [aux_sym__canonicalize_hostname_token1] = aux_sym__canonicalize_hostname_token1,
  [aux_sym__canonicalize_max_dots_token1] = aux_sym__canonicalize_max_dots_token1,
  [aux_sym__canonicalize_permitted_cnames_token1] = aux_sym__canonicalize_permitted_cnames_token1,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__ca_signature_algorithms_token1] = aux_sym__ca_signature_algorithms_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__certificate_file_token1] = aux_sym__certificate_file_token1,
  [aux_sym__check_host_ip_token1] = aux_sym__check_host_ip_token1,
  [aux_sym__ciphers_token1] = aux_sym__ciphers_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym__clear_all_forwardings_token1] = aux_sym__clear_all_forwardings_token1,
  [aux_sym__compression_token1] = aux_sym__compression_token1,
  [aux_sym__connection_attempts_token1] = aux_sym__connection_attempts_token1,
  [aux_sym__connect_timeout_token1] = aux_sym__connect_timeout_token1,
  [aux_sym__control_master_token1] = aux_sym__control_master_token1,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_autoask] = anon_sym_autoask,
  [aux_sym__control_persist_token1] = aux_sym__control_persist_token1,
  [aux_sym__control_path_token1] = aux_sym__control_path_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym__enable_escape_command_line_token1] = aux_sym__enable_escape_command_line_token1,
  [aux_sym__enable_ssh_keysign_token1] = aux_sym__enable_ssh_keysign_token1,
  [aux_sym__escape_char_token1] = aux_sym__escape_char_token1,
  [aux_sym__escape_char_token2] = aux_sym__escape_char_token2,
  [aux_sym__exit_on_forward_failure_token1] = aux_sym__exit_on_forward_failure_token1,
  [aux_sym__fingerprint_hash_token1] = aux_sym__fingerprint_hash_token1,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_sha256] = anon_sym_sha256,
  [aux_sym__fork_after_authentication_token1] = aux_sym__fork_after_authentication_token1,
  [aux_sym__forward_agent_token1] = aux_sym__forward_agent_token1,
  [aux_sym__forward_x11_token1] = aux_sym__forward_x11_token1,
  [aux_sym__forward_x11_timeout_token1] = aux_sym__forward_x11_timeout_token1,
  [aux_sym__forward_x11_trusted_token1] = aux_sym__forward_x11_trusted_token1,
  [aux_sym__global_known_hosts_file_token1] = aux_sym__global_known_hosts_file_token1,
  [aux_sym__gssapi_authentication_token1] = aux_sym__gssapi_authentication_token1,
  [aux_sym__gssapi_delegate_credentials_token1] = aux_sym__gssapi_delegate_credentials_token1,
  [aux_sym__hostbased_accepted_algorithms_token1] = aux_sym__hostbased_accepted_algorithms_token1,
  [aux_sym__hostbased_accepted_algorithms_token2] = aux_sym__hostbased_accepted_algorithms_token2,
  [aux_sym__hostbased_authentication_token1] = aux_sym__hostbased_authentication_token1,
  [aux_sym__host_key_algorithms_token1] = aux_sym__host_key_algorithms_token1,
  [aux_sym__host_key_alias_token1] = aux_sym__host_key_alias_token1,
  [aux_sym__hostname_token1] = aux_sym__hostname_token1,
  [aux_sym__identities_only_token1] = aux_sym__identities_only_token1,
  [aux_sym__identity_agent_token1] = aux_sym__identity_agent_token1,
  [anon_sym_SSH_AUTH_SOCK] = anon_sym_SSH_AUTH_SOCK,
  [aux_sym__identity_file_token1] = aux_sym__identity_file_token1,
  [aux_sym__ignore_unknown_token1] = aux_sym__ignore_unknown_token1,
  [aux_sym__ipqos_token1] = aux_sym__ipqos_token1,
  [aux_sym__kbd_interactive_authentication_token1] = aux_sym__kbd_interactive_authentication_token1,
  [aux_sym__kbd_interactive_authentication_token2] = aux_sym__kbd_interactive_authentication_token2,
  [aux_sym__kex_algorithms_token1] = aux_sym__kex_algorithms_token1,
  [aux_sym__known_hosts_command_token1] = aux_sym__known_hosts_command_token1,
  [aux_sym__local_command_token1] = aux_sym__local_command_token1,
  [aux_sym__local_forward_token1] = aux_sym__local_forward_token1,
  [aux_sym__log_level_token1] = aux_sym__log_level_token1,
  [aux_sym__log_verbose_token1] = aux_sym__log_verbose_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym__log_verbose_value_token1] = aux_sym__log_verbose_value_token1,
  [aux_sym__log_verbose_quoted_token1] = aux_sym__log_verbose_quoted_token1,
  [aux_sym__macs_token1] = aux_sym__macs_token1,
  [aux_sym__no_host_authentication_for_localhost_token1] = aux_sym__no_host_authentication_for_localhost_token1,
  [aux_sym__number_of_password_prompts_token1] = aux_sym__number_of_password_prompts_token1,
  [aux_sym__password_authentication_token1] = aux_sym__password_authentication_token1,
  [aux_sym__permit_local_command_token1] = aux_sym__permit_local_command_token1,
  [aux_sym__permit_remote_open_token1] = aux_sym__permit_remote_open_token1,
  [anon_sym_any] = anon_sym_any,
  [aux_sym__permit_remote_open_value_token1] = aux_sym__permit_remote_open_value_token1,
  [aux_sym__permit_remote_open_value_token2] = aux_sym__permit_remote_open_value_token2,
  [aux_sym__pkcs11_provider_token1] = aux_sym__pkcs11_provider_token1,
  [aux_sym__port_token1] = aux_sym__port_token1,
  [aux_sym__preferred_authentications_token1] = aux_sym__preferred_authentications_token1,
  [aux_sym__proxy_command_token1] = aux_sym__proxy_command_token1,
  [aux_sym__proxy_jump_token1] = aux_sym__proxy_jump_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__proxy_jump_arg_token1] = sym_string,
  [aux_sym__proxy_use_fdpass_token1] = aux_sym__proxy_use_fdpass_token1,
  [aux_sym__pubkey_accepted_algorithms_token1] = aux_sym__pubkey_accepted_algorithms_token1,
  [aux_sym__pubkey_authentication_token1] = aux_sym__pubkey_authentication_token1,
  [anon_sym_unbound] = anon_sym_unbound,
  [anon_sym_host_DASHbound] = anon_sym_host_DASHbound,
  [aux_sym__rekey_limit_token1] = aux_sym__rekey_limit_token1,
  [aux_sym__remote_command_token1] = aux_sym__remote_command_token1,
  [aux_sym__remote_forward_token1] = aux_sym__remote_forward_token1,
  [aux_sym__request_tty_token1] = aux_sym__request_tty_token1,
  [anon_sym_force] = anon_sym_force,
  [aux_sym__required_rsa_size_token1] = aux_sym__required_rsa_size_token1,
  [aux_sym__revoked_host_keys_token1] = aux_sym__revoked_host_keys_token1,
  [aux_sym__security_key_provider_token1] = aux_sym__security_key_provider_token1,
  [aux_sym__send_env_token1] = aux_sym__send_env_token1,
  [aux_sym__send_env_value_token1] = aux_sym__send_env_value_token1,
  [aux_sym__server_alive_count_max_token1] = aux_sym__server_alive_count_max_token1,
  [aux_sym__server_alive_interval_token1] = aux_sym__server_alive_interval_token1,
  [aux_sym__session_type_token1] = aux_sym__session_type_token1,
  [anon_sym_subsystem] = anon_sym_subsystem,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__stdin_null_token1] = aux_sym__stdin_null_token1,
  [aux_sym__stream_local_bind_mask_token1] = aux_sym__stream_local_bind_mask_token1,
  [aux_sym__stream_local_bind_mask_token2] = sym_number,
  [aux_sym__stream_local_bind_unlink_token1] = aux_sym__stream_local_bind_unlink_token1,
  [aux_sym__strict_host_key_checking_token1] = aux_sym__strict_host_key_checking_token1,
  [anon_sym_accept_DASHnew] = anon_sym_accept_DASHnew,
  [anon_sym_off] = anon_sym_off,
  [aux_sym__tcp_keep_alive_token1] = aux_sym__tcp_keep_alive_token1,
  [aux_sym__tag_token1] = aux_sym__tag_token1,
  [aux_sym__tunnel_token1] = aux_sym__tunnel_token1,
  [anon_sym_point_DASHto_DASHpoint] = anon_sym_point_DASHto_DASHpoint,
  [anon_sym_ethernet] = anon_sym_ethernet,
  [aux_sym__tunnel_device_token1] = aux_sym__tunnel_device_token1,
  [aux_sym__update_host_keys_token1] = aux_sym__update_host_keys_token1,
  [aux_sym__user_token1] = aux_sym__user_token1,
  [aux_sym__user_known_hosts_file_token1] = aux_sym__user_known_hosts_file_token1,
  [aux_sym__verify_host_key_dns_token1] = aux_sym__verify_host_key_dns_token1,
  [aux_sym__visual_host_key_token1] = aux_sym__visual_host_key_token1,
  [aux_sym__xauth_location_token1] = aux_sym__xauth_location_token1,
  [sym_ipqos] = sym_ipqos,
  [sym_verbosity] = sym_verbosity,
  [sym_authentication] = sym_authentication,
  [sym_cipher] = sym_cipher,
  [sym_kex] = sym_kex,
  [sym_key_sig] = sym_key_sig,
  [sym_mac] = sym_mac,
  [sym_protocol_version] = sym_protocol_version,
  [sym_sig] = sym_sig,
  [aux_sym__file_token_token1] = sym_token,
  [aux_sym__hosts_token_token1] = sym_token,
  [aux_sym__hostname_token_token1] = sym_token,
  [aux_sym__proxy_token_token1] = sym_token,
  [sym_token] = sym_token,
  [anon_sym_DOLLAR] = sym_variable,
  [sym__var_name] = sym__var_name,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__file_string_token1] = aux_sym__file_string_token1,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym__number] = sym__number,
  [aux_sym_bytes_token1] = aux_sym_bytes_token1,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [aux_sym_time_token2] = aux_sym_time_token2,
  [aux_sym_time_token3] = aux_sym_time_token3,
  [aux_sym_time_token4] = aux_sym_time_token4,
  [aux_sym_time_token5] = aux_sym_time_token5,
  [sym_comment] = sym_comment,
  [aux_sym__sep_token1] = anon_sym_EQ,
  [sym__space] = sym__space,
  [sym__eol] = sym__eol,
  [sym_config] = sym_config,
  [sym_host_declaration] = sym_host_declaration,
  [sym__declarations] = sym__declarations,
  [sym_parameter] = sym_parameter,
  [sym__add_keys_to_agent] = sym__add_keys_to_agent,
  [sym__address_family] = sym__address_family,
  [sym__batch_mode] = sym__batch_mode,
  [sym__bind_address] = sym__bind_address,
  [sym__bind_interface] = sym__bind_interface,
  [sym__canonical_domains] = sym__canonical_domains,
  [sym__canonicalize_fallback_local] = sym__canonicalize_fallback_local,
  [sym__canonicalize_hostname] = sym__canonicalize_hostname,
  [sym__canonicalize_max_dots] = sym__canonicalize_max_dots,
  [sym__canonicalize_permitted_cnames] = sym__canonicalize_permitted_cnames,
  [sym__cnames_map] = sym__cnames_map,
  [sym__ca_signature_algorithms] = sym__ca_signature_algorithms,
  [sym__certificate_file] = sym__certificate_file,
  [sym__check_host_ip] = sym__check_host_ip,
  [sym__ciphers] = sym__ciphers,
  [sym__clear_all_forwardings] = sym__clear_all_forwardings,
  [sym__compression] = sym__compression,
  [sym__connection_attempts] = sym__connection_attempts,
  [sym__connect_timeout] = sym__connect_timeout,
  [sym__control_master] = sym__control_master,
  [sym__control_persist] = sym__control_persist,
  [sym__control_path] = sym__control_path,
  [sym__enable_escape_command_line] = sym__enable_escape_command_line,
  [sym__enable_ssh_keysign] = sym__enable_ssh_keysign,
  [sym__escape_char] = sym__escape_char,
  [sym__exit_on_forward_failure] = sym__exit_on_forward_failure,
  [sym__fingerprint_hash] = sym__fingerprint_hash,
  [sym__fork_after_authentication] = sym__fork_after_authentication,
  [sym__forward_agent] = sym__forward_agent,
  [sym__forward_x11] = sym__forward_x11,
  [sym__forward_x11_timeout] = sym__forward_x11_timeout,
  [sym__forward_x11_trusted] = sym__forward_x11_trusted,
  [sym__global_known_hosts_file] = sym__global_known_hosts_file,
  [sym__gssapi_authentication] = sym__gssapi_authentication,
  [sym__gssapi_delegate_credentials] = sym__gssapi_delegate_credentials,
  [sym__hostbased_accepted_algorithms] = sym__hostbased_accepted_algorithms,
  [sym__hostbased_authentication] = sym__hostbased_authentication,
  [sym__host_key_algorithms] = sym__host_key_algorithms,
  [sym__host_key_alias] = sym__host_key_alias,
  [sym__hostname] = sym__hostname,
  [sym__identities_only] = sym__identities_only,
  [sym__identity_agent] = sym__identity_agent,
  [sym__identity_file] = sym__identity_file,
  [sym__ignore_unknown] = sym__ignore_unknown,
  [sym__ipqos] = sym__ipqos,
  [sym__kbd_interactive_authentication] = sym__kbd_interactive_authentication,
  [sym__kex_algorithms] = sym__kex_algorithms,
  [sym__known_hosts_command] = sym__known_hosts_command,
  [sym__local_command] = sym__local_command,
  [sym__local_forward] = sym__local_forward,
  [sym__forward_value1] = sym__forward_value1,
  [sym__forward_value2] = sym__forward_value2,
  [sym__log_level] = sym__log_level,
  [sym__log_verbose] = sym__log_verbose,
  [sym__log_verbose_value] = sym__log_verbose_value,
  [sym__log_verbose_quoted] = sym__log_verbose_quoted,
  [sym__macs] = sym__macs,
  [sym__no_host_authentication_for_localhost] = sym__no_host_authentication_for_localhost,
  [sym__number_of_password_prompts] = sym__number_of_password_prompts,
  [sym__password_authentication] = sym__password_authentication,
  [sym__permit_local_command] = sym__permit_local_command,
  [sym__permit_remote_open] = sym__permit_remote_open,
  [sym__permit_remote_open_value] = sym__permit_remote_open_value,
  [sym__pkcs11_provider] = sym__pkcs11_provider,
  [sym__port] = sym__port,
  [sym__preferred_authentications] = sym__preferred_authentications,
  [sym__proxy_command] = sym__proxy_command,
  [sym__proxy_jump] = sym__proxy_jump,
  [sym__proxy_use_fdpass] = sym__proxy_use_fdpass,
  [sym__pubkey_accepted_algorithms] = sym__pubkey_accepted_algorithms,
  [sym__pubkey_authentication] = sym__pubkey_authentication,
  [sym__pubkey_authentication_arg] = sym__pubkey_authentication_arg,
  [sym__rekey_limit] = sym__rekey_limit,
  [sym__remote_command] = sym__remote_command,
  [sym__remote_forward] = sym__remote_forward,
  [sym__request_tty] = sym__request_tty,
  [sym__required_rsa_size] = sym__required_rsa_size,
  [sym__revoked_host_keys] = sym__revoked_host_keys,
  [sym__security_key_provider] = sym__security_key_provider,
  [sym__send_env] = sym__send_env,
  [sym__send_env_value] = sym__send_env_value,
  [sym__server_alive_count_max] = sym__server_alive_count_max,
  [sym__server_alive_interval] = sym__server_alive_interval,
  [sym__session_type] = sym__session_type,
  [sym__set_env] = sym__set_env,
  [sym__set_env_value] = sym__set_env_value,
  [sym__stdin_null] = sym__stdin_null,
  [sym__stream_local_bind_mask] = sym__stream_local_bind_mask,
  [sym__stream_local_bind_unlink] = sym__stream_local_bind_unlink,
  [sym__strict_host_key_checking] = sym__strict_host_key_checking,
  [sym__tcp_keep_alive] = sym__tcp_keep_alive,
  [sym__tag] = sym__tag,
  [sym__tunnel] = sym__tunnel,
  [sym__tunnel_device] = sym__tunnel_device,
  [sym__update_host_keys] = sym__update_host_keys,
  [sym__user] = sym__user,
  [sym__user_known_hosts_file] = sym__user_known_hosts_file,
  [sym__verify_host_key_dns] = sym__verify_host_key_dns,
  [sym__visual_host_key] = sym__visual_host_key,
  [sym__xauth_location] = sym__xauth_location,
  [sym__file_token] = sym__file_token,
  [sym__hosts_token] = sym__hosts_token,
  [sym__hostname_token] = sym__hostname_token,
  [sym__proxy_token] = sym__proxy_token,
  [sym__var_value] = sym__var_value,
  [sym_variable] = sym_variable,
  [sym__file_string] = sym__file_string,
  [sym__hosts_string] = sym__hosts_string,
  [sym__hostname_string] = sym__hostname_string,
  [aux_sym__proxy_string_content] = aux_sym__proxy_string_content,
  [sym__proxy_string] = sym__proxy_string,
  [sym__token_string] = sym__token_string,
  [sym_string] = sym_string,
  [sym__file_pattern_vars] = sym__file_pattern_vars,
  [sym_pattern] = sym_pattern,
  [sym__boolean] = sym__boolean,
  [sym_number] = sym_number,
  [sym_bytes] = sym_bytes,
  [sym_time] = sym_time,
  [sym__sep] = sym__sep,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_host_declaration_repeat1] = aux_sym_host_declaration_repeat1,
  [aux_sym__declarations_repeat1] = aux_sym__declarations_repeat1,
  [aux_sym__canonical_domains_repeat1] = aux_sym__canonical_domains_repeat1,
  [aux_sym__canonicalize_permitted_cnames_repeat1] = aux_sym__canonicalize_permitted_cnames_repeat1,
  [aux_sym__cnames_map_repeat1] = aux_sym__cnames_map_repeat1,
  [aux_sym__ca_signature_algorithms_repeat1] = aux_sym__ca_signature_algorithms_repeat1,
  [aux_sym__ciphers_repeat1] = aux_sym__ciphers_repeat1,
  [aux_sym__global_known_hosts_file_repeat1] = aux_sym__global_known_hosts_file_repeat1,
  [aux_sym__hostbased_accepted_algorithms_repeat1] = aux_sym__hostbased_accepted_algorithms_repeat1,
  [aux_sym__ignore_unknown_repeat1] = aux_sym__ignore_unknown_repeat1,
  [aux_sym__kex_algorithms_repeat1] = aux_sym__kex_algorithms_repeat1,
  [aux_sym__local_command_repeat1] = aux_sym__local_command_repeat1,
  [aux_sym__log_verbose_repeat1] = aux_sym__log_verbose_repeat1,
  [aux_sym__log_verbose_repeat2] = aux_sym__log_verbose_repeat2,
  [aux_sym__log_verbose_value_repeat1] = aux_sym__log_verbose_value_repeat1,
  [aux_sym__log_verbose_quoted_repeat1] = aux_sym__log_verbose_quoted_repeat1,
  [aux_sym__macs_repeat1] = aux_sym__macs_repeat1,
  [aux_sym__permit_remote_open_repeat1] = aux_sym__permit_remote_open_repeat1,
  [aux_sym__preferred_authentications_repeat1] = aux_sym__preferred_authentications_repeat1,
  [aux_sym__proxy_command_arg_repeat1] = aux_sym__proxy_command_arg_repeat1,
  [aux_sym__remote_command_repeat1] = aux_sym__remote_command_repeat1,
  [aux_sym__send_env_repeat1] = aux_sym__send_env_repeat1,
  [aux_sym__send_env_value_repeat1] = aux_sym__send_env_value_repeat1,
  [aux_sym__set_env_repeat1] = aux_sym__set_env_repeat1,
  [aux_sym__user_known_hosts_file_repeat1] = aux_sym__user_known_hosts_file_repeat1,
  [aux_sym__file_string_repeat1] = aux_sym__file_string_repeat1,
  [aux_sym__file_string_repeat2] = aux_sym__file_string_repeat2,
  [aux_sym__hosts_string_repeat1] = aux_sym__hosts_string_repeat1,
  [aux_sym__hosts_string_repeat2] = aux_sym__hosts_string_repeat2,
  [aux_sym__hostname_string_repeat1] = aux_sym__hostname_string_repeat1,
  [aux_sym__hostname_string_repeat2] = aux_sym__hostname_string_repeat2,
  [aux_sym__proxy_string_repeat1] = aux_sym__proxy_string_repeat1,
  [aux_sym__token_string_repeat1] = aux_sym__token_string_repeat1,
  [aux_sym__token_string_repeat2] = aux_sym__token_string_repeat2,
  [aux_sym__file_pattern_vars_repeat1] = aux_sym__file_pattern_vars_repeat1,
  [aux_sym__file_pattern_vars_repeat2] = aux_sym__file_pattern_vars_repeat2,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_host_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_keys_to_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_confirm] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__address_family_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__batch_mode_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bind_address_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bind_interface_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonical_domains_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_fallback_local_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_hostname_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_max_dots_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__canonicalize_permitted_cnames_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ca_signature_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__certificate_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__check_host_ip_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ciphers_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__clear_all_forwardings_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__compression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__connection_attempts_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__connect_timeout_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_master_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoask] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_persist_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_path_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__enable_escape_command_line_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__enable_ssh_keysign_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_char_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exit_on_forward_failure_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__fingerprint_hash_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__fork_after_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_timeout_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__forward_x11_trusted_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__global_known_hosts_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__gssapi_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__gssapi_delegate_credentials_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostbased_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__host_key_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__host_key_alias_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostname_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identities_only_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identity_agent_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SSH_AUTH_SOCK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identity_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ignore_unknown_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ipqos_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kbd_interactive_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kbd_interactive_authentication_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__kex_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__known_hosts_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__local_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__local_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_level_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_verbose_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_verbose_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macs_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__no_host_authentication_for_localhost_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_of_password_prompts_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__password_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__permit_local_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__permit_remote_open_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__permit_remote_open_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__permit_remote_open_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pkcs11_provider_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__port_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__preferred_authentications_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_jump_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_jump_arg_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_use_fdpass_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pubkey_accepted_algorithms_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__pubkey_authentication_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host_DASHbound] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rekey_limit_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__remote_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__remote_forward_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__request_tty_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__required_rsa_size_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__revoked_host_keys_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__security_key_provider_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__send_env_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__send_env_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__server_alive_count_max_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__server_alive_interval_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__session_type_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subsystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stdin_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stream_local_bind_mask_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stream_local_bind_mask_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stream_local_bind_unlink_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__strict_host_key_checking_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept_DASHnew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tcp_keep_alive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tag_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tunnel_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_point_DASHto_DASHpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ethernet] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tunnel_device_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__update_host_keys_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_known_hosts_file_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__verify_host_key_dns_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__visual_host_key_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__xauth_location_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_ipqos] = {
    .visible = true,
    .named = true,
  },
  [sym_verbosity] = {
    .visible = true,
    .named = true,
  },
  [sym_authentication] = {
    .visible = true,
    .named = true,
  },
  [sym_cipher] = {
    .visible = true,
    .named = true,
  },
  [sym_kex] = {
    .visible = true,
    .named = true,
  },
  [sym_key_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_mac] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_version] = {
    .visible = true,
    .named = true,
  },
  [sym_sig] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__file_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__hosts_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__hostname_token_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_token_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [sym__var_name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__file_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_bytes_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sep_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_host_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__add_keys_to_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__address_family] = {
    .visible = false,
    .named = true,
  },
  [sym__batch_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__bind_address] = {
    .visible = false,
    .named = true,
  },
  [sym__bind_interface] = {
    .visible = false,
    .named = true,
  },
  [sym__canonical_domains] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_fallback_local] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_hostname] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_max_dots] = {
    .visible = false,
    .named = true,
  },
  [sym__canonicalize_permitted_cnames] = {
    .visible = false,
    .named = true,
  },
  [sym__cnames_map] = {
    .visible = false,
    .named = true,
  },
  [sym__ca_signature_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__certificate_file] = {
    .visible = false,
    .named = true,
  },
  [sym__check_host_ip] = {
    .visible = false,
    .named = true,
  },
  [sym__ciphers] = {
    .visible = false,
    .named = true,
  },
  [sym__clear_all_forwardings] = {
    .visible = false,
    .named = true,
  },
  [sym__compression] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attempts] = {
    .visible = false,
    .named = true,
  },
  [sym__connect_timeout] = {
    .visible = false,
    .named = true,
  },
  [sym__control_master] = {
    .visible = false,
    .named = true,
  },
  [sym__control_persist] = {
    .visible = false,
    .named = true,
  },
  [sym__control_path] = {
    .visible = false,
    .named = true,
  },
  [sym__enable_escape_command_line] = {
    .visible = false,
    .named = true,
  },
  [sym__enable_ssh_keysign] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_char] = {
    .visible = false,
    .named = true,
  },
  [sym__exit_on_forward_failure] = {
    .visible = false,
    .named = true,
  },
  [sym__fingerprint_hash] = {
    .visible = false,
    .named = true,
  },
  [sym__fork_after_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11_timeout] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_x11_trusted] = {
    .visible = false,
    .named = true,
  },
  [sym__global_known_hosts_file] = {
    .visible = false,
    .named = true,
  },
  [sym__gssapi_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__gssapi_delegate_credentials] = {
    .visible = false,
    .named = true,
  },
  [sym__hostbased_accepted_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__hostbased_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__host_key_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__host_key_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname] = {
    .visible = false,
    .named = true,
  },
  [sym__identities_only] = {
    .visible = false,
    .named = true,
  },
  [sym__identity_agent] = {
    .visible = false,
    .named = true,
  },
  [sym__identity_file] = {
    .visible = false,
    .named = true,
  },
  [sym__ignore_unknown] = {
    .visible = false,
    .named = true,
  },
  [sym__ipqos] = {
    .visible = false,
    .named = true,
  },
  [sym__kbd_interactive_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__kex_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__known_hosts_command] = {
    .visible = false,
    .named = true,
  },
  [sym__local_command] = {
    .visible = false,
    .named = true,
  },
  [sym__local_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value1] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value2] = {
    .visible = false,
    .named = true,
  },
  [sym__log_level] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose_value] = {
    .visible = false,
    .named = true,
  },
  [sym__log_verbose_quoted] = {
    .visible = false,
    .named = true,
  },
  [sym__macs] = {
    .visible = false,
    .named = true,
  },
  [sym__no_host_authentication_for_localhost] = {
    .visible = false,
    .named = true,
  },
  [sym__number_of_password_prompts] = {
    .visible = false,
    .named = true,
  },
  [sym__password_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_local_command] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_remote_open] = {
    .visible = false,
    .named = true,
  },
  [sym__permit_remote_open_value] = {
    .visible = false,
    .named = true,
  },
  [sym__pkcs11_provider] = {
    .visible = false,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [sym__preferred_authentications] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_command] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_jump] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_use_fdpass] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_accepted_algorithms] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_authentication] = {
    .visible = false,
    .named = true,
  },
  [sym__pubkey_authentication_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__rekey_limit] = {
    .visible = false,
    .named = true,
  },
  [sym__remote_command] = {
    .visible = false,
    .named = true,
  },
  [sym__remote_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__request_tty] = {
    .visible = false,
    .named = true,
  },
  [sym__required_rsa_size] = {
    .visible = false,
    .named = true,
  },
  [sym__revoked_host_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__security_key_provider] = {
    .visible = false,
    .named = true,
  },
  [sym__send_env] = {
    .visible = false,
    .named = true,
  },
  [sym__send_env_value] = {
    .visible = false,
    .named = true,
  },
  [sym__server_alive_count_max] = {
    .visible = false,
    .named = true,
  },
  [sym__server_alive_interval] = {
    .visible = false,
    .named = true,
  },
  [sym__session_type] = {
    .visible = false,
    .named = true,
  },
  [sym__set_env] = {
    .visible = false,
    .named = true,
  },
  [sym__set_env_value] = {
    .visible = false,
    .named = true,
  },
  [sym__stdin_null] = {
    .visible = false,
    .named = true,
  },
  [sym__stream_local_bind_mask] = {
    .visible = false,
    .named = true,
  },
  [sym__stream_local_bind_unlink] = {
    .visible = false,
    .named = true,
  },
  [sym__strict_host_key_checking] = {
    .visible = false,
    .named = true,
  },
  [sym__tcp_keep_alive] = {
    .visible = false,
    .named = true,
  },
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [sym__tunnel] = {
    .visible = false,
    .named = true,
  },
  [sym__tunnel_device] = {
    .visible = false,
    .named = true,
  },
  [sym__update_host_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__user] = {
    .visible = false,
    .named = true,
  },
  [sym__user_known_hosts_file] = {
    .visible = false,
    .named = true,
  },
  [sym__verify_host_key_dns] = {
    .visible = false,
    .named = true,
  },
  [sym__visual_host_key] = {
    .visible = false,
    .named = true,
  },
  [sym__xauth_location] = {
    .visible = false,
    .named = true,
  },
  [sym__file_token] = {
    .visible = false,
    .named = true,
  },
  [sym__hosts_token] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_token] = {
    .visible = false,
    .named = true,
  },
  [sym__proxy_token] = {
    .visible = false,
    .named = true,
  },
  [sym__var_value] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__file_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hosts_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__proxy_string_content] = {
    .visible = false,
    .named = false,
  },
  [sym__proxy_string] = {
    .visible = false,
    .named = true,
  },
  [sym__token_string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__file_pattern_vars] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__canonical_domains_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__canonicalize_permitted_cnames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cnames_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ca_signature_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ciphers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__global_known_hosts_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostbased_accepted_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ignore_unknown_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__kex_algorithms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__local_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_verbose_quoted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__permit_remote_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__preferred_authentications_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__proxy_command_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remote_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__send_env_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__send_env_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__set_env_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__user_known_hosts_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hosts_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hosts_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostname_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hostname_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__proxy_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__token_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__token_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_pattern_vars_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__file_pattern_vars_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_bind_address = 2,
  field_file = 3,
  field_function = 4,
  field_host = 5,
  field_keyword = 6,
  field_line = 7,
  field_local_tun = 8,
  field_name = 9,
  field_port = 10,
  field_remote_tun = 11,
  field_source_domain_list = 12,
  field_target_domain_list = 13,
  field_user = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_bind_address] = "bind_address",
  [field_file] = "file",
  [field_function] = "function",
  [field_host] = "host",
  [field_keyword] = "keyword",
  [field_line] = "line",
  [field_local_tun] = "local_tun",
  [field_name] = "name",
  [field_port] = "port",
  [field_remote_tun] = "remote_tun",
  [field_source_domain_list] = "source_domain_list",
  [field_target_domain_list] = "target_domain_list",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 5},
  [5] = {.index = 14, .length = 5},
  [6] = {.index = 19, .length = 4},
  [7] = {.index = 23, .length = 5},
  [8] = {.index = 28, .length = 4},
  [9] = {.index = 32, .length = 2},
  [10] = {.index = 34, .length = 1},
  [11] = {.index = 35, .length = 4},
  [13] = {.index = 39, .length = 3},
  [15] = {.index = 42, .length = 1},
  [16] = {.index = 43, .length = 5},
  [17] = {.index = 48, .length = 4},
  [18] = {.index = 32, .length = 2},
  [20] = {.index = 52, .length = 3},
  [21] = {.index = 55, .length = 7},
  [22] = {.index = 62, .length = 3},
  [23] = {.index = 65, .length = 1},
  [24] = {.index = 66, .length = 9},
  [25] = {.index = 75, .length = 7},
  [27] = {.index = 82, .length = 1},
  [28] = {.index = 83, .length = 2},
  [29] = {.index = 85, .length = 4},
  [30] = {.index = 89, .length = 3},
  [31] = {.index = 92, .length = 6},
  [32] = {.index = 98, .length = 2},
  [34] = {.index = 65, .length = 1},
  [36] = {.index = 100, .length = 3},
  [37] = {.index = 103, .length = 2},
  [38] = {.index = 105, .length = 7},
  [39] = {.index = 112, .length = 7},
  [40] = {.index = 119, .length = 3},
  [41] = {.index = 122, .length = 6},
  [42] = {.index = 128, .length = 2},
  [43] = {.index = 128, .length = 2},
  [44] = {.index = 130, .length = 2},
  [45] = {.index = 132, .length = 4},
  [46] = {.index = 85, .length = 4},
  [47] = {.index = 136, .length = 2},
  [48] = {.index = 138, .length = 3},
  [49] = {.index = 141, .length = 3},
  [50] = {.index = 144, .length = 11},
  [51] = {.index = 155, .length = 4},
  [52] = {.index = 159, .length = 4},
  [53] = {.index = 163, .length = 3},
  [54] = {.index = 166, .length = 2},
  [55] = {.index = 166, .length = 2},
  [56] = {.index = 168, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
  [2] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
  [6] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [9] =
    {field_argument, 0, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [14] =
    {field_argument, 0, .inherited = true},
    {field_file, 0, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_line, 0, .inherited = true},
  [19] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [23] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_user, 0, .inherited = true},
  [28] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_local_tun, 0, .inherited = true},
    {field_remote_tun, 0, .inherited = true},
  [32] =
    {field_argument, 2},
    {field_keyword, 0},
  [34] =
    {field_keyword, 0},
  [35] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [39] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [42] =
    {field_port, 0},
  [43] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [48] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [52] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [55] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [62] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [65] =
    {field_name, 1},
  [66] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [75] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [82] =
    {field_argument, 1},
  [83] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [85] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [89] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [92] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [98] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [100] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [103] =
    {field_bind_address, 0},
    {field_port, 2},
  [105] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_host, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
  [112] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [119] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [122] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [128] =
    {field_host, 0},
    {field_port, 2},
  [130] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [132] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [136] =
    {field_argument, 1},
    {field_argument, 2},
  [138] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [141] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [144] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_file, 3, .inherited = true},
    {field_file, 4, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_function, 4, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
    {field_line, 4, .inherited = true},
  [155] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [159] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [163] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [166] =
    {field_host, 1},
    {field_port, 3},
  [168] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_argument, 6},
    {field_keyword, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [0] = sym_pattern,
  },
  [14] = {
    [0] = sym_string,
  },
  [18] = {
    [2] = sym_string,
  },
  [19] = {
    [0] = sym_variable,
  },
  [23] = {
    [1] = sym_variable,
  },
  [26] = {
    [1] = sym_variable,
  },
  [33] = {
    [0] = sym_pattern,
    [1] = sym_pattern,
    [2] = sym_pattern,
  },
  [35] = {
    [0] = sym_string,
    [1] = sym_string,
    [2] = sym_string,
  },
  [43] = {
    [0] = sym_string,
  },
  [46] = {
    [2] = sym_string,
  },
  [55] = {
    [1] = sym_string,
  },
  [56] = {
    [2] = sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__proxy_string_content, 2,
    aux_sym__proxy_string_content,
    sym_string,
  aux_sym__send_env_value_repeat1, 2,
    aux_sym__send_env_value_repeat1,
    sym_variable,
  aux_sym__file_string_repeat1, 2,
    aux_sym__file_string_repeat1,
    sym_string,
  aux_sym__file_string_repeat2, 2,
    aux_sym__file_string_repeat2,
    sym_string,
  aux_sym__hosts_string_repeat1, 2,
    aux_sym__hosts_string_repeat1,
    sym_string,
  aux_sym__hosts_string_repeat2, 2,
    aux_sym__hosts_string_repeat2,
    sym_string,
  aux_sym__hostname_string_repeat1, 2,
    aux_sym__hostname_string_repeat1,
    sym_string,
  aux_sym__hostname_string_repeat2, 2,
    aux_sym__hostname_string_repeat2,
    sym_string,
  aux_sym__proxy_string_repeat1, 2,
    aux_sym__proxy_string_repeat1,
    sym_string,
  aux_sym__token_string_repeat1, 2,
    aux_sym__token_string_repeat1,
    sym_string,
  aux_sym__token_string_repeat2, 2,
    aux_sym__token_string_repeat2,
    sym_string,
  aux_sym__file_pattern_vars_repeat1, 2,
    aux_sym__file_pattern_vars_repeat1,
    sym_pattern,
  aux_sym__file_pattern_vars_repeat2, 2,
    aux_sym__file_pattern_vars_repeat2,
    sym_pattern,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 64,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 65,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 65,
  [106] = 80,
  [107] = 107,
  [108] = 108,
  [109] = 59,
  [110] = 64,
  [111] = 59,
  [112] = 112,
  [113] = 59,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 112,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 59,
  [186] = 186,
  [187] = 187,
  [188] = 59,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 190,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 697,
  [705] = 705,
  [706] = 697,
  [707] = 697,
  [708] = 697,
  [709] = 697,
  [710] = 671,
  [711] = 671,
  [712] = 671,
  [713] = 671,
  [714] = 671,
};

static inline bool aux_sym__file_token_token1_character_set_1(int32_t c) {
  return (c < 'k'
    ? (c < 'L'
      ? (c < 'C'
        ? c == '%'
        : c <= 'C')
      : (c <= 'L' || (c < 'h'
        ? c == 'd'
        : c <= 'i')))
    : (c <= 'l' || (c < 'r'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'p')
      : (c <= 'r' || c == 'u'))));
}

static inline bool aux_sym__hosts_token_token1_character_set_1(int32_t c) {
  return (c < 'h'
    ? (c < 'K'
      ? (c < 'C'
        ? c == '%'
        : (c <= 'C' || (c >= 'H' && c <= 'I')))
      : (c <= 'L' || (c < 'f'
        ? c == 'd'
        : c <= 'f')))
    : (c <= 'i' || (c < 'p'
      ? (c < 'n'
        ? (c >= 'k' && c <= 'l')
        : c <= 'n')
      : (c <= 'p' || (c < 't'
        ? c == 'r'
        : c <= 'u')))));
}

static inline bool sym_token_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < 'K'
      ? (c < 'C'
        ? c == '%'
        : (c <= 'C' || (c >= 'H' && c <= 'I')))
      : (c <= 'L' || (c < 'd'
        ? c == 'T'
        : c <= 'd')))
    : (c <= 'f' || (c < 'p'
      ? (c < 'k'
        ? (c >= 'h' && c <= 'i')
        : (c <= 'l' || c == 'n'))
      : (c <= 'p' || (c < 't'
        ? c == 'r'
        : c <= 'u')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1700);
      if (lookahead == '!') ADVANCE(1702);
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1882);
      if (lookahead == '%') ADVANCE(1784);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '+') ADVANCE(1723);
      if (lookahead == ',') ADVANCE(1720);
      if (lookahead == '-') ADVANCE(1724);
      if (lookahead == '2') ADVANCE(1783);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '=') ADVANCE(1843);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead == '@') ADVANCE(1821);
      if (lookahead == 'S') ADVANCE(1782);
      if (lookahead == '^') ADVANCE(1728);
      if (lookahead == 's') ADVANCE(1783);
      if (lookahead == '}') ADVANCE(1905);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1783);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1783);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1783);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1783);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'g' ||
          lookahead == 'k') ADVANCE(1783);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1783);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1931);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1702);
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1909);
      if (lookahead == '%') ADVANCE(1912);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1909);
      if (lookahead == '%') ADVANCE(1912);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1909);
      if (lookahead == '%') ADVANCE(1913);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1911);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1910);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1914);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == ',') ADVANCE(1720);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '-') ADVANCE(1724);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1837);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead != 0) ADVANCE(1906);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(1919);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'f') ADVANCE(530);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'p') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1923);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1924);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1925);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1926);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1922);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1920);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(1822);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(1921);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1882);
      if (lookahead == '%') ADVANCE(1912);
      if (lookahead == 'S') ADVANCE(1907);
      if (lookahead == 'n') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1909);
      if (lookahead == '%') ADVANCE(1912);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1909);
      if (lookahead == '%') ADVANCE(1912);
      if (lookahead == 'n') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1909);
      if (lookahead == '%') ADVANCE(1912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1909);
      if (lookahead == '%') ADVANCE(1913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1785);
      if (lookahead == '%') ADVANCE(1789);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1785);
      if (lookahead == '%') ADVANCE(1789);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '$') ADVANCE(1785);
      if (lookahead == '%') ADVANCE(1791);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '%') ADVANCE(1911);
      if (lookahead == 'n') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '%') ADVANCE(1911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '%') ADVANCE(1910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '%') ADVANCE(1914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '%') ADVANCE(1787);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '%') ADVANCE(1788);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '%') ADVANCE(1792);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '+') ADVANCE(1723);
      if (lookahead == '-') ADVANCE(1724);
      if (lookahead == '0') ADVANCE(1695);
      if (lookahead == '3') ADVANCE(353);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '=') ADVANCE(1928);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead == 'S') ADVANCE(1782);
      if (lookahead == '^') ADVANCE(1728);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'g') ADVANCE(601);
      if (lookahead == 'h') ADVANCE(537);
      if (lookahead == 'k') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(629);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == 'u') ADVANCE(497);
      if (lookahead == 'w') ADVANCE(398);
      if (lookahead == 'y') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1929);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1696);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead == 'n') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead != 0) ADVANCE(1783);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1780);
      if (lookahead == '$') ADVANCE(1811);
      if (lookahead == '%') ADVANCE(1813);
      if (lookahead == '*') ADVANCE(1739);
      if (lookahead == '0') ADVANCE(1814);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1780);
      if (lookahead == '$') ADVANCE(1811);
      if (lookahead == '%') ADVANCE(1813);
      if (lookahead == '*') ADVANCE(1739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1780);
      if (lookahead == '$') ADVANCE(1883);
      if (lookahead == 'n') ADVANCE(1807);
      if (lookahead == 'y') ADVANCE(1803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1780);
      if (lookahead == '$') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1780);
      if (lookahead == '*') ADVANCE(1739);
      if (lookahead == 'a') ADVANCE(1805);
      if (lookahead == 'n') ADVANCE(1808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(1786);
      if (lookahead == '%') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1793);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == ',') ADVANCE(1720);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1906);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '?') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1783);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(1740);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(370);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(488);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(114);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(498);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '@') ADVANCE(542);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(388);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(506);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(395);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '1') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '@') ADVANCE(523);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(508);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(285);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(462);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(512);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(607);
      if (lookahead == '4') ADVANCE(78);
      if (lookahead == '6') ADVANCE(79);
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(511);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(390);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(513);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(622);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(397);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(518);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(631);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(396);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 94:
      if (lookahead == '.') ADVANCE(323);
      END_STATE();
    case 95:
      if (lookahead == '.') ADVANCE(526);
      END_STATE();
    case 96:
      if (lookahead == '.') ADVANCE(333);
      END_STATE();
    case 97:
      if (lookahead == '.') ADVANCE(334);
      END_STATE();
    case 98:
      if (lookahead == '.') ADVANCE(335);
      END_STATE();
    case 99:
      if (lookahead == '.') ADVANCE(336);
      END_STATE();
    case 100:
      if (lookahead == '0') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == '0') ADVANCE(196);
      END_STATE();
    case 102:
      if (lookahead == '0') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == '1') ADVANCE(1691);
      if (lookahead == '2') ADVANCE(1691);
      if (lookahead == '3') ADVANCE(1691);
      if (lookahead == '4') ADVANCE(1691);
      END_STATE();
    case 104:
      if (lookahead == '1') ADVANCE(1872);
      END_STATE();
    case 105:
      if (lookahead == '1') ADVANCE(1874);
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 106:
      if (lookahead == '1') ADVANCE(219);
      END_STATE();
    case 107:
      if (lookahead == '1') ADVANCE(675);
      END_STATE();
    case 108:
      if (lookahead == '1') ADVANCE(1753);
      END_STATE();
    case 109:
      if (lookahead == '1') ADVANCE(1869);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(1869);
      if (lookahead == '2') ADVANCE(181);
      END_STATE();
    case 111:
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(1876);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == '6') ADVANCE(168);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(215);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(217);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(216);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(108);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(221);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(163);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(1392);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(220);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(223);
      END_STATE();
    case 129:
      if (lookahead == '2') ADVANCE(1872);
      END_STATE();
    case 130:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 131:
      if (lookahead == '2') ADVANCE(1869);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(1876);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(172);
      END_STATE();
    case 134:
      if (lookahead == '2') ADVANCE(1875);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(102);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(176);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(214);
      if (lookahead == '9') ADVANCE(151);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(177);
      if (lookahead == '3') ADVANCE(212);
      if (lookahead == '5') ADVANCE(148);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(177);
      if (lookahead == '5') ADVANCE(118);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(175);
      if (lookahead == '5') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(178);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(181);
      if (lookahead == '3') ADVANCE(211);
      if (lookahead == '5') ADVANCE(146);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(109);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(183);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(104);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '5') ADVANCE(152);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(112);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(179);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(191);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(224);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(90);
      END_STATE();
    case 166:
      if (lookahead == '3') ADVANCE(101);
      END_STATE();
    case 167:
      if (lookahead == '4') ADVANCE(1872);
      END_STATE();
    case 168:
      if (lookahead == '4') ADVANCE(68);
      END_STATE();
    case 169:
      if (lookahead == '4') ADVANCE(1869);
      END_STATE();
    case 170:
      if (lookahead == '4') ADVANCE(1876);
      END_STATE();
    case 171:
      if (lookahead == '5') ADVANCE(1749);
      END_STATE();
    case 172:
      if (lookahead == '5') ADVANCE(198);
      END_STATE();
    case 173:
      if (lookahead == '5') ADVANCE(1874);
      END_STATE();
    case 174:
      if (lookahead == '5') ADVANCE(106);
      END_STATE();
    case 175:
      if (lookahead == '5') ADVANCE(204);
      END_STATE();
    case 176:
      if (lookahead == '5') ADVANCE(174);
      END_STATE();
    case 177:
      if (lookahead == '5') ADVANCE(199);
      END_STATE();
    case 178:
      if (lookahead == '5') ADVANCE(200);
      END_STATE();
    case 179:
      if (lookahead == '5') ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(201);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(203);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(207);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(206);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(202);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(123);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(124);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(119);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(122);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(184);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(189);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(190);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(127);
      END_STATE();
    case 195:
      if (lookahead == '5') ADVANCE(194);
      END_STATE();
    case 196:
      if (lookahead == '5') ADVANCE(225);
      END_STATE();
    case 197:
      if (lookahead == '5') ADVANCE(208);
      END_STATE();
    case 198:
      if (lookahead == '6') ADVANCE(1750);
      END_STATE();
    case 199:
      if (lookahead == '6') ADVANCE(1872);
      END_STATE();
    case 200:
      if (lookahead == '6') ADVANCE(1870);
      END_STATE();
    case 201:
      if (lookahead == '6') ADVANCE(1869);
      END_STATE();
    case 202:
      if (lookahead == '6') ADVANCE(1876);
      END_STATE();
    case 203:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 204:
      if (lookahead == '6') ADVANCE(1875);
      END_STATE();
    case 205:
      if (lookahead == '6') ADVANCE(107);
      END_STATE();
    case 206:
      if (lookahead == '6') ADVANCE(49);
      END_STATE();
    case 207:
      if (lookahead == '6') ADVANCE(223);
      END_STATE();
    case 208:
      if (lookahead == '6') ADVANCE(226);
      END_STATE();
    case 209:
      if (lookahead == '7') ADVANCE(205);
      END_STATE();
    case 210:
      if (lookahead == '8') ADVANCE(68);
      END_STATE();
    case 211:
      if (lookahead == '8') ADVANCE(169);
      END_STATE();
    case 212:
      if (lookahead == '8') ADVANCE(167);
      END_STATE();
    case 213:
      if (lookahead == '8') ADVANCE(170);
      END_STATE();
    case 214:
      if (lookahead == '8') ADVANCE(49);
      END_STATE();
    case 215:
      if (lookahead == '9') ADVANCE(1872);
      END_STATE();
    case 216:
      if (lookahead == '9') ADVANCE(1876);
      END_STATE();
    case 217:
      if (lookahead == '9') ADVANCE(53);
      END_STATE();
    case 218:
      if (lookahead == '9') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 219:
      if (lookahead == '9') ADVANCE(70);
      END_STATE();
    case 220:
      if (lookahead == '9') ADVANCE(75);
      END_STATE();
    case 221:
      if (lookahead == '9') ADVANCE(226);
      END_STATE();
    case 222:
      if (lookahead == '@') ADVANCE(523);
      END_STATE();
    case 223:
      if (lookahead == '@') ADVANCE(542);
      END_STATE();
    case 224:
      if (lookahead == '@') ADVANCE(543);
      END_STATE();
    case 225:
      if (lookahead == '@') ADVANCE(544);
      END_STATE();
    case 226:
      if (lookahead == '@') ADVANCE(545);
      END_STATE();
    case 227:
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1235);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1401);
      END_STATE();
    case 228:
      if (lookahead == 'A') ADVANCE(244);
      END_STATE();
    case 229:
      if (lookahead == 'A') ADVANCE(264);
      END_STATE();
    case 230:
      if (lookahead == 'B') ADVANCE(263);
      END_STATE();
    case 231:
      if (lookahead == 'B') ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(982);
      END_STATE();
    case 232:
      if (lookahead == 'C') ADVANCE(243);
      END_STATE();
    case 233:
      if (lookahead == 'E') ADVANCE(230);
      END_STATE();
    case 234:
      if (lookahead == 'E') ADVANCE(1120);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(1410);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1483);
      END_STATE();
    case 236:
      if (lookahead == 'E') ADVANCE(1865);
      END_STATE();
    case 237:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 238:
      if (lookahead == 'F') ADVANCE(248);
      END_STATE();
    case 239:
      if (lookahead == 'G') ADVANCE(1866);
      END_STATE();
    case 240:
      if (lookahead == 'H') ADVANCE(266);
      END_STATE();
    case 241:
      if (lookahead == 'H') ADVANCE(267);
      END_STATE();
    case 242:
      if (lookahead == 'I') ADVANCE(237);
      END_STATE();
    case 243:
      if (lookahead == 'K') ADVANCE(1767);
      END_STATE();
    case 244:
      if (lookahead == 'L') ADVANCE(1865);
      END_STATE();
    case 245:
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1400);
      END_STATE();
    case 246:
      if (lookahead == 'O') ADVANCE(789);
      if (lookahead == 'e') ADVANCE(1864);
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 247:
      if (lookahead == 'O') ADVANCE(1029);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1186);
      END_STATE();
    case 248:
      if (lookahead == 'O') ADVANCE(1865);
      END_STATE();
    case 249:
      if (lookahead == 'O') ADVANCE(257);
      END_STATE();
    case 250:
      if (lookahead == 'O') ADVANCE(232);
      END_STATE();
    case 251:
      if (lookahead == 'O') ADVANCE(255);
      END_STATE();
    case 252:
      if (lookahead == 'R') ADVANCE(253);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(786);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1052);
      END_STATE();
    case 253:
      if (lookahead == 'R') ADVANCE(251);
      END_STATE();
    case 254:
      if (lookahead == 'R') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(1050);
      END_STATE();
    case 255:
      if (lookahead == 'R') ADVANCE(1865);
      END_STATE();
    case 256:
      if (lookahead == 'S') ADVANCE(1802);
      if (lookahead == 'n') ADVANCE(1808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 257:
      if (lookahead == 'S') ADVANCE(236);
      END_STATE();
    case 258:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 259:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 260:
      if (lookahead == 'T') ADVANCE(1865);
      END_STATE();
    case 261:
      if (lookahead == 'T') ADVANCE(241);
      END_STATE();
    case 262:
      if (lookahead == 'U') ADVANCE(242);
      END_STATE();
    case 263:
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 264:
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 265:
      if (lookahead == '^') ADVANCE(1746);
      if (lookahead == 'n') ADVANCE(1745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1744);
      END_STATE();
    case 266:
      if (lookahead == '_') ADVANCE(229);
      END_STATE();
    case 267:
      if (lookahead == '_') ADVANCE(258);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(1872);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(1876);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 284:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 286:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 288:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 290:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 291:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 307:
      if (lookahead == 'b') ADVANCE(446);
      END_STATE();
    case 308:
      if (lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 309:
      if (lookahead == 'b') ADVANCE(318);
      END_STATE();
    case 310:
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 311:
      if (lookahead == 'b') ADVANCE(539);
      END_STATE();
    case 312:
      if (lookahead == 'b') ADVANCE(527);
      END_STATE();
    case 313:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 314:
      if (lookahead == 'b') ADVANCE(541);
      END_STATE();
    case 315:
      if (lookahead == 'b') ADVANCE(603);
      END_STATE();
    case 316:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(1864);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(786);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1052);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(1868);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(1867);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(524);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(649);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(529);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(533);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(534);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(1826);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(1867);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(1827);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(1886);
      if (lookahead == 'n') ADVANCE(1893);
      if (lookahead == 's') ADVANCE(1898);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(587);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1694);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(627);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(1717);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(828);
      END_STATE();
    case 400:
      if (lookahead == 'f') ADVANCE(1851);
      END_STATE();
    case 401:
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'f') ADVANCE(450);
      END_STATE();
    case 403:
      if (lookahead == 'f') ADVANCE(400);
      END_STATE();
    case 404:
      if (lookahead == 'f') ADVANCE(453);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(1869);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(412);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(389);
      END_STATE();
    case 408:
      if (lookahead == 'g') ADVANCE(574);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(501);
      END_STATE();
    case 410:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 411:
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(998);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1376);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1241);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(842);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(277);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(271);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(283);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(276);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 434:
      if (lookahead == 'h') ADVANCE(295);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(519);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 466:
      if (lookahead == 'k') ADVANCE(1704);
      END_STATE();
    case 467:
      if (lookahead == 'k') ADVANCE(1735);
      END_STATE();
    case 468:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 469:
      if (lookahead == 'k') ADVANCE(375);
      END_STATE();
    case 470:
      if (lookahead == 'k') ADVANCE(89);
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 471:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(870);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1305);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1625);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1335);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 480:
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1482);
      END_STATE();
    case 481:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(1869);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(1873);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(1871);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(1705);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(1876);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(1868);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(351);
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(457);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(843);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(893);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1400);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1330);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(1917);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(1734);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 546:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 547:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 548:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 549:
      if (lookahead == 'p') ADVANCE(662);
      END_STATE();
    case 550:
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 551:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 552:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 553:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 554:
      if (lookahead == 'p') ADVANCE(535);
      END_STATE();
    case 555:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 556:
      if (lookahead == 'p') ADVANCE(650);
      END_STATE();
    case 557:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 558:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 559:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 560:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 561:
      if (lookahead == 'p') ADVANCE(393);
      END_STATE();
    case 562:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 563:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(1868);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(1692);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1408);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(685);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(892);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1185);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(1872);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(1915);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(1876);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 583:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 585:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 586:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 591:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(639);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 594:
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 595:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 596:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 597:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 598:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 599:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 600:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 602:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(620);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(1864);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(1707);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(1856);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(1855);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 659:
      if (lookahead == 'u') ADVANCE(546);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(642);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 665:
      if (lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 667:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 668:
      if (lookahead == 'v') ADVANCE(387);
      END_STATE();
    case 669:
      if (lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 670:
      if (lookahead == 'w') ADVANCE(1850);
      END_STATE();
    case 671:
      if (lookahead == 'w') ADVANCE(350);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(691);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1153);
      END_STATE();
    case 672:
      if (lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 673:
      if (lookahead == 'w') ADVANCE(536);
      END_STATE();
    case 674:
      if (lookahead == 'x') ADVANCE(337);
      END_STATE();
    case 675:
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 676:
      if (lookahead == 'y') ADVANCE(1864);
      END_STATE();
    case 677:
      if (lookahead == 'y') ADVANCE(1800);
      END_STATE();
    case 678:
      if (lookahead == 'y') ADVANCE(1867);
      END_STATE();
    case 679:
      if (lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 680:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 681:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1408);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(685);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(892);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1185);
      END_STATE();
    case 682:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(998);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1376);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1241);
      END_STATE();
    case 683:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1542);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1239);
      END_STATE();
    case 684:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1626);
      END_STATE();
    case 685:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 686:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 687:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 688:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 689:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1218);
      END_STATE();
    case 690:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1668);
      END_STATE();
    case 691:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1138);
      END_STATE();
    case 692:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1383);
      END_STATE();
    case 693:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1488);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1412);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 694:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1665);
      END_STATE();
    case 695:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1150);
      END_STATE();
    case 696:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(991);
      END_STATE();
    case 697:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1382);
      END_STATE();
    case 698:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1194);
      END_STATE();
    case 699:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1421);
      END_STATE();
    case 700:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1179);
      END_STATE();
    case 701:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 702:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1149);
      END_STATE();
    case 703:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 704:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1500);
      END_STATE();
    case 705:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1415);
      END_STATE();
    case 706:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 707:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1142);
      END_STATE();
    case 708:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1143);
      END_STATE();
    case 709:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1151);
      END_STATE();
    case 710:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1572);
      END_STATE();
    case 711:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1184);
      END_STATE();
    case 712:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1462);
      END_STATE();
    case 713:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1497);
      END_STATE();
    case 714:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1546);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1403);
      END_STATE();
    case 716:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1145);
      END_STATE();
    case 717:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1423);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1491);
      END_STATE();
    case 719:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1165);
      END_STATE();
    case 720:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1427);
      END_STATE();
    case 721:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1146);
      END_STATE();
    case 722:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1429);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1582);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1431);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1484);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1282);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1631);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1156);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1006);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1252);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1155);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1554);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1061);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1594);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1388);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1253);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1204);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(804);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1561);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1163);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1060);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1256);
      END_STATE();
    case 743:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1205);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1502);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1260);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1262);
      END_STATE();
    case 747:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1566);
      END_STATE();
    case 748:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1522);
      END_STATE();
    case 749:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1265);
      END_STATE();
    case 750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1173);
      END_STATE();
    case 751:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1519);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1081);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1597);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1009);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1598);
      END_STATE();
    case 756:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1599);
      END_STATE();
    case 757:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1600);
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1601);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1602);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1603);
      END_STATE();
    case 761:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1604);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1605);
      END_STATE();
    case 763:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1181);
      END_STATE();
    case 764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1180);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1182);
      END_STATE();
    case 766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1183);
      END_STATE();
    case 767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(911);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1639);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1640);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1641);
      END_STATE();
    case 771:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1642);
      END_STATE();
    case 772:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1643);
      END_STATE();
    case 773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1644);
      END_STATE();
    case 774:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(851);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1667);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1300);
      END_STATE();
    case 775:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(702);
      END_STATE();
    case 776:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1124);
      END_STATE();
    case 777:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1160);
      END_STATE();
    case 778:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1338);
      END_STATE();
    case 779:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1086);
      END_STATE();
    case 780:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(706);
      END_STATE();
    case 781:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(949);
      END_STATE();
    case 782:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1135);
      END_STATE();
    case 783:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1016);
      END_STATE();
    case 784:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1628);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(850);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1653);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1485);
      END_STATE();
    case 785:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1134);
      END_STATE();
    case 786:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(692);
      END_STATE();
    case 787:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1457);
      END_STATE();
    case 788:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1024);
      END_STATE();
    case 789:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(691);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1153);
      END_STATE();
    case 790:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1136);
      END_STATE();
    case 791:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1618);
      END_STATE();
    case 792:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1458);
      END_STATE();
    case 793:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1302);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1316);
      END_STATE();
    case 794:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1606);
      END_STATE();
    case 795:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1532);
      END_STATE();
    case 796:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1283);
      END_STATE();
    case 797:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 798:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 799:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 800:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(711);
      END_STATE();
    case 801:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(905);
      END_STATE();
    case 802:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(721);
      END_STATE();
    case 803:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(880);
      END_STATE();
    case 804:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(881);
      END_STATE();
    case 805:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 806:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1020);
      END_STATE();
    case 807:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1596);
      END_STATE();
    case 808:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1435);
      END_STATE();
    case 809:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 810:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1281);
      END_STATE();
    case 811:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1368);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1627);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1503);
      END_STATE();
    case 812:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 813:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 814:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1370);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1359);
      END_STATE();
    case 815:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 816:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1371);
      END_STATE();
    case 817:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(756);
      END_STATE();
    case 818:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1372);
      END_STATE();
    case 819:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 820:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1373);
      END_STATE();
    case 821:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 822:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 823:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 824:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(761);
      END_STATE();
    case 825:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 826:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(970);
      END_STATE();
    case 827:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(826);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1621);
      END_STATE();
    case 828:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1121);
      END_STATE();
    case 829:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(729);
      END_STATE();
    case 830:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(767);
      END_STATE();
    case 831:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1775);
      END_STATE();
    case 832:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1776);
      END_STATE();
    case 833:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1819);
      END_STATE();
    case 834:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1829);
      END_STATE();
    case 835:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1830);
      END_STATE();
    case 836:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 837:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1755);
      END_STATE();
    case 838:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1774);
      END_STATE();
    case 839:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1798);
      END_STATE();
    case 840:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(828);
      END_STATE();
    case 841:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 842:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1070);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 843:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 844:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(861);
      END_STATE();
    case 845:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 846:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1689);
      END_STATE();
    case 847:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1068);
      END_STATE();
    case 848:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1439);
      END_STATE();
    case 849:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 850:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 851:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1072);
      END_STATE();
    case 852:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(985);
      END_STATE();
    case 853:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1329);
      END_STATE();
    case 854:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1266);
      END_STATE();
    case 855:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1391);
      END_STATE();
    case 856:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(934);
      END_STATE();
    case 857:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(938);
      END_STATE();
    case 858:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1172);
      END_STATE();
    case 859:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1394);
      END_STATE();
    case 860:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(962);
      END_STATE();
    case 861:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1449);
      END_STATE();
    case 862:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1036);
      END_STATE();
    case 863:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(765);
      END_STATE();
    case 864:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(766);
      END_STATE();
    case 865:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(769);
      END_STATE();
    case 866:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(771);
      END_STATE();
    case 867:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1120);
      END_STATE();
    case 868:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(842);
      END_STATE();
    case 869:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1666);
      END_STATE();
    case 870:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1674);
      END_STATE();
    case 871:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 872:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1764);
      END_STATE();
    case 873:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1709);
      END_STATE();
    case 874:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 875:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 876:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1840);
      END_STATE();
    case 877:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 878:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1768);
      END_STATE();
    case 879:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 880:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1857);
      END_STATE();
    case 881:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1711);
      END_STATE();
    case 882:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1725);
      END_STATE();
    case 883:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1833);
      END_STATE();
    case 884:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1860);
      END_STATE();
    case 885:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 886:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1747);
      END_STATE();
    case 887:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1756);
      END_STATE();
    case 888:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1741);
      END_STATE();
    case 889:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1410);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1483);
      END_STATE();
    case 890:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1646);
      END_STATE();
    case 891:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1683);
      END_STATE();
    case 892:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 893:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1402);
      END_STATE();
    case 894:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 895:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 896:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1630);
      END_STATE();
    case 897:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1676);
      END_STATE();
    case 898:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 899:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 900:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1397);
      END_STATE();
    case 901:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 902:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 903:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1688);
      END_STATE();
    case 904:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 905:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1395);
      END_STATE();
    case 906:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1679);
      END_STATE();
    case 907:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      END_STATE();
    case 908:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1419);
      END_STATE();
    case 909:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 910:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 911:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1686);
      END_STATE();
    case 912:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1414);
      END_STATE();
    case 913:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 914:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1141);
      END_STATE();
    case 915:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1514);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1486);
      END_STATE();
    case 917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1675);
      END_STATE();
    case 918:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 919:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1678);
      END_STATE();
    case 920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 921:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1512);
      END_STATE();
    case 922:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1672);
      END_STATE();
    case 923:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1276);
      END_STATE();
    case 924:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1334);
      END_STATE();
    case 925:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 926:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1312);
      END_STATE();
    case 927:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 928:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1456);
      END_STATE();
    case 929:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1494);
      END_STATE();
    case 930:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1417);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 932:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1469);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1479);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1648);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      END_STATE();
    case 943:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1493);
      END_STATE();
    case 944:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1210);
      END_STATE();
    case 945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1677);
      END_STATE();
    case 947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1425);
      END_STATE();
    case 948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1418);
      END_STATE();
    case 950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1680);
      END_STATE();
    case 951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1430);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 953:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 954:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1681);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 956:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1434);
      END_STATE();
    case 957:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1261);
      END_STATE();
    case 958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1264);
      END_STATE();
    case 959:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1267);
      END_STATE();
    case 960:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1447);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1277);
      END_STATE();
    case 963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1341);
      END_STATE();
    case 964:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1278);
      END_STATE();
    case 965:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 970:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 971:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1289);
      END_STATE();
    case 972:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1290);
      END_STATE();
    case 973:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1291);
      END_STATE();
    case 974:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1292);
      END_STATE();
    case 975:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1293);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1294);
      END_STATE();
    case 977:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1295);
      END_STATE();
    case 978:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1296);
      END_STATE();
    case 979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 981:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 982:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1687);
      END_STATE();
    case 983:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(855);
      END_STATE();
    case 984:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(703);
      END_STATE();
    case 985:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(733);
      END_STATE();
    case 986:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1384);
      END_STATE();
    case 987:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(738);
      END_STATE();
    case 988:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1328);
      END_STATE();
    case 989:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(920);
      END_STATE();
    case 990:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1076);
      END_STATE();
    case 991:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1587);
      END_STATE();
    case 992:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1085);
      END_STATE();
    case 993:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(740);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1351);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(690);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(960);
      END_STATE();
    case 994:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1356);
      END_STATE();
    case 995:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1088);
      END_STATE();
    case 996:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1089);
      END_STATE();
    case 997:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1362);
      END_STATE();
    case 998:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1853);
      END_STATE();
    case 999:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1849);
      END_STATE();
    case 1000:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1272);
      END_STATE();
    case 1001:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1226);
      END_STATE();
    case 1002:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1473);
      END_STATE();
    case 1003:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(912);
      END_STATE();
    case 1004:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1354);
      END_STATE();
    case 1005:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(956);
      END_STATE();
    case 1006:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(957);
      END_STATE();
    case 1007:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(958);
      END_STATE();
    case 1008:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(747);
      END_STATE();
    case 1009:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(959);
      END_STATE();
    case 1010:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1358);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 1011:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1361);
      END_STATE();
    case 1012:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1364);
      END_STATE();
    case 1013:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1366);
      END_STATE();
    case 1014:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1737);
      END_STATE();
    case 1015:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1748);
      END_STATE();
    case 1016:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1189);
      END_STATE();
    case 1017:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1158);
      END_STATE();
    case 1018:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1193);
      END_STATE();
    case 1019:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(718);
      END_STATE();
    case 1020:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(913);
      END_STATE();
    case 1021:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(908);
      END_STATE();
    case 1022:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1197);
      END_STATE();
    case 1023:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(923);
      END_STATE();
    case 1024:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(715);
      END_STATE();
    case 1025:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1200);
      END_STATE();
    case 1026:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1202);
      END_STATE();
    case 1027:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1127);
      END_STATE();
    case 1028:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1203);
      END_STATE();
    case 1029:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1330);
      END_STATE();
    case 1030:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1344);
      END_STATE();
    case 1031:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1346);
      END_STATE();
    case 1032:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1348);
      END_STATE();
    case 1033:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1357);
      END_STATE();
    case 1034:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1360);
      END_STATE();
    case 1035:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1363);
      END_STATE();
    case 1036:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1365);
      END_STATE();
    case 1037:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1350);
      END_STATE();
    case 1038:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1352);
      END_STATE();
    case 1039:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1369);
      END_STATE();
    case 1040:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(971);
      END_STATE();
    case 1041:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(972);
      END_STATE();
    case 1042:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(973);
      END_STATE();
    case 1043:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(974);
      END_STATE();
    case 1044:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(975);
      END_STATE();
    case 1045:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(976);
      END_STATE();
    case 1046:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(977);
      END_STATE();
    case 1047:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(978);
      END_STATE();
    case 1048:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1235);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1401);
      END_STATE();
    case 1049:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(768);
      END_STATE();
    case 1050:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(982);
      END_STATE();
    case 1051:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1000);
      END_STATE();
    case 1052:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1573);
      END_STATE();
    case 1053:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(990);
      END_STATE();
    case 1054:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1378);
      END_STATE();
    case 1055:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1531);
      END_STATE();
    case 1056:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1533);
      END_STATE();
    case 1057:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1545);
      END_STATE();
    case 1058:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      END_STATE();
    case 1059:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1157);
      END_STATE();
    case 1060:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1263);
      END_STATE();
    case 1061:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1170);
      END_STATE();
    case 1062:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1534);
      END_STATE();
    case 1063:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1247);
      END_STATE();
    case 1064:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1571);
      END_STATE();
    case 1065:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(921);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(752);
      END_STATE();
    case 1066:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 1067:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 1068:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1242);
      END_STATE();
    case 1069:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1690);
      END_STATE();
    case 1070:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1251);
      END_STATE();
    case 1071:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1001);
      END_STATE();
    case 1072:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1250);
      END_STATE();
    case 1073:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1201);
      END_STATE();
    case 1074:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 1075:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 1076:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 1077:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1245);
      END_STATE();
    case 1078:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1650);
      END_STATE();
    case 1079:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1336);
      END_STATE();
    case 1080:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1651);
      END_STATE();
    case 1081:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1166);
      END_STATE();
    case 1082:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1073);
      END_STATE();
    case 1083:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1259);
      END_STATE();
    case 1084:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1652);
      END_STATE();
    case 1085:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1167);
      END_STATE();
    case 1086:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1258);
      END_STATE();
    case 1087:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1313);
      END_STATE();
    case 1088:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1168);
      END_STATE();
    case 1089:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1169);
      END_STATE();
    case 1090:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1317);
      END_STATE();
    case 1091:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1320);
      END_STATE();
    case 1092:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1507);
      END_STATE();
    case 1093:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1321);
      END_STATE();
    case 1094:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1322);
      END_STATE();
    case 1095:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1323);
      END_STATE();
    case 1096:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1324);
      END_STATE();
    case 1097:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1339);
      END_STATE();
    case 1098:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1326);
      END_STATE();
    case 1099:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1327);
      END_STATE();
    case 1100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1208);
      END_STATE();
    case 1101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(857);
      END_STATE();
    case 1102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1576);
      END_STATE();
    case 1103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1588);
      END_STATE();
    case 1104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1355);
      END_STATE();
    case 1105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1212);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1638);
      END_STATE();
    case 1106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1578);
      END_STATE();
    case 1107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1579);
      END_STATE();
    case 1108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 1109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 1110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 1111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(817);
      END_STATE();
    case 1112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 1113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(821);
      END_STATE();
    case 1114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 1115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 1116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(824);
      END_STATE();
    case 1117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(825);
      END_STATE();
    case 1118:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1845);
      END_STATE();
    case 1119:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1848);
      END_STATE();
    case 1120:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(870);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1305);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1625);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1335);
      END_STATE();
    case 1121:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(891);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(943);
      END_STATE();
    case 1122:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(696);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(705);
      END_STATE();
    case 1123:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(927);
      END_STATE();
    case 1124:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(897);
      END_STATE();
    case 1125:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(901);
      END_STATE();
    case 1126:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(903);
      END_STATE();
    case 1127:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(906);
      END_STATE();
    case 1128:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(917);
      END_STATE();
    case 1129:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(919);
      END_STATE();
    case 1130:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(922);
      END_STATE();
    case 1131:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(950);
      END_STATE();
    case 1132:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1271);
      END_STATE();
    case 1133:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(954);
      END_STATE();
    case 1134:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1077);
      END_STATE();
    case 1135:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1030);
      END_STATE();
    case 1136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1176);
      END_STATE();
    case 1137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1288);
      END_STATE();
    case 1138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 1139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1854);
      END_STATE();
    case 1140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1192);
      END_STATE();
    case 1141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1777);
      END_STATE();
    case 1142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      END_STATE();
    case 1143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1010);
      END_STATE();
    case 1144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1844);
      END_STATE();
    case 1145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1839);
      END_STATE();
    case 1146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1713);
      END_STATE();
    case 1147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1159);
      END_STATE();
    case 1148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1489);
      END_STATE();
    case 1149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1137);
      END_STATE();
    case 1150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1004);
      END_STATE();
    case 1151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      END_STATE();
    case 1152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(780);
      END_STATE();
    case 1153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(940);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(918);
      END_STATE();
    case 1154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1100);
      END_STATE();
    case 1155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1078);
      END_STATE();
    case 1156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1178);
      END_STATE();
    case 1157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1671);
      END_STATE();
    case 1158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1340);
      END_STATE();
    case 1159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(964);
      END_STATE();
    case 1160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(871);
      END_STATE();
    case 1161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1144);
      END_STATE();
    case 1162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1673);
      END_STATE();
    case 1163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 1164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 1165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1478);
      END_STATE();
    case 1166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(878);
      END_STATE();
    case 1167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 1168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 1169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(887);
      END_STATE();
    case 1170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1636);
      END_STATE();
    case 1171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1063);
      END_STATE();
    case 1172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1074);
      END_STATE();
    case 1173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1080);
      END_STATE();
    case 1174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1343);
      END_STATE();
    case 1175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(944);
      END_STATE();
    case 1176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1347);
      END_STATE();
    case 1177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1349);
      END_STATE();
    case 1178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(997);
      END_STATE();
    case 1179:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1035);
      END_STATE();
    case 1180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1038);
      END_STATE();
    case 1181:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1011);
      END_STATE();
    case 1182:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 1183:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1013);
      END_STATE();
    case 1184:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      END_STATE();
    case 1185:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1381);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 1186:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(781);
      END_STATE();
    case 1187:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1377);
      END_STATE();
    case 1188:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1195);
      END_STATE();
    case 1189:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1311);
      END_STATE();
    case 1190:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1385);
      END_STATE();
    case 1191:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1059);
      END_STATE();
    case 1192:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(748);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(714);
      END_STATE();
    case 1193:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1463);
      END_STATE();
    case 1194:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(872);
      END_STATE();
    case 1195:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(730);
      END_STATE();
    case 1196:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(741);
      END_STATE();
    case 1197:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1470);
      END_STATE();
    case 1198:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(725);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1257);
      END_STATE();
    case 1199:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 1200:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1474);
      END_STATE();
    case 1201:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(924);
      END_STATE();
    case 1202:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1477);
      END_STATE();
    case 1203:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1480);
      END_STATE();
    case 1204:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(885);
      END_STATE();
    case 1205:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(939);
      END_STATE();
    case 1206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1055);
      END_STATE();
    case 1207:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1386);
      END_STATE();
    case 1208:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1062);
      END_STATE();
    case 1209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1103);
      END_STATE();
    case 1210:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1342);
      END_STATE();
    case 1211:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(736);
      END_STATE();
    case 1212:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(963);
      END_STATE();
    case 1213:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(742);
      END_STATE();
    case 1214:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(745);
      END_STATE();
    case 1215:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(746);
      END_STATE();
    case 1216:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(749);
      END_STATE();
    case 1217:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1211);
      END_STATE();
    case 1218:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1174);
      END_STATE();
    case 1219:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1213);
      END_STATE();
    case 1220:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1214);
      END_STATE();
    case 1221:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1215);
      END_STATE();
    case 1222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1216);
      END_STATE();
    case 1223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1730);
      END_STATE();
    case 1224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1769);
      END_STATE();
    case 1225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1863);
      END_STATE();
    case 1226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1742);
      END_STATE();
    case 1227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1799);
      END_STATE();
    case 1228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1757);
      END_STATE();
    case 1229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1825);
      END_STATE();
    case 1230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1797);
      END_STATE();
    case 1231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1751);
      END_STATE();
    case 1232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1761);
      END_STATE();
    case 1233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1771);
      END_STATE();
    case 1234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1772);
      END_STATE();
    case 1235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1003);
      END_STATE();
    case 1236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1645);
      END_STATE();
    case 1237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1303);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1051);
      END_STATE();
    case 1238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(994);
      END_STATE();
    case 1239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 1240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1306);
      END_STATE();
    case 1241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1249);
      END_STATE();
    case 1242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 1243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1635);
      END_STATE();
    case 1244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 1245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 1246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1575);
      END_STATE();
    case 1247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1119);
      END_STATE();
    case 1248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(945);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1416);
      END_STATE();
    case 1249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      END_STATE();
    case 1250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1585);
      END_STATE();
    case 1251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1243);
      END_STATE();
    case 1252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 1253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 1254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1547);
      END_STATE();
    case 1255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 1256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 1257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1171);
      END_STATE();
    case 1258:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 1259:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1548);
      END_STATE();
    case 1260:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 1261:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1535);
      END_STATE();
    case 1262:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 1263:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1467);
      END_STATE();
    case 1264:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1536);
      END_STATE();
    case 1265:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 1266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1468);
      END_STATE();
    case 1267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1537);
      END_STATE();
    case 1268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1577);
      END_STATE();
    case 1269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1476);
      END_STATE();
    case 1270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      END_STATE();
    case 1271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1331);
      END_STATE();
    case 1272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 1273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 1274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 1275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1528);
      END_STATE();
    case 1276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1595);
      END_STATE();
    case 1277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1555);
      END_STATE();
    case 1278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1005);
      END_STATE();
    case 1279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1132);
      END_STATE();
    case 1280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 1281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 1282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1590);
      END_STATE();
    case 1283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1592);
      END_STATE();
    case 1284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1031);
      END_STATE();
    case 1285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1037);
      END_STATE();
    case 1286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1039);
      END_STATE();
    case 1287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1374);
      END_STATE();
    case 1288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1375);
      END_STATE();
    case 1289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1608);
      END_STATE();
    case 1290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1609);
      END_STATE();
    case 1291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1610);
      END_STATE();
    case 1292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1611);
      END_STATE();
    case 1293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1612);
      END_STATE();
    case 1294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1613);
      END_STATE();
    case 1295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1614);
      END_STATE();
    case 1296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1615);
      END_STATE();
    case 1297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1482);
      END_STATE();
    case 1298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(789);
      END_STATE();
    case 1299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1029);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1186);
      END_STATE();
    case 1300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1655);
      END_STATE();
    case 1301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 1302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1188);
      END_STATE();
    case 1303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1244);
      END_STATE();
    case 1304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(986);
      END_STATE();
    case 1305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1553);
      END_STATE();
    case 1306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1424);
      END_STATE();
    case 1307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1459);
      END_STATE();
    case 1308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1637);
      END_STATE();
    case 1309:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1238);
      END_STATE();
    case 1310:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1140);
      END_STATE();
    case 1311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 1312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1393);
      END_STATE();
    case 1313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1223);
      END_STATE();
    case 1314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1255);
      END_STATE();
    case 1315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1420);
      END_STATE();
    case 1316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 1317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1225);
      END_STATE();
    case 1318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1275);
      END_STATE();
    case 1319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(754);
      END_STATE();
    case 1320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1228);
      END_STATE();
    case 1321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1229);
      END_STATE();
    case 1322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1230);
      END_STATE();
    case 1323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1231);
      END_STATE();
    case 1324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1232);
      END_STATE();
    case 1325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1432);
      END_STATE();
    case 1326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1233);
      END_STATE();
    case 1327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1234);
      END_STATE();
    case 1328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1454);
      END_STATE();
    case 1329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1560);
      END_STATE();
    case 1330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1492);
      END_STATE();
    case 1331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1656);
      END_STATE();
    case 1332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1647);
      END_STATE();
    case 1333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1196);
      END_STATE();
    case 1334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1633);
      END_STATE();
    case 1335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1125);
      END_STATE();
    case 1336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1254);
      END_STATE();
    case 1337:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1207);
      END_STATE();
    case 1338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1506);
      END_STATE();
    case 1339:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1269);
      END_STATE();
    case 1340:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(798);
      END_STATE();
    case 1341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1634);
      END_STATE();
    case 1342:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1563);
      END_STATE();
    case 1343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(799);
      END_STATE();
    case 1344:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1510);
      END_STATE();
    case 1345:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 1346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1499);
      END_STATE();
    case 1347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(802);
      END_STATE();
    case 1348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1501);
      END_STATE();
    case 1349:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 1350:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1505);
      END_STATE();
    case 1351:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1508);
      END_STATE();
    case 1352:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1509);
      END_STATE();
    case 1353:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1274);
      END_STATE();
    case 1354:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1442);
      END_STATE();
    case 1355:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1280);
      END_STATE();
    case 1356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1443);
      END_STATE();
    case 1357:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1520);
      END_STATE();
    case 1358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1446);
      END_STATE();
    case 1359:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1448);
      END_STATE();
    case 1360:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1521);
      END_STATE();
    case 1361:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1450);
      END_STATE();
    case 1362:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1451);
      END_STATE();
    case 1363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1523);
      END_STATE();
    case 1364:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1452);
      END_STATE();
    case 1365:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1524);
      END_STATE();
    case 1366:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1453);
      END_STATE();
    case 1367:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1654);
      END_STATE();
    case 1368:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1217);
      END_STATE();
    case 1369:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1527);
      END_STATE();
    case 1370:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1219);
      END_STATE();
    case 1371:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1220);
      END_STATE();
    case 1372:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1221);
      END_STATE();
    case 1373:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1222);
      END_STATE();
    case 1374:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1663);
      END_STATE();
    case 1375:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 1376:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1123);
      END_STATE();
    case 1377:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1820);
      END_STATE();
    case 1378:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1726);
      END_STATE();
    case 1379:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 1380:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(843);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(893);
      END_STATE();
    case 1381:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1444);
      END_STATE();
    case 1382:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1049);
      END_STATE();
    case 1383:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(898);
      END_STATE();
    case 1384:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(751);
      END_STATE();
    case 1385:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1559);
      END_STATE();
    case 1386:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1562);
      END_STATE();
    case 1387:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(876);
      END_STATE();
    case 1388:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(969);
      END_STATE();
    case 1389:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 1390:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1445);
      END_STATE();
    case 1391:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(744);
      END_STATE();
    case 1392:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1422);
      END_STATE();
    case 1393:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(931);
      END_STATE();
    case 1394:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1428);
      END_STATE();
    case 1395:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1564);
      END_STATE();
    case 1396:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1318);
      END_STATE();
    case 1397:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(750);
      END_STATE();
    case 1398:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1455);
      END_STATE();
    case 1399:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1616);
      END_STATE();
    case 1400:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1307);
      END_STATE();
    case 1401:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      END_STATE();
    case 1402:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 1403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1743);
      END_STATE();
    case 1404:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1733);
      END_STATE();
    case 1405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1816);
      END_STATE();
    case 1406:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1835);
      END_STATE();
    case 1407:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1206);
      END_STATE();
    case 1408:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1544);
      END_STATE();
    case 1409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1658);
      END_STATE();
    case 1410:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1050);
      END_STATE();
    case 1411:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1649);
      END_STATE();
    case 1412:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1530);
      END_STATE();
    case 1413:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 1414:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1390);
      END_STATE();
    case 1415:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(829);
      END_STATE();
    case 1416:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1310);
      END_STATE();
    case 1417:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(987);
      END_STATE();
    case 1418:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1304);
      END_STATE();
    case 1419:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1460);
      END_STATE();
    case 1420:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 1421:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 1422:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1332);
      END_STATE();
    case 1423:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 1424:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 1425:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 1426:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1496);
      END_STATE();
    case 1427:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 1428:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1337);
      END_STATE();
    case 1429:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(835);
      END_STATE();
    case 1430:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 1431:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 1432:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(859);
      END_STATE();
    case 1433:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(981);
      END_STATE();
    case 1434:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 1435:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 1436:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 1437:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 1438:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 1439:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1504);
      END_STATE();
    case 1440:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1433);
      END_STATE();
    case 1441:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      END_STATE();
    case 1442:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 1443:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1659);
      END_STATE();
    case 1444:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(953);
      END_STATE();
    case 1445:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1083);
      END_STATE();
    case 1446:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1102);
      END_STATE();
    case 1447:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1209);
      END_STATE();
    case 1448:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1661);
      END_STATE();
    case 1449:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(955);
      END_STATE();
    case 1450:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1106);
      END_STATE();
    case 1451:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1662);
      END_STATE();
    case 1452:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1107);
      END_STATE();
    case 1453:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      END_STATE();
    case 1454:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1177);
      END_STATE();
    case 1455:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1367);
      END_STATE();
    case 1456:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 1457:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1794);
      END_STATE();
    case 1458:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 1459:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1770);
      END_STATE();
    case 1460:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1727);
      END_STATE();
    case 1461:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1710);
      END_STATE();
    case 1462:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1763);
      END_STATE();
    case 1463:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1773);
      END_STATE();
    case 1464:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1858);
      END_STATE();
    case 1465:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1823);
      END_STATE();
    case 1466:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1834);
      END_STATE();
    case 1467:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1712);
      END_STATE();
    case 1468:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1861);
      END_STATE();
    case 1469:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1760);
      END_STATE();
    case 1470:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1762);
      END_STATE();
    case 1471:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1731);
      END_STATE();
    case 1472:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1715);
      END_STATE();
    case 1473:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1729);
      END_STATE();
    case 1474:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1722);
      END_STATE();
    case 1475:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1796);
      END_STATE();
    case 1476:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1818);
      END_STATE();
    case 1477:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1824);
      END_STATE();
    case 1478:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1758);
      END_STATE();
    case 1479:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1716);
      END_STATE();
    case 1480:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1759);
      END_STATE();
    case 1481:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1482:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1529);
      END_STATE();
    case 1483:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1629);
      END_STATE();
    case 1484:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1118);
      END_STATE();
    case 1485:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 1486:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 1487:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(984);
      END_STATE();
    case 1488:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1481);
      END_STATE();
    case 1489:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      END_STATE();
    case 1490:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(816);
      END_STATE();
    case 1491:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1015);
      END_STATE();
    case 1492:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1569);
      END_STATE();
    case 1493:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1487);
      END_STATE();
    case 1494:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1495:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1574);
      END_STATE();
    case 1496:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1092);
      END_STATE();
    case 1497:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1069);
      END_STATE();
    case 1498:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1461);
      END_STATE();
    case 1499:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1552);
      END_STATE();
    case 1500:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      END_STATE();
    case 1501:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1580);
      END_STATE();
    case 1502:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1465);
      END_STATE();
    case 1503:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(902);
      END_STATE();
    case 1504:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      END_STATE();
    case 1505:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1558);
      END_STATE();
    case 1506:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(874);
      END_STATE();
    case 1507:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1539);
      END_STATE();
    case 1508:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1557);
      END_STATE();
    case 1509:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1541);
      END_STATE();
    case 1510:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1550);
      END_STATE();
    case 1511:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1551);
      END_STATE();
    case 1512:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1314);
      END_STATE();
    case 1513:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1567);
      END_STATE();
    case 1514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(805);
      END_STATE();
    case 1515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1071);
      END_STATE();
    case 1516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1660);
      END_STATE();
    case 1517:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1087);
      END_STATE();
    case 1518:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1517);
      END_STATE();
    case 1519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1516);
      END_STATE();
    case 1520:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1583);
      END_STATE();
    case 1521:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1584);
      END_STATE();
    case 1522:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1591);
      END_STATE();
    case 1523:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1586);
      END_STATE();
    case 1524:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1589);
      END_STATE();
    case 1525:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(995);
      END_STATE();
    case 1526:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(996);
      END_STATE();
    case 1527:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1607);
      END_STATE();
    case 1528:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(980);
      END_STATE();
    case 1529:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1701);
      END_STATE();
    case 1530:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1817);
      END_STATE();
    case 1531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1175);
      END_STATE();
    case 1532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1082);
      END_STATE();
    case 1533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1065);
      END_STATE();
    case 1534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1828);
      END_STATE();
    case 1535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1752);
      END_STATE();
    case 1536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1766);
      END_STATE();
    case 1537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1703);
      END_STATE();
    case 1538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1732);
      END_STATE();
    case 1539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1736);
      END_STATE();
    case 1540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1754);
      END_STATE();
    case 1541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1795);
      END_STATE();
    case 1542:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(783);
      END_STATE();
    case 1543:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 1544:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1053);
      END_STATE();
    case 1545:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1684);
      END_STATE();
    case 1546:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1014);
      END_STATE();
    case 1547:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1682);
      END_STATE();
    case 1548:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 1549:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1670);
      END_STATE();
    case 1550:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      END_STATE();
    case 1551:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1319);
      END_STATE();
    case 1552:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1490);
      END_STATE();
    case 1553:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      END_STATE();
    case 1554:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(966);
      END_STATE();
    case 1555:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1066);
      END_STATE();
    case 1556:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1549);
      END_STATE();
    case 1557:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1273);
      END_STATE();
    case 1558:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1525);
      END_STATE();
    case 1559:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1471);
      END_STATE();
    case 1560:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1472);
      END_STATE();
    case 1561:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(942);
      END_STATE();
    case 1562:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1475);
      END_STATE();
    case 1563:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(926);
      END_STATE();
    case 1564:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(941);
      END_STATE();
    case 1565:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(948);
      END_STATE();
    case 1566:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      END_STATE();
    case 1567:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(932);
      END_STATE();
    case 1568:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(935);
      END_STATE();
    case 1569:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      END_STATE();
    case 1570:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      END_STATE();
    case 1571:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1018);
      END_STATE();
    case 1572:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1632);
      END_STATE();
    case 1573:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1309);
      END_STATE();
    case 1574:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1556);
      END_STATE();
    case 1575:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 1576:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 1577:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1578:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 1579:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1026);
      END_STATE();
    case 1580:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1581:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1028);
      END_STATE();
    case 1582:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1565);
      END_STATE();
    case 1583:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 1584:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1129);
      END_STATE();
    case 1585:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(925);
      END_STATE();
    case 1586:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1130);
      END_STATE();
    case 1587:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      END_STATE();
    case 1588:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1568);
      END_STATE();
    case 1589:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1590:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(930);
      END_STATE();
    case 1591:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      END_STATE();
    case 1592:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(936);
      END_STATE();
    case 1593:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1685);
      END_STATE();
    case 1594:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1090);
      END_STATE();
    case 1595:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1109);
      END_STATE();
    case 1596:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1084);
      END_STATE();
    case 1597:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 1598:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1091);
      END_STATE();
    case 1599:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 1600:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 1601:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1095);
      END_STATE();
    case 1602:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 1603:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1097);
      END_STATE();
    case 1604:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1098);
      END_STATE();
    case 1605:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1099);
      END_STATE();
    case 1606:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 1607:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1526);
      END_STATE();
    case 1608:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 1609:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1111);
      END_STATE();
    case 1610:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 1611:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1113);
      END_STATE();
    case 1612:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 1613:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1115);
      END_STATE();
    case 1614:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 1615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      END_STATE();
    case 1616:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(968);
      END_STATE();
    case 1617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1040);
      END_STATE();
    case 1618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 1619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1042);
      END_STATE();
    case 1620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1043);
      END_STATE();
    case 1621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 1622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1045);
      END_STATE();
    case 1623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1046);
      END_STATE();
    case 1624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1047);
      END_STATE();
    case 1625:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(951);
      END_STATE();
    case 1626:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1543);
      END_STATE();
    case 1627:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1187);
      END_STATE();
    case 1628:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1441);
      END_STATE();
    case 1629:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(700);
      END_STATE();
    case 1630:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1279);
      END_STATE();
    case 1631:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1570);
      END_STATE();
    case 1632:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1438);
      END_STATE();
    case 1633:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1538);
      END_STATE();
    case 1634:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1540);
      END_STATE();
    case 1635:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1161);
      END_STATE();
    case 1636:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1436);
      END_STATE();
    case 1637:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1268);
      END_STATE();
    case 1638:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1513);
      END_STATE();
    case 1639:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1617);
      END_STATE();
    case 1640:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1619);
      END_STATE();
    case 1641:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1620);
      END_STATE();
    case 1642:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1622);
      END_STATE();
    case 1643:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1623);
      END_STATE();
    case 1644:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1624);
      END_STATE();
    case 1645:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1836);
      END_STATE();
    case 1646:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1075);
      END_STATE();
    case 1647:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1058);
      END_STATE();
    case 1648:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(914);
      END_STATE();
    case 1649:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(716);
      END_STATE();
    case 1650:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(875);
      END_STATE();
    case 1651:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(879);
      END_STATE();
    case 1652:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(979);
      END_STATE();
    case 1653:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(947);
      END_STATE();
    case 1654:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1101);
      END_STATE();
    case 1655:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1284);
      END_STATE();
    case 1656:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1224);
      END_STATE();
    case 1657:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1315);
      END_STATE();
    case 1658:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(717);
      END_STATE();
    case 1659:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(720);
      END_STATE();
    case 1660:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1325);
      END_STATE();
    case 1661:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(722);
      END_STATE();
    case 1662:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(724);
      END_STATE();
    case 1663:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1285);
      END_STATE();
    case 1664:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1286);
      END_STATE();
    case 1665:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1838);
      END_STATE();
    case 1666:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1669);
      END_STATE();
    case 1667:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(695);
      END_STATE();
    case 1668:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(853);
      END_STATE();
    case 1669:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(811);
      END_STATE();
    case 1670:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1831);
      END_STATE();
    case 1671:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1706);
      END_STATE();
    case 1672:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1862);
      END_STATE();
    case 1673:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1765);
      END_STATE();
    case 1674:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1154);
      END_STATE();
    case 1675:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(806);
      END_STATE();
    case 1676:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(686);
      END_STATE();
    case 1677:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(708);
      END_STATE();
    case 1678:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(854);
      END_STATE();
    case 1679:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1515);
      END_STATE();
    case 1680:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1464);
      END_STATE();
    case 1681:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1466);
      END_STATE();
    case 1682:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1387);
      END_STATE();
    case 1683:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1511);
      END_STATE();
    case 1684:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1126);
      END_STATE();
    case 1685:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1389);
      END_STATE();
    case 1686:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1593);
      END_STATE();
    case 1687:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1034);
      END_STATE();
    case 1688:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1398);
      END_STATE();
    case 1689:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(877);
      END_STATE();
    case 1690:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(883);
      END_STATE();
    case 1691:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1864);
      END_STATE();
    case 1692:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1864);
      END_STATE();
    case 1693:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1847);
      END_STATE();
    case 1694:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1846);
      END_STATE();
    case 1695:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1693);
      END_STATE();
    case 1696:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1694);
      END_STATE();
    case 1697:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1698:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 1699:
      if (eof) ADVANCE(1700);
      if (lookahead == '\n') ADVANCE(1931);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1779);
      if (lookahead == '#') ADVANCE(1927);
      if (lookahead == '*') ADVANCE(1738);
      if (lookahead == '+') ADVANCE(1723);
      if (lookahead == ',') ADVANCE(1720);
      if (lookahead == '-') ADVANCE(1724);
      if (lookahead == '0') ADVANCE(1919);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '=') ADVANCE(1843);
      if (lookahead == '@') ADVANCE(1821);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(681);
      if (lookahead == 'D') ADVANCE(233);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == 'F') ADVANCE(227);
      if (lookahead == 'H') ADVANCE(1297);
      if (lookahead == 'I') ADVANCE(245);
      if (lookahead == 'L') ADVANCE(1298);
      if (lookahead == 'M') ADVANCE(687);
      if (lookahead == 'N') ADVANCE(1299);
      if (lookahead == 'Q') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(867);
      if (lookahead == 'S') ADVANCE(868);
      if (lookahead == 'T') ADVANCE(682);
      if (lookahead == 'U') ADVANCE(1380);
      if (lookahead == 'V') ADVANCE(235);
      if (lookahead == '^') ADVANCE(1728);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(1048);
      if (lookahead == 'h') ADVANCE(480);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead == 'v') ADVANCE(889);
      if (lookahead == 'w') ADVANCE(363);
      if (lookahead == '}') ADVANCE(1905);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(683);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1148);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(774);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(693);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(684);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1920);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(704);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(946);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1708);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1744);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == 'T') ADVANCE(1881);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1877);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1877);
      if (lookahead == 'H' ||
          lookahead == 'I' ||
          lookahead == 'K' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(1878);
      if (lookahead == 'C' ||
          lookahead == 'L' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'k' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(1877);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1902);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1904);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1879);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1880);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1877);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1878);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1881);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'S') ADVANCE(1802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'e') ADVANCE(1809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'e') ADVANCE(1719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'n') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'n') ADVANCE(1804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'o') ADVANCE(1918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'o') ADVANCE(1806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 's') ADVANCE(1916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'y') ADVANCE(1801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == '{') ADVANCE(1903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__proxy_jump_arg_token1);
      if (lookahead == 'S') ADVANCE(1822);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_subsystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1846);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(890);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1287);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1865);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(478);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(328);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(378);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(1902);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'a') ADVANCE(1899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'b') ADVANCE(1894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'f') ADVANCE(1884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'l') ADVANCE(1896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'm') ADVANCE(1841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'n') ADVANCE(1887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'o') ADVANCE(1892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(1900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(1897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(1885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(1890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'y') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1901);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1815);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'S') ADVANCE(240);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '{') ADVANCE(1902);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1879);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1880);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1877);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1878);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1881);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1814);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1920);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1927);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1928);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(1928);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1929);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1930);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1699},
  [2] = {.lex_state = 1699},
  [3] = {.lex_state = 1699},
  [4] = {.lex_state = 1699},
  [5] = {.lex_state = 1699},
  [6] = {.lex_state = 1699},
  [7] = {.lex_state = 1699},
  [8] = {.lex_state = 1699},
  [9] = {.lex_state = 1699},
  [10] = {.lex_state = 1699},
  [11] = {.lex_state = 1699},
  [12] = {.lex_state = 1699},
  [13] = {.lex_state = 1699},
  [14] = {.lex_state = 1699},
  [15] = {.lex_state = 1699},
  [16] = {.lex_state = 1699},
  [17] = {.lex_state = 1699},
  [18] = {.lex_state = 1699},
  [19] = {.lex_state = 1699},
  [20] = {.lex_state = 1699},
  [21] = {.lex_state = 1699},
  [22] = {.lex_state = 1699},
  [23] = {.lex_state = 1699},
  [24] = {.lex_state = 1699},
  [25] = {.lex_state = 1699},
  [26] = {.lex_state = 1699},
  [27] = {.lex_state = 1699},
  [28] = {.lex_state = 1699},
  [29] = {.lex_state = 1699},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 31},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 40},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 41},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 348},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 1699},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 26},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 32},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 1699},
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 1699},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 1699},
  [147] = {.lex_state = 1699},
  [148] = {.lex_state = 1699},
  [149] = {.lex_state = 1699},
  [150] = {.lex_state = 1699},
  [151] = {.lex_state = 1699},
  [152] = {.lex_state = 1699},
  [153] = {.lex_state = 1699},
  [154] = {.lex_state = 26},
  [155] = {.lex_state = 1699},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 32},
  [158] = {.lex_state = 1699},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 1699},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 1699},
  [163] = {.lex_state = 1699},
  [164] = {.lex_state = 1699},
  [165] = {.lex_state = 1699},
  [166] = {.lex_state = 1699},
  [167] = {.lex_state = 1699},
  [168] = {.lex_state = 1699},
  [169] = {.lex_state = 1699},
  [170] = {.lex_state = 1699},
  [171] = {.lex_state = 1699},
  [172] = {.lex_state = 1699},
  [173] = {.lex_state = 1699},
  [174] = {.lex_state = 1699},
  [175] = {.lex_state = 1699},
  [176] = {.lex_state = 28},
  [177] = {.lex_state = 1699},
  [178] = {.lex_state = 1699},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 1699},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 1699},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 1699},
  [187] = {.lex_state = 1699},
  [188] = {.lex_state = 21},
  [189] = {.lex_state = 1699},
  [190] = {.lex_state = 1699},
  [191] = {.lex_state = 1699},
  [192] = {.lex_state = 1699},
  [193] = {.lex_state = 1699},
  [194] = {.lex_state = 1699},
  [195] = {.lex_state = 1699},
  [196] = {.lex_state = 1699},
  [197] = {.lex_state = 1699},
  [198] = {.lex_state = 1699},
  [199] = {.lex_state = 1699},
  [200] = {.lex_state = 1699},
  [201] = {.lex_state = 1699},
  [202] = {.lex_state = 1699},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 1699},
  [208] = {.lex_state = 1699},
  [209] = {.lex_state = 1699},
  [210] = {.lex_state = 1699},
  [211] = {.lex_state = 1699},
  [212] = {.lex_state = 1699},
  [213] = {.lex_state = 38},
  [214] = {.lex_state = 1699},
  [215] = {.lex_state = 29},
  [216] = {.lex_state = 35},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 35},
  [219] = {.lex_state = 29},
  [220] = {.lex_state = 35},
  [221] = {.lex_state = 38},
  [222] = {.lex_state = 35},
  [223] = {.lex_state = 35},
  [224] = {.lex_state = 35},
  [225] = {.lex_state = 35},
  [226] = {.lex_state = 35},
  [227] = {.lex_state = 38},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 35},
  [230] = {.lex_state = 29},
  [231] = {.lex_state = 29},
  [232] = {.lex_state = 29},
  [233] = {.lex_state = 35},
  [234] = {.lex_state = 35},
  [235] = {.lex_state = 35},
  [236] = {.lex_state = 29},
  [237] = {.lex_state = 1699},
  [238] = {.lex_state = 29},
  [239] = {.lex_state = 29},
  [240] = {.lex_state = 1699},
  [241] = {.lex_state = 35},
  [242] = {.lex_state = 35},
  [243] = {.lex_state = 29},
  [244] = {.lex_state = 35},
  [245] = {.lex_state = 35},
  [246] = {.lex_state = 29},
  [247] = {.lex_state = 29},
  [248] = {.lex_state = 29},
  [249] = {.lex_state = 29},
  [250] = {.lex_state = 29},
  [251] = {.lex_state = 256},
  [252] = {.lex_state = 35},
  [253] = {.lex_state = 29},
  [254] = {.lex_state = 29},
  [255] = {.lex_state = 1699},
  [256] = {.lex_state = 29},
  [257] = {.lex_state = 29},
  [258] = {.lex_state = 1699},
  [259] = {.lex_state = 35},
  [260] = {.lex_state = 29},
  [261] = {.lex_state = 35},
  [262] = {.lex_state = 35},
  [263] = {.lex_state = 1699},
  [264] = {.lex_state = 29},
  [265] = {.lex_state = 29},
  [266] = {.lex_state = 35},
  [267] = {.lex_state = 1699},
  [268] = {.lex_state = 35},
  [269] = {.lex_state = 29},
  [270] = {.lex_state = 35},
  [271] = {.lex_state = 38},
  [272] = {.lex_state = 1699},
  [273] = {.lex_state = 1699},
  [274] = {.lex_state = 1699},
  [275] = {.lex_state = 38},
  [276] = {.lex_state = 29},
  [277] = {.lex_state = 29},
  [278] = {.lex_state = 35},
  [279] = {.lex_state = 38},
  [280] = {.lex_state = 29},
  [281] = {.lex_state = 29},
  [282] = {.lex_state = 29},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 29},
  [285] = {.lex_state = 29},
  [286] = {.lex_state = 1699},
  [287] = {.lex_state = 1699},
  [288] = {.lex_state = 29},
  [289] = {.lex_state = 1699},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 29},
  [292] = {.lex_state = 1699},
  [293] = {.lex_state = 1699},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 1699},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 1699},
  [298] = {.lex_state = 1699},
  [299] = {.lex_state = 1699},
  [300] = {.lex_state = 29},
  [301] = {.lex_state = 1699},
  [302] = {.lex_state = 1699},
  [303] = {.lex_state = 29},
  [304] = {.lex_state = 1699},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 29},
  [307] = {.lex_state = 1699},
  [308] = {.lex_state = 29},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 1699},
  [311] = {.lex_state = 29},
  [312] = {.lex_state = 1699},
  [313] = {.lex_state = 1699},
  [314] = {.lex_state = 1699},
  [315] = {.lex_state = 29},
  [316] = {.lex_state = 1699},
  [317] = {.lex_state = 27},
  [318] = {.lex_state = 35},
  [319] = {.lex_state = 1699},
  [320] = {.lex_state = 1699},
  [321] = {.lex_state = 1699},
  [322] = {.lex_state = 1699},
  [323] = {.lex_state = 1699},
  [324] = {.lex_state = 1699},
  [325] = {.lex_state = 1699},
  [326] = {.lex_state = 1699},
  [327] = {.lex_state = 1699},
  [328] = {.lex_state = 1699},
  [329] = {.lex_state = 1699},
  [330] = {.lex_state = 1699},
  [331] = {.lex_state = 1699},
  [332] = {.lex_state = 29},
  [333] = {.lex_state = 1699},
  [334] = {.lex_state = 1699},
  [335] = {.lex_state = 1699},
  [336] = {.lex_state = 1699},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 29},
  [339] = {.lex_state = 28},
  [340] = {.lex_state = 29},
  [341] = {.lex_state = 29},
  [342] = {.lex_state = 29},
  [343] = {.lex_state = 29},
  [344] = {.lex_state = 29},
  [345] = {.lex_state = 29},
  [346] = {.lex_state = 29},
  [347] = {.lex_state = 29},
  [348] = {.lex_state = 1699},
  [349] = {.lex_state = 1699},
  [350] = {.lex_state = 1699},
  [351] = {.lex_state = 1699},
  [352] = {.lex_state = 29},
  [353] = {.lex_state = 1699},
  [354] = {.lex_state = 1699},
  [355] = {.lex_state = 1699},
  [356] = {.lex_state = 29},
  [357] = {.lex_state = 29},
  [358] = {.lex_state = 12},
  [359] = {.lex_state = 1699},
  [360] = {.lex_state = 1699},
  [361] = {.lex_state = 1699},
  [362] = {.lex_state = 29},
  [363] = {.lex_state = 28},
  [364] = {.lex_state = 1699},
  [365] = {.lex_state = 1699},
  [366] = {.lex_state = 1699},
  [367] = {.lex_state = 29},
  [368] = {.lex_state = 29},
  [369] = {.lex_state = 29},
  [370] = {.lex_state = 26},
  [371] = {.lex_state = 29},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 29},
  [375] = {.lex_state = 29},
  [376] = {.lex_state = 29},
  [377] = {.lex_state = 29},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 1699},
  [380] = {.lex_state = 38},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 29},
  [383] = {.lex_state = 29},
  [384] = {.lex_state = 1699},
  [385] = {.lex_state = 29},
  [386] = {.lex_state = 29},
  [387] = {.lex_state = 29},
  [388] = {.lex_state = 29},
  [389] = {.lex_state = 29},
  [390] = {.lex_state = 29},
  [391] = {.lex_state = 29},
  [392] = {.lex_state = 1699},
  [393] = {.lex_state = 29},
  [394] = {.lex_state = 1699},
  [395] = {.lex_state = 1699},
  [396] = {.lex_state = 29},
  [397] = {.lex_state = 29},
  [398] = {.lex_state = 29},
  [399] = {.lex_state = 1699},
  [400] = {.lex_state = 1699},
  [401] = {.lex_state = 13},
  [402] = {.lex_state = 29},
  [403] = {.lex_state = 1699},
  [404] = {.lex_state = 1699},
  [405] = {.lex_state = 1699},
  [406] = {.lex_state = 1699},
  [407] = {.lex_state = 1699},
  [408] = {.lex_state = 1699},
  [409] = {.lex_state = 1699},
  [410] = {.lex_state = 29},
  [411] = {.lex_state = 29},
  [412] = {.lex_state = 1699},
  [413] = {.lex_state = 29},
  [414] = {.lex_state = 1699},
  [415] = {.lex_state = 29},
  [416] = {.lex_state = 29},
  [417] = {.lex_state = 29},
  [418] = {.lex_state = 1699},
  [419] = {.lex_state = 1699},
  [420] = {.lex_state = 29},
  [421] = {.lex_state = 29},
  [422] = {.lex_state = 1699},
  [423] = {.lex_state = 1699},
  [424] = {.lex_state = 1699},
  [425] = {.lex_state = 1699},
  [426] = {.lex_state = 1699},
  [427] = {.lex_state = 1699},
  [428] = {.lex_state = 1699},
  [429] = {.lex_state = 1699},
  [430] = {.lex_state = 1699},
  [431] = {.lex_state = 1699},
  [432] = {.lex_state = 1699},
  [433] = {.lex_state = 1699},
  [434] = {.lex_state = 1699},
  [435] = {.lex_state = 1699},
  [436] = {.lex_state = 1699},
  [437] = {.lex_state = 1699},
  [438] = {.lex_state = 1699},
  [439] = {.lex_state = 1699},
  [440] = {.lex_state = 1699},
  [441] = {.lex_state = 1699},
  [442] = {.lex_state = 1699},
  [443] = {.lex_state = 1699},
  [444] = {.lex_state = 1699},
  [445] = {.lex_state = 1699},
  [446] = {.lex_state = 1699},
  [447] = {.lex_state = 1699},
  [448] = {.lex_state = 1699},
  [449] = {.lex_state = 1699},
  [450] = {.lex_state = 1699},
  [451] = {.lex_state = 1699},
  [452] = {.lex_state = 1699},
  [453] = {.lex_state = 1699},
  [454] = {.lex_state = 1699},
  [455] = {.lex_state = 1699},
  [456] = {.lex_state = 1699},
  [457] = {.lex_state = 1699},
  [458] = {.lex_state = 1699},
  [459] = {.lex_state = 1699},
  [460] = {.lex_state = 1699},
  [461] = {.lex_state = 1699},
  [462] = {.lex_state = 1699},
  [463] = {.lex_state = 42},
  [464] = {.lex_state = 1699},
  [465] = {.lex_state = 1699},
  [466] = {.lex_state = 1699},
  [467] = {.lex_state = 1699},
  [468] = {.lex_state = 1699},
  [469] = {.lex_state = 1699},
  [470] = {.lex_state = 1699},
  [471] = {.lex_state = 1699},
  [472] = {.lex_state = 1699},
  [473] = {.lex_state = 1699},
  [474] = {.lex_state = 1699},
  [475] = {.lex_state = 12},
  [476] = {.lex_state = 1699},
  [477] = {.lex_state = 1699},
  [478] = {.lex_state = 1699},
  [479] = {.lex_state = 1699},
  [480] = {.lex_state = 1699},
  [481] = {.lex_state = 1699},
  [482] = {.lex_state = 1699},
  [483] = {.lex_state = 1699},
  [484] = {.lex_state = 1699},
  [485] = {.lex_state = 1699},
  [486] = {.lex_state = 1699},
  [487] = {.lex_state = 1699},
  [488] = {.lex_state = 1699},
  [489] = {.lex_state = 1699},
  [490] = {.lex_state = 1699},
  [491] = {.lex_state = 1699},
  [492] = {.lex_state = 1699},
  [493] = {.lex_state = 1699},
  [494] = {.lex_state = 1699},
  [495] = {.lex_state = 1699},
  [496] = {.lex_state = 1699},
  [497] = {.lex_state = 1699},
  [498] = {.lex_state = 1699},
  [499] = {.lex_state = 1699},
  [500] = {.lex_state = 1699},
  [501] = {.lex_state = 1699},
  [502] = {.lex_state = 1699},
  [503] = {.lex_state = 1699},
  [504] = {.lex_state = 1699},
  [505] = {.lex_state = 1699},
  [506] = {.lex_state = 1699},
  [507] = {.lex_state = 1699},
  [508] = {.lex_state = 1699},
  [509] = {.lex_state = 1699},
  [510] = {.lex_state = 1699},
  [511] = {.lex_state = 1699},
  [512] = {.lex_state = 1699},
  [513] = {.lex_state = 1699},
  [514] = {.lex_state = 1699},
  [515] = {.lex_state = 1699},
  [516] = {.lex_state = 1699},
  [517] = {.lex_state = 1699},
  [518] = {.lex_state = 1699},
  [519] = {.lex_state = 1699},
  [520] = {.lex_state = 12},
  [521] = {.lex_state = 1699},
  [522] = {.lex_state = 1699},
  [523] = {.lex_state = 1699},
  [524] = {.lex_state = 1699},
  [525] = {.lex_state = 1699},
  [526] = {.lex_state = 1699},
  [527] = {.lex_state = 1699},
  [528] = {.lex_state = 1699},
  [529] = {.lex_state = 1699},
  [530] = {.lex_state = 1699},
  [531] = {.lex_state = 1697},
  [532] = {.lex_state = 1699},
  [533] = {.lex_state = 1699},
  [534] = {.lex_state = 1699},
  [535] = {.lex_state = 1699},
  [536] = {.lex_state = 1699},
  [537] = {.lex_state = 1699},
  [538] = {.lex_state = 1699},
  [539] = {.lex_state = 1699},
  [540] = {.lex_state = 1699},
  [541] = {.lex_state = 1699},
  [542] = {.lex_state = 1699},
  [543] = {.lex_state = 1699},
  [544] = {.lex_state = 1699},
  [545] = {.lex_state = 1699},
  [546] = {.lex_state = 1699},
  [547] = {.lex_state = 1699},
  [548] = {.lex_state = 1699},
  [549] = {.lex_state = 1699},
  [550] = {.lex_state = 1699},
  [551] = {.lex_state = 1699},
  [552] = {.lex_state = 1699},
  [553] = {.lex_state = 265},
  [554] = {.lex_state = 1699},
  [555] = {.lex_state = 12},
  [556] = {.lex_state = 1699},
  [557] = {.lex_state = 1699},
  [558] = {.lex_state = 1699},
  [559] = {.lex_state = 1699},
  [560] = {.lex_state = 1699},
  [561] = {.lex_state = 1699},
  [562] = {.lex_state = 1699},
  [563] = {.lex_state = 1699},
  [564] = {.lex_state = 1699},
  [565] = {.lex_state = 1699},
  [566] = {.lex_state = 1699},
  [567] = {.lex_state = 1699},
  [568] = {.lex_state = 1699},
  [569] = {.lex_state = 1699},
  [570] = {.lex_state = 1699},
  [571] = {.lex_state = 1699},
  [572] = {.lex_state = 1699},
  [573] = {.lex_state = 1699},
  [574] = {.lex_state = 1699},
  [575] = {.lex_state = 1699},
  [576] = {.lex_state = 1699},
  [577] = {.lex_state = 1699},
  [578] = {.lex_state = 1699},
  [579] = {.lex_state = 1699},
  [580] = {.lex_state = 1699},
  [581] = {.lex_state = 1699},
  [582] = {.lex_state = 1699},
  [583] = {.lex_state = 1699},
  [584] = {.lex_state = 1699},
  [585] = {.lex_state = 1699},
  [586] = {.lex_state = 1699},
  [587] = {.lex_state = 1699},
  [588] = {.lex_state = 1699},
  [589] = {.lex_state = 1699},
  [590] = {.lex_state = 1699},
  [591] = {.lex_state = 1699},
  [592] = {.lex_state = 1699},
  [593] = {.lex_state = 1699},
  [594] = {.lex_state = 1699},
  [595] = {.lex_state = 1699},
  [596] = {.lex_state = 1699},
  [597] = {.lex_state = 1699},
  [598] = {.lex_state = 1699},
  [599] = {.lex_state = 1699},
  [600] = {.lex_state = 1699},
  [601] = {.lex_state = 1699},
  [602] = {.lex_state = 1699},
  [603] = {.lex_state = 1699},
  [604] = {.lex_state = 1699},
  [605] = {.lex_state = 1699},
  [606] = {.lex_state = 1699},
  [607] = {.lex_state = 1699},
  [608] = {.lex_state = 1699},
  [609] = {.lex_state = 1699},
  [610] = {.lex_state = 1699},
  [611] = {.lex_state = 1699},
  [612] = {.lex_state = 1699},
  [613] = {.lex_state = 1699},
  [614] = {.lex_state = 1699},
  [615] = {.lex_state = 1699},
  [616] = {.lex_state = 1699},
  [617] = {.lex_state = 1699},
  [618] = {.lex_state = 1699},
  [619] = {.lex_state = 1699},
  [620] = {.lex_state = 1699},
  [621] = {.lex_state = 1699},
  [622] = {.lex_state = 1699},
  [623] = {.lex_state = 1699},
  [624] = {.lex_state = 1699},
  [625] = {.lex_state = 1699},
  [626] = {.lex_state = 1699},
  [627] = {.lex_state = 1699},
  [628] = {.lex_state = 1699},
  [629] = {.lex_state = 1699},
  [630] = {.lex_state = 1699},
  [631] = {.lex_state = 1699},
  [632] = {.lex_state = 1699},
  [633] = {.lex_state = 1699},
  [634] = {.lex_state = 1699},
  [635] = {.lex_state = 1699},
  [636] = {.lex_state = 1699},
  [637] = {.lex_state = 1699},
  [638] = {.lex_state = 1699},
  [639] = {.lex_state = 1699},
  [640] = {.lex_state = 1699},
  [641] = {.lex_state = 1699},
  [642] = {.lex_state = 1699},
  [643] = {.lex_state = 1699},
  [644] = {.lex_state = 1699},
  [645] = {.lex_state = 1699},
  [646] = {.lex_state = 1699},
  [647] = {.lex_state = 1699},
  [648] = {.lex_state = 1699},
  [649] = {.lex_state = 1699},
  [650] = {.lex_state = 1699},
  [651] = {.lex_state = 1699},
  [652] = {.lex_state = 1699},
  [653] = {.lex_state = 1699},
  [654] = {.lex_state = 1699},
  [655] = {.lex_state = 1699},
  [656] = {.lex_state = 1699},
  [657] = {.lex_state = 1699},
  [658] = {.lex_state = 1699},
  [659] = {.lex_state = 1699},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 1699},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 1699},
  [665] = {.lex_state = 12},
  [666] = {.lex_state = 29},
  [667] = {.lex_state = 29},
  [668] = {.lex_state = 1699},
  [669] = {.lex_state = 1699},
  [670] = {.lex_state = 29},
  [671] = {.lex_state = 1697},
  [672] = {.lex_state = 29},
  [673] = {.lex_state = 12},
  [674] = {.lex_state = 13},
  [675] = {.lex_state = 29},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 1699},
  [679] = {.lex_state = 1698},
  [680] = {.lex_state = 1697},
  [681] = {.lex_state = 1699},
  [682] = {.lex_state = 1699},
  [683] = {.lex_state = 1699},
  [684] = {.lex_state = 1699},
  [685] = {.lex_state = 1699},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 1699},
  [688] = {.lex_state = 12},
  [689] = {.lex_state = 1699},
  [690] = {.lex_state = 1699},
  [691] = {.lex_state = 12},
  [692] = {.lex_state = 1699},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 29},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 1699},
  [698] = {.lex_state = 29},
  [699] = {.lex_state = 1699},
  [700] = {.lex_state = 1699},
  [701] = {.lex_state = 1699},
  [702] = {.lex_state = 1699},
  [703] = {.lex_state = 1699},
  [704] = {.lex_state = 1699},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 1699},
  [707] = {.lex_state = 1699},
  [708] = {.lex_state = 1699},
  [709] = {.lex_state = 1699},
  [710] = {.lex_state = 1697},
  [711] = {.lex_state = 1697},
  [712] = {.lex_state = 1697},
  [713] = {.lex_state = 1697},
  [714] = {.lex_state = 1697},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym__log_verbose_value_token1] = ACTIONS(1),
    [aux_sym__log_verbose_quoted_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__send_env_value_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_protocol_version] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [aux_sym__hosts_token_token1] = ACTIONS(1),
    [aux_sym__hostname_token_token1] = ACTIONS(1),
    [aux_sym__proxy_token_token1] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__file_string_token1] = ACTIONS(1),
    [aux_sym_bytes_token1] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(705),
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(447),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(187),
    [sym__space] = ACTIONS(189),
    [sym__eol] = ACTIONS(191),
  },
  [2] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(447),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_host_declaration_token1] = ACTIONS(195),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(198),
    [aux_sym__address_family_token1] = ACTIONS(201),
    [aux_sym__batch_mode_token1] = ACTIONS(204),
    [aux_sym__bind_address_token1] = ACTIONS(207),
    [aux_sym__bind_interface_token1] = ACTIONS(210),
    [aux_sym__canonical_domains_token1] = ACTIONS(213),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(216),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(219),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(222),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(225),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(228),
    [aux_sym__certificate_file_token1] = ACTIONS(231),
    [aux_sym__check_host_ip_token1] = ACTIONS(234),
    [aux_sym__ciphers_token1] = ACTIONS(237),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(240),
    [aux_sym__compression_token1] = ACTIONS(243),
    [aux_sym__connection_attempts_token1] = ACTIONS(246),
    [aux_sym__connect_timeout_token1] = ACTIONS(249),
    [aux_sym__control_master_token1] = ACTIONS(252),
    [aux_sym__control_persist_token1] = ACTIONS(255),
    [aux_sym__control_path_token1] = ACTIONS(258),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(261),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(264),
    [aux_sym__escape_char_token1] = ACTIONS(267),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(270),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(273),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(276),
    [aux_sym__forward_agent_token1] = ACTIONS(279),
    [aux_sym__forward_x11_token1] = ACTIONS(282),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(285),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(288),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(291),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(294),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(297),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(300),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(300),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(303),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(306),
    [aux_sym__host_key_alias_token1] = ACTIONS(309),
    [aux_sym__hostname_token1] = ACTIONS(312),
    [aux_sym__identities_only_token1] = ACTIONS(315),
    [aux_sym__identity_agent_token1] = ACTIONS(318),
    [aux_sym__identity_file_token1] = ACTIONS(321),
    [aux_sym__ignore_unknown_token1] = ACTIONS(324),
    [aux_sym__ipqos_token1] = ACTIONS(327),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(330),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(330),
    [aux_sym__kex_algorithms_token1] = ACTIONS(333),
    [aux_sym__known_hosts_command_token1] = ACTIONS(336),
    [aux_sym__local_command_token1] = ACTIONS(339),
    [aux_sym__local_forward_token1] = ACTIONS(342),
    [aux_sym__log_level_token1] = ACTIONS(345),
    [aux_sym__log_verbose_token1] = ACTIONS(348),
    [aux_sym__macs_token1] = ACTIONS(351),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(354),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(357),
    [aux_sym__password_authentication_token1] = ACTIONS(360),
    [aux_sym__permit_local_command_token1] = ACTIONS(363),
    [aux_sym__permit_remote_open_token1] = ACTIONS(366),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(369),
    [aux_sym__port_token1] = ACTIONS(372),
    [aux_sym__preferred_authentications_token1] = ACTIONS(375),
    [aux_sym__proxy_command_token1] = ACTIONS(378),
    [aux_sym__proxy_jump_token1] = ACTIONS(381),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(384),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(387),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(390),
    [aux_sym__rekey_limit_token1] = ACTIONS(393),
    [aux_sym__remote_command_token1] = ACTIONS(396),
    [aux_sym__remote_forward_token1] = ACTIONS(399),
    [aux_sym__request_tty_token1] = ACTIONS(402),
    [aux_sym__required_rsa_size_token1] = ACTIONS(405),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(408),
    [aux_sym__security_key_provider_token1] = ACTIONS(411),
    [aux_sym__send_env_token1] = ACTIONS(414),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(417),
    [aux_sym__server_alive_interval_token1] = ACTIONS(420),
    [aux_sym__session_type_token1] = ACTIONS(423),
    [aux_sym__stdin_null_token1] = ACTIONS(426),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(429),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(432),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(435),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(438),
    [aux_sym__tag_token1] = ACTIONS(441),
    [aux_sym__tunnel_token1] = ACTIONS(444),
    [aux_sym__tunnel_device_token1] = ACTIONS(447),
    [aux_sym__update_host_keys_token1] = ACTIONS(450),
    [aux_sym__user_token1] = ACTIONS(453),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(456),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(459),
    [aux_sym__visual_host_key_token1] = ACTIONS(462),
    [aux_sym__xauth_location_token1] = ACTIONS(465),
    [sym_comment] = ACTIONS(468),
    [sym__space] = ACTIONS(471),
    [sym__eol] = ACTIONS(474),
  },
  [3] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(447),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(477),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(187),
    [sym__space] = ACTIONS(189),
    [sym__eol] = ACTIONS(479),
  },
  [4] = {
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym_host_declaration_token1] = ACTIONS(483),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
    [sym__eol] = ACTIONS(481),
  },
  [5] = {
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_host_declaration_token1] = ACTIONS(491),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(493),
    [aux_sym__address_family_token1] = ACTIONS(496),
    [aux_sym__batch_mode_token1] = ACTIONS(499),
    [aux_sym__bind_address_token1] = ACTIONS(502),
    [aux_sym__bind_interface_token1] = ACTIONS(505),
    [aux_sym__canonical_domains_token1] = ACTIONS(508),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(511),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(514),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(517),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(520),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(523),
    [aux_sym__certificate_file_token1] = ACTIONS(526),
    [aux_sym__check_host_ip_token1] = ACTIONS(529),
    [aux_sym__ciphers_token1] = ACTIONS(532),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(535),
    [aux_sym__compression_token1] = ACTIONS(538),
    [aux_sym__connection_attempts_token1] = ACTIONS(541),
    [aux_sym__connect_timeout_token1] = ACTIONS(544),
    [aux_sym__control_master_token1] = ACTIONS(547),
    [aux_sym__control_persist_token1] = ACTIONS(550),
    [aux_sym__control_path_token1] = ACTIONS(553),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(556),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(559),
    [aux_sym__escape_char_token1] = ACTIONS(562),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(565),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(568),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(571),
    [aux_sym__forward_agent_token1] = ACTIONS(574),
    [aux_sym__forward_x11_token1] = ACTIONS(577),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(580),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(583),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(586),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(589),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(592),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(595),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(595),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(598),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(601),
    [aux_sym__host_key_alias_token1] = ACTIONS(604),
    [aux_sym__hostname_token1] = ACTIONS(607),
    [aux_sym__identities_only_token1] = ACTIONS(610),
    [aux_sym__identity_agent_token1] = ACTIONS(613),
    [aux_sym__identity_file_token1] = ACTIONS(616),
    [aux_sym__ignore_unknown_token1] = ACTIONS(619),
    [aux_sym__ipqos_token1] = ACTIONS(622),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(625),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(625),
    [aux_sym__kex_algorithms_token1] = ACTIONS(628),
    [aux_sym__known_hosts_command_token1] = ACTIONS(631),
    [aux_sym__local_command_token1] = ACTIONS(634),
    [aux_sym__local_forward_token1] = ACTIONS(637),
    [aux_sym__log_level_token1] = ACTIONS(640),
    [aux_sym__log_verbose_token1] = ACTIONS(643),
    [aux_sym__macs_token1] = ACTIONS(646),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(649),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(652),
    [aux_sym__password_authentication_token1] = ACTIONS(655),
    [aux_sym__permit_local_command_token1] = ACTIONS(658),
    [aux_sym__permit_remote_open_token1] = ACTIONS(661),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(664),
    [aux_sym__port_token1] = ACTIONS(667),
    [aux_sym__preferred_authentications_token1] = ACTIONS(670),
    [aux_sym__proxy_command_token1] = ACTIONS(673),
    [aux_sym__proxy_jump_token1] = ACTIONS(676),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(679),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(682),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(685),
    [aux_sym__rekey_limit_token1] = ACTIONS(688),
    [aux_sym__remote_command_token1] = ACTIONS(691),
    [aux_sym__remote_forward_token1] = ACTIONS(694),
    [aux_sym__request_tty_token1] = ACTIONS(697),
    [aux_sym__required_rsa_size_token1] = ACTIONS(700),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(703),
    [aux_sym__security_key_provider_token1] = ACTIONS(706),
    [aux_sym__send_env_token1] = ACTIONS(709),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(712),
    [aux_sym__server_alive_interval_token1] = ACTIONS(715),
    [aux_sym__session_type_token1] = ACTIONS(718),
    [aux_sym__stdin_null_token1] = ACTIONS(721),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(724),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(727),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(730),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(733),
    [aux_sym__tag_token1] = ACTIONS(736),
    [aux_sym__tunnel_token1] = ACTIONS(739),
    [aux_sym__tunnel_device_token1] = ACTIONS(742),
    [aux_sym__update_host_keys_token1] = ACTIONS(745),
    [aux_sym__user_token1] = ACTIONS(748),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(751),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(754),
    [aux_sym__visual_host_key_token1] = ACTIONS(757),
    [aux_sym__xauth_location_token1] = ACTIONS(760),
    [sym_comment] = ACTIONS(763),
    [sym__space] = ACTIONS(766),
    [sym__eol] = ACTIONS(489),
  },
  [6] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [7] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [8] = {
    [sym_host_declaration] = STATE(27),
    [sym_parameter] = STATE(538),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(769),
    [sym__eol] = ACTIONS(771),
  },
  [9] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [10] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [11] = {
    [sym__declarations] = STATE(16),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [12] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [13] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [14] = {
    [sym__declarations] = STATE(17),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__declarations_repeat1] = STATE(4),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(485),
    [sym__space] = ACTIONS(487),
  },
  [15] = {
    [sym_parameter] = STATE(645),
    [sym__add_keys_to_agent] = STATE(450),
    [sym__address_family] = STATE(451),
    [sym__batch_mode] = STATE(452),
    [sym__bind_address] = STATE(454),
    [sym__bind_interface] = STATE(455),
    [sym__canonical_domains] = STATE(459),
    [sym__canonicalize_fallback_local] = STATE(461),
    [sym__canonicalize_hostname] = STATE(462),
    [sym__canonicalize_max_dots] = STATE(464),
    [sym__canonicalize_permitted_cnames] = STATE(466),
    [sym__ca_signature_algorithms] = STATE(474),
    [sym__certificate_file] = STATE(482),
    [sym__check_host_ip] = STATE(483),
    [sym__ciphers] = STATE(488),
    [sym__clear_all_forwardings] = STATE(490),
    [sym__compression] = STATE(505),
    [sym__connection_attempts] = STATE(506),
    [sym__connect_timeout] = STATE(517),
    [sym__control_master] = STATE(525),
    [sym__control_persist] = STATE(526),
    [sym__control_path] = STATE(539),
    [sym__enable_escape_command_line] = STATE(540),
    [sym__enable_ssh_keysign] = STATE(546),
    [sym__escape_char] = STATE(556),
    [sym__exit_on_forward_failure] = STATE(597),
    [sym__fingerprint_hash] = STATE(598),
    [sym__fork_after_authentication] = STATE(643),
    [sym__forward_agent] = STATE(655),
    [sym__forward_x11] = STATE(654),
    [sym__forward_x11_timeout] = STATE(652),
    [sym__forward_x11_trusted] = STATE(651),
    [sym__global_known_hosts_file] = STATE(650),
    [sym__gssapi_authentication] = STATE(649),
    [sym__gssapi_delegate_credentials] = STATE(648),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(646),
    [sym__host_key_algorithms] = STATE(644),
    [sym__host_key_alias] = STATE(642),
    [sym__hostname] = STATE(640),
    [sym__identities_only] = STATE(639),
    [sym__identity_agent] = STATE(638),
    [sym__identity_file] = STATE(637),
    [sym__ignore_unknown] = STATE(636),
    [sym__ipqos] = STATE(633),
    [sym__kbd_interactive_authentication] = STATE(630),
    [sym__kex_algorithms] = STATE(627),
    [sym__known_hosts_command] = STATE(624),
    [sym__local_command] = STATE(622),
    [sym__local_forward] = STATE(621),
    [sym__log_level] = STATE(619),
    [sym__log_verbose] = STATE(617),
    [sym__macs] = STATE(616),
    [sym__no_host_authentication_for_localhost] = STATE(615),
    [sym__number_of_password_prompts] = STATE(612),
    [sym__password_authentication] = STATE(611),
    [sym__permit_local_command] = STATE(609),
    [sym__permit_remote_open] = STATE(608),
    [sym__pkcs11_provider] = STATE(607),
    [sym__port] = STATE(606),
    [sym__preferred_authentications] = STATE(605),
    [sym__proxy_command] = STATE(604),
    [sym__proxy_jump] = STATE(603),
    [sym__proxy_use_fdpass] = STATE(602),
    [sym__pubkey_accepted_algorithms] = STATE(600),
    [sym__pubkey_authentication] = STATE(596),
    [sym__rekey_limit] = STATE(594),
    [sym__remote_command] = STATE(592),
    [sym__remote_forward] = STATE(590),
    [sym__request_tty] = STATE(589),
    [sym__required_rsa_size] = STATE(588),
    [sym__revoked_host_keys] = STATE(586),
    [sym__security_key_provider] = STATE(584),
    [sym__send_env] = STATE(582),
    [sym__server_alive_count_max] = STATE(580),
    [sym__server_alive_interval] = STATE(579),
    [sym__session_type] = STATE(549),
    [sym__set_env] = STATE(577),
    [sym__stdin_null] = STATE(576),
    [sym__stream_local_bind_mask] = STATE(574),
    [sym__stream_local_bind_unlink] = STATE(573),
    [sym__strict_host_key_checking] = STATE(572),
    [sym__tcp_keep_alive] = STATE(422),
    [sym__tag] = STATE(571),
    [sym__tunnel] = STATE(570),
    [sym__tunnel_device] = STATE(423),
    [sym__update_host_keys] = STATE(567),
    [sym__user] = STATE(566),
    [sym__user_known_hosts_file] = STATE(565),
    [sym__verify_host_key_dns] = STATE(564),
    [sym__visual_host_key] = STATE(563),
    [sym__xauth_location] = STATE(562),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(7),
    [aux_sym__address_family_token1] = ACTIONS(9),
    [aux_sym__batch_mode_token1] = ACTIONS(11),
    [aux_sym__bind_address_token1] = ACTIONS(13),
    [aux_sym__bind_interface_token1] = ACTIONS(15),
    [aux_sym__canonical_domains_token1] = ACTIONS(17),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(19),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(21),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(23),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(25),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(27),
    [aux_sym__certificate_file_token1] = ACTIONS(29),
    [aux_sym__check_host_ip_token1] = ACTIONS(31),
    [aux_sym__ciphers_token1] = ACTIONS(33),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(35),
    [aux_sym__compression_token1] = ACTIONS(37),
    [aux_sym__connection_attempts_token1] = ACTIONS(39),
    [aux_sym__connect_timeout_token1] = ACTIONS(41),
    [aux_sym__control_master_token1] = ACTIONS(43),
    [aux_sym__control_persist_token1] = ACTIONS(45),
    [aux_sym__control_path_token1] = ACTIONS(47),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(49),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(51),
    [aux_sym__escape_char_token1] = ACTIONS(53),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(55),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(57),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(59),
    [aux_sym__forward_agent_token1] = ACTIONS(61),
    [aux_sym__forward_x11_token1] = ACTIONS(63),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(65),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(67),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(69),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(71),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(73),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(75),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(75),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(77),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(79),
    [aux_sym__host_key_alias_token1] = ACTIONS(81),
    [aux_sym__hostname_token1] = ACTIONS(83),
    [aux_sym__identities_only_token1] = ACTIONS(85),
    [aux_sym__identity_agent_token1] = ACTIONS(87),
    [aux_sym__identity_file_token1] = ACTIONS(89),
    [aux_sym__ignore_unknown_token1] = ACTIONS(91),
    [aux_sym__ipqos_token1] = ACTIONS(93),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(95),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(95),
    [aux_sym__kex_algorithms_token1] = ACTIONS(97),
    [aux_sym__known_hosts_command_token1] = ACTIONS(99),
    [aux_sym__local_command_token1] = ACTIONS(101),
    [aux_sym__local_forward_token1] = ACTIONS(103),
    [aux_sym__log_level_token1] = ACTIONS(105),
    [aux_sym__log_verbose_token1] = ACTIONS(107),
    [aux_sym__macs_token1] = ACTIONS(109),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(111),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(113),
    [aux_sym__password_authentication_token1] = ACTIONS(115),
    [aux_sym__permit_local_command_token1] = ACTIONS(117),
    [aux_sym__permit_remote_open_token1] = ACTIONS(119),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(121),
    [aux_sym__port_token1] = ACTIONS(123),
    [aux_sym__preferred_authentications_token1] = ACTIONS(125),
    [aux_sym__proxy_command_token1] = ACTIONS(127),
    [aux_sym__proxy_jump_token1] = ACTIONS(129),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(131),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(133),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(135),
    [aux_sym__rekey_limit_token1] = ACTIONS(137),
    [aux_sym__remote_command_token1] = ACTIONS(139),
    [aux_sym__remote_forward_token1] = ACTIONS(141),
    [aux_sym__request_tty_token1] = ACTIONS(143),
    [aux_sym__required_rsa_size_token1] = ACTIONS(145),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(147),
    [aux_sym__security_key_provider_token1] = ACTIONS(149),
    [aux_sym__send_env_token1] = ACTIONS(151),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(153),
    [aux_sym__server_alive_interval_token1] = ACTIONS(155),
    [aux_sym__session_type_token1] = ACTIONS(157),
    [aux_sym__stdin_null_token1] = ACTIONS(159),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(161),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(163),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(165),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(167),
    [aux_sym__tag_token1] = ACTIONS(169),
    [aux_sym__tunnel_token1] = ACTIONS(171),
    [aux_sym__tunnel_device_token1] = ACTIONS(173),
    [aux_sym__update_host_keys_token1] = ACTIONS(175),
    [aux_sym__user_token1] = ACTIONS(177),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(179),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(181),
    [aux_sym__visual_host_key_token1] = ACTIONS(183),
    [aux_sym__xauth_location_token1] = ACTIONS(185),
    [sym_comment] = ACTIONS(773),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(775),
    [aux_sym_host_declaration_token1] = ACTIONS(777),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(775),
    [aux_sym__address_family_token1] = ACTIONS(775),
    [aux_sym__batch_mode_token1] = ACTIONS(775),
    [aux_sym__bind_address_token1] = ACTIONS(775),
    [aux_sym__bind_interface_token1] = ACTIONS(775),
    [aux_sym__canonical_domains_token1] = ACTIONS(775),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(775),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(775),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(775),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(775),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(775),
    [aux_sym__certificate_file_token1] = ACTIONS(775),
    [aux_sym__check_host_ip_token1] = ACTIONS(775),
    [aux_sym__ciphers_token1] = ACTIONS(775),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(775),
    [aux_sym__compression_token1] = ACTIONS(775),
    [aux_sym__connection_attempts_token1] = ACTIONS(775),
    [aux_sym__connect_timeout_token1] = ACTIONS(775),
    [aux_sym__control_master_token1] = ACTIONS(775),
    [aux_sym__control_persist_token1] = ACTIONS(775),
    [aux_sym__control_path_token1] = ACTIONS(775),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(775),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(775),
    [aux_sym__escape_char_token1] = ACTIONS(775),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(775),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(775),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(775),
    [aux_sym__forward_agent_token1] = ACTIONS(775),
    [aux_sym__forward_x11_token1] = ACTIONS(777),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(775),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(775),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(775),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(775),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(775),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(775),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(775),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(775),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(775),
    [aux_sym__host_key_alias_token1] = ACTIONS(775),
    [aux_sym__hostname_token1] = ACTIONS(775),
    [aux_sym__identities_only_token1] = ACTIONS(775),
    [aux_sym__identity_agent_token1] = ACTIONS(775),
    [aux_sym__identity_file_token1] = ACTIONS(775),
    [aux_sym__ignore_unknown_token1] = ACTIONS(775),
    [aux_sym__ipqos_token1] = ACTIONS(775),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(775),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(775),
    [aux_sym__kex_algorithms_token1] = ACTIONS(775),
    [aux_sym__known_hosts_command_token1] = ACTIONS(775),
    [aux_sym__local_command_token1] = ACTIONS(775),
    [aux_sym__local_forward_token1] = ACTIONS(775),
    [aux_sym__log_level_token1] = ACTIONS(775),
    [aux_sym__log_verbose_token1] = ACTIONS(775),
    [aux_sym__macs_token1] = ACTIONS(775),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(775),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(775),
    [aux_sym__password_authentication_token1] = ACTIONS(775),
    [aux_sym__permit_local_command_token1] = ACTIONS(775),
    [aux_sym__permit_remote_open_token1] = ACTIONS(775),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(775),
    [aux_sym__port_token1] = ACTIONS(775),
    [aux_sym__preferred_authentications_token1] = ACTIONS(775),
    [aux_sym__proxy_command_token1] = ACTIONS(775),
    [aux_sym__proxy_jump_token1] = ACTIONS(775),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(775),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(775),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(775),
    [aux_sym__rekey_limit_token1] = ACTIONS(775),
    [aux_sym__remote_command_token1] = ACTIONS(775),
    [aux_sym__remote_forward_token1] = ACTIONS(775),
    [aux_sym__request_tty_token1] = ACTIONS(775),
    [aux_sym__required_rsa_size_token1] = ACTIONS(775),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(775),
    [aux_sym__security_key_provider_token1] = ACTIONS(775),
    [aux_sym__send_env_token1] = ACTIONS(775),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(775),
    [aux_sym__server_alive_interval_token1] = ACTIONS(775),
    [aux_sym__session_type_token1] = ACTIONS(775),
    [aux_sym__stdin_null_token1] = ACTIONS(775),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(775),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(775),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(775),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(775),
    [aux_sym__tag_token1] = ACTIONS(775),
    [aux_sym__tunnel_token1] = ACTIONS(777),
    [aux_sym__tunnel_device_token1] = ACTIONS(775),
    [aux_sym__update_host_keys_token1] = ACTIONS(775),
    [aux_sym__user_token1] = ACTIONS(777),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(775),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(775),
    [aux_sym__visual_host_key_token1] = ACTIONS(775),
    [aux_sym__xauth_location_token1] = ACTIONS(775),
    [sym_comment] = ACTIONS(775),
    [sym__space] = ACTIONS(775),
    [sym__eol] = ACTIONS(775),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(779),
    [aux_sym_host_declaration_token1] = ACTIONS(781),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(779),
    [aux_sym__address_family_token1] = ACTIONS(779),
    [aux_sym__batch_mode_token1] = ACTIONS(779),
    [aux_sym__bind_address_token1] = ACTIONS(779),
    [aux_sym__bind_interface_token1] = ACTIONS(779),
    [aux_sym__canonical_domains_token1] = ACTIONS(779),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(779),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(779),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(779),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(779),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(779),
    [aux_sym__certificate_file_token1] = ACTIONS(779),
    [aux_sym__check_host_ip_token1] = ACTIONS(779),
    [aux_sym__ciphers_token1] = ACTIONS(779),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(779),
    [aux_sym__compression_token1] = ACTIONS(779),
    [aux_sym__connection_attempts_token1] = ACTIONS(779),
    [aux_sym__connect_timeout_token1] = ACTIONS(779),
    [aux_sym__control_master_token1] = ACTIONS(779),
    [aux_sym__control_persist_token1] = ACTIONS(779),
    [aux_sym__control_path_token1] = ACTIONS(779),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(779),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(779),
    [aux_sym__escape_char_token1] = ACTIONS(779),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(779),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(779),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(779),
    [aux_sym__forward_agent_token1] = ACTIONS(779),
    [aux_sym__forward_x11_token1] = ACTIONS(781),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(779),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(779),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(779),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(779),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(779),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(779),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(779),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(779),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(779),
    [aux_sym__host_key_alias_token1] = ACTIONS(779),
    [aux_sym__hostname_token1] = ACTIONS(779),
    [aux_sym__identities_only_token1] = ACTIONS(779),
    [aux_sym__identity_agent_token1] = ACTIONS(779),
    [aux_sym__identity_file_token1] = ACTIONS(779),
    [aux_sym__ignore_unknown_token1] = ACTIONS(779),
    [aux_sym__ipqos_token1] = ACTIONS(779),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(779),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(779),
    [aux_sym__kex_algorithms_token1] = ACTIONS(779),
    [aux_sym__known_hosts_command_token1] = ACTIONS(779),
    [aux_sym__local_command_token1] = ACTIONS(779),
    [aux_sym__local_forward_token1] = ACTIONS(779),
    [aux_sym__log_level_token1] = ACTIONS(779),
    [aux_sym__log_verbose_token1] = ACTIONS(779),
    [aux_sym__macs_token1] = ACTIONS(779),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(779),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(779),
    [aux_sym__password_authentication_token1] = ACTIONS(779),
    [aux_sym__permit_local_command_token1] = ACTIONS(779),
    [aux_sym__permit_remote_open_token1] = ACTIONS(779),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(779),
    [aux_sym__port_token1] = ACTIONS(779),
    [aux_sym__preferred_authentications_token1] = ACTIONS(779),
    [aux_sym__proxy_command_token1] = ACTIONS(779),
    [aux_sym__proxy_jump_token1] = ACTIONS(779),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(779),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(779),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(779),
    [aux_sym__rekey_limit_token1] = ACTIONS(779),
    [aux_sym__remote_command_token1] = ACTIONS(779),
    [aux_sym__remote_forward_token1] = ACTIONS(779),
    [aux_sym__request_tty_token1] = ACTIONS(779),
    [aux_sym__required_rsa_size_token1] = ACTIONS(779),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(779),
    [aux_sym__security_key_provider_token1] = ACTIONS(779),
    [aux_sym__send_env_token1] = ACTIONS(779),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(779),
    [aux_sym__server_alive_interval_token1] = ACTIONS(779),
    [aux_sym__session_type_token1] = ACTIONS(779),
    [aux_sym__stdin_null_token1] = ACTIONS(779),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(779),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(779),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(779),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(779),
    [aux_sym__tag_token1] = ACTIONS(779),
    [aux_sym__tunnel_token1] = ACTIONS(781),
    [aux_sym__tunnel_device_token1] = ACTIONS(779),
    [aux_sym__update_host_keys_token1] = ACTIONS(779),
    [aux_sym__user_token1] = ACTIONS(781),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(779),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(779),
    [aux_sym__visual_host_key_token1] = ACTIONS(779),
    [aux_sym__xauth_location_token1] = ACTIONS(779),
    [sym_comment] = ACTIONS(779),
    [sym__space] = ACTIONS(779),
    [sym__eol] = ACTIONS(779),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(783),
    [aux_sym_host_declaration_token1] = ACTIONS(785),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(783),
    [aux_sym__address_family_token1] = ACTIONS(783),
    [aux_sym__batch_mode_token1] = ACTIONS(783),
    [aux_sym__bind_address_token1] = ACTIONS(783),
    [aux_sym__bind_interface_token1] = ACTIONS(783),
    [aux_sym__canonical_domains_token1] = ACTIONS(783),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(783),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(783),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(783),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(783),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(783),
    [aux_sym__certificate_file_token1] = ACTIONS(783),
    [aux_sym__check_host_ip_token1] = ACTIONS(783),
    [aux_sym__ciphers_token1] = ACTIONS(783),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(783),
    [aux_sym__compression_token1] = ACTIONS(783),
    [aux_sym__connection_attempts_token1] = ACTIONS(783),
    [aux_sym__connect_timeout_token1] = ACTIONS(783),
    [aux_sym__control_master_token1] = ACTIONS(783),
    [aux_sym__control_persist_token1] = ACTIONS(783),
    [aux_sym__control_path_token1] = ACTIONS(783),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(783),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(783),
    [aux_sym__escape_char_token1] = ACTIONS(783),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(783),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(783),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(783),
    [aux_sym__forward_agent_token1] = ACTIONS(783),
    [aux_sym__forward_x11_token1] = ACTIONS(785),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(783),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(783),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(783),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(783),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(783),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(783),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(783),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(783),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(783),
    [aux_sym__host_key_alias_token1] = ACTIONS(783),
    [aux_sym__hostname_token1] = ACTIONS(783),
    [aux_sym__identities_only_token1] = ACTIONS(783),
    [aux_sym__identity_agent_token1] = ACTIONS(783),
    [aux_sym__identity_file_token1] = ACTIONS(783),
    [aux_sym__ignore_unknown_token1] = ACTIONS(783),
    [aux_sym__ipqos_token1] = ACTIONS(783),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(783),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(783),
    [aux_sym__kex_algorithms_token1] = ACTIONS(783),
    [aux_sym__known_hosts_command_token1] = ACTIONS(783),
    [aux_sym__local_command_token1] = ACTIONS(783),
    [aux_sym__local_forward_token1] = ACTIONS(783),
    [aux_sym__log_level_token1] = ACTIONS(783),
    [aux_sym__log_verbose_token1] = ACTIONS(783),
    [aux_sym__macs_token1] = ACTIONS(783),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(783),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(783),
    [aux_sym__password_authentication_token1] = ACTIONS(783),
    [aux_sym__permit_local_command_token1] = ACTIONS(783),
    [aux_sym__permit_remote_open_token1] = ACTIONS(783),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(783),
    [aux_sym__port_token1] = ACTIONS(783),
    [aux_sym__preferred_authentications_token1] = ACTIONS(783),
    [aux_sym__proxy_command_token1] = ACTIONS(783),
    [aux_sym__proxy_jump_token1] = ACTIONS(783),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(783),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(783),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(783),
    [aux_sym__rekey_limit_token1] = ACTIONS(783),
    [aux_sym__remote_command_token1] = ACTIONS(783),
    [aux_sym__remote_forward_token1] = ACTIONS(783),
    [aux_sym__request_tty_token1] = ACTIONS(783),
    [aux_sym__required_rsa_size_token1] = ACTIONS(783),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(783),
    [aux_sym__security_key_provider_token1] = ACTIONS(783),
    [aux_sym__send_env_token1] = ACTIONS(783),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(783),
    [aux_sym__server_alive_interval_token1] = ACTIONS(783),
    [aux_sym__session_type_token1] = ACTIONS(783),
    [aux_sym__stdin_null_token1] = ACTIONS(783),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(783),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(783),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(783),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(783),
    [aux_sym__tag_token1] = ACTIONS(783),
    [aux_sym__tunnel_token1] = ACTIONS(785),
    [aux_sym__tunnel_device_token1] = ACTIONS(783),
    [aux_sym__update_host_keys_token1] = ACTIONS(783),
    [aux_sym__user_token1] = ACTIONS(785),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(783),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(783),
    [aux_sym__visual_host_key_token1] = ACTIONS(783),
    [aux_sym__xauth_location_token1] = ACTIONS(783),
    [sym_comment] = ACTIONS(783),
    [sym__space] = ACTIONS(783),
    [sym__eol] = ACTIONS(783),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym_host_declaration_token1] = ACTIONS(491),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(489),
    [aux_sym__address_family_token1] = ACTIONS(489),
    [aux_sym__batch_mode_token1] = ACTIONS(489),
    [aux_sym__bind_address_token1] = ACTIONS(489),
    [aux_sym__bind_interface_token1] = ACTIONS(489),
    [aux_sym__canonical_domains_token1] = ACTIONS(489),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(489),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(489),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(489),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(489),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(489),
    [aux_sym__certificate_file_token1] = ACTIONS(489),
    [aux_sym__check_host_ip_token1] = ACTIONS(489),
    [aux_sym__ciphers_token1] = ACTIONS(489),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(489),
    [aux_sym__compression_token1] = ACTIONS(489),
    [aux_sym__connection_attempts_token1] = ACTIONS(489),
    [aux_sym__connect_timeout_token1] = ACTIONS(489),
    [aux_sym__control_master_token1] = ACTIONS(489),
    [aux_sym__control_persist_token1] = ACTIONS(489),
    [aux_sym__control_path_token1] = ACTIONS(489),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(489),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(489),
    [aux_sym__escape_char_token1] = ACTIONS(489),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(489),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(489),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(489),
    [aux_sym__forward_agent_token1] = ACTIONS(489),
    [aux_sym__forward_x11_token1] = ACTIONS(491),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(489),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(489),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(489),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(489),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(489),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(489),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(489),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(489),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(489),
    [aux_sym__host_key_alias_token1] = ACTIONS(489),
    [aux_sym__hostname_token1] = ACTIONS(489),
    [aux_sym__identities_only_token1] = ACTIONS(489),
    [aux_sym__identity_agent_token1] = ACTIONS(489),
    [aux_sym__identity_file_token1] = ACTIONS(489),
    [aux_sym__ignore_unknown_token1] = ACTIONS(489),
    [aux_sym__ipqos_token1] = ACTIONS(489),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(489),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(489),
    [aux_sym__kex_algorithms_token1] = ACTIONS(489),
    [aux_sym__known_hosts_command_token1] = ACTIONS(489),
    [aux_sym__local_command_token1] = ACTIONS(489),
    [aux_sym__local_forward_token1] = ACTIONS(489),
    [aux_sym__log_level_token1] = ACTIONS(489),
    [aux_sym__log_verbose_token1] = ACTIONS(489),
    [aux_sym__macs_token1] = ACTIONS(489),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(489),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(489),
    [aux_sym__password_authentication_token1] = ACTIONS(489),
    [aux_sym__permit_local_command_token1] = ACTIONS(489),
    [aux_sym__permit_remote_open_token1] = ACTIONS(489),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(489),
    [aux_sym__port_token1] = ACTIONS(489),
    [aux_sym__preferred_authentications_token1] = ACTIONS(489),
    [aux_sym__proxy_command_token1] = ACTIONS(489),
    [aux_sym__proxy_jump_token1] = ACTIONS(489),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(489),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(489),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(489),
    [aux_sym__rekey_limit_token1] = ACTIONS(489),
    [aux_sym__remote_command_token1] = ACTIONS(489),
    [aux_sym__remote_forward_token1] = ACTIONS(489),
    [aux_sym__request_tty_token1] = ACTIONS(489),
    [aux_sym__required_rsa_size_token1] = ACTIONS(489),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(489),
    [aux_sym__security_key_provider_token1] = ACTIONS(489),
    [aux_sym__send_env_token1] = ACTIONS(489),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(489),
    [aux_sym__server_alive_interval_token1] = ACTIONS(489),
    [aux_sym__session_type_token1] = ACTIONS(489),
    [aux_sym__stdin_null_token1] = ACTIONS(489),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(489),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(489),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(489),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(489),
    [aux_sym__tag_token1] = ACTIONS(489),
    [aux_sym__tunnel_token1] = ACTIONS(491),
    [aux_sym__tunnel_device_token1] = ACTIONS(489),
    [aux_sym__update_host_keys_token1] = ACTIONS(489),
    [aux_sym__user_token1] = ACTIONS(491),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(489),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(489),
    [aux_sym__visual_host_key_token1] = ACTIONS(489),
    [aux_sym__xauth_location_token1] = ACTIONS(489),
    [sym_comment] = ACTIONS(489),
    [sym__space] = ACTIONS(489),
    [sym__eol] = ACTIONS(489),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(787),
    [aux_sym_host_declaration_token1] = ACTIONS(789),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(787),
    [aux_sym__address_family_token1] = ACTIONS(787),
    [aux_sym__batch_mode_token1] = ACTIONS(787),
    [aux_sym__bind_address_token1] = ACTIONS(787),
    [aux_sym__bind_interface_token1] = ACTIONS(787),
    [aux_sym__canonical_domains_token1] = ACTIONS(787),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(787),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(787),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(787),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(787),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(787),
    [aux_sym__certificate_file_token1] = ACTIONS(787),
    [aux_sym__check_host_ip_token1] = ACTIONS(787),
    [aux_sym__ciphers_token1] = ACTIONS(787),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(787),
    [aux_sym__compression_token1] = ACTIONS(787),
    [aux_sym__connection_attempts_token1] = ACTIONS(787),
    [aux_sym__connect_timeout_token1] = ACTIONS(787),
    [aux_sym__control_master_token1] = ACTIONS(787),
    [aux_sym__control_persist_token1] = ACTIONS(787),
    [aux_sym__control_path_token1] = ACTIONS(787),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(787),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(787),
    [aux_sym__escape_char_token1] = ACTIONS(787),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(787),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(787),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(787),
    [aux_sym__forward_agent_token1] = ACTIONS(787),
    [aux_sym__forward_x11_token1] = ACTIONS(789),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(787),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(787),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(787),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(787),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(787),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(787),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(787),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(787),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(787),
    [aux_sym__host_key_alias_token1] = ACTIONS(787),
    [aux_sym__hostname_token1] = ACTIONS(787),
    [aux_sym__identities_only_token1] = ACTIONS(787),
    [aux_sym__identity_agent_token1] = ACTIONS(787),
    [aux_sym__identity_file_token1] = ACTIONS(787),
    [aux_sym__ignore_unknown_token1] = ACTIONS(787),
    [aux_sym__ipqos_token1] = ACTIONS(787),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(787),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(787),
    [aux_sym__kex_algorithms_token1] = ACTIONS(787),
    [aux_sym__known_hosts_command_token1] = ACTIONS(787),
    [aux_sym__local_command_token1] = ACTIONS(787),
    [aux_sym__local_forward_token1] = ACTIONS(787),
    [aux_sym__log_level_token1] = ACTIONS(787),
    [aux_sym__log_verbose_token1] = ACTIONS(787),
    [aux_sym__macs_token1] = ACTIONS(787),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(787),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(787),
    [aux_sym__password_authentication_token1] = ACTIONS(787),
    [aux_sym__permit_local_command_token1] = ACTIONS(787),
    [aux_sym__permit_remote_open_token1] = ACTIONS(787),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(787),
    [aux_sym__port_token1] = ACTIONS(787),
    [aux_sym__preferred_authentications_token1] = ACTIONS(787),
    [aux_sym__proxy_command_token1] = ACTIONS(787),
    [aux_sym__proxy_jump_token1] = ACTIONS(787),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(787),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(787),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(787),
    [aux_sym__rekey_limit_token1] = ACTIONS(787),
    [aux_sym__remote_command_token1] = ACTIONS(787),
    [aux_sym__remote_forward_token1] = ACTIONS(787),
    [aux_sym__request_tty_token1] = ACTIONS(787),
    [aux_sym__required_rsa_size_token1] = ACTIONS(787),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(787),
    [aux_sym__security_key_provider_token1] = ACTIONS(787),
    [aux_sym__send_env_token1] = ACTIONS(787),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(787),
    [aux_sym__server_alive_interval_token1] = ACTIONS(787),
    [aux_sym__session_type_token1] = ACTIONS(787),
    [aux_sym__stdin_null_token1] = ACTIONS(787),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(787),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(787),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(787),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(787),
    [aux_sym__tag_token1] = ACTIONS(787),
    [aux_sym__tunnel_token1] = ACTIONS(789),
    [aux_sym__tunnel_device_token1] = ACTIONS(787),
    [aux_sym__update_host_keys_token1] = ACTIONS(787),
    [aux_sym__user_token1] = ACTIONS(789),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(787),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(787),
    [aux_sym__visual_host_key_token1] = ACTIONS(787),
    [aux_sym__xauth_location_token1] = ACTIONS(787),
    [sym_comment] = ACTIONS(787),
    [sym__space] = ACTIONS(787),
    [sym__eol] = ACTIONS(787),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(791),
    [aux_sym_host_declaration_token1] = ACTIONS(793),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(791),
    [aux_sym__address_family_token1] = ACTIONS(791),
    [aux_sym__batch_mode_token1] = ACTIONS(791),
    [aux_sym__bind_address_token1] = ACTIONS(791),
    [aux_sym__bind_interface_token1] = ACTIONS(791),
    [aux_sym__canonical_domains_token1] = ACTIONS(791),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(791),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(791),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(791),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(791),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(791),
    [aux_sym__certificate_file_token1] = ACTIONS(791),
    [aux_sym__check_host_ip_token1] = ACTIONS(791),
    [aux_sym__ciphers_token1] = ACTIONS(791),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(791),
    [aux_sym__compression_token1] = ACTIONS(791),
    [aux_sym__connection_attempts_token1] = ACTIONS(791),
    [aux_sym__connect_timeout_token1] = ACTIONS(791),
    [aux_sym__control_master_token1] = ACTIONS(791),
    [aux_sym__control_persist_token1] = ACTIONS(791),
    [aux_sym__control_path_token1] = ACTIONS(791),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(791),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(791),
    [aux_sym__escape_char_token1] = ACTIONS(791),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(791),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(791),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(791),
    [aux_sym__forward_agent_token1] = ACTIONS(791),
    [aux_sym__forward_x11_token1] = ACTIONS(793),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(791),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(791),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(791),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(791),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(791),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(791),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(791),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(791),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(791),
    [aux_sym__host_key_alias_token1] = ACTIONS(791),
    [aux_sym__hostname_token1] = ACTIONS(791),
    [aux_sym__identities_only_token1] = ACTIONS(791),
    [aux_sym__identity_agent_token1] = ACTIONS(791),
    [aux_sym__identity_file_token1] = ACTIONS(791),
    [aux_sym__ignore_unknown_token1] = ACTIONS(791),
    [aux_sym__ipqos_token1] = ACTIONS(791),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(791),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(791),
    [aux_sym__kex_algorithms_token1] = ACTIONS(791),
    [aux_sym__known_hosts_command_token1] = ACTIONS(791),
    [aux_sym__local_command_token1] = ACTIONS(791),
    [aux_sym__local_forward_token1] = ACTIONS(791),
    [aux_sym__log_level_token1] = ACTIONS(791),
    [aux_sym__log_verbose_token1] = ACTIONS(791),
    [aux_sym__macs_token1] = ACTIONS(791),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(791),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(791),
    [aux_sym__password_authentication_token1] = ACTIONS(791),
    [aux_sym__permit_local_command_token1] = ACTIONS(791),
    [aux_sym__permit_remote_open_token1] = ACTIONS(791),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(791),
    [aux_sym__port_token1] = ACTIONS(791),
    [aux_sym__preferred_authentications_token1] = ACTIONS(791),
    [aux_sym__proxy_command_token1] = ACTIONS(791),
    [aux_sym__proxy_jump_token1] = ACTIONS(791),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(791),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(791),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(791),
    [aux_sym__rekey_limit_token1] = ACTIONS(791),
    [aux_sym__remote_command_token1] = ACTIONS(791),
    [aux_sym__remote_forward_token1] = ACTIONS(791),
    [aux_sym__request_tty_token1] = ACTIONS(791),
    [aux_sym__required_rsa_size_token1] = ACTIONS(791),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(791),
    [aux_sym__security_key_provider_token1] = ACTIONS(791),
    [aux_sym__send_env_token1] = ACTIONS(791),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(791),
    [aux_sym__server_alive_interval_token1] = ACTIONS(791),
    [aux_sym__session_type_token1] = ACTIONS(791),
    [aux_sym__stdin_null_token1] = ACTIONS(791),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(791),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(791),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(791),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(791),
    [aux_sym__tag_token1] = ACTIONS(791),
    [aux_sym__tunnel_token1] = ACTIONS(793),
    [aux_sym__tunnel_device_token1] = ACTIONS(791),
    [aux_sym__update_host_keys_token1] = ACTIONS(791),
    [aux_sym__user_token1] = ACTIONS(793),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(791),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(791),
    [aux_sym__visual_host_key_token1] = ACTIONS(791),
    [aux_sym__xauth_location_token1] = ACTIONS(791),
    [sym_comment] = ACTIONS(791),
    [sym__space] = ACTIONS(791),
    [sym__eol] = ACTIONS(791),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(795),
    [aux_sym_host_declaration_token1] = ACTIONS(797),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(795),
    [aux_sym__address_family_token1] = ACTIONS(795),
    [aux_sym__batch_mode_token1] = ACTIONS(795),
    [aux_sym__bind_address_token1] = ACTIONS(795),
    [aux_sym__bind_interface_token1] = ACTIONS(795),
    [aux_sym__canonical_domains_token1] = ACTIONS(795),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(795),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(795),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(795),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(795),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(795),
    [aux_sym__certificate_file_token1] = ACTIONS(795),
    [aux_sym__check_host_ip_token1] = ACTIONS(795),
    [aux_sym__ciphers_token1] = ACTIONS(795),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(795),
    [aux_sym__compression_token1] = ACTIONS(795),
    [aux_sym__connection_attempts_token1] = ACTIONS(795),
    [aux_sym__connect_timeout_token1] = ACTIONS(795),
    [aux_sym__control_master_token1] = ACTIONS(795),
    [aux_sym__control_persist_token1] = ACTIONS(795),
    [aux_sym__control_path_token1] = ACTIONS(795),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(795),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(795),
    [aux_sym__escape_char_token1] = ACTIONS(795),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(795),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(795),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(795),
    [aux_sym__forward_agent_token1] = ACTIONS(795),
    [aux_sym__forward_x11_token1] = ACTIONS(797),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(795),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(795),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(795),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(795),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(795),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(795),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(795),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(795),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(795),
    [aux_sym__host_key_alias_token1] = ACTIONS(795),
    [aux_sym__hostname_token1] = ACTIONS(795),
    [aux_sym__identities_only_token1] = ACTIONS(795),
    [aux_sym__identity_agent_token1] = ACTIONS(795),
    [aux_sym__identity_file_token1] = ACTIONS(795),
    [aux_sym__ignore_unknown_token1] = ACTIONS(795),
    [aux_sym__ipqos_token1] = ACTIONS(795),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(795),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(795),
    [aux_sym__kex_algorithms_token1] = ACTIONS(795),
    [aux_sym__known_hosts_command_token1] = ACTIONS(795),
    [aux_sym__local_command_token1] = ACTIONS(795),
    [aux_sym__local_forward_token1] = ACTIONS(795),
    [aux_sym__log_level_token1] = ACTIONS(795),
    [aux_sym__log_verbose_token1] = ACTIONS(795),
    [aux_sym__macs_token1] = ACTIONS(795),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(795),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(795),
    [aux_sym__password_authentication_token1] = ACTIONS(795),
    [aux_sym__permit_local_command_token1] = ACTIONS(795),
    [aux_sym__permit_remote_open_token1] = ACTIONS(795),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(795),
    [aux_sym__port_token1] = ACTIONS(795),
    [aux_sym__preferred_authentications_token1] = ACTIONS(795),
    [aux_sym__proxy_command_token1] = ACTIONS(795),
    [aux_sym__proxy_jump_token1] = ACTIONS(795),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(795),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(795),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(795),
    [aux_sym__rekey_limit_token1] = ACTIONS(795),
    [aux_sym__remote_command_token1] = ACTIONS(795),
    [aux_sym__remote_forward_token1] = ACTIONS(795),
    [aux_sym__request_tty_token1] = ACTIONS(795),
    [aux_sym__required_rsa_size_token1] = ACTIONS(795),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(795),
    [aux_sym__security_key_provider_token1] = ACTIONS(795),
    [aux_sym__send_env_token1] = ACTIONS(795),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(795),
    [aux_sym__server_alive_interval_token1] = ACTIONS(795),
    [aux_sym__session_type_token1] = ACTIONS(795),
    [aux_sym__stdin_null_token1] = ACTIONS(795),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(795),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(795),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(795),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(795),
    [aux_sym__tag_token1] = ACTIONS(795),
    [aux_sym__tunnel_token1] = ACTIONS(797),
    [aux_sym__tunnel_device_token1] = ACTIONS(795),
    [aux_sym__update_host_keys_token1] = ACTIONS(795),
    [aux_sym__user_token1] = ACTIONS(797),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(795),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(795),
    [aux_sym__visual_host_key_token1] = ACTIONS(795),
    [aux_sym__xauth_location_token1] = ACTIONS(795),
    [sym_comment] = ACTIONS(795),
    [sym__space] = ACTIONS(795),
    [sym__eol] = ACTIONS(795),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(799),
    [aux_sym_host_declaration_token1] = ACTIONS(801),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(799),
    [aux_sym__address_family_token1] = ACTIONS(799),
    [aux_sym__batch_mode_token1] = ACTIONS(799),
    [aux_sym__bind_address_token1] = ACTIONS(799),
    [aux_sym__bind_interface_token1] = ACTIONS(799),
    [aux_sym__canonical_domains_token1] = ACTIONS(799),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(799),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(799),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(799),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(799),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(799),
    [aux_sym__certificate_file_token1] = ACTIONS(799),
    [aux_sym__check_host_ip_token1] = ACTIONS(799),
    [aux_sym__ciphers_token1] = ACTIONS(799),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(799),
    [aux_sym__compression_token1] = ACTIONS(799),
    [aux_sym__connection_attempts_token1] = ACTIONS(799),
    [aux_sym__connect_timeout_token1] = ACTIONS(799),
    [aux_sym__control_master_token1] = ACTIONS(799),
    [aux_sym__control_persist_token1] = ACTIONS(799),
    [aux_sym__control_path_token1] = ACTIONS(799),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(799),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(799),
    [aux_sym__escape_char_token1] = ACTIONS(799),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(799),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(799),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(799),
    [aux_sym__forward_agent_token1] = ACTIONS(799),
    [aux_sym__forward_x11_token1] = ACTIONS(801),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(799),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(799),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(799),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(799),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(799),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(799),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(799),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(799),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(799),
    [aux_sym__host_key_alias_token1] = ACTIONS(799),
    [aux_sym__hostname_token1] = ACTIONS(799),
    [aux_sym__identities_only_token1] = ACTIONS(799),
    [aux_sym__identity_agent_token1] = ACTIONS(799),
    [aux_sym__identity_file_token1] = ACTIONS(799),
    [aux_sym__ignore_unknown_token1] = ACTIONS(799),
    [aux_sym__ipqos_token1] = ACTIONS(799),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(799),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(799),
    [aux_sym__kex_algorithms_token1] = ACTIONS(799),
    [aux_sym__known_hosts_command_token1] = ACTIONS(799),
    [aux_sym__local_command_token1] = ACTIONS(799),
    [aux_sym__local_forward_token1] = ACTIONS(799),
    [aux_sym__log_level_token1] = ACTIONS(799),
    [aux_sym__log_verbose_token1] = ACTIONS(799),
    [aux_sym__macs_token1] = ACTIONS(799),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(799),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(799),
    [aux_sym__password_authentication_token1] = ACTIONS(799),
    [aux_sym__permit_local_command_token1] = ACTIONS(799),
    [aux_sym__permit_remote_open_token1] = ACTIONS(799),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(799),
    [aux_sym__port_token1] = ACTIONS(799),
    [aux_sym__preferred_authentications_token1] = ACTIONS(799),
    [aux_sym__proxy_command_token1] = ACTIONS(799),
    [aux_sym__proxy_jump_token1] = ACTIONS(799),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(799),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(799),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(799),
    [aux_sym__rekey_limit_token1] = ACTIONS(799),
    [aux_sym__remote_command_token1] = ACTIONS(799),
    [aux_sym__remote_forward_token1] = ACTIONS(799),
    [aux_sym__request_tty_token1] = ACTIONS(799),
    [aux_sym__required_rsa_size_token1] = ACTIONS(799),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(799),
    [aux_sym__security_key_provider_token1] = ACTIONS(799),
    [aux_sym__send_env_token1] = ACTIONS(799),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(799),
    [aux_sym__server_alive_interval_token1] = ACTIONS(799),
    [aux_sym__session_type_token1] = ACTIONS(799),
    [aux_sym__stdin_null_token1] = ACTIONS(799),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(799),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(799),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(799),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(799),
    [aux_sym__tag_token1] = ACTIONS(799),
    [aux_sym__tunnel_token1] = ACTIONS(801),
    [aux_sym__tunnel_device_token1] = ACTIONS(799),
    [aux_sym__update_host_keys_token1] = ACTIONS(799),
    [aux_sym__user_token1] = ACTIONS(801),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(799),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(799),
    [aux_sym__visual_host_key_token1] = ACTIONS(799),
    [aux_sym__xauth_location_token1] = ACTIONS(799),
    [sym_comment] = ACTIONS(799),
    [sym__space] = ACTIONS(799),
    [sym__eol] = ACTIONS(799),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(803),
    [aux_sym_host_declaration_token1] = ACTIONS(805),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(803),
    [aux_sym__address_family_token1] = ACTIONS(803),
    [aux_sym__batch_mode_token1] = ACTIONS(803),
    [aux_sym__bind_address_token1] = ACTIONS(803),
    [aux_sym__bind_interface_token1] = ACTIONS(803),
    [aux_sym__canonical_domains_token1] = ACTIONS(803),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(803),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(803),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(803),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(803),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(803),
    [aux_sym__certificate_file_token1] = ACTIONS(803),
    [aux_sym__check_host_ip_token1] = ACTIONS(803),
    [aux_sym__ciphers_token1] = ACTIONS(803),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(803),
    [aux_sym__compression_token1] = ACTIONS(803),
    [aux_sym__connection_attempts_token1] = ACTIONS(803),
    [aux_sym__connect_timeout_token1] = ACTIONS(803),
    [aux_sym__control_master_token1] = ACTIONS(803),
    [aux_sym__control_persist_token1] = ACTIONS(803),
    [aux_sym__control_path_token1] = ACTIONS(803),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(803),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(803),
    [aux_sym__escape_char_token1] = ACTIONS(803),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(803),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(803),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(803),
    [aux_sym__forward_agent_token1] = ACTIONS(803),
    [aux_sym__forward_x11_token1] = ACTIONS(805),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(803),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(803),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(803),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(803),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(803),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(803),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(803),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(803),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(803),
    [aux_sym__host_key_alias_token1] = ACTIONS(803),
    [aux_sym__hostname_token1] = ACTIONS(803),
    [aux_sym__identities_only_token1] = ACTIONS(803),
    [aux_sym__identity_agent_token1] = ACTIONS(803),
    [aux_sym__identity_file_token1] = ACTIONS(803),
    [aux_sym__ignore_unknown_token1] = ACTIONS(803),
    [aux_sym__ipqos_token1] = ACTIONS(803),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(803),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(803),
    [aux_sym__kex_algorithms_token1] = ACTIONS(803),
    [aux_sym__known_hosts_command_token1] = ACTIONS(803),
    [aux_sym__local_command_token1] = ACTIONS(803),
    [aux_sym__local_forward_token1] = ACTIONS(803),
    [aux_sym__log_level_token1] = ACTIONS(803),
    [aux_sym__log_verbose_token1] = ACTIONS(803),
    [aux_sym__macs_token1] = ACTIONS(803),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(803),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(803),
    [aux_sym__password_authentication_token1] = ACTIONS(803),
    [aux_sym__permit_local_command_token1] = ACTIONS(803),
    [aux_sym__permit_remote_open_token1] = ACTIONS(803),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(803),
    [aux_sym__port_token1] = ACTIONS(803),
    [aux_sym__preferred_authentications_token1] = ACTIONS(803),
    [aux_sym__proxy_command_token1] = ACTIONS(803),
    [aux_sym__proxy_jump_token1] = ACTIONS(803),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(803),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(803),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(803),
    [aux_sym__rekey_limit_token1] = ACTIONS(803),
    [aux_sym__remote_command_token1] = ACTIONS(803),
    [aux_sym__remote_forward_token1] = ACTIONS(803),
    [aux_sym__request_tty_token1] = ACTIONS(803),
    [aux_sym__required_rsa_size_token1] = ACTIONS(803),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(803),
    [aux_sym__security_key_provider_token1] = ACTIONS(803),
    [aux_sym__send_env_token1] = ACTIONS(803),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(803),
    [aux_sym__server_alive_interval_token1] = ACTIONS(803),
    [aux_sym__session_type_token1] = ACTIONS(803),
    [aux_sym__stdin_null_token1] = ACTIONS(803),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(803),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(803),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(803),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(803),
    [aux_sym__tag_token1] = ACTIONS(803),
    [aux_sym__tunnel_token1] = ACTIONS(805),
    [aux_sym__tunnel_device_token1] = ACTIONS(803),
    [aux_sym__update_host_keys_token1] = ACTIONS(803),
    [aux_sym__user_token1] = ACTIONS(805),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(803),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(803),
    [aux_sym__visual_host_key_token1] = ACTIONS(803),
    [aux_sym__xauth_location_token1] = ACTIONS(803),
    [sym_comment] = ACTIONS(803),
    [sym__space] = ACTIONS(803),
    [sym__eol] = ACTIONS(803),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(807),
    [aux_sym_host_declaration_token1] = ACTIONS(809),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(807),
    [aux_sym__address_family_token1] = ACTIONS(807),
    [aux_sym__batch_mode_token1] = ACTIONS(807),
    [aux_sym__bind_address_token1] = ACTIONS(807),
    [aux_sym__bind_interface_token1] = ACTIONS(807),
    [aux_sym__canonical_domains_token1] = ACTIONS(807),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(807),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(807),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(807),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(807),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(807),
    [aux_sym__certificate_file_token1] = ACTIONS(807),
    [aux_sym__check_host_ip_token1] = ACTIONS(807),
    [aux_sym__ciphers_token1] = ACTIONS(807),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(807),
    [aux_sym__compression_token1] = ACTIONS(807),
    [aux_sym__connection_attempts_token1] = ACTIONS(807),
    [aux_sym__connect_timeout_token1] = ACTIONS(807),
    [aux_sym__control_master_token1] = ACTIONS(807),
    [aux_sym__control_persist_token1] = ACTIONS(807),
    [aux_sym__control_path_token1] = ACTIONS(807),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(807),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(807),
    [aux_sym__escape_char_token1] = ACTIONS(807),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(807),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(807),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(807),
    [aux_sym__forward_agent_token1] = ACTIONS(807),
    [aux_sym__forward_x11_token1] = ACTIONS(809),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(807),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(807),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(807),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(807),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(807),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(807),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(807),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(807),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(807),
    [aux_sym__host_key_alias_token1] = ACTIONS(807),
    [aux_sym__hostname_token1] = ACTIONS(807),
    [aux_sym__identities_only_token1] = ACTIONS(807),
    [aux_sym__identity_agent_token1] = ACTIONS(807),
    [aux_sym__identity_file_token1] = ACTIONS(807),
    [aux_sym__ignore_unknown_token1] = ACTIONS(807),
    [aux_sym__ipqos_token1] = ACTIONS(807),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(807),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(807),
    [aux_sym__kex_algorithms_token1] = ACTIONS(807),
    [aux_sym__known_hosts_command_token1] = ACTIONS(807),
    [aux_sym__local_command_token1] = ACTIONS(807),
    [aux_sym__local_forward_token1] = ACTIONS(807),
    [aux_sym__log_level_token1] = ACTIONS(807),
    [aux_sym__log_verbose_token1] = ACTIONS(807),
    [aux_sym__macs_token1] = ACTIONS(807),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(807),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(807),
    [aux_sym__password_authentication_token1] = ACTIONS(807),
    [aux_sym__permit_local_command_token1] = ACTIONS(807),
    [aux_sym__permit_remote_open_token1] = ACTIONS(807),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(807),
    [aux_sym__port_token1] = ACTIONS(807),
    [aux_sym__preferred_authentications_token1] = ACTIONS(807),
    [aux_sym__proxy_command_token1] = ACTIONS(807),
    [aux_sym__proxy_jump_token1] = ACTIONS(807),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(807),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(807),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(807),
    [aux_sym__rekey_limit_token1] = ACTIONS(807),
    [aux_sym__remote_command_token1] = ACTIONS(807),
    [aux_sym__remote_forward_token1] = ACTIONS(807),
    [aux_sym__request_tty_token1] = ACTIONS(807),
    [aux_sym__required_rsa_size_token1] = ACTIONS(807),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(807),
    [aux_sym__security_key_provider_token1] = ACTIONS(807),
    [aux_sym__send_env_token1] = ACTIONS(807),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(807),
    [aux_sym__server_alive_interval_token1] = ACTIONS(807),
    [aux_sym__session_type_token1] = ACTIONS(807),
    [aux_sym__stdin_null_token1] = ACTIONS(807),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(807),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(807),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(807),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(807),
    [aux_sym__tag_token1] = ACTIONS(807),
    [aux_sym__tunnel_token1] = ACTIONS(809),
    [aux_sym__tunnel_device_token1] = ACTIONS(807),
    [aux_sym__update_host_keys_token1] = ACTIONS(807),
    [aux_sym__user_token1] = ACTIONS(809),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(807),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(807),
    [aux_sym__visual_host_key_token1] = ACTIONS(807),
    [aux_sym__xauth_location_token1] = ACTIONS(807),
    [sym_comment] = ACTIONS(807),
    [sym__space] = ACTIONS(807),
    [sym__eol] = ACTIONS(807),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(811),
    [aux_sym_host_declaration_token1] = ACTIONS(813),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(811),
    [aux_sym__address_family_token1] = ACTIONS(811),
    [aux_sym__batch_mode_token1] = ACTIONS(811),
    [aux_sym__bind_address_token1] = ACTIONS(811),
    [aux_sym__bind_interface_token1] = ACTIONS(811),
    [aux_sym__canonical_domains_token1] = ACTIONS(811),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(811),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(811),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(811),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(811),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(811),
    [aux_sym__certificate_file_token1] = ACTIONS(811),
    [aux_sym__check_host_ip_token1] = ACTIONS(811),
    [aux_sym__ciphers_token1] = ACTIONS(811),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(811),
    [aux_sym__compression_token1] = ACTIONS(811),
    [aux_sym__connection_attempts_token1] = ACTIONS(811),
    [aux_sym__connect_timeout_token1] = ACTIONS(811),
    [aux_sym__control_master_token1] = ACTIONS(811),
    [aux_sym__control_persist_token1] = ACTIONS(811),
    [aux_sym__control_path_token1] = ACTIONS(811),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(811),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(811),
    [aux_sym__escape_char_token1] = ACTIONS(811),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(811),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(811),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(811),
    [aux_sym__forward_agent_token1] = ACTIONS(811),
    [aux_sym__forward_x11_token1] = ACTIONS(813),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(811),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(811),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(811),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(811),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(811),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(811),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(811),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(811),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(811),
    [aux_sym__host_key_alias_token1] = ACTIONS(811),
    [aux_sym__hostname_token1] = ACTIONS(811),
    [aux_sym__identities_only_token1] = ACTIONS(811),
    [aux_sym__identity_agent_token1] = ACTIONS(811),
    [aux_sym__identity_file_token1] = ACTIONS(811),
    [aux_sym__ignore_unknown_token1] = ACTIONS(811),
    [aux_sym__ipqos_token1] = ACTIONS(811),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(811),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(811),
    [aux_sym__kex_algorithms_token1] = ACTIONS(811),
    [aux_sym__known_hosts_command_token1] = ACTIONS(811),
    [aux_sym__local_command_token1] = ACTIONS(811),
    [aux_sym__local_forward_token1] = ACTIONS(811),
    [aux_sym__log_level_token1] = ACTIONS(811),
    [aux_sym__log_verbose_token1] = ACTIONS(811),
    [aux_sym__macs_token1] = ACTIONS(811),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(811),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(811),
    [aux_sym__password_authentication_token1] = ACTIONS(811),
    [aux_sym__permit_local_command_token1] = ACTIONS(811),
    [aux_sym__permit_remote_open_token1] = ACTIONS(811),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(811),
    [aux_sym__port_token1] = ACTIONS(811),
    [aux_sym__preferred_authentications_token1] = ACTIONS(811),
    [aux_sym__proxy_command_token1] = ACTIONS(811),
    [aux_sym__proxy_jump_token1] = ACTIONS(811),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(811),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(811),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(811),
    [aux_sym__rekey_limit_token1] = ACTIONS(811),
    [aux_sym__remote_command_token1] = ACTIONS(811),
    [aux_sym__remote_forward_token1] = ACTIONS(811),
    [aux_sym__request_tty_token1] = ACTIONS(811),
    [aux_sym__required_rsa_size_token1] = ACTIONS(811),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(811),
    [aux_sym__security_key_provider_token1] = ACTIONS(811),
    [aux_sym__send_env_token1] = ACTIONS(811),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(811),
    [aux_sym__server_alive_interval_token1] = ACTIONS(811),
    [aux_sym__session_type_token1] = ACTIONS(811),
    [aux_sym__stdin_null_token1] = ACTIONS(811),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(811),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(811),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(811),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(811),
    [aux_sym__tag_token1] = ACTIONS(811),
    [aux_sym__tunnel_token1] = ACTIONS(813),
    [aux_sym__tunnel_device_token1] = ACTIONS(811),
    [aux_sym__update_host_keys_token1] = ACTIONS(811),
    [aux_sym__user_token1] = ACTIONS(813),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(811),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(811),
    [aux_sym__visual_host_key_token1] = ACTIONS(811),
    [aux_sym__xauth_location_token1] = ACTIONS(811),
    [sym_comment] = ACTIONS(811),
    [sym__space] = ACTIONS(811),
    [sym__eol] = ACTIONS(811),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_host_declaration_token1] = ACTIONS(815),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(193),
    [aux_sym__address_family_token1] = ACTIONS(193),
    [aux_sym__batch_mode_token1] = ACTIONS(193),
    [aux_sym__bind_address_token1] = ACTIONS(193),
    [aux_sym__bind_interface_token1] = ACTIONS(193),
    [aux_sym__canonical_domains_token1] = ACTIONS(193),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(193),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(193),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(193),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(193),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(193),
    [aux_sym__certificate_file_token1] = ACTIONS(193),
    [aux_sym__check_host_ip_token1] = ACTIONS(193),
    [aux_sym__ciphers_token1] = ACTIONS(193),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(193),
    [aux_sym__compression_token1] = ACTIONS(193),
    [aux_sym__connection_attempts_token1] = ACTIONS(193),
    [aux_sym__connect_timeout_token1] = ACTIONS(193),
    [aux_sym__control_master_token1] = ACTIONS(193),
    [aux_sym__control_persist_token1] = ACTIONS(193),
    [aux_sym__control_path_token1] = ACTIONS(193),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(193),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(193),
    [aux_sym__escape_char_token1] = ACTIONS(193),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(193),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(193),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(193),
    [aux_sym__forward_agent_token1] = ACTIONS(193),
    [aux_sym__forward_x11_token1] = ACTIONS(815),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(193),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(193),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(193),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(193),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(193),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(193),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(193),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(193),
    [aux_sym__host_key_alias_token1] = ACTIONS(193),
    [aux_sym__hostname_token1] = ACTIONS(193),
    [aux_sym__identities_only_token1] = ACTIONS(193),
    [aux_sym__identity_agent_token1] = ACTIONS(193),
    [aux_sym__identity_file_token1] = ACTIONS(193),
    [aux_sym__ignore_unknown_token1] = ACTIONS(193),
    [aux_sym__ipqos_token1] = ACTIONS(193),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(193),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(193),
    [aux_sym__kex_algorithms_token1] = ACTIONS(193),
    [aux_sym__known_hosts_command_token1] = ACTIONS(193),
    [aux_sym__local_command_token1] = ACTIONS(193),
    [aux_sym__local_forward_token1] = ACTIONS(193),
    [aux_sym__log_level_token1] = ACTIONS(193),
    [aux_sym__log_verbose_token1] = ACTIONS(193),
    [aux_sym__macs_token1] = ACTIONS(193),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(193),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(193),
    [aux_sym__password_authentication_token1] = ACTIONS(193),
    [aux_sym__permit_local_command_token1] = ACTIONS(193),
    [aux_sym__permit_remote_open_token1] = ACTIONS(193),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(193),
    [aux_sym__port_token1] = ACTIONS(193),
    [aux_sym__preferred_authentications_token1] = ACTIONS(193),
    [aux_sym__proxy_command_token1] = ACTIONS(193),
    [aux_sym__proxy_jump_token1] = ACTIONS(193),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(193),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(193),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(193),
    [aux_sym__rekey_limit_token1] = ACTIONS(193),
    [aux_sym__remote_command_token1] = ACTIONS(193),
    [aux_sym__remote_forward_token1] = ACTIONS(193),
    [aux_sym__request_tty_token1] = ACTIONS(193),
    [aux_sym__required_rsa_size_token1] = ACTIONS(193),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(193),
    [aux_sym__security_key_provider_token1] = ACTIONS(193),
    [aux_sym__send_env_token1] = ACTIONS(193),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(193),
    [aux_sym__server_alive_interval_token1] = ACTIONS(193),
    [aux_sym__session_type_token1] = ACTIONS(193),
    [aux_sym__stdin_null_token1] = ACTIONS(193),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(193),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(193),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(193),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(193),
    [aux_sym__tag_token1] = ACTIONS(193),
    [aux_sym__tunnel_token1] = ACTIONS(815),
    [aux_sym__tunnel_device_token1] = ACTIONS(193),
    [aux_sym__update_host_keys_token1] = ACTIONS(193),
    [aux_sym__user_token1] = ACTIONS(815),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(193),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [sym__space] = ACTIONS(193),
    [sym__eol] = ACTIONS(193),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(817),
    [aux_sym_host_declaration_token1] = ACTIONS(819),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(817),
    [aux_sym__address_family_token1] = ACTIONS(817),
    [aux_sym__batch_mode_token1] = ACTIONS(817),
    [aux_sym__bind_address_token1] = ACTIONS(817),
    [aux_sym__bind_interface_token1] = ACTIONS(817),
    [aux_sym__canonical_domains_token1] = ACTIONS(817),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(817),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(817),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(817),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(817),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(817),
    [aux_sym__certificate_file_token1] = ACTIONS(817),
    [aux_sym__check_host_ip_token1] = ACTIONS(817),
    [aux_sym__ciphers_token1] = ACTIONS(817),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(817),
    [aux_sym__compression_token1] = ACTIONS(817),
    [aux_sym__connection_attempts_token1] = ACTIONS(817),
    [aux_sym__connect_timeout_token1] = ACTIONS(817),
    [aux_sym__control_master_token1] = ACTIONS(817),
    [aux_sym__control_persist_token1] = ACTIONS(817),
    [aux_sym__control_path_token1] = ACTIONS(817),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(817),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(817),
    [aux_sym__escape_char_token1] = ACTIONS(817),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(817),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(817),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(817),
    [aux_sym__forward_agent_token1] = ACTIONS(817),
    [aux_sym__forward_x11_token1] = ACTIONS(819),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(817),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(817),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(817),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(817),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(817),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(817),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(817),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(817),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(817),
    [aux_sym__host_key_alias_token1] = ACTIONS(817),
    [aux_sym__hostname_token1] = ACTIONS(817),
    [aux_sym__identities_only_token1] = ACTIONS(817),
    [aux_sym__identity_agent_token1] = ACTIONS(817),
    [aux_sym__identity_file_token1] = ACTIONS(817),
    [aux_sym__ignore_unknown_token1] = ACTIONS(817),
    [aux_sym__ipqos_token1] = ACTIONS(817),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(817),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(817),
    [aux_sym__kex_algorithms_token1] = ACTIONS(817),
    [aux_sym__known_hosts_command_token1] = ACTIONS(817),
    [aux_sym__local_command_token1] = ACTIONS(817),
    [aux_sym__local_forward_token1] = ACTIONS(817),
    [aux_sym__log_level_token1] = ACTIONS(817),
    [aux_sym__log_verbose_token1] = ACTIONS(817),
    [aux_sym__macs_token1] = ACTIONS(817),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(817),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(817),
    [aux_sym__password_authentication_token1] = ACTIONS(817),
    [aux_sym__permit_local_command_token1] = ACTIONS(817),
    [aux_sym__permit_remote_open_token1] = ACTIONS(817),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(817),
    [aux_sym__port_token1] = ACTIONS(817),
    [aux_sym__preferred_authentications_token1] = ACTIONS(817),
    [aux_sym__proxy_command_token1] = ACTIONS(817),
    [aux_sym__proxy_jump_token1] = ACTIONS(817),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(817),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(817),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(817),
    [aux_sym__rekey_limit_token1] = ACTIONS(817),
    [aux_sym__remote_command_token1] = ACTIONS(817),
    [aux_sym__remote_forward_token1] = ACTIONS(817),
    [aux_sym__request_tty_token1] = ACTIONS(817),
    [aux_sym__required_rsa_size_token1] = ACTIONS(817),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(817),
    [aux_sym__security_key_provider_token1] = ACTIONS(817),
    [aux_sym__send_env_token1] = ACTIONS(817),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(817),
    [aux_sym__server_alive_interval_token1] = ACTIONS(817),
    [aux_sym__session_type_token1] = ACTIONS(817),
    [aux_sym__stdin_null_token1] = ACTIONS(817),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(817),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(817),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(817),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(817),
    [aux_sym__tag_token1] = ACTIONS(817),
    [aux_sym__tunnel_token1] = ACTIONS(819),
    [aux_sym__tunnel_device_token1] = ACTIONS(817),
    [aux_sym__update_host_keys_token1] = ACTIONS(817),
    [aux_sym__user_token1] = ACTIONS(819),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(817),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(817),
    [aux_sym__visual_host_key_token1] = ACTIONS(817),
    [aux_sym__xauth_location_token1] = ACTIONS(817),
    [sym_comment] = ACTIONS(817),
    [sym__space] = ACTIONS(817),
    [sym__eol] = ACTIONS(817),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(821),
    [aux_sym_host_declaration_token1] = ACTIONS(823),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(821),
    [aux_sym__address_family_token1] = ACTIONS(821),
    [aux_sym__batch_mode_token1] = ACTIONS(821),
    [aux_sym__bind_address_token1] = ACTIONS(821),
    [aux_sym__bind_interface_token1] = ACTIONS(821),
    [aux_sym__canonical_domains_token1] = ACTIONS(821),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(821),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(821),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(821),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(821),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(821),
    [aux_sym__certificate_file_token1] = ACTIONS(821),
    [aux_sym__check_host_ip_token1] = ACTIONS(821),
    [aux_sym__ciphers_token1] = ACTIONS(821),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(821),
    [aux_sym__compression_token1] = ACTIONS(821),
    [aux_sym__connection_attempts_token1] = ACTIONS(821),
    [aux_sym__connect_timeout_token1] = ACTIONS(821),
    [aux_sym__control_master_token1] = ACTIONS(821),
    [aux_sym__control_persist_token1] = ACTIONS(821),
    [aux_sym__control_path_token1] = ACTIONS(821),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(821),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(821),
    [aux_sym__escape_char_token1] = ACTIONS(821),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(821),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(821),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(821),
    [aux_sym__forward_agent_token1] = ACTIONS(821),
    [aux_sym__forward_x11_token1] = ACTIONS(823),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(821),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(821),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(821),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(821),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(821),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(821),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(821),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(821),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(821),
    [aux_sym__host_key_alias_token1] = ACTIONS(821),
    [aux_sym__hostname_token1] = ACTIONS(821),
    [aux_sym__identities_only_token1] = ACTIONS(821),
    [aux_sym__identity_agent_token1] = ACTIONS(821),
    [aux_sym__identity_file_token1] = ACTIONS(821),
    [aux_sym__ignore_unknown_token1] = ACTIONS(821),
    [aux_sym__ipqos_token1] = ACTIONS(821),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(821),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(821),
    [aux_sym__kex_algorithms_token1] = ACTIONS(821),
    [aux_sym__known_hosts_command_token1] = ACTIONS(821),
    [aux_sym__local_command_token1] = ACTIONS(821),
    [aux_sym__local_forward_token1] = ACTIONS(821),
    [aux_sym__log_level_token1] = ACTIONS(821),
    [aux_sym__log_verbose_token1] = ACTIONS(821),
    [aux_sym__macs_token1] = ACTIONS(821),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(821),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(821),
    [aux_sym__password_authentication_token1] = ACTIONS(821),
    [aux_sym__permit_local_command_token1] = ACTIONS(821),
    [aux_sym__permit_remote_open_token1] = ACTIONS(821),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(821),
    [aux_sym__port_token1] = ACTIONS(821),
    [aux_sym__preferred_authentications_token1] = ACTIONS(821),
    [aux_sym__proxy_command_token1] = ACTIONS(821),
    [aux_sym__proxy_jump_token1] = ACTIONS(821),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(821),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(821),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(821),
    [aux_sym__rekey_limit_token1] = ACTIONS(821),
    [aux_sym__remote_command_token1] = ACTIONS(821),
    [aux_sym__remote_forward_token1] = ACTIONS(821),
    [aux_sym__request_tty_token1] = ACTIONS(821),
    [aux_sym__required_rsa_size_token1] = ACTIONS(821),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(821),
    [aux_sym__security_key_provider_token1] = ACTIONS(821),
    [aux_sym__send_env_token1] = ACTIONS(821),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(821),
    [aux_sym__server_alive_interval_token1] = ACTIONS(821),
    [aux_sym__session_type_token1] = ACTIONS(821),
    [aux_sym__stdin_null_token1] = ACTIONS(821),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(821),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(821),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(821),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(821),
    [aux_sym__tag_token1] = ACTIONS(821),
    [aux_sym__tunnel_token1] = ACTIONS(823),
    [aux_sym__tunnel_device_token1] = ACTIONS(821),
    [aux_sym__update_host_keys_token1] = ACTIONS(821),
    [aux_sym__user_token1] = ACTIONS(823),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(821),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(821),
    [aux_sym__visual_host_key_token1] = ACTIONS(821),
    [aux_sym__xauth_location_token1] = ACTIONS(821),
    [sym_comment] = ACTIONS(821),
    [sym__space] = ACTIONS(821),
    [sym__eol] = ACTIONS(821),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(825), 1,
      anon_sym_STAR,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(833), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(835), 1,
      sym__number,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(686), 1,
      sym_string,
    STATE(689), 1,
      sym_number,
    ACTIONS(831), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    STATE(703), 2,
      sym__forward_value1,
      sym__file_string,
  [37] = 11,
    ACTIONS(825), 1,
      anon_sym_STAR,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(833), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(835), 1,
      sym__number,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(686), 1,
      sym_string,
    STATE(689), 1,
      sym_number,
    ACTIONS(831), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    STATE(687), 2,
      sym__forward_value1,
      sym__file_string,
  [74] = 9,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(833), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(837), 1,
      anon_sym_STAR,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(660), 1,
      sym_string,
    ACTIONS(831), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    STATE(628), 2,
      sym__forward_value2,
      sym__file_string,
  [105] = 10,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(845), 1,
      anon_sym_DOLLAR,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(448), 1,
      sym__var_value,
    STATE(484), 1,
      sym__file_string,
    ACTIONS(839), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [138] = 9,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(833), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(837), 1,
      anon_sym_STAR,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(660), 1,
      sym_string,
    ACTIONS(831), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    STATE(599), 2,
      sym__forward_value2,
      sym__file_string,
  [169] = 6,
    ACTIONS(851), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(853), 1,
      aux_sym__file_string_token1,
    STATE(38), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(855), 2,
      sym__space,
      sym__eol,
    STATE(61), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(849), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [192] = 7,
    ACTIONS(851), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(853), 1,
      aux_sym__file_string_token1,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(511), 1,
      sym__file_pattern_vars,
    STATE(61), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(849), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [217] = 7,
    ACTIONS(851), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(853), 1,
      aux_sym__file_string_token1,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(524), 1,
      sym__file_pattern_vars,
    STATE(61), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(849), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [242] = 6,
    ACTIONS(862), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(865), 1,
      aux_sym__file_string_token1,
    STATE(38), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(868), 2,
      sym__space,
      sym__eol,
    STATE(61), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(859), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [265] = 8,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(870), 1,
      anon_sym_none,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(408), 1,
      sym__file_string,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [291] = 6,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(880), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(40), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(91), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(872), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [313] = 6,
    ACTIONS(885), 1,
      anon_sym_DQUOTE,
    ACTIONS(887), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(889), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(40), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(91), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(883), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [335] = 8,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(891), 1,
      anon_sym_none,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(635), 1,
      sym__file_string,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [361] = 5,
    ACTIONS(887), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(889), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(41), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(91), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(883), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [380] = 7,
    ACTIONS(893), 1,
      anon_sym_BANG,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    ACTIONS(901), 1,
      sym__eol,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(544), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [403] = 7,
    ACTIONS(893), 1,
      anon_sym_BANG,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    ACTIONS(903), 1,
      sym__eol,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(544), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [426] = 7,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(905), 1,
      anon_sym_none,
    ACTIONS(909), 1,
      aux_sym__file_string_token1,
    STATE(105), 1,
      aux_sym_pattern_repeat1,
    STATE(301), 1,
      sym__cnames_map,
    STATE(302), 1,
      sym_pattern,
    ACTIONS(907), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [449] = 6,
    ACTIONS(911), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(913), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(915), 1,
      aux_sym__file_string_token1,
    STATE(54), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(917), 2,
      sym__space,
      sym__eol,
    STATE(117), 2,
      sym__hosts_token,
      sym_variable,
  [470] = 6,
    ACTIONS(919), 1,
      aux_sym__file_token_token1,
    ACTIONS(922), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(925), 1,
      aux_sym__file_string_token1,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(928), 2,
      sym__space,
      sym__eol,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [491] = 6,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(845), 1,
      anon_sym_DOLLAR,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(498), 1,
      sym__var_value,
    ACTIONS(932), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(497), 2,
      sym_string,
      sym__boolean,
  [512] = 7,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(481), 1,
      sym__file_string,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [535] = 7,
    ACTIONS(911), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(913), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(915), 1,
      aux_sym__file_string_token1,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym__hosts_string_repeat1,
    STATE(477), 1,
      sym__hosts_string,
    STATE(117), 2,
      sym__hosts_token,
      sym_variable,
  [558] = 7,
    ACTIONS(893), 1,
      anon_sym_BANG,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    ACTIONS(936), 1,
      sym__eol,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(544), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [581] = 6,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(938), 2,
      sym__space,
      sym__eol,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [602] = 6,
    ACTIONS(940), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(943), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(946), 1,
      aux_sym__file_string_token1,
    STATE(54), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(949), 2,
      sym__space,
      sym__eol,
    STATE(117), 2,
      sym__hosts_token,
      sym_variable,
  [623] = 7,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(626), 1,
      sym__file_string,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [646] = 7,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(403), 1,
      sym__file_string,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [669] = 7,
    ACTIONS(893), 1,
      anon_sym_BANG,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    ACTIONS(951), 1,
      sym__eol,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(544), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [692] = 7,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(843), 1,
      aux_sym__file_token_token1,
    ACTIONS(847), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(427), 1,
      sym__file_string,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
  [715] = 2,
    ACTIONS(955), 1,
      aux_sym__file_string_token1,
    ACTIONS(953), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [727] = 6,
    ACTIONS(957), 1,
      aux_sym_time_token1,
    ACTIONS(959), 1,
      aux_sym_time_token2,
    ACTIONS(961), 1,
      aux_sym_time_token3,
    ACTIONS(963), 1,
      aux_sym_time_token4,
    ACTIONS(965), 1,
      aux_sym_time_token5,
    ACTIONS(967), 2,
      sym__space,
      sym__eol,
  [747] = 2,
    ACTIONS(971), 1,
      aux_sym__file_string_token1,
    ACTIONS(969), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [759] = 4,
    ACTIONS(975), 1,
      anon_sym_confirm,
    ACTIONS(977), 1,
      sym__number,
    STATE(537), 2,
      sym__boolean,
      sym_time,
    ACTIONS(973), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [775] = 7,
    ACTIONS(979), 1,
      anon_sym_none,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    ACTIONS(983), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(985), 1,
      aux_sym__file_string_token1,
    STATE(86), 1,
      aux_sym__proxy_string_content,
    STATE(206), 1,
      sym__proxy_token,
    STATE(392), 1,
      sym__proxy_string,
  [797] = 4,
    ACTIONS(992), 1,
      aux_sym__file_string_token1,
    STATE(64), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(989), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(987), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [813] = 4,
    ACTIONS(999), 1,
      aux_sym__file_string_token1,
    STATE(64), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(997), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(995), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [829] = 6,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1003), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1005), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1007), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(67), 1,
      aux_sym__hosts_string_repeat2,
    STATE(159), 2,
      sym__hosts_token,
      sym_variable,
  [849] = 6,
    ACTIONS(1009), 1,
      anon_sym_DQUOTE,
    ACTIONS(1011), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1014), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1017), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(67), 1,
      aux_sym__hosts_string_repeat2,
    STATE(159), 2,
      sym__hosts_token,
      sym_variable,
  [869] = 6,
    ACTIONS(893), 1,
      anon_sym_BANG,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(544), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [889] = 6,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
    ACTIONS(1022), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1025), 1,
      aux_sym__file_token_token1,
    ACTIONS(1028), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat2,
    STATE(182), 2,
      sym__file_token,
      sym_variable,
  [909] = 6,
    ACTIONS(1031), 1,
      anon_sym_DQUOTE,
    ACTIONS(1033), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1035), 1,
      aux_sym__file_token_token1,
    ACTIONS(1037), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat2,
    STATE(182), 2,
      sym__file_token,
      sym_variable,
  [929] = 6,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    ACTIONS(1039), 1,
      anon_sym_BANG,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(286), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [949] = 5,
    ACTIONS(1041), 1,
      aux_sym__permit_remote_open_value_token2,
    ACTIONS(1043), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(70), 1,
      aux_sym__file_string_repeat2,
    ACTIONS(1033), 2,
      aux_sym__log_verbose_quoted_token1,
      aux_sym__file_token_token1,
    STATE(182), 2,
      sym__file_token,
      sym_variable,
  [967] = 6,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(909), 1,
      aux_sym__file_string_token1,
    STATE(105), 1,
      aux_sym_pattern_repeat1,
    STATE(302), 1,
      sym_pattern,
    STATE(559), 1,
      sym__cnames_map,
    ACTIONS(907), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [987] = 5,
    ACTIONS(1045), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1048), 1,
      aux_sym__file_string_token1,
    STATE(74), 1,
      aux_sym__proxy_string_content,
    STATE(206), 1,
      sym__proxy_token,
    ACTIONS(1051), 2,
      sym__space,
      sym__eol,
  [1004] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(1055), 1,
      aux_sym__file_string_token1,
    STATE(65), 1,
      aux_sym_pattern_repeat1,
    STATE(171), 1,
      sym_pattern,
    ACTIONS(1053), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1021] = 3,
    STATE(100), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1059), 2,
      sym__space,
      sym__eol,
    ACTIONS(1057), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1034] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(354), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1051] = 4,
    ACTIONS(1064), 1,
      aux_sym__file_string_token1,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(987), 2,
      sym__space,
      sym__eol,
    ACTIONS(1061), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1066] = 6,
    ACTIONS(1067), 1,
      anon_sym_DQUOTE,
    ACTIONS(1069), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(1071), 1,
      aux_sym__file_string_token1,
    STATE(84), 1,
      aux_sym__hostname_string_repeat1,
    STATE(156), 1,
      sym__hostname_token,
    STATE(486), 1,
      sym__hostname_string,
  [1085] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(909), 1,
      aux_sym__file_string_token1,
    STATE(105), 1,
      aux_sym_pattern_repeat1,
    STATE(187), 1,
      sym_pattern,
    ACTIONS(907), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1102] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(1055), 1,
      aux_sym__file_string_token1,
    STATE(65), 1,
      aux_sym_pattern_repeat1,
    STATE(186), 1,
      sym_pattern,
    ACTIONS(1053), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1119] = 5,
    ACTIONS(1075), 1,
      anon_sym_STAR,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      aux_sym__permit_remote_open_value_token1,
    STATE(614), 1,
      sym__permit_remote_open_value,
    ACTIONS(1073), 2,
      anon_sym_none,
      anon_sym_any,
  [1136] = 6,
    ACTIONS(981), 1,
      anon_sym_DQUOTE,
    ACTIONS(983), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(985), 1,
      aux_sym__file_string_token1,
    STATE(86), 1,
      aux_sym__proxy_string_content,
    STATE(206), 1,
      sym__proxy_token,
    STATE(620), 1,
      sym__proxy_string,
  [1155] = 5,
    ACTIONS(1069), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(1071), 1,
      aux_sym__file_string_token1,
    STATE(103), 1,
      aux_sym__hostname_string_repeat1,
    STATE(156), 1,
      sym__hostname_token,
    ACTIONS(1081), 2,
      sym__space,
      sym__eol,
  [1172] = 3,
    STATE(100), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1083), 2,
      sym__space,
      sym__eol,
    ACTIONS(1057), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1185] = 5,
    ACTIONS(983), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(985), 1,
      aux_sym__file_string_token1,
    STATE(74), 1,
      aux_sym__proxy_string_content,
    STATE(206), 1,
      sym__proxy_token,
    ACTIONS(1085), 2,
      sym__space,
      sym__eol,
  [1202] = 3,
    ACTIONS(1089), 1,
      anon_sym_auto,
    STATE(513), 1,
      sym__boolean,
    ACTIONS(1087), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1215] = 4,
    ACTIONS(1093), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(192), 1,
      sym__log_verbose_value,
    ACTIONS(1091), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1230] = 5,
    ACTIONS(1075), 1,
      anon_sym_STAR,
    ACTIONS(1077), 1,
      anon_sym_DQUOTE,
    ACTIONS(1079), 1,
      aux_sym__permit_remote_open_value_token1,
    STATE(384), 1,
      sym__permit_remote_open_value,
    ACTIONS(1095), 2,
      anon_sym_none,
      anon_sym_any,
  [1247] = 2,
    STATE(449), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1097), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [1258] = 2,
    ACTIONS(1101), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1099), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1269] = 5,
    ACTIONS(1033), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1035), 1,
      aux_sym__file_token_token1,
    ACTIONS(1037), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(70), 1,
      aux_sym__file_string_repeat2,
    STATE(182), 2,
      sym__file_token,
      sym_variable,
  [1286] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(641), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1303] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(295), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1320] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(532), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1337] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(533), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1354] = 4,
    ACTIONS(1103), 1,
      anon_sym_DASH,
    STATE(76), 1,
      aux_sym__send_env_value_repeat1,
    STATE(629), 1,
      sym__send_env_value,
    ACTIONS(1057), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1369] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(585), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1386] = 4,
    ACTIONS(1103), 1,
      anon_sym_DASH,
    STATE(76), 1,
      aux_sym__send_env_value_repeat1,
    STATE(412), 1,
      sym__send_env_value,
    ACTIONS(1057), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1401] = 3,
    STATE(100), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1108), 2,
      sym__space,
      sym__eol,
    ACTIONS(1105), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1414] = 4,
    ACTIONS(1112), 1,
      aux_sym__file_string_token1,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(995), 2,
      sym__space,
      sym__eol,
    ACTIONS(1110), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1429] = 5,
    ACTIONS(1003), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1005), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1007), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(66), 1,
      aux_sym__hosts_string_repeat2,
    STATE(159), 2,
      sym__hosts_token,
      sym_variable,
  [1446] = 5,
    ACTIONS(1114), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(1117), 1,
      aux_sym__file_string_token1,
    STATE(103), 1,
      aux_sym__hostname_string_repeat1,
    STATE(156), 1,
      sym__hostname_token,
    ACTIONS(1120), 2,
      sym__space,
      sym__eol,
  [1463] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(419), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1480] = 4,
    ACTIONS(1124), 1,
      aux_sym__file_string_token1,
    STATE(110), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(995), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1122), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1495] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(1055), 1,
      aux_sym__file_string_token1,
    STATE(65), 1,
      aux_sym_pattern_repeat1,
    STATE(187), 1,
      sym_pattern,
    ACTIONS(1053), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1512] = 5,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 1,
      aux_sym__file_string_token1,
    STATE(101), 1,
      aux_sym_pattern_repeat1,
    STATE(557), 1,
      sym_pattern,
    ACTIONS(895), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1529] = 2,
    STATE(436), 1,
      sym__boolean,
    ACTIONS(1126), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [1540] = 2,
    ACTIONS(955), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(953), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1551] = 4,
    ACTIONS(1131), 1,
      aux_sym__file_string_token1,
    STATE(110), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(987), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1128), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1566] = 2,
    ACTIONS(955), 1,
      aux_sym__file_string_token1,
    ACTIONS(953), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1576] = 4,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    ACTIONS(1139), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(112), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1136), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1590] = 2,
    ACTIONS(955), 1,
      aux_sym__file_string_token1,
    ACTIONS(953), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1600] = 3,
    ACTIONS(1144), 1,
      sym__var_name,
    STATE(418), 1,
      sym__set_env_value,
    ACTIONS(1142), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [1612] = 2,
    STATE(439), 1,
      sym__boolean,
    ACTIONS(1146), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [1622] = 4,
    ACTIONS(1148), 1,
      sym_token,
    ACTIONS(1150), 1,
      aux_sym__file_string_token1,
    STATE(138), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(1152), 2,
      sym__space,
      sym__eol,
  [1636] = 2,
    ACTIONS(1156), 1,
      aux_sym__file_string_token1,
    ACTIONS(1154), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1646] = 5,
    ACTIONS(1158), 1,
      anon_sym_DQUOTE,
    ACTIONS(1160), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1162), 1,
      aux_sym__hostname_token_token1,
    STATE(125), 1,
      aux_sym__hostname_string_repeat2,
    STATE(370), 1,
      sym__hostname_token,
  [1662] = 4,
    ACTIONS(1134), 1,
      anon_sym_DQUOTE,
    ACTIONS(1167), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(119), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1164), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1676] = 4,
    ACTIONS(1172), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(139), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(331), 1,
      sym__log_verbose_quoted,
    ACTIONS(1170), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1690] = 3,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    STATE(134), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1176), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1702] = 1,
    ACTIONS(1178), 5,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [1710] = 4,
    ACTIONS(1180), 1,
      anon_sym_COLON,
    ACTIONS(1184), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(112), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1182), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1724] = 2,
    ACTIONS(1188), 1,
      aux_sym__file_string_token1,
    ACTIONS(1186), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1734] = 5,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
    ACTIONS(1192), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1195), 1,
      aux_sym__hostname_token_token1,
    STATE(125), 1,
      aux_sym__hostname_string_repeat2,
    STATE(370), 1,
      sym__hostname_token,
  [1750] = 5,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(845), 1,
      anon_sym_DOLLAR,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(428), 1,
      sym__var_value,
    STATE(429), 1,
      sym_string,
  [1766] = 2,
    STATE(425), 1,
      sym__boolean,
    ACTIONS(1198), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [1776] = 3,
    ACTIONS(977), 1,
      sym__number,
    ACTIONS(1200), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(512), 2,
      sym__boolean,
      sym_time,
  [1788] = 4,
    ACTIONS(1172), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(139), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(657), 1,
      sym__log_verbose_quoted,
    ACTIONS(1170), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1802] = 1,
    ACTIONS(1202), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [1810] = 4,
    ACTIONS(1206), 1,
      anon_sym_DQUOTE,
    ACTIONS(1208), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(119), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1204), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1824] = 3,
    ACTIONS(1210), 1,
      anon_sym_COLON,
    STATE(134), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1176), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1836] = 5,
    ACTIONS(1212), 1,
      anon_sym_DQUOTE,
    ACTIONS(1214), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1216), 1,
      aux_sym__proxy_token_token1,
    STATE(135), 1,
      aux_sym__proxy_string_repeat1,
    STATE(317), 1,
      sym__proxy_token,
  [1852] = 3,
    ACTIONS(1218), 1,
      anon_sym_COLON,
    STATE(134), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1220), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1864] = 5,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    ACTIONS(1225), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1228), 1,
      aux_sym__proxy_token_token1,
    STATE(135), 1,
      aux_sym__proxy_string_repeat1,
    STATE(317), 1,
      sym__proxy_token,
  [1880] = 5,
    ACTIONS(1148), 1,
      sym_token,
    ACTIONS(1150), 1,
      aux_sym__file_string_token1,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym__token_string_repeat1,
    STATE(365), 1,
      sym__token_string,
  [1896] = 5,
    ACTIONS(1148), 1,
      sym_token,
    ACTIONS(1150), 1,
      aux_sym__file_string_token1,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym__token_string_repeat1,
    STATE(595), 1,
      sym__token_string,
  [1912] = 4,
    ACTIONS(1233), 1,
      sym_token,
    ACTIONS(1236), 1,
      aux_sym__file_string_token1,
    STATE(138), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(1239), 2,
      sym__space,
      sym__eol,
  [1926] = 4,
    ACTIONS(1184), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1241), 1,
      anon_sym_COLON,
    STATE(112), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1182), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1940] = 3,
    STATE(121), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(316), 1,
      sym__log_verbose_value,
    ACTIONS(1091), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1952] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1245), 2,
      sym__space,
      sym__eol,
  [1963] = 3,
    ACTIONS(1249), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(131), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1247), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1974] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1253), 2,
      sym__space,
      sym__eol,
  [1985] = 2,
    STATE(132), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1255), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1994] = 2,
    STATE(85), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1057), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2003] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1260), 2,
      sym__space,
      sym__eol,
  [2014] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1264), 2,
      sym__space,
      sym__eol,
  [2025] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1264), 2,
      sym__space,
      sym__eol,
  [2036] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1266), 2,
      sym__space,
      sym__eol,
  [2047] = 3,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1270), 2,
      sym__space,
      sym__eol,
  [2058] = 3,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1275), 2,
      sym__space,
      sym__eol,
  [2069] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1277), 2,
      sym__space,
      sym__eol,
  [2080] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1279), 2,
      sym__space,
      sym__eol,
  [2091] = 4,
    ACTIONS(1160), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1162), 1,
      aux_sym__hostname_token_token1,
    STATE(118), 1,
      aux_sym__hostname_string_repeat2,
    STATE(370), 1,
      sym__hostname_token,
  [2104] = 3,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1284), 2,
      sym__space,
      sym__eol,
  [2115] = 2,
    ACTIONS(1288), 1,
      aux_sym__file_string_token1,
    ACTIONS(1286), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [2124] = 3,
    ACTIONS(1292), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(123), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1290), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2135] = 3,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1296), 2,
      sym__space,
      sym__eol,
  [2146] = 2,
    ACTIONS(1300), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1298), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2155] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1302), 2,
      sym__space,
      sym__eol,
  [2166] = 4,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    ACTIONS(1306), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1309), 1,
      sym_token,
    STATE(161), 1,
      aux_sym__token_string_repeat2,
  [2179] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1302), 2,
      sym__space,
      sym__eol,
  [2190] = 3,
    ACTIONS(1312), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1315), 2,
      sym__space,
      sym__eol,
  [2201] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1319), 2,
      sym__space,
      sym__eol,
  [2212] = 3,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1323), 2,
      sym__space,
      sym__eol,
  [2223] = 3,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1325), 2,
      sym__space,
      sym__eol,
  [2234] = 3,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1325), 2,
      sym__space,
      sym__eol,
  [2245] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1329), 2,
      sym__space,
      sym__eol,
  [2256] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1331), 2,
      sym__space,
      sym__eol,
  [2267] = 3,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1336), 2,
      sym__space,
      sym__eol,
  [2278] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1338), 2,
      sym__space,
      sym__eol,
  [2289] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1340), 2,
      sym__space,
      sym__eol,
  [2300] = 3,
    ACTIONS(1344), 1,
      sym__number,
    STATE(587), 1,
      sym_number,
    ACTIONS(1342), 2,
      anon_sym_none,
      sym_ipqos,
  [2311] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1346), 2,
      sym__space,
      sym__eol,
  [2322] = 3,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1351), 2,
      sym__space,
      sym__eol,
  [2333] = 4,
    ACTIONS(1353), 1,
      anon_sym_DQUOTE,
    ACTIONS(1355), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1357), 1,
      sym_token,
    STATE(161), 1,
      aux_sym__token_string_repeat2,
  [2346] = 3,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1359), 2,
      sym__space,
      sym__eol,
  [2357] = 3,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1361), 2,
      sym__space,
      sym__eol,
  [2368] = 2,
    STATE(442), 1,
      sym__boolean,
    ACTIONS(1363), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [2377] = 2,
    STATE(440), 1,
      sym__boolean,
    ACTIONS(1365), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [2386] = 3,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1370), 2,
      sym__space,
      sym__eol,
  [2397] = 2,
    ACTIONS(1374), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1372), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2406] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1376), 2,
      sym__space,
      sym__eol,
  [2417] = 2,
    ACTIONS(1380), 1,
      aux_sym__file_string_token1,
    ACTIONS(1378), 3,
      sym_token,
      sym__space,
      sym__eol,
  [2426] = 2,
    ACTIONS(955), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(953), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2435] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1382), 2,
      sym__space,
      sym__eol,
  [2446] = 1,
    ACTIONS(1384), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2453] = 2,
    ACTIONS(955), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(953), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2462] = 1,
    ACTIONS(1386), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2469] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1384), 2,
      sym__space,
      sym__eol,
  [2480] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2491] = 3,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1393), 2,
      sym__space,
      sym__eol,
  [2502] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2513] = 3,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1395), 2,
      sym__space,
      sym__eol,
  [2524] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1397), 2,
      sym__space,
      sym__eol,
  [2535] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1397), 2,
      sym__space,
      sym__eol,
  [2546] = 3,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1399), 2,
      sym__space,
      sym__eol,
  [2557] = 3,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1399), 2,
      sym__space,
      sym__eol,
  [2568] = 2,
    ACTIONS(1403), 1,
      sym_key_sig,
    ACTIONS(1401), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2577] = 3,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1405), 2,
      sym__space,
      sym__eol,
  [2588] = 2,
    ACTIONS(1409), 1,
      sym_mac,
    ACTIONS(1407), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2597] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1411), 2,
      sym__space,
      sym__eol,
  [2608] = 2,
    ACTIONS(1415), 1,
      sym_cipher,
    ACTIONS(1413), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2617] = 4,
    ACTIONS(1417), 1,
      aux_sym_time_token2,
    ACTIONS(1419), 1,
      aux_sym_time_token3,
    ACTIONS(1421), 1,
      aux_sym_time_token4,
    ACTIONS(1423), 1,
      aux_sym_time_token5,
  [2630] = 4,
    ACTIONS(1214), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1216), 1,
      aux_sym__proxy_token_token1,
    STATE(133), 1,
      aux_sym__proxy_string_repeat1,
    STATE(317), 1,
      sym__proxy_token,
  [2643] = 2,
    ACTIONS(1427), 1,
      aux_sym__file_string_token1,
    ACTIONS(1425), 3,
      aux_sym__proxy_token_token1,
      sym__space,
      sym__eol,
  [2652] = 2,
    ACTIONS(1431), 1,
      sym_key_sig,
    ACTIONS(1429), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2661] = 2,
    ACTIONS(1435), 1,
      sym_key_sig,
    ACTIONS(1433), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2670] = 3,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1411), 2,
      sym__space,
      sym__eol,
  [2681] = 3,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1437), 2,
      sym__space,
      sym__eol,
  [2692] = 3,
    ACTIONS(1344), 1,
      sym__number,
    STATE(480), 1,
      sym_number,
    ACTIONS(1439), 2,
      anon_sym_none,
      sym_ipqos,
  [2703] = 2,
    ACTIONS(1443), 1,
      sym_kex,
    ACTIONS(1441), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2712] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(460), 1,
      sym_string,
  [2722] = 1,
    ACTIONS(1275), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [2728] = 3,
    ACTIONS(1445), 1,
      aux_sym__sep_token1,
    ACTIONS(1447), 1,
      sym__space,
    STATE(50), 1,
      sym__sep,
  [2738] = 2,
    STATE(501), 1,
      sym__boolean,
    ACTIONS(1449), 2,
      anon_sym_yes,
      anon_sym_no,
  [2746] = 3,
    ACTIONS(1451), 1,
      aux_sym__sep_token1,
    ACTIONS(1453), 1,
      sym__space,
    STATE(33), 1,
      sym__sep,
  [2756] = 2,
    STATE(496), 1,
      sym__boolean,
    ACTIONS(1455), 2,
      anon_sym_yes,
      anon_sym_no,
  [2764] = 3,
    ACTIONS(1457), 1,
      aux_sym__sep_token1,
    ACTIONS(1459), 1,
      sym__space,
    STATE(229), 1,
      sym__sep,
  [2774] = 2,
    STATE(494), 1,
      sym__boolean,
    ACTIONS(1461), 2,
      anon_sym_yes,
      anon_sym_no,
  [2782] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      sym_string,
  [2792] = 2,
    STATE(492), 1,
      sym__boolean,
    ACTIONS(1463), 2,
      anon_sym_yes,
      anon_sym_no,
  [2800] = 2,
    STATE(491), 1,
      sym__boolean,
    ACTIONS(1465), 2,
      anon_sym_yes,
      anon_sym_no,
  [2808] = 2,
    STATE(519), 1,
      sym__boolean,
    ACTIONS(1467), 2,
      anon_sym_yes,
      anon_sym_no,
  [2816] = 2,
    STATE(489), 1,
      sym__boolean,
    ACTIONS(1469), 2,
      anon_sym_yes,
      anon_sym_no,
  [2824] = 2,
    STATE(516), 1,
      sym__boolean,
    ACTIONS(1471), 2,
      anon_sym_yes,
      anon_sym_no,
  [2832] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(487), 1,
      sym_string,
  [2842] = 3,
    ACTIONS(1419), 1,
      aux_sym_time_token3,
    ACTIONS(1421), 1,
      aux_sym_time_token4,
    ACTIONS(1423), 1,
      aux_sym_time_token5,
  [2852] = 2,
    STATE(485), 1,
      sym__boolean,
    ACTIONS(1473), 2,
      anon_sym_yes,
      anon_sym_no,
  [2860] = 3,
    ACTIONS(1475), 1,
      aux_sym__sep_token1,
    ACTIONS(1477), 1,
      sym__space,
    STATE(79), 1,
      sym__sep,
  [2870] = 3,
    ACTIONS(1479), 1,
      aux_sym__sep_token1,
    ACTIONS(1481), 1,
      sym__space,
    STATE(227), 1,
      sym__sep,
  [2880] = 3,
    ACTIONS(1483), 1,
      aux_sym__sep_token1,
    ACTIONS(1485), 1,
      sym__space,
    STATE(77), 1,
      sym__sep,
  [2890] = 2,
    STATE(509), 1,
      sym__boolean,
    ACTIONS(1487), 2,
      anon_sym_yes,
      anon_sym_no,
  [2898] = 2,
    STATE(479), 1,
      sym__boolean,
    ACTIONS(1489), 2,
      anon_sym_yes,
      anon_sym_no,
  [2906] = 2,
    STATE(508), 1,
      sym__boolean,
    ACTIONS(1491), 2,
      anon_sym_yes,
      anon_sym_no,
  [2914] = 3,
    ACTIONS(1493), 1,
      aux_sym__sep_token1,
    ACTIONS(1495), 1,
      sym__space,
    STATE(208), 1,
      sym__sep,
  [2924] = 3,
    ACTIONS(1497), 1,
      sym__space,
    ACTIONS(1500), 1,
      sym__eol,
    STATE(237), 1,
      aux_sym_host_declaration_repeat1,
  [2934] = 3,
    ACTIONS(1502), 1,
      aux_sym__sep_token1,
    ACTIONS(1504), 1,
      sym__space,
    STATE(225), 1,
      sym__sep,
  [2944] = 3,
    ACTIONS(1506), 1,
      aux_sym__sep_token1,
    ACTIONS(1508), 1,
      sym__space,
    STATE(207), 1,
      sym__sep,
  [2954] = 1,
    ACTIONS(1510), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2960] = 2,
    STATE(523), 1,
      sym__boolean,
    ACTIONS(1512), 2,
      anon_sym_yes,
      anon_sym_no,
  [2968] = 2,
    STATE(471), 1,
      sym__boolean,
    ACTIONS(1514), 2,
      anon_sym_yes,
      anon_sym_no,
  [2976] = 3,
    ACTIONS(1516), 1,
      aux_sym__sep_token1,
    ACTIONS(1518), 1,
      sym__space,
    STATE(223), 1,
      sym__sep,
  [2986] = 2,
    STATE(468), 1,
      sym__boolean,
    ACTIONS(1520), 2,
      anon_sym_yes,
      anon_sym_no,
  [2994] = 2,
    STATE(467), 1,
      sym__boolean,
    ACTIONS(1522), 2,
      anon_sym_yes,
      anon_sym_no,
  [3002] = 3,
    ACTIONS(1524), 1,
      aux_sym__sep_token1,
    ACTIONS(1526), 1,
      sym__space,
    STATE(211), 1,
      sym__sep,
  [3012] = 3,
    ACTIONS(1528), 1,
      aux_sym__sep_token1,
    ACTIONS(1530), 1,
      sym__space,
    STATE(63), 1,
      sym__sep,
  [3022] = 3,
    ACTIONS(1532), 1,
      aux_sym__sep_token1,
    ACTIONS(1534), 1,
      sym__space,
    STATE(222), 1,
      sym__sep,
  [3032] = 3,
    ACTIONS(1536), 1,
      aux_sym__sep_token1,
    ACTIONS(1538), 1,
      sym__space,
    STATE(221), 1,
      sym__sep,
  [3042] = 3,
    ACTIONS(1540), 1,
      aux_sym__sep_token1,
    ACTIONS(1542), 1,
      sym__space,
    STATE(220), 1,
      sym__sep,
  [3052] = 3,
    ACTIONS(1544), 1,
      anon_sym_none,
    ACTIONS(1546), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(1548), 1,
      aux_sym__proxy_jump_arg_token1,
  [3062] = 2,
    STATE(453), 1,
      sym__boolean,
    ACTIONS(1550), 2,
      anon_sym_yes,
      anon_sym_no,
  [3070] = 2,
    ACTIONS(1554), 1,
      sym_sig,
    ACTIONS(1552), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3078] = 3,
    ACTIONS(1556), 1,
      aux_sym__sep_token1,
    ACTIONS(1558), 1,
      sym__space,
    STATE(234), 1,
      sym__sep,
  [3088] = 3,
    ACTIONS(1560), 1,
      anon_sym_none,
    ACTIONS(1562), 1,
      sym__number,
    STATE(424), 1,
      sym_bytes,
  [3098] = 3,
    ACTIONS(1564), 1,
      aux_sym__sep_token1,
    ACTIONS(1566), 1,
      sym__space,
    STATE(550), 1,
      sym__sep,
  [3108] = 3,
    ACTIONS(1568), 1,
      aux_sym__sep_token1,
    ACTIONS(1570), 1,
      sym__space,
    STATE(218), 1,
      sym__sep,
  [3118] = 3,
    ACTIONS(1572), 1,
      sym__space,
    ACTIONS(1575), 1,
      sym__eol,
    STATE(258), 1,
      aux_sym__canonical_domains_repeat1,
  [3128] = 2,
    STATE(529), 1,
      sym__boolean,
    ACTIONS(1577), 2,
      anon_sym_yes,
      anon_sym_no,
  [3136] = 3,
    ACTIONS(1579), 1,
      aux_sym__sep_token1,
    ACTIONS(1581), 1,
      sym__space,
    STATE(49), 1,
      sym__sep,
  [3146] = 2,
    STATE(530), 1,
      sym__boolean,
    ACTIONS(1583), 2,
      anon_sym_yes,
      anon_sym_no,
  [3154] = 2,
    STATE(534), 1,
      sym__boolean,
    ACTIONS(1585), 2,
      anon_sym_yes,
      anon_sym_no,
  [3162] = 3,
    ACTIONS(1587), 1,
      sym__space,
    ACTIONS(1590), 1,
      sym__eol,
    STATE(263), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3172] = 3,
    ACTIONS(1592), 1,
      aux_sym__sep_token1,
    ACTIONS(1594), 1,
      sym__space,
    STATE(212), 1,
      sym__sep,
  [3182] = 3,
    ACTIONS(1596), 1,
      aux_sym__sep_token1,
    ACTIONS(1598), 1,
      sym__space,
    STATE(51), 1,
      sym__sep,
  [3192] = 2,
    STATE(433), 1,
      sym__boolean,
    ACTIONS(1600), 2,
      anon_sym_yes,
      anon_sym_no,
  [3200] = 3,
    ACTIONS(1602), 1,
      sym__space,
    ACTIONS(1604), 1,
      sym__eol,
    STATE(237), 1,
      aux_sym_host_declaration_repeat1,
  [3210] = 2,
    STATE(435), 1,
      sym__boolean,
    ACTIONS(1606), 2,
      anon_sym_yes,
      anon_sym_no,
  [3218] = 3,
    ACTIONS(1608), 1,
      aux_sym__sep_token1,
    ACTIONS(1610), 1,
      sym__space,
    STATE(136), 1,
      sym__sep,
  [3228] = 2,
    STATE(437), 1,
      sym__boolean,
    ACTIONS(1612), 2,
      anon_sym_yes,
      anon_sym_no,
  [3236] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(438), 1,
      sym_string,
  [3246] = 3,
    ACTIONS(1384), 1,
      anon_sym_COLON,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym__cnames_map_repeat1,
  [3256] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1617), 1,
      anon_sym_any,
    STATE(405), 1,
      sym_number,
  [3266] = 1,
    ACTIONS(1370), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3272] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(441), 1,
      sym_string,
  [3282] = 3,
    ACTIONS(1619), 1,
      aux_sym__sep_token1,
    ACTIONS(1621), 1,
      sym__space,
    STATE(216), 1,
      sym__sep,
  [3292] = 3,
    ACTIONS(1623), 1,
      aux_sym__sep_token1,
    ACTIONS(1625), 1,
      sym__space,
    STATE(31), 1,
      sym__sep,
  [3302] = 2,
    STATE(443), 1,
      sym__boolean,
    ACTIONS(1627), 2,
      anon_sym_yes,
      anon_sym_no,
  [3310] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym_string,
  [3320] = 3,
    ACTIONS(1629), 1,
      aux_sym__sep_token1,
    ACTIONS(1631), 1,
      sym__space,
    STATE(551), 1,
      sym__sep,
  [3330] = 3,
    ACTIONS(1633), 1,
      aux_sym__sep_token1,
    ACTIONS(1635), 1,
      sym__space,
    STATE(318), 1,
      sym__sep,
  [3340] = 3,
    ACTIONS(1637), 1,
      aux_sym__sep_token1,
    ACTIONS(1639), 1,
      sym__space,
    STATE(553), 1,
      sym__sep,
  [3350] = 3,
    ACTIONS(1641), 1,
      aux_sym__sep_token1,
    ACTIONS(1643), 1,
      sym__space,
    STATE(235), 1,
      sym__sep,
  [3360] = 3,
    ACTIONS(1645), 1,
      aux_sym__sep_token1,
    ACTIONS(1647), 1,
      sym__space,
    STATE(684), 1,
      sym__sep,
  [3370] = 3,
    ACTIONS(1649), 1,
      aux_sym__sep_token1,
    ACTIONS(1651), 1,
      sym__space,
    STATE(88), 1,
      sym__sep,
  [3380] = 3,
    ACTIONS(1653), 1,
      sym__space,
    ACTIONS(1655), 1,
      sym__eol,
    STATE(400), 1,
      aux_sym_host_declaration_repeat1,
  [3390] = 1,
    ACTIONS(1351), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3396] = 3,
    ACTIONS(1657), 1,
      aux_sym__sep_token1,
    ACTIONS(1659), 1,
      sym__space,
    STATE(233), 1,
      sym__sep,
  [3406] = 3,
    ACTIONS(1661), 1,
      sym__space,
    ACTIONS(1663), 1,
      sym__eol,
    STATE(336), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [3416] = 3,
    ACTIONS(1665), 1,
      aux_sym__sep_token1,
    ACTIONS(1667), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [3426] = 3,
    ACTIONS(1669), 1,
      aux_sym__sep_token1,
    ACTIONS(1671), 1,
      sym__space,
    STATE(128), 1,
      sym__sep,
  [3436] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1673), 1,
      anon_sym_any,
    STATE(634), 1,
      sym_number,
  [3446] = 3,
    ACTIONS(1675), 1,
      sym__space,
    ACTIONS(1677), 1,
      sym__eol,
    STATE(333), 1,
      aux_sym__set_env_repeat1,
  [3456] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(631), 1,
      sym_string,
  [3466] = 3,
    ACTIONS(1679), 1,
      sym__space,
    ACTIONS(1681), 1,
      sym__eol,
    STATE(404), 1,
      aux_sym__canonical_domains_repeat1,
  [3476] = 3,
    ACTIONS(1683), 1,
      aux_sym__sep_token1,
    ACTIONS(1685), 1,
      sym__space,
    STATE(251), 1,
      sym__sep,
  [3486] = 3,
    ACTIONS(1687), 1,
      sym__space,
    ACTIONS(1689), 1,
      sym__eol,
    STATE(330), 1,
      aux_sym__send_env_repeat1,
  [3496] = 3,
    ACTIONS(1691), 1,
      sym__space,
    ACTIONS(1694), 1,
      sym__eol,
    STATE(298), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3506] = 1,
    ACTIONS(1336), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3512] = 3,
    ACTIONS(1696), 1,
      aux_sym__sep_token1,
    ACTIONS(1698), 1,
      sym__space,
    STATE(87), 1,
      sym__sep,
  [3522] = 3,
    ACTIONS(1700), 1,
      sym__space,
    ACTIONS(1702), 1,
      sym__eol,
    STATE(399), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3532] = 3,
    ACTIONS(1704), 1,
      anon_sym_COMMA,
    ACTIONS(1706), 1,
      anon_sym_COLON,
    STATE(394), 1,
      aux_sym__cnames_map_repeat1,
  [3542] = 3,
    ACTIONS(1708), 1,
      aux_sym__sep_token1,
    ACTIONS(1710), 1,
      sym__space,
    STATE(71), 1,
      sym__sep,
  [3552] = 3,
    ACTIONS(1712), 1,
      sym__space,
    ACTIONS(1715), 1,
      sym__eol,
    STATE(304), 1,
      aux_sym__ignore_unknown_repeat1,
  [3562] = 3,
    ACTIONS(1717), 1,
      aux_sym__sep_token1,
    ACTIONS(1719), 1,
      sym__space,
    STATE(554), 1,
      sym__sep,
  [3572] = 3,
    ACTIONS(1721), 1,
      aux_sym__sep_token1,
    ACTIONS(1723), 1,
      sym__space,
    STATE(558), 1,
      sym__sep,
  [3582] = 3,
    ACTIONS(1725), 1,
      sym__space,
    ACTIONS(1727), 1,
      sym__eol,
    STATE(329), 1,
      aux_sym__remote_command_repeat1,
  [3592] = 3,
    ACTIONS(1729), 1,
      aux_sym__sep_token1,
    ACTIONS(1731), 1,
      sym__space,
    STATE(226), 1,
      sym__sep,
  [3602] = 3,
    ACTIONS(1733), 1,
      aux_sym__sep_token1,
    ACTIONS(1735), 1,
      sym__space,
    STATE(224), 1,
      sym__sep,
  [3612] = 1,
    ACTIONS(1315), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3618] = 3,
    ACTIONS(1737), 1,
      aux_sym__sep_token1,
    ACTIONS(1739), 1,
      sym__space,
    STATE(242), 1,
      sym__sep,
  [3628] = 3,
    ACTIONS(1741), 1,
      sym__space,
    ACTIONS(1744), 1,
      sym__eol,
    STATE(312), 1,
      aux_sym__local_command_repeat1,
  [3638] = 3,
    ACTIONS(1746), 1,
      sym__space,
    ACTIONS(1748), 1,
      sym__eol,
    STATE(326), 1,
      aux_sym__proxy_command_arg_repeat1,
  [3648] = 3,
    ACTIONS(1750), 1,
      anon_sym_COMMA,
    ACTIONS(1752), 1,
      anon_sym_DQUOTE,
    STATE(351), 1,
      aux_sym__log_verbose_repeat2,
  [3658] = 3,
    ACTIONS(1754), 1,
      aux_sym__sep_token1,
    ACTIONS(1756), 1,
      sym__space,
    STATE(203), 1,
      sym__sep,
  [3668] = 1,
    ACTIONS(1758), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3674] = 2,
    ACTIONS(1762), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1760), 2,
      anon_sym_DQUOTE,
      aux_sym__proxy_token_token1,
  [3682] = 2,
    STATE(504), 1,
      sym__boolean,
    ACTIONS(1764), 2,
      anon_sym_yes,
      anon_sym_no,
  [3690] = 3,
    ACTIONS(1766), 1,
      sym__space,
    ACTIONS(1768), 1,
      sym__eol,
    STATE(324), 1,
      aux_sym__permit_remote_open_repeat1,
  [3700] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1770), 1,
      anon_sym_STAR,
    STATE(662), 1,
      sym_number,
  [3710] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1772), 1,
      anon_sym_STAR,
    STATE(613), 1,
      sym_number,
  [3720] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1774), 1,
      anon_sym_STAR,
    STATE(610), 1,
      sym_number,
  [3730] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1776), 1,
      anon_sym_STAR,
    STATE(663), 1,
      sym_number,
  [3740] = 3,
    ACTIONS(1778), 1,
      sym__space,
    ACTIONS(1781), 1,
      sym__eol,
    STATE(324), 1,
      aux_sym__permit_remote_open_repeat1,
  [3750] = 1,
    ACTIONS(1260), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3756] = 3,
    ACTIONS(1783), 1,
      sym__space,
    ACTIONS(1786), 1,
      sym__eol,
    STATE(326), 1,
      aux_sym__proxy_command_arg_repeat1,
  [3766] = 1,
    ACTIONS(1788), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3772] = 2,
    ACTIONS(1790), 1,
      anon_sym_COLON,
    ACTIONS(1792), 2,
      sym__space,
      sym__eol,
  [3780] = 3,
    ACTIONS(1794), 1,
      sym__space,
    ACTIONS(1797), 1,
      sym__eol,
    STATE(329), 1,
      aux_sym__remote_command_repeat1,
  [3790] = 3,
    ACTIONS(1799), 1,
      sym__space,
    ACTIONS(1802), 1,
      sym__eol,
    STATE(330), 1,
      aux_sym__send_env_repeat1,
  [3800] = 3,
    ACTIONS(1750), 1,
      anon_sym_COMMA,
    ACTIONS(1804), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym__log_verbose_repeat2,
  [3810] = 3,
    ACTIONS(1806), 1,
      aux_sym__sep_token1,
    ACTIONS(1808), 1,
      sym__space,
    STATE(241), 1,
      sym__sep,
  [3820] = 3,
    ACTIONS(1810), 1,
      sym__space,
    ACTIONS(1813), 1,
      sym__eol,
    STATE(333), 1,
      aux_sym__set_env_repeat1,
  [3830] = 3,
    ACTIONS(1815), 1,
      sym__space,
    ACTIONS(1817), 1,
      sym__eol,
    STATE(379), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3840] = 3,
    ACTIONS(1819), 1,
      sym__space,
    ACTIONS(1821), 1,
      sym__eol,
    STATE(312), 1,
      aux_sym__local_command_repeat1,
  [3850] = 3,
    ACTIONS(1823), 1,
      sym__space,
    ACTIONS(1826), 1,
      sym__eol,
    STATE(336), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [3860] = 3,
    ACTIONS(1828), 1,
      aux_sym__sep_token1,
    ACTIONS(1830), 1,
      sym__space,
    STATE(548), 1,
      sym__sep,
  [3870] = 3,
    ACTIONS(1832), 1,
      aux_sym__sep_token1,
    ACTIONS(1834), 1,
      sym__space,
    STATE(244), 1,
      sym__sep,
  [3880] = 2,
    ACTIONS(1838), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1836), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3888] = 3,
    ACTIONS(1840), 1,
      aux_sym__sep_token1,
    ACTIONS(1842), 1,
      sym__space,
    STATE(37), 1,
      sym__sep,
  [3898] = 3,
    ACTIONS(1844), 1,
      aux_sym__sep_token1,
    ACTIONS(1846), 1,
      sym__space,
    STATE(245), 1,
      sym__sep,
  [3908] = 3,
    ACTIONS(1848), 1,
      aux_sym__sep_token1,
    ACTIONS(1850), 1,
      sym__space,
    STATE(253), 1,
      sym__sep,
  [3918] = 3,
    ACTIONS(1852), 1,
      aux_sym__sep_token1,
    ACTIONS(1854), 1,
      sym__space,
    STATE(89), 1,
      sym__sep,
  [3928] = 3,
    ACTIONS(1856), 1,
      aux_sym__sep_token1,
    ACTIONS(1858), 1,
      sym__space,
    STATE(213), 1,
      sym__sep,
  [3938] = 3,
    ACTIONS(1860), 1,
      aux_sym__sep_token1,
    ACTIONS(1862), 1,
      sym__space,
    STATE(547), 1,
      sym__sep,
  [3948] = 3,
    ACTIONS(1864), 1,
      aux_sym__sep_token1,
    ACTIONS(1866), 1,
      sym__space,
    STATE(666), 1,
      sym__sep,
  [3958] = 3,
    ACTIONS(1868), 1,
      aux_sym__sep_token1,
    ACTIONS(1870), 1,
      sym__space,
    STATE(201), 1,
      sym__sep,
  [3968] = 2,
    ACTIONS(1872), 1,
      sym__number,
    ACTIONS(1874), 2,
      sym__space,
      sym__eol,
  [3976] = 2,
    ACTIONS(1876), 1,
      sym__number,
    ACTIONS(1874), 2,
      sym__space,
      sym__eol,
  [3984] = 2,
    ACTIONS(1878), 1,
      sym__number,
    ACTIONS(1874), 2,
      sym__space,
      sym__eol,
  [3992] = 3,
    ACTIONS(1880), 1,
      anon_sym_COMMA,
    ACTIONS(1883), 1,
      anon_sym_DQUOTE,
    STATE(351), 1,
      aux_sym__log_verbose_repeat2,
  [4002] = 3,
    ACTIONS(1885), 1,
      aux_sym__sep_token1,
    ACTIONS(1887), 1,
      sym__space,
    STATE(46), 1,
      sym__sep,
  [4012] = 3,
    ACTIONS(1889), 1,
      sym__space,
    ACTIONS(1891), 1,
      sym__eol,
    STATE(304), 1,
      aux_sym__ignore_unknown_repeat1,
  [4022] = 3,
    ACTIONS(1889), 1,
      sym__space,
    ACTIONS(1893), 1,
      sym__eol,
    STATE(353), 1,
      aux_sym__ignore_unknown_repeat1,
  [4032] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1895), 1,
      anon_sym_STAR,
    STATE(360), 1,
      sym_number,
  [4042] = 3,
    ACTIONS(1897), 1,
      aux_sym__sep_token1,
    ACTIONS(1899), 1,
      sym__space,
    STATE(560), 1,
      sym__sep,
  [4052] = 3,
    ACTIONS(1901), 1,
      aux_sym__sep_token1,
    ACTIONS(1903), 1,
      sym__space,
    STATE(259), 1,
      sym__sep,
  [4062] = 3,
    ACTIONS(1905), 1,
      aux_sym_time_token3,
    ACTIONS(1907), 1,
      aux_sym_time_token4,
    ACTIONS(1909), 1,
      aux_sym_time_token5,
  [4072] = 3,
    ACTIONS(1344), 1,
      sym__number,
    ACTIONS(1911), 1,
      anon_sym_STAR,
    STATE(476), 1,
      sym_number,
  [4082] = 1,
    ACTIONS(1913), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4088] = 2,
    ACTIONS(1915), 1,
      sym__number,
    ACTIONS(1917), 2,
      sym__space,
      sym__eol,
  [4096] = 3,
    ACTIONS(1919), 1,
      aux_sym__sep_token1,
    ACTIONS(1921), 1,
      sym__space,
    STATE(261), 1,
      sym__sep,
  [4106] = 3,
    ACTIONS(1355), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1357), 1,
      sym_token,
    STATE(176), 1,
      aux_sym__token_string_repeat2,
  [4116] = 2,
    ACTIONS(1923), 1,
      sym__number,
    ACTIONS(1917), 2,
      sym__space,
      sym__eol,
  [4124] = 3,
    ACTIONS(1819), 1,
      sym__space,
    ACTIONS(1925), 1,
      sym__eol,
    STATE(335), 1,
      aux_sym__local_command_repeat1,
  [4134] = 2,
    ACTIONS(1927), 1,
      sym__number,
    ACTIONS(1929), 2,
      sym__space,
      sym__eol,
  [4142] = 3,
    ACTIONS(1931), 1,
      aux_sym__sep_token1,
    ACTIONS(1933), 1,
      sym__space,
    STATE(279), 1,
      sym__sep,
  [4152] = 3,
    ACTIONS(1935), 1,
      aux_sym__sep_token1,
    ACTIONS(1937), 1,
      sym__space,
    STATE(94), 1,
      sym__sep,
  [4162] = 3,
    ACTIONS(1939), 1,
      aux_sym__sep_token1,
    ACTIONS(1941), 1,
      sym__space,
    STATE(278), 1,
      sym__sep,
  [4172] = 2,
    ACTIONS(1945), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1943), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [4180] = 3,
    ACTIONS(1947), 1,
      aux_sym__sep_token1,
    ACTIONS(1949), 1,
      sym__space,
    STATE(179), 1,
      sym__sep,
  [4190] = 3,
    ACTIONS(1951), 1,
      aux_sym__sep_token1,
    ACTIONS(1953), 1,
      sym__space,
    STATE(39), 1,
      sym__sep,
  [4200] = 3,
    ACTIONS(1955), 1,
      aux_sym__sep_token1,
    ACTIONS(1957), 1,
      sym__space,
    STATE(275), 1,
      sym__sep,
  [4210] = 3,
    ACTIONS(1959), 1,
      aux_sym__sep_token1,
    ACTIONS(1961), 1,
      sym__space,
    STATE(180), 1,
      sym__sep,
  [4220] = 3,
    ACTIONS(1963), 1,
      aux_sym__sep_token1,
    ACTIONS(1965), 1,
      sym__space,
    STATE(273), 1,
      sym__sep,
  [4230] = 3,
    ACTIONS(1967), 1,
      aux_sym__sep_token1,
    ACTIONS(1969), 1,
      sym__space,
    STATE(115), 1,
      sym__sep,
  [4240] = 3,
    ACTIONS(1971), 1,
      aux_sym__sep_token1,
    ACTIONS(1973), 1,
      sym__space,
    STATE(271), 1,
      sym__sep,
  [4250] = 3,
    ACTIONS(1975), 1,
      aux_sym__sep_token1,
    ACTIONS(1977), 1,
      sym__space,
    STATE(270), 1,
      sym__sep,
  [4260] = 3,
    ACTIONS(1815), 1,
      sym__space,
    ACTIONS(1979), 1,
      sym__eol,
    STATE(298), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4270] = 3,
    ACTIONS(829), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(575), 1,
      sym_string,
  [4280] = 3,
    ACTIONS(1981), 1,
      aux_sym__sep_token1,
    ACTIONS(1983), 1,
      sym__space,
    STATE(108), 1,
      sym__sep,
  [4290] = 3,
    ACTIONS(1985), 1,
      aux_sym__sep_token1,
    ACTIONS(1987), 1,
      sym__space,
    STATE(268), 1,
      sym__sep,
  [4300] = 3,
    ACTIONS(1989), 1,
      aux_sym__sep_token1,
    ACTIONS(1991), 1,
      sym__space,
    STATE(95), 1,
      sym__sep,
  [4310] = 3,
    ACTIONS(1766), 1,
      sym__space,
    ACTIONS(1993), 1,
      sym__eol,
    STATE(319), 1,
      aux_sym__permit_remote_open_repeat1,
  [4320] = 3,
    ACTIONS(1995), 1,
      aux_sym__sep_token1,
    ACTIONS(1997), 1,
      sym__space,
    STATE(96), 1,
      sym__sep,
  [4330] = 3,
    ACTIONS(1999), 1,
      aux_sym__sep_token1,
    ACTIONS(2001), 1,
      sym__space,
    STATE(667), 1,
      sym__sep,
  [4340] = 3,
    ACTIONS(2003), 1,
      aux_sym__sep_token1,
    ACTIONS(2005), 1,
      sym__space,
    STATE(266), 1,
      sym__sep,
  [4350] = 3,
    ACTIONS(2007), 1,
      aux_sym__sep_token1,
    ACTIONS(2009), 1,
      sym__space,
    STATE(114), 1,
      sym__sep,
  [4360] = 3,
    ACTIONS(2011), 1,
      aux_sym__sep_token1,
    ACTIONS(2013), 1,
      sym__space,
    STATE(541), 1,
      sym__sep,
  [4370] = 3,
    ACTIONS(2015), 1,
      aux_sym__sep_token1,
    ACTIONS(2017), 1,
      sym__space,
    STATE(542), 1,
      sym__sep,
  [4380] = 3,
    ACTIONS(2019), 1,
      aux_sym__sep_token1,
    ACTIONS(2021), 1,
      sym__space,
    STATE(99), 1,
      sym__sep,
  [4390] = 3,
    ACTIONS(1746), 1,
      sym__space,
    ACTIONS(2023), 1,
      sym__eol,
    STATE(313), 1,
      aux_sym__proxy_command_arg_repeat1,
  [4400] = 3,
    ACTIONS(2025), 1,
      aux_sym__sep_token1,
    ACTIONS(2027), 1,
      sym__space,
    STATE(126), 1,
      sym__sep,
  [4410] = 3,
    ACTIONS(1704), 1,
      anon_sym_COMMA,
    ACTIONS(2029), 1,
      anon_sym_COLON,
    STATE(272), 1,
      aux_sym__cnames_map_repeat1,
  [4420] = 2,
    ACTIONS(2031), 1,
      anon_sym_COLON,
    ACTIONS(2033), 2,
      sym__space,
      sym__eol,
  [4428] = 3,
    ACTIONS(2035), 1,
      aux_sym__sep_token1,
    ACTIONS(2037), 1,
      sym__space,
    STATE(58), 1,
      sym__sep,
  [4438] = 3,
    ACTIONS(2039), 1,
      aux_sym__sep_token1,
    ACTIONS(2041), 1,
      sym__space,
    STATE(543), 1,
      sym__sep,
  [4448] = 3,
    ACTIONS(2043), 1,
      aux_sym__sep_token1,
    ACTIONS(2045), 1,
      sym__space,
    STATE(127), 1,
      sym__sep,
  [4458] = 3,
    ACTIONS(1700), 1,
      sym__space,
    ACTIONS(2047), 1,
      sym__eol,
    STATE(263), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4468] = 3,
    ACTIONS(2049), 1,
      sym__space,
    ACTIONS(2051), 1,
      sym__eol,
    STATE(237), 1,
      aux_sym_host_declaration_repeat1,
  [4478] = 2,
    ACTIONS(2053), 1,
      aux_sym_bytes_token1,
    ACTIONS(2055), 2,
      sym__space,
      sym__eol,
  [4486] = 3,
    ACTIONS(2057), 1,
      aux_sym__sep_token1,
    ACTIONS(2059), 1,
      sym__space,
    STATE(30), 1,
      sym__sep,
  [4496] = 3,
    ACTIONS(1725), 1,
      sym__space,
    ACTIONS(2061), 1,
      sym__eol,
    STATE(307), 1,
      aux_sym__remote_command_repeat1,
  [4506] = 3,
    ACTIONS(1679), 1,
      sym__space,
    ACTIONS(2063), 1,
      sym__eol,
    STATE(258), 1,
      aux_sym__canonical_domains_repeat1,
  [4516] = 2,
    ACTIONS(2065), 1,
      anon_sym_COLON,
    ACTIONS(2067), 2,
      sym__space,
      sym__eol,
  [4524] = 2,
    ACTIONS(2069), 1,
      sym__number,
    ACTIONS(2071), 2,
      sym__space,
      sym__eol,
  [4532] = 2,
    ACTIONS(2073), 1,
      sym__number,
    ACTIONS(2071), 2,
      sym__space,
      sym__eol,
  [4540] = 3,
    ACTIONS(1661), 1,
      sym__space,
    ACTIONS(2075), 1,
      sym__eol,
    STATE(289), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4550] = 2,
    ACTIONS(2077), 1,
      sym__number,
    ACTIONS(2071), 2,
      sym__space,
      sym__eol,
  [4558] = 3,
    ACTIONS(2079), 1,
      aux_sym__sep_token1,
    ACTIONS(2081), 1,
      sym__space,
    STATE(56), 1,
      sym__sep,
  [4568] = 3,
    ACTIONS(2083), 1,
      aux_sym__sep_token1,
    ACTIONS(2085), 1,
      sym__space,
    STATE(255), 1,
      sym__sep,
  [4578] = 3,
    ACTIONS(1687), 1,
      sym__space,
    ACTIONS(2087), 1,
      sym__eol,
    STATE(297), 1,
      aux_sym__send_env_repeat1,
  [4588] = 3,
    ACTIONS(2089), 1,
      aux_sym__sep_token1,
    ACTIONS(2091), 1,
      sym__space,
    STATE(90), 1,
      sym__sep,
  [4598] = 2,
    ACTIONS(2093), 1,
      sym__number,
    ACTIONS(2071), 2,
      sym__space,
      sym__eol,
  [4606] = 3,
    ACTIONS(2095), 1,
      aux_sym__sep_token1,
    ACTIONS(2097), 1,
      sym__space,
    STATE(262), 1,
      sym__sep,
  [4616] = 3,
    ACTIONS(2099), 1,
      aux_sym__sep_token1,
    ACTIONS(2101), 1,
      sym__space,
    STATE(561), 1,
      sym__sep,
  [4626] = 3,
    ACTIONS(2103), 1,
      aux_sym__sep_token1,
    ACTIONS(2105), 1,
      sym__space,
    STATE(199), 1,
      sym__sep,
  [4636] = 3,
    ACTIONS(1675), 1,
      sym__space,
    ACTIONS(2107), 1,
      sym__eol,
    STATE(293), 1,
      aux_sym__set_env_repeat1,
  [4646] = 3,
    ACTIONS(2109), 1,
      sym__space,
    ACTIONS(2111), 1,
      sym__eol,
    STATE(267), 1,
      aux_sym_host_declaration_repeat1,
  [4656] = 3,
    ACTIONS(2113), 1,
      aux_sym__sep_token1,
    ACTIONS(2115), 1,
      sym__space,
    STATE(252), 1,
      sym__sep,
  [4666] = 3,
    ACTIONS(2117), 1,
      aux_sym__sep_token1,
    ACTIONS(2119), 1,
      sym__space,
    STATE(62), 1,
      sym__sep,
  [4676] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4681] = 1,
    ACTIONS(2123), 2,
      sym__space,
      sym__eol,
  [4686] = 2,
    ACTIONS(2125), 1,
      sym__space,
    ACTIONS(2127), 1,
      sym__eol,
  [4693] = 1,
    ACTIONS(2129), 2,
      sym__space,
      sym__eol,
  [4698] = 1,
    ACTIONS(2131), 2,
      sym__space,
      sym__eol,
  [4703] = 1,
    ACTIONS(2133), 2,
      sym__space,
      sym__eol,
  [4708] = 1,
    ACTIONS(2135), 2,
      sym__space,
      sym__eol,
  [4713] = 1,
    ACTIONS(2137), 2,
      sym__space,
      sym__eol,
  [4718] = 1,
    ACTIONS(2139), 2,
      sym__space,
      sym__eol,
  [4723] = 1,
    ACTIONS(2141), 2,
      sym__space,
      sym__eol,
  [4728] = 1,
    ACTIONS(2143), 2,
      sym__space,
      sym__eol,
  [4733] = 1,
    ACTIONS(2145), 2,
      sym__space,
      sym__eol,
  [4738] = 1,
    ACTIONS(2147), 2,
      sym__space,
      sym__eol,
  [4743] = 1,
    ACTIONS(2149), 2,
      sym__space,
      sym__eol,
  [4748] = 1,
    ACTIONS(2151), 2,
      sym__space,
      sym__eol,
  [4753] = 1,
    ACTIONS(2153), 2,
      sym__space,
      sym__eol,
  [4758] = 1,
    ACTIONS(2155), 2,
      sym__space,
      sym__eol,
  [4763] = 1,
    ACTIONS(2157), 2,
      sym__space,
      sym__eol,
  [4768] = 1,
    ACTIONS(2159), 2,
      sym__space,
      sym__eol,
  [4773] = 1,
    ACTIONS(2161), 2,
      sym__space,
      sym__eol,
  [4778] = 1,
    ACTIONS(2163), 2,
      sym__space,
      sym__eol,
  [4783] = 1,
    ACTIONS(2165), 2,
      sym__space,
      sym__eol,
  [4788] = 1,
    ACTIONS(2167), 2,
      sym__space,
      sym__eol,
  [4793] = 2,
    ACTIONS(977), 1,
      sym__number,
    STATE(552), 1,
      sym_time,
  [4800] = 1,
    ACTIONS(2071), 2,
      sym__space,
      sym__eol,
  [4805] = 2,
    ACTIONS(769), 1,
      sym__space,
    ACTIONS(771), 1,
      sym__eol,
  [4812] = 1,
    ACTIONS(2169), 2,
      sym__space,
      sym__eol,
  [4817] = 1,
    ACTIONS(2171), 2,
      sym__space,
      sym__eol,
  [4822] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4827] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4832] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4837] = 1,
    ACTIONS(2173), 2,
      sym__space,
      sym__eol,
  [4842] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4847] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4852] = 1,
    ACTIONS(2175), 2,
      sym__space,
      sym__eol,
  [4857] = 1,
    ACTIONS(2023), 2,
      sym__space,
      sym__eol,
  [4862] = 1,
    ACTIONS(2177), 2,
      sym__space,
      sym__eol,
  [4867] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4872] = 1,
    ACTIONS(2179), 2,
      sym__space,
      sym__eol,
  [4877] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4882] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4887] = 2,
    ACTIONS(2181), 1,
      anon_sym_STAR,
    ACTIONS(2183), 1,
      aux_sym__permit_remote_open_value_token2,
  [4894] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4899] = 1,
    ACTIONS(2185), 2,
      sym__space,
      sym__eol,
  [4904] = 1,
    ACTIONS(2187), 2,
      sym__space,
      sym__eol,
  [4909] = 1,
    ACTIONS(2189), 2,
      sym__space,
      sym__eol,
  [4914] = 1,
    ACTIONS(2191), 2,
      sym__space,
      sym__eol,
  [4919] = 1,
    ACTIONS(2193), 2,
      sym__space,
      sym__eol,
  [4924] = 1,
    ACTIONS(2195), 2,
      sym__space,
      sym__eol,
  [4929] = 1,
    ACTIONS(2197), 2,
      sym__space,
      sym__eol,
  [4934] = 1,
    ACTIONS(1929), 2,
      sym__space,
      sym__eol,
  [4939] = 1,
    ACTIONS(2199), 2,
      sym__space,
      sym__eol,
  [4944] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4949] = 2,
    ACTIONS(2201), 1,
      aux_sym_time_token4,
    ACTIONS(2203), 1,
      aux_sym_time_token5,
  [4956] = 1,
    ACTIONS(2205), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [4961] = 1,
    ACTIONS(2207), 2,
      sym__space,
      sym__eol,
  [4966] = 1,
    ACTIONS(1917), 2,
      sym__space,
      sym__eol,
  [4971] = 1,
    ACTIONS(2209), 2,
      sym__space,
      sym__eol,
  [4976] = 2,
    ACTIONS(2211), 1,
      sym__space,
    ACTIONS(2213), 1,
      sym__eol,
  [4983] = 1,
    ACTIONS(2215), 2,
      sym__space,
      sym__eol,
  [4988] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4993] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [4998] = 1,
    ACTIONS(2217), 2,
      sym__space,
      sym__eol,
  [5003] = 1,
    ACTIONS(2219), 2,
      sym__space,
      sym__eol,
  [5008] = 1,
    ACTIONS(2221), 2,
      sym__space,
      sym__eol,
  [5013] = 1,
    ACTIONS(2223), 2,
      sym__space,
      sym__eol,
  [5018] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5023] = 1,
    ACTIONS(2225), 2,
      sym__space,
      sym__eol,
  [5028] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5033] = 1,
    ACTIONS(2227), 2,
      sym__space,
      sym__eol,
  [5038] = 1,
    ACTIONS(2229), 2,
      sym__space,
      sym__eol,
  [5043] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(661), 1,
      sym_number,
  [5050] = 1,
    ACTIONS(2231), 2,
      sym__space,
      sym__eol,
  [5055] = 1,
    ACTIONS(2233), 2,
      sym__space,
      sym__eol,
  [5060] = 1,
    ACTIONS(2235), 2,
      sym__space,
      sym__eol,
  [5065] = 1,
    ACTIONS(2237), 2,
      sym__space,
      sym__eol,
  [5070] = 1,
    ACTIONS(2239), 2,
      sym__space,
      sym__eol,
  [5075] = 1,
    ACTIONS(2241), 2,
      sym__space,
      sym__eol,
  [5080] = 1,
    ACTIONS(2243), 2,
      sym__space,
      sym__eol,
  [5085] = 1,
    ACTIONS(2245), 2,
      sym__space,
      sym__eol,
  [5090] = 1,
    ACTIONS(2247), 2,
      sym__space,
      sym__eol,
  [5095] = 1,
    ACTIONS(2249), 2,
      sym__space,
      sym__eol,
  [5100] = 1,
    ACTIONS(2251), 2,
      sym__space,
      sym__eol,
  [5105] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5110] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5115] = 1,
    ACTIONS(2253), 2,
      sym__space,
      sym__eol,
  [5120] = 1,
    ACTIONS(2255), 2,
      sym__space,
      sym__eol,
  [5125] = 1,
    ACTIONS(2257), 2,
      sym__space,
      sym__eol,
  [5130] = 1,
    ACTIONS(2259), 2,
      sym__space,
      sym__eol,
  [5135] = 1,
    ACTIONS(2261), 2,
      sym__space,
      sym__eol,
  [5140] = 1,
    ACTIONS(2263), 2,
      sym__space,
      sym__eol,
  [5145] = 1,
    ACTIONS(2265), 2,
      sym__space,
      sym__eol,
  [5150] = 1,
    ACTIONS(2267), 2,
      sym__space,
      sym__eol,
  [5155] = 1,
    ACTIONS(2269), 2,
      sym__space,
      sym__eol,
  [5160] = 1,
    ACTIONS(2271), 2,
      sym__space,
      sym__eol,
  [5165] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5170] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(623), 1,
      sym_number,
  [5177] = 1,
    ACTIONS(2273), 2,
      sym__space,
      sym__eol,
  [5182] = 2,
    ACTIONS(1907), 1,
      aux_sym_time_token4,
    ACTIONS(1909), 1,
      aux_sym_time_token5,
  [5189] = 1,
    ACTIONS(2275), 2,
      sym__space,
      sym__eol,
  [5194] = 2,
    ACTIONS(977), 1,
      sym__number,
    STATE(625), 1,
      sym_time,
  [5201] = 1,
    ACTIONS(2277), 2,
      sym__space,
      sym__eol,
  [5206] = 1,
    ACTIONS(2279), 2,
      sym__space,
      sym__eol,
  [5211] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5216] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5221] = 1,
    ACTIONS(2281), 2,
      sym__space,
      sym__eol,
  [5226] = 1,
    ACTIONS(2283), 2,
      sym__space,
      sym__eol,
  [5231] = 1,
    ACTIONS(2285), 2,
      sym__space,
      sym__eol,
  [5236] = 1,
    ACTIONS(2287), 2,
      sym__space,
      sym__eol,
  [5241] = 2,
    ACTIONS(2289), 1,
      sym__var_name,
    STATE(632), 1,
      sym__set_env_value,
  [5248] = 1,
    ACTIONS(2291), 2,
      sym__space,
      sym__eol,
  [5253] = 1,
    ACTIONS(2293), 2,
      sym__space,
      sym__eol,
  [5258] = 1,
    ACTIONS(2295), 2,
      sym__space,
      sym__eol,
  [5263] = 1,
    ACTIONS(2297), 2,
      sym__space,
      sym__eol,
  [5268] = 2,
    ACTIONS(2299), 1,
      sym__space,
    ACTIONS(2301), 1,
      sym__eol,
  [5275] = 1,
    ACTIONS(2301), 2,
      sym__space,
      sym__eol,
  [5280] = 2,
    ACTIONS(2303), 1,
      sym__space,
    ACTIONS(2305), 1,
      sym__eol,
  [5287] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5292] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5297] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(431), 1,
      sym_number,
  [5304] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(430), 1,
      sym_number,
  [5311] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(426), 1,
      sym_number,
  [5318] = 1,
    ACTIONS(2307), 2,
      sym__space,
      sym__eol,
  [5323] = 2,
    ACTIONS(2309), 1,
      sym__space,
    ACTIONS(2311), 1,
      sym__eol,
  [5330] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5335] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(458), 1,
      sym_number,
  [5342] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(470), 1,
      sym_number,
  [5349] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5354] = 2,
    ACTIONS(977), 1,
      sym__number,
    STATE(495), 1,
      sym_time,
  [5361] = 1,
    ACTIONS(2313), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [5366] = 1,
    ACTIONS(2315), 2,
      sym__space,
      sym__eol,
  [5371] = 2,
    ACTIONS(2317), 1,
      anon_sym_none,
    ACTIONS(2319), 1,
      aux_sym__escape_char_token2,
  [5378] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(514), 1,
      sym_number,
  [5385] = 2,
    ACTIONS(1421), 1,
      aux_sym_time_token4,
    ACTIONS(1423), 1,
      aux_sym_time_token5,
  [5392] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5397] = 1,
    ACTIONS(2321), 2,
      sym__space,
      sym__eol,
  [5402] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(515), 1,
      sym_number,
  [5409] = 1,
    ACTIONS(2323), 2,
      sym__space,
      sym__eol,
  [5414] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(528), 1,
      sym_number,
  [5421] = 2,
    ACTIONS(2325), 1,
      anon_sym_inet,
    ACTIONS(2327), 1,
      anon_sym_inet6,
  [5428] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5433] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5438] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5443] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5448] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5453] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5458] = 1,
    ACTIONS(2329), 2,
      sym__space,
      sym__eol,
  [5463] = 1,
    ACTIONS(2127), 2,
      sym__space,
      sym__eol,
  [5468] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5473] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5478] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5483] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5488] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5493] = 1,
    ACTIONS(2331), 2,
      sym__space,
      sym__eol,
  [5498] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5503] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5508] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(499), 1,
      sym_number,
  [5515] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5520] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5525] = 1,
    ACTIONS(2333), 2,
      sym__space,
      sym__eol,
  [5530] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5535] = 1,
    ACTIONS(2335), 2,
      sym__space,
      sym__eol,
  [5540] = 1,
    ACTIONS(2337), 2,
      sym__space,
      sym__eol,
  [5545] = 1,
    ACTIONS(1715), 2,
      sym__space,
      sym__eol,
  [5550] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5555] = 1,
    ACTIONS(2339), 2,
      sym__space,
      sym__eol,
  [5560] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5565] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5570] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5575] = 1,
    ACTIONS(2343), 2,
      sym__space,
      sym__eol,
  [5580] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5585] = 1,
    ACTIONS(2345), 2,
      sym__space,
      sym__eol,
  [5590] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5595] = 1,
    ACTIONS(1744), 2,
      sym__space,
      sym__eol,
  [5600] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5605] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5610] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5615] = 1,
    ACTIONS(2347), 2,
      sym__space,
      sym__eol,
  [5620] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5625] = 1,
    ACTIONS(2349), 2,
      sym__space,
      sym__eol,
  [5630] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5635] = 1,
    ACTIONS(2351), 2,
      sym__space,
      sym__eol,
  [5640] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5645] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5650] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5655] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5660] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5665] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5670] = 1,
    ACTIONS(2355), 2,
      sym__space,
      sym__eol,
  [5675] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5680] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5685] = 1,
    ACTIONS(2357), 2,
      sym__space,
      sym__eol,
  [5690] = 1,
    ACTIONS(2359), 2,
      sym__space,
      sym__eol,
  [5695] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5700] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5705] = 1,
    ACTIONS(2361), 2,
      sym__space,
      sym__eol,
  [5710] = 1,
    ACTIONS(2363), 2,
      sym__space,
      sym__eol,
  [5715] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5720] = 1,
    ACTIONS(1786), 2,
      sym__space,
      sym__eol,
  [5725] = 1,
    ACTIONS(2341), 2,
      sym__space,
      sym__eol,
  [5730] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5735] = 1,
    ACTIONS(1792), 2,
      sym__space,
      sym__eol,
  [5740] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5745] = 1,
    ACTIONS(2365), 2,
      sym__space,
      sym__eol,
  [5750] = 1,
    ACTIONS(1797), 2,
      sym__space,
      sym__eol,
  [5755] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5760] = 1,
    ACTIONS(2367), 2,
      sym__space,
      sym__eol,
  [5765] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [5770] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5775] = 1,
    ACTIONS(2371), 2,
      sym__space,
      sym__eol,
  [5780] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5785] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5790] = 1,
    ACTIONS(2375), 2,
      sym__space,
      sym__eol,
  [5795] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5800] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5805] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5810] = 1,
    ACTIONS(2337), 2,
      sym__space,
      sym__eol,
  [5815] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5820] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5825] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [5830] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5835] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5840] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5845] = 2,
    ACTIONS(2381), 1,
      sym__space,
    ACTIONS(2383), 1,
      sym__eol,
  [5852] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5857] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5862] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5867] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5872] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5877] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5882] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5887] = 1,
    ACTIONS(1874), 2,
      sym__space,
      sym__eol,
  [5892] = 1,
    ACTIONS(2121), 2,
      sym__space,
      sym__eol,
  [5897] = 1,
    ACTIONS(2337), 2,
      sym__space,
      sym__eol,
  [5902] = 2,
    ACTIONS(1344), 1,
      sym__number,
    STATE(510), 1,
      sym_number,
  [5909] = 1,
    ACTIONS(2385), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [5914] = 1,
    ACTIONS(2387), 2,
      sym__space,
      sym__eol,
  [5919] = 1,
    ACTIONS(2383), 1,
      sym__eol,
  [5923] = 1,
    ACTIONS(2389), 1,
      anon_sym_COLON,
  [5927] = 1,
    ACTIONS(2391), 1,
      sym__space,
  [5931] = 1,
    ACTIONS(2393), 1,
      anon_sym_DQUOTE,
  [5935] = 1,
    ACTIONS(2395), 1,
      anon_sym_DQUOTE,
  [5939] = 1,
    ACTIONS(771), 1,
      sym__eol,
  [5943] = 1,
    ACTIONS(1423), 1,
      aux_sym_time_token5,
  [5947] = 1,
    ACTIONS(2397), 1,
      sym_authentication,
  [5951] = 1,
    ACTIONS(2399), 1,
      aux_sym__stream_local_bind_mask_token2,
  [5955] = 1,
    ACTIONS(2305), 1,
      sym__eol,
  [5959] = 1,
    ACTIONS(2401), 1,
      sym__eol,
  [5963] = 1,
    ACTIONS(2403), 1,
      sym_sig,
  [5967] = 1,
    ACTIONS(2405), 1,
      sym__var_name,
  [5971] = 1,
    ACTIONS(2407), 1,
      sym_cipher,
  [5975] = 1,
    ACTIONS(1909), 1,
      aux_sym_time_token5,
  [5979] = 1,
    ACTIONS(2409), 1,
      aux_sym__proxy_jump_arg_token1,
  [5983] = 1,
    ACTIONS(2411), 1,
      sym_authentication,
  [5987] = 1,
    ACTIONS(2413), 1,
      anon_sym_COLON,
  [5991] = 1,
    ACTIONS(2415), 1,
      anon_sym_COLON,
  [5995] = 1,
    ACTIONS(2417), 1,
      sym_mac,
  [5999] = 1,
    ACTIONS(2419), 1,
      aux_sym__permit_remote_open_value_token2,
  [6003] = 1,
    ACTIONS(2421), 1,
      sym__var_name,
  [6007] = 1,
    ACTIONS(2423), 1,
      sym_key_sig,
  [6011] = 1,
    ACTIONS(2425), 1,
      sym_key_sig,
  [6015] = 1,
    ACTIONS(2427), 1,
      sym_kex,
  [6019] = 1,
    ACTIONS(2429), 1,
      sym_verbosity,
  [6023] = 1,
    ACTIONS(2431), 1,
      sym_kex,
  [6027] = 1,
    ACTIONS(2433), 1,
      anon_sym_COLON,
  [6031] = 1,
    ACTIONS(2435), 1,
      sym__space,
  [6035] = 1,
    ACTIONS(2203), 1,
      aux_sym_time_token5,
  [6039] = 1,
    ACTIONS(2437), 1,
      sym__space,
  [6043] = 1,
    ACTIONS(2439), 1,
      sym_mac,
  [6047] = 1,
    ACTIONS(2441), 1,
      aux_sym_time_token5,
  [6051] = 1,
    ACTIONS(2443), 1,
      sym_key_sig,
  [6055] = 1,
    ACTIONS(2445), 1,
      anon_sym_COLON,
  [6059] = 1,
    ACTIONS(2447), 1,
      anon_sym_DQUOTE,
  [6063] = 1,
    ACTIONS(2449), 1,
      sym_cipher,
  [6067] = 1,
    ACTIONS(2451), 1,
      anon_sym_COLON,
  [6071] = 1,
    ACTIONS(2453), 1,
      anon_sym_RBRACE,
  [6075] = 1,
    ACTIONS(2455), 1,
      sym_sig,
  [6079] = 1,
    ACTIONS(2457), 1,
      anon_sym_AT,
  [6083] = 1,
    ACTIONS(2459), 1,
      sym_key_sig,
  [6087] = 1,
    ACTIONS(2461), 1,
      sym__eol,
  [6091] = 1,
    ACTIONS(2463), 1,
      anon_sym_EQ,
  [6095] = 1,
    ACTIONS(2465), 1,
      sym__space,
  [6099] = 1,
    ACTIONS(2467), 1,
      anon_sym_RBRACE,
  [6103] = 1,
    ACTIONS(2469), 1,
      ts_builtin_sym_end,
  [6107] = 1,
    ACTIONS(2471), 1,
      anon_sym_RBRACE,
  [6111] = 1,
    ACTIONS(2473), 1,
      anon_sym_RBRACE,
  [6115] = 1,
    ACTIONS(2475), 1,
      anon_sym_RBRACE,
  [6119] = 1,
    ACTIONS(2477), 1,
      anon_sym_RBRACE,
  [6123] = 1,
    ACTIONS(2479), 1,
      sym__var_name,
  [6127] = 1,
    ACTIONS(2481), 1,
      sym__var_name,
  [6131] = 1,
    ACTIONS(2483), 1,
      sym__var_name,
  [6135] = 1,
    ACTIONS(2485), 1,
      sym__var_name,
  [6139] = 1,
    ACTIONS(2487), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 37,
  [SMALL_STATE(32)] = 74,
  [SMALL_STATE(33)] = 105,
  [SMALL_STATE(34)] = 138,
  [SMALL_STATE(35)] = 169,
  [SMALL_STATE(36)] = 192,
  [SMALL_STATE(37)] = 217,
  [SMALL_STATE(38)] = 242,
  [SMALL_STATE(39)] = 265,
  [SMALL_STATE(40)] = 291,
  [SMALL_STATE(41)] = 313,
  [SMALL_STATE(42)] = 335,
  [SMALL_STATE(43)] = 361,
  [SMALL_STATE(44)] = 380,
  [SMALL_STATE(45)] = 403,
  [SMALL_STATE(46)] = 426,
  [SMALL_STATE(47)] = 449,
  [SMALL_STATE(48)] = 470,
  [SMALL_STATE(49)] = 491,
  [SMALL_STATE(50)] = 512,
  [SMALL_STATE(51)] = 535,
  [SMALL_STATE(52)] = 558,
  [SMALL_STATE(53)] = 581,
  [SMALL_STATE(54)] = 602,
  [SMALL_STATE(55)] = 623,
  [SMALL_STATE(56)] = 646,
  [SMALL_STATE(57)] = 669,
  [SMALL_STATE(58)] = 692,
  [SMALL_STATE(59)] = 715,
  [SMALL_STATE(60)] = 727,
  [SMALL_STATE(61)] = 747,
  [SMALL_STATE(62)] = 759,
  [SMALL_STATE(63)] = 775,
  [SMALL_STATE(64)] = 797,
  [SMALL_STATE(65)] = 813,
  [SMALL_STATE(66)] = 829,
  [SMALL_STATE(67)] = 849,
  [SMALL_STATE(68)] = 869,
  [SMALL_STATE(69)] = 889,
  [SMALL_STATE(70)] = 909,
  [SMALL_STATE(71)] = 929,
  [SMALL_STATE(72)] = 949,
  [SMALL_STATE(73)] = 967,
  [SMALL_STATE(74)] = 987,
  [SMALL_STATE(75)] = 1004,
  [SMALL_STATE(76)] = 1021,
  [SMALL_STATE(77)] = 1034,
  [SMALL_STATE(78)] = 1051,
  [SMALL_STATE(79)] = 1066,
  [SMALL_STATE(80)] = 1085,
  [SMALL_STATE(81)] = 1102,
  [SMALL_STATE(82)] = 1119,
  [SMALL_STATE(83)] = 1136,
  [SMALL_STATE(84)] = 1155,
  [SMALL_STATE(85)] = 1172,
  [SMALL_STATE(86)] = 1185,
  [SMALL_STATE(87)] = 1202,
  [SMALL_STATE(88)] = 1215,
  [SMALL_STATE(89)] = 1230,
  [SMALL_STATE(90)] = 1247,
  [SMALL_STATE(91)] = 1258,
  [SMALL_STATE(92)] = 1269,
  [SMALL_STATE(93)] = 1286,
  [SMALL_STATE(94)] = 1303,
  [SMALL_STATE(95)] = 1320,
  [SMALL_STATE(96)] = 1337,
  [SMALL_STATE(97)] = 1354,
  [SMALL_STATE(98)] = 1369,
  [SMALL_STATE(99)] = 1386,
  [SMALL_STATE(100)] = 1401,
  [SMALL_STATE(101)] = 1414,
  [SMALL_STATE(102)] = 1429,
  [SMALL_STATE(103)] = 1446,
  [SMALL_STATE(104)] = 1463,
  [SMALL_STATE(105)] = 1480,
  [SMALL_STATE(106)] = 1495,
  [SMALL_STATE(107)] = 1512,
  [SMALL_STATE(108)] = 1529,
  [SMALL_STATE(109)] = 1540,
  [SMALL_STATE(110)] = 1551,
  [SMALL_STATE(111)] = 1566,
  [SMALL_STATE(112)] = 1576,
  [SMALL_STATE(113)] = 1590,
  [SMALL_STATE(114)] = 1600,
  [SMALL_STATE(115)] = 1612,
  [SMALL_STATE(116)] = 1622,
  [SMALL_STATE(117)] = 1636,
  [SMALL_STATE(118)] = 1646,
  [SMALL_STATE(119)] = 1662,
  [SMALL_STATE(120)] = 1676,
  [SMALL_STATE(121)] = 1690,
  [SMALL_STATE(122)] = 1702,
  [SMALL_STATE(123)] = 1710,
  [SMALL_STATE(124)] = 1724,
  [SMALL_STATE(125)] = 1734,
  [SMALL_STATE(126)] = 1750,
  [SMALL_STATE(127)] = 1766,
  [SMALL_STATE(128)] = 1776,
  [SMALL_STATE(129)] = 1788,
  [SMALL_STATE(130)] = 1802,
  [SMALL_STATE(131)] = 1810,
  [SMALL_STATE(132)] = 1824,
  [SMALL_STATE(133)] = 1836,
  [SMALL_STATE(134)] = 1852,
  [SMALL_STATE(135)] = 1864,
  [SMALL_STATE(136)] = 1880,
  [SMALL_STATE(137)] = 1896,
  [SMALL_STATE(138)] = 1912,
  [SMALL_STATE(139)] = 1926,
  [SMALL_STATE(140)] = 1940,
  [SMALL_STATE(141)] = 1952,
  [SMALL_STATE(142)] = 1963,
  [SMALL_STATE(143)] = 1974,
  [SMALL_STATE(144)] = 1985,
  [SMALL_STATE(145)] = 1994,
  [SMALL_STATE(146)] = 2003,
  [SMALL_STATE(147)] = 2014,
  [SMALL_STATE(148)] = 2025,
  [SMALL_STATE(149)] = 2036,
  [SMALL_STATE(150)] = 2047,
  [SMALL_STATE(151)] = 2058,
  [SMALL_STATE(152)] = 2069,
  [SMALL_STATE(153)] = 2080,
  [SMALL_STATE(154)] = 2091,
  [SMALL_STATE(155)] = 2104,
  [SMALL_STATE(156)] = 2115,
  [SMALL_STATE(157)] = 2124,
  [SMALL_STATE(158)] = 2135,
  [SMALL_STATE(159)] = 2146,
  [SMALL_STATE(160)] = 2155,
  [SMALL_STATE(161)] = 2166,
  [SMALL_STATE(162)] = 2179,
  [SMALL_STATE(163)] = 2190,
  [SMALL_STATE(164)] = 2201,
  [SMALL_STATE(165)] = 2212,
  [SMALL_STATE(166)] = 2223,
  [SMALL_STATE(167)] = 2234,
  [SMALL_STATE(168)] = 2245,
  [SMALL_STATE(169)] = 2256,
  [SMALL_STATE(170)] = 2267,
  [SMALL_STATE(171)] = 2278,
  [SMALL_STATE(172)] = 2289,
  [SMALL_STATE(173)] = 2300,
  [SMALL_STATE(174)] = 2311,
  [SMALL_STATE(175)] = 2322,
  [SMALL_STATE(176)] = 2333,
  [SMALL_STATE(177)] = 2346,
  [SMALL_STATE(178)] = 2357,
  [SMALL_STATE(179)] = 2368,
  [SMALL_STATE(180)] = 2377,
  [SMALL_STATE(181)] = 2386,
  [SMALL_STATE(182)] = 2397,
  [SMALL_STATE(183)] = 2406,
  [SMALL_STATE(184)] = 2417,
  [SMALL_STATE(185)] = 2426,
  [SMALL_STATE(186)] = 2435,
  [SMALL_STATE(187)] = 2446,
  [SMALL_STATE(188)] = 2453,
  [SMALL_STATE(189)] = 2462,
  [SMALL_STATE(190)] = 2469,
  [SMALL_STATE(191)] = 2480,
  [SMALL_STATE(192)] = 2491,
  [SMALL_STATE(193)] = 2502,
  [SMALL_STATE(194)] = 2513,
  [SMALL_STATE(195)] = 2524,
  [SMALL_STATE(196)] = 2535,
  [SMALL_STATE(197)] = 2546,
  [SMALL_STATE(198)] = 2557,
  [SMALL_STATE(199)] = 2568,
  [SMALL_STATE(200)] = 2577,
  [SMALL_STATE(201)] = 2588,
  [SMALL_STATE(202)] = 2597,
  [SMALL_STATE(203)] = 2608,
  [SMALL_STATE(204)] = 2617,
  [SMALL_STATE(205)] = 2630,
  [SMALL_STATE(206)] = 2643,
  [SMALL_STATE(207)] = 2652,
  [SMALL_STATE(208)] = 2661,
  [SMALL_STATE(209)] = 2670,
  [SMALL_STATE(210)] = 2681,
  [SMALL_STATE(211)] = 2692,
  [SMALL_STATE(212)] = 2703,
  [SMALL_STATE(213)] = 2712,
  [SMALL_STATE(214)] = 2722,
  [SMALL_STATE(215)] = 2728,
  [SMALL_STATE(216)] = 2738,
  [SMALL_STATE(217)] = 2746,
  [SMALL_STATE(218)] = 2756,
  [SMALL_STATE(219)] = 2764,
  [SMALL_STATE(220)] = 2774,
  [SMALL_STATE(221)] = 2782,
  [SMALL_STATE(222)] = 2792,
  [SMALL_STATE(223)] = 2800,
  [SMALL_STATE(224)] = 2808,
  [SMALL_STATE(225)] = 2816,
  [SMALL_STATE(226)] = 2824,
  [SMALL_STATE(227)] = 2832,
  [SMALL_STATE(228)] = 2842,
  [SMALL_STATE(229)] = 2852,
  [SMALL_STATE(230)] = 2860,
  [SMALL_STATE(231)] = 2870,
  [SMALL_STATE(232)] = 2880,
  [SMALL_STATE(233)] = 2890,
  [SMALL_STATE(234)] = 2898,
  [SMALL_STATE(235)] = 2906,
  [SMALL_STATE(236)] = 2914,
  [SMALL_STATE(237)] = 2924,
  [SMALL_STATE(238)] = 2934,
  [SMALL_STATE(239)] = 2944,
  [SMALL_STATE(240)] = 2954,
  [SMALL_STATE(241)] = 2960,
  [SMALL_STATE(242)] = 2968,
  [SMALL_STATE(243)] = 2976,
  [SMALL_STATE(244)] = 2986,
  [SMALL_STATE(245)] = 2994,
  [SMALL_STATE(246)] = 3002,
  [SMALL_STATE(247)] = 3012,
  [SMALL_STATE(248)] = 3022,
  [SMALL_STATE(249)] = 3032,
  [SMALL_STATE(250)] = 3042,
  [SMALL_STATE(251)] = 3052,
  [SMALL_STATE(252)] = 3062,
  [SMALL_STATE(253)] = 3070,
  [SMALL_STATE(254)] = 3078,
  [SMALL_STATE(255)] = 3088,
  [SMALL_STATE(256)] = 3098,
  [SMALL_STATE(257)] = 3108,
  [SMALL_STATE(258)] = 3118,
  [SMALL_STATE(259)] = 3128,
  [SMALL_STATE(260)] = 3136,
  [SMALL_STATE(261)] = 3146,
  [SMALL_STATE(262)] = 3154,
  [SMALL_STATE(263)] = 3162,
  [SMALL_STATE(264)] = 3172,
  [SMALL_STATE(265)] = 3182,
  [SMALL_STATE(266)] = 3192,
  [SMALL_STATE(267)] = 3200,
  [SMALL_STATE(268)] = 3210,
  [SMALL_STATE(269)] = 3218,
  [SMALL_STATE(270)] = 3228,
  [SMALL_STATE(271)] = 3236,
  [SMALL_STATE(272)] = 3246,
  [SMALL_STATE(273)] = 3256,
  [SMALL_STATE(274)] = 3266,
  [SMALL_STATE(275)] = 3272,
  [SMALL_STATE(276)] = 3282,
  [SMALL_STATE(277)] = 3292,
  [SMALL_STATE(278)] = 3302,
  [SMALL_STATE(279)] = 3310,
  [SMALL_STATE(280)] = 3320,
  [SMALL_STATE(281)] = 3330,
  [SMALL_STATE(282)] = 3340,
  [SMALL_STATE(283)] = 3350,
  [SMALL_STATE(284)] = 3360,
  [SMALL_STATE(285)] = 3370,
  [SMALL_STATE(286)] = 3380,
  [SMALL_STATE(287)] = 3390,
  [SMALL_STATE(288)] = 3396,
  [SMALL_STATE(289)] = 3406,
  [SMALL_STATE(290)] = 3416,
  [SMALL_STATE(291)] = 3426,
  [SMALL_STATE(292)] = 3436,
  [SMALL_STATE(293)] = 3446,
  [SMALL_STATE(294)] = 3456,
  [SMALL_STATE(295)] = 3466,
  [SMALL_STATE(296)] = 3476,
  [SMALL_STATE(297)] = 3486,
  [SMALL_STATE(298)] = 3496,
  [SMALL_STATE(299)] = 3506,
  [SMALL_STATE(300)] = 3512,
  [SMALL_STATE(301)] = 3522,
  [SMALL_STATE(302)] = 3532,
  [SMALL_STATE(303)] = 3542,
  [SMALL_STATE(304)] = 3552,
  [SMALL_STATE(305)] = 3562,
  [SMALL_STATE(306)] = 3572,
  [SMALL_STATE(307)] = 3582,
  [SMALL_STATE(308)] = 3592,
  [SMALL_STATE(309)] = 3602,
  [SMALL_STATE(310)] = 3612,
  [SMALL_STATE(311)] = 3618,
  [SMALL_STATE(312)] = 3628,
  [SMALL_STATE(313)] = 3638,
  [SMALL_STATE(314)] = 3648,
  [SMALL_STATE(315)] = 3658,
  [SMALL_STATE(316)] = 3668,
  [SMALL_STATE(317)] = 3674,
  [SMALL_STATE(318)] = 3682,
  [SMALL_STATE(319)] = 3690,
  [SMALL_STATE(320)] = 3700,
  [SMALL_STATE(321)] = 3710,
  [SMALL_STATE(322)] = 3720,
  [SMALL_STATE(323)] = 3730,
  [SMALL_STATE(324)] = 3740,
  [SMALL_STATE(325)] = 3750,
  [SMALL_STATE(326)] = 3756,
  [SMALL_STATE(327)] = 3766,
  [SMALL_STATE(328)] = 3772,
  [SMALL_STATE(329)] = 3780,
  [SMALL_STATE(330)] = 3790,
  [SMALL_STATE(331)] = 3800,
  [SMALL_STATE(332)] = 3810,
  [SMALL_STATE(333)] = 3820,
  [SMALL_STATE(334)] = 3830,
  [SMALL_STATE(335)] = 3840,
  [SMALL_STATE(336)] = 3850,
  [SMALL_STATE(337)] = 3860,
  [SMALL_STATE(338)] = 3870,
  [SMALL_STATE(339)] = 3880,
  [SMALL_STATE(340)] = 3888,
  [SMALL_STATE(341)] = 3898,
  [SMALL_STATE(342)] = 3908,
  [SMALL_STATE(343)] = 3918,
  [SMALL_STATE(344)] = 3928,
  [SMALL_STATE(345)] = 3938,
  [SMALL_STATE(346)] = 3948,
  [SMALL_STATE(347)] = 3958,
  [SMALL_STATE(348)] = 3968,
  [SMALL_STATE(349)] = 3976,
  [SMALL_STATE(350)] = 3984,
  [SMALL_STATE(351)] = 3992,
  [SMALL_STATE(352)] = 4002,
  [SMALL_STATE(353)] = 4012,
  [SMALL_STATE(354)] = 4022,
  [SMALL_STATE(355)] = 4032,
  [SMALL_STATE(356)] = 4042,
  [SMALL_STATE(357)] = 4052,
  [SMALL_STATE(358)] = 4062,
  [SMALL_STATE(359)] = 4072,
  [SMALL_STATE(360)] = 4082,
  [SMALL_STATE(361)] = 4088,
  [SMALL_STATE(362)] = 4096,
  [SMALL_STATE(363)] = 4106,
  [SMALL_STATE(364)] = 4116,
  [SMALL_STATE(365)] = 4124,
  [SMALL_STATE(366)] = 4134,
  [SMALL_STATE(367)] = 4142,
  [SMALL_STATE(368)] = 4152,
  [SMALL_STATE(369)] = 4162,
  [SMALL_STATE(370)] = 4172,
  [SMALL_STATE(371)] = 4180,
  [SMALL_STATE(372)] = 4190,
  [SMALL_STATE(373)] = 4200,
  [SMALL_STATE(374)] = 4210,
  [SMALL_STATE(375)] = 4220,
  [SMALL_STATE(376)] = 4230,
  [SMALL_STATE(377)] = 4240,
  [SMALL_STATE(378)] = 4250,
  [SMALL_STATE(379)] = 4260,
  [SMALL_STATE(380)] = 4270,
  [SMALL_STATE(381)] = 4280,
  [SMALL_STATE(382)] = 4290,
  [SMALL_STATE(383)] = 4300,
  [SMALL_STATE(384)] = 4310,
  [SMALL_STATE(385)] = 4320,
  [SMALL_STATE(386)] = 4330,
  [SMALL_STATE(387)] = 4340,
  [SMALL_STATE(388)] = 4350,
  [SMALL_STATE(389)] = 4360,
  [SMALL_STATE(390)] = 4370,
  [SMALL_STATE(391)] = 4380,
  [SMALL_STATE(392)] = 4390,
  [SMALL_STATE(393)] = 4400,
  [SMALL_STATE(394)] = 4410,
  [SMALL_STATE(395)] = 4420,
  [SMALL_STATE(396)] = 4428,
  [SMALL_STATE(397)] = 4438,
  [SMALL_STATE(398)] = 4448,
  [SMALL_STATE(399)] = 4458,
  [SMALL_STATE(400)] = 4468,
  [SMALL_STATE(401)] = 4478,
  [SMALL_STATE(402)] = 4486,
  [SMALL_STATE(403)] = 4496,
  [SMALL_STATE(404)] = 4506,
  [SMALL_STATE(405)] = 4516,
  [SMALL_STATE(406)] = 4524,
  [SMALL_STATE(407)] = 4532,
  [SMALL_STATE(408)] = 4540,
  [SMALL_STATE(409)] = 4550,
  [SMALL_STATE(410)] = 4558,
  [SMALL_STATE(411)] = 4568,
  [SMALL_STATE(412)] = 4578,
  [SMALL_STATE(413)] = 4588,
  [SMALL_STATE(414)] = 4598,
  [SMALL_STATE(415)] = 4606,
  [SMALL_STATE(416)] = 4616,
  [SMALL_STATE(417)] = 4626,
  [SMALL_STATE(418)] = 4636,
  [SMALL_STATE(419)] = 4646,
  [SMALL_STATE(420)] = 4656,
  [SMALL_STATE(421)] = 4666,
  [SMALL_STATE(422)] = 4676,
  [SMALL_STATE(423)] = 4681,
  [SMALL_STATE(424)] = 4686,
  [SMALL_STATE(425)] = 4693,
  [SMALL_STATE(426)] = 4698,
  [SMALL_STATE(427)] = 4703,
  [SMALL_STATE(428)] = 4708,
  [SMALL_STATE(429)] = 4713,
  [SMALL_STATE(430)] = 4718,
  [SMALL_STATE(431)] = 4723,
  [SMALL_STATE(432)] = 4728,
  [SMALL_STATE(433)] = 4733,
  [SMALL_STATE(434)] = 4738,
  [SMALL_STATE(435)] = 4743,
  [SMALL_STATE(436)] = 4748,
  [SMALL_STATE(437)] = 4753,
  [SMALL_STATE(438)] = 4758,
  [SMALL_STATE(439)] = 4763,
  [SMALL_STATE(440)] = 4768,
  [SMALL_STATE(441)] = 4773,
  [SMALL_STATE(442)] = 4778,
  [SMALL_STATE(443)] = 4783,
  [SMALL_STATE(444)] = 4788,
  [SMALL_STATE(445)] = 4793,
  [SMALL_STATE(446)] = 4800,
  [SMALL_STATE(447)] = 4805,
  [SMALL_STATE(448)] = 4812,
  [SMALL_STATE(449)] = 4817,
  [SMALL_STATE(450)] = 4822,
  [SMALL_STATE(451)] = 4827,
  [SMALL_STATE(452)] = 4832,
  [SMALL_STATE(453)] = 4837,
  [SMALL_STATE(454)] = 4842,
  [SMALL_STATE(455)] = 4847,
  [SMALL_STATE(456)] = 4852,
  [SMALL_STATE(457)] = 4857,
  [SMALL_STATE(458)] = 4862,
  [SMALL_STATE(459)] = 4867,
  [SMALL_STATE(460)] = 4872,
  [SMALL_STATE(461)] = 4877,
  [SMALL_STATE(462)] = 4882,
  [SMALL_STATE(463)] = 4887,
  [SMALL_STATE(464)] = 4894,
  [SMALL_STATE(465)] = 4899,
  [SMALL_STATE(466)] = 4904,
  [SMALL_STATE(467)] = 4909,
  [SMALL_STATE(468)] = 4914,
  [SMALL_STATE(469)] = 4919,
  [SMALL_STATE(470)] = 4924,
  [SMALL_STATE(471)] = 4929,
  [SMALL_STATE(472)] = 4934,
  [SMALL_STATE(473)] = 4939,
  [SMALL_STATE(474)] = 4944,
  [SMALL_STATE(475)] = 4949,
  [SMALL_STATE(476)] = 4956,
  [SMALL_STATE(477)] = 4961,
  [SMALL_STATE(478)] = 4966,
  [SMALL_STATE(479)] = 4971,
  [SMALL_STATE(480)] = 4976,
  [SMALL_STATE(481)] = 4983,
  [SMALL_STATE(482)] = 4988,
  [SMALL_STATE(483)] = 4993,
  [SMALL_STATE(484)] = 4998,
  [SMALL_STATE(485)] = 5003,
  [SMALL_STATE(486)] = 5008,
  [SMALL_STATE(487)] = 5013,
  [SMALL_STATE(488)] = 5018,
  [SMALL_STATE(489)] = 5023,
  [SMALL_STATE(490)] = 5028,
  [SMALL_STATE(491)] = 5033,
  [SMALL_STATE(492)] = 5038,
  [SMALL_STATE(493)] = 5043,
  [SMALL_STATE(494)] = 5050,
  [SMALL_STATE(495)] = 5055,
  [SMALL_STATE(496)] = 5060,
  [SMALL_STATE(497)] = 5065,
  [SMALL_STATE(498)] = 5070,
  [SMALL_STATE(499)] = 5075,
  [SMALL_STATE(500)] = 5080,
  [SMALL_STATE(501)] = 5085,
  [SMALL_STATE(502)] = 5090,
  [SMALL_STATE(503)] = 5095,
  [SMALL_STATE(504)] = 5100,
  [SMALL_STATE(505)] = 5105,
  [SMALL_STATE(506)] = 5110,
  [SMALL_STATE(507)] = 5115,
  [SMALL_STATE(508)] = 5120,
  [SMALL_STATE(509)] = 5125,
  [SMALL_STATE(510)] = 5130,
  [SMALL_STATE(511)] = 5135,
  [SMALL_STATE(512)] = 5140,
  [SMALL_STATE(513)] = 5145,
  [SMALL_STATE(514)] = 5150,
  [SMALL_STATE(515)] = 5155,
  [SMALL_STATE(516)] = 5160,
  [SMALL_STATE(517)] = 5165,
  [SMALL_STATE(518)] = 5170,
  [SMALL_STATE(519)] = 5177,
  [SMALL_STATE(520)] = 5182,
  [SMALL_STATE(521)] = 5189,
  [SMALL_STATE(522)] = 5194,
  [SMALL_STATE(523)] = 5201,
  [SMALL_STATE(524)] = 5206,
  [SMALL_STATE(525)] = 5211,
  [SMALL_STATE(526)] = 5216,
  [SMALL_STATE(527)] = 5221,
  [SMALL_STATE(528)] = 5226,
  [SMALL_STATE(529)] = 5231,
  [SMALL_STATE(530)] = 5236,
  [SMALL_STATE(531)] = 5241,
  [SMALL_STATE(532)] = 5248,
  [SMALL_STATE(533)] = 5253,
  [SMALL_STATE(534)] = 5258,
  [SMALL_STATE(535)] = 5263,
  [SMALL_STATE(536)] = 5268,
  [SMALL_STATE(537)] = 5275,
  [SMALL_STATE(538)] = 5280,
  [SMALL_STATE(539)] = 5287,
  [SMALL_STATE(540)] = 5292,
  [SMALL_STATE(541)] = 5297,
  [SMALL_STATE(542)] = 5304,
  [SMALL_STATE(543)] = 5311,
  [SMALL_STATE(544)] = 5318,
  [SMALL_STATE(545)] = 5323,
  [SMALL_STATE(546)] = 5330,
  [SMALL_STATE(547)] = 5335,
  [SMALL_STATE(548)] = 5342,
  [SMALL_STATE(549)] = 5349,
  [SMALL_STATE(550)] = 5354,
  [SMALL_STATE(551)] = 5361,
  [SMALL_STATE(552)] = 5366,
  [SMALL_STATE(553)] = 5371,
  [SMALL_STATE(554)] = 5378,
  [SMALL_STATE(555)] = 5385,
  [SMALL_STATE(556)] = 5392,
  [SMALL_STATE(557)] = 5397,
  [SMALL_STATE(558)] = 5402,
  [SMALL_STATE(559)] = 5409,
  [SMALL_STATE(560)] = 5414,
  [SMALL_STATE(561)] = 5421,
  [SMALL_STATE(562)] = 5428,
  [SMALL_STATE(563)] = 5433,
  [SMALL_STATE(564)] = 5438,
  [SMALL_STATE(565)] = 5443,
  [SMALL_STATE(566)] = 5448,
  [SMALL_STATE(567)] = 5453,
  [SMALL_STATE(568)] = 5458,
  [SMALL_STATE(569)] = 5463,
  [SMALL_STATE(570)] = 5468,
  [SMALL_STATE(571)] = 5473,
  [SMALL_STATE(572)] = 5478,
  [SMALL_STATE(573)] = 5483,
  [SMALL_STATE(574)] = 5488,
  [SMALL_STATE(575)] = 5493,
  [SMALL_STATE(576)] = 5498,
  [SMALL_STATE(577)] = 5503,
  [SMALL_STATE(578)] = 5508,
  [SMALL_STATE(579)] = 5515,
  [SMALL_STATE(580)] = 5520,
  [SMALL_STATE(581)] = 5525,
  [SMALL_STATE(582)] = 5530,
  [SMALL_STATE(583)] = 5535,
  [SMALL_STATE(584)] = 5540,
  [SMALL_STATE(585)] = 5545,
  [SMALL_STATE(586)] = 5550,
  [SMALL_STATE(587)] = 5555,
  [SMALL_STATE(588)] = 5560,
  [SMALL_STATE(589)] = 5565,
  [SMALL_STATE(590)] = 5570,
  [SMALL_STATE(591)] = 5575,
  [SMALL_STATE(592)] = 5580,
  [SMALL_STATE(593)] = 5585,
  [SMALL_STATE(594)] = 5590,
  [SMALL_STATE(595)] = 5595,
  [SMALL_STATE(596)] = 5600,
  [SMALL_STATE(597)] = 5605,
  [SMALL_STATE(598)] = 5610,
  [SMALL_STATE(599)] = 5615,
  [SMALL_STATE(600)] = 5620,
  [SMALL_STATE(601)] = 5625,
  [SMALL_STATE(602)] = 5630,
  [SMALL_STATE(603)] = 5635,
  [SMALL_STATE(604)] = 5640,
  [SMALL_STATE(605)] = 5645,
  [SMALL_STATE(606)] = 5650,
  [SMALL_STATE(607)] = 5655,
  [SMALL_STATE(608)] = 5660,
  [SMALL_STATE(609)] = 5665,
  [SMALL_STATE(610)] = 5670,
  [SMALL_STATE(611)] = 5675,
  [SMALL_STATE(612)] = 5680,
  [SMALL_STATE(613)] = 5685,
  [SMALL_STATE(614)] = 5690,
  [SMALL_STATE(615)] = 5695,
  [SMALL_STATE(616)] = 5700,
  [SMALL_STATE(617)] = 5705,
  [SMALL_STATE(618)] = 5710,
  [SMALL_STATE(619)] = 5715,
  [SMALL_STATE(620)] = 5720,
  [SMALL_STATE(621)] = 5725,
  [SMALL_STATE(622)] = 5730,
  [SMALL_STATE(623)] = 5735,
  [SMALL_STATE(624)] = 5740,
  [SMALL_STATE(625)] = 5745,
  [SMALL_STATE(626)] = 5750,
  [SMALL_STATE(627)] = 5755,
  [SMALL_STATE(628)] = 5760,
  [SMALL_STATE(629)] = 5765,
  [SMALL_STATE(630)] = 5770,
  [SMALL_STATE(631)] = 5775,
  [SMALL_STATE(632)] = 5780,
  [SMALL_STATE(633)] = 5785,
  [SMALL_STATE(634)] = 5790,
  [SMALL_STATE(635)] = 5795,
  [SMALL_STATE(636)] = 5800,
  [SMALL_STATE(637)] = 5805,
  [SMALL_STATE(638)] = 5810,
  [SMALL_STATE(639)] = 5815,
  [SMALL_STATE(640)] = 5820,
  [SMALL_STATE(641)] = 5825,
  [SMALL_STATE(642)] = 5830,
  [SMALL_STATE(643)] = 5835,
  [SMALL_STATE(644)] = 5840,
  [SMALL_STATE(645)] = 5845,
  [SMALL_STATE(646)] = 5852,
  [SMALL_STATE(647)] = 5857,
  [SMALL_STATE(648)] = 5862,
  [SMALL_STATE(649)] = 5867,
  [SMALL_STATE(650)] = 5872,
  [SMALL_STATE(651)] = 5877,
  [SMALL_STATE(652)] = 5882,
  [SMALL_STATE(653)] = 5887,
  [SMALL_STATE(654)] = 5892,
  [SMALL_STATE(655)] = 5897,
  [SMALL_STATE(656)] = 5902,
  [SMALL_STATE(657)] = 5909,
  [SMALL_STATE(658)] = 5914,
  [SMALL_STATE(659)] = 5919,
  [SMALL_STATE(660)] = 5923,
  [SMALL_STATE(661)] = 5927,
  [SMALL_STATE(662)] = 5931,
  [SMALL_STATE(663)] = 5935,
  [SMALL_STATE(664)] = 5939,
  [SMALL_STATE(665)] = 5943,
  [SMALL_STATE(666)] = 5947,
  [SMALL_STATE(667)] = 5951,
  [SMALL_STATE(668)] = 5955,
  [SMALL_STATE(669)] = 5959,
  [SMALL_STATE(670)] = 5963,
  [SMALL_STATE(671)] = 5967,
  [SMALL_STATE(672)] = 5971,
  [SMALL_STATE(673)] = 5975,
  [SMALL_STATE(674)] = 5979,
  [SMALL_STATE(675)] = 5983,
  [SMALL_STATE(676)] = 5987,
  [SMALL_STATE(677)] = 5991,
  [SMALL_STATE(678)] = 5995,
  [SMALL_STATE(679)] = 5999,
  [SMALL_STATE(680)] = 6003,
  [SMALL_STATE(681)] = 6007,
  [SMALL_STATE(682)] = 6011,
  [SMALL_STATE(683)] = 6015,
  [SMALL_STATE(684)] = 6019,
  [SMALL_STATE(685)] = 6023,
  [SMALL_STATE(686)] = 6027,
  [SMALL_STATE(687)] = 6031,
  [SMALL_STATE(688)] = 6035,
  [SMALL_STATE(689)] = 6039,
  [SMALL_STATE(690)] = 6043,
  [SMALL_STATE(691)] = 6047,
  [SMALL_STATE(692)] = 6051,
  [SMALL_STATE(693)] = 6055,
  [SMALL_STATE(694)] = 6059,
  [SMALL_STATE(695)] = 6063,
  [SMALL_STATE(696)] = 6067,
  [SMALL_STATE(697)] = 6071,
  [SMALL_STATE(698)] = 6075,
  [SMALL_STATE(699)] = 6079,
  [SMALL_STATE(700)] = 6083,
  [SMALL_STATE(701)] = 6087,
  [SMALL_STATE(702)] = 6091,
  [SMALL_STATE(703)] = 6095,
  [SMALL_STATE(704)] = 6099,
  [SMALL_STATE(705)] = 6103,
  [SMALL_STATE(706)] = 6107,
  [SMALL_STATE(707)] = 6111,
  [SMALL_STATE(708)] = 6115,
  [SMALL_STATE(709)] = 6119,
  [SMALL_STATE(710)] = 6123,
  [SMALL_STATE(711)] = 6127,
  [SMALL_STATE(712)] = 6131,
  [SMALL_STATE(713)] = 6135,
  [SMALL_STATE(714)] = 6139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(303),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(421),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(416),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(415),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(385),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(368),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(357),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(356),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(342),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(340),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(332),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(315),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(309),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(308),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(306),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(305),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(300),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(288),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(283),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(282),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(281),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(280),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(276),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(260),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(257),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(256),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(250),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(249),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(248),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(243),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(239),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(238),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(236),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(231),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(230),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(219),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(217),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(215),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(232),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(246),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(254),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(264),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(265),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(269),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(277),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(284),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(285),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(311),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(337),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(338),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(343),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(344),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(345),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(247),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(417),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(413),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(411),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(410),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(402),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(398),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(397),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(391),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(390),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(389),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(388),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(387),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(386),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(382),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(381),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(377),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(376),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(375),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(374),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(373),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(372),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(371),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(369),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(367),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(664),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(8),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(421),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(416),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(415),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(385),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(383),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(368),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(362),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(357),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(356),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(352),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(342),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(340),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(332),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(315),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(309),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(308),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(306),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(305),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(300),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(291),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(290),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(288),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(283),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(282),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(281),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(280),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(276),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(260),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(257),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(256),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(250),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(249),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(248),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(243),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(239),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(238),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(236),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(231),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(230),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(219),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(217),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(215),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(232),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(246),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(254),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(264),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(265),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(269),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(277),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(284),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(285),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(347),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(311),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(337),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(338),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(341),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(343),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(344),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(345),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(346),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(247),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(296),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(420),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(417),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(413),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(411),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(410),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(402),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(398),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(397),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(396),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(393),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(391),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(390),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(389),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(388),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(387),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(386),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(382),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(381),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(378),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(377),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(376),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(375),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(374),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(373),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(372),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(371),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(369),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(367),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(545),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(15),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 51),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 51),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 9),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 9),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 20),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 20),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 9),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 9),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 51),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 51),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 20),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 20),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 22),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 22),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 22),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 22),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 12),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(61),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(671),
  [865] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(61),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(91),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(91),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(712),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 14),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(124),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(710),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(124),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 14),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(117),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(711),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(117),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 34),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 34),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(64),
  [992] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(64),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(159),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(159),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(714),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(182),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(182),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(713),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(206),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(206),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, .production_id = 19),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(78),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(78),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 14),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, .production_id = 26),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 14),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2), SHIFT_REPEAT(130),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(156),
  [1117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(156),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(110),
  [1131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(110),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(112),
  [1139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(112),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 14),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(119),
  [1167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(119),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(370),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(370),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(134),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(317),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(317),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(184),
  [1236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(184),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 29),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 24),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(675),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 22),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 9),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 22),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(678),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 9),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 29),
  [1281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 41), SHIFT_REPEAT(140),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 41),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 9),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 22),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2),
  [1306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(339),
  [1309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(339),
  [1312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(683),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 9),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 29),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 22),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 48),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 29),
  [1333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(692),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 49),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 29),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 52),
  [1348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(695),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 29),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 9),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(698),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 29),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 32),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [1388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(106),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 22),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 16),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 9),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 22),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 22),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 9),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 22),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 9),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 28), SHIFT_REPEAT(68),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 28),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 28), SHIFT_REPEAT(107),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 28),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 31), SHIFT_REPEAT(73),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 31),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(80),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, .production_id = 20),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, .production_id = 20),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 9),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, .production_id = 20),
  [1691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 28), SHIFT_REPEAT(380),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 28),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 11),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(98),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 4, .production_id = 22),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2), SHIFT_REPEAT(137),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 4, .production_id = 22),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 40),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 25),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 45), SHIFT_REPEAT(82),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 45),
  [1783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2), SHIFT_REPEAT(83),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 46),
  [1794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(55),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 28), SHIFT_REPEAT(97),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 28),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 28), SHIFT_REPEAT(531),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 28),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 9),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 4, .production_id = 22),
  [1823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 28), SHIFT_REPEAT(42),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 28),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 41), SHIFT_REPEAT(129),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 41),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 22),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 9),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 53),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 9),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 20),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 17),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [2005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [2017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [2023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 9),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 18),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [2041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [2047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 21),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [2061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, .production_id = 9),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 20),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, .production_id = 9),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, .production_id = 9),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [2087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, .production_id = 9),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [2107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, .production_id = 9),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [2121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [2123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 8),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, .production_id = 9),
  [2129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, .production_id = 9),
  [2131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, .production_id = 9),
  [2133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, .production_id = 9),
  [2135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 13),
  [2137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 9),
  [2139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, .production_id = 9),
  [2141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, .production_id = 9),
  [2143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, .production_id = 9),
  [2145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, .production_id = 9),
  [2147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, .production_id = 9),
  [2149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, .production_id = 9),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, .production_id = 9),
  [2153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, .production_id = 9),
  [2155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, .production_id = 9),
  [2157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, .production_id = 9),
  [2159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, .production_id = 9),
  [2161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, .production_id = 9),
  [2163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, .production_id = 9),
  [2165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, .production_id = 9),
  [2167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, .production_id = 9),
  [2169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 13),
  [2171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, .production_id = 9),
  [2173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 9),
  [2175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 9),
  [2177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 9),
  [2179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 9),
  [2181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [2183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [2185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 23),
  [2187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [2189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 9),
  [2191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 9),
  [2193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [2195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 9),
  [2197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 9),
  [2199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 9),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 53),
  [2207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 9),
  [2209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 9),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 9),
  [2215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 9),
  [2217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 9),
  [2219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 9),
  [2221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 9),
  [2223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 9),
  [2225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 9),
  [2227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 9),
  [2229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 9),
  [2231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 9),
  [2233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 9),
  [2235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 9),
  [2237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 9),
  [2239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 13),
  [2241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 56),
  [2243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 55),
  [2245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 9),
  [2247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 54),
  [2249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 9),
  [2251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 9),
  [2253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 9),
  [2255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 9),
  [2257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 9),
  [2259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, .production_id = 42),
  [2261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 9),
  [2263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 9),
  [2265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 9),
  [2267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 9),
  [2269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 9),
  [2271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 9),
  [2273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 9),
  [2275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2),
  [2277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 9),
  [2279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 9),
  [2281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 10),
  [2283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 9),
  [2285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 9),
  [2287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 9),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 9),
  [2293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 9),
  [2295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 9),
  [2297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 9),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 9),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 27),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 29),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [2319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [2321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 27),
  [2323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 30),
  [2325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 33),
  [2331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 27),
  [2333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 35),
  [2335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 35),
  [2337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [2339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 36),
  [2341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [2343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 3, .production_id = 35),
  [2345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 3, .production_id = 35),
  [2347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 38),
  [2349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 39),
  [2351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [2353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [2355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 42),
  [2357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 43),
  [2359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 44),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [2363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 3, .production_id = 35),
  [2365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, .production_id = 36),
  [2367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, .production_id = 38),
  [2369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 27),
  [2371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, .production_id = 19),
  [2373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 27),
  [2375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, .production_id = 29),
  [2377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 27),
  [2379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 47),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 40),
  [2387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 50),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, .production_id = 37),
  [2393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [2429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [2431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [2435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 15),
  [2439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2469] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [2485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ssh_config(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
