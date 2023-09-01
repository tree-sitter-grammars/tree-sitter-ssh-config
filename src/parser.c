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
#define STATE_COUNT 669
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 304
#define ALIAS_COUNT 0
#define TOKEN_COUNT 153
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 56

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
  sym_ipqos = 121,
  sym_verbosity = 122,
  sym_authentication = 123,
  sym_cipher = 124,
  sym_kex = 125,
  sym_key_sig = 126,
  sym_mac = 127,
  sym_protocol_version = 128,
  sym_sig = 129,
  aux_sym__file_token_token1 = 130,
  aux_sym__hosts_token_token1 = 131,
  aux_sym__hostname_token_token1 = 132,
  aux_sym__proxy_token_token1 = 133,
  sym_token = 134,
  anon_sym_DOLLAR = 135,
  sym__var_name = 136,
  anon_sym_DOLLAR_LBRACE = 137,
  anon_sym_RBRACE = 138,
  aux_sym__file_string_token1 = 139,
  anon_sym_yes = 140,
  anon_sym_no = 141,
  sym__number = 142,
  aux_sym_bytes_token1 = 143,
  aux_sym_time_token1 = 144,
  aux_sym_time_token2 = 145,
  aux_sym_time_token3 = 146,
  aux_sym_time_token4 = 147,
  aux_sym_time_token5 = 148,
  sym_comment = 149,
  aux_sym__sep_token1 = 150,
  sym__space = 151,
  sym__eol = 152,
  sym_config = 153,
  sym_host_declaration = 154,
  sym__declarations = 155,
  sym_parameter = 156,
  sym__add_keys_to_agent = 157,
  sym__address_family = 158,
  sym__batch_mode = 159,
  sym__bind_address = 160,
  sym__bind_interface = 161,
  sym__canonical_domains = 162,
  sym__canonicalize_fallback_local = 163,
  sym__canonicalize_hostname = 164,
  sym__canonicalize_max_dots = 165,
  sym__canonicalize_permitted_cnames = 166,
  sym__cnames_map = 167,
  sym__ca_signature_algorithms = 168,
  sym__certificate_file = 169,
  sym__check_host_ip = 170,
  sym__ciphers = 171,
  sym__clear_all_forwardings = 172,
  sym__compression = 173,
  sym__connection_attempts = 174,
  sym__connect_timeout = 175,
  sym__control_master = 176,
  sym__control_persist = 177,
  sym__control_path = 178,
  sym__enable_escape_command_line = 179,
  sym__enable_ssh_keysign = 180,
  sym__escape_char = 181,
  sym__exit_on_forward_failure = 182,
  sym__fingerprint_hash = 183,
  sym__fork_after_authentication = 184,
  sym__forward_agent = 185,
  sym__forward_x11 = 186,
  sym__forward_x11_timeout = 187,
  sym__forward_x11_trusted = 188,
  sym__global_known_hosts_file = 189,
  sym__gssapi_authentication = 190,
  sym__gssapi_delegate_credentials = 191,
  sym__hostbased_accepted_algorithms = 192,
  sym__hostbased_authentication = 193,
  sym__host_key_algorithms = 194,
  sym__host_key_alias = 195,
  sym__hostname = 196,
  sym__identities_only = 197,
  sym__identity_agent = 198,
  sym__identity_file = 199,
  sym__ignore_unknown = 200,
  sym__ipqos = 201,
  sym__kbd_interactive_authentication = 202,
  sym__kex_algorithms = 203,
  sym__known_hosts_command = 204,
  sym__local_command = 205,
  sym__local_forward = 206,
  sym__forward_value1 = 207,
  sym__forward_value2 = 208,
  sym__log_level = 209,
  sym__log_verbose = 210,
  sym__log_verbose_value = 211,
  sym__log_verbose_quoted = 212,
  sym__macs = 213,
  sym__no_host_authentication_for_localhost = 214,
  sym__number_of_password_prompts = 215,
  sym__password_authentication = 216,
  sym__permit_local_command = 217,
  sym__permit_remote_open = 218,
  sym__permit_remote_open_value = 219,
  sym__pkcs11_provider = 220,
  sym__port = 221,
  sym__preferred_authentications = 222,
  sym__proxy_command = 223,
  sym__proxy_jump = 224,
  sym__proxy_use_fdpass = 225,
  sym__pubkey_accepted_algorithms = 226,
  sym__pubkey_authentication = 227,
  sym__pubkey_authentication_arg = 228,
  sym__rekey_limit = 229,
  sym__remote_command = 230,
  sym__remote_forward = 231,
  sym__request_tty = 232,
  sym__required_rsa_size = 233,
  sym__revoked_host_keys = 234,
  sym__security_key_provider = 235,
  sym__send_env = 236,
  sym__send_env_value = 237,
  sym__server_alive_count_max = 238,
  sym__server_alive_interval = 239,
  sym__session_type = 240,
  sym__set_env = 241,
  sym__set_env_value = 242,
  sym__stdin_null = 243,
  sym__stream_local_bind_mask = 244,
  sym__stream_local_bind_unlink = 245,
  sym__strict_host_key_checking = 246,
  sym__file_token = 247,
  sym__hosts_token = 248,
  sym__hostname_token = 249,
  sym__proxy_token = 250,
  sym__var_value = 251,
  sym_variable = 252,
  sym__file_string = 253,
  sym__hosts_string = 254,
  sym__hostname_string = 255,
  aux_sym__proxy_string_content = 256,
  sym__proxy_string = 257,
  sym__token_string = 258,
  sym_string = 259,
  sym__file_pattern_vars = 260,
  sym_pattern = 261,
  sym__boolean = 262,
  sym_number = 263,
  sym_bytes = 264,
  sym_time = 265,
  sym__sep = 266,
  aux_sym_config_repeat1 = 267,
  aux_sym_host_declaration_repeat1 = 268,
  aux_sym__declarations_repeat1 = 269,
  aux_sym__canonical_domains_repeat1 = 270,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 271,
  aux_sym__cnames_map_repeat1 = 272,
  aux_sym__ca_signature_algorithms_repeat1 = 273,
  aux_sym__ciphers_repeat1 = 274,
  aux_sym__global_known_hosts_file_repeat1 = 275,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 276,
  aux_sym__ignore_unknown_repeat1 = 277,
  aux_sym__kex_algorithms_repeat1 = 278,
  aux_sym__local_command_repeat1 = 279,
  aux_sym__log_verbose_repeat1 = 280,
  aux_sym__log_verbose_repeat2 = 281,
  aux_sym__log_verbose_value_repeat1 = 282,
  aux_sym__log_verbose_quoted_repeat1 = 283,
  aux_sym__macs_repeat1 = 284,
  aux_sym__permit_remote_open_repeat1 = 285,
  aux_sym__preferred_authentications_repeat1 = 286,
  aux_sym__proxy_command_arg_repeat1 = 287,
  aux_sym__remote_command_repeat1 = 288,
  aux_sym__send_env_repeat1 = 289,
  aux_sym__send_env_value_repeat1 = 290,
  aux_sym__set_env_repeat1 = 291,
  aux_sym__file_string_repeat1 = 292,
  aux_sym__file_string_repeat2 = 293,
  aux_sym__hosts_string_repeat1 = 294,
  aux_sym__hosts_string_repeat2 = 295,
  aux_sym__hostname_string_repeat1 = 296,
  aux_sym__hostname_string_repeat2 = 297,
  aux_sym__proxy_string_repeat1 = 298,
  aux_sym__token_string_repeat1 = 299,
  aux_sym__token_string_repeat2 = 300,
  aux_sym__file_pattern_vars_repeat1 = 301,
  aux_sym__file_pattern_vars_repeat2 = 302,
  aux_sym_pattern_repeat1 = 303,
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
  field_name = 8,
  field_port = 9,
  field_source_domain_list = 10,
  field_target_domain_list = 11,
  field_user = 12,
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
  [field_name] = "name",
  [field_port] = "port",
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
  [8] = {.index = 28, .length = 2},
  [9] = {.index = 30, .length = 1},
  [10] = {.index = 31, .length = 4},
  [12] = {.index = 35, .length = 3},
  [14] = {.index = 38, .length = 1},
  [15] = {.index = 39, .length = 5},
  [16] = {.index = 44, .length = 4},
  [17] = {.index = 28, .length = 2},
  [19] = {.index = 48, .length = 3},
  [20] = {.index = 51, .length = 7},
  [21] = {.index = 58, .length = 3},
  [22] = {.index = 61, .length = 1},
  [23] = {.index = 62, .length = 9},
  [24] = {.index = 71, .length = 7},
  [26] = {.index = 78, .length = 1},
  [27] = {.index = 79, .length = 2},
  [28] = {.index = 81, .length = 4},
  [29] = {.index = 85, .length = 3},
  [30] = {.index = 88, .length = 6},
  [31] = {.index = 94, .length = 2},
  [33] = {.index = 61, .length = 1},
  [35] = {.index = 96, .length = 3},
  [36] = {.index = 99, .length = 2},
  [37] = {.index = 101, .length = 7},
  [38] = {.index = 108, .length = 7},
  [39] = {.index = 115, .length = 3},
  [40] = {.index = 118, .length = 6},
  [41] = {.index = 124, .length = 2},
  [42] = {.index = 124, .length = 2},
  [43] = {.index = 126, .length = 2},
  [44] = {.index = 128, .length = 4},
  [45] = {.index = 81, .length = 4},
  [46] = {.index = 132, .length = 2},
  [47] = {.index = 134, .length = 3},
  [48] = {.index = 137, .length = 3},
  [49] = {.index = 140, .length = 11},
  [50] = {.index = 151, .length = 4},
  [51] = {.index = 155, .length = 4},
  [52] = {.index = 159, .length = 3},
  [53] = {.index = 162, .length = 2},
  [54] = {.index = 162, .length = 2},
  [55] = {.index = 164, .length = 6},
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
    {field_argument, 2},
    {field_keyword, 0},
  [30] =
    {field_keyword, 0},
  [31] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [35] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [38] =
    {field_port, 0},
  [39] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [44] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [48] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [51] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [58] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [61] =
    {field_name, 1},
  [62] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [71] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [78] =
    {field_argument, 1},
  [79] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [81] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [85] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [88] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [94] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [96] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [99] =
    {field_bind_address, 0},
    {field_port, 2},
  [101] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_host, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
  [108] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [115] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [118] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [124] =
    {field_host, 0},
    {field_port, 2},
  [126] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [128] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [132] =
    {field_argument, 1},
    {field_argument, 2},
  [134] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [137] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [140] =
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
  [151] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [155] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [159] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [162] =
    {field_host, 1},
    {field_port, 3},
  [164] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_argument, 6},
    {field_keyword, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = sym_pattern,
  },
  [13] = {
    [0] = sym_string,
  },
  [17] = {
    [2] = sym_string,
  },
  [18] = {
    [0] = sym_variable,
  },
  [22] = {
    [1] = sym_variable,
  },
  [25] = {
    [1] = sym_variable,
  },
  [32] = {
    [0] = sym_pattern,
    [1] = sym_pattern,
    [2] = sym_pattern,
  },
  [34] = {
    [0] = sym_string,
    [1] = sym_string,
    [2] = sym_string,
  },
  [42] = {
    [0] = sym_string,
  },
  [45] = {
    [2] = sym_string,
  },
  [54] = {
    [1] = sym_string,
  },
  [55] = {
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
  [74] = 70,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
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
  [99] = 71,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 78,
  [105] = 105,
  [106] = 68,
  [107] = 70,
  [108] = 71,
  [109] = 109,
  [110] = 110,
  [111] = 110,
  [112] = 68,
  [113] = 68,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
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
  [138] = 68,
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
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 68,
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
  [272] = 272,
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
  [301] = 188,
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
  [658] = 653,
  [659] = 659,
  [660] = 653,
  [661] = 653,
  [662] = 653,
  [663] = 653,
  [664] = 626,
  [665] = 626,
  [666] = 626,
  [667] = 626,
  [668] = 626,
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
      if (eof) ADVANCE(1591);
      if (lookahead == '!') ADVANCE(1593);
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1760);
      if (lookahead == '%') ADVANCE(1675);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '+') ADVANCE(1614);
      if (lookahead == ',') ADVANCE(1611);
      if (lookahead == '-') ADVANCE(1615);
      if (lookahead == '2') ADVANCE(1674);
      if (lookahead == ':') ADVANCE(1612);
      if (lookahead == '=') ADVANCE(1733);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead == '@') ADVANCE(1711);
      if (lookahead == 'S') ADVANCE(1673);
      if (lookahead == '^') ADVANCE(1619);
      if (lookahead == 's') ADVANCE(1674);
      if (lookahead == '}') ADVANCE(1783);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1674);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1674);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1674);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1674);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'g' ||
          lookahead == 'k') ADVANCE(1674);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1674);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1809);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1593);
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1787);
      if (lookahead == '%') ADVANCE(1790);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1787);
      if (lookahead == '%') ADVANCE(1790);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1787);
      if (lookahead == '%') ADVANCE(1791);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1789);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1788);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1792);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == ',') ADVANCE(1611);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '-') ADVANCE(1615);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1727);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead != 0) ADVANCE(1784);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(1797);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'c') ADVANCE(520);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == 'y') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1801);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1802);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1803);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1804);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1800);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1798);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(1712);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(1799);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1760);
      if (lookahead == '%') ADVANCE(1790);
      if (lookahead == 'S') ADVANCE(1785);
      if (lookahead == 'n') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1787);
      if (lookahead == '%') ADVANCE(1790);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1787);
      if (lookahead == '%') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1787);
      if (lookahead == '%') ADVANCE(1791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1676);
      if (lookahead == '%') ADVANCE(1680);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1676);
      if (lookahead == '%') ADVANCE(1680);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '$') ADVANCE(1676);
      if (lookahead == '%') ADVANCE(1682);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '%') ADVANCE(1789);
      if (lookahead == 'n') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '%') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '%') ADVANCE(1788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '%') ADVANCE(1679);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '%') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '%') ADVANCE(1678);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '%') ADVANCE(1683);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '+') ADVANCE(1614);
      if (lookahead == '-') ADVANCE(1615);
      if (lookahead == '0') ADVANCE(1586);
      if (lookahead == '3') ADVANCE(350);
      if (lookahead == ':') ADVANCE(1612);
      if (lookahead == '=') ADVANCE(1806);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead == 'S') ADVANCE(1673);
      if (lookahead == '^') ADVANCE(1619);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'g') ADVANCE(584);
      if (lookahead == 'h') ADVANCE(527);
      if (lookahead == 'k') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 'u') ADVANCE(489);
      if (lookahead == 'w') ADVANCE(393);
      if (lookahead == 'y') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1807);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1587);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead == 'n') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead != 0) ADVANCE(1674);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1671);
      if (lookahead == '$') ADVANCE(1701);
      if (lookahead == '%') ADVANCE(1703);
      if (lookahead == '*') ADVANCE(1630);
      if (lookahead == '0') ADVANCE(1704);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1671);
      if (lookahead == '$') ADVANCE(1701);
      if (lookahead == '%') ADVANCE(1703);
      if (lookahead == '*') ADVANCE(1630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1671);
      if (lookahead == '$') ADVANCE(1761);
      if (lookahead == 'n') ADVANCE(1697);
      if (lookahead == 'y') ADVANCE(1693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1671);
      if (lookahead == '$') ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1671);
      if (lookahead == '*') ADVANCE(1630);
      if (lookahead == 'a') ADVANCE(1695);
      if (lookahead == 'n') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(1677);
      if (lookahead == '%') ADVANCE(1681);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1684);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == ',') ADVANCE(1611);
      if (lookahead == ':') ADVANCE(1612);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1784);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(1612);
      if (lookahead == '?') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1674);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(1631);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(480);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(317);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(403);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '@') ADVANCE(528);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(413);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(563);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(482);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(497);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(390);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(448);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '1') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '@') ADVANCE(513);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(595);
      if (lookahead == '4') ADVANCE(73);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(607);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(505);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(506);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(392);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(507);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(391);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(617);
      END_STATE();
    case 91:
      if (lookahead == '.') ADVANCE(320);
      END_STATE();
    case 92:
      if (lookahead == '.') ADVANCE(516);
      END_STATE();
    case 93:
      if (lookahead == '.') ADVANCE(322);
      END_STATE();
    case 94:
      if (lookahead == '.') ADVANCE(325);
      END_STATE();
    case 95:
      if (lookahead == '.') ADVANCE(330);
      END_STATE();
    case 96:
      if (lookahead == '.') ADVANCE(332);
      END_STATE();
    case 97:
      if (lookahead == '0') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == '0') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == '0') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == '1') ADVANCE(1582);
      if (lookahead == '2') ADVANCE(1582);
      if (lookahead == '3') ADVANCE(1582);
      if (lookahead == '4') ADVANCE(1582);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(1750);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(1752);
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 103:
      if (lookahead == '1') ADVANCE(216);
      END_STATE();
    case 104:
      if (lookahead == '1') ADVANCE(654);
      END_STATE();
    case 105:
      if (lookahead == '1') ADVANCE(1644);
      END_STATE();
    case 106:
      if (lookahead == '1') ADVANCE(1747);
      END_STATE();
    case 107:
      if (lookahead == '1') ADVANCE(1747);
      if (lookahead == '2') ADVANCE(178);
      END_STATE();
    case 108:
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 109:
      if (lookahead == '1') ADVANCE(1754);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(163);
      END_STATE();
    case 111:
      if (lookahead == '1') ADVANCE(127);
      if (lookahead == '6') ADVANCE(165);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(212);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(214);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(213);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(218);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(160);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(1310);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(217);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(220);
      END_STATE();
    case 126:
      if (lookahead == '2') ADVANCE(1750);
      END_STATE();
    case 127:
      if (lookahead == '2') ADVANCE(207);
      END_STATE();
    case 128:
      if (lookahead == '2') ADVANCE(1747);
      END_STATE();
    case 129:
      if (lookahead == '2') ADVANCE(1754);
      END_STATE();
    case 130:
      if (lookahead == '2') ADVANCE(169);
      END_STATE();
    case 131:
      if (lookahead == '2') ADVANCE(1753);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(99);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == '2') ADVANCE(211);
      if (lookahead == '9') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(174);
      if (lookahead == '3') ADVANCE(209);
      if (lookahead == '5') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(174);
      if (lookahead == '5') ADVANCE(115);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(47);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == '3') ADVANCE(208);
      if (lookahead == '5') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(51);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(179);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(106);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(101);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(183);
      if (lookahead == '3') ADVANCE(210);
      if (lookahead == '5') ADVANCE(149);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(183);
      if (lookahead == '5') ADVANCE(122);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(176);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(190);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 163:
      if (lookahead == '3') ADVANCE(98);
      END_STATE();
    case 164:
      if (lookahead == '4') ADVANCE(1750);
      END_STATE();
    case 165:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 166:
      if (lookahead == '4') ADVANCE(1747);
      END_STATE();
    case 167:
      if (lookahead == '4') ADVANCE(1754);
      END_STATE();
    case 168:
      if (lookahead == '5') ADVANCE(1640);
      END_STATE();
    case 169:
      if (lookahead == '5') ADVANCE(195);
      END_STATE();
    case 170:
      if (lookahead == '5') ADVANCE(1752);
      END_STATE();
    case 171:
      if (lookahead == '5') ADVANCE(103);
      END_STATE();
    case 172:
      if (lookahead == '5') ADVANCE(201);
      END_STATE();
    case 173:
      if (lookahead == '5') ADVANCE(171);
      END_STATE();
    case 174:
      if (lookahead == '5') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == '5') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == '5') ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == '5') ADVANCE(113);
      END_STATE();
    case 178:
      if (lookahead == '5') ADVANCE(198);
      END_STATE();
    case 179:
      if (lookahead == '5') ADVANCE(200);
      END_STATE();
    case 180:
      if (lookahead == '5') ADVANCE(204);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(114);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(203);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(199);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(120);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(121);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(119);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(181);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(186);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(187);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(124);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(191);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(222);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == '6') ADVANCE(1641);
      END_STATE();
    case 196:
      if (lookahead == '6') ADVANCE(1750);
      END_STATE();
    case 197:
      if (lookahead == '6') ADVANCE(1748);
      END_STATE();
    case 198:
      if (lookahead == '6') ADVANCE(1747);
      END_STATE();
    case 199:
      if (lookahead == '6') ADVANCE(1754);
      END_STATE();
    case 200:
      if (lookahead == '6') ADVANCE(52);
      END_STATE();
    case 201:
      if (lookahead == '6') ADVANCE(1753);
      END_STATE();
    case 202:
      if (lookahead == '6') ADVANCE(104);
      END_STATE();
    case 203:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 204:
      if (lookahead == '6') ADVANCE(220);
      END_STATE();
    case 205:
      if (lookahead == '6') ADVANCE(223);
      END_STATE();
    case 206:
      if (lookahead == '7') ADVANCE(202);
      END_STATE();
    case 207:
      if (lookahead == '8') ADVANCE(66);
      END_STATE();
    case 208:
      if (lookahead == '8') ADVANCE(166);
      END_STATE();
    case 209:
      if (lookahead == '8') ADVANCE(164);
      END_STATE();
    case 210:
      if (lookahead == '8') ADVANCE(167);
      END_STATE();
    case 211:
      if (lookahead == '8') ADVANCE(48);
      END_STATE();
    case 212:
      if (lookahead == '9') ADVANCE(1750);
      END_STATE();
    case 213:
      if (lookahead == '9') ADVANCE(1754);
      END_STATE();
    case 214:
      if (lookahead == '9') ADVANCE(52);
      END_STATE();
    case 215:
      if (lookahead == '9') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 216:
      if (lookahead == '9') ADVANCE(68);
      END_STATE();
    case 217:
      if (lookahead == '9') ADVANCE(71);
      END_STATE();
    case 218:
      if (lookahead == '9') ADVANCE(223);
      END_STATE();
    case 219:
      if (lookahead == '@') ADVANCE(513);
      END_STATE();
    case 220:
      if (lookahead == '@') ADVANCE(528);
      END_STATE();
    case 221:
      if (lookahead == '@') ADVANCE(529);
      END_STATE();
    case 222:
      if (lookahead == '@') ADVANCE(530);
      END_STATE();
    case 223:
      if (lookahead == '@') ADVANCE(531);
      END_STATE();
    case 224:
      if (lookahead == 'A') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1156);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1318);
      END_STATE();
    case 225:
      if (lookahead == 'A') ADVANCE(241);
      END_STATE();
    case 226:
      if (lookahead == 'A') ADVANCE(261);
      END_STATE();
    case 227:
      if (lookahead == 'B') ADVANCE(260);
      END_STATE();
    case 228:
      if (lookahead == 'B') ADVANCE(246);
      END_STATE();
    case 229:
      if (lookahead == 'C') ADVANCE(240);
      END_STATE();
    case 230:
      if (lookahead == 'E') ADVANCE(227);
      END_STATE();
    case 231:
      if (lookahead == 'E') ADVANCE(1062);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 232:
      if (lookahead == 'E') ADVANCE(1743);
      END_STATE();
    case 233:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 234:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 235:
      if (lookahead == 'F') ADVANCE(245);
      END_STATE();
    case 236:
      if (lookahead == 'G') ADVANCE(1744);
      END_STATE();
    case 237:
      if (lookahead == 'H') ADVANCE(263);
      END_STATE();
    case 238:
      if (lookahead == 'H') ADVANCE(264);
      END_STATE();
    case 239:
      if (lookahead == 'I') ADVANCE(234);
      END_STATE();
    case 240:
      if (lookahead == 'K') ADVANCE(1658);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(1743);
      END_STATE();
    case 242:
      if (lookahead == 'N') ADVANCE(235);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1174);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1317);
      END_STATE();
    case 243:
      if (lookahead == 'O') ADVANCE(761);
      if (lookahead == 'e') ADVANCE(1742);
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 244:
      if (lookahead == 'O') ADVANCE(980);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1119);
      END_STATE();
    case 245:
      if (lookahead == 'O') ADVANCE(1743);
      END_STATE();
    case 246:
      if (lookahead == 'O') ADVANCE(254);
      END_STATE();
    case 247:
      if (lookahead == 'O') ADVANCE(229);
      END_STATE();
    case 248:
      if (lookahead == 'O') ADVANCE(251);
      END_STATE();
    case 249:
      if (lookahead == 'R') ADVANCE(250);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(757);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(999);
      END_STATE();
    case 250:
      if (lookahead == 'R') ADVANCE(248);
      END_STATE();
    case 251:
      if (lookahead == 'R') ADVANCE(1743);
      END_STATE();
    case 252:
      if (lookahead == 'R') ADVANCE(228);
      END_STATE();
    case 253:
      if (lookahead == 'S') ADVANCE(1692);
      if (lookahead == 'n') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 254:
      if (lookahead == 'S') ADVANCE(232);
      END_STATE();
    case 255:
      if (lookahead == 'S') ADVANCE(247);
      END_STATE();
    case 256:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 257:
      if (lookahead == 'T') ADVANCE(1743);
      END_STATE();
    case 258:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 259:
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 260:
      if (lookahead == 'U') ADVANCE(236);
      END_STATE();
    case 261:
      if (lookahead == 'U') ADVANCE(258);
      END_STATE();
    case 262:
      if (lookahead == '^') ADVANCE(1637);
      if (lookahead == 'n') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1635);
      END_STATE();
    case 263:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 264:
      if (lookahead == '_') ADVANCE(255);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(1750);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(1754);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 284:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 286:
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 288:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 290:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 291:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 304:
      if (lookahead == 'b') ADVANCE(440);
      END_STATE();
    case 305:
      if (lookahead == 'b') ADVANCE(275);
      END_STATE();
    case 306:
      if (lookahead == 'b') ADVANCE(315);
      END_STATE();
    case 307:
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 308:
      if (lookahead == 'b') ADVANCE(524);
      END_STATE();
    case 309:
      if (lookahead == 'b') ADVANCE(517);
      END_STATE();
    case 310:
      if (lookahead == 'b') ADVANCE(470);
      END_STATE();
    case 311:
      if (lookahead == 'b') ADVANCE(526);
      END_STATE();
    case 312:
      if (lookahead == 'b') ADVANCE(594);
      END_STATE();
    case 313:
      if (lookahead == 'b') ADVANCE(303);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(1742);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(757);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(999);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(1746);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(1745);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(461);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(515);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(522);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(627);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(1716);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(1745);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(1717);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(1764);
      if (lookahead == 'n') ADVANCE(1771);
      if (lookahead == 's') ADVANCE(1776);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(570);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(609);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1585);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(1608);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(1722);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(1745);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 394:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(798);
      END_STATE();
    case 395:
      if (lookahead == 'f') ADVANCE(1741);
      END_STATE();
    case 396:
      if (lookahead == 'f') ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'f') ADVANCE(444);
      END_STATE();
    case 398:
      if (lookahead == 'f') ADVANCE(395);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(445);
      END_STATE();
    case 400:
      if (lookahead == 'g') ADVANCE(1747);
      END_STATE();
    case 401:
      if (lookahead == 'g') ADVANCE(407);
      END_STATE();
    case 402:
      if (lookahead == 'g') ADVANCE(384);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(494);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 406:
      if (lookahead == 'h') ADVANCE(550);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(535);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(266);
      if (lookahead == 'k') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      END_STATE();
    case 410:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 411:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(269);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(280);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(276);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(285);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 434:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(508);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 458:
      if (lookahead == 'k') ADVANCE(1595);
      END_STATE();
    case 459:
      if (lookahead == 'k') ADVANCE(1626);
      END_STATE();
    case 460:
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 461:
      if (lookahead == 'k') ADVANCE(371);
      END_STATE();
    case 462:
      if (lookahead == 'k') ADVANCE(86);
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 463:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(838);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1233);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1525);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1256);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 472:
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1395);
      END_STATE();
    case 473:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 474:
      if (lookahead == 'm') ADVANCE(1747);
      END_STATE();
    case 475:
      if (lookahead == 'm') ADVANCE(1751);
      END_STATE();
    case 476:
      if (lookahead == 'm') ADVANCE(1749);
      END_STATE();
    case 477:
      if (lookahead == 'm') ADVANCE(1596);
      END_STATE();
    case 478:
      if (lookahead == 'm') ADVANCE(1754);
      END_STATE();
    case 479:
      if (lookahead == 'm') ADVANCE(1746);
      END_STATE();
    case 480:
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 481:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(450);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1174);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1317);
      END_STATE();
    case 486:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 487:
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1254);
      END_STATE();
    case 488:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(1795);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(1625);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 532:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 533:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 534:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 535:
      if (lookahead == 'p') ADVANCE(641);
      END_STATE();
    case 536:
      if (lookahead == 'p') ADVANCE(451);
      END_STATE();
    case 537:
      if (lookahead == 'p') ADVANCE(372);
      END_STATE();
    case 538:
      if (lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 539:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 540:
      if (lookahead == 'p') ADVANCE(630);
      END_STATE();
    case 541:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 542:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 543:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 544:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 545:
      if (lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 546:
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 547:
      if (lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 548:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(1746);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(1583);
      if (lookahead == 'u') ADVANCE(549);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1324);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1298);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(1750);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(1793);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(1754);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 583:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 585:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 586:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 591:
      if (lookahead == 's') ADVANCE(585);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 594:
      if (lookahead == 's') ADVANCE(572);
      END_STATE();
    case 595:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 596:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 597:
      if (lookahead == 's') ADVANCE(589);
      END_STATE();
    case 598:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 599:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 600:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 602:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(1742);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(1598);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 638:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 639:
      if (lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 640:
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 641:
      if (lookahead == 'u') ADVANCE(618);
      END_STATE();
    case 642:
      if (lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 643:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 644:
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 645:
      if (lookahead == 'u') ADVANCE(637);
      END_STATE();
    case 646:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 647:
      if (lookahead == 'v') ADVANCE(382);
      END_STATE();
    case 648:
      if (lookahead == 'v') ADVANCE(365);
      END_STATE();
    case 649:
      if (lookahead == 'w') ADVANCE(1740);
      END_STATE();
    case 650:
      if (lookahead == 'w') ADVANCE(348);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(669);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1091);
      END_STATE();
    case 651:
      if (lookahead == 'w') ADVANCE(449);
      END_STATE();
    case 652:
      if (lookahead == 'w') ADVANCE(523);
      END_STATE();
    case 653:
      if (lookahead == 'x') ADVANCE(334);
      END_STATE();
    case 654:
      if (lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 655:
      if (lookahead == 'y') ADVANCE(1742);
      END_STATE();
    case 656:
      if (lookahead == 'y') ADVANCE(1745);
      END_STATE();
    case 657:
      if (lookahead == 'y') ADVANCE(308);
      END_STATE();
    case 658:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 659:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1324);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1298);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(854);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 660:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1449);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1171);
      END_STATE();
    case 661:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1084);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 662:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 663:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 664:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 665:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1302);
      END_STATE();
    case 666:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1401);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1323);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(764);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1327);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(837);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 667:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1122);
      END_STATE();
    case 668:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1563);
      END_STATE();
    case 669:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1076);
      END_STATE();
    case 670:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 671:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1334);
      END_STATE();
    case 672:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1300);
      END_STATE();
    case 673:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1560);
      END_STATE();
    case 674:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1086);
      END_STATE();
    case 675:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1127);
      END_STATE();
    case 676:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1087);
      END_STATE();
    case 677:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1529);
      END_STATE();
    case 678:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 679:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1125);
      END_STATE();
    case 680:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1329);
      END_STATE();
    case 681:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1414);
      END_STATE();
    case 682:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1079);
      END_STATE();
    case 683:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1080);
      END_STATE();
    case 684:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 685:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1088);
      END_STATE();
    case 686:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1117);
      END_STATE();
    case 687:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1475);
      END_STATE();
    case 688:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1319);
      END_STATE();
    case 689:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1377);
      END_STATE();
    case 690:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1336);
      END_STATE();
    case 691:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1411);
      END_STATE();
    case 692:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1339);
      END_STATE();
    case 693:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1082);
      END_STATE();
    case 694:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1340);
      END_STATE();
    case 695:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1102);
      END_STATE();
    case 696:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1342);
      END_STATE();
    case 697:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1083);
      END_STATE();
    case 698:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1402);
      END_STATE();
    case 699:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1113);
      END_STATE();
    case 700:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1354);
      END_STATE();
    case 701:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1490);
      END_STATE();
    case 702:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1399);
      END_STATE();
    case 703:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(813);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1210);
      END_STATE();
    case 704:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1092);
      END_STATE();
    case 705:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1182);
      END_STATE();
    case 706:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1093);
      END_STATE();
    case 707:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 708:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1009);
      END_STATE();
    case 709:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(958);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 710:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1307);
      END_STATE();
    case 711:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1184);
      END_STATE();
    case 712:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1138);
      END_STATE();
    case 713:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1465);
      END_STATE();
    case 714:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1100);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1008);
      END_STATE();
    case 716:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1187);
      END_STATE();
    case 717:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1139);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1495);
      END_STATE();
    case 719:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1416);
      END_STATE();
    case 720:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 721:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1192);
      END_STATE();
    case 722:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1471);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1433);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1195);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1431);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(960);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1027);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1499);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(961);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1500);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1501);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1502);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1503);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1504);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1505);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1506);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1114);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1115);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1116);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(797);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(872);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1537);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1538);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1539);
      END_STATE();
    case 743:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1540);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1541);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1542);
      END_STATE();
    case 746:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1065);
      END_STATE();
    case 747:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 748:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(676);
      END_STATE();
    case 749:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(905);
      END_STATE();
    case 750:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1098);
      END_STATE();
    case 751:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1265);
      END_STATE();
    case 752:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1031);
      END_STATE();
    case 753:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(684);
      END_STATE();
    case 754:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1526);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1544);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 755:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1074);
      END_STATE();
    case 756:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(968);
      END_STATE();
    case 757:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
      END_STATE();
    case 758:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1372);
      END_STATE();
    case 759:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(974);
      END_STATE();
    case 760:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1073);
      END_STATE();
    case 761:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(669);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1091);
      END_STATE();
    case 762:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1075);
      END_STATE();
    case 763:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(773);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1518);
      END_STATE();
    case 764:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1373);
      END_STATE();
    case 765:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1507);
      END_STATE();
    case 766:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1231);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1242);
      END_STATE();
    case 767:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1439);
      END_STATE();
    case 768:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 769:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1257);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1212);
      END_STATE();
    case 770:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(713);
      END_STATE();
    case 771:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(685);
      END_STATE();
    case 772:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 773:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(864);
      END_STATE();
    case 774:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      END_STATE();
    case 775:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(697);
      END_STATE();
    case 776:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(699);
      END_STATE();
    case 777:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(847);
      END_STATE();
    case 778:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 779:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      END_STATE();
    case 780:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1497);
      END_STATE();
    case 781:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1348);
      END_STATE();
    case 782:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1211);
      END_STATE();
    case 783:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1290);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1527);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1417);
      END_STATE();
    case 784:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 785:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1291);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1284);
      END_STATE();
    case 786:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 787:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1292);
      END_STATE();
    case 788:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 789:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1293);
      END_STATE();
    case 790:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(731);
      END_STATE();
    case 791:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1294);
      END_STATE();
    case 792:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 793:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 794:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 795:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 796:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(925);
      END_STATE();
    case 797:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1521);
      END_STATE();
    case 798:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1063);
      END_STATE();
    case 799:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 800:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(739);
      END_STATE();
    case 801:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1666);
      END_STATE();
    case 802:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1667);
      END_STATE();
    case 803:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1709);
      END_STATE();
    case 804:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1719);
      END_STATE();
    case 805:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1720);
      END_STATE();
    case 806:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1132);
      END_STATE();
    case 807:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1646);
      END_STATE();
    case 808:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1665);
      END_STATE();
    case 809:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1689);
      END_STATE();
    case 810:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(798);
      END_STATE();
    case 811:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(703);
      END_STATE();
    case 812:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1000);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 813:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(829);
      END_STATE();
    case 814:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(782);
      END_STATE();
    case 815:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1353);
      END_STATE();
    case 816:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1017);
      END_STATE();
    case 817:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1580);
      END_STATE();
    case 818:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(841);
      END_STATE();
    case 819:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(870);
      END_STATE();
    case 820:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 821:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(940);
      END_STATE();
    case 822:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1253);
      END_STATE();
    case 823:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(892);
      END_STATE();
    case 824:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(895);
      END_STATE();
    case 825:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1309);
      END_STATE();
    case 826:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1108);
      END_STATE();
    case 827:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1312);
      END_STATE();
    case 828:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(919);
      END_STATE();
    case 829:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1364);
      END_STATE();
    case 830:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(984);
      END_STATE();
    case 831:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 832:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 833:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 834:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      END_STATE();
    case 835:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1062);
      END_STATE();
    case 836:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      END_STATE();
    case 837:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1561);
      END_STATE();
    case 838:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 839:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 840:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1655);
      END_STATE();
    case 841:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1600);
      END_STATE();
    case 842:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1669);
      END_STATE();
    case 843:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 844:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1730);
      END_STATE();
    case 845:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(946);
      END_STATE();
    case 846:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1659);
      END_STATE();
    case 847:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1602);
      END_STATE();
    case 848:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1616);
      END_STATE();
    case 849:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1723);
      END_STATE();
    case 850:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 851:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1638);
      END_STATE();
    case 852:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1647);
      END_STATE();
    case 853:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1632);
      END_STATE();
    case 854:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 855:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 856:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1576);
      END_STATE();
    case 857:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1176);
      END_STATE();
    case 858:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 859:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1570);
      END_STATE();
    case 860:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 861:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 862:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 863:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1332);
      END_STATE();
    case 864:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1313);
      END_STATE();
    case 865:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1579);
      END_STATE();
    case 866:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 867:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 868:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1352);
      END_STATE();
    case 869:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1572);
      END_STATE();
    case 870:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1168);
      END_STATE();
    case 871:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 872:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 873:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1328);
      END_STATE();
    case 874:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 875:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 876:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 877:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 878:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 879:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 880:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1397);
      END_STATE();
    case 881:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 882:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 883:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1350);
      END_STATE();
    case 884:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1330);
      END_STATE();
    case 885:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 886:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 887:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1259);
      END_STATE();
    case 888:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 889:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 890:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1320);
      END_STATE();
    case 891:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 892:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1321);
      END_STATE();
    case 893:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1326);
      END_STATE();
    case 894:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 895:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1322);
      END_STATE();
    case 896:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 897:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1392);
      END_STATE();
    case 898:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 899:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 900:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 901:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1337);
      END_STATE();
    case 902:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 903:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1571);
      END_STATE();
    case 904:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 905:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1335);
      END_STATE();
    case 906:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1573);
      END_STATE();
    case 907:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1409);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1343);
      END_STATE();
    case 908:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 909:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 910:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 911:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1412);
      END_STATE();
    case 912:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1194);
      END_STATE();
    case 913:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1347);
      END_STATE();
    case 914:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1197);
      END_STATE();
    case 915:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1202);
      END_STATE();
    case 917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 918:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 919:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1207);
      END_STATE();
    case 920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1264);
      END_STATE();
    case 921:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 922:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 923:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 924:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 925:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1316);
      END_STATE();
    case 926:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1216);
      END_STATE();
    case 927:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 928:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1218);
      END_STATE();
    case 929:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 930:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1220);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1221);
      END_STATE();
    case 932:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1222);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1223);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 937:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1303);
      END_STATE();
    case 938:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(825);
      END_STATE();
    case 939:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(679);
      END_STATE();
    case 940:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(708);
      END_STATE();
    case 941:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1496);
      END_STATE();
    case 942:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(707);
      END_STATE();
    case 943:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(877);
      END_STATE();
    case 944:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1252);
      END_STATE();
    case 945:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1022);
      END_STATE();
    case 946:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(714);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1276);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(668);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(917);
      END_STATE();
    case 947:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1030);
      END_STATE();
    case 948:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1281);
      END_STATE();
    case 949:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1033);
      END_STATE();
    case 950:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1286);
      END_STATE();
    case 951:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1739);
      END_STATE();
    case 952:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1183);
      END_STATE();
    case 953:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1278);
      END_STATE();
    case 954:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1159);
      END_STATE();
    case 955:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(913);
      END_STATE();
    case 956:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1386);
      END_STATE();
    case 957:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(868);
      END_STATE();
    case 958:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(912);
      END_STATE();
    case 959:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(722);
      END_STATE();
    case 960:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(914);
      END_STATE();
    case 961:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(915);
      END_STATE();
    case 962:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1283);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 963:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1285);
      END_STATE();
    case 964:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1287);
      END_STATE();
    case 965:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1288);
      END_STATE();
    case 966:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1628);
      END_STATE();
    case 967:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1639);
      END_STATE();
    case 968:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1124);
      END_STATE();
    case 969:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(863);
      END_STATE();
    case 970:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1128);
      END_STATE();
    case 971:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(698);
      END_STATE();
    case 972:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(878);
      END_STATE();
    case 973:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1131);
      END_STATE();
    case 974:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      END_STATE();
    case 975:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(881);
      END_STATE();
    case 976:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1135);
      END_STATE();
    case 977:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1068);
      END_STATE();
    case 978:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1136);
      END_STATE();
    case 979:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1137);
      END_STATE();
    case 980:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1254);
      END_STATE();
    case 981:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1270);
      END_STATE();
    case 982:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1271);
      END_STATE();
    case 983:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1273);
      END_STATE();
    case 984:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1282);
      END_STATE();
    case 985:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1275);
      END_STATE();
    case 986:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1277);
      END_STATE();
    case 987:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(926);
      END_STATE();
    case 988:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(927);
      END_STATE();
    case 989:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(928);
      END_STATE();
    case 990:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(929);
      END_STATE();
    case 991:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(930);
      END_STATE();
    case 992:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(931);
      END_STATE();
    case 993:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(932);
      END_STATE();
    case 994:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(933);
      END_STATE();
    case 995:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1156);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1318);
      END_STATE();
    case 996:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 997:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(952);
      END_STATE();
    case 998:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(945);
      END_STATE();
    case 999:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1477);
      END_STATE();
    case 1000:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      END_STATE();
    case 1001:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1297);
      END_STATE();
    case 1002:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1263);
      END_STATE();
    case 1003:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1438);
      END_STATE();
    case 1004:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1440);
      END_STATE();
    case 1005:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1451);
      END_STATE();
    case 1006:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 1007:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1094);
      END_STATE();
    case 1008:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1193);
      END_STATE();
    case 1009:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1106);
      END_STATE();
    case 1010:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1178);
      END_STATE();
    case 1011:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1441);
      END_STATE();
    case 1012:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1201);
      END_STATE();
    case 1013:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1476);
      END_STATE();
    case 1014:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(726);
      END_STATE();
    case 1015:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 1016:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(768);
      END_STATE();
    case 1017:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1173);
      END_STATE();
    case 1018:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 1019:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(954);
      END_STATE();
    case 1020:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1180);
      END_STATE();
    case 1021:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1134);
      END_STATE();
    case 1022:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 1023:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1177);
      END_STATE();
    case 1024:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1548);
      END_STATE();
    case 1025:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1279);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1021);
      END_STATE();
    case 1026:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1549);
      END_STATE();
    case 1027:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1103);
      END_STATE();
    case 1028:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1190);
      END_STATE();
    case 1029:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1240);
      END_STATE();
    case 1030:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1104);
      END_STATE();
    case 1031:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1189);
      END_STATE();
    case 1032:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 1033:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1105);
      END_STATE();
    case 1034:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1243);
      END_STATE();
    case 1035:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1244);
      END_STATE();
    case 1036:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1420);
      END_STATE();
    case 1037:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1246);
      END_STATE();
    case 1038:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1247);
      END_STATE();
    case 1039:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 1040:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1266);
      END_STATE();
    case 1041:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1250);
      END_STATE();
    case 1042:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1251);
      END_STATE();
    case 1043:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1142);
      END_STATE();
    case 1044:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(824);
      END_STATE();
    case 1045:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1481);
      END_STATE();
    case 1046:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1493);
      END_STATE();
    case 1047:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1280);
      END_STATE();
    case 1048:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1536);
      END_STATE();
    case 1049:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1483);
      END_STATE();
    case 1050:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1485);
      END_STATE();
    case 1051:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1488);
      END_STATE();
    case 1052:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 1053:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 1054:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 1055:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 1056:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(792);
      END_STATE();
    case 1057:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 1058:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      END_STATE();
    case 1059:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 1060:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1735);
      END_STATE();
    case 1061:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1738);
      END_STATE();
    case 1062:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(838);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1233);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1525);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1256);
      END_STATE();
    case 1063:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(856);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 1064:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(670);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(680);
      END_STATE();
    case 1065:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(859);
      END_STATE();
    case 1066:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(861);
      END_STATE();
    case 1067:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(865);
      END_STATE();
    case 1068:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(869);
      END_STATE();
    case 1069:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(879);
      END_STATE();
    case 1070:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1215);
      END_STATE();
    case 1071:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(906);
      END_STATE();
    case 1072:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1203);
      END_STATE();
    case 1073:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1023);
      END_STATE();
    case 1074:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(981);
      END_STATE();
    case 1075:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1110);
      END_STATE();
    case 1076:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(766);
      END_STATE();
    case 1077:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 1078:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1668);
      END_STATE();
    case 1079:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 1080:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(962);
      END_STATE();
    case 1081:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1734);
      END_STATE();
    case 1082:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1729);
      END_STATE();
    case 1083:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1604);
      END_STATE();
    case 1084:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1095);
      END_STATE();
    case 1085:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1400);
      END_STATE();
    case 1086:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(953);
      END_STATE();
    case 1087:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1070);
      END_STATE();
    case 1088:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 1089:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(753);
      END_STATE();
    case 1090:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1043);
      END_STATE();
    case 1091:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(898);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(873);
      END_STATE();
    case 1092:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1112);
      END_STATE();
    case 1093:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1024);
      END_STATE();
    case 1094:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1566);
      END_STATE();
    case 1095:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      END_STATE();
    case 1096:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1081);
      END_STATE();
    case 1097:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1567);
      END_STATE();
    case 1098:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(839);
      END_STATE();
    case 1099:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1267);
      END_STATE();
    case 1100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1089);
      END_STATE();
    case 1101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(858);
      END_STATE();
    case 1102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1391);
      END_STATE();
    case 1103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      END_STATE();
    case 1104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 1105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(852);
      END_STATE();
    case 1106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1534);
      END_STATE();
    case 1107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1010);
      END_STATE();
    case 1108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 1109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1269);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(902);
      END_STATE();
    case 1110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1272);
      END_STATE();
    case 1111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1274);
      END_STATE();
    case 1112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(950);
      END_STATE();
    case 1113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(986);
      END_STATE();
    case 1114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(963);
      END_STATE();
    case 1115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(964);
      END_STATE();
    case 1116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(965);
      END_STATE();
    case 1117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 1118:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1299);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1179);
      END_STATE();
    case 1119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(749);
      END_STATE();
    case 1120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1296);
      END_STATE();
    case 1121:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1129);
      END_STATE();
    case 1122:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1099);
      END_STATE();
    case 1123:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1304);
      END_STATE();
    case 1124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1237);
      END_STATE();
    case 1125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1007);
      END_STATE();
    case 1126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(723);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(692);
      END_STATE();
    case 1127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(840);
      END_STATE();
    case 1128:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1378);
      END_STATE();
    case 1129:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(705);
      END_STATE();
    case 1130:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(715);
      END_STATE();
    case 1131:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1383);
      END_STATE();
    case 1132:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(702);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1188);
      END_STATE();
    case 1133:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(673);
      END_STATE();
    case 1134:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(887);
      END_STATE();
    case 1135:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1387);
      END_STATE();
    case 1136:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1390);
      END_STATE();
    case 1137:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1393);
      END_STATE();
    case 1138:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(850);
      END_STATE();
    case 1139:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(897);
      END_STATE();
    case 1140:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1003);
      END_STATE();
    case 1141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1305);
      END_STATE();
    case 1142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1011);
      END_STATE();
    case 1143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1046);
      END_STATE();
    case 1144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1268);
      END_STATE();
    case 1145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(711);
      END_STATE();
    case 1146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(920);
      END_STATE();
    case 1147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(716);
      END_STATE();
    case 1148:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(720);
      END_STATE();
    case 1149:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(721);
      END_STATE();
    case 1150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(724);
      END_STATE();
    case 1151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1145);
      END_STATE();
    case 1152:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1147);
      END_STATE();
    case 1153:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1148);
      END_STATE();
    case 1154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1149);
      END_STATE();
    case 1155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1150);
      END_STATE();
    case 1156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(957);
      END_STATE();
    case 1157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1621);
      END_STATE();
    case 1158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1660);
      END_STATE();
    case 1159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1633);
      END_STATE();
    case 1160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1690);
      END_STATE();
    case 1161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1648);
      END_STATE();
    case 1162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1715);
      END_STATE();
    case 1163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1688);
      END_STATE();
    case 1164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1642);
      END_STATE();
    case 1165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1652);
      END_STATE();
    case 1166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1662);
      END_STATE();
    case 1167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1663);
      END_STATE();
    case 1168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1543);
      END_STATE();
    case 1169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1533);
      END_STATE();
    case 1170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(948);
      END_STATE();
    case 1171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      END_STATE();
    case 1172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(997);
      END_STATE();
    case 1173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(956);
      END_STATE();
    case 1174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1258);
      END_STATE();
    case 1175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1016);
      END_STATE();
    case 1176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1480);
      END_STATE();
    case 1177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      END_STATE();
    case 1178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1061);
      END_STATE();
    case 1179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1331);
      END_STATE();
    case 1180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1486);
      END_STATE();
    case 1181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1169);
      END_STATE();
    case 1182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 1183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 1184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 1185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1453);
      END_STATE();
    case 1186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1097);
      END_STATE();
    case 1187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 1188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      END_STATE();
    case 1189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 1190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1454);
      END_STATE();
    case 1191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 1192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(809);
      END_STATE();
    case 1193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1381);
      END_STATE();
    case 1194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1442);
      END_STATE();
    case 1195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 1196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1435);
      END_STATE();
    case 1197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1443);
      END_STATE();
    case 1198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1444);
      END_STATE();
    case 1199:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1482);
      END_STATE();
    case 1200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1389);
      END_STATE();
    case 1201:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 1202:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(955);
      END_STATE();
    case 1203:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 1204:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      END_STATE();
    case 1205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 1206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1498);
      END_STATE();
    case 1207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1461);
      END_STATE();
    case 1208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1072);
      END_STATE();
    case 1209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(944);
      END_STATE();
    case 1210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1489);
      END_STATE();
    case 1211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 1212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1492);
      END_STATE();
    case 1213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(982);
      END_STATE();
    case 1214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(985);
      END_STATE();
    case 1215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1295);
      END_STATE();
    case 1216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1508);
      END_STATE();
    case 1217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1509);
      END_STATE();
    case 1218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1510);
      END_STATE();
    case 1219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1511);
      END_STATE();
    case 1220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1512);
      END_STATE();
    case 1221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1513);
      END_STATE();
    case 1222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1514);
      END_STATE();
    case 1223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1515);
      END_STATE();
    case 1224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1395);
      END_STATE();
    case 1225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(761);
      END_STATE();
    case 1226:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(980);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1119);
      END_STATE();
    case 1227:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1551);
      END_STATE();
    case 1228:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1545);
      END_STATE();
    case 1229:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 1230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1175);
      END_STATE();
    case 1231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1121);
      END_STATE();
    case 1232:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(937);
      END_STATE();
    case 1233:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1460);
      END_STATE();
    case 1234:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1077);
      END_STATE();
    case 1235:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1374);
      END_STATE();
    case 1236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1170);
      END_STATE();
    case 1237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(818);
      END_STATE();
    case 1238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1311);
      END_STATE();
    case 1239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1157);
      END_STATE();
    case 1241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1186);
      END_STATE();
    case 1242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1325);
      END_STATE();
    case 1243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1161);
      END_STATE();
    case 1244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1162);
      END_STATE();
    case 1245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 1246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1163);
      END_STATE();
    case 1247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1164);
      END_STATE();
    case 1248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      END_STATE();
    case 1249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1345);
      END_STATE();
    case 1250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1166);
      END_STATE();
    case 1251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1167);
      END_STATE();
    case 1252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1369);
      END_STATE();
    case 1253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1466);
      END_STATE();
    case 1254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1403);
      END_STATE();
    case 1255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1553);
      END_STATE();
    case 1256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1066);
      END_STATE();
    case 1257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1535);
      END_STATE();
    case 1258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 1259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 1260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1130);
      END_STATE();
    case 1261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1141);
      END_STATE();
    case 1262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1196);
      END_STATE();
    case 1263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1185);
      END_STATE();
    case 1264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1532);
      END_STATE();
    case 1265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1419);
      END_STATE();
    case 1266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1200);
      END_STATE();
    case 1267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 1268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1468);
      END_STATE();
    case 1269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 1270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1424);
      END_STATE();
    case 1271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1413);
      END_STATE();
    case 1272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 1273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1415);
      END_STATE();
    case 1274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 1275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1421);
      END_STATE();
    case 1276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1422);
      END_STATE();
    case 1277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1423);
      END_STATE();
    case 1278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1357);
      END_STATE();
    case 1279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1205);
      END_STATE();
    case 1280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1209);
      END_STATE();
    case 1281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1358);
      END_STATE();
    case 1282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1432);
      END_STATE();
    case 1283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1361);
      END_STATE();
    case 1284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1363);
      END_STATE();
    case 1285:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1365);
      END_STATE();
    case 1286:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1287:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 1288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1368);
      END_STATE();
    case 1289:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1550);
      END_STATE();
    case 1290:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1151);
      END_STATE();
    case 1291:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1152);
      END_STATE();
    case 1292:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1153);
      END_STATE();
    case 1293:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1154);
      END_STATE();
    case 1294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1155);
      END_STATE();
    case 1295:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1559);
      END_STATE();
    case 1296:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1710);
      END_STATE();
    case 1297:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1617);
      END_STATE();
    case 1298:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(969);
      END_STATE();
    case 1299:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1359);
      END_STATE();
    case 1300:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(996);
      END_STATE();
    case 1301:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1360);
      END_STATE();
    case 1302:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(860);
      END_STATE();
    case 1303:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(725);
      END_STATE();
    case 1304:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1464);
      END_STATE();
    case 1305:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1467);
      END_STATE();
    case 1306:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(844);
      END_STATE();
    case 1307:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(924);
      END_STATE();
    case 1308:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(896);
      END_STATE();
    case 1309:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(719);
      END_STATE();
    case 1310:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1341);
      END_STATE();
    case 1311:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(885);
      END_STATE();
    case 1312:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1344);
      END_STATE();
    case 1313:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1469);
      END_STATE();
    case 1314:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1262);
      END_STATE();
    case 1315:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1370);
      END_STATE();
    case 1316:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1516);
      END_STATE();
    case 1317:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1235);
      END_STATE();
    case 1318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 1319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1634);
      END_STATE();
    case 1320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1624);
      END_STATE();
    case 1321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1706);
      END_STATE();
    case 1322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1725);
      END_STATE();
    case 1323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1140);
      END_STATE();
    case 1324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1450);
      END_STATE();
    case 1325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1555);
      END_STATE();
    case 1326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1547);
      END_STATE();
    case 1327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1437);
      END_STATE();
    case 1328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 1329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(799);
      END_STATE();
    case 1330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 1331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1234);
      END_STATE();
    case 1332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 1333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(833);
      END_STATE();
    case 1334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 1335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1232);
      END_STATE();
    case 1336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 1337:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 1338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(855);
      END_STATE();
    case 1339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1410);
      END_STATE();
    case 1340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 1341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1228);
      END_STATE();
    case 1342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(805);
      END_STATE();
    case 1343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 1344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1261);
      END_STATE();
    case 1345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 1346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(936);
      END_STATE();
    case 1347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 1348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 1349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(851);
      END_STATE();
    case 1350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 1351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 1352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1301);
      END_STATE();
    case 1353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1418);
      END_STATE();
    case 1354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(816);
      END_STATE();
    case 1355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1005);
      END_STATE();
    case 1356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1346);
      END_STATE();
    case 1357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1013);
      END_STATE();
    case 1358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1556);
      END_STATE();
    case 1359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 1360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 1361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1045);
      END_STATE();
    case 1362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1143);
      END_STATE();
    case 1363:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1557);
      END_STATE();
    case 1364:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 1365:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1049);
      END_STATE();
    case 1366:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1558);
      END_STATE();
    case 1367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1050);
      END_STATE();
    case 1368:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1051);
      END_STATE();
    case 1369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1370:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1289);
      END_STATE();
    case 1371:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 1372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1685);
      END_STATE();
    case 1373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 1374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1661);
      END_STATE();
    case 1375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1618);
      END_STATE();
    case 1376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1601);
      END_STATE();
    case 1377:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1654);
      END_STATE();
    case 1378:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1664);
      END_STATE();
    case 1379:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1713);
      END_STATE();
    case 1380:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1724);
      END_STATE();
    case 1381:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1603);
      END_STATE();
    case 1382:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1651);
      END_STATE();
    case 1383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1653);
      END_STATE();
    case 1384:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1622);
      END_STATE();
    case 1385:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1606);
      END_STATE();
    case 1386:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1620);
      END_STATE();
    case 1387:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1613);
      END_STATE();
    case 1388:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1687);
      END_STATE();
    case 1389:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1708);
      END_STATE();
    case 1390:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1714);
      END_STATE();
    case 1391:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1649);
      END_STATE();
    case 1392:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1607);
      END_STATE();
    case 1393:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1650);
      END_STATE();
    case 1394:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1552);
      END_STATE();
    case 1395:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1436);
      END_STATE();
    case 1396:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1002);
      END_STATE();
    case 1397:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(977);
      END_STATE();
    case 1398:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(939);
      END_STATE();
    case 1399:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1060);
      END_STATE();
    case 1400:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      END_STATE();
    case 1401:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 1402:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(967);
      END_STATE();
    case 1403:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1457);
      END_STATE();
    case 1404:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1314);
      END_STATE();
    case 1405:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(787);
      END_STATE();
    case 1406:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1029);
      END_STATE();
    case 1407:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1398);
      END_STATE();
    case 1408:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 1409:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1479);
      END_STATE();
    case 1410:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 1411:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1018);
      END_STATE();
    case 1412:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1376);
      END_STATE();
    case 1413:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1458);
      END_STATE();
    case 1414:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      END_STATE();
    case 1415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1484);
      END_STATE();
    case 1416:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1379);
      END_STATE();
    case 1417:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      END_STATE();
    case 1418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 1419:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      END_STATE();
    case 1420:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1446);
      END_STATE();
    case 1421:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1463);
      END_STATE();
    case 1422:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1478);
      END_STATE();
    case 1423:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1448);
      END_STATE();
    case 1424:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1456);
      END_STATE();
    case 1425:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1459);
      END_STATE();
    case 1426:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1241);
      END_STATE();
    case 1427:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1472);
      END_STATE();
    case 1428:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(778);
      END_STATE();
    case 1429:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1019);
      END_STATE();
    case 1430:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1554);
      END_STATE();
    case 1431:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1430);
      END_STATE();
    case 1432:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1487);
      END_STATE();
    case 1433:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1491);
      END_STATE();
    case 1434:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(949);
      END_STATE();
    case 1435:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(935);
      END_STATE();
    case 1436:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1592);
      END_STATE();
    case 1437:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1707);
      END_STATE();
    case 1438:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1109);
      END_STATE();
    case 1439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 1440:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1014);
      END_STATE();
    case 1441:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1718);
      END_STATE();
    case 1442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1643);
      END_STATE();
    case 1443:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1657);
      END_STATE();
    case 1444:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1594);
      END_STATE();
    case 1445:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1623);
      END_STATE();
    case 1446:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1627);
      END_STATE();
    case 1447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1645);
      END_STATE();
    case 1448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1686);
      END_STATE();
    case 1449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(756);
      END_STATE();
    case 1450:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(998);
      END_STATE();
    case 1451:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1575);
      END_STATE();
    case 1452:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(966);
      END_STATE();
    case 1453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1574);
      END_STATE();
    case 1454:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(971);
      END_STATE();
    case 1455:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1565);
      END_STATE();
    case 1456:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1001);
      END_STATE();
    case 1457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(677);
      END_STATE();
    case 1458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1405);
      END_STATE();
    case 1459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1245);
      END_STATE();
    case 1460:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(921);
      END_STATE();
    case 1461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1015);
      END_STATE();
    case 1462:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 1463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1434);
      END_STATE();
    case 1464:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1384);
      END_STATE();
    case 1465:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(899);
      END_STATE();
    case 1466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1385);
      END_STATE();
    case 1467:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1388);
      END_STATE();
    case 1468:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(889);
      END_STATE();
    case 1469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(888);
      END_STATE();
    case 1470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(875);
      END_STATE();
    case 1471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(874);
      END_STATE();
    case 1472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(891);
      END_STATE();
    case 1473:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(894);
      END_STATE();
    case 1474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(975);
      END_STATE();
    case 1475:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1530);
      END_STATE();
    case 1476:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(970);
      END_STATE();
    case 1477:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1236);
      END_STATE();
    case 1478:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1479:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1462);
      END_STATE();
    case 1480:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 1481:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1482:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1483:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(976);
      END_STATE();
    case 1484:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 1485:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(978);
      END_STATE();
    case 1486:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      END_STATE();
    case 1487:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1071);
      END_STATE();
    case 1488:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(979);
      END_STATE();
    case 1489:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(884);
      END_STATE();
    case 1490:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1470);
      END_STATE();
    case 1491:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      END_STATE();
    case 1492:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(893);
      END_STATE();
    case 1493:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1473);
      END_STATE();
    case 1494:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1577);
      END_STATE();
    case 1495:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1047);
      END_STATE();
    case 1496:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(910);
      END_STATE();
    case 1497:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1026);
      END_STATE();
    case 1498:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 1499:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1034);
      END_STATE();
    case 1500:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1035);
      END_STATE();
    case 1501:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1037);
      END_STATE();
    case 1502:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1038);
      END_STATE();
    case 1503:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1039);
      END_STATE();
    case 1504:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1040);
      END_STATE();
    case 1505:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 1506:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1042);
      END_STATE();
    case 1507:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(983);
      END_STATE();
    case 1508:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      END_STATE();
    case 1509:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1053);
      END_STATE();
    case 1510:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      END_STATE();
    case 1511:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1055);
      END_STATE();
    case 1512:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 1513:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1057);
      END_STATE();
    case 1514:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 1515:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1059);
      END_STATE();
    case 1516:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(923);
      END_STATE();
    case 1517:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(987);
      END_STATE();
    case 1518:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(988);
      END_STATE();
    case 1519:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      END_STATE();
    case 1520:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(990);
      END_STATE();
    case 1521:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(991);
      END_STATE();
    case 1522:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(992);
      END_STATE();
    case 1523:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1524:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(994);
      END_STATE();
    case 1525:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(907);
      END_STATE();
    case 1526:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1355);
      END_STATE();
    case 1527:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1120);
      END_STATE();
    case 1528:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1208);
      END_STATE();
    case 1529:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1474);
      END_STATE();
    case 1530:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1351);
      END_STATE();
    case 1531:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1445);
      END_STATE();
    case 1532:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1447);
      END_STATE();
    case 1533:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1096);
      END_STATE();
    case 1534:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1349);
      END_STATE();
    case 1535:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1199);
      END_STATE();
    case 1536:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1427);
      END_STATE();
    case 1537:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1517);
      END_STATE();
    case 1538:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1519);
      END_STATE();
    case 1539:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1520);
      END_STATE();
    case 1540:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1522);
      END_STATE();
    case 1541:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1523);
      END_STATE();
    case 1542:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1524);
      END_STATE();
    case 1543:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1726);
      END_STATE();
    case 1544:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(901);
      END_STATE();
    case 1545:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1006);
      END_STATE();
    case 1546:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(871);
      END_STATE();
    case 1547:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(693);
      END_STATE();
    case 1548:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(843);
      END_STATE();
    case 1549:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(934);
      END_STATE();
    case 1550:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1044);
      END_STATE();
    case 1551:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1213);
      END_STATE();
    case 1552:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1239);
      END_STATE();
    case 1553:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1158);
      END_STATE();
    case 1554:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1249);
      END_STATE();
    case 1555:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(690);
      END_STATE();
    case 1556:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(694);
      END_STATE();
    case 1557:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(696);
      END_STATE();
    case 1558:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(700);
      END_STATE();
    case 1559:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1214);
      END_STATE();
    case 1560:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1728);
      END_STATE();
    case 1561:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1564);
      END_STATE();
    case 1562:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(674);
      END_STATE();
    case 1563:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(822);
      END_STATE();
    case 1564:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(783);
      END_STATE();
    case 1565:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1721);
      END_STATE();
    case 1566:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1597);
      END_STATE();
    case 1567:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1656);
      END_STATE();
    case 1568:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1090);
      END_STATE();
    case 1569:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(779);
      END_STATE();
    case 1570:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(662);
      END_STATE();
    case 1571:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(683);
      END_STATE();
    case 1572:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1429);
      END_STATE();
    case 1573:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1380);
      END_STATE();
    case 1574:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1306);
      END_STATE();
    case 1575:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1067);
      END_STATE();
    case 1576:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1425);
      END_STATE();
    case 1577:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1308);
      END_STATE();
    case 1578:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1494);
      END_STATE();
    case 1579:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1315);
      END_STATE();
    case 1580:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(845);
      END_STATE();
    case 1581:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(849);
      END_STATE();
    case 1582:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1742);
      END_STATE();
    case 1583:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1742);
      END_STATE();
    case 1584:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1737);
      END_STATE();
    case 1585:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1736);
      END_STATE();
    case 1586:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1584);
      END_STATE();
    case 1587:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1585);
      END_STATE();
    case 1588:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1589:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 1590:
      if (eof) ADVANCE(1591);
      if (lookahead == '\n') ADVANCE(1809);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1670);
      if (lookahead == '#') ADVANCE(1805);
      if (lookahead == '*') ADVANCE(1629);
      if (lookahead == '+') ADVANCE(1614);
      if (lookahead == ',') ADVANCE(1611);
      if (lookahead == '-') ADVANCE(1615);
      if (lookahead == '0') ADVANCE(1797);
      if (lookahead == ':') ADVANCE(1612);
      if (lookahead == '=') ADVANCE(1733);
      if (lookahead == '@') ADVANCE(1711);
      if (lookahead == 'A') ADVANCE(810);
      if (lookahead == 'C') ADVANCE(659);
      if (lookahead == 'D') ADVANCE(230);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'F') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(1224);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == 'L') ADVANCE(1225);
      if (lookahead == 'M') ADVANCE(663);
      if (lookahead == 'N') ADVANCE(1226);
      if (lookahead == 'Q') ADVANCE(259);
      if (lookahead == 'R') ADVANCE(835);
      if (lookahead == 'S') ADVANCE(836);
      if (lookahead == 'V') ADVANCE(233);
      if (lookahead == '^') ADVANCE(1619);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'f') ADVANCE(995);
      if (lookahead == 'h') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(483);
      if (lookahead == 'w') ADVANCE(360);
      if (lookahead == '}') ADVANCE(1783);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(660);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1085);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(747);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(666);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1798);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(681);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(903);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1599);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1635);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1048);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == 'T') ADVANCE(1759);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1755);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1755);
      if (lookahead == 'H' ||
          lookahead == 'I' ||
          lookahead == 'K' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(1756);
      if (lookahead == 'C' ||
          lookahead == 'L' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'k' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(1755);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1780);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1782);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1757);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1758);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1755);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1705);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1756);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1759);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'S') ADVANCE(1692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'e') ADVANCE(1699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'e') ADVANCE(1610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'n') ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'n') ADVANCE(1694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'o') ADVANCE(1796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'o') ADVANCE(1696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 's') ADVANCE(1794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'y') ADVANCE(1691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == '{') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym__proxy_jump_arg_token1);
      if (lookahead == 'S') ADVANCE(1712);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_subsystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1736);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1743);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(469);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(215);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(375);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(1780);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'a') ADVANCE(1777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'b') ADVANCE(1772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'f') ADVANCE(1762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'l') ADVANCE(1774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'm') ADVANCE(1731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'n') ADVANCE(1765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'o') ADVANCE(1770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(1778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(1775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(1763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(1768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'y') ADVANCE(1773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1779);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1705);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'S') ADVANCE(237);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '{') ADVANCE(1780);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1757);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1758);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1755);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1756);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1759);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1704);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1798);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1805);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1806);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(1806);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1807);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1808);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1590},
  [2] = {.lex_state = 1590},
  [3] = {.lex_state = 1590},
  [4] = {.lex_state = 1590},
  [5] = {.lex_state = 1590},
  [6] = {.lex_state = 1590},
  [7] = {.lex_state = 1590},
  [8] = {.lex_state = 1590},
  [9] = {.lex_state = 1590},
  [10] = {.lex_state = 1590},
  [11] = {.lex_state = 1590},
  [12] = {.lex_state = 1590},
  [13] = {.lex_state = 1590},
  [14] = {.lex_state = 1590},
  [15] = {.lex_state = 1590},
  [16] = {.lex_state = 1590},
  [17] = {.lex_state = 1590},
  [18] = {.lex_state = 1590},
  [19] = {.lex_state = 1590},
  [20] = {.lex_state = 1590},
  [21] = {.lex_state = 1590},
  [22] = {.lex_state = 1590},
  [23] = {.lex_state = 1590},
  [24] = {.lex_state = 1590},
  [25] = {.lex_state = 1590},
  [26] = {.lex_state = 1590},
  [27] = {.lex_state = 1590},
  [28] = {.lex_state = 1590},
  [29] = {.lex_state = 1590},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 38},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 30},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 30},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 30},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 30},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 28},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 345},
  [118] = {.lex_state = 28},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 40},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 28},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 26},
  [133] = {.lex_state = 28},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 1590},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 1590},
  [141] = {.lex_state = 1590},
  [142] = {.lex_state = 1590},
  [143] = {.lex_state = 1590},
  [144] = {.lex_state = 1590},
  [145] = {.lex_state = 1590},
  [146] = {.lex_state = 1590},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 1590},
  [150] = {.lex_state = 1590},
  [151] = {.lex_state = 1590},
  [152] = {.lex_state = 1590},
  [153] = {.lex_state = 1590},
  [154] = {.lex_state = 31},
  [155] = {.lex_state = 1590},
  [156] = {.lex_state = 1590},
  [157] = {.lex_state = 27},
  [158] = {.lex_state = 1590},
  [159] = {.lex_state = 1590},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 1590},
  [162] = {.lex_state = 1590},
  [163] = {.lex_state = 1590},
  [164] = {.lex_state = 1590},
  [165] = {.lex_state = 1590},
  [166] = {.lex_state = 1590},
  [167] = {.lex_state = 1590},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 1590},
  [170] = {.lex_state = 1590},
  [171] = {.lex_state = 1590},
  [172] = {.lex_state = 1590},
  [173] = {.lex_state = 1590},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 27},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 26},
  [178] = {.lex_state = 1590},
  [179] = {.lex_state = 1590},
  [180] = {.lex_state = 1590},
  [181] = {.lex_state = 28},
  [182] = {.lex_state = 1590},
  [183] = {.lex_state = 1590},
  [184] = {.lex_state = 1590},
  [185] = {.lex_state = 1590},
  [186] = {.lex_state = 28},
  [187] = {.lex_state = 1590},
  [188] = {.lex_state = 1590},
  [189] = {.lex_state = 1590},
  [190] = {.lex_state = 1590},
  [191] = {.lex_state = 20},
  [192] = {.lex_state = 1590},
  [193] = {.lex_state = 1590},
  [194] = {.lex_state = 1590},
  [195] = {.lex_state = 1590},
  [196] = {.lex_state = 1590},
  [197] = {.lex_state = 31},
  [198] = {.lex_state = 1590},
  [199] = {.lex_state = 1590},
  [200] = {.lex_state = 1590},
  [201] = {.lex_state = 1590},
  [202] = {.lex_state = 1590},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 1590},
  [205] = {.lex_state = 1590},
  [206] = {.lex_state = 1590},
  [207] = {.lex_state = 1590},
  [208] = {.lex_state = 1590},
  [209] = {.lex_state = 28},
  [210] = {.lex_state = 34},
  [211] = {.lex_state = 28},
  [212] = {.lex_state = 34},
  [213] = {.lex_state = 34},
  [214] = {.lex_state = 37},
  [215] = {.lex_state = 34},
  [216] = {.lex_state = 34},
  [217] = {.lex_state = 34},
  [218] = {.lex_state = 37},
  [219] = {.lex_state = 34},
  [220] = {.lex_state = 28},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 1590},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 28},
  [225] = {.lex_state = 1590},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 1590},
  [228] = {.lex_state = 34},
  [229] = {.lex_state = 34},
  [230] = {.lex_state = 34},
  [231] = {.lex_state = 37},
  [232] = {.lex_state = 1590},
  [233] = {.lex_state = 1590},
  [234] = {.lex_state = 28},
  [235] = {.lex_state = 253},
  [236] = {.lex_state = 34},
  [237] = {.lex_state = 28},
  [238] = {.lex_state = 1590},
  [239] = {.lex_state = 28},
  [240] = {.lex_state = 28},
  [241] = {.lex_state = 1590},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 28},
  [244] = {.lex_state = 1590},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 1590},
  [247] = {.lex_state = 34},
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 34},
  [250] = {.lex_state = 1590},
  [251] = {.lex_state = 28},
  [252] = {.lex_state = 28},
  [253] = {.lex_state = 28},
  [254] = {.lex_state = 28},
  [255] = {.lex_state = 1590},
  [256] = {.lex_state = 1590},
  [257] = {.lex_state = 1590},
  [258] = {.lex_state = 28},
  [259] = {.lex_state = 28},
  [260] = {.lex_state = 28},
  [261] = {.lex_state = 28},
  [262] = {.lex_state = 1590},
  [263] = {.lex_state = 1590},
  [264] = {.lex_state = 1590},
  [265] = {.lex_state = 1590},
  [266] = {.lex_state = 1590},
  [267] = {.lex_state = 28},
  [268] = {.lex_state = 34},
  [269] = {.lex_state = 28},
  [270] = {.lex_state = 28},
  [271] = {.lex_state = 1590},
  [272] = {.lex_state = 1590},
  [273] = {.lex_state = 1590},
  [274] = {.lex_state = 34},
  [275] = {.lex_state = 28},
  [276] = {.lex_state = 28},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 28},
  [279] = {.lex_state = 28},
  [280] = {.lex_state = 1590},
  [281] = {.lex_state = 34},
  [282] = {.lex_state = 28},
  [283] = {.lex_state = 1590},
  [284] = {.lex_state = 28},
  [285] = {.lex_state = 1590},
  [286] = {.lex_state = 28},
  [287] = {.lex_state = 34},
  [288] = {.lex_state = 34},
  [289] = {.lex_state = 1590},
  [290] = {.lex_state = 28},
  [291] = {.lex_state = 28},
  [292] = {.lex_state = 28},
  [293] = {.lex_state = 24},
  [294] = {.lex_state = 34},
  [295] = {.lex_state = 1590},
  [296] = {.lex_state = 28},
  [297] = {.lex_state = 1590},
  [298] = {.lex_state = 1590},
  [299] = {.lex_state = 1590},
  [300] = {.lex_state = 28},
  [301] = {.lex_state = 1590},
  [302] = {.lex_state = 28},
  [303] = {.lex_state = 28},
  [304] = {.lex_state = 1590},
  [305] = {.lex_state = 28},
  [306] = {.lex_state = 28},
  [307] = {.lex_state = 28},
  [308] = {.lex_state = 34},
  [309] = {.lex_state = 1590},
  [310] = {.lex_state = 28},
  [311] = {.lex_state = 34},
  [312] = {.lex_state = 28},
  [313] = {.lex_state = 34},
  [314] = {.lex_state = 28},
  [315] = {.lex_state = 1590},
  [316] = {.lex_state = 28},
  [317] = {.lex_state = 28},
  [318] = {.lex_state = 28},
  [319] = {.lex_state = 28},
  [320] = {.lex_state = 28},
  [321] = {.lex_state = 27},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 28},
  [324] = {.lex_state = 1590},
  [325] = {.lex_state = 28},
  [326] = {.lex_state = 28},
  [327] = {.lex_state = 28},
  [328] = {.lex_state = 28},
  [329] = {.lex_state = 28},
  [330] = {.lex_state = 28},
  [331] = {.lex_state = 1590},
  [332] = {.lex_state = 28},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 1590},
  [335] = {.lex_state = 1590},
  [336] = {.lex_state = 28},
  [337] = {.lex_state = 1590},
  [338] = {.lex_state = 28},
  [339] = {.lex_state = 1590},
  [340] = {.lex_state = 28},
  [341] = {.lex_state = 28},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 1590},
  [344] = {.lex_state = 28},
  [345] = {.lex_state = 28},
  [346] = {.lex_state = 28},
  [347] = {.lex_state = 1590},
  [348] = {.lex_state = 28},
  [349] = {.lex_state = 28},
  [350] = {.lex_state = 26},
  [351] = {.lex_state = 1590},
  [352] = {.lex_state = 28},
  [353] = {.lex_state = 1590},
  [354] = {.lex_state = 1590},
  [355] = {.lex_state = 1590},
  [356] = {.lex_state = 1590},
  [357] = {.lex_state = 1590},
  [358] = {.lex_state = 37},
  [359] = {.lex_state = 1590},
  [360] = {.lex_state = 1590},
  [361] = {.lex_state = 28},
  [362] = {.lex_state = 1590},
  [363] = {.lex_state = 1590},
  [364] = {.lex_state = 1590},
  [365] = {.lex_state = 1590},
  [366] = {.lex_state = 28},
  [367] = {.lex_state = 28},
  [368] = {.lex_state = 1590},
  [369] = {.lex_state = 28},
  [370] = {.lex_state = 1590},
  [371] = {.lex_state = 13},
  [372] = {.lex_state = 1590},
  [373] = {.lex_state = 1590},
  [374] = {.lex_state = 1590},
  [375] = {.lex_state = 28},
  [376] = {.lex_state = 28},
  [377] = {.lex_state = 1590},
  [378] = {.lex_state = 28},
  [379] = {.lex_state = 1590},
  [380] = {.lex_state = 1590},
  [381] = {.lex_state = 28},
  [382] = {.lex_state = 1590},
  [383] = {.lex_state = 28},
  [384] = {.lex_state = 28},
  [385] = {.lex_state = 1590},
  [386] = {.lex_state = 1590},
  [387] = {.lex_state = 28},
  [388] = {.lex_state = 1590},
  [389] = {.lex_state = 28},
  [390] = {.lex_state = 1590},
  [391] = {.lex_state = 28},
  [392] = {.lex_state = 1590},
  [393] = {.lex_state = 28},
  [394] = {.lex_state = 1590},
  [395] = {.lex_state = 1590},
  [396] = {.lex_state = 1590},
  [397] = {.lex_state = 1590},
  [398] = {.lex_state = 1590},
  [399] = {.lex_state = 1590},
  [400] = {.lex_state = 1590},
  [401] = {.lex_state = 1590},
  [402] = {.lex_state = 1590},
  [403] = {.lex_state = 1590},
  [404] = {.lex_state = 1590},
  [405] = {.lex_state = 1590},
  [406] = {.lex_state = 1590},
  [407] = {.lex_state = 1590},
  [408] = {.lex_state = 1590},
  [409] = {.lex_state = 1590},
  [410] = {.lex_state = 1590},
  [411] = {.lex_state = 1590},
  [412] = {.lex_state = 1590},
  [413] = {.lex_state = 1590},
  [414] = {.lex_state = 1590},
  [415] = {.lex_state = 1590},
  [416] = {.lex_state = 1590},
  [417] = {.lex_state = 1590},
  [418] = {.lex_state = 1590},
  [419] = {.lex_state = 1590},
  [420] = {.lex_state = 1590},
  [421] = {.lex_state = 1590},
  [422] = {.lex_state = 1590},
  [423] = {.lex_state = 1590},
  [424] = {.lex_state = 1590},
  [425] = {.lex_state = 1590},
  [426] = {.lex_state = 1590},
  [427] = {.lex_state = 1590},
  [428] = {.lex_state = 1590},
  [429] = {.lex_state = 1590},
  [430] = {.lex_state = 1590},
  [431] = {.lex_state = 1590},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 1590},
  [434] = {.lex_state = 1590},
  [435] = {.lex_state = 1590},
  [436] = {.lex_state = 1590},
  [437] = {.lex_state = 1590},
  [438] = {.lex_state = 1590},
  [439] = {.lex_state = 1590},
  [440] = {.lex_state = 1590},
  [441] = {.lex_state = 12},
  [442] = {.lex_state = 1590},
  [443] = {.lex_state = 1590},
  [444] = {.lex_state = 1590},
  [445] = {.lex_state = 1590},
  [446] = {.lex_state = 1590},
  [447] = {.lex_state = 1590},
  [448] = {.lex_state = 1590},
  [449] = {.lex_state = 1590},
  [450] = {.lex_state = 1590},
  [451] = {.lex_state = 1590},
  [452] = {.lex_state = 1590},
  [453] = {.lex_state = 1590},
  [454] = {.lex_state = 1590},
  [455] = {.lex_state = 1590},
  [456] = {.lex_state = 1590},
  [457] = {.lex_state = 1590},
  [458] = {.lex_state = 1590},
  [459] = {.lex_state = 1590},
  [460] = {.lex_state = 1590},
  [461] = {.lex_state = 1590},
  [462] = {.lex_state = 1590},
  [463] = {.lex_state = 1590},
  [464] = {.lex_state = 1590},
  [465] = {.lex_state = 1590},
  [466] = {.lex_state = 1590},
  [467] = {.lex_state = 1590},
  [468] = {.lex_state = 1590},
  [469] = {.lex_state = 1590},
  [470] = {.lex_state = 1590},
  [471] = {.lex_state = 1590},
  [472] = {.lex_state = 1590},
  [473] = {.lex_state = 1590},
  [474] = {.lex_state = 1590},
  [475] = {.lex_state = 1590},
  [476] = {.lex_state = 1590},
  [477] = {.lex_state = 1590},
  [478] = {.lex_state = 1590},
  [479] = {.lex_state = 1590},
  [480] = {.lex_state = 1590},
  [481] = {.lex_state = 1590},
  [482] = {.lex_state = 1590},
  [483] = {.lex_state = 1590},
  [484] = {.lex_state = 1590},
  [485] = {.lex_state = 1590},
  [486] = {.lex_state = 1590},
  [487] = {.lex_state = 1590},
  [488] = {.lex_state = 1590},
  [489] = {.lex_state = 1590},
  [490] = {.lex_state = 1590},
  [491] = {.lex_state = 1588},
  [492] = {.lex_state = 12},
  [493] = {.lex_state = 1590},
  [494] = {.lex_state = 1590},
  [495] = {.lex_state = 1590},
  [496] = {.lex_state = 1590},
  [497] = {.lex_state = 1590},
  [498] = {.lex_state = 1590},
  [499] = {.lex_state = 1590},
  [500] = {.lex_state = 1590},
  [501] = {.lex_state = 1590},
  [502] = {.lex_state = 1590},
  [503] = {.lex_state = 1590},
  [504] = {.lex_state = 1590},
  [505] = {.lex_state = 1590},
  [506] = {.lex_state = 1590},
  [507] = {.lex_state = 1590},
  [508] = {.lex_state = 1590},
  [509] = {.lex_state = 1590},
  [510] = {.lex_state = 1590},
  [511] = {.lex_state = 1590},
  [512] = {.lex_state = 12},
  [513] = {.lex_state = 1590},
  [514] = {.lex_state = 1590},
  [515] = {.lex_state = 1590},
  [516] = {.lex_state = 1590},
  [517] = {.lex_state = 1590},
  [518] = {.lex_state = 1590},
  [519] = {.lex_state = 1590},
  [520] = {.lex_state = 1590},
  [521] = {.lex_state = 1590},
  [522] = {.lex_state = 1590},
  [523] = {.lex_state = 262},
  [524] = {.lex_state = 1590},
  [525] = {.lex_state = 1590},
  [526] = {.lex_state = 1590},
  [527] = {.lex_state = 1590},
  [528] = {.lex_state = 1590},
  [529] = {.lex_state = 1590},
  [530] = {.lex_state = 1590},
  [531] = {.lex_state = 1590},
  [532] = {.lex_state = 1590},
  [533] = {.lex_state = 1590},
  [534] = {.lex_state = 1590},
  [535] = {.lex_state = 1590},
  [536] = {.lex_state = 1590},
  [537] = {.lex_state = 1590},
  [538] = {.lex_state = 1590},
  [539] = {.lex_state = 1590},
  [540] = {.lex_state = 1590},
  [541] = {.lex_state = 1590},
  [542] = {.lex_state = 1590},
  [543] = {.lex_state = 1590},
  [544] = {.lex_state = 1590},
  [545] = {.lex_state = 1590},
  [546] = {.lex_state = 1590},
  [547] = {.lex_state = 1590},
  [548] = {.lex_state = 1590},
  [549] = {.lex_state = 1590},
  [550] = {.lex_state = 1590},
  [551] = {.lex_state = 1590},
  [552] = {.lex_state = 1590},
  [553] = {.lex_state = 1590},
  [554] = {.lex_state = 1590},
  [555] = {.lex_state = 1590},
  [556] = {.lex_state = 1590},
  [557] = {.lex_state = 1590},
  [558] = {.lex_state = 1590},
  [559] = {.lex_state = 1590},
  [560] = {.lex_state = 1590},
  [561] = {.lex_state = 1590},
  [562] = {.lex_state = 1590},
  [563] = {.lex_state = 1590},
  [564] = {.lex_state = 1590},
  [565] = {.lex_state = 1590},
  [566] = {.lex_state = 1590},
  [567] = {.lex_state = 1590},
  [568] = {.lex_state = 1590},
  [569] = {.lex_state = 1590},
  [570] = {.lex_state = 1590},
  [571] = {.lex_state = 1590},
  [572] = {.lex_state = 1590},
  [573] = {.lex_state = 1590},
  [574] = {.lex_state = 1590},
  [575] = {.lex_state = 1590},
  [576] = {.lex_state = 1590},
  [577] = {.lex_state = 1590},
  [578] = {.lex_state = 1590},
  [579] = {.lex_state = 1590},
  [580] = {.lex_state = 1590},
  [581] = {.lex_state = 1590},
  [582] = {.lex_state = 1590},
  [583] = {.lex_state = 1590},
  [584] = {.lex_state = 1590},
  [585] = {.lex_state = 1590},
  [586] = {.lex_state = 1590},
  [587] = {.lex_state = 1590},
  [588] = {.lex_state = 1590},
  [589] = {.lex_state = 1590},
  [590] = {.lex_state = 1590},
  [591] = {.lex_state = 1590},
  [592] = {.lex_state = 1590},
  [593] = {.lex_state = 1590},
  [594] = {.lex_state = 1590},
  [595] = {.lex_state = 1590},
  [596] = {.lex_state = 1590},
  [597] = {.lex_state = 1590},
  [598] = {.lex_state = 1590},
  [599] = {.lex_state = 1590},
  [600] = {.lex_state = 1590},
  [601] = {.lex_state = 1590},
  [602] = {.lex_state = 1590},
  [603] = {.lex_state = 1590},
  [604] = {.lex_state = 1590},
  [605] = {.lex_state = 1590},
  [606] = {.lex_state = 1590},
  [607] = {.lex_state = 1590},
  [608] = {.lex_state = 1590},
  [609] = {.lex_state = 1590},
  [610] = {.lex_state = 1590},
  [611] = {.lex_state = 1590},
  [612] = {.lex_state = 1590},
  [613] = {.lex_state = 1590},
  [614] = {.lex_state = 1590},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 1590},
  [619] = {.lex_state = 1590},
  [620] = {.lex_state = 28},
  [621] = {.lex_state = 12},
  [622] = {.lex_state = 28},
  [623] = {.lex_state = 1590},
  [624] = {.lex_state = 1590},
  [625] = {.lex_state = 28},
  [626] = {.lex_state = 1588},
  [627] = {.lex_state = 12},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 13},
  [630] = {.lex_state = 28},
  [631] = {.lex_state = 1589},
  [632] = {.lex_state = 1588},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 1590},
  [636] = {.lex_state = 1590},
  [637] = {.lex_state = 1590},
  [638] = {.lex_state = 1590},
  [639] = {.lex_state = 1590},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 1590},
  [642] = {.lex_state = 12},
  [643] = {.lex_state = 1590},
  [644] = {.lex_state = 1590},
  [645] = {.lex_state = 12},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 1590},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 1590},
  [651] = {.lex_state = 28},
  [652] = {.lex_state = 1590},
  [653] = {.lex_state = 1590},
  [654] = {.lex_state = 28},
  [655] = {.lex_state = 1590},
  [656] = {.lex_state = 1590},
  [657] = {.lex_state = 1590},
  [658] = {.lex_state = 1590},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 1590},
  [661] = {.lex_state = 1590},
  [662] = {.lex_state = 1590},
  [663] = {.lex_state = 1590},
  [664] = {.lex_state = 1588},
  [665] = {.lex_state = 1588},
  [666] = {.lex_state = 1588},
  [667] = {.lex_state = 1588},
  [668] = {.lex_state = 1588},
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
    [sym_config] = STATE(659),
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(402),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym_config_repeat1] = STATE(2),
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
    [sym_comment] = ACTIONS(167),
    [sym__space] = ACTIONS(169),
    [sym__eol] = ACTIONS(171),
  },
  [2] = {
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(402),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(173),
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
    [sym_comment] = ACTIONS(167),
    [sym__space] = ACTIONS(169),
    [sym__eol] = ACTIONS(175),
  },
  [3] = {
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(402),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_host_declaration_token1] = ACTIONS(179),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(182),
    [aux_sym__address_family_token1] = ACTIONS(185),
    [aux_sym__batch_mode_token1] = ACTIONS(188),
    [aux_sym__bind_address_token1] = ACTIONS(191),
    [aux_sym__bind_interface_token1] = ACTIONS(194),
    [aux_sym__canonical_domains_token1] = ACTIONS(197),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(200),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(203),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(206),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(209),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(212),
    [aux_sym__certificate_file_token1] = ACTIONS(215),
    [aux_sym__check_host_ip_token1] = ACTIONS(218),
    [aux_sym__ciphers_token1] = ACTIONS(221),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(224),
    [aux_sym__compression_token1] = ACTIONS(227),
    [aux_sym__connection_attempts_token1] = ACTIONS(230),
    [aux_sym__connect_timeout_token1] = ACTIONS(233),
    [aux_sym__control_master_token1] = ACTIONS(236),
    [aux_sym__control_persist_token1] = ACTIONS(239),
    [aux_sym__control_path_token1] = ACTIONS(242),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(245),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(248),
    [aux_sym__escape_char_token1] = ACTIONS(251),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(254),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(257),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(260),
    [aux_sym__forward_agent_token1] = ACTIONS(263),
    [aux_sym__forward_x11_token1] = ACTIONS(266),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(269),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(272),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(275),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(278),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(281),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(284),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(284),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(287),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(290),
    [aux_sym__host_key_alias_token1] = ACTIONS(293),
    [aux_sym__hostname_token1] = ACTIONS(296),
    [aux_sym__identities_only_token1] = ACTIONS(299),
    [aux_sym__identity_agent_token1] = ACTIONS(302),
    [aux_sym__identity_file_token1] = ACTIONS(305),
    [aux_sym__ignore_unknown_token1] = ACTIONS(308),
    [aux_sym__ipqos_token1] = ACTIONS(311),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(314),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(314),
    [aux_sym__kex_algorithms_token1] = ACTIONS(317),
    [aux_sym__known_hosts_command_token1] = ACTIONS(320),
    [aux_sym__local_command_token1] = ACTIONS(323),
    [aux_sym__local_forward_token1] = ACTIONS(326),
    [aux_sym__log_level_token1] = ACTIONS(329),
    [aux_sym__log_verbose_token1] = ACTIONS(332),
    [aux_sym__macs_token1] = ACTIONS(335),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(338),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(341),
    [aux_sym__password_authentication_token1] = ACTIONS(344),
    [aux_sym__permit_local_command_token1] = ACTIONS(347),
    [aux_sym__permit_remote_open_token1] = ACTIONS(350),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(353),
    [aux_sym__port_token1] = ACTIONS(356),
    [aux_sym__preferred_authentications_token1] = ACTIONS(359),
    [aux_sym__proxy_command_token1] = ACTIONS(362),
    [aux_sym__proxy_jump_token1] = ACTIONS(365),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(368),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(371),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(374),
    [aux_sym__rekey_limit_token1] = ACTIONS(377),
    [aux_sym__remote_command_token1] = ACTIONS(380),
    [aux_sym__remote_forward_token1] = ACTIONS(383),
    [aux_sym__request_tty_token1] = ACTIONS(386),
    [aux_sym__required_rsa_size_token1] = ACTIONS(389),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(392),
    [aux_sym__security_key_provider_token1] = ACTIONS(395),
    [aux_sym__send_env_token1] = ACTIONS(398),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(401),
    [aux_sym__server_alive_interval_token1] = ACTIONS(404),
    [aux_sym__session_type_token1] = ACTIONS(407),
    [aux_sym__stdin_null_token1] = ACTIONS(410),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(413),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(416),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(419),
    [sym_comment] = ACTIONS(422),
    [sym__space] = ACTIONS(425),
    [sym__eol] = ACTIONS(428),
  },
  [4] = {
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(431),
    [aux_sym_host_declaration_token1] = ACTIONS(433),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(435),
    [aux_sym__address_family_token1] = ACTIONS(438),
    [aux_sym__batch_mode_token1] = ACTIONS(441),
    [aux_sym__bind_address_token1] = ACTIONS(444),
    [aux_sym__bind_interface_token1] = ACTIONS(447),
    [aux_sym__canonical_domains_token1] = ACTIONS(450),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(453),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(456),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(459),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(462),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(465),
    [aux_sym__certificate_file_token1] = ACTIONS(468),
    [aux_sym__check_host_ip_token1] = ACTIONS(471),
    [aux_sym__ciphers_token1] = ACTIONS(474),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(477),
    [aux_sym__compression_token1] = ACTIONS(480),
    [aux_sym__connection_attempts_token1] = ACTIONS(483),
    [aux_sym__connect_timeout_token1] = ACTIONS(486),
    [aux_sym__control_master_token1] = ACTIONS(489),
    [aux_sym__control_persist_token1] = ACTIONS(492),
    [aux_sym__control_path_token1] = ACTIONS(495),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(498),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(501),
    [aux_sym__escape_char_token1] = ACTIONS(504),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(507),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(510),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(513),
    [aux_sym__forward_agent_token1] = ACTIONS(516),
    [aux_sym__forward_x11_token1] = ACTIONS(519),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(522),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(525),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(528),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(531),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(534),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(537),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(537),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(540),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(543),
    [aux_sym__host_key_alias_token1] = ACTIONS(546),
    [aux_sym__hostname_token1] = ACTIONS(549),
    [aux_sym__identities_only_token1] = ACTIONS(552),
    [aux_sym__identity_agent_token1] = ACTIONS(555),
    [aux_sym__identity_file_token1] = ACTIONS(558),
    [aux_sym__ignore_unknown_token1] = ACTIONS(561),
    [aux_sym__ipqos_token1] = ACTIONS(564),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(567),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(567),
    [aux_sym__kex_algorithms_token1] = ACTIONS(570),
    [aux_sym__known_hosts_command_token1] = ACTIONS(573),
    [aux_sym__local_command_token1] = ACTIONS(576),
    [aux_sym__local_forward_token1] = ACTIONS(579),
    [aux_sym__log_level_token1] = ACTIONS(582),
    [aux_sym__log_verbose_token1] = ACTIONS(585),
    [aux_sym__macs_token1] = ACTIONS(588),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(591),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(594),
    [aux_sym__password_authentication_token1] = ACTIONS(597),
    [aux_sym__permit_local_command_token1] = ACTIONS(600),
    [aux_sym__permit_remote_open_token1] = ACTIONS(603),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(606),
    [aux_sym__port_token1] = ACTIONS(609),
    [aux_sym__preferred_authentications_token1] = ACTIONS(612),
    [aux_sym__proxy_command_token1] = ACTIONS(615),
    [aux_sym__proxy_jump_token1] = ACTIONS(618),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(621),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(624),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(627),
    [aux_sym__rekey_limit_token1] = ACTIONS(630),
    [aux_sym__remote_command_token1] = ACTIONS(633),
    [aux_sym__remote_forward_token1] = ACTIONS(636),
    [aux_sym__request_tty_token1] = ACTIONS(639),
    [aux_sym__required_rsa_size_token1] = ACTIONS(642),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(645),
    [aux_sym__security_key_provider_token1] = ACTIONS(648),
    [aux_sym__send_env_token1] = ACTIONS(651),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(654),
    [aux_sym__server_alive_interval_token1] = ACTIONS(657),
    [aux_sym__session_type_token1] = ACTIONS(660),
    [aux_sym__stdin_null_token1] = ACTIONS(663),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(666),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(669),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(672),
    [sym_comment] = ACTIONS(675),
    [sym__space] = ACTIONS(678),
    [sym__eol] = ACTIONS(431),
  },
  [5] = {
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(681),
    [aux_sym_host_declaration_token1] = ACTIONS(683),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
    [sym__eol] = ACTIONS(681),
  },
  [6] = {
    [sym__declarations] = STATE(16),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [7] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [8] = {
    [sym__declarations] = STATE(23),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [9] = {
    [sym_host_declaration] = STATE(28),
    [sym_parameter] = STATE(506),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
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
    [sym_comment] = ACTIONS(689),
    [sym__eol] = ACTIONS(691),
  },
  [10] = {
    [sym__declarations] = STATE(17),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [11] = {
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [12] = {
    [sym__declarations] = STATE(24),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [13] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [14] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(502),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
    [aux_sym__declarations_repeat1] = STATE(5),
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
    [sym_comment] = ACTIONS(685),
    [sym__space] = ACTIONS(687),
  },
  [15] = {
    [sym_parameter] = STATE(599),
    [sym__add_keys_to_agent] = STATE(404),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(415),
    [sym__bind_address] = STATE(419),
    [sym__bind_interface] = STATE(420),
    [sym__canonical_domains] = STATE(422),
    [sym__canonicalize_fallback_local] = STATE(423),
    [sym__canonicalize_hostname] = STATE(424),
    [sym__canonicalize_max_dots] = STATE(429),
    [sym__canonicalize_permitted_cnames] = STATE(431),
    [sym__ca_signature_algorithms] = STATE(440),
    [sym__certificate_file] = STATE(445),
    [sym__check_host_ip] = STATE(455),
    [sym__ciphers] = STATE(457),
    [sym__clear_all_forwardings] = STATE(462),
    [sym__compression] = STATE(469),
    [sym__connection_attempts] = STATE(470),
    [sym__connect_timeout] = STATE(488),
    [sym__control_master] = STATE(493),
    [sym__control_persist] = STATE(507),
    [sym__control_path] = STATE(508),
    [sym__enable_escape_command_line] = STATE(513),
    [sym__enable_ssh_keysign] = STATE(517),
    [sym__escape_char] = STATE(533),
    [sym__exit_on_forward_failure] = STATE(555),
    [sym__fingerprint_hash] = STATE(597),
    [sym__fork_after_authentication] = STATE(601),
    [sym__forward_agent] = STATE(609),
    [sym__forward_x11] = STATE(608),
    [sym__forward_x11_timeout] = STATE(606),
    [sym__forward_x11_trusted] = STATE(605),
    [sym__global_known_hosts_file] = STATE(604),
    [sym__gssapi_authentication] = STATE(603),
    [sym__gssapi_delegate_credentials] = STATE(602),
    [sym__hostbased_accepted_algorithms] = STATE(397),
    [sym__hostbased_authentication] = STATE(600),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(596),
    [sym__hostname] = STATE(594),
    [sym__identities_only] = STATE(593),
    [sym__identity_agent] = STATE(592),
    [sym__identity_file] = STATE(591),
    [sym__ignore_unknown] = STATE(590),
    [sym__ipqos] = STATE(587),
    [sym__kbd_interactive_authentication] = STATE(584),
    [sym__kex_algorithms] = STATE(581),
    [sym__known_hosts_command] = STATE(579),
    [sym__local_command] = STATE(578),
    [sym__local_forward] = STATE(576),
    [sym__log_level] = STATE(574),
    [sym__log_verbose] = STATE(573),
    [sym__macs] = STATE(572),
    [sym__no_host_authentication_for_localhost] = STATE(569),
    [sym__number_of_password_prompts] = STATE(568),
    [sym__password_authentication] = STATE(566),
    [sym__permit_local_command] = STATE(565),
    [sym__permit_remote_open] = STATE(564),
    [sym__pkcs11_provider] = STATE(563),
    [sym__port] = STATE(562),
    [sym__preferred_authentications] = STATE(561),
    [sym__proxy_command] = STATE(560),
    [sym__proxy_jump] = STATE(559),
    [sym__proxy_use_fdpass] = STATE(557),
    [sym__pubkey_accepted_algorithms] = STATE(553),
    [sym__pubkey_authentication] = STATE(551),
    [sym__rekey_limit] = STATE(549),
    [sym__remote_command] = STATE(547),
    [sym__remote_forward] = STATE(546),
    [sym__request_tty] = STATE(545),
    [sym__required_rsa_size] = STATE(543),
    [sym__revoked_host_keys] = STATE(541),
    [sym__security_key_provider] = STATE(539),
    [sym__send_env] = STATE(537),
    [sym__server_alive_count_max] = STATE(536),
    [sym__server_alive_interval] = STATE(535),
    [sym__session_type] = STATE(534),
    [sym__set_env] = STATE(520),
    [sym__stdin_null] = STATE(531),
    [sym__stream_local_bind_mask] = STATE(530),
    [sym__stream_local_bind_unlink] = STATE(396),
    [sym__strict_host_key_checking] = STATE(529),
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
    [sym_comment] = ACTIONS(693),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(695),
    [aux_sym_host_declaration_token1] = ACTIONS(697),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(695),
    [aux_sym__address_family_token1] = ACTIONS(695),
    [aux_sym__batch_mode_token1] = ACTIONS(695),
    [aux_sym__bind_address_token1] = ACTIONS(695),
    [aux_sym__bind_interface_token1] = ACTIONS(695),
    [aux_sym__canonical_domains_token1] = ACTIONS(695),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(695),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(695),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(695),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(695),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(695),
    [aux_sym__certificate_file_token1] = ACTIONS(695),
    [aux_sym__check_host_ip_token1] = ACTIONS(695),
    [aux_sym__ciphers_token1] = ACTIONS(695),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(695),
    [aux_sym__compression_token1] = ACTIONS(695),
    [aux_sym__connection_attempts_token1] = ACTIONS(695),
    [aux_sym__connect_timeout_token1] = ACTIONS(695),
    [aux_sym__control_master_token1] = ACTIONS(695),
    [aux_sym__control_persist_token1] = ACTIONS(695),
    [aux_sym__control_path_token1] = ACTIONS(695),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(695),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(695),
    [aux_sym__escape_char_token1] = ACTIONS(695),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(695),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(695),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(695),
    [aux_sym__forward_agent_token1] = ACTIONS(695),
    [aux_sym__forward_x11_token1] = ACTIONS(697),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(695),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(695),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(695),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(695),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(695),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(695),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(695),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(695),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(695),
    [aux_sym__host_key_alias_token1] = ACTIONS(695),
    [aux_sym__hostname_token1] = ACTIONS(695),
    [aux_sym__identities_only_token1] = ACTIONS(695),
    [aux_sym__identity_agent_token1] = ACTIONS(695),
    [aux_sym__identity_file_token1] = ACTIONS(695),
    [aux_sym__ignore_unknown_token1] = ACTIONS(695),
    [aux_sym__ipqos_token1] = ACTIONS(695),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(695),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(695),
    [aux_sym__kex_algorithms_token1] = ACTIONS(695),
    [aux_sym__known_hosts_command_token1] = ACTIONS(695),
    [aux_sym__local_command_token1] = ACTIONS(695),
    [aux_sym__local_forward_token1] = ACTIONS(695),
    [aux_sym__log_level_token1] = ACTIONS(695),
    [aux_sym__log_verbose_token1] = ACTIONS(695),
    [aux_sym__macs_token1] = ACTIONS(695),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(695),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(695),
    [aux_sym__password_authentication_token1] = ACTIONS(695),
    [aux_sym__permit_local_command_token1] = ACTIONS(695),
    [aux_sym__permit_remote_open_token1] = ACTIONS(695),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(695),
    [aux_sym__port_token1] = ACTIONS(695),
    [aux_sym__preferred_authentications_token1] = ACTIONS(695),
    [aux_sym__proxy_command_token1] = ACTIONS(695),
    [aux_sym__proxy_jump_token1] = ACTIONS(695),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(695),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(695),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(695),
    [aux_sym__rekey_limit_token1] = ACTIONS(695),
    [aux_sym__remote_command_token1] = ACTIONS(695),
    [aux_sym__remote_forward_token1] = ACTIONS(695),
    [aux_sym__request_tty_token1] = ACTIONS(695),
    [aux_sym__required_rsa_size_token1] = ACTIONS(695),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(695),
    [aux_sym__security_key_provider_token1] = ACTIONS(695),
    [aux_sym__send_env_token1] = ACTIONS(695),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(695),
    [aux_sym__server_alive_interval_token1] = ACTIONS(695),
    [aux_sym__session_type_token1] = ACTIONS(695),
    [aux_sym__stdin_null_token1] = ACTIONS(695),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(695),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(695),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(695),
    [sym_comment] = ACTIONS(695),
    [sym__space] = ACTIONS(695),
    [sym__eol] = ACTIONS(695),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(699),
    [aux_sym_host_declaration_token1] = ACTIONS(701),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(699),
    [aux_sym__address_family_token1] = ACTIONS(699),
    [aux_sym__batch_mode_token1] = ACTIONS(699),
    [aux_sym__bind_address_token1] = ACTIONS(699),
    [aux_sym__bind_interface_token1] = ACTIONS(699),
    [aux_sym__canonical_domains_token1] = ACTIONS(699),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(699),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(699),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(699),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(699),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(699),
    [aux_sym__certificate_file_token1] = ACTIONS(699),
    [aux_sym__check_host_ip_token1] = ACTIONS(699),
    [aux_sym__ciphers_token1] = ACTIONS(699),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(699),
    [aux_sym__compression_token1] = ACTIONS(699),
    [aux_sym__connection_attempts_token1] = ACTIONS(699),
    [aux_sym__connect_timeout_token1] = ACTIONS(699),
    [aux_sym__control_master_token1] = ACTIONS(699),
    [aux_sym__control_persist_token1] = ACTIONS(699),
    [aux_sym__control_path_token1] = ACTIONS(699),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(699),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(699),
    [aux_sym__escape_char_token1] = ACTIONS(699),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(699),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(699),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(699),
    [aux_sym__forward_agent_token1] = ACTIONS(699),
    [aux_sym__forward_x11_token1] = ACTIONS(701),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(699),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(699),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(699),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(699),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(699),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(699),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(699),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(699),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(699),
    [aux_sym__host_key_alias_token1] = ACTIONS(699),
    [aux_sym__hostname_token1] = ACTIONS(699),
    [aux_sym__identities_only_token1] = ACTIONS(699),
    [aux_sym__identity_agent_token1] = ACTIONS(699),
    [aux_sym__identity_file_token1] = ACTIONS(699),
    [aux_sym__ignore_unknown_token1] = ACTIONS(699),
    [aux_sym__ipqos_token1] = ACTIONS(699),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(699),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(699),
    [aux_sym__kex_algorithms_token1] = ACTIONS(699),
    [aux_sym__known_hosts_command_token1] = ACTIONS(699),
    [aux_sym__local_command_token1] = ACTIONS(699),
    [aux_sym__local_forward_token1] = ACTIONS(699),
    [aux_sym__log_level_token1] = ACTIONS(699),
    [aux_sym__log_verbose_token1] = ACTIONS(699),
    [aux_sym__macs_token1] = ACTIONS(699),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(699),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(699),
    [aux_sym__password_authentication_token1] = ACTIONS(699),
    [aux_sym__permit_local_command_token1] = ACTIONS(699),
    [aux_sym__permit_remote_open_token1] = ACTIONS(699),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(699),
    [aux_sym__port_token1] = ACTIONS(699),
    [aux_sym__preferred_authentications_token1] = ACTIONS(699),
    [aux_sym__proxy_command_token1] = ACTIONS(699),
    [aux_sym__proxy_jump_token1] = ACTIONS(699),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(699),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(699),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(699),
    [aux_sym__rekey_limit_token1] = ACTIONS(699),
    [aux_sym__remote_command_token1] = ACTIONS(699),
    [aux_sym__remote_forward_token1] = ACTIONS(699),
    [aux_sym__request_tty_token1] = ACTIONS(699),
    [aux_sym__required_rsa_size_token1] = ACTIONS(699),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(699),
    [aux_sym__security_key_provider_token1] = ACTIONS(699),
    [aux_sym__send_env_token1] = ACTIONS(699),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(699),
    [aux_sym__server_alive_interval_token1] = ACTIONS(699),
    [aux_sym__session_type_token1] = ACTIONS(699),
    [aux_sym__stdin_null_token1] = ACTIONS(699),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(699),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(699),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(699),
    [sym_comment] = ACTIONS(699),
    [sym__space] = ACTIONS(699),
    [sym__eol] = ACTIONS(699),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [aux_sym_host_declaration_token1] = ACTIONS(433),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(431),
    [aux_sym__address_family_token1] = ACTIONS(431),
    [aux_sym__batch_mode_token1] = ACTIONS(431),
    [aux_sym__bind_address_token1] = ACTIONS(431),
    [aux_sym__bind_interface_token1] = ACTIONS(431),
    [aux_sym__canonical_domains_token1] = ACTIONS(431),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(431),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(431),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(431),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(431),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(431),
    [aux_sym__certificate_file_token1] = ACTIONS(431),
    [aux_sym__check_host_ip_token1] = ACTIONS(431),
    [aux_sym__ciphers_token1] = ACTIONS(431),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(431),
    [aux_sym__compression_token1] = ACTIONS(431),
    [aux_sym__connection_attempts_token1] = ACTIONS(431),
    [aux_sym__connect_timeout_token1] = ACTIONS(431),
    [aux_sym__control_master_token1] = ACTIONS(431),
    [aux_sym__control_persist_token1] = ACTIONS(431),
    [aux_sym__control_path_token1] = ACTIONS(431),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(431),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(431),
    [aux_sym__escape_char_token1] = ACTIONS(431),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(431),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(431),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(431),
    [aux_sym__forward_agent_token1] = ACTIONS(431),
    [aux_sym__forward_x11_token1] = ACTIONS(433),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(431),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(431),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(431),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(431),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(431),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(431),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(431),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(431),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(431),
    [aux_sym__host_key_alias_token1] = ACTIONS(431),
    [aux_sym__hostname_token1] = ACTIONS(431),
    [aux_sym__identities_only_token1] = ACTIONS(431),
    [aux_sym__identity_agent_token1] = ACTIONS(431),
    [aux_sym__identity_file_token1] = ACTIONS(431),
    [aux_sym__ignore_unknown_token1] = ACTIONS(431),
    [aux_sym__ipqos_token1] = ACTIONS(431),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(431),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(431),
    [aux_sym__kex_algorithms_token1] = ACTIONS(431),
    [aux_sym__known_hosts_command_token1] = ACTIONS(431),
    [aux_sym__local_command_token1] = ACTIONS(431),
    [aux_sym__local_forward_token1] = ACTIONS(431),
    [aux_sym__log_level_token1] = ACTIONS(431),
    [aux_sym__log_verbose_token1] = ACTIONS(431),
    [aux_sym__macs_token1] = ACTIONS(431),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(431),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(431),
    [aux_sym__password_authentication_token1] = ACTIONS(431),
    [aux_sym__permit_local_command_token1] = ACTIONS(431),
    [aux_sym__permit_remote_open_token1] = ACTIONS(431),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(431),
    [aux_sym__port_token1] = ACTIONS(431),
    [aux_sym__preferred_authentications_token1] = ACTIONS(431),
    [aux_sym__proxy_command_token1] = ACTIONS(431),
    [aux_sym__proxy_jump_token1] = ACTIONS(431),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(431),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(431),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(431),
    [aux_sym__rekey_limit_token1] = ACTIONS(431),
    [aux_sym__remote_command_token1] = ACTIONS(431),
    [aux_sym__remote_forward_token1] = ACTIONS(431),
    [aux_sym__request_tty_token1] = ACTIONS(431),
    [aux_sym__required_rsa_size_token1] = ACTIONS(431),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(431),
    [aux_sym__security_key_provider_token1] = ACTIONS(431),
    [aux_sym__send_env_token1] = ACTIONS(431),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(431),
    [aux_sym__server_alive_interval_token1] = ACTIONS(431),
    [aux_sym__session_type_token1] = ACTIONS(431),
    [aux_sym__stdin_null_token1] = ACTIONS(431),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(431),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(431),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(431),
    [sym_comment] = ACTIONS(431),
    [sym__space] = ACTIONS(431),
    [sym__eol] = ACTIONS(431),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(703),
    [aux_sym_host_declaration_token1] = ACTIONS(705),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(703),
    [aux_sym__address_family_token1] = ACTIONS(703),
    [aux_sym__batch_mode_token1] = ACTIONS(703),
    [aux_sym__bind_address_token1] = ACTIONS(703),
    [aux_sym__bind_interface_token1] = ACTIONS(703),
    [aux_sym__canonical_domains_token1] = ACTIONS(703),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(703),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(703),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(703),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(703),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(703),
    [aux_sym__certificate_file_token1] = ACTIONS(703),
    [aux_sym__check_host_ip_token1] = ACTIONS(703),
    [aux_sym__ciphers_token1] = ACTIONS(703),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(703),
    [aux_sym__compression_token1] = ACTIONS(703),
    [aux_sym__connection_attempts_token1] = ACTIONS(703),
    [aux_sym__connect_timeout_token1] = ACTIONS(703),
    [aux_sym__control_master_token1] = ACTIONS(703),
    [aux_sym__control_persist_token1] = ACTIONS(703),
    [aux_sym__control_path_token1] = ACTIONS(703),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(703),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(703),
    [aux_sym__escape_char_token1] = ACTIONS(703),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(703),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(703),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(703),
    [aux_sym__forward_agent_token1] = ACTIONS(703),
    [aux_sym__forward_x11_token1] = ACTIONS(705),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(703),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(703),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(703),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(703),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(703),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(703),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(703),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(703),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(703),
    [aux_sym__host_key_alias_token1] = ACTIONS(703),
    [aux_sym__hostname_token1] = ACTIONS(703),
    [aux_sym__identities_only_token1] = ACTIONS(703),
    [aux_sym__identity_agent_token1] = ACTIONS(703),
    [aux_sym__identity_file_token1] = ACTIONS(703),
    [aux_sym__ignore_unknown_token1] = ACTIONS(703),
    [aux_sym__ipqos_token1] = ACTIONS(703),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(703),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(703),
    [aux_sym__kex_algorithms_token1] = ACTIONS(703),
    [aux_sym__known_hosts_command_token1] = ACTIONS(703),
    [aux_sym__local_command_token1] = ACTIONS(703),
    [aux_sym__local_forward_token1] = ACTIONS(703),
    [aux_sym__log_level_token1] = ACTIONS(703),
    [aux_sym__log_verbose_token1] = ACTIONS(703),
    [aux_sym__macs_token1] = ACTIONS(703),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(703),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(703),
    [aux_sym__password_authentication_token1] = ACTIONS(703),
    [aux_sym__permit_local_command_token1] = ACTIONS(703),
    [aux_sym__permit_remote_open_token1] = ACTIONS(703),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(703),
    [aux_sym__port_token1] = ACTIONS(703),
    [aux_sym__preferred_authentications_token1] = ACTIONS(703),
    [aux_sym__proxy_command_token1] = ACTIONS(703),
    [aux_sym__proxy_jump_token1] = ACTIONS(703),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(703),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(703),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(703),
    [aux_sym__rekey_limit_token1] = ACTIONS(703),
    [aux_sym__remote_command_token1] = ACTIONS(703),
    [aux_sym__remote_forward_token1] = ACTIONS(703),
    [aux_sym__request_tty_token1] = ACTIONS(703),
    [aux_sym__required_rsa_size_token1] = ACTIONS(703),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(703),
    [aux_sym__security_key_provider_token1] = ACTIONS(703),
    [aux_sym__send_env_token1] = ACTIONS(703),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(703),
    [aux_sym__server_alive_interval_token1] = ACTIONS(703),
    [aux_sym__session_type_token1] = ACTIONS(703),
    [aux_sym__stdin_null_token1] = ACTIONS(703),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(703),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(703),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(703),
    [sym_comment] = ACTIONS(703),
    [sym__space] = ACTIONS(703),
    [sym__eol] = ACTIONS(703),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(707),
    [aux_sym_host_declaration_token1] = ACTIONS(709),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(707),
    [aux_sym__address_family_token1] = ACTIONS(707),
    [aux_sym__batch_mode_token1] = ACTIONS(707),
    [aux_sym__bind_address_token1] = ACTIONS(707),
    [aux_sym__bind_interface_token1] = ACTIONS(707),
    [aux_sym__canonical_domains_token1] = ACTIONS(707),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(707),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(707),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(707),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(707),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(707),
    [aux_sym__certificate_file_token1] = ACTIONS(707),
    [aux_sym__check_host_ip_token1] = ACTIONS(707),
    [aux_sym__ciphers_token1] = ACTIONS(707),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(707),
    [aux_sym__compression_token1] = ACTIONS(707),
    [aux_sym__connection_attempts_token1] = ACTIONS(707),
    [aux_sym__connect_timeout_token1] = ACTIONS(707),
    [aux_sym__control_master_token1] = ACTIONS(707),
    [aux_sym__control_persist_token1] = ACTIONS(707),
    [aux_sym__control_path_token1] = ACTIONS(707),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(707),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(707),
    [aux_sym__escape_char_token1] = ACTIONS(707),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(707),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(707),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(707),
    [aux_sym__forward_agent_token1] = ACTIONS(707),
    [aux_sym__forward_x11_token1] = ACTIONS(709),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(707),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(707),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(707),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(707),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(707),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(707),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(707),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(707),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(707),
    [aux_sym__host_key_alias_token1] = ACTIONS(707),
    [aux_sym__hostname_token1] = ACTIONS(707),
    [aux_sym__identities_only_token1] = ACTIONS(707),
    [aux_sym__identity_agent_token1] = ACTIONS(707),
    [aux_sym__identity_file_token1] = ACTIONS(707),
    [aux_sym__ignore_unknown_token1] = ACTIONS(707),
    [aux_sym__ipqos_token1] = ACTIONS(707),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(707),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(707),
    [aux_sym__kex_algorithms_token1] = ACTIONS(707),
    [aux_sym__known_hosts_command_token1] = ACTIONS(707),
    [aux_sym__local_command_token1] = ACTIONS(707),
    [aux_sym__local_forward_token1] = ACTIONS(707),
    [aux_sym__log_level_token1] = ACTIONS(707),
    [aux_sym__log_verbose_token1] = ACTIONS(707),
    [aux_sym__macs_token1] = ACTIONS(707),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(707),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(707),
    [aux_sym__password_authentication_token1] = ACTIONS(707),
    [aux_sym__permit_local_command_token1] = ACTIONS(707),
    [aux_sym__permit_remote_open_token1] = ACTIONS(707),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(707),
    [aux_sym__port_token1] = ACTIONS(707),
    [aux_sym__preferred_authentications_token1] = ACTIONS(707),
    [aux_sym__proxy_command_token1] = ACTIONS(707),
    [aux_sym__proxy_jump_token1] = ACTIONS(707),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(707),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(707),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(707),
    [aux_sym__rekey_limit_token1] = ACTIONS(707),
    [aux_sym__remote_command_token1] = ACTIONS(707),
    [aux_sym__remote_forward_token1] = ACTIONS(707),
    [aux_sym__request_tty_token1] = ACTIONS(707),
    [aux_sym__required_rsa_size_token1] = ACTIONS(707),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(707),
    [aux_sym__security_key_provider_token1] = ACTIONS(707),
    [aux_sym__send_env_token1] = ACTIONS(707),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(707),
    [aux_sym__server_alive_interval_token1] = ACTIONS(707),
    [aux_sym__session_type_token1] = ACTIONS(707),
    [aux_sym__stdin_null_token1] = ACTIONS(707),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(707),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(707),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(707),
    [sym_comment] = ACTIONS(707),
    [sym__space] = ACTIONS(707),
    [sym__eol] = ACTIONS(707),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(711),
    [aux_sym_host_declaration_token1] = ACTIONS(713),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(711),
    [aux_sym__address_family_token1] = ACTIONS(711),
    [aux_sym__batch_mode_token1] = ACTIONS(711),
    [aux_sym__bind_address_token1] = ACTIONS(711),
    [aux_sym__bind_interface_token1] = ACTIONS(711),
    [aux_sym__canonical_domains_token1] = ACTIONS(711),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(711),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(711),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(711),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(711),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(711),
    [aux_sym__certificate_file_token1] = ACTIONS(711),
    [aux_sym__check_host_ip_token1] = ACTIONS(711),
    [aux_sym__ciphers_token1] = ACTIONS(711),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(711),
    [aux_sym__compression_token1] = ACTIONS(711),
    [aux_sym__connection_attempts_token1] = ACTIONS(711),
    [aux_sym__connect_timeout_token1] = ACTIONS(711),
    [aux_sym__control_master_token1] = ACTIONS(711),
    [aux_sym__control_persist_token1] = ACTIONS(711),
    [aux_sym__control_path_token1] = ACTIONS(711),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(711),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(711),
    [aux_sym__escape_char_token1] = ACTIONS(711),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(711),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(711),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(711),
    [aux_sym__forward_agent_token1] = ACTIONS(711),
    [aux_sym__forward_x11_token1] = ACTIONS(713),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(711),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(711),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(711),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(711),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(711),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(711),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(711),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(711),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(711),
    [aux_sym__host_key_alias_token1] = ACTIONS(711),
    [aux_sym__hostname_token1] = ACTIONS(711),
    [aux_sym__identities_only_token1] = ACTIONS(711),
    [aux_sym__identity_agent_token1] = ACTIONS(711),
    [aux_sym__identity_file_token1] = ACTIONS(711),
    [aux_sym__ignore_unknown_token1] = ACTIONS(711),
    [aux_sym__ipqos_token1] = ACTIONS(711),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(711),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(711),
    [aux_sym__kex_algorithms_token1] = ACTIONS(711),
    [aux_sym__known_hosts_command_token1] = ACTIONS(711),
    [aux_sym__local_command_token1] = ACTIONS(711),
    [aux_sym__local_forward_token1] = ACTIONS(711),
    [aux_sym__log_level_token1] = ACTIONS(711),
    [aux_sym__log_verbose_token1] = ACTIONS(711),
    [aux_sym__macs_token1] = ACTIONS(711),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(711),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(711),
    [aux_sym__password_authentication_token1] = ACTIONS(711),
    [aux_sym__permit_local_command_token1] = ACTIONS(711),
    [aux_sym__permit_remote_open_token1] = ACTIONS(711),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(711),
    [aux_sym__port_token1] = ACTIONS(711),
    [aux_sym__preferred_authentications_token1] = ACTIONS(711),
    [aux_sym__proxy_command_token1] = ACTIONS(711),
    [aux_sym__proxy_jump_token1] = ACTIONS(711),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(711),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(711),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(711),
    [aux_sym__rekey_limit_token1] = ACTIONS(711),
    [aux_sym__remote_command_token1] = ACTIONS(711),
    [aux_sym__remote_forward_token1] = ACTIONS(711),
    [aux_sym__request_tty_token1] = ACTIONS(711),
    [aux_sym__required_rsa_size_token1] = ACTIONS(711),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(711),
    [aux_sym__security_key_provider_token1] = ACTIONS(711),
    [aux_sym__send_env_token1] = ACTIONS(711),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(711),
    [aux_sym__server_alive_interval_token1] = ACTIONS(711),
    [aux_sym__session_type_token1] = ACTIONS(711),
    [aux_sym__stdin_null_token1] = ACTIONS(711),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(711),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(711),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(711),
    [sym_comment] = ACTIONS(711),
    [sym__space] = ACTIONS(711),
    [sym__eol] = ACTIONS(711),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(715),
    [aux_sym_host_declaration_token1] = ACTIONS(717),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(715),
    [aux_sym__address_family_token1] = ACTIONS(715),
    [aux_sym__batch_mode_token1] = ACTIONS(715),
    [aux_sym__bind_address_token1] = ACTIONS(715),
    [aux_sym__bind_interface_token1] = ACTIONS(715),
    [aux_sym__canonical_domains_token1] = ACTIONS(715),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(715),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(715),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(715),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(715),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(715),
    [aux_sym__certificate_file_token1] = ACTIONS(715),
    [aux_sym__check_host_ip_token1] = ACTIONS(715),
    [aux_sym__ciphers_token1] = ACTIONS(715),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(715),
    [aux_sym__compression_token1] = ACTIONS(715),
    [aux_sym__connection_attempts_token1] = ACTIONS(715),
    [aux_sym__connect_timeout_token1] = ACTIONS(715),
    [aux_sym__control_master_token1] = ACTIONS(715),
    [aux_sym__control_persist_token1] = ACTIONS(715),
    [aux_sym__control_path_token1] = ACTIONS(715),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(715),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(715),
    [aux_sym__escape_char_token1] = ACTIONS(715),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(715),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(715),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(715),
    [aux_sym__forward_agent_token1] = ACTIONS(715),
    [aux_sym__forward_x11_token1] = ACTIONS(717),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(715),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(715),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(715),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(715),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(715),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(715),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(715),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(715),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(715),
    [aux_sym__host_key_alias_token1] = ACTIONS(715),
    [aux_sym__hostname_token1] = ACTIONS(715),
    [aux_sym__identities_only_token1] = ACTIONS(715),
    [aux_sym__identity_agent_token1] = ACTIONS(715),
    [aux_sym__identity_file_token1] = ACTIONS(715),
    [aux_sym__ignore_unknown_token1] = ACTIONS(715),
    [aux_sym__ipqos_token1] = ACTIONS(715),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(715),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(715),
    [aux_sym__kex_algorithms_token1] = ACTIONS(715),
    [aux_sym__known_hosts_command_token1] = ACTIONS(715),
    [aux_sym__local_command_token1] = ACTIONS(715),
    [aux_sym__local_forward_token1] = ACTIONS(715),
    [aux_sym__log_level_token1] = ACTIONS(715),
    [aux_sym__log_verbose_token1] = ACTIONS(715),
    [aux_sym__macs_token1] = ACTIONS(715),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(715),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(715),
    [aux_sym__password_authentication_token1] = ACTIONS(715),
    [aux_sym__permit_local_command_token1] = ACTIONS(715),
    [aux_sym__permit_remote_open_token1] = ACTIONS(715),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(715),
    [aux_sym__port_token1] = ACTIONS(715),
    [aux_sym__preferred_authentications_token1] = ACTIONS(715),
    [aux_sym__proxy_command_token1] = ACTIONS(715),
    [aux_sym__proxy_jump_token1] = ACTIONS(715),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(715),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(715),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(715),
    [aux_sym__rekey_limit_token1] = ACTIONS(715),
    [aux_sym__remote_command_token1] = ACTIONS(715),
    [aux_sym__remote_forward_token1] = ACTIONS(715),
    [aux_sym__request_tty_token1] = ACTIONS(715),
    [aux_sym__required_rsa_size_token1] = ACTIONS(715),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(715),
    [aux_sym__security_key_provider_token1] = ACTIONS(715),
    [aux_sym__send_env_token1] = ACTIONS(715),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(715),
    [aux_sym__server_alive_interval_token1] = ACTIONS(715),
    [aux_sym__session_type_token1] = ACTIONS(715),
    [aux_sym__stdin_null_token1] = ACTIONS(715),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(715),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(715),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(715),
    [sym_comment] = ACTIONS(715),
    [sym__space] = ACTIONS(715),
    [sym__eol] = ACTIONS(715),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(719),
    [aux_sym_host_declaration_token1] = ACTIONS(721),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(719),
    [aux_sym__address_family_token1] = ACTIONS(719),
    [aux_sym__batch_mode_token1] = ACTIONS(719),
    [aux_sym__bind_address_token1] = ACTIONS(719),
    [aux_sym__bind_interface_token1] = ACTIONS(719),
    [aux_sym__canonical_domains_token1] = ACTIONS(719),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(719),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(719),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(719),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(719),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(719),
    [aux_sym__certificate_file_token1] = ACTIONS(719),
    [aux_sym__check_host_ip_token1] = ACTIONS(719),
    [aux_sym__ciphers_token1] = ACTIONS(719),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(719),
    [aux_sym__compression_token1] = ACTIONS(719),
    [aux_sym__connection_attempts_token1] = ACTIONS(719),
    [aux_sym__connect_timeout_token1] = ACTIONS(719),
    [aux_sym__control_master_token1] = ACTIONS(719),
    [aux_sym__control_persist_token1] = ACTIONS(719),
    [aux_sym__control_path_token1] = ACTIONS(719),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(719),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(719),
    [aux_sym__escape_char_token1] = ACTIONS(719),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(719),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(719),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(719),
    [aux_sym__forward_agent_token1] = ACTIONS(719),
    [aux_sym__forward_x11_token1] = ACTIONS(721),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(719),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(719),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(719),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(719),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(719),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(719),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(719),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(719),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(719),
    [aux_sym__host_key_alias_token1] = ACTIONS(719),
    [aux_sym__hostname_token1] = ACTIONS(719),
    [aux_sym__identities_only_token1] = ACTIONS(719),
    [aux_sym__identity_agent_token1] = ACTIONS(719),
    [aux_sym__identity_file_token1] = ACTIONS(719),
    [aux_sym__ignore_unknown_token1] = ACTIONS(719),
    [aux_sym__ipqos_token1] = ACTIONS(719),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(719),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(719),
    [aux_sym__kex_algorithms_token1] = ACTIONS(719),
    [aux_sym__known_hosts_command_token1] = ACTIONS(719),
    [aux_sym__local_command_token1] = ACTIONS(719),
    [aux_sym__local_forward_token1] = ACTIONS(719),
    [aux_sym__log_level_token1] = ACTIONS(719),
    [aux_sym__log_verbose_token1] = ACTIONS(719),
    [aux_sym__macs_token1] = ACTIONS(719),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(719),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(719),
    [aux_sym__password_authentication_token1] = ACTIONS(719),
    [aux_sym__permit_local_command_token1] = ACTIONS(719),
    [aux_sym__permit_remote_open_token1] = ACTIONS(719),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(719),
    [aux_sym__port_token1] = ACTIONS(719),
    [aux_sym__preferred_authentications_token1] = ACTIONS(719),
    [aux_sym__proxy_command_token1] = ACTIONS(719),
    [aux_sym__proxy_jump_token1] = ACTIONS(719),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(719),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(719),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(719),
    [aux_sym__rekey_limit_token1] = ACTIONS(719),
    [aux_sym__remote_command_token1] = ACTIONS(719),
    [aux_sym__remote_forward_token1] = ACTIONS(719),
    [aux_sym__request_tty_token1] = ACTIONS(719),
    [aux_sym__required_rsa_size_token1] = ACTIONS(719),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(719),
    [aux_sym__security_key_provider_token1] = ACTIONS(719),
    [aux_sym__send_env_token1] = ACTIONS(719),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(719),
    [aux_sym__server_alive_interval_token1] = ACTIONS(719),
    [aux_sym__session_type_token1] = ACTIONS(719),
    [aux_sym__stdin_null_token1] = ACTIONS(719),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(719),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(719),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(719),
    [sym_comment] = ACTIONS(719),
    [sym__space] = ACTIONS(719),
    [sym__eol] = ACTIONS(719),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(723),
    [aux_sym_host_declaration_token1] = ACTIONS(725),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(723),
    [aux_sym__address_family_token1] = ACTIONS(723),
    [aux_sym__batch_mode_token1] = ACTIONS(723),
    [aux_sym__bind_address_token1] = ACTIONS(723),
    [aux_sym__bind_interface_token1] = ACTIONS(723),
    [aux_sym__canonical_domains_token1] = ACTIONS(723),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(723),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(723),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(723),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(723),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(723),
    [aux_sym__certificate_file_token1] = ACTIONS(723),
    [aux_sym__check_host_ip_token1] = ACTIONS(723),
    [aux_sym__ciphers_token1] = ACTIONS(723),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(723),
    [aux_sym__compression_token1] = ACTIONS(723),
    [aux_sym__connection_attempts_token1] = ACTIONS(723),
    [aux_sym__connect_timeout_token1] = ACTIONS(723),
    [aux_sym__control_master_token1] = ACTIONS(723),
    [aux_sym__control_persist_token1] = ACTIONS(723),
    [aux_sym__control_path_token1] = ACTIONS(723),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(723),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(723),
    [aux_sym__escape_char_token1] = ACTIONS(723),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(723),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(723),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(723),
    [aux_sym__forward_agent_token1] = ACTIONS(723),
    [aux_sym__forward_x11_token1] = ACTIONS(725),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(723),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(723),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(723),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(723),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(723),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(723),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(723),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(723),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(723),
    [aux_sym__host_key_alias_token1] = ACTIONS(723),
    [aux_sym__hostname_token1] = ACTIONS(723),
    [aux_sym__identities_only_token1] = ACTIONS(723),
    [aux_sym__identity_agent_token1] = ACTIONS(723),
    [aux_sym__identity_file_token1] = ACTIONS(723),
    [aux_sym__ignore_unknown_token1] = ACTIONS(723),
    [aux_sym__ipqos_token1] = ACTIONS(723),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(723),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(723),
    [aux_sym__kex_algorithms_token1] = ACTIONS(723),
    [aux_sym__known_hosts_command_token1] = ACTIONS(723),
    [aux_sym__local_command_token1] = ACTIONS(723),
    [aux_sym__local_forward_token1] = ACTIONS(723),
    [aux_sym__log_level_token1] = ACTIONS(723),
    [aux_sym__log_verbose_token1] = ACTIONS(723),
    [aux_sym__macs_token1] = ACTIONS(723),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(723),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(723),
    [aux_sym__password_authentication_token1] = ACTIONS(723),
    [aux_sym__permit_local_command_token1] = ACTIONS(723),
    [aux_sym__permit_remote_open_token1] = ACTIONS(723),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(723),
    [aux_sym__port_token1] = ACTIONS(723),
    [aux_sym__preferred_authentications_token1] = ACTIONS(723),
    [aux_sym__proxy_command_token1] = ACTIONS(723),
    [aux_sym__proxy_jump_token1] = ACTIONS(723),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(723),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(723),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(723),
    [aux_sym__rekey_limit_token1] = ACTIONS(723),
    [aux_sym__remote_command_token1] = ACTIONS(723),
    [aux_sym__remote_forward_token1] = ACTIONS(723),
    [aux_sym__request_tty_token1] = ACTIONS(723),
    [aux_sym__required_rsa_size_token1] = ACTIONS(723),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(723),
    [aux_sym__security_key_provider_token1] = ACTIONS(723),
    [aux_sym__send_env_token1] = ACTIONS(723),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(723),
    [aux_sym__server_alive_interval_token1] = ACTIONS(723),
    [aux_sym__session_type_token1] = ACTIONS(723),
    [aux_sym__stdin_null_token1] = ACTIONS(723),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(723),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(723),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(723),
    [sym_comment] = ACTIONS(723),
    [sym__space] = ACTIONS(723),
    [sym__eol] = ACTIONS(723),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(727),
    [aux_sym_host_declaration_token1] = ACTIONS(729),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(727),
    [aux_sym__address_family_token1] = ACTIONS(727),
    [aux_sym__batch_mode_token1] = ACTIONS(727),
    [aux_sym__bind_address_token1] = ACTIONS(727),
    [aux_sym__bind_interface_token1] = ACTIONS(727),
    [aux_sym__canonical_domains_token1] = ACTIONS(727),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(727),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(727),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(727),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(727),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(727),
    [aux_sym__certificate_file_token1] = ACTIONS(727),
    [aux_sym__check_host_ip_token1] = ACTIONS(727),
    [aux_sym__ciphers_token1] = ACTIONS(727),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(727),
    [aux_sym__compression_token1] = ACTIONS(727),
    [aux_sym__connection_attempts_token1] = ACTIONS(727),
    [aux_sym__connect_timeout_token1] = ACTIONS(727),
    [aux_sym__control_master_token1] = ACTIONS(727),
    [aux_sym__control_persist_token1] = ACTIONS(727),
    [aux_sym__control_path_token1] = ACTIONS(727),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(727),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(727),
    [aux_sym__escape_char_token1] = ACTIONS(727),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(727),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(727),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(727),
    [aux_sym__forward_agent_token1] = ACTIONS(727),
    [aux_sym__forward_x11_token1] = ACTIONS(729),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(727),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(727),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(727),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(727),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(727),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(727),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(727),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(727),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(727),
    [aux_sym__host_key_alias_token1] = ACTIONS(727),
    [aux_sym__hostname_token1] = ACTIONS(727),
    [aux_sym__identities_only_token1] = ACTIONS(727),
    [aux_sym__identity_agent_token1] = ACTIONS(727),
    [aux_sym__identity_file_token1] = ACTIONS(727),
    [aux_sym__ignore_unknown_token1] = ACTIONS(727),
    [aux_sym__ipqos_token1] = ACTIONS(727),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(727),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(727),
    [aux_sym__kex_algorithms_token1] = ACTIONS(727),
    [aux_sym__known_hosts_command_token1] = ACTIONS(727),
    [aux_sym__local_command_token1] = ACTIONS(727),
    [aux_sym__local_forward_token1] = ACTIONS(727),
    [aux_sym__log_level_token1] = ACTIONS(727),
    [aux_sym__log_verbose_token1] = ACTIONS(727),
    [aux_sym__macs_token1] = ACTIONS(727),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(727),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(727),
    [aux_sym__password_authentication_token1] = ACTIONS(727),
    [aux_sym__permit_local_command_token1] = ACTIONS(727),
    [aux_sym__permit_remote_open_token1] = ACTIONS(727),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(727),
    [aux_sym__port_token1] = ACTIONS(727),
    [aux_sym__preferred_authentications_token1] = ACTIONS(727),
    [aux_sym__proxy_command_token1] = ACTIONS(727),
    [aux_sym__proxy_jump_token1] = ACTIONS(727),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(727),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(727),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(727),
    [aux_sym__rekey_limit_token1] = ACTIONS(727),
    [aux_sym__remote_command_token1] = ACTIONS(727),
    [aux_sym__remote_forward_token1] = ACTIONS(727),
    [aux_sym__request_tty_token1] = ACTIONS(727),
    [aux_sym__required_rsa_size_token1] = ACTIONS(727),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(727),
    [aux_sym__security_key_provider_token1] = ACTIONS(727),
    [aux_sym__send_env_token1] = ACTIONS(727),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(727),
    [aux_sym__server_alive_interval_token1] = ACTIONS(727),
    [aux_sym__session_type_token1] = ACTIONS(727),
    [aux_sym__stdin_null_token1] = ACTIONS(727),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(727),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(727),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(727),
    [sym_comment] = ACTIONS(727),
    [sym__space] = ACTIONS(727),
    [sym__eol] = ACTIONS(727),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(731),
    [aux_sym_host_declaration_token1] = ACTIONS(733),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(731),
    [aux_sym__address_family_token1] = ACTIONS(731),
    [aux_sym__batch_mode_token1] = ACTIONS(731),
    [aux_sym__bind_address_token1] = ACTIONS(731),
    [aux_sym__bind_interface_token1] = ACTIONS(731),
    [aux_sym__canonical_domains_token1] = ACTIONS(731),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(731),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(731),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(731),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(731),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(731),
    [aux_sym__certificate_file_token1] = ACTIONS(731),
    [aux_sym__check_host_ip_token1] = ACTIONS(731),
    [aux_sym__ciphers_token1] = ACTIONS(731),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(731),
    [aux_sym__compression_token1] = ACTIONS(731),
    [aux_sym__connection_attempts_token1] = ACTIONS(731),
    [aux_sym__connect_timeout_token1] = ACTIONS(731),
    [aux_sym__control_master_token1] = ACTIONS(731),
    [aux_sym__control_persist_token1] = ACTIONS(731),
    [aux_sym__control_path_token1] = ACTIONS(731),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(731),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(731),
    [aux_sym__escape_char_token1] = ACTIONS(731),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(731),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(731),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(731),
    [aux_sym__forward_agent_token1] = ACTIONS(731),
    [aux_sym__forward_x11_token1] = ACTIONS(733),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(731),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(731),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(731),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(731),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(731),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(731),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(731),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(731),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(731),
    [aux_sym__host_key_alias_token1] = ACTIONS(731),
    [aux_sym__hostname_token1] = ACTIONS(731),
    [aux_sym__identities_only_token1] = ACTIONS(731),
    [aux_sym__identity_agent_token1] = ACTIONS(731),
    [aux_sym__identity_file_token1] = ACTIONS(731),
    [aux_sym__ignore_unknown_token1] = ACTIONS(731),
    [aux_sym__ipqos_token1] = ACTIONS(731),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(731),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(731),
    [aux_sym__kex_algorithms_token1] = ACTIONS(731),
    [aux_sym__known_hosts_command_token1] = ACTIONS(731),
    [aux_sym__local_command_token1] = ACTIONS(731),
    [aux_sym__local_forward_token1] = ACTIONS(731),
    [aux_sym__log_level_token1] = ACTIONS(731),
    [aux_sym__log_verbose_token1] = ACTIONS(731),
    [aux_sym__macs_token1] = ACTIONS(731),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(731),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(731),
    [aux_sym__password_authentication_token1] = ACTIONS(731),
    [aux_sym__permit_local_command_token1] = ACTIONS(731),
    [aux_sym__permit_remote_open_token1] = ACTIONS(731),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(731),
    [aux_sym__port_token1] = ACTIONS(731),
    [aux_sym__preferred_authentications_token1] = ACTIONS(731),
    [aux_sym__proxy_command_token1] = ACTIONS(731),
    [aux_sym__proxy_jump_token1] = ACTIONS(731),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(731),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(731),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(731),
    [aux_sym__rekey_limit_token1] = ACTIONS(731),
    [aux_sym__remote_command_token1] = ACTIONS(731),
    [aux_sym__remote_forward_token1] = ACTIONS(731),
    [aux_sym__request_tty_token1] = ACTIONS(731),
    [aux_sym__required_rsa_size_token1] = ACTIONS(731),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(731),
    [aux_sym__security_key_provider_token1] = ACTIONS(731),
    [aux_sym__send_env_token1] = ACTIONS(731),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(731),
    [aux_sym__server_alive_interval_token1] = ACTIONS(731),
    [aux_sym__session_type_token1] = ACTIONS(731),
    [aux_sym__stdin_null_token1] = ACTIONS(731),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(731),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(731),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(731),
    [sym_comment] = ACTIONS(731),
    [sym__space] = ACTIONS(731),
    [sym__eol] = ACTIONS(731),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(735),
    [aux_sym_host_declaration_token1] = ACTIONS(737),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(735),
    [aux_sym__address_family_token1] = ACTIONS(735),
    [aux_sym__batch_mode_token1] = ACTIONS(735),
    [aux_sym__bind_address_token1] = ACTIONS(735),
    [aux_sym__bind_interface_token1] = ACTIONS(735),
    [aux_sym__canonical_domains_token1] = ACTIONS(735),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(735),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(735),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(735),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(735),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(735),
    [aux_sym__certificate_file_token1] = ACTIONS(735),
    [aux_sym__check_host_ip_token1] = ACTIONS(735),
    [aux_sym__ciphers_token1] = ACTIONS(735),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(735),
    [aux_sym__compression_token1] = ACTIONS(735),
    [aux_sym__connection_attempts_token1] = ACTIONS(735),
    [aux_sym__connect_timeout_token1] = ACTIONS(735),
    [aux_sym__control_master_token1] = ACTIONS(735),
    [aux_sym__control_persist_token1] = ACTIONS(735),
    [aux_sym__control_path_token1] = ACTIONS(735),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(735),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(735),
    [aux_sym__escape_char_token1] = ACTIONS(735),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(735),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(735),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(735),
    [aux_sym__forward_agent_token1] = ACTIONS(735),
    [aux_sym__forward_x11_token1] = ACTIONS(737),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(735),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(735),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(735),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(735),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(735),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(735),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(735),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(735),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(735),
    [aux_sym__host_key_alias_token1] = ACTIONS(735),
    [aux_sym__hostname_token1] = ACTIONS(735),
    [aux_sym__identities_only_token1] = ACTIONS(735),
    [aux_sym__identity_agent_token1] = ACTIONS(735),
    [aux_sym__identity_file_token1] = ACTIONS(735),
    [aux_sym__ignore_unknown_token1] = ACTIONS(735),
    [aux_sym__ipqos_token1] = ACTIONS(735),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(735),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(735),
    [aux_sym__kex_algorithms_token1] = ACTIONS(735),
    [aux_sym__known_hosts_command_token1] = ACTIONS(735),
    [aux_sym__local_command_token1] = ACTIONS(735),
    [aux_sym__local_forward_token1] = ACTIONS(735),
    [aux_sym__log_level_token1] = ACTIONS(735),
    [aux_sym__log_verbose_token1] = ACTIONS(735),
    [aux_sym__macs_token1] = ACTIONS(735),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(735),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(735),
    [aux_sym__password_authentication_token1] = ACTIONS(735),
    [aux_sym__permit_local_command_token1] = ACTIONS(735),
    [aux_sym__permit_remote_open_token1] = ACTIONS(735),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(735),
    [aux_sym__port_token1] = ACTIONS(735),
    [aux_sym__preferred_authentications_token1] = ACTIONS(735),
    [aux_sym__proxy_command_token1] = ACTIONS(735),
    [aux_sym__proxy_jump_token1] = ACTIONS(735),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(735),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(735),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(735),
    [aux_sym__rekey_limit_token1] = ACTIONS(735),
    [aux_sym__remote_command_token1] = ACTIONS(735),
    [aux_sym__remote_forward_token1] = ACTIONS(735),
    [aux_sym__request_tty_token1] = ACTIONS(735),
    [aux_sym__required_rsa_size_token1] = ACTIONS(735),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(735),
    [aux_sym__security_key_provider_token1] = ACTIONS(735),
    [aux_sym__send_env_token1] = ACTIONS(735),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(735),
    [aux_sym__server_alive_interval_token1] = ACTIONS(735),
    [aux_sym__session_type_token1] = ACTIONS(735),
    [aux_sym__stdin_null_token1] = ACTIONS(735),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(735),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(735),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(735),
    [sym_comment] = ACTIONS(735),
    [sym__space] = ACTIONS(735),
    [sym__eol] = ACTIONS(735),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_host_declaration_token1] = ACTIONS(739),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(177),
    [aux_sym__address_family_token1] = ACTIONS(177),
    [aux_sym__batch_mode_token1] = ACTIONS(177),
    [aux_sym__bind_address_token1] = ACTIONS(177),
    [aux_sym__bind_interface_token1] = ACTIONS(177),
    [aux_sym__canonical_domains_token1] = ACTIONS(177),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(177),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(177),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(177),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(177),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(177),
    [aux_sym__certificate_file_token1] = ACTIONS(177),
    [aux_sym__check_host_ip_token1] = ACTIONS(177),
    [aux_sym__ciphers_token1] = ACTIONS(177),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(177),
    [aux_sym__compression_token1] = ACTIONS(177),
    [aux_sym__connection_attempts_token1] = ACTIONS(177),
    [aux_sym__connect_timeout_token1] = ACTIONS(177),
    [aux_sym__control_master_token1] = ACTIONS(177),
    [aux_sym__control_persist_token1] = ACTIONS(177),
    [aux_sym__control_path_token1] = ACTIONS(177),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(177),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(177),
    [aux_sym__escape_char_token1] = ACTIONS(177),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(177),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(177),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(177),
    [aux_sym__forward_agent_token1] = ACTIONS(177),
    [aux_sym__forward_x11_token1] = ACTIONS(739),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(177),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(177),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(177),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(177),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(177),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(177),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(177),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(177),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(177),
    [aux_sym__host_key_alias_token1] = ACTIONS(177),
    [aux_sym__hostname_token1] = ACTIONS(177),
    [aux_sym__identities_only_token1] = ACTIONS(177),
    [aux_sym__identity_agent_token1] = ACTIONS(177),
    [aux_sym__identity_file_token1] = ACTIONS(177),
    [aux_sym__ignore_unknown_token1] = ACTIONS(177),
    [aux_sym__ipqos_token1] = ACTIONS(177),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(177),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(177),
    [aux_sym__kex_algorithms_token1] = ACTIONS(177),
    [aux_sym__known_hosts_command_token1] = ACTIONS(177),
    [aux_sym__local_command_token1] = ACTIONS(177),
    [aux_sym__local_forward_token1] = ACTIONS(177),
    [aux_sym__log_level_token1] = ACTIONS(177),
    [aux_sym__log_verbose_token1] = ACTIONS(177),
    [aux_sym__macs_token1] = ACTIONS(177),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(177),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(177),
    [aux_sym__password_authentication_token1] = ACTIONS(177),
    [aux_sym__permit_local_command_token1] = ACTIONS(177),
    [aux_sym__permit_remote_open_token1] = ACTIONS(177),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(177),
    [aux_sym__port_token1] = ACTIONS(177),
    [aux_sym__preferred_authentications_token1] = ACTIONS(177),
    [aux_sym__proxy_command_token1] = ACTIONS(177),
    [aux_sym__proxy_jump_token1] = ACTIONS(177),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(177),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(177),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(177),
    [aux_sym__rekey_limit_token1] = ACTIONS(177),
    [aux_sym__remote_command_token1] = ACTIONS(177),
    [aux_sym__remote_forward_token1] = ACTIONS(177),
    [aux_sym__request_tty_token1] = ACTIONS(177),
    [aux_sym__required_rsa_size_token1] = ACTIONS(177),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(177),
    [aux_sym__security_key_provider_token1] = ACTIONS(177),
    [aux_sym__send_env_token1] = ACTIONS(177),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(177),
    [aux_sym__server_alive_interval_token1] = ACTIONS(177),
    [aux_sym__session_type_token1] = ACTIONS(177),
    [aux_sym__stdin_null_token1] = ACTIONS(177),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(177),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(177),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
    [sym__space] = ACTIONS(177),
    [sym__eol] = ACTIONS(177),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(741),
    [aux_sym_host_declaration_token1] = ACTIONS(743),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(741),
    [aux_sym__address_family_token1] = ACTIONS(741),
    [aux_sym__batch_mode_token1] = ACTIONS(741),
    [aux_sym__bind_address_token1] = ACTIONS(741),
    [aux_sym__bind_interface_token1] = ACTIONS(741),
    [aux_sym__canonical_domains_token1] = ACTIONS(741),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(741),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(741),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(741),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(741),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(741),
    [aux_sym__certificate_file_token1] = ACTIONS(741),
    [aux_sym__check_host_ip_token1] = ACTIONS(741),
    [aux_sym__ciphers_token1] = ACTIONS(741),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(741),
    [aux_sym__compression_token1] = ACTIONS(741),
    [aux_sym__connection_attempts_token1] = ACTIONS(741),
    [aux_sym__connect_timeout_token1] = ACTIONS(741),
    [aux_sym__control_master_token1] = ACTIONS(741),
    [aux_sym__control_persist_token1] = ACTIONS(741),
    [aux_sym__control_path_token1] = ACTIONS(741),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(741),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(741),
    [aux_sym__escape_char_token1] = ACTIONS(741),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(741),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(741),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(741),
    [aux_sym__forward_agent_token1] = ACTIONS(741),
    [aux_sym__forward_x11_token1] = ACTIONS(743),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(741),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(741),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(741),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(741),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(741),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(741),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(741),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(741),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(741),
    [aux_sym__host_key_alias_token1] = ACTIONS(741),
    [aux_sym__hostname_token1] = ACTIONS(741),
    [aux_sym__identities_only_token1] = ACTIONS(741),
    [aux_sym__identity_agent_token1] = ACTIONS(741),
    [aux_sym__identity_file_token1] = ACTIONS(741),
    [aux_sym__ignore_unknown_token1] = ACTIONS(741),
    [aux_sym__ipqos_token1] = ACTIONS(741),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(741),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(741),
    [aux_sym__kex_algorithms_token1] = ACTIONS(741),
    [aux_sym__known_hosts_command_token1] = ACTIONS(741),
    [aux_sym__local_command_token1] = ACTIONS(741),
    [aux_sym__local_forward_token1] = ACTIONS(741),
    [aux_sym__log_level_token1] = ACTIONS(741),
    [aux_sym__log_verbose_token1] = ACTIONS(741),
    [aux_sym__macs_token1] = ACTIONS(741),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(741),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(741),
    [aux_sym__password_authentication_token1] = ACTIONS(741),
    [aux_sym__permit_local_command_token1] = ACTIONS(741),
    [aux_sym__permit_remote_open_token1] = ACTIONS(741),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(741),
    [aux_sym__port_token1] = ACTIONS(741),
    [aux_sym__preferred_authentications_token1] = ACTIONS(741),
    [aux_sym__proxy_command_token1] = ACTIONS(741),
    [aux_sym__proxy_jump_token1] = ACTIONS(741),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(741),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(741),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(741),
    [aux_sym__rekey_limit_token1] = ACTIONS(741),
    [aux_sym__remote_command_token1] = ACTIONS(741),
    [aux_sym__remote_forward_token1] = ACTIONS(741),
    [aux_sym__request_tty_token1] = ACTIONS(741),
    [aux_sym__required_rsa_size_token1] = ACTIONS(741),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(741),
    [aux_sym__security_key_provider_token1] = ACTIONS(741),
    [aux_sym__send_env_token1] = ACTIONS(741),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(741),
    [aux_sym__server_alive_interval_token1] = ACTIONS(741),
    [aux_sym__session_type_token1] = ACTIONS(741),
    [aux_sym__stdin_null_token1] = ACTIONS(741),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(741),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(741),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(741),
    [sym_comment] = ACTIONS(741),
    [sym__space] = ACTIONS(741),
    [sym__eol] = ACTIONS(741),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(745), 1,
      anon_sym_STAR,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(755), 1,
      sym__number,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(640), 1,
      sym_string,
    STATE(643), 1,
      sym_number,
    ACTIONS(751), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
    STATE(656), 2,
      sym__forward_value1,
      sym__file_string,
  [37] = 11,
    ACTIONS(745), 1,
      anon_sym_STAR,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(755), 1,
      sym__number,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(640), 1,
      sym_string,
    STATE(643), 1,
      sym_number,
    ACTIONS(751), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
    STATE(655), 2,
      sym__forward_value1,
      sym__file_string,
  [74] = 9,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(757), 1,
      anon_sym_STAR,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(615), 1,
      sym_string,
    ACTIONS(751), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
    STATE(585), 2,
      sym__forward_value2,
      sym__file_string,
  [105] = 9,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(757), 1,
      anon_sym_STAR,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(615), 1,
      sym_string,
    ACTIONS(751), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
    STATE(556), 2,
      sym__forward_value2,
      sym__file_string,
  [136] = 10,
    ACTIONS(751), 1,
      aux_sym__file_string_token1,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    ACTIONS(763), 1,
      aux_sym__file_token_token1,
    ACTIONS(765), 1,
      anon_sym_DOLLAR,
    ACTIONS(767), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(449), 1,
      sym__var_value,
    STATE(450), 1,
      sym__file_string,
    ACTIONS(759), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
  [169] = 6,
    ACTIONS(771), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(773), 1,
      aux_sym__file_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(775), 2,
      sym__space,
      sym__eol,
    STATE(57), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(769), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [192] = 6,
    ACTIONS(780), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(783), 1,
      aux_sym__file_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(786), 2,
      sym__space,
      sym__eol,
    STATE(57), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(777), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [215] = 7,
    ACTIONS(771), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(773), 1,
      aux_sym__file_string_token1,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(479), 1,
      sym__file_pattern_vars,
    STATE(57), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(769), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [240] = 7,
    ACTIONS(771), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(773), 1,
      aux_sym__file_string_token1,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(490), 1,
      sym__file_pattern_vars,
    STATE(57), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(769), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [265] = 6,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    ACTIONS(795), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(798), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(39), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(80), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(790), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [287] = 6,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(807), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(39), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(80), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(801), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [309] = 7,
    ACTIONS(809), 1,
      anon_sym_BANG,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    ACTIONS(817), 1,
      sym__eol,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(501), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [332] = 5,
    ACTIONS(805), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(807), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(40), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(80), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(801), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [351] = 7,
    ACTIONS(751), 1,
      aux_sym__file_string_token1,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    ACTIONS(763), 1,
      aux_sym__file_token_token1,
    ACTIONS(767), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(373), 1,
      sym__file_string,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
  [374] = 6,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(765), 1,
      anon_sym_DOLLAR,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(467), 1,
      sym__var_value,
    ACTIONS(821), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(464), 2,
      sym_string,
      sym__boolean,
  [395] = 7,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 1,
      anon_sym_none,
    ACTIONS(827), 1,
      aux_sym__file_string_token1,
    STATE(108), 1,
      aux_sym_pattern_repeat1,
    STATE(271), 1,
      sym__cnames_map,
    STATE(272), 1,
      sym_pattern,
    ACTIONS(825), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [418] = 7,
    ACTIONS(829), 1,
      anon_sym_DQUOTE,
    ACTIONS(831), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(833), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(835), 1,
      aux_sym__file_string_token1,
    STATE(51), 1,
      aux_sym__hosts_string_repeat1,
    STATE(444), 1,
      sym__hosts_string,
    STATE(109), 2,
      sym__hosts_token,
      sym_variable,
  [441] = 7,
    ACTIONS(809), 1,
      anon_sym_BANG,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    ACTIONS(837), 1,
      sym__eol,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(501), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [464] = 6,
    ACTIONS(839), 1,
      aux_sym__file_token_token1,
    ACTIONS(842), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(845), 1,
      aux_sym__file_string_token1,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(848), 2,
      sym__space,
      sym__eol,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
  [485] = 7,
    ACTIONS(751), 1,
      aux_sym__file_string_token1,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    ACTIONS(763), 1,
      aux_sym__file_token_token1,
    ACTIONS(767), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(411), 1,
      sym__file_string,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
  [508] = 7,
    ACTIONS(809), 1,
      anon_sym_BANG,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    ACTIONS(850), 1,
      sym__eol,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(501), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [531] = 6,
    ACTIONS(831), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(833), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(835), 1,
      aux_sym__file_string_token1,
    STATE(52), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(852), 2,
      sym__space,
      sym__eol,
    STATE(109), 2,
      sym__hosts_token,
      sym_variable,
  [552] = 6,
    ACTIONS(854), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(857), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(860), 1,
      aux_sym__file_string_token1,
    STATE(52), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(863), 2,
      sym__space,
      sym__eol,
    STATE(109), 2,
      sym__hosts_token,
      sym_variable,
  [573] = 6,
    ACTIONS(751), 1,
      aux_sym__file_string_token1,
    ACTIONS(763), 1,
      aux_sym__file_token_token1,
    ACTIONS(767), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(48), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(865), 2,
      sym__space,
      sym__eol,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
  [594] = 7,
    ACTIONS(809), 1,
      anon_sym_BANG,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    ACTIONS(867), 1,
      sym__eol,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(501), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [617] = 7,
    ACTIONS(751), 1,
      aux_sym__file_string_token1,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    ACTIONS(763), 1,
      aux_sym__file_token_token1,
    ACTIONS(767), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(583), 1,
      sym__file_string,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
  [640] = 7,
    ACTIONS(751), 1,
      aux_sym__file_string_token1,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    ACTIONS(763), 1,
      aux_sym__file_token_token1,
    ACTIONS(767), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__file_string_repeat1,
    STATE(448), 1,
      sym__file_string,
    STATE(126), 2,
      sym__file_token,
      sym_variable,
  [663] = 2,
    ACTIONS(871), 1,
      aux_sym__file_string_token1,
    ACTIONS(869), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [675] = 7,
    ACTIONS(873), 1,
      anon_sym_none,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(879), 1,
      aux_sym__file_string_token1,
    STATE(81), 1,
      aux_sym__proxy_string_content,
    STATE(147), 1,
      sym__proxy_token,
    STATE(362), 1,
      sym__proxy_string,
  [697] = 6,
    ACTIONS(881), 1,
      aux_sym_time_token1,
    ACTIONS(883), 1,
      aux_sym_time_token2,
    ACTIONS(885), 1,
      aux_sym_time_token3,
    ACTIONS(887), 1,
      aux_sym_time_token4,
    ACTIONS(889), 1,
      aux_sym_time_token5,
    ACTIONS(891), 2,
      sym__space,
      sym__eol,
  [717] = 6,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(898), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(901), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(60), 1,
      aux_sym__hosts_string_repeat2,
    STATE(174), 2,
      sym__hosts_token,
      sym_variable,
  [737] = 6,
    ACTIONS(904), 1,
      anon_sym_DQUOTE,
    ACTIONS(906), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(908), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(910), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(60), 1,
      aux_sym__hosts_string_repeat2,
    STATE(174), 2,
      sym__hosts_token,
      sym_variable,
  [757] = 6,
    ACTIONS(912), 1,
      anon_sym_DQUOTE,
    ACTIONS(914), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(917), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(62), 1,
      aux_sym__file_string_repeat2,
    STATE(160), 2,
      sym__file_token,
      sym_variable,
  [777] = 6,
    ACTIONS(809), 1,
      anon_sym_BANG,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(501), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [797] = 5,
    ACTIONS(925), 1,
      aux_sym__permit_remote_open_value_token2,
    ACTIONS(927), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(66), 1,
      aux_sym__file_string_repeat2,
    ACTIONS(923), 2,
      aux_sym__log_verbose_quoted_token1,
      aux_sym__file_token_token1,
    STATE(160), 2,
      sym__file_token,
      sym_variable,
  [815] = 6,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    ACTIONS(929), 1,
      anon_sym_BANG,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(256), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [835] = 6,
    ACTIONS(923), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    ACTIONS(933), 1,
      aux_sym__file_token_token1,
    ACTIONS(935), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(62), 1,
      aux_sym__file_string_repeat2,
    STATE(160), 2,
      sym__file_token,
      sym_variable,
  [855] = 4,
    ACTIONS(939), 1,
      anon_sym_confirm,
    ACTIONS(941), 1,
      sym__number,
    STATE(505), 2,
      sym__boolean,
      sym_time,
    ACTIONS(937), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [871] = 2,
    ACTIONS(945), 1,
      aux_sym__file_string_token1,
    ACTIONS(943), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [883] = 6,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      aux_sym__file_string_token1,
    STATE(108), 1,
      aux_sym_pattern_repeat1,
    STATE(272), 1,
      sym_pattern,
    STATE(516), 1,
      sym__cnames_map,
    ACTIONS(825), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [903] = 4,
    ACTIONS(952), 1,
      aux_sym__file_string_token1,
    STATE(70), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(949), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(947), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [919] = 4,
    ACTIONS(959), 1,
      aux_sym__file_string_token1,
    STATE(70), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(957), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(955), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [935] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      aux_sym__file_string_token1,
    STATE(71), 1,
      aux_sym_pattern_repeat1,
    STATE(205), 1,
      sym_pattern,
    ACTIONS(961), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [952] = 5,
    ACTIONS(923), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(933), 1,
      aux_sym__file_token_token1,
    ACTIONS(935), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(66), 1,
      aux_sym__file_string_repeat2,
    STATE(160), 2,
      sym__file_token,
      sym_variable,
  [969] = 4,
    ACTIONS(968), 1,
      aux_sym__file_string_token1,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(947), 2,
      sym__space,
      sym__eol,
    ACTIONS(965), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [984] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(514), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1001] = 3,
    STATE(105), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(973), 2,
      sym__space,
      sym__eol,
    ACTIONS(971), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1014] = 3,
    ACTIONS(977), 1,
      anon_sym_auto,
    STATE(483), 1,
      sym__boolean,
    ACTIONS(975), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1027] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      aux_sym__file_string_token1,
    STATE(108), 1,
      aux_sym_pattern_repeat1,
    STATE(201), 1,
      sym_pattern,
    ACTIONS(825), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1044] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      aux_sym__file_string_token1,
    STATE(71), 1,
      aux_sym_pattern_repeat1,
    STATE(196), 1,
      sym_pattern,
    ACTIONS(961), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1061] = 2,
    ACTIONS(981), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(979), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1072] = 5,
    ACTIONS(877), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(879), 1,
      aux_sym__file_string_token1,
    STATE(100), 1,
      aux_sym__proxy_string_content,
    STATE(147), 1,
      sym__proxy_token,
    ACTIONS(983), 2,
      sym__space,
      sym__eol,
  [1089] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(265), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1106] = 5,
    ACTIONS(985), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(988), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym__hostname_string_repeat1,
    STATE(176), 1,
      sym__hostname_token,
    ACTIONS(991), 2,
      sym__space,
      sym__eol,
  [1123] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(498), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1140] = 6,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
    ACTIONS(995), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(997), 1,
      aux_sym__file_string_token1,
    STATE(93), 1,
      aux_sym__hostname_string_repeat1,
    STATE(176), 1,
      sym__hostname_token,
    STATE(452), 1,
      sym__hostname_string,
  [1159] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(542), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1176] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(324), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1193] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(499), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1210] = 5,
    ACTIONS(906), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(908), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(910), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(61), 1,
      aux_sym__hosts_string_repeat2,
    STATE(174), 2,
      sym__hosts_token,
      sym_variable,
  [1227] = 4,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(163), 1,
      sym__log_verbose_value,
    ACTIONS(999), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1242] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(595), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1259] = 5,
    ACTIONS(1005), 1,
      anon_sym_STAR,
    ACTIONS(1007), 1,
      anon_sym_DQUOTE,
    ACTIONS(1009), 1,
      aux_sym__permit_remote_open_value_token1,
    STATE(354), 1,
      sym__permit_remote_open_value,
    ACTIONS(1003), 2,
      anon_sym_none,
      anon_sym_any,
  [1276] = 5,
    ACTIONS(995), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(997), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym__hostname_string_repeat1,
    STATE(176), 1,
      sym__hostname_token,
    ACTIONS(1011), 2,
      sym__space,
      sym__eol,
  [1293] = 2,
    STATE(418), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1013), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [1304] = 4,
    ACTIONS(1015), 1,
      anon_sym_DASH,
    STATE(76), 1,
      aux_sym__send_env_value_repeat1,
    STATE(382), 1,
      sym__send_env_value,
    ACTIONS(971), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1319] = 2,
    STATE(401), 1,
      sym__boolean,
    ACTIONS(1017), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [1330] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__file_string_token1,
    STATE(99), 1,
      aux_sym_pattern_repeat1,
    STATE(395), 1,
      sym_pattern,
    ACTIONS(811), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1347] = 5,
    ACTIONS(1005), 1,
      anon_sym_STAR,
    ACTIONS(1007), 1,
      anon_sym_DQUOTE,
    ACTIONS(1009), 1,
      aux_sym__permit_remote_open_value_token1,
    STATE(571), 1,
      sym__permit_remote_open_value,
    ACTIONS(1019), 2,
      anon_sym_none,
      anon_sym_any,
  [1364] = 4,
    ACTIONS(1023), 1,
      aux_sym__file_string_token1,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(955), 2,
      sym__space,
      sym__eol,
    ACTIONS(1021), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1379] = 5,
    ACTIONS(1025), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1028), 1,
      aux_sym__file_string_token1,
    STATE(100), 1,
      aux_sym__proxy_string_content,
    STATE(147), 1,
      sym__proxy_token,
    ACTIONS(1031), 2,
      sym__space,
      sym__eol,
  [1396] = 6,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(879), 1,
      aux_sym__file_string_token1,
    STATE(81), 1,
      aux_sym__proxy_string_content,
    STATE(147), 1,
      sym__proxy_token,
    STATE(577), 1,
      sym__proxy_string,
  [1415] = 3,
    STATE(105), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1033), 2,
      sym__space,
      sym__eol,
    ACTIONS(971), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1428] = 4,
    ACTIONS(1015), 1,
      anon_sym_DASH,
    STATE(76), 1,
      aux_sym__send_env_value_repeat1,
    STATE(586), 1,
      sym__send_env_value,
    ACTIONS(971), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1443] = 5,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      aux_sym__file_string_token1,
    STATE(71), 1,
      aux_sym_pattern_repeat1,
    STATE(201), 1,
      sym_pattern,
    ACTIONS(961), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1460] = 3,
    STATE(105), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1038), 2,
      sym__space,
      sym__eol,
    ACTIONS(1035), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1473] = 2,
    ACTIONS(945), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(943), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1484] = 4,
    ACTIONS(1043), 1,
      aux_sym__file_string_token1,
    STATE(107), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(947), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1040), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1499] = 4,
    ACTIONS(1048), 1,
      aux_sym__file_string_token1,
    STATE(107), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(955), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1046), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1514] = 2,
    ACTIONS(1052), 1,
      aux_sym__file_string_token1,
    ACTIONS(1050), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1524] = 4,
    ACTIONS(1054), 1,
      anon_sym_COLON,
    ACTIONS(1059), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(110), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1056), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1538] = 4,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
    ACTIONS(1065), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(111), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1062), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1552] = 2,
    ACTIONS(945), 1,
      aux_sym__file_string_token1,
    ACTIONS(943), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1562] = 2,
    ACTIONS(945), 1,
      aux_sym__file_string_token1,
    ACTIONS(943), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1572] = 1,
    ACTIONS(1068), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [1580] = 5,
    ACTIONS(1070), 1,
      anon_sym_DQUOTE,
    ACTIONS(1072), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1074), 1,
      aux_sym__proxy_token_token1,
    STATE(134), 1,
      aux_sym__proxy_string_repeat1,
    STATE(293), 1,
      sym__proxy_token,
  [1596] = 3,
    ACTIONS(1076), 1,
      anon_sym_COLON,
    STATE(116), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1078), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1608] = 3,
    ACTIONS(1083), 1,
      sym__var_name,
    STATE(388), 1,
      sym__set_env_value,
    ACTIONS(1081), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [1620] = 3,
    STATE(130), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(357), 1,
      sym__log_verbose_value,
    ACTIONS(999), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1632] = 5,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(765), 1,
      anon_sym_DOLLAR,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(409), 1,
      sym_string,
    STATE(410), 1,
      sym__var_value,
  [1648] = 2,
    STATE(413), 1,
      sym__boolean,
    ACTIONS(1085), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [1658] = 4,
    ACTIONS(1087), 1,
      anon_sym_COLON,
    ACTIONS(1091), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(110), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1089), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1672] = 4,
    ACTIONS(1091), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1093), 1,
      anon_sym_COLON,
    STATE(110), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1089), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1686] = 4,
    ACTIONS(1095), 1,
      sym_token,
    ACTIONS(1098), 1,
      aux_sym__file_string_token1,
    STATE(123), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(1101), 2,
      sym__space,
      sym__eol,
  [1700] = 5,
    ACTIONS(1103), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      sym_token,
    ACTIONS(1107), 1,
      aux_sym__file_string_token1,
    STATE(127), 1,
      aux_sym__token_string_repeat1,
    STATE(552), 1,
      sym__token_string,
  [1716] = 5,
    ACTIONS(1103), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      sym_token,
    ACTIONS(1107), 1,
      aux_sym__file_string_token1,
    STATE(127), 1,
      aux_sym__token_string_repeat1,
    STATE(335), 1,
      sym__token_string,
  [1732] = 2,
    ACTIONS(1111), 1,
      aux_sym__file_string_token1,
    ACTIONS(1109), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1742] = 4,
    ACTIONS(1105), 1,
      sym_token,
    ACTIONS(1107), 1,
      aux_sym__file_string_token1,
    STATE(123), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(1113), 2,
      sym__space,
      sym__eol,
  [1756] = 4,
    ACTIONS(1117), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(122), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(309), 1,
      sym__log_verbose_quoted,
    ACTIONS(1115), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1770] = 4,
    ACTIONS(1117), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(122), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(611), 1,
      sym__log_verbose_quoted,
    ACTIONS(1115), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1784] = 3,
    ACTIONS(1119), 1,
      anon_sym_COLON,
    STATE(116), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1121), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1796] = 5,
    ACTIONS(1123), 1,
      anon_sym_DQUOTE,
    ACTIONS(1125), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1128), 1,
      aux_sym__hostname_token_token1,
    STATE(131), 1,
      aux_sym__hostname_string_repeat2,
    STATE(350), 1,
      sym__hostname_token,
  [1812] = 5,
    ACTIONS(1131), 1,
      anon_sym_DQUOTE,
    ACTIONS(1133), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1135), 1,
      aux_sym__hostname_token_token1,
    STATE(131), 1,
      aux_sym__hostname_string_repeat2,
    STATE(350), 1,
      sym__hostname_token,
  [1828] = 3,
    ACTIONS(1137), 1,
      anon_sym_COLON,
    STATE(116), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1121), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1840] = 5,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1144), 1,
      aux_sym__proxy_token_token1,
    STATE(134), 1,
      aux_sym__proxy_string_repeat1,
    STATE(293), 1,
      sym__proxy_token,
  [1856] = 3,
    ACTIONS(941), 1,
      sym__number,
    ACTIONS(1147), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(480), 2,
      sym__boolean,
      sym_time,
  [1868] = 4,
    ACTIONS(1151), 1,
      anon_sym_DQUOTE,
    ACTIONS(1153), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(111), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1149), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1882] = 2,
    ACTIONS(1157), 1,
      sym_key_sig,
    ACTIONS(1155), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [1891] = 2,
    ACTIONS(945), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(943), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1900] = 2,
    STATE(102), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(971), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1909] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1161), 2,
      sym__space,
      sym__eol,
  [1920] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1165), 2,
      sym__space,
      sym__eol,
  [1931] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1161), 2,
      sym__space,
      sym__eol,
  [1942] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1167), 2,
      sym__space,
      sym__eol,
  [1953] = 3,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1172), 2,
      sym__space,
      sym__eol,
  [1964] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1176), 2,
      sym__space,
      sym__eol,
  [1975] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1176), 2,
      sym__space,
      sym__eol,
  [1986] = 2,
    ACTIONS(1180), 1,
      aux_sym__file_string_token1,
    ACTIONS(1178), 3,
      aux_sym__proxy_token_token1,
      sym__space,
      sym__eol,
  [1995] = 4,
    ACTIONS(1072), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1074), 1,
      aux_sym__proxy_token_token1,
    STATE(115), 1,
      aux_sym__proxy_string_repeat1,
    STATE(293), 1,
      sym__proxy_token,
  [2008] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1185), 2,
      sym__space,
      sym__eol,
  [2019] = 3,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1189), 2,
      sym__space,
      sym__eol,
  [2030] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1193), 2,
      sym__space,
      sym__eol,
  [2041] = 3,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1198), 2,
      sym__space,
      sym__eol,
  [2052] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1200), 2,
      sym__space,
      sym__eol,
  [2063] = 3,
    ACTIONS(1204), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(121), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1202), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2074] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1200), 2,
      sym__space,
      sym__eol,
  [2085] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1206), 2,
      sym__space,
      sym__eol,
  [2096] = 4,
    ACTIONS(1208), 1,
      anon_sym_DQUOTE,
    ACTIONS(1210), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1213), 1,
      sym_token,
    STATE(157), 1,
      aux_sym__token_string_repeat2,
  [2109] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1206), 2,
      sym__space,
      sym__eol,
  [2120] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1219), 2,
      sym__space,
      sym__eol,
  [2131] = 2,
    ACTIONS(1223), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1221), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2140] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1227), 2,
      sym__space,
      sym__eol,
  [2151] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1229), 2,
      sym__space,
      sym__eol,
  [2162] = 3,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1233), 2,
      sym__space,
      sym__eol,
  [2173] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1235), 2,
      sym__space,
      sym__eol,
  [2184] = 3,
    ACTIONS(1237), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1240), 2,
      sym__space,
      sym__eol,
  [2195] = 3,
    ACTIONS(1244), 1,
      sym__number,
    STATE(544), 1,
      sym_number,
    ACTIONS(1242), 2,
      anon_sym_none,
      sym_ipqos,
  [2206] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1246), 2,
      sym__space,
      sym__eol,
  [2217] = 2,
    ACTIONS(1250), 1,
      aux_sym__file_string_token1,
    ACTIONS(1248), 3,
      sym_token,
      sym__space,
      sym__eol,
  [2226] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1252), 2,
      sym__space,
      sym__eol,
  [2237] = 3,
    ACTIONS(1254), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1257), 2,
      sym__space,
      sym__eol,
  [2248] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1259), 2,
      sym__space,
      sym__eol,
  [2259] = 3,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1252), 2,
      sym__space,
      sym__eol,
  [2270] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1261), 2,
      sym__space,
      sym__eol,
  [2281] = 2,
    ACTIONS(1265), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1263), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2290] = 4,
    ACTIONS(1267), 1,
      anon_sym_DQUOTE,
    ACTIONS(1269), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1271), 1,
      sym_token,
    STATE(157), 1,
      aux_sym__token_string_repeat2,
  [2303] = 2,
    ACTIONS(1275), 1,
      aux_sym__file_string_token1,
    ACTIONS(1273), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [2312] = 4,
    ACTIONS(1133), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1135), 1,
      aux_sym__hostname_token_token1,
    STATE(132), 1,
      aux_sym__hostname_string_repeat2,
    STATE(350), 1,
      sym__hostname_token,
  [2325] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1277), 2,
      sym__space,
      sym__eol,
  [2336] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1279), 2,
      sym__space,
      sym__eol,
  [2347] = 3,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1281), 2,
      sym__space,
      sym__eol,
  [2358] = 2,
    STATE(133), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1283), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2367] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1285), 2,
      sym__space,
      sym__eol,
  [2378] = 3,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1285), 2,
      sym__space,
      sym__eol,
  [2389] = 3,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1287), 2,
      sym__space,
      sym__eol,
  [2400] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1289), 2,
      sym__space,
      sym__eol,
  [2411] = 2,
    ACTIONS(1293), 1,
      sym_cipher,
    ACTIONS(1291), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2420] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1289), 2,
      sym__space,
      sym__eol,
  [2431] = 3,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1298), 2,
      sym__space,
      sym__eol,
  [2442] = 3,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1303), 2,
      sym__space,
      sym__eol,
  [2453] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1305), 2,
      sym__space,
      sym__eol,
  [2464] = 2,
    ACTIONS(945), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(943), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2473] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1307), 2,
      sym__space,
      sym__eol,
  [2484] = 1,
    ACTIONS(1309), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [2491] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1311), 2,
      sym__space,
      sym__eol,
  [2502] = 1,
    ACTIONS(1313), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2509] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1317), 2,
      sym__space,
      sym__eol,
  [2520] = 3,
    ACTIONS(1321), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(136), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1319), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2531] = 2,
    ACTIONS(1325), 1,
      sym_mac,
    ACTIONS(1323), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2540] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1327), 2,
      sym__space,
      sym__eol,
  [2551] = 3,
    ACTIONS(1244), 1,
      sym__number,
    STATE(447), 1,
      sym_number,
    ACTIONS(1329), 2,
      anon_sym_none,
      sym_ipqos,
  [2562] = 1,
    ACTIONS(1298), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2569] = 2,
    ACTIONS(1333), 1,
      sym_kex,
    ACTIONS(1331), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2578] = 4,
    ACTIONS(1335), 1,
      aux_sym_time_token2,
    ACTIONS(1337), 1,
      aux_sym_time_token3,
    ACTIONS(1339), 1,
      aux_sym_time_token4,
    ACTIONS(1341), 1,
      aux_sym_time_token5,
  [2591] = 2,
    ACTIONS(1345), 1,
      sym_key_sig,
    ACTIONS(1343), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2600] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1347), 2,
      sym__space,
      sym__eol,
  [2611] = 2,
    ACTIONS(1351), 1,
      sym_key_sig,
    ACTIONS(1349), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2620] = 3,
    ACTIONS(1315), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1353), 2,
      sym__space,
      sym__eol,
  [2631] = 3,
    ACTIONS(1355), 1,
      sym__space,
    ACTIONS(1357), 1,
      sym__eol,
    STATE(246), 1,
      aux_sym_host_declaration_repeat1,
  [2641] = 2,
    ACTIONS(1361), 1,
      sym_sig,
    ACTIONS(1359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2649] = 2,
    STATE(471), 1,
      sym__boolean,
    ACTIONS(1363), 2,
      anon_sym_yes,
      anon_sym_no,
  [2657] = 3,
    ACTIONS(1365), 1,
      aux_sym__sep_token1,
    ACTIONS(1367), 1,
      sym__space,
    STATE(219), 1,
      sym__sep,
  [2667] = 2,
    STATE(463), 1,
      sym__boolean,
    ACTIONS(1369), 2,
      anon_sym_yes,
      anon_sym_no,
  [2675] = 2,
    STATE(460), 1,
      sym__boolean,
    ACTIONS(1371), 2,
      anon_sym_yes,
      anon_sym_no,
  [2683] = 3,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      sym_string,
  [2693] = 2,
    STATE(459), 1,
      sym__boolean,
    ACTIONS(1373), 2,
      anon_sym_yes,
      anon_sym_no,
  [2701] = 2,
    STATE(458), 1,
      sym__boolean,
    ACTIONS(1375), 2,
      anon_sym_yes,
      anon_sym_no,
  [2709] = 2,
    STATE(456), 1,
      sym__boolean,
    ACTIONS(1377), 2,
      anon_sym_yes,
      anon_sym_no,
  [2717] = 3,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(454), 1,
      sym_string,
  [2727] = 2,
    STATE(451), 1,
      sym__boolean,
    ACTIONS(1379), 2,
      anon_sym_yes,
      anon_sym_no,
  [2735] = 3,
    ACTIONS(1381), 1,
      aux_sym__sep_token1,
    ACTIONS(1383), 1,
      sym__space,
    STATE(85), 1,
      sym__sep,
  [2745] = 3,
    ACTIONS(1385), 1,
      aux_sym__sep_token1,
    ACTIONS(1387), 1,
      sym__space,
    STATE(218), 1,
      sym__sep,
  [2755] = 2,
    ACTIONS(1389), 1,
      sym__number,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2763] = 2,
    STATE(446), 1,
      sym__boolean,
    ACTIONS(1393), 2,
      anon_sym_yes,
      anon_sym_no,
  [2771] = 3,
    ACTIONS(1395), 1,
      aux_sym__sep_token1,
    ACTIONS(1397), 1,
      sym__space,
    STATE(206), 1,
      sym__sep,
  [2781] = 2,
    ACTIONS(1399), 1,
      sym__number,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2789] = 3,
    ACTIONS(1401), 1,
      aux_sym__sep_token1,
    ACTIONS(1403), 1,
      sym__space,
    STATE(217), 1,
      sym__sep,
  [2799] = 2,
    ACTIONS(1405), 1,
      sym__number,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2807] = 2,
    STATE(437), 1,
      sym__boolean,
    ACTIONS(1407), 2,
      anon_sym_yes,
      anon_sym_no,
  [2815] = 2,
    STATE(435), 1,
      sym__boolean,
    ACTIONS(1409), 2,
      anon_sym_yes,
      anon_sym_no,
  [2823] = 2,
    STATE(434), 1,
      sym__boolean,
    ACTIONS(1411), 2,
      anon_sym_yes,
      anon_sym_no,
  [2831] = 3,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      sym_string,
  [2841] = 3,
    ACTIONS(1413), 1,
      sym__space,
    ACTIONS(1416), 1,
      sym__eol,
    STATE(232), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [2851] = 3,
    ACTIONS(1418), 1,
      sym__space,
    ACTIONS(1421), 1,
      sym__eol,
    STATE(233), 1,
      aux_sym__canonical_domains_repeat1,
  [2861] = 3,
    ACTIONS(1423), 1,
      aux_sym__sep_token1,
    ACTIONS(1425), 1,
      sym__space,
    STATE(204), 1,
      sym__sep,
  [2871] = 3,
    ACTIONS(1427), 1,
      anon_sym_none,
    ACTIONS(1429), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(1431), 1,
      aux_sym__proxy_jump_arg_token1,
  [2881] = 2,
    STATE(421), 1,
      sym__boolean,
    ACTIONS(1433), 2,
      anon_sym_yes,
      anon_sym_no,
  [2889] = 3,
    ACTIONS(1435), 1,
      aux_sym__sep_token1,
    ACTIONS(1437), 1,
      sym__space,
    STATE(90), 1,
      sym__sep,
  [2899] = 3,
    ACTIONS(1439), 1,
      anon_sym_none,
    ACTIONS(1441), 1,
      sym__number,
    STATE(416), 1,
      sym_bytes,
  [2909] = 3,
    ACTIONS(1443), 1,
      aux_sym__sep_token1,
    ACTIONS(1445), 1,
      sym__space,
    STATE(216), 1,
      sym__sep,
  [2919] = 3,
    ACTIONS(1447), 1,
      aux_sym__sep_token1,
    ACTIONS(1449), 1,
      sym__space,
    STATE(215), 1,
      sym__sep,
  [2929] = 3,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    ACTIONS(1454), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      aux_sym__log_verbose_repeat2,
  [2939] = 3,
    ACTIONS(1337), 1,
      aux_sym_time_token3,
    ACTIONS(1339), 1,
      aux_sym_time_token4,
    ACTIONS(1341), 1,
      aux_sym_time_token5,
  [2949] = 3,
    ACTIONS(1456), 1,
      aux_sym__sep_token1,
    ACTIONS(1458), 1,
      sym__space,
    STATE(214), 1,
      sym__sep,
  [2959] = 3,
    ACTIONS(1244), 1,
      sym__number,
    ACTIONS(1460), 1,
      anon_sym_STAR,
    STATE(255), 1,
      sym_number,
  [2969] = 3,
    ACTIONS(1462), 1,
      aux_sym_time_token3,
    ACTIONS(1464), 1,
      aux_sym_time_token4,
    ACTIONS(1466), 1,
      aux_sym_time_token5,
  [2979] = 3,
    ACTIONS(1468), 1,
      sym__space,
    ACTIONS(1471), 1,
      sym__eol,
    STATE(246), 1,
      aux_sym_host_declaration_repeat1,
  [2989] = 2,
    STATE(398), 1,
      sym__boolean,
    ACTIONS(1473), 2,
      anon_sym_yes,
      anon_sym_no,
  [2997] = 3,
    ACTIONS(1475), 1,
      aux_sym__sep_token1,
    ACTIONS(1477), 1,
      sym__space,
    STATE(213), 1,
      sym__sep,
  [3007] = 2,
    STATE(400), 1,
      sym__boolean,
    ACTIONS(1479), 2,
      anon_sym_yes,
      anon_sym_no,
  [3015] = 3,
    ACTIONS(1244), 1,
      sym__number,
    ACTIONS(1481), 1,
      anon_sym_STAR,
    STATE(442), 1,
      sym_number,
  [3025] = 3,
    ACTIONS(1483), 1,
      aux_sym__sep_token1,
    ACTIONS(1485), 1,
      sym__space,
    STATE(521), 1,
      sym__sep,
  [3035] = 3,
    ACTIONS(1487), 1,
      aux_sym__sep_token1,
    ACTIONS(1489), 1,
      sym__space,
    STATE(212), 1,
      sym__sep,
  [3045] = 3,
    ACTIONS(1491), 1,
      aux_sym__sep_token1,
    ACTIONS(1493), 1,
      sym__space,
    STATE(44), 1,
      sym__sep,
  [3055] = 3,
    ACTIONS(1495), 1,
      aux_sym__sep_token1,
    ACTIONS(1497), 1,
      sym__space,
    STATE(210), 1,
      sym__sep,
  [3065] = 1,
    ACTIONS(1499), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3071] = 3,
    ACTIONS(1501), 1,
      sym__space,
    ACTIONS(1503), 1,
      sym__eol,
    STATE(390), 1,
      aux_sym_host_declaration_repeat1,
  [3081] = 2,
    ACTIONS(1505), 1,
      sym__number,
    ACTIONS(1507), 2,
      sym__space,
      sym__eol,
  [3089] = 3,
    ACTIONS(1509), 1,
      aux_sym__sep_token1,
    ACTIONS(1511), 1,
      sym__space,
    STATE(522), 1,
      sym__sep,
  [3099] = 3,
    ACTIONS(1513), 1,
      aux_sym__sep_token1,
    ACTIONS(1515), 1,
      sym__space,
    STATE(268), 1,
      sym__sep,
  [3109] = 3,
    ACTIONS(1517), 1,
      aux_sym__sep_token1,
    ACTIONS(1519), 1,
      sym__space,
    STATE(523), 1,
      sym__sep,
  [3119] = 3,
    ACTIONS(1521), 1,
      aux_sym__sep_token1,
    ACTIONS(1523), 1,
      sym__space,
    STATE(274), 1,
      sym__sep,
  [3129] = 2,
    ACTIONS(1525), 1,
      sym__number,
    ACTIONS(1507), 2,
      sym__space,
      sym__eol,
  [3137] = 2,
    ACTIONS(1527), 1,
      sym__number,
    ACTIONS(1529), 2,
      sym__space,
      sym__eol,
  [3145] = 3,
    ACTIONS(1531), 1,
      sym__space,
    ACTIONS(1534), 1,
      sym__eol,
    STATE(264), 1,
      aux_sym__send_env_repeat1,
  [3155] = 3,
    ACTIONS(1536), 1,
      sym__space,
    ACTIONS(1538), 1,
      sym__eol,
    STATE(379), 1,
      aux_sym__canonical_domains_repeat1,
  [3165] = 3,
    ACTIONS(1540), 1,
      sym__space,
    ACTIONS(1543), 1,
      sym__eol,
    STATE(266), 1,
      aux_sym__set_env_repeat1,
  [3175] = 3,
    ACTIONS(1545), 1,
      aux_sym__sep_token1,
    ACTIONS(1547), 1,
      sym__space,
    STATE(65), 1,
      sym__sep,
  [3185] = 2,
    STATE(473), 1,
      sym__boolean,
    ACTIONS(1549), 2,
      anon_sym_yes,
      anon_sym_no,
  [3193] = 3,
    ACTIONS(1551), 1,
      aux_sym__sep_token1,
    ACTIONS(1553), 1,
      sym__space,
    STATE(37), 1,
      sym__sep,
  [3203] = 3,
    ACTIONS(1555), 1,
      aux_sym__sep_token1,
    ACTIONS(1557), 1,
      sym__space,
    STATE(135), 1,
      sym__sep,
  [3213] = 3,
    ACTIONS(1559), 1,
      sym__space,
    ACTIONS(1561), 1,
      sym__eol,
    STATE(377), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3223] = 3,
    ACTIONS(1563), 1,
      anon_sym_COMMA,
    ACTIONS(1565), 1,
      anon_sym_COLON,
    STATE(374), 1,
      aux_sym__cnames_map_repeat1,
  [3233] = 3,
    ACTIONS(1567), 1,
      sym__space,
    ACTIONS(1569), 1,
      sym__eol,
    STATE(266), 1,
      aux_sym__set_env_repeat1,
  [3243] = 2,
    STATE(475), 1,
      sym__boolean,
    ACTIONS(1571), 2,
      anon_sym_yes,
      anon_sym_no,
  [3251] = 3,
    ACTIONS(1573), 1,
      aux_sym__sep_token1,
    ACTIONS(1575), 1,
      sym__space,
    STATE(77), 1,
      sym__sep,
  [3261] = 3,
    ACTIONS(1577), 1,
      aux_sym__sep_token1,
    ACTIONS(1579), 1,
      sym__space,
    STATE(524), 1,
      sym__sep,
  [3271] = 3,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(588), 1,
      sym_string,
  [3281] = 3,
    ACTIONS(1581), 1,
      aux_sym__sep_token1,
    ACTIONS(1583), 1,
      sym__space,
    STATE(198), 1,
      sym__sep,
  [3291] = 3,
    ACTIONS(1585), 1,
      aux_sym__sep_token1,
    ACTIONS(1587), 1,
      sym__space,
    STATE(526), 1,
      sym__sep,
  [3301] = 3,
    ACTIONS(1589), 1,
      sym__space,
    ACTIONS(1591), 1,
      sym__eol,
    STATE(264), 1,
      aux_sym__send_env_repeat1,
  [3311] = 2,
    STATE(476), 1,
      sym__boolean,
    ACTIONS(1593), 2,
      anon_sym_yes,
      anon_sym_no,
  [3319] = 3,
    ACTIONS(1595), 1,
      aux_sym__sep_token1,
    ACTIONS(1597), 1,
      sym__space,
    STATE(34), 1,
      sym__sep,
  [3329] = 1,
    ACTIONS(1303), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3335] = 3,
    ACTIONS(1599), 1,
      aux_sym__sep_token1,
    ACTIONS(1601), 1,
      sym__space,
    STATE(287), 1,
      sym__sep,
  [3345] = 3,
    ACTIONS(1603), 1,
      sym__space,
    ACTIONS(1605), 1,
      sym__eol,
    STATE(380), 1,
      aux_sym__remote_command_repeat1,
  [3355] = 3,
    ACTIONS(1607), 1,
      aux_sym__sep_token1,
    ACTIONS(1609), 1,
      sym__space,
    STATE(288), 1,
      sym__sep,
  [3365] = 2,
    STATE(486), 1,
      sym__boolean,
    ACTIONS(1611), 2,
      anon_sym_yes,
      anon_sym_no,
  [3373] = 2,
    STATE(487), 1,
      sym__boolean,
    ACTIONS(1613), 2,
      anon_sym_yes,
      anon_sym_no,
  [3381] = 3,
    ACTIONS(1615), 1,
      sym__space,
    ACTIONS(1617), 1,
      sym__eol,
    STATE(370), 1,
      aux_sym__proxy_command_arg_repeat1,
  [3391] = 3,
    ACTIONS(1619), 1,
      aux_sym__sep_token1,
    ACTIONS(1621), 1,
      sym__space,
    STATE(96), 1,
      sym__sep,
  [3401] = 3,
    ACTIONS(1623), 1,
      aux_sym__sep_token1,
    ACTIONS(1625), 1,
      sym__space,
    STATE(249), 1,
      sym__sep,
  [3411] = 3,
    ACTIONS(1627), 1,
      aux_sym__sep_token1,
    ACTIONS(1629), 1,
      sym__space,
    STATE(622), 1,
      sym__sep,
  [3421] = 2,
    ACTIONS(1633), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1631), 2,
      anon_sym_DQUOTE,
      aux_sym__proxy_token_token1,
  [3429] = 2,
    STATE(489), 1,
      sym__boolean,
    ACTIONS(1635), 2,
      anon_sym_yes,
      anon_sym_no,
  [3437] = 3,
    ACTIONS(1637), 1,
      sym__space,
    ACTIONS(1639), 1,
      sym__eol,
    STATE(364), 1,
      aux_sym__permit_remote_open_repeat1,
  [3447] = 3,
    ACTIONS(1641), 1,
      aux_sym__sep_token1,
    ACTIONS(1643), 1,
      sym__space,
    STATE(247), 1,
      sym__sep,
  [3457] = 1,
    ACTIONS(1645), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3463] = 3,
    ACTIONS(1244), 1,
      sym__number,
    ACTIONS(1647), 1,
      anon_sym_STAR,
    STATE(570), 1,
      sym_number,
  [3473] = 3,
    ACTIONS(1244), 1,
      sym__number,
    ACTIONS(1649), 1,
      anon_sym_STAR,
    STATE(567), 1,
      sym_number,
  [3483] = 3,
    ACTIONS(1651), 1,
      aux_sym__sep_token1,
    ACTIONS(1653), 1,
      sym__space,
    STATE(56), 1,
      sym__sep,
  [3493] = 3,
    ACTIONS(1298), 1,
      anon_sym_COLON,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym__cnames_map_repeat1,
  [3503] = 3,
    ACTIONS(1658), 1,
      aux_sym__sep_token1,
    ACTIONS(1660), 1,
      sym__space,
    STATE(117), 1,
      sym__sep,
  [3513] = 3,
    ACTIONS(1662), 1,
      aux_sym__sep_token1,
    ACTIONS(1664), 1,
      sym__space,
    STATE(87), 1,
      sym__sep,
  [3523] = 3,
    ACTIONS(1666), 1,
      sym__space,
    ACTIONS(1668), 1,
      sym__eol,
    STATE(356), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3533] = 3,
    ACTIONS(1670), 1,
      aux_sym__sep_token1,
    ACTIONS(1672), 1,
      sym__space,
    STATE(200), 1,
      sym__sep,
  [3543] = 3,
    ACTIONS(1674), 1,
      aux_sym__sep_token1,
    ACTIONS(1676), 1,
      sym__space,
    STATE(510), 1,
      sym__sep,
  [3553] = 3,
    ACTIONS(1678), 1,
      aux_sym__sep_token1,
    ACTIONS(1680), 1,
      sym__space,
    STATE(511), 1,
      sym__sep,
  [3563] = 2,
    STATE(496), 1,
      sym__boolean,
    ACTIONS(1682), 2,
      anon_sym_yes,
      anon_sym_no,
  [3571] = 3,
    ACTIONS(1684), 1,
      anon_sym_COMMA,
    ACTIONS(1686), 1,
      anon_sym_DQUOTE,
    STATE(355), 1,
      aux_sym__log_verbose_repeat2,
  [3581] = 3,
    ACTIONS(1688), 1,
      aux_sym__sep_token1,
    ACTIONS(1690), 1,
      sym__space,
    STATE(186), 1,
      sym__sep,
  [3591] = 2,
    STATE(497), 1,
      sym__boolean,
    ACTIONS(1692), 2,
      anon_sym_yes,
      anon_sym_no,
  [3599] = 3,
    ACTIONS(1694), 1,
      aux_sym__sep_token1,
    ACTIONS(1696), 1,
      sym__space,
    STATE(95), 1,
      sym__sep,
  [3609] = 2,
    STATE(500), 1,
      sym__boolean,
    ACTIONS(1698), 2,
      anon_sym_yes,
      anon_sym_no,
  [3617] = 3,
    ACTIONS(1700), 1,
      aux_sym__sep_token1,
    ACTIONS(1702), 1,
      sym__space,
    STATE(223), 1,
      sym__sep,
  [3627] = 3,
    ACTIONS(1704), 1,
      sym__space,
    ACTIONS(1706), 1,
      sym__eol,
    STATE(353), 1,
      aux_sym__local_command_repeat1,
  [3637] = 3,
    ACTIONS(1708), 1,
      aux_sym__sep_token1,
    ACTIONS(1710), 1,
      sym__space,
    STATE(119), 1,
      sym__sep,
  [3647] = 3,
    ACTIONS(1712), 1,
      aux_sym__sep_token1,
    ACTIONS(1714), 1,
      sym__space,
    STATE(49), 1,
      sym__sep,
  [3657] = 3,
    ACTIONS(1716), 1,
      aux_sym__sep_token1,
    ACTIONS(1718), 1,
      sym__space,
    STATE(202), 1,
      sym__sep,
  [3667] = 3,
    ACTIONS(1720), 1,
      aux_sym__sep_token1,
    ACTIONS(1722), 1,
      sym__space,
    STATE(515), 1,
      sym__sep,
  [3677] = 3,
    ACTIONS(1724), 1,
      aux_sym__sep_token1,
    ACTIONS(1726), 1,
      sym__space,
    STATE(120), 1,
      sym__sep,
  [3687] = 2,
    ACTIONS(1730), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1728), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3695] = 3,
    ACTIONS(1732), 1,
      aux_sym__sep_token1,
    ACTIONS(1734), 1,
      sym__space,
    STATE(294), 1,
      sym__sep,
  [3705] = 3,
    ACTIONS(1736), 1,
      aux_sym__sep_token1,
    ACTIONS(1738), 1,
      sym__space,
    STATE(38), 1,
      sym__sep,
  [3715] = 3,
    ACTIONS(1740), 1,
      sym__space,
    ACTIONS(1742), 1,
      sym__eol,
    STATE(339), 1,
      aux_sym__ignore_unknown_repeat1,
  [3725] = 3,
    ACTIONS(1744), 1,
      aux_sym__sep_token1,
    ACTIONS(1746), 1,
      sym__space,
    STATE(209), 1,
      sym__sep,
  [3735] = 3,
    ACTIONS(1748), 1,
      aux_sym__sep_token1,
    ACTIONS(1750), 1,
      sym__space,
    STATE(46), 1,
      sym__sep,
  [3745] = 3,
    ACTIONS(1752), 1,
      aux_sym__sep_token1,
    ACTIONS(1754), 1,
      sym__space,
    STATE(125), 1,
      sym__sep,
  [3755] = 3,
    ACTIONS(1756), 1,
      aux_sym__sep_token1,
    ACTIONS(1758), 1,
      sym__space,
    STATE(30), 1,
      sym__sep,
  [3765] = 3,
    ACTIONS(1760), 1,
      aux_sym__sep_token1,
    ACTIONS(1762), 1,
      sym__space,
    STATE(31), 1,
      sym__sep,
  [3775] = 3,
    ACTIONS(1764), 1,
      aux_sym__sep_token1,
    ACTIONS(1766), 1,
      sym__space,
    STATE(43), 1,
      sym__sep,
  [3785] = 1,
    ACTIONS(1257), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3791] = 3,
    ACTIONS(1768), 1,
      aux_sym__sep_token1,
    ACTIONS(1770), 1,
      sym__space,
    STATE(45), 1,
      sym__sep,
  [3801] = 3,
    ACTIONS(1269), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1271), 1,
      sym_token,
    STATE(175), 1,
      aux_sym__token_string_repeat2,
  [3811] = 1,
    ACTIONS(1772), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3817] = 3,
    ACTIONS(1704), 1,
      sym__space,
    ACTIONS(1774), 1,
      sym__eol,
    STATE(315), 1,
      aux_sym__local_command_repeat1,
  [3827] = 3,
    ACTIONS(1776), 1,
      aux_sym__sep_token1,
    ACTIONS(1778), 1,
      sym__space,
    STATE(238), 1,
      sym__sep,
  [3837] = 3,
    ACTIONS(1780), 1,
      sym__space,
    ACTIONS(1783), 1,
      sym__eol,
    STATE(337), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3847] = 3,
    ACTIONS(1785), 1,
      aux_sym__sep_token1,
    ACTIONS(1787), 1,
      sym__space,
    STATE(527), 1,
      sym__sep,
  [3857] = 3,
    ACTIONS(1740), 1,
      sym__space,
    ACTIONS(1789), 1,
      sym__eol,
    STATE(347), 1,
      aux_sym__ignore_unknown_repeat1,
  [3867] = 3,
    ACTIONS(1791), 1,
      aux_sym__sep_token1,
    ACTIONS(1793), 1,
      sym__space,
    STATE(94), 1,
      sym__sep,
  [3877] = 3,
    ACTIONS(1795), 1,
      aux_sym__sep_token1,
    ACTIONS(1797), 1,
      sym__space,
    STATE(308), 1,
      sym__sep,
  [3887] = 3,
    ACTIONS(1799), 1,
      aux_sym__sep_token1,
    ACTIONS(1801), 1,
      sym__space,
    STATE(137), 1,
      sym__sep,
  [3897] = 1,
    ACTIONS(1240), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3903] = 3,
    ACTIONS(1803), 1,
      aux_sym__sep_token1,
    ACTIONS(1805), 1,
      sym__space,
    STATE(236), 1,
      sym__sep,
  [3913] = 3,
    ACTIONS(1807), 1,
      aux_sym__sep_token1,
    ACTIONS(1809), 1,
      sym__space,
    STATE(311), 1,
      sym__sep,
  [3923] = 3,
    ACTIONS(1811), 1,
      aux_sym__sep_token1,
    ACTIONS(1813), 1,
      sym__space,
    STATE(641), 1,
      sym__sep,
  [3933] = 3,
    ACTIONS(1815), 1,
      sym__space,
    ACTIONS(1818), 1,
      sym__eol,
    STATE(347), 1,
      aux_sym__ignore_unknown_repeat1,
  [3943] = 3,
    ACTIONS(1820), 1,
      aux_sym__sep_token1,
    ACTIONS(1822), 1,
      sym__space,
    STATE(235), 1,
      sym__sep,
  [3953] = 3,
    ACTIONS(1824), 1,
      aux_sym__sep_token1,
    ACTIONS(1826), 1,
      sym__space,
    STATE(58), 1,
      sym__sep,
  [3963] = 2,
    ACTIONS(1830), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1828), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [3971] = 1,
    ACTIONS(1219), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3977] = 3,
    ACTIONS(1832), 1,
      aux_sym__sep_token1,
    ACTIONS(1834), 1,
      sym__space,
    STATE(281), 1,
      sym__sep,
  [3987] = 3,
    ACTIONS(1836), 1,
      sym__space,
    ACTIONS(1839), 1,
      sym__eol,
    STATE(353), 1,
      aux_sym__local_command_repeat1,
  [3997] = 3,
    ACTIONS(1637), 1,
      sym__space,
    ACTIONS(1841), 1,
      sym__eol,
    STATE(295), 1,
      aux_sym__permit_remote_open_repeat1,
  [4007] = 3,
    ACTIONS(1684), 1,
      anon_sym_COMMA,
    ACTIONS(1843), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      aux_sym__log_verbose_repeat2,
  [4017] = 3,
    ACTIONS(1666), 1,
      sym__space,
    ACTIONS(1845), 1,
      sym__eol,
    STATE(337), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4027] = 1,
    ACTIONS(1847), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4033] = 3,
    ACTIONS(749), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    STATE(532), 1,
      sym_string,
  [4043] = 1,
    ACTIONS(1185), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4049] = 3,
    ACTIONS(1244), 1,
      sym__number,
    ACTIONS(1849), 1,
      anon_sym_STAR,
    STATE(616), 1,
      sym_number,
  [4059] = 3,
    ACTIONS(1851), 1,
      aux_sym__sep_token1,
    ACTIONS(1853), 1,
      sym__space,
    STATE(620), 1,
      sym__sep,
  [4069] = 3,
    ACTIONS(1615), 1,
      sym__space,
    ACTIONS(1855), 1,
      sym__eol,
    STATE(289), 1,
      aux_sym__proxy_command_arg_repeat1,
  [4079] = 3,
    ACTIONS(1244), 1,
      sym__number,
    ACTIONS(1857), 1,
      anon_sym_STAR,
    STATE(617), 1,
      sym_number,
  [4089] = 3,
    ACTIONS(1859), 1,
      sym__space,
    ACTIONS(1862), 1,
      sym__eol,
    STATE(364), 1,
      aux_sym__permit_remote_open_repeat1,
  [4099] = 2,
    ACTIONS(1864), 1,
      anon_sym_COLON,
    ACTIONS(1866), 2,
      sym__space,
      sym__eol,
  [4107] = 3,
    ACTIONS(1868), 1,
      aux_sym__sep_token1,
    ACTIONS(1870), 1,
      sym__space,
    STATE(82), 1,
      sym__sep,
  [4117] = 3,
    ACTIONS(1872), 1,
      aux_sym__sep_token1,
    ACTIONS(1874), 1,
      sym__space,
    STATE(84), 1,
      sym__sep,
  [4127] = 1,
    ACTIONS(1172), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4133] = 3,
    ACTIONS(1876), 1,
      aux_sym__sep_token1,
    ACTIONS(1878), 1,
      sym__space,
    STATE(518), 1,
      sym__sep,
  [4143] = 3,
    ACTIONS(1880), 1,
      sym__space,
    ACTIONS(1883), 1,
      sym__eol,
    STATE(370), 1,
      aux_sym__proxy_command_arg_repeat1,
  [4153] = 2,
    ACTIONS(1885), 1,
      aux_sym_bytes_token1,
    ACTIONS(1887), 2,
      sym__space,
      sym__eol,
  [4161] = 2,
    ACTIONS(1889), 1,
      anon_sym_COLON,
    ACTIONS(1891), 2,
      sym__space,
      sym__eol,
  [4169] = 3,
    ACTIONS(1603), 1,
      sym__space,
    ACTIONS(1893), 1,
      sym__eol,
    STATE(285), 1,
      aux_sym__remote_command_repeat1,
  [4179] = 3,
    ACTIONS(1563), 1,
      anon_sym_COMMA,
    ACTIONS(1895), 1,
      anon_sym_COLON,
    STATE(301), 1,
      aux_sym__cnames_map_repeat1,
  [4189] = 3,
    ACTIONS(1897), 1,
      aux_sym__sep_token1,
    ACTIONS(1899), 1,
      sym__space,
    STATE(231), 1,
      sym__sep,
  [4199] = 3,
    ACTIONS(1901), 1,
      aux_sym__sep_token1,
    ACTIONS(1903), 1,
      sym__space,
    STATE(92), 1,
      sym__sep,
  [4209] = 3,
    ACTIONS(1559), 1,
      sym__space,
    ACTIONS(1905), 1,
      sym__eol,
    STATE(232), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4219] = 3,
    ACTIONS(1907), 1,
      aux_sym__sep_token1,
    ACTIONS(1909), 1,
      sym__space,
    STATE(88), 1,
      sym__sep,
  [4229] = 3,
    ACTIONS(1536), 1,
      sym__space,
    ACTIONS(1911), 1,
      sym__eol,
    STATE(233), 1,
      aux_sym__canonical_domains_repeat1,
  [4239] = 3,
    ACTIONS(1913), 1,
      sym__space,
    ACTIONS(1916), 1,
      sym__eol,
    STATE(380), 1,
      aux_sym__remote_command_repeat1,
  [4249] = 3,
    ACTIONS(1918), 1,
      aux_sym__sep_token1,
    ACTIONS(1920), 1,
      sym__space,
    STATE(230), 1,
      sym__sep,
  [4259] = 3,
    ACTIONS(1589), 1,
      sym__space,
    ACTIONS(1922), 1,
      sym__eol,
    STATE(280), 1,
      aux_sym__send_env_repeat1,
  [4269] = 3,
    ACTIONS(1924), 1,
      aux_sym__sep_token1,
    ACTIONS(1926), 1,
      sym__space,
    STATE(229), 1,
      sym__sep,
  [4279] = 3,
    ACTIONS(1928), 1,
      aux_sym__sep_token1,
    ACTIONS(1930), 1,
      sym__space,
    STATE(519), 1,
      sym__sep,
  [4289] = 2,
    ACTIONS(1932), 1,
      sym__number,
    ACTIONS(1934), 2,
      sym__space,
      sym__eol,
  [4297] = 2,
    ACTIONS(1936), 1,
      sym__number,
    ACTIONS(1934), 2,
      sym__space,
      sym__eol,
  [4305] = 3,
    ACTIONS(1938), 1,
      aux_sym__sep_token1,
    ACTIONS(1940), 1,
      sym__space,
    STATE(313), 1,
      sym__sep,
  [4315] = 3,
    ACTIONS(1567), 1,
      sym__space,
    ACTIONS(1942), 1,
      sym__eol,
    STATE(273), 1,
      aux_sym__set_env_repeat1,
  [4325] = 3,
    ACTIONS(1944), 1,
      aux_sym__sep_token1,
    ACTIONS(1946), 1,
      sym__space,
    STATE(528), 1,
      sym__sep,
  [4335] = 3,
    ACTIONS(1948), 1,
      sym__space,
    ACTIONS(1950), 1,
      sym__eol,
    STATE(246), 1,
      aux_sym_host_declaration_repeat1,
  [4345] = 3,
    ACTIONS(1952), 1,
      aux_sym__sep_token1,
    ACTIONS(1954), 1,
      sym__space,
    STATE(228), 1,
      sym__sep,
  [4355] = 2,
    ACTIONS(1956), 1,
      sym__number,
    ACTIONS(1934), 2,
      sym__space,
      sym__eol,
  [4363] = 3,
    ACTIONS(1958), 1,
      aux_sym__sep_token1,
    ACTIONS(1960), 1,
      sym__space,
    STATE(67), 1,
      sym__sep,
  [4373] = 2,
    ACTIONS(1962), 1,
      sym__number,
    ACTIONS(1934), 2,
      sym__space,
      sym__eol,
  [4381] = 3,
    ACTIONS(1964), 1,
      sym__space,
    ACTIONS(1966), 1,
      sym__eol,
    STATE(208), 1,
      aux_sym_host_declaration_repeat1,
  [4391] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4396] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4401] = 1,
    ACTIONS(1970), 2,
      sym__space,
      sym__eol,
  [4406] = 1,
    ACTIONS(1972), 2,
      sym__space,
      sym__eol,
  [4411] = 1,
    ACTIONS(1974), 2,
      sym__space,
      sym__eol,
  [4416] = 1,
    ACTIONS(1976), 2,
      sym__space,
      sym__eol,
  [4421] = 2,
    ACTIONS(689), 1,
      sym__space,
    ACTIONS(691), 1,
      sym__eol,
  [4428] = 2,
    ACTIONS(941), 1,
      sym__number,
    STATE(509), 1,
      sym_time,
  [4435] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4440] = 1,
    ACTIONS(1978), 2,
      sym__space,
      sym__eol,
  [4445] = 1,
    ACTIONS(1934), 2,
      sym__space,
      sym__eol,
  [4450] = 1,
    ACTIONS(1980), 2,
      sym__space,
      sym__eol,
  [4455] = 1,
    ACTIONS(1982), 2,
      sym__space,
      sym__eol,
  [4460] = 1,
    ACTIONS(1984), 2,
      sym__space,
      sym__eol,
  [4465] = 1,
    ACTIONS(1986), 2,
      sym__space,
      sym__eol,
  [4470] = 1,
    ACTIONS(1988), 2,
      sym__space,
      sym__eol,
  [4475] = 1,
    ACTIONS(1990), 2,
      sym__space,
      sym__eol,
  [4480] = 1,
    ACTIONS(1992), 2,
      sym__space,
      sym__eol,
  [4485] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4490] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4495] = 2,
    ACTIONS(1994), 1,
      sym__space,
    ACTIONS(1996), 1,
      sym__eol,
  [4502] = 1,
    ACTIONS(1996), 2,
      sym__space,
      sym__eol,
  [4507] = 1,
    ACTIONS(1998), 2,
      sym__space,
      sym__eol,
  [4512] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4517] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4522] = 1,
    ACTIONS(2000), 2,
      sym__space,
      sym__eol,
  [4527] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4532] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4537] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4542] = 1,
    ACTIONS(2002), 2,
      sym__space,
      sym__eol,
  [4547] = 1,
    ACTIONS(2004), 2,
      sym__space,
      sym__eol,
  [4552] = 1,
    ACTIONS(1855), 2,
      sym__space,
      sym__eol,
  [4557] = 1,
    ACTIONS(2006), 2,
      sym__space,
      sym__eol,
  [4562] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4567] = 1,
    ACTIONS(2008), 2,
      sym__space,
      sym__eol,
  [4572] = 1,
    ACTIONS(2010), 2,
      sym__space,
      sym__eol,
  [4577] = 2,
    ACTIONS(2012), 1,
      anon_sym_STAR,
    ACTIONS(2014), 1,
      aux_sym__permit_remote_open_value_token2,
  [4584] = 1,
    ACTIONS(2016), 2,
      sym__space,
      sym__eol,
  [4589] = 1,
    ACTIONS(2018), 2,
      sym__space,
      sym__eol,
  [4594] = 1,
    ACTIONS(2020), 2,
      sym__space,
      sym__eol,
  [4599] = 1,
    ACTIONS(2022), 2,
      sym__space,
      sym__eol,
  [4604] = 1,
    ACTIONS(2024), 2,
      sym__space,
      sym__eol,
  [4609] = 1,
    ACTIONS(1529), 2,
      sym__space,
      sym__eol,
  [4614] = 1,
    ACTIONS(2026), 2,
      sym__space,
      sym__eol,
  [4619] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4624] = 2,
    ACTIONS(2028), 1,
      aux_sym_time_token4,
    ACTIONS(2030), 1,
      aux_sym_time_token5,
  [4631] = 1,
    ACTIONS(2032), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [4636] = 1,
    ACTIONS(1507), 2,
      sym__space,
      sym__eol,
  [4641] = 1,
    ACTIONS(2034), 2,
      sym__space,
      sym__eol,
  [4646] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4651] = 1,
    ACTIONS(2036), 2,
      sym__space,
      sym__eol,
  [4656] = 2,
    ACTIONS(2038), 1,
      sym__space,
    ACTIONS(2040), 1,
      sym__eol,
  [4663] = 1,
    ACTIONS(2042), 2,
      sym__space,
      sym__eol,
  [4668] = 1,
    ACTIONS(2044), 2,
      sym__space,
      sym__eol,
  [4673] = 1,
    ACTIONS(2046), 2,
      sym__space,
      sym__eol,
  [4678] = 1,
    ACTIONS(2048), 2,
      sym__space,
      sym__eol,
  [4683] = 1,
    ACTIONS(2050), 2,
      sym__space,
      sym__eol,
  [4688] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(618), 1,
      sym_number,
  [4695] = 1,
    ACTIONS(2052), 2,
      sym__space,
      sym__eol,
  [4700] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4705] = 1,
    ACTIONS(2054), 2,
      sym__space,
      sym__eol,
  [4710] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4715] = 1,
    ACTIONS(2056), 2,
      sym__space,
      sym__eol,
  [4720] = 1,
    ACTIONS(2058), 2,
      sym__space,
      sym__eol,
  [4725] = 1,
    ACTIONS(2060), 2,
      sym__space,
      sym__eol,
  [4730] = 1,
    ACTIONS(2062), 2,
      sym__space,
      sym__eol,
  [4735] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4740] = 1,
    ACTIONS(2064), 2,
      sym__space,
      sym__eol,
  [4745] = 1,
    ACTIONS(2066), 2,
      sym__space,
      sym__eol,
  [4750] = 1,
    ACTIONS(2068), 2,
      sym__space,
      sym__eol,
  [4755] = 1,
    ACTIONS(2070), 2,
      sym__space,
      sym__eol,
  [4760] = 1,
    ACTIONS(2072), 2,
      sym__space,
      sym__eol,
  [4765] = 1,
    ACTIONS(2074), 2,
      sym__space,
      sym__eol,
  [4770] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4775] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4780] = 1,
    ACTIONS(2076), 2,
      sym__space,
      sym__eol,
  [4785] = 1,
    ACTIONS(2078), 2,
      sym__space,
      sym__eol,
  [4790] = 1,
    ACTIONS(2080), 2,
      sym__space,
      sym__eol,
  [4795] = 1,
    ACTIONS(2082), 2,
      sym__space,
      sym__eol,
  [4800] = 1,
    ACTIONS(2084), 2,
      sym__space,
      sym__eol,
  [4805] = 1,
    ACTIONS(2086), 2,
      sym__space,
      sym__eol,
  [4810] = 1,
    ACTIONS(2088), 2,
      sym__space,
      sym__eol,
  [4815] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(580), 1,
      sym_number,
  [4822] = 1,
    ACTIONS(2090), 2,
      sym__space,
      sym__eol,
  [4827] = 1,
    ACTIONS(2092), 2,
      sym__space,
      sym__eol,
  [4832] = 1,
    ACTIONS(2094), 2,
      sym__space,
      sym__eol,
  [4837] = 2,
    ACTIONS(941), 1,
      sym__number,
    STATE(582), 1,
      sym_time,
  [4844] = 1,
    ACTIONS(2096), 2,
      sym__space,
      sym__eol,
  [4849] = 1,
    ACTIONS(2098), 2,
      sym__space,
      sym__eol,
  [4854] = 1,
    ACTIONS(2100), 2,
      sym__space,
      sym__eol,
  [4859] = 1,
    ACTIONS(2102), 2,
      sym__space,
      sym__eol,
  [4864] = 1,
    ACTIONS(2104), 2,
      sym__space,
      sym__eol,
  [4869] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4874] = 1,
    ACTIONS(2106), 2,
      sym__space,
      sym__eol,
  [4879] = 1,
    ACTIONS(2108), 2,
      sym__space,
      sym__eol,
  [4884] = 2,
    ACTIONS(2110), 1,
      sym__var_name,
    STATE(589), 1,
      sym__set_env_value,
  [4891] = 2,
    ACTIONS(1464), 1,
      aux_sym_time_token4,
    ACTIONS(1466), 1,
      aux_sym_time_token5,
  [4898] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4903] = 1,
    ACTIONS(2112), 2,
      sym__space,
      sym__eol,
  [4908] = 1,
    ACTIONS(2114), 2,
      sym__space,
      sym__eol,
  [4913] = 1,
    ACTIONS(2116), 2,
      sym__space,
      sym__eol,
  [4918] = 1,
    ACTIONS(2118), 2,
      sym__space,
      sym__eol,
  [4923] = 1,
    ACTIONS(2120), 2,
      sym__space,
      sym__eol,
  [4928] = 1,
    ACTIONS(2122), 2,
      sym__space,
      sym__eol,
  [4933] = 1,
    ACTIONS(2124), 2,
      sym__space,
      sym__eol,
  [4938] = 1,
    ACTIONS(2126), 2,
      sym__space,
      sym__eol,
  [4943] = 2,
    ACTIONS(2128), 1,
      sym__space,
    ACTIONS(2130), 1,
      sym__eol,
  [4950] = 1,
    ACTIONS(2132), 2,
      sym__space,
      sym__eol,
  [4955] = 2,
    ACTIONS(2134), 1,
      sym__space,
    ACTIONS(2136), 1,
      sym__eol,
  [4962] = 1,
    ACTIONS(2136), 2,
      sym__space,
      sym__eol,
  [4967] = 2,
    ACTIONS(2138), 1,
      sym__space,
    ACTIONS(2140), 1,
      sym__eol,
  [4974] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4979] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [4984] = 1,
    ACTIONS(2142), 2,
      sym__space,
      sym__eol,
  [4989] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(407), 1,
      sym_number,
  [4996] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(408), 1,
      sym_number,
  [5003] = 2,
    ACTIONS(1339), 1,
      aux_sym_time_token4,
    ACTIONS(1341), 1,
      aux_sym_time_token5,
  [5010] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5015] = 1,
    ACTIONS(2144), 2,
      sym__space,
      sym__eol,
  [5020] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(412), 1,
      sym_number,
  [5027] = 1,
    ACTIONS(2146), 2,
      sym__space,
      sym__eol,
  [5032] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5037] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(428), 1,
      sym_number,
  [5044] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(436), 1,
      sym_number,
  [5051] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5056] = 2,
    ACTIONS(941), 1,
      sym__number,
    STATE(461), 1,
      sym_time,
  [5063] = 1,
    ACTIONS(2148), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [5068] = 2,
    ACTIONS(2150), 1,
      anon_sym_none,
    ACTIONS(2152), 1,
      aux_sym__escape_char_token2,
  [5075] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(484), 1,
      sym_number,
  [5082] = 1,
    ACTIONS(2154), 2,
      sym__space,
      sym__eol,
  [5087] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(485), 1,
      sym_number,
  [5094] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(495), 1,
      sym_number,
  [5101] = 2,
    ACTIONS(2156), 1,
      anon_sym_inet,
    ACTIONS(2158), 1,
      anon_sym_inet6,
  [5108] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5113] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5118] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5123] = 1,
    ACTIONS(2160), 2,
      sym__space,
      sym__eol,
  [5128] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5133] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5138] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5143] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5148] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5153] = 1,
    ACTIONS(2162), 2,
      sym__space,
      sym__eol,
  [5158] = 1,
    ACTIONS(2164), 2,
      sym__space,
      sym__eol,
  [5163] = 1,
    ACTIONS(2166), 2,
      sym__space,
      sym__eol,
  [5168] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5173] = 1,
    ACTIONS(1818), 2,
      sym__space,
      sym__eol,
  [5178] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5183] = 1,
    ACTIONS(2168), 2,
      sym__space,
      sym__eol,
  [5188] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5193] = 1,
    ACTIONS(2170), 2,
      sym__space,
      sym__eol,
  [5198] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5203] = 1,
    ACTIONS(2172), 2,
      sym__space,
      sym__eol,
  [5208] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5213] = 1,
    ACTIONS(2174), 2,
      sym__space,
      sym__eol,
  [5218] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5223] = 1,
    ACTIONS(1839), 2,
      sym__space,
      sym__eol,
  [5228] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5233] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(465), 1,
      sym_number,
  [5240] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5245] = 1,
    ACTIONS(2176), 2,
      sym__space,
      sym__eol,
  [5250] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5255] = 1,
    ACTIONS(2178), 2,
      sym__space,
      sym__eol,
  [5260] = 1,
    ACTIONS(2180), 2,
      sym__space,
      sym__eol,
  [5265] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5270] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5275] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5280] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5285] = 1,
    ACTIONS(2182), 2,
      sym__space,
      sym__eol,
  [5290] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5295] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5300] = 1,
    ACTIONS(2184), 2,
      sym__space,
      sym__eol,
  [5305] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5310] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5315] = 1,
    ACTIONS(2186), 2,
      sym__space,
      sym__eol,
  [5320] = 1,
    ACTIONS(2188), 2,
      sym__space,
      sym__eol,
  [5325] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5330] = 1,
    ACTIONS(2190), 2,
      sym__space,
      sym__eol,
  [5335] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5340] = 1,
    ACTIONS(2192), 2,
      sym__space,
      sym__eol,
  [5345] = 1,
    ACTIONS(2170), 2,
      sym__space,
      sym__eol,
  [5350] = 1,
    ACTIONS(1883), 2,
      sym__space,
      sym__eol,
  [5355] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5360] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5365] = 1,
    ACTIONS(1891), 2,
      sym__space,
      sym__eol,
  [5370] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5375] = 1,
    ACTIONS(2194), 2,
      sym__space,
      sym__eol,
  [5380] = 1,
    ACTIONS(1916), 2,
      sym__space,
      sym__eol,
  [5385] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5390] = 1,
    ACTIONS(2196), 2,
      sym__space,
      sym__eol,
  [5395] = 1,
    ACTIONS(2198), 2,
      sym__space,
      sym__eol,
  [5400] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5405] = 1,
    ACTIONS(2200), 2,
      sym__space,
      sym__eol,
  [5410] = 1,
    ACTIONS(2202), 2,
      sym__space,
      sym__eol,
  [5415] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5420] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5425] = 1,
    ACTIONS(2164), 2,
      sym__space,
      sym__eol,
  [5430] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5435] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5440] = 1,
    ACTIONS(2204), 2,
      sym__space,
      sym__eol,
  [5445] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5450] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5455] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5460] = 2,
    ACTIONS(2206), 1,
      sym__space,
    ACTIONS(2208), 1,
      sym__eol,
  [5467] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5472] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5477] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5482] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5487] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5492] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5497] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5502] = 1,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [5507] = 1,
    ACTIONS(1968), 2,
      sym__space,
      sym__eol,
  [5512] = 1,
    ACTIONS(2164), 2,
      sym__space,
      sym__eol,
  [5517] = 2,
    ACTIONS(1244), 1,
      sym__number,
    STATE(477), 1,
      sym_number,
  [5524] = 1,
    ACTIONS(2210), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [5529] = 1,
    ACTIONS(2212), 2,
      sym__space,
      sym__eol,
  [5534] = 1,
    ACTIONS(2214), 1,
      anon_sym_EQ,
  [5538] = 1,
    ACTIONS(2208), 1,
      sym__eol,
  [5542] = 1,
    ACTIONS(2216), 1,
      anon_sym_COLON,
  [5546] = 1,
    ACTIONS(2218), 1,
      anon_sym_DQUOTE,
  [5550] = 1,
    ACTIONS(2220), 1,
      anon_sym_DQUOTE,
  [5554] = 1,
    ACTIONS(2222), 1,
      sym__space,
  [5558] = 1,
    ACTIONS(691), 1,
      sym__eol,
  [5562] = 1,
    ACTIONS(2224), 1,
      sym_authentication,
  [5566] = 1,
    ACTIONS(1341), 1,
      aux_sym_time_token5,
  [5570] = 1,
    ACTIONS(2226), 1,
      aux_sym__stream_local_bind_mask_token2,
  [5574] = 1,
    ACTIONS(2228), 1,
      sym__eol,
  [5578] = 1,
    ACTIONS(2140), 1,
      sym__eol,
  [5582] = 1,
    ACTIONS(2230), 1,
      sym_sig,
  [5586] = 1,
    ACTIONS(2232), 1,
      sym__var_name,
  [5590] = 1,
    ACTIONS(1466), 1,
      aux_sym_time_token5,
  [5594] = 1,
    ACTIONS(2234), 1,
      sym_cipher,
  [5598] = 1,
    ACTIONS(2236), 1,
      aux_sym__proxy_jump_arg_token1,
  [5602] = 1,
    ACTIONS(2238), 1,
      sym_authentication,
  [5606] = 1,
    ACTIONS(2240), 1,
      aux_sym__permit_remote_open_value_token2,
  [5610] = 1,
    ACTIONS(2242), 1,
      sym__var_name,
  [5614] = 1,
    ACTIONS(2244), 1,
      anon_sym_COLON,
  [5618] = 1,
    ACTIONS(2246), 1,
      anon_sym_COLON,
  [5622] = 1,
    ACTIONS(2248), 1,
      sym_mac,
  [5626] = 1,
    ACTIONS(2250), 1,
      sym_key_sig,
  [5630] = 1,
    ACTIONS(2252), 1,
      sym_key_sig,
  [5634] = 1,
    ACTIONS(2254), 1,
      sym_kex,
  [5638] = 1,
    ACTIONS(2256), 1,
      sym_kex,
  [5642] = 1,
    ACTIONS(2258), 1,
      anon_sym_COLON,
  [5646] = 1,
    ACTIONS(2260), 1,
      sym_verbosity,
  [5650] = 1,
    ACTIONS(2030), 1,
      aux_sym_time_token5,
  [5654] = 1,
    ACTIONS(2262), 1,
      sym__space,
  [5658] = 1,
    ACTIONS(2264), 1,
      sym_mac,
  [5662] = 1,
    ACTIONS(2266), 1,
      aux_sym_time_token5,
  [5666] = 1,
    ACTIONS(2268), 1,
      anon_sym_COLON,
  [5670] = 1,
    ACTIONS(2270), 1,
      anon_sym_COLON,
  [5674] = 1,
    ACTIONS(2272), 1,
      sym_key_sig,
  [5678] = 1,
    ACTIONS(2274), 1,
      anon_sym_DQUOTE,
  [5682] = 1,
    ACTIONS(2276), 1,
      anon_sym_AT,
  [5686] = 1,
    ACTIONS(2278), 1,
      sym_cipher,
  [5690] = 1,
    ACTIONS(2280), 1,
      sym_key_sig,
  [5694] = 1,
    ACTIONS(2282), 1,
      anon_sym_RBRACE,
  [5698] = 1,
    ACTIONS(2284), 1,
      sym_sig,
  [5702] = 1,
    ACTIONS(2286), 1,
      sym__space,
  [5706] = 1,
    ACTIONS(2288), 1,
      sym__space,
  [5710] = 1,
    ACTIONS(2290), 1,
      sym__eol,
  [5714] = 1,
    ACTIONS(2292), 1,
      anon_sym_RBRACE,
  [5718] = 1,
    ACTIONS(2294), 1,
      ts_builtin_sym_end,
  [5722] = 1,
    ACTIONS(2296), 1,
      anon_sym_RBRACE,
  [5726] = 1,
    ACTIONS(2298), 1,
      anon_sym_RBRACE,
  [5730] = 1,
    ACTIONS(2300), 1,
      anon_sym_RBRACE,
  [5734] = 1,
    ACTIONS(2302), 1,
      anon_sym_RBRACE,
  [5738] = 1,
    ACTIONS(2304), 1,
      sym__var_name,
  [5742] = 1,
    ACTIONS(2306), 1,
      sym__var_name,
  [5746] = 1,
    ACTIONS(2308), 1,
      sym__var_name,
  [5750] = 1,
    ACTIONS(2310), 1,
      sym__var_name,
  [5754] = 1,
    ACTIONS(2312), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 37,
  [SMALL_STATE(32)] = 74,
  [SMALL_STATE(33)] = 105,
  [SMALL_STATE(34)] = 136,
  [SMALL_STATE(35)] = 169,
  [SMALL_STATE(36)] = 192,
  [SMALL_STATE(37)] = 215,
  [SMALL_STATE(38)] = 240,
  [SMALL_STATE(39)] = 265,
  [SMALL_STATE(40)] = 287,
  [SMALL_STATE(41)] = 309,
  [SMALL_STATE(42)] = 332,
  [SMALL_STATE(43)] = 351,
  [SMALL_STATE(44)] = 374,
  [SMALL_STATE(45)] = 395,
  [SMALL_STATE(46)] = 418,
  [SMALL_STATE(47)] = 441,
  [SMALL_STATE(48)] = 464,
  [SMALL_STATE(49)] = 485,
  [SMALL_STATE(50)] = 508,
  [SMALL_STATE(51)] = 531,
  [SMALL_STATE(52)] = 552,
  [SMALL_STATE(53)] = 573,
  [SMALL_STATE(54)] = 594,
  [SMALL_STATE(55)] = 617,
  [SMALL_STATE(56)] = 640,
  [SMALL_STATE(57)] = 663,
  [SMALL_STATE(58)] = 675,
  [SMALL_STATE(59)] = 697,
  [SMALL_STATE(60)] = 717,
  [SMALL_STATE(61)] = 737,
  [SMALL_STATE(62)] = 757,
  [SMALL_STATE(63)] = 777,
  [SMALL_STATE(64)] = 797,
  [SMALL_STATE(65)] = 815,
  [SMALL_STATE(66)] = 835,
  [SMALL_STATE(67)] = 855,
  [SMALL_STATE(68)] = 871,
  [SMALL_STATE(69)] = 883,
  [SMALL_STATE(70)] = 903,
  [SMALL_STATE(71)] = 919,
  [SMALL_STATE(72)] = 935,
  [SMALL_STATE(73)] = 952,
  [SMALL_STATE(74)] = 969,
  [SMALL_STATE(75)] = 984,
  [SMALL_STATE(76)] = 1001,
  [SMALL_STATE(77)] = 1014,
  [SMALL_STATE(78)] = 1027,
  [SMALL_STATE(79)] = 1044,
  [SMALL_STATE(80)] = 1061,
  [SMALL_STATE(81)] = 1072,
  [SMALL_STATE(82)] = 1089,
  [SMALL_STATE(83)] = 1106,
  [SMALL_STATE(84)] = 1123,
  [SMALL_STATE(85)] = 1140,
  [SMALL_STATE(86)] = 1159,
  [SMALL_STATE(87)] = 1176,
  [SMALL_STATE(88)] = 1193,
  [SMALL_STATE(89)] = 1210,
  [SMALL_STATE(90)] = 1227,
  [SMALL_STATE(91)] = 1242,
  [SMALL_STATE(92)] = 1259,
  [SMALL_STATE(93)] = 1276,
  [SMALL_STATE(94)] = 1293,
  [SMALL_STATE(95)] = 1304,
  [SMALL_STATE(96)] = 1319,
  [SMALL_STATE(97)] = 1330,
  [SMALL_STATE(98)] = 1347,
  [SMALL_STATE(99)] = 1364,
  [SMALL_STATE(100)] = 1379,
  [SMALL_STATE(101)] = 1396,
  [SMALL_STATE(102)] = 1415,
  [SMALL_STATE(103)] = 1428,
  [SMALL_STATE(104)] = 1443,
  [SMALL_STATE(105)] = 1460,
  [SMALL_STATE(106)] = 1473,
  [SMALL_STATE(107)] = 1484,
  [SMALL_STATE(108)] = 1499,
  [SMALL_STATE(109)] = 1514,
  [SMALL_STATE(110)] = 1524,
  [SMALL_STATE(111)] = 1538,
  [SMALL_STATE(112)] = 1552,
  [SMALL_STATE(113)] = 1562,
  [SMALL_STATE(114)] = 1572,
  [SMALL_STATE(115)] = 1580,
  [SMALL_STATE(116)] = 1596,
  [SMALL_STATE(117)] = 1608,
  [SMALL_STATE(118)] = 1620,
  [SMALL_STATE(119)] = 1632,
  [SMALL_STATE(120)] = 1648,
  [SMALL_STATE(121)] = 1658,
  [SMALL_STATE(122)] = 1672,
  [SMALL_STATE(123)] = 1686,
  [SMALL_STATE(124)] = 1700,
  [SMALL_STATE(125)] = 1716,
  [SMALL_STATE(126)] = 1732,
  [SMALL_STATE(127)] = 1742,
  [SMALL_STATE(128)] = 1756,
  [SMALL_STATE(129)] = 1770,
  [SMALL_STATE(130)] = 1784,
  [SMALL_STATE(131)] = 1796,
  [SMALL_STATE(132)] = 1812,
  [SMALL_STATE(133)] = 1828,
  [SMALL_STATE(134)] = 1840,
  [SMALL_STATE(135)] = 1856,
  [SMALL_STATE(136)] = 1868,
  [SMALL_STATE(137)] = 1882,
  [SMALL_STATE(138)] = 1891,
  [SMALL_STATE(139)] = 1900,
  [SMALL_STATE(140)] = 1909,
  [SMALL_STATE(141)] = 1920,
  [SMALL_STATE(142)] = 1931,
  [SMALL_STATE(143)] = 1942,
  [SMALL_STATE(144)] = 1953,
  [SMALL_STATE(145)] = 1964,
  [SMALL_STATE(146)] = 1975,
  [SMALL_STATE(147)] = 1986,
  [SMALL_STATE(148)] = 1995,
  [SMALL_STATE(149)] = 2008,
  [SMALL_STATE(150)] = 2019,
  [SMALL_STATE(151)] = 2030,
  [SMALL_STATE(152)] = 2041,
  [SMALL_STATE(153)] = 2052,
  [SMALL_STATE(154)] = 2063,
  [SMALL_STATE(155)] = 2074,
  [SMALL_STATE(156)] = 2085,
  [SMALL_STATE(157)] = 2096,
  [SMALL_STATE(158)] = 2109,
  [SMALL_STATE(159)] = 2120,
  [SMALL_STATE(160)] = 2131,
  [SMALL_STATE(161)] = 2140,
  [SMALL_STATE(162)] = 2151,
  [SMALL_STATE(163)] = 2162,
  [SMALL_STATE(164)] = 2173,
  [SMALL_STATE(165)] = 2184,
  [SMALL_STATE(166)] = 2195,
  [SMALL_STATE(167)] = 2206,
  [SMALL_STATE(168)] = 2217,
  [SMALL_STATE(169)] = 2226,
  [SMALL_STATE(170)] = 2237,
  [SMALL_STATE(171)] = 2248,
  [SMALL_STATE(172)] = 2259,
  [SMALL_STATE(173)] = 2270,
  [SMALL_STATE(174)] = 2281,
  [SMALL_STATE(175)] = 2290,
  [SMALL_STATE(176)] = 2303,
  [SMALL_STATE(177)] = 2312,
  [SMALL_STATE(178)] = 2325,
  [SMALL_STATE(179)] = 2336,
  [SMALL_STATE(180)] = 2347,
  [SMALL_STATE(181)] = 2358,
  [SMALL_STATE(182)] = 2367,
  [SMALL_STATE(183)] = 2378,
  [SMALL_STATE(184)] = 2389,
  [SMALL_STATE(185)] = 2400,
  [SMALL_STATE(186)] = 2411,
  [SMALL_STATE(187)] = 2420,
  [SMALL_STATE(188)] = 2431,
  [SMALL_STATE(189)] = 2442,
  [SMALL_STATE(190)] = 2453,
  [SMALL_STATE(191)] = 2464,
  [SMALL_STATE(192)] = 2473,
  [SMALL_STATE(193)] = 2484,
  [SMALL_STATE(194)] = 2491,
  [SMALL_STATE(195)] = 2502,
  [SMALL_STATE(196)] = 2509,
  [SMALL_STATE(197)] = 2520,
  [SMALL_STATE(198)] = 2531,
  [SMALL_STATE(199)] = 2540,
  [SMALL_STATE(200)] = 2551,
  [SMALL_STATE(201)] = 2562,
  [SMALL_STATE(202)] = 2569,
  [SMALL_STATE(203)] = 2578,
  [SMALL_STATE(204)] = 2591,
  [SMALL_STATE(205)] = 2600,
  [SMALL_STATE(206)] = 2611,
  [SMALL_STATE(207)] = 2620,
  [SMALL_STATE(208)] = 2631,
  [SMALL_STATE(209)] = 2641,
  [SMALL_STATE(210)] = 2649,
  [SMALL_STATE(211)] = 2657,
  [SMALL_STATE(212)] = 2667,
  [SMALL_STATE(213)] = 2675,
  [SMALL_STATE(214)] = 2683,
  [SMALL_STATE(215)] = 2693,
  [SMALL_STATE(216)] = 2701,
  [SMALL_STATE(217)] = 2709,
  [SMALL_STATE(218)] = 2717,
  [SMALL_STATE(219)] = 2727,
  [SMALL_STATE(220)] = 2735,
  [SMALL_STATE(221)] = 2745,
  [SMALL_STATE(222)] = 2755,
  [SMALL_STATE(223)] = 2763,
  [SMALL_STATE(224)] = 2771,
  [SMALL_STATE(225)] = 2781,
  [SMALL_STATE(226)] = 2789,
  [SMALL_STATE(227)] = 2799,
  [SMALL_STATE(228)] = 2807,
  [SMALL_STATE(229)] = 2815,
  [SMALL_STATE(230)] = 2823,
  [SMALL_STATE(231)] = 2831,
  [SMALL_STATE(232)] = 2841,
  [SMALL_STATE(233)] = 2851,
  [SMALL_STATE(234)] = 2861,
  [SMALL_STATE(235)] = 2871,
  [SMALL_STATE(236)] = 2881,
  [SMALL_STATE(237)] = 2889,
  [SMALL_STATE(238)] = 2899,
  [SMALL_STATE(239)] = 2909,
  [SMALL_STATE(240)] = 2919,
  [SMALL_STATE(241)] = 2929,
  [SMALL_STATE(242)] = 2939,
  [SMALL_STATE(243)] = 2949,
  [SMALL_STATE(244)] = 2959,
  [SMALL_STATE(245)] = 2969,
  [SMALL_STATE(246)] = 2979,
  [SMALL_STATE(247)] = 2989,
  [SMALL_STATE(248)] = 2997,
  [SMALL_STATE(249)] = 3007,
  [SMALL_STATE(250)] = 3015,
  [SMALL_STATE(251)] = 3025,
  [SMALL_STATE(252)] = 3035,
  [SMALL_STATE(253)] = 3045,
  [SMALL_STATE(254)] = 3055,
  [SMALL_STATE(255)] = 3065,
  [SMALL_STATE(256)] = 3071,
  [SMALL_STATE(257)] = 3081,
  [SMALL_STATE(258)] = 3089,
  [SMALL_STATE(259)] = 3099,
  [SMALL_STATE(260)] = 3109,
  [SMALL_STATE(261)] = 3119,
  [SMALL_STATE(262)] = 3129,
  [SMALL_STATE(263)] = 3137,
  [SMALL_STATE(264)] = 3145,
  [SMALL_STATE(265)] = 3155,
  [SMALL_STATE(266)] = 3165,
  [SMALL_STATE(267)] = 3175,
  [SMALL_STATE(268)] = 3185,
  [SMALL_STATE(269)] = 3193,
  [SMALL_STATE(270)] = 3203,
  [SMALL_STATE(271)] = 3213,
  [SMALL_STATE(272)] = 3223,
  [SMALL_STATE(273)] = 3233,
  [SMALL_STATE(274)] = 3243,
  [SMALL_STATE(275)] = 3251,
  [SMALL_STATE(276)] = 3261,
  [SMALL_STATE(277)] = 3271,
  [SMALL_STATE(278)] = 3281,
  [SMALL_STATE(279)] = 3291,
  [SMALL_STATE(280)] = 3301,
  [SMALL_STATE(281)] = 3311,
  [SMALL_STATE(282)] = 3319,
  [SMALL_STATE(283)] = 3329,
  [SMALL_STATE(284)] = 3335,
  [SMALL_STATE(285)] = 3345,
  [SMALL_STATE(286)] = 3355,
  [SMALL_STATE(287)] = 3365,
  [SMALL_STATE(288)] = 3373,
  [SMALL_STATE(289)] = 3381,
  [SMALL_STATE(290)] = 3391,
  [SMALL_STATE(291)] = 3401,
  [SMALL_STATE(292)] = 3411,
  [SMALL_STATE(293)] = 3421,
  [SMALL_STATE(294)] = 3429,
  [SMALL_STATE(295)] = 3437,
  [SMALL_STATE(296)] = 3447,
  [SMALL_STATE(297)] = 3457,
  [SMALL_STATE(298)] = 3463,
  [SMALL_STATE(299)] = 3473,
  [SMALL_STATE(300)] = 3483,
  [SMALL_STATE(301)] = 3493,
  [SMALL_STATE(302)] = 3503,
  [SMALL_STATE(303)] = 3513,
  [SMALL_STATE(304)] = 3523,
  [SMALL_STATE(305)] = 3533,
  [SMALL_STATE(306)] = 3543,
  [SMALL_STATE(307)] = 3553,
  [SMALL_STATE(308)] = 3563,
  [SMALL_STATE(309)] = 3571,
  [SMALL_STATE(310)] = 3581,
  [SMALL_STATE(311)] = 3591,
  [SMALL_STATE(312)] = 3599,
  [SMALL_STATE(313)] = 3609,
  [SMALL_STATE(314)] = 3617,
  [SMALL_STATE(315)] = 3627,
  [SMALL_STATE(316)] = 3637,
  [SMALL_STATE(317)] = 3647,
  [SMALL_STATE(318)] = 3657,
  [SMALL_STATE(319)] = 3667,
  [SMALL_STATE(320)] = 3677,
  [SMALL_STATE(321)] = 3687,
  [SMALL_STATE(322)] = 3695,
  [SMALL_STATE(323)] = 3705,
  [SMALL_STATE(324)] = 3715,
  [SMALL_STATE(325)] = 3725,
  [SMALL_STATE(326)] = 3735,
  [SMALL_STATE(327)] = 3745,
  [SMALL_STATE(328)] = 3755,
  [SMALL_STATE(329)] = 3765,
  [SMALL_STATE(330)] = 3775,
  [SMALL_STATE(331)] = 3785,
  [SMALL_STATE(332)] = 3791,
  [SMALL_STATE(333)] = 3801,
  [SMALL_STATE(334)] = 3811,
  [SMALL_STATE(335)] = 3817,
  [SMALL_STATE(336)] = 3827,
  [SMALL_STATE(337)] = 3837,
  [SMALL_STATE(338)] = 3847,
  [SMALL_STATE(339)] = 3857,
  [SMALL_STATE(340)] = 3867,
  [SMALL_STATE(341)] = 3877,
  [SMALL_STATE(342)] = 3887,
  [SMALL_STATE(343)] = 3897,
  [SMALL_STATE(344)] = 3903,
  [SMALL_STATE(345)] = 3913,
  [SMALL_STATE(346)] = 3923,
  [SMALL_STATE(347)] = 3933,
  [SMALL_STATE(348)] = 3943,
  [SMALL_STATE(349)] = 3953,
  [SMALL_STATE(350)] = 3963,
  [SMALL_STATE(351)] = 3971,
  [SMALL_STATE(352)] = 3977,
  [SMALL_STATE(353)] = 3987,
  [SMALL_STATE(354)] = 3997,
  [SMALL_STATE(355)] = 4007,
  [SMALL_STATE(356)] = 4017,
  [SMALL_STATE(357)] = 4027,
  [SMALL_STATE(358)] = 4033,
  [SMALL_STATE(359)] = 4043,
  [SMALL_STATE(360)] = 4049,
  [SMALL_STATE(361)] = 4059,
  [SMALL_STATE(362)] = 4069,
  [SMALL_STATE(363)] = 4079,
  [SMALL_STATE(364)] = 4089,
  [SMALL_STATE(365)] = 4099,
  [SMALL_STATE(366)] = 4107,
  [SMALL_STATE(367)] = 4117,
  [SMALL_STATE(368)] = 4127,
  [SMALL_STATE(369)] = 4133,
  [SMALL_STATE(370)] = 4143,
  [SMALL_STATE(371)] = 4153,
  [SMALL_STATE(372)] = 4161,
  [SMALL_STATE(373)] = 4169,
  [SMALL_STATE(374)] = 4179,
  [SMALL_STATE(375)] = 4189,
  [SMALL_STATE(376)] = 4199,
  [SMALL_STATE(377)] = 4209,
  [SMALL_STATE(378)] = 4219,
  [SMALL_STATE(379)] = 4229,
  [SMALL_STATE(380)] = 4239,
  [SMALL_STATE(381)] = 4249,
  [SMALL_STATE(382)] = 4259,
  [SMALL_STATE(383)] = 4269,
  [SMALL_STATE(384)] = 4279,
  [SMALL_STATE(385)] = 4289,
  [SMALL_STATE(386)] = 4297,
  [SMALL_STATE(387)] = 4305,
  [SMALL_STATE(388)] = 4315,
  [SMALL_STATE(389)] = 4325,
  [SMALL_STATE(390)] = 4335,
  [SMALL_STATE(391)] = 4345,
  [SMALL_STATE(392)] = 4355,
  [SMALL_STATE(393)] = 4363,
  [SMALL_STATE(394)] = 4373,
  [SMALL_STATE(395)] = 4381,
  [SMALL_STATE(396)] = 4391,
  [SMALL_STATE(397)] = 4396,
  [SMALL_STATE(398)] = 4401,
  [SMALL_STATE(399)] = 4406,
  [SMALL_STATE(400)] = 4411,
  [SMALL_STATE(401)] = 4416,
  [SMALL_STATE(402)] = 4421,
  [SMALL_STATE(403)] = 4428,
  [SMALL_STATE(404)] = 4435,
  [SMALL_STATE(405)] = 4440,
  [SMALL_STATE(406)] = 4445,
  [SMALL_STATE(407)] = 4450,
  [SMALL_STATE(408)] = 4455,
  [SMALL_STATE(409)] = 4460,
  [SMALL_STATE(410)] = 4465,
  [SMALL_STATE(411)] = 4470,
  [SMALL_STATE(412)] = 4475,
  [SMALL_STATE(413)] = 4480,
  [SMALL_STATE(414)] = 4485,
  [SMALL_STATE(415)] = 4490,
  [SMALL_STATE(416)] = 4495,
  [SMALL_STATE(417)] = 4502,
  [SMALL_STATE(418)] = 4507,
  [SMALL_STATE(419)] = 4512,
  [SMALL_STATE(420)] = 4517,
  [SMALL_STATE(421)] = 4522,
  [SMALL_STATE(422)] = 4527,
  [SMALL_STATE(423)] = 4532,
  [SMALL_STATE(424)] = 4537,
  [SMALL_STATE(425)] = 4542,
  [SMALL_STATE(426)] = 4547,
  [SMALL_STATE(427)] = 4552,
  [SMALL_STATE(428)] = 4557,
  [SMALL_STATE(429)] = 4562,
  [SMALL_STATE(430)] = 4567,
  [SMALL_STATE(431)] = 4572,
  [SMALL_STATE(432)] = 4577,
  [SMALL_STATE(433)] = 4584,
  [SMALL_STATE(434)] = 4589,
  [SMALL_STATE(435)] = 4594,
  [SMALL_STATE(436)] = 4599,
  [SMALL_STATE(437)] = 4604,
  [SMALL_STATE(438)] = 4609,
  [SMALL_STATE(439)] = 4614,
  [SMALL_STATE(440)] = 4619,
  [SMALL_STATE(441)] = 4624,
  [SMALL_STATE(442)] = 4631,
  [SMALL_STATE(443)] = 4636,
  [SMALL_STATE(444)] = 4641,
  [SMALL_STATE(445)] = 4646,
  [SMALL_STATE(446)] = 4651,
  [SMALL_STATE(447)] = 4656,
  [SMALL_STATE(448)] = 4663,
  [SMALL_STATE(449)] = 4668,
  [SMALL_STATE(450)] = 4673,
  [SMALL_STATE(451)] = 4678,
  [SMALL_STATE(452)] = 4683,
  [SMALL_STATE(453)] = 4688,
  [SMALL_STATE(454)] = 4695,
  [SMALL_STATE(455)] = 4700,
  [SMALL_STATE(456)] = 4705,
  [SMALL_STATE(457)] = 4710,
  [SMALL_STATE(458)] = 4715,
  [SMALL_STATE(459)] = 4720,
  [SMALL_STATE(460)] = 4725,
  [SMALL_STATE(461)] = 4730,
  [SMALL_STATE(462)] = 4735,
  [SMALL_STATE(463)] = 4740,
  [SMALL_STATE(464)] = 4745,
  [SMALL_STATE(465)] = 4750,
  [SMALL_STATE(466)] = 4755,
  [SMALL_STATE(467)] = 4760,
  [SMALL_STATE(468)] = 4765,
  [SMALL_STATE(469)] = 4770,
  [SMALL_STATE(470)] = 4775,
  [SMALL_STATE(471)] = 4780,
  [SMALL_STATE(472)] = 4785,
  [SMALL_STATE(473)] = 4790,
  [SMALL_STATE(474)] = 4795,
  [SMALL_STATE(475)] = 4800,
  [SMALL_STATE(476)] = 4805,
  [SMALL_STATE(477)] = 4810,
  [SMALL_STATE(478)] = 4815,
  [SMALL_STATE(479)] = 4822,
  [SMALL_STATE(480)] = 4827,
  [SMALL_STATE(481)] = 4832,
  [SMALL_STATE(482)] = 4837,
  [SMALL_STATE(483)] = 4844,
  [SMALL_STATE(484)] = 4849,
  [SMALL_STATE(485)] = 4854,
  [SMALL_STATE(486)] = 4859,
  [SMALL_STATE(487)] = 4864,
  [SMALL_STATE(488)] = 4869,
  [SMALL_STATE(489)] = 4874,
  [SMALL_STATE(490)] = 4879,
  [SMALL_STATE(491)] = 4884,
  [SMALL_STATE(492)] = 4891,
  [SMALL_STATE(493)] = 4898,
  [SMALL_STATE(494)] = 4903,
  [SMALL_STATE(495)] = 4908,
  [SMALL_STATE(496)] = 4913,
  [SMALL_STATE(497)] = 4918,
  [SMALL_STATE(498)] = 4923,
  [SMALL_STATE(499)] = 4928,
  [SMALL_STATE(500)] = 4933,
  [SMALL_STATE(501)] = 4938,
  [SMALL_STATE(502)] = 4943,
  [SMALL_STATE(503)] = 4950,
  [SMALL_STATE(504)] = 4955,
  [SMALL_STATE(505)] = 4962,
  [SMALL_STATE(506)] = 4967,
  [SMALL_STATE(507)] = 4974,
  [SMALL_STATE(508)] = 4979,
  [SMALL_STATE(509)] = 4984,
  [SMALL_STATE(510)] = 4989,
  [SMALL_STATE(511)] = 4996,
  [SMALL_STATE(512)] = 5003,
  [SMALL_STATE(513)] = 5010,
  [SMALL_STATE(514)] = 5015,
  [SMALL_STATE(515)] = 5020,
  [SMALL_STATE(516)] = 5027,
  [SMALL_STATE(517)] = 5032,
  [SMALL_STATE(518)] = 5037,
  [SMALL_STATE(519)] = 5044,
  [SMALL_STATE(520)] = 5051,
  [SMALL_STATE(521)] = 5056,
  [SMALL_STATE(522)] = 5063,
  [SMALL_STATE(523)] = 5068,
  [SMALL_STATE(524)] = 5075,
  [SMALL_STATE(525)] = 5082,
  [SMALL_STATE(526)] = 5087,
  [SMALL_STATE(527)] = 5094,
  [SMALL_STATE(528)] = 5101,
  [SMALL_STATE(529)] = 5108,
  [SMALL_STATE(530)] = 5113,
  [SMALL_STATE(531)] = 5118,
  [SMALL_STATE(532)] = 5123,
  [SMALL_STATE(533)] = 5128,
  [SMALL_STATE(534)] = 5133,
  [SMALL_STATE(535)] = 5138,
  [SMALL_STATE(536)] = 5143,
  [SMALL_STATE(537)] = 5148,
  [SMALL_STATE(538)] = 5153,
  [SMALL_STATE(539)] = 5158,
  [SMALL_STATE(540)] = 5163,
  [SMALL_STATE(541)] = 5168,
  [SMALL_STATE(542)] = 5173,
  [SMALL_STATE(543)] = 5178,
  [SMALL_STATE(544)] = 5183,
  [SMALL_STATE(545)] = 5188,
  [SMALL_STATE(546)] = 5193,
  [SMALL_STATE(547)] = 5198,
  [SMALL_STATE(548)] = 5203,
  [SMALL_STATE(549)] = 5208,
  [SMALL_STATE(550)] = 5213,
  [SMALL_STATE(551)] = 5218,
  [SMALL_STATE(552)] = 5223,
  [SMALL_STATE(553)] = 5228,
  [SMALL_STATE(554)] = 5233,
  [SMALL_STATE(555)] = 5240,
  [SMALL_STATE(556)] = 5245,
  [SMALL_STATE(557)] = 5250,
  [SMALL_STATE(558)] = 5255,
  [SMALL_STATE(559)] = 5260,
  [SMALL_STATE(560)] = 5265,
  [SMALL_STATE(561)] = 5270,
  [SMALL_STATE(562)] = 5275,
  [SMALL_STATE(563)] = 5280,
  [SMALL_STATE(564)] = 5285,
  [SMALL_STATE(565)] = 5290,
  [SMALL_STATE(566)] = 5295,
  [SMALL_STATE(567)] = 5300,
  [SMALL_STATE(568)] = 5305,
  [SMALL_STATE(569)] = 5310,
  [SMALL_STATE(570)] = 5315,
  [SMALL_STATE(571)] = 5320,
  [SMALL_STATE(572)] = 5325,
  [SMALL_STATE(573)] = 5330,
  [SMALL_STATE(574)] = 5335,
  [SMALL_STATE(575)] = 5340,
  [SMALL_STATE(576)] = 5345,
  [SMALL_STATE(577)] = 5350,
  [SMALL_STATE(578)] = 5355,
  [SMALL_STATE(579)] = 5360,
  [SMALL_STATE(580)] = 5365,
  [SMALL_STATE(581)] = 5370,
  [SMALL_STATE(582)] = 5375,
  [SMALL_STATE(583)] = 5380,
  [SMALL_STATE(584)] = 5385,
  [SMALL_STATE(585)] = 5390,
  [SMALL_STATE(586)] = 5395,
  [SMALL_STATE(587)] = 5400,
  [SMALL_STATE(588)] = 5405,
  [SMALL_STATE(589)] = 5410,
  [SMALL_STATE(590)] = 5415,
  [SMALL_STATE(591)] = 5420,
  [SMALL_STATE(592)] = 5425,
  [SMALL_STATE(593)] = 5430,
  [SMALL_STATE(594)] = 5435,
  [SMALL_STATE(595)] = 5440,
  [SMALL_STATE(596)] = 5445,
  [SMALL_STATE(597)] = 5450,
  [SMALL_STATE(598)] = 5455,
  [SMALL_STATE(599)] = 5460,
  [SMALL_STATE(600)] = 5467,
  [SMALL_STATE(601)] = 5472,
  [SMALL_STATE(602)] = 5477,
  [SMALL_STATE(603)] = 5482,
  [SMALL_STATE(604)] = 5487,
  [SMALL_STATE(605)] = 5492,
  [SMALL_STATE(606)] = 5497,
  [SMALL_STATE(607)] = 5502,
  [SMALL_STATE(608)] = 5507,
  [SMALL_STATE(609)] = 5512,
  [SMALL_STATE(610)] = 5517,
  [SMALL_STATE(611)] = 5524,
  [SMALL_STATE(612)] = 5529,
  [SMALL_STATE(613)] = 5534,
  [SMALL_STATE(614)] = 5538,
  [SMALL_STATE(615)] = 5542,
  [SMALL_STATE(616)] = 5546,
  [SMALL_STATE(617)] = 5550,
  [SMALL_STATE(618)] = 5554,
  [SMALL_STATE(619)] = 5558,
  [SMALL_STATE(620)] = 5562,
  [SMALL_STATE(621)] = 5566,
  [SMALL_STATE(622)] = 5570,
  [SMALL_STATE(623)] = 5574,
  [SMALL_STATE(624)] = 5578,
  [SMALL_STATE(625)] = 5582,
  [SMALL_STATE(626)] = 5586,
  [SMALL_STATE(627)] = 5590,
  [SMALL_STATE(628)] = 5594,
  [SMALL_STATE(629)] = 5598,
  [SMALL_STATE(630)] = 5602,
  [SMALL_STATE(631)] = 5606,
  [SMALL_STATE(632)] = 5610,
  [SMALL_STATE(633)] = 5614,
  [SMALL_STATE(634)] = 5618,
  [SMALL_STATE(635)] = 5622,
  [SMALL_STATE(636)] = 5626,
  [SMALL_STATE(637)] = 5630,
  [SMALL_STATE(638)] = 5634,
  [SMALL_STATE(639)] = 5638,
  [SMALL_STATE(640)] = 5642,
  [SMALL_STATE(641)] = 5646,
  [SMALL_STATE(642)] = 5650,
  [SMALL_STATE(643)] = 5654,
  [SMALL_STATE(644)] = 5658,
  [SMALL_STATE(645)] = 5662,
  [SMALL_STATE(646)] = 5666,
  [SMALL_STATE(647)] = 5670,
  [SMALL_STATE(648)] = 5674,
  [SMALL_STATE(649)] = 5678,
  [SMALL_STATE(650)] = 5682,
  [SMALL_STATE(651)] = 5686,
  [SMALL_STATE(652)] = 5690,
  [SMALL_STATE(653)] = 5694,
  [SMALL_STATE(654)] = 5698,
  [SMALL_STATE(655)] = 5702,
  [SMALL_STATE(656)] = 5706,
  [SMALL_STATE(657)] = 5710,
  [SMALL_STATE(658)] = 5714,
  [SMALL_STATE(659)] = 5718,
  [SMALL_STATE(660)] = 5722,
  [SMALL_STATE(661)] = 5726,
  [SMALL_STATE(662)] = 5730,
  [SMALL_STATE(663)] = 5734,
  [SMALL_STATE(664)] = 5738,
  [SMALL_STATE(665)] = 5742,
  [SMALL_STATE(666)] = 5746,
  [SMALL_STATE(667)] = 5750,
  [SMALL_STATE(668)] = 5754,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(267),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(389),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(387),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(367),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(366),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(345),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(338),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(332),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(323),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(322),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(310),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(286),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(284),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(279),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(276),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(275),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(270),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(269),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(261),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(260),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(259),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(258),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(254),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(253),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(252),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(251),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(248),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(243),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(240),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(239),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(234),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(226),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(224),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(220),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(211),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(282),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(300),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(303),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(305),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(314),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(318),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(326),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(327),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(328),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(237),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(391),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(384),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(381),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(376),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(375),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(369),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(361),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(348),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(344),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(342),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(340),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(330),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(329),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(320),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(319),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(317),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(316),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(312),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(307),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(306),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(302),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(292),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(619),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(9),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(393),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(389),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(387),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(378),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(367),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(366),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(345),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(341),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(338),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(332),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(325),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(323),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(322),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(310),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(286),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(284),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(279),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(276),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(275),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(270),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(269),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(352),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(261),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(260),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(259),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(258),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(254),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(253),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(252),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(251),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(248),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(243),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(240),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(239),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(234),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(226),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(224),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(221),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(220),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(211),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(282),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(300),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(303),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(305),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(314),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(318),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(326),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(327),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(328),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(346),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(237),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(278),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(391),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(384),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(383),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(381),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(376),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(375),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(369),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(361),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(349),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(348),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(344),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(342),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(340),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(336),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(330),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(329),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(320),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(319),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(317),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(316),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(312),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(307),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(306),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(302),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(296),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(292),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(291),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(290),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(502),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(15),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 19),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 19),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 21),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 21),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 8),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 8),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 50),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 50),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 21),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 21),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 8),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 8),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 19),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 19),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 50),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 50),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 11),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(57),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(626),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(57),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(80),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(80),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(666),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(126),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(664),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(126),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 13),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(109),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(665),
  [860] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(109),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 13),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(174),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(174),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(668),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(160),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(160),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(667),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 33),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 33),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(70),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(70),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(74),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(74),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, .production_id = 18),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 13),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(176),
  [988] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(176),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 13),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(147),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(147),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, .production_id = 25),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2), SHIFT_REPEAT(114),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(107),
  [1043] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(107),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(110),
  [1059] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(110),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(111),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(111),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(116),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(168),
  [1098] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(168),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 13),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(350),
  [1128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(350),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(293),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(293),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 21),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 28),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 8),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(630),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 21),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(635),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 8),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 28),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 40), SHIFT_REPEAT(118),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 40),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 21),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 21),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(321),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(321),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(639),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 28),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 8),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 15),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 28),
  [1237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(648),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 28),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 21),
  [1254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(651),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 8),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 28),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 8),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 8),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 23),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 21),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 21),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 21),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(104),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(654),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 8),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 8),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 28),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 31),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 51),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 48),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 47),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 30), SHIFT_REPEAT(69),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 30),
  [1418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 27), SHIFT_REPEAT(75),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 27),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 40), SHIFT_REPEAT(129),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 40),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 27), SHIFT_REPEAT(63),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 27),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 52),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 27), SHIFT_REPEAT(103),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 27),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 8),
  [1540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 27), SHIFT_REPEAT(491),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 27),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 10),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, .production_id = 19),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, .production_id = 19),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 4, .production_id = 21),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 4, .production_id = 21),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 24),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(78),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 8),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 4, .production_id = 21),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 8),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 8),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 27), SHIFT_REPEAT(358),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 27),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 21),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(86),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2), SHIFT_REPEAT(124),
  [1839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2),
  [1841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 16),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 19),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 39),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 8),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 44), SHIFT_REPEAT(98),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 44),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 17),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2), SHIFT_REPEAT(101),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 45),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, .production_id = 8),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 20),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 19),
  [1913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(55),
  [1916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, .production_id = 8),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, .production_id = 8),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, .production_id = 8),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, .production_id = 8),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, .production_id = 8),
  [1976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, .production_id = 8),
  [1978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, .production_id = 8),
  [1980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, .production_id = 8),
  [1982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, .production_id = 8),
  [1984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 8),
  [1986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 12),
  [1988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, .production_id = 8),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, .production_id = 8),
  [1992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, .production_id = 8),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, .production_id = 8),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, .production_id = 8),
  [2000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 8),
  [2002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 22),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 8),
  [2006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 8),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 8),
  [2010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [2012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [2014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [2016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 8),
  [2020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 8),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 8),
  [2024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 8),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 8),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 52),
  [2034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 8),
  [2036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 8),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [2040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 8),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 8),
  [2044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 12),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 8),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 8),
  [2050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 8),
  [2052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 8),
  [2054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 8),
  [2056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 8),
  [2058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 8),
  [2060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 8),
  [2062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 8),
  [2064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 8),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 8),
  [2068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 55),
  [2070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 54),
  [2072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 12),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 53),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 8),
  [2078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 8),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 8),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 8),
  [2084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 8),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 8),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, .production_id = 41),
  [2090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 8),
  [2092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 8),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 8),
  [2098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 8),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 8),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 8),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 8),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 8),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 8),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 9),
  [2114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 8),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 8),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 8),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 8),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 8),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 8),
  [2126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 26),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 8),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 8),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 28),
  [2144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 26),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 29),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [2152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [2154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 32),
  [2156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 26),
  [2162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 34),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [2166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 34),
  [2168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 35),
  [2170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [2172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 3, .production_id = 34),
  [2174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 3, .production_id = 34),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 37),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 38),
  [2180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [2182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 41),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 42),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 43),
  [2190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 3, .production_id = 34),
  [2194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, .production_id = 35),
  [2196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, .production_id = 37),
  [2198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 26),
  [2200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, .production_id = 18),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 26),
  [2204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 46),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 39),
  [2212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 49),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, .production_id = 36),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 14),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
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
