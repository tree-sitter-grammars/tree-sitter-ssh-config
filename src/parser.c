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
#define STATE_COUNT 828
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 358
#define ALIAS_COUNT 2
#define TOKEN_COUNT 176
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 76

enum {
  aux_sym_host_declaration_token1 = 1,
  anon_sym_BANG = 2,
  aux_sym_match_declaration_token1 = 3,
  aux_sym__all_token1 = 4,
  aux_sym__match_canonical_token1 = 5,
  aux_sym__match_final_token1 = 6,
  aux_sym__match_exec_token1 = 7,
  aux_sym__match_exec_token2 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__match_exec_token3 = 10,
  aux_sym__match_localnetwork_token1 = 11,
  aux_sym__match_localnetwork_token2 = 12,
  anon_sym_COMMA = 13,
  aux_sym__match_localnetwork_token3 = 14,
  aux_sym__match_originalhost_token1 = 15,
  aux_sym__match_tagged_token1 = 16,
  aux_sym__match_user_token1 = 17,
  aux_sym__match_localuser_token1 = 18,
  anon_sym_STAR = 19,
  anon_sym_QMARK = 20,
  aux_sym__add_keys_to_agent_token1 = 21,
  anon_sym_ask = 22,
  anon_sym_confirm = 23,
  aux_sym__address_family_token1 = 24,
  anon_sym_inet = 25,
  anon_sym_inet6 = 26,
  aux_sym__batch_mode_token1 = 27,
  aux_sym__bind_address_token1 = 28,
  aux_sym__bind_interface_token1 = 29,
  aux_sym__canonical_domains_token1 = 30,
  aux_sym__canonicalize_fallback_local_token1 = 31,
  aux_sym__canonicalize_hostname_token1 = 32,
  aux_sym__canonicalize_max_dots_token1 = 33,
  aux_sym__canonicalize_permitted_cnames_token1 = 34,
  anon_sym_none = 35,
  anon_sym_COLON = 36,
  aux_sym__ca_signature_algorithms_token1 = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  aux_sym__certificate_file_token1 = 40,
  aux_sym__check_host_ip_token1 = 41,
  aux_sym__ciphers_token1 = 42,
  anon_sym_CARET = 43,
  aux_sym__clear_all_forwardings_token1 = 44,
  aux_sym__compression_token1 = 45,
  aux_sym__connection_attempts_token1 = 46,
  aux_sym__connect_timeout_token1 = 47,
  aux_sym__control_master_token1 = 48,
  anon_sym_auto = 49,
  anon_sym_autoask = 50,
  aux_sym__control_persist_token1 = 51,
  aux_sym__control_path_token1 = 52,
  aux_sym__enable_escape_command_line_token1 = 53,
  aux_sym__enable_ssh_keysign_token1 = 54,
  aux_sym__escape_char_token1 = 55,
  aux_sym__escape_char_token2 = 56,
  aux_sym__exit_on_forward_failure_token1 = 57,
  aux_sym__fingerprint_hash_token1 = 58,
  anon_sym_md5 = 59,
  anon_sym_sha256 = 60,
  aux_sym__fork_after_authentication_token1 = 61,
  aux_sym__forward_agent_token1 = 62,
  aux_sym__forward_x11_token1 = 63,
  aux_sym__forward_x11_timeout_token1 = 64,
  aux_sym__forward_x11_trusted_token1 = 65,
  aux_sym__global_known_hosts_file_token1 = 66,
  aux_sym__gssapi_authentication_token1 = 67,
  aux_sym__gssapi_delegate_credentials_token1 = 68,
  aux_sym__hostbased_accepted_algorithms_token1 = 69,
  aux_sym__hostbased_accepted_algorithms_token2 = 70,
  aux_sym__hostbased_authentication_token1 = 71,
  aux_sym__host_key_algorithms_token1 = 72,
  aux_sym__host_key_alias_token1 = 73,
  aux_sym__hostname_token1 = 74,
  aux_sym__identities_only_token1 = 75,
  aux_sym__identity_agent_token1 = 76,
  anon_sym_SSH_AUTH_SOCK = 77,
  aux_sym__identity_file_token1 = 78,
  aux_sym__ignore_unknown_token1 = 79,
  aux_sym__ipqos_token1 = 80,
  aux_sym__kbd_interactive_authentication_token1 = 81,
  aux_sym__kbd_interactive_authentication_token2 = 82,
  aux_sym__kex_algorithms_token1 = 83,
  aux_sym__known_hosts_command_token1 = 84,
  aux_sym__local_command_token1 = 85,
  aux_sym__local_forward_token1 = 86,
  aux_sym__log_level_token1 = 87,
  aux_sym__log_verbose_token1 = 88,
  aux_sym__log_verbose_value_token1 = 89,
  aux_sym__macs_token1 = 90,
  aux_sym__no_host_authentication_for_localhost_token1 = 91,
  aux_sym__number_of_password_prompts_token1 = 92,
  aux_sym__password_authentication_token1 = 93,
  aux_sym__permit_local_command_token1 = 94,
  aux_sym__permit_remote_open_token1 = 95,
  anon_sym_any = 96,
  aux_sym__pkcs11_provider_token1 = 97,
  aux_sym__port_token1 = 98,
  aux_sym__preferred_authentications_token1 = 99,
  aux_sym__proxy_command_token1 = 100,
  aux_sym__proxy_jump_token1 = 101,
  anon_sym_AT = 102,
  aux_sym__proxy_jump_arg_token1 = 103,
  aux_sym__proxy_jump_arg_token2 = 104,
  aux_sym__proxy_use_fdpass_token1 = 105,
  aux_sym__pubkey_accepted_algorithms_token1 = 106,
  aux_sym__pubkey_authentication_token1 = 107,
  anon_sym_unbound = 108,
  anon_sym_host_DASHbound = 109,
  aux_sym__rekey_limit_token1 = 110,
  aux_sym__remote_command_token1 = 111,
  aux_sym__remote_forward_token1 = 112,
  aux_sym__request_tty_token1 = 113,
  anon_sym_force = 114,
  aux_sym__required_rsa_size_token1 = 115,
  aux_sym__revoked_host_keys_token1 = 116,
  aux_sym__security_key_provider_token1 = 117,
  aux_sym__send_env_token1 = 118,
  aux_sym__send_env_value_token1 = 119,
  aux_sym__server_alive_count_max_token1 = 120,
  aux_sym__server_alive_interval_token1 = 121,
  aux_sym__session_type_token1 = 122,
  anon_sym_subsystem = 123,
  anon_sym_default = 124,
  anon_sym_EQ = 125,
  aux_sym__stdin_null_token1 = 126,
  aux_sym__stream_local_bind_mask_token1 = 127,
  aux_sym__stream_local_bind_mask_token2 = 128,
  aux_sym__stream_local_bind_unlink_token1 = 129,
  aux_sym__strict_host_key_checking_token1 = 130,
  anon_sym_accept_DASHnew = 131,
  anon_sym_off = 132,
  aux_sym__syslog_facility_token1 = 133,
  aux_sym__tcp_keep_alive_token1 = 134,
  aux_sym__tag_token1 = 135,
  aux_sym__tunnel_token1 = 136,
  anon_sym_point_DASHto_DASHpoint = 137,
  anon_sym_ethernet = 138,
  aux_sym__tunnel_device_token1 = 139,
  aux_sym__update_host_keys_token1 = 140,
  aux_sym__user_known_hosts_file_token1 = 141,
  aux_sym__verify_host_key_dns_token1 = 142,
  aux_sym__visual_host_key_token1 = 143,
  aux_sym__xauth_location_token1 = 144,
  sym_ipqos = 145,
  sym_verbosity = 146,
  sym_facility = 147,
  sym_authentication = 148,
  sym_cipher = 149,
  sym_kex = 150,
  sym_key_sig = 151,
  sym_mac = 152,
  sym_sig = 153,
  aux_sym__file_token_token1 = 154,
  aux_sym__hosts_token_token1 = 155,
  aux_sym__hostname_token_token1 = 156,
  aux_sym__proxy_token_token1 = 157,
  sym_token = 158,
  anon_sym_DOLLAR = 159,
  sym__var_name = 160,
  anon_sym_DOLLAR_LBRACE = 161,
  anon_sym_RBRACE = 162,
  anon_sym_yes = 163,
  anon_sym_no = 164,
  sym__number = 165,
  aux_sym_bytes_token1 = 166,
  aux_sym_time_token1 = 167,
  aux_sym_time_token2 = 168,
  aux_sym_time_token3 = 169,
  aux_sym_time_token4 = 170,
  aux_sym_time_token5 = 171,
  sym_comment = 172,
  aux_sym__sep_token1 = 173,
  sym__space = 174,
  sym__eol = 175,
  sym_config = 176,
  sym_host_declaration = 177,
  sym_match_declaration = 178,
  sym__all = 179,
  sym__match_canonical = 180,
  sym__match_final = 181,
  sym__match_exec = 182,
  sym__match_localnetwork = 183,
  sym__match_host = 184,
  sym__match_originalhost = 185,
  sym__match_tagged = 186,
  sym__match_user = 187,
  sym__match_localuser = 188,
  sym__match_value = 189,
  sym__declarations = 190,
  sym_parameter = 191,
  sym__add_keys_to_agent = 192,
  sym__address_family = 193,
  sym__batch_mode = 194,
  sym__bind_address = 195,
  sym__bind_interface = 196,
  sym__canonical_domains = 197,
  sym__canonicalize_fallback_local = 198,
  sym__canonicalize_hostname = 199,
  sym__canonicalize_max_dots = 200,
  sym__canonicalize_permitted_cnames = 201,
  sym__cnames_map = 202,
  sym__ca_signature_algorithms = 203,
  sym__certificate_file = 204,
  sym__check_host_ip = 205,
  sym__ciphers = 206,
  sym__clear_all_forwardings = 207,
  sym__compression = 208,
  sym__connection_attempts = 209,
  sym__connect_timeout = 210,
  sym__control_master = 211,
  sym__control_persist = 212,
  sym__control_path = 213,
  sym__enable_escape_command_line = 214,
  sym__enable_ssh_keysign = 215,
  sym__escape_char = 216,
  sym__exit_on_forward_failure = 217,
  sym__fingerprint_hash = 218,
  sym__fork_after_authentication = 219,
  sym__forward_agent = 220,
  sym__forward_x11 = 221,
  sym__forward_x11_timeout = 222,
  sym__forward_x11_trusted = 223,
  sym__global_known_hosts_file = 224,
  sym__gssapi_authentication = 225,
  sym__gssapi_delegate_credentials = 226,
  sym__hostbased_accepted_algorithms = 227,
  sym__hostbased_authentication = 228,
  sym__host_key_algorithms = 229,
  sym__host_key_alias = 230,
  sym__hostname = 231,
  sym__identities_only = 232,
  sym__identity_agent = 233,
  sym__identity_file = 234,
  sym__ignore_unknown = 235,
  sym__ipqos = 236,
  sym__kbd_interactive_authentication = 237,
  sym__kex_algorithms = 238,
  sym__known_hosts_command = 239,
  sym__local_command = 240,
  sym__local_forward = 241,
  sym__forward_value1 = 242,
  sym__forward_value2 = 243,
  sym__log_level = 244,
  sym__log_verbose = 245,
  sym__log_verbose_value = 246,
  sym__log_verbose_quoted = 247,
  sym__macs = 248,
  sym__no_host_authentication_for_localhost = 249,
  sym__number_of_password_prompts = 250,
  sym__password_authentication = 251,
  sym__permit_local_command = 252,
  sym__permit_remote_open = 253,
  sym__permit_remote_open_value = 254,
  sym__pkcs11_provider = 255,
  sym__port = 256,
  sym__preferred_authentications = 257,
  sym__proxy_command = 258,
  sym__proxy_jump = 259,
  sym__proxy_use_fdpass = 260,
  sym__pubkey_accepted_algorithms = 261,
  sym__pubkey_authentication = 262,
  sym__pubkey_authentication_arg = 263,
  sym__rekey_limit = 264,
  sym__remote_command = 265,
  sym__remote_forward = 266,
  sym__request_tty = 267,
  sym__required_rsa_size = 268,
  sym__revoked_host_keys = 269,
  sym__security_key_provider = 270,
  sym__send_env = 271,
  sym__send_env_value = 272,
  sym__server_alive_count_max = 273,
  sym__server_alive_interval = 274,
  sym__session_type = 275,
  sym__set_env = 276,
  sym__set_env_value = 277,
  sym__stdin_null = 278,
  sym__stream_local_bind_mask = 279,
  sym__stream_local_bind_unlink = 280,
  sym__strict_host_key_checking = 281,
  sym__syslog_facility = 282,
  sym__tcp_keep_alive = 283,
  sym__tag = 284,
  sym__tunnel = 285,
  sym__tunnel_device = 286,
  sym__update_host_keys = 287,
  sym__user = 288,
  sym__user_known_hosts_file = 289,
  sym__verify_host_key_dns = 290,
  sym__visual_host_key = 291,
  sym__xauth_location = 292,
  sym__file_token = 293,
  sym__hosts_token = 294,
  sym__hostname_token = 295,
  sym__proxy_token = 296,
  sym__var_value = 297,
  sym_variable = 298,
  sym__file_string = 299,
  sym__hosts_string = 300,
  sym__hostname_string = 301,
  aux_sym__proxy_string_content = 302,
  sym__proxy_string = 303,
  sym__token_string = 304,
  sym_string = 305,
  sym__file_pattern_vars = 306,
  sym_pattern = 307,
  sym__boolean = 308,
  sym_number = 309,
  sym_bytes = 310,
  sym_time = 311,
  sym__sep = 312,
  aux_sym_config_repeat1 = 313,
  aux_sym_host_declaration_repeat1 = 314,
  aux_sym_match_declaration_repeat1 = 315,
  aux_sym__match_exec_repeat1 = 316,
  aux_sym__match_exec_repeat2 = 317,
  aux_sym__match_localnetwork_repeat1 = 318,
  aux_sym__match_localnetwork_repeat2 = 319,
  aux_sym__match_value_repeat1 = 320,
  aux_sym__match_value_repeat2 = 321,
  aux_sym__match_value_repeat3 = 322,
  aux_sym__match_value_repeat4 = 323,
  aux_sym__declarations_repeat1 = 324,
  aux_sym__canonical_domains_repeat1 = 325,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 326,
  aux_sym__cnames_map_repeat1 = 327,
  aux_sym__ca_signature_algorithms_repeat1 = 328,
  aux_sym__ciphers_repeat1 = 329,
  aux_sym__global_known_hosts_file_repeat1 = 330,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 331,
  aux_sym__ignore_unknown_repeat1 = 332,
  aux_sym__kex_algorithms_repeat1 = 333,
  aux_sym__local_command_repeat1 = 334,
  aux_sym__log_verbose_repeat1 = 335,
  aux_sym__log_verbose_repeat2 = 336,
  aux_sym__log_verbose_value_repeat1 = 337,
  aux_sym__macs_repeat1 = 338,
  aux_sym__permit_remote_open_repeat1 = 339,
  aux_sym__preferred_authentications_repeat1 = 340,
  aux_sym__proxy_command_arg_repeat1 = 341,
  aux_sym__remote_command_repeat1 = 342,
  aux_sym__send_env_repeat1 = 343,
  aux_sym__send_env_value_repeat1 = 344,
  aux_sym__set_env_repeat1 = 345,
  aux_sym__user_known_hosts_file_repeat1 = 346,
  aux_sym__file_string_repeat1 = 347,
  aux_sym__file_string_repeat2 = 348,
  aux_sym__hosts_string_repeat1 = 349,
  aux_sym__hosts_string_repeat2 = 350,
  aux_sym__hostname_string_repeat1 = 351,
  aux_sym__hostname_string_repeat2 = 352,
  aux_sym__proxy_string_repeat1 = 353,
  aux_sym__token_string_repeat1 = 354,
  aux_sym__token_string_repeat2 = 355,
  aux_sym__file_pattern_vars_repeat1 = 356,
  aux_sym__file_pattern_vars_repeat2 = 357,
  anon_alias_sym_User = 358,
  anon_alias_sym_host = 359,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_host_declaration_token1] = "Host",
  [anon_sym_BANG] = "!",
  [aux_sym_match_declaration_token1] = "Match",
  [aux_sym__all_token1] = "all",
  [aux_sym__match_canonical_token1] = "canonical",
  [aux_sym__match_final_token1] = "final",
  [aux_sym__match_exec_token1] = "exec",
  [aux_sym__match_exec_token2] = "_match_exec_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__match_exec_token3] = "_match_exec_token3",
  [aux_sym__match_localnetwork_token1] = "localnetwork",
  [aux_sym__match_localnetwork_token2] = "_match_localnetwork_token2",
  [anon_sym_COMMA] = ",",
  [aux_sym__match_localnetwork_token3] = "_match_localnetwork_token3",
  [aux_sym__match_originalhost_token1] = "originalhost",
  [aux_sym__match_tagged_token1] = "tagged",
  [aux_sym__match_user_token1] = "user",
  [aux_sym__match_localuser_token1] = "localuser",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
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
  [aux_sym__log_verbose_value_token1] = "_log_verbose_value_token1",
  [aux_sym__macs_token1] = "MACs",
  [aux_sym__no_host_authentication_for_localhost_token1] = "NoHostAuthenticationForLocalhost",
  [aux_sym__number_of_password_prompts_token1] = "NumberOfPasswordPrompts",
  [aux_sym__password_authentication_token1] = "PasswordAuthentication",
  [aux_sym__permit_local_command_token1] = "PermitLocalCommand",
  [aux_sym__permit_remote_open_token1] = "PermitRemoteOpen",
  [anon_sym_any] = "any",
  [aux_sym__pkcs11_provider_token1] = "PKCS11Provider",
  [aux_sym__port_token1] = "Port",
  [aux_sym__preferred_authentications_token1] = "PreferredAuthentications",
  [aux_sym__proxy_command_token1] = "ProxyCommand",
  [aux_sym__proxy_jump_token1] = "ProxyJump",
  [anon_sym_AT] = "@",
  [aux_sym__proxy_jump_arg_token1] = "string",
  [aux_sym__proxy_jump_arg_token2] = "uri",
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
  [aux_sym__syslog_facility_token1] = "SyslogFacility",
  [aux_sym__tcp_keep_alive_token1] = "TCPKeepAlive",
  [aux_sym__tag_token1] = "Tag",
  [aux_sym__tunnel_token1] = "Tunnel",
  [anon_sym_point_DASHto_DASHpoint] = "point-to-point",
  [anon_sym_ethernet] = "ethernet",
  [aux_sym__tunnel_device_token1] = "TunnelDevice",
  [aux_sym__update_host_keys_token1] = "UpdateHostKeys",
  [aux_sym__user_known_hosts_file_token1] = "UserKnownHostsFile",
  [aux_sym__verify_host_key_dns_token1] = "VerifyHostKeyDNS",
  [aux_sym__visual_host_key_token1] = "VisualHostKey",
  [aux_sym__xauth_location_token1] = "XAuthLocation",
  [sym_ipqos] = "ipqos",
  [sym_verbosity] = "verbosity",
  [sym_facility] = "facility",
  [sym_authentication] = "authentication",
  [sym_cipher] = "cipher",
  [sym_kex] = "kex",
  [sym_key_sig] = "key_sig",
  [sym_mac] = "mac",
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
  [sym_match_declaration] = "match_declaration",
  [sym__all] = "_all",
  [sym__match_canonical] = "_match_canonical",
  [sym__match_final] = "_match_final",
  [sym__match_exec] = "_match_exec",
  [sym__match_localnetwork] = "_match_localnetwork",
  [sym__match_host] = "_match_host",
  [sym__match_originalhost] = "_match_originalhost",
  [sym__match_tagged] = "_match_tagged",
  [sym__match_user] = "_match_user",
  [sym__match_localuser] = "_match_localuser",
  [sym__match_value] = "_match_value",
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
  [sym__syslog_facility] = "_syslog_facility",
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
  [aux_sym_match_declaration_repeat1] = "match_declaration_repeat1",
  [aux_sym__match_exec_repeat1] = "_match_exec_repeat1",
  [aux_sym__match_exec_repeat2] = "_match_exec_repeat2",
  [aux_sym__match_localnetwork_repeat1] = "_match_localnetwork_repeat1",
  [aux_sym__match_localnetwork_repeat2] = "_match_localnetwork_repeat2",
  [aux_sym__match_value_repeat1] = "_match_value_repeat1",
  [aux_sym__match_value_repeat2] = "_match_value_repeat2",
  [aux_sym__match_value_repeat3] = "_match_value_repeat3",
  [aux_sym__match_value_repeat4] = "_match_value_repeat4",
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
  [anon_alias_sym_User] = "User",
  [anon_alias_sym_host] = "host",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_host_declaration_token1] = aux_sym_host_declaration_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_match_declaration_token1] = aux_sym_match_declaration_token1,
  [aux_sym__all_token1] = aux_sym__all_token1,
  [aux_sym__match_canonical_token1] = aux_sym__match_canonical_token1,
  [aux_sym__match_final_token1] = aux_sym__match_final_token1,
  [aux_sym__match_exec_token1] = aux_sym__match_exec_token1,
  [aux_sym__match_exec_token2] = aux_sym__match_exec_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__match_exec_token3] = aux_sym__match_exec_token3,
  [aux_sym__match_localnetwork_token1] = aux_sym__match_localnetwork_token1,
  [aux_sym__match_localnetwork_token2] = aux_sym__match_localnetwork_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__match_localnetwork_token3] = aux_sym__match_localnetwork_token3,
  [aux_sym__match_originalhost_token1] = aux_sym__match_originalhost_token1,
  [aux_sym__match_tagged_token1] = aux_sym__match_tagged_token1,
  [aux_sym__match_user_token1] = aux_sym__match_user_token1,
  [aux_sym__match_localuser_token1] = aux_sym__match_localuser_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [aux_sym__log_verbose_value_token1] = aux_sym__log_verbose_value_token1,
  [aux_sym__macs_token1] = aux_sym__macs_token1,
  [aux_sym__no_host_authentication_for_localhost_token1] = aux_sym__no_host_authentication_for_localhost_token1,
  [aux_sym__number_of_password_prompts_token1] = aux_sym__number_of_password_prompts_token1,
  [aux_sym__password_authentication_token1] = aux_sym__password_authentication_token1,
  [aux_sym__permit_local_command_token1] = aux_sym__permit_local_command_token1,
  [aux_sym__permit_remote_open_token1] = aux_sym__permit_remote_open_token1,
  [anon_sym_any] = anon_sym_any,
  [aux_sym__pkcs11_provider_token1] = aux_sym__pkcs11_provider_token1,
  [aux_sym__port_token1] = aux_sym__port_token1,
  [aux_sym__preferred_authentications_token1] = aux_sym__preferred_authentications_token1,
  [aux_sym__proxy_command_token1] = aux_sym__proxy_command_token1,
  [aux_sym__proxy_jump_token1] = aux_sym__proxy_jump_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__proxy_jump_arg_token1] = sym_string,
  [aux_sym__proxy_jump_arg_token2] = aux_sym__proxy_jump_arg_token2,
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
  [aux_sym__syslog_facility_token1] = aux_sym__syslog_facility_token1,
  [aux_sym__tcp_keep_alive_token1] = aux_sym__tcp_keep_alive_token1,
  [aux_sym__tag_token1] = aux_sym__tag_token1,
  [aux_sym__tunnel_token1] = aux_sym__tunnel_token1,
  [anon_sym_point_DASHto_DASHpoint] = anon_sym_point_DASHto_DASHpoint,
  [anon_sym_ethernet] = anon_sym_ethernet,
  [aux_sym__tunnel_device_token1] = aux_sym__tunnel_device_token1,
  [aux_sym__update_host_keys_token1] = aux_sym__update_host_keys_token1,
  [aux_sym__user_known_hosts_file_token1] = aux_sym__user_known_hosts_file_token1,
  [aux_sym__verify_host_key_dns_token1] = aux_sym__verify_host_key_dns_token1,
  [aux_sym__visual_host_key_token1] = aux_sym__visual_host_key_token1,
  [aux_sym__xauth_location_token1] = aux_sym__xauth_location_token1,
  [sym_ipqos] = sym_ipqos,
  [sym_verbosity] = sym_verbosity,
  [sym_facility] = sym_facility,
  [sym_authentication] = sym_authentication,
  [sym_cipher] = sym_cipher,
  [sym_kex] = sym_kex,
  [sym_key_sig] = sym_key_sig,
  [sym_mac] = sym_mac,
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
  [sym_match_declaration] = sym_match_declaration,
  [sym__all] = sym__all,
  [sym__match_canonical] = sym__match_canonical,
  [sym__match_final] = sym__match_final,
  [sym__match_exec] = sym__match_exec,
  [sym__match_localnetwork] = sym__match_localnetwork,
  [sym__match_host] = sym__match_host,
  [sym__match_originalhost] = sym__match_originalhost,
  [sym__match_tagged] = sym__match_tagged,
  [sym__match_user] = sym__match_user,
  [sym__match_localuser] = sym__match_localuser,
  [sym__match_value] = sym__match_value,
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
  [sym__syslog_facility] = sym__syslog_facility,
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
  [aux_sym_match_declaration_repeat1] = aux_sym_match_declaration_repeat1,
  [aux_sym__match_exec_repeat1] = aux_sym__match_exec_repeat1,
  [aux_sym__match_exec_repeat2] = aux_sym__match_exec_repeat2,
  [aux_sym__match_localnetwork_repeat1] = aux_sym__match_localnetwork_repeat1,
  [aux_sym__match_localnetwork_repeat2] = aux_sym__match_localnetwork_repeat2,
  [aux_sym__match_value_repeat1] = aux_sym__match_value_repeat1,
  [aux_sym__match_value_repeat2] = aux_sym__match_value_repeat2,
  [aux_sym__match_value_repeat3] = aux_sym__match_value_repeat3,
  [aux_sym__match_value_repeat4] = aux_sym__match_value_repeat4,
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
  [anon_alias_sym_User] = anon_alias_sym_User,
  [anon_alias_sym_host] = anon_alias_sym_host,
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
  [aux_sym_match_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__all_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_canonical_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_final_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_exec_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localnetwork_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localnetwork_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_originalhost_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_tagged_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_user_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localuser_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [aux_sym__log_verbose_value_token1] = {
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
  [aux_sym__proxy_jump_arg_token2] = {
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
  [aux_sym__syslog_facility_token1] = {
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
  [sym_facility] = {
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
  [sym_match_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__all] = {
    .visible = false,
    .named = true,
  },
  [sym__match_canonical] = {
    .visible = false,
    .named = true,
  },
  [sym__match_final] = {
    .visible = false,
    .named = true,
  },
  [sym__match_exec] = {
    .visible = false,
    .named = true,
  },
  [sym__match_localnetwork] = {
    .visible = false,
    .named = true,
  },
  [sym__match_host] = {
    .visible = false,
    .named = true,
  },
  [sym__match_originalhost] = {
    .visible = false,
    .named = true,
  },
  [sym__match_tagged] = {
    .visible = false,
    .named = true,
  },
  [sym__match_user] = {
    .visible = false,
    .named = true,
  },
  [sym__match_localuser] = {
    .visible = false,
    .named = true,
  },
  [sym__match_value] = {
    .visible = false,
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
  [sym__syslog_facility] = {
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
  [aux_sym_match_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_exec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_exec_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_localnetwork_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_value_repeat4] = {
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
  [anon_alias_sym_User] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_host] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_bind_address = 2,
  field_criteria = 3,
  field_file = 4,
  field_function = 5,
  field_host = 6,
  field_keyword = 7,
  field_line = 8,
  field_local_tun = 9,
  field_name = 10,
  field_port = 11,
  field_remote_tun = 12,
  field_source_domain_list = 13,
  field_target_domain_list = 14,
  field_uri = 15,
  field_user = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_bind_address] = "bind_address",
  [field_criteria] = "criteria",
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
  [field_uri] = "uri",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 5},
  [5] = {.index = 14, .length = 5},
  [6] = {.index = 19, .length = 4},
  [7] = {.index = 23, .length = 6},
  [8] = {.index = 29, .length = 4},
  [9] = {.index = 33, .length = 1},
  [10] = {.index = 34, .length = 1},
  [11] = {.index = 35, .length = 2},
  [12] = {.index = 37, .length = 2},
  [13] = {.index = 37, .length = 2},
  [14] = {.index = 39, .length = 1},
  [15] = {.index = 40, .length = 4},
  [17] = {.index = 44, .length = 3},
  [19] = {.index = 47, .length = 1},
  [20] = {.index = 48, .length = 5},
  [21] = {.index = 53, .length = 4},
  [22] = {.index = 37, .length = 2},
  [24] = {.index = 57, .length = 4},
  [25] = {.index = 61, .length = 3},
  [26] = {.index = 64, .length = 7},
  [27] = {.index = 71, .length = 3},
  [28] = {.index = 74, .length = 1},
  [29] = {.index = 75, .length = 9},
  [30] = {.index = 84, .length = 7},
  [32] = {.index = 91, .length = 1},
  [33] = {.index = 92, .length = 2},
  [34] = {.index = 94, .length = 2},
  [35] = {.index = 94, .length = 2},
  [36] = {.index = 94, .length = 2},
  [37] = {.index = 96, .length = 3},
  [38] = {.index = 99, .length = 4},
  [39] = {.index = 103, .length = 3},
  [40] = {.index = 106, .length = 6},
  [41] = {.index = 112, .length = 2},
  [43] = {.index = 74, .length = 1},
  [45] = {.index = 114, .length = 3},
  [46] = {.index = 117, .length = 2},
  [47] = {.index = 119, .length = 7},
  [48] = {.index = 126, .length = 7},
  [49] = {.index = 133, .length = 3},
  [50] = {.index = 136, .length = 6},
  [51] = {.index = 142, .length = 2},
  [52] = {.index = 142, .length = 2},
  [53] = {.index = 144, .length = 2},
  [54] = {.index = 146, .length = 4},
  [55] = {.index = 99, .length = 4},
  [56] = {.index = 150, .length = 2},
  [58] = {.index = 152, .length = 3},
  [59] = {.index = 152, .length = 3},
  [60] = {.index = 155, .length = 3},
  [61] = {.index = 158, .length = 3},
  [62] = {.index = 161, .length = 11},
  [63] = {.index = 172, .length = 4},
  [65] = {.index = 176, .length = 4},
  [66] = {.index = 176, .length = 4},
  [68] = {.index = 180, .length = 4},
  [69] = {.index = 184, .length = 3},
  [70] = {.index = 187, .length = 2},
  [71] = {.index = 187, .length = 2},
  [72] = {.index = 189, .length = 6},
  [74] = {.index = 195, .length = 5},
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
    {field_uri, 0, .inherited = true},
    {field_user, 0, .inherited = true},
  [29] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_local_tun, 0, .inherited = true},
    {field_remote_tun, 0, .inherited = true},
  [33] =
    {field_criteria, 0},
  [34] =
    {field_criteria, 0, .inherited = true},
  [35] =
    {field_argument, 0, .inherited = true},
    {field_criteria, 0, .inherited = true},
  [37] =
    {field_argument, 2},
    {field_keyword, 0},
  [39] =
    {field_keyword, 0},
  [40] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [44] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [47] =
    {field_port, 0},
  [48] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [53] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [57] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_criteria, 0, .inherited = true},
    {field_criteria, 1, .inherited = true},
  [61] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [64] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [71] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [74] =
    {field_name, 1},
  [75] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [84] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [91] =
    {field_argument, 1},
  [92] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [94] =
    {field_argument, 2},
    {field_criteria, 0},
  [96] =
    {field_argument, 2, .inherited = true},
    {field_criteria, 2, .inherited = true},
    {field_keyword, 0},
  [99] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [103] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [106] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [112] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [114] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [117] =
    {field_bind_address, 0},
    {field_port, 2},
  [119] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_host, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
  [126] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [133] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [136] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [142] =
    {field_host, 0},
    {field_port, 2},
  [144] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [146] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [150] =
    {field_argument, 1},
    {field_argument, 2},
  [152] =
    {field_argument, 2},
    {field_argument, 3},
    {field_criteria, 0},
  [155] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [158] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [161] =
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
  [172] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [176] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_criteria, 0},
  [180] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [184] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [187] =
    {field_host, 1},
    {field_port, 3},
  [189] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_argument, 6},
    {field_keyword, 0},
  [195] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_criteria, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [0] = anon_alias_sym_User,
  },
  [16] = {
    [0] = sym_pattern,
  },
  [18] = {
    [0] = sym_string,
  },
  [22] = {
    [2] = sym_string,
  },
  [23] = {
    [0] = sym_variable,
  },
  [28] = {
    [1] = sym_variable,
  },
  [31] = {
    [1] = sym_variable,
  },
  [34] = {
    [0] = anon_alias_sym_host,
  },
  [35] = {
    [2] = sym_string,
  },
  [42] = {
    [0] = sym_pattern,
    [1] = sym_pattern,
    [2] = sym_pattern,
  },
  [44] = {
    [0] = sym_string,
    [1] = sym_string,
    [2] = sym_string,
  },
  [51] = {
    [0] = sym_string,
  },
  [55] = {
    [2] = sym_string,
  },
  [57] = {
    [0] = sym_pattern,
    [1] = sym_pattern,
  },
  [58] = {
    [3] = sym_string,
  },
  [59] = {
    [2] = sym_string,
  },
  [64] = {
    [1] = sym_pattern,
  },
  [65] = {
    [2] = sym_string,
    [3] = sym_string,
    [4] = sym_string,
  },
  [66] = {
    [3] = sym_string,
  },
  [67] = {
    [1] = sym_string,
  },
  [70] = {
    [1] = sym_string,
  },
  [72] = {
    [2] = sym_string,
  },
  [73] = {
    [1] = sym_pattern,
    [2] = sym_pattern,
  },
  [74] = {
    [3] = sym_string,
  },
  [75] = {
    [2] = sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__proxy_string_content, 2,
    aux_sym__proxy_string_content,
    sym_string,
  aux_sym__match_exec_repeat1, 2,
    aux_sym__match_exec_repeat1,
    sym_string,
  aux_sym__match_exec_repeat2, 2,
    aux_sym__match_exec_repeat2,
    sym_string,
  aux_sym__match_value_repeat1, 2,
    aux_sym__match_value_repeat1,
    sym_pattern,
  aux_sym__match_value_repeat3, 2,
    aux_sym__match_value_repeat3,
    sym_pattern,
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
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 45,
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
  [137] = 45,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 45,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 125,
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
  [157] = 139,
  [158] = 158,
  [159] = 132,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 46,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 132,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 46,
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
  [191] = 46,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 162,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 162,
  [202] = 202,
  [203] = 203,
  [204] = 125,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 125,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 125,
  [220] = 125,
  [221] = 206,
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
  [279] = 206,
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
  [452] = 218,
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
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 808,
  [818] = 818,
  [819] = 808,
  [820] = 808,
  [821] = 808,
  [822] = 808,
  [823] = 797,
  [824] = 797,
  [825] = 797,
  [826] = 797,
  [827] = 797,
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
      if (eof) ADVANCE(1794);
      if (lookahead == '!') ADVANCE(1797);
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(2014);
      if (lookahead == '%') ADVANCE(1806);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '+') ADVANCE(1885);
      if (lookahead == ',') ADVANCE(1855);
      if (lookahead == '-') ADVANCE(1886);
      if (lookahead == ':') ADVANCE(1883);
      if (lookahead == '=') ADVANCE(1974);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == '@') ADVANCE(1952);
      if (lookahead == 'S') ADVANCE(1804);
      if (lookahead == '^') ADVANCE(1890);
      if (lookahead == 's') ADVANCE(1804);
      if (lookahead == '}') ADVANCE(2037);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1804);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1804);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1804);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1804);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'g' ||
          lookahead == 'k') ADVANCE(1804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1804);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2054);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1797);
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '+') ADVANCE(1885);
      if (lookahead == ',') ADVANCE(1855);
      if (lookahead == '-') ADVANCE(1886);
      if (lookahead == '0') ADVANCE(2042);
      if (lookahead == ':') ADVANCE(1883);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == 'A') ADVANCE(1195);
      if (lookahead == 'C') ADVANCE(771);
      if (lookahead == 'E') ADVANCE(1759);
      if (lookahead == 'F') ADVANCE(1119);
      if (lookahead == 'O') ADVANCE(1516);
      if (lookahead == 'S') ADVANCE(1938);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'f') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'w') ADVANCE(423);
      if (lookahead == 'y') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1422);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1597);
      if (lookahead == 'G' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'g' ||
          ('k' <= lookahead && lookahead <= 'm')) ADVANCE(2044);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2043);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1823);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1812);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1818);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1813);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1815);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1814);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1811);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1817);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1819);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1810);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1824);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == ',') ADVANCE(1855);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1812);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1818);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1813);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1815);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1814);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1816);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1811);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1817);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == ',') ADVANCE(1855);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '-') ADVANCE(1886);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1968);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(2042);
      if (lookahead == '=') ADVANCE(2051);
      if (lookahead == 'C') ADVANCE(771);
      if (lookahead == 'E') ADVANCE(1759);
      if (lookahead == 'L') ADVANCE(1422);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'c') ADVANCE(610);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead == 't') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2052);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1119);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1516);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2049);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1597);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2043);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2046);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2047);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2048);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2049);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2045);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(1797);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(1797);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1828);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(1798);
      if (lookahead == '"') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(2014);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead == 'S') ADVANCE(1805);
      if (lookahead == 'n') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead == 'n') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(1829);
      if (lookahead == '%') ADVANCE(1833);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(1829);
      if (lookahead == '%') ADVANCE(1833);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '$') ADVANCE(1829);
      if (lookahead == '%') ADVANCE(1835);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1833);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1819);
      if (lookahead == 'n') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1832);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1831);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '%') ADVANCE(1836);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == ',') ADVANCE(1855);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead == 'n') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0) ADVANCE(1828);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1827);
      if (lookahead == '$') ADVANCE(1809);
      if (lookahead == '%') ADVANCE(1822);
      if (lookahead == '*') ADVANCE(1863);
      if (lookahead == '0') ADVANCE(1825);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1825);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1827);
      if (lookahead == '$') ADVANCE(1809);
      if (lookahead == '%') ADVANCE(1822);
      if (lookahead == '*') ADVANCE(1863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1825);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1827);
      if (lookahead == '$') ADVANCE(2015);
      if (lookahead == 'n') ADVANCE(1848);
      if (lookahead == 'y') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1827);
      if (lookahead == '$') ADVANCE(2015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1827);
      if (lookahead == '*') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1846);
      if (lookahead == 'n') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 48:
      if (lookahead == '$') ADVANCE(1830);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1837);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == ',') ADVANCE(1855);
      if (lookahead == ':') ADVANCE(1883);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == ':') ADVANCE(1883);
      if (lookahead == '?') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1828);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(396);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(513);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(692);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(518);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(698);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(442);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(413);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '@') ADVANCE(568);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '@') ADVANCE(547);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(515);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(397);
      if (lookahead == '1') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(486);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(310);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(641);
      if (lookahead == '4') ADVANCE(87);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '8') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(539);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(421);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(659);
      END_STATE();
    case 103:
      if (lookahead == '.') ADVANCE(555);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(350);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(353);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(355);
      END_STATE();
    case 107:
      if (lookahead == '.') ADVANCE(356);
      END_STATE();
    case 108:
      if (lookahead == '.') ADVANCE(358);
      END_STATE();
    case 109:
      if (lookahead == '0') ADVANCE(60);
      END_STATE();
    case 110:
      if (lookahead == '0') ADVANCE(137);
      END_STATE();
    case 111:
      if (lookahead == '0') ADVANCE(183);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(138);
      if (lookahead == '2') ADVANCE(181);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(2004);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(2006);
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(228);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(700);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(1912);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(2001);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(2001);
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(2008);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(1783);
      if (lookahead == '2') ADVANCE(1783);
      if (lookahead == '3') ADVANCE(1783);
      if (lookahead == '4') ADVANCE(1783);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(224);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(226);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(143);
      if (lookahead == '6') ADVANCE(177);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(225);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == '1') ADVANCE(230);
      END_STATE();
    case 131:
      if (lookahead == '1') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == '1') ADVANCE(172);
      END_STATE();
    case 133:
      if (lookahead == '1') ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == '1') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == '1') ADVANCE(1468);
      END_STATE();
    case 136:
      if (lookahead == '1') ADVANCE(229);
      END_STATE();
    case 137:
      if (lookahead == '1') ADVANCE(233);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(223);
      if (lookahead == '9') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(2004);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(2001);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(2008);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(219);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(2007);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(187);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(188);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '5') ADVANCE(156);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(188);
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(190);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(192);
      if (lookahead == '3') ADVANCE(220);
      if (lookahead == '5') ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(113);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(195);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(197);
      if (lookahead == '3') ADVANCE(222);
      if (lookahead == '5') ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(197);
      if (lookahead == '5') ADVANCE(134);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(121);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(191);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(196);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(78);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(202);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 167:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 168:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(89);
      END_STATE();
    case 170:
      if (lookahead == '2') ADVANCE(92);
      END_STATE();
    case 171:
      if (lookahead == '2') ADVANCE(205);
      END_STATE();
    case 172:
      if (lookahead == '2') ADVANCE(234);
      END_STATE();
    case 173:
      if (lookahead == '2') ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == '2') ADVANCE(99);
      END_STATE();
    case 175:
      if (lookahead == '3') ADVANCE(111);
      END_STATE();
    case 176:
      if (lookahead == '4') ADVANCE(2004);
      END_STATE();
    case 177:
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 178:
      if (lookahead == '4') ADVANCE(2001);
      END_STATE();
    case 179:
      if (lookahead == '4') ADVANCE(2008);
      END_STATE();
    case 180:
      if (lookahead == '5') ADVANCE(1908);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(215);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(2006);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(232);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(207);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(115);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(213);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(185);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(208);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(124);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(209);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(189);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(210);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(212);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 195:
      if (lookahead == '5') ADVANCE(216);
      END_STATE();
    case 196:
      if (lookahead == '5') ADVANCE(194);
      END_STATE();
    case 197:
      if (lookahead == '5') ADVANCE(211);
      END_STATE();
    case 198:
      if (lookahead == '5') ADVANCE(132);
      END_STATE();
    case 199:
      if (lookahead == '5') ADVANCE(133);
      END_STATE();
    case 200:
      if (lookahead == '5') ADVANCE(127);
      END_STATE();
    case 201:
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 202:
      if (lookahead == '5') ADVANCE(200);
      END_STATE();
    case 203:
      if (lookahead == '5') ADVANCE(201);
      END_STATE();
    case 204:
      if (lookahead == '5') ADVANCE(136);
      END_STATE();
    case 205:
      if (lookahead == '5') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == '5') ADVANCE(217);
      END_STATE();
    case 207:
      if (lookahead == '6') ADVANCE(1909);
      END_STATE();
    case 208:
      if (lookahead == '6') ADVANCE(2004);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(2002);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(2001);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(2008);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(68);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(2007);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(116);
      END_STATE();
    case 215:
      if (lookahead == '6') ADVANCE(56);
      END_STATE();
    case 216:
      if (lookahead == '6') ADVANCE(233);
      END_STATE();
    case 217:
      if (lookahead == '6') ADVANCE(235);
      END_STATE();
    case 218:
      if (lookahead == '7') ADVANCE(214);
      END_STATE();
    case 219:
      if (lookahead == '8') ADVANCE(69);
      END_STATE();
    case 220:
      if (lookahead == '8') ADVANCE(178);
      END_STATE();
    case 221:
      if (lookahead == '8') ADVANCE(176);
      END_STATE();
    case 222:
      if (lookahead == '8') ADVANCE(179);
      END_STATE();
    case 223:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 224:
      if (lookahead == '9') ADVANCE(2004);
      END_STATE();
    case 225:
      if (lookahead == '9') ADVANCE(2008);
      END_STATE();
    case 226:
      if (lookahead == '9') ADVANCE(68);
      END_STATE();
    case 227:
      if (lookahead == '9') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 228:
      if (lookahead == '9') ADVANCE(82);
      END_STATE();
    case 229:
      if (lookahead == '9') ADVANCE(85);
      END_STATE();
    case 230:
      if (lookahead == '9') ADVANCE(235);
      END_STATE();
    case 231:
      if (lookahead == '@') ADVANCE(547);
      END_STATE();
    case 232:
      if (lookahead == '@') ADVANCE(567);
      END_STATE();
    case 233:
      if (lookahead == '@') ADVANCE(568);
      END_STATE();
    case 234:
      if (lookahead == '@') ADVANCE(569);
      END_STATE();
    case 235:
      if (lookahead == '@') ADVANCE(570);
      END_STATE();
    case 236:
      if (lookahead == 'A') ADVANCE(282);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1477);
      END_STATE();
    case 237:
      if (lookahead == 'A') ADVANCE(261);
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(1211);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(262);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(288);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(250);
      END_STATE();
    case 242:
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(241);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'S') ADVANCE(1953);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == 'g') ADVANCE(632);
      if (lookahead == 'h') ADVANCE(560);
      if (lookahead == 'k') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(523);
      if (lookahead == 'y') ADVANCE(411);
      END_STATE();
    case 243:
      if (lookahead == 'B') ADVANCE(287);
      END_STATE();
    case 244:
      if (lookahead == 'B') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1025);
      END_STATE();
    case 245:
      if (lookahead == 'C') ADVANCE(260);
      END_STATE();
    case 246:
      if (lookahead == 'C') ADVANCE(239);
      END_STATE();
    case 247:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(1488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1564);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(1996);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(263);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(283);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 253:
      if (lookahead == 'F') ADVANCE(266);
      END_STATE();
    case 254:
      if (lookahead == 'G') ADVANCE(1997);
      END_STATE();
    case 255:
      if (lookahead == 'H') ADVANCE(712);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(589);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1302);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1455);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 256:
      if (lookahead == 'H') ADVANCE(291);
      END_STATE();
    case 257:
      if (lookahead == 'H') ADVANCE(1998);
      END_STATE();
    case 258:
      if (lookahead == 'H') ADVANCE(292);
      END_STATE();
    case 259:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 260:
      if (lookahead == 'K') ADVANCE(1926);
      END_STATE();
    case 261:
      if (lookahead == 'L') ADVANCE(1996);
      END_STATE();
    case 262:
      if (lookahead == 'L') ADVANCE(1787);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(269);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(253);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(932);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1476);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(1998);
      END_STATE();
    case 266:
      if (lookahead == 'O') ADVANCE(1996);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(279);
      END_STATE();
    case 268:
      if (lookahead == 'O') ADVANCE(245);
      END_STATE();
    case 269:
      if (lookahead == 'O') ADVANCE(265);
      END_STATE();
    case 270:
      if (lookahead == 'O') ADVANCE(276);
      END_STATE();
    case 271:
      if (lookahead == 'O') ADVANCE(246);
      END_STATE();
    case 272:
      if (lookahead == 'O') ADVANCE(838);
      if (lookahead == 'e') ADVANCE(1995);
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 273:
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1101);
      END_STATE();
    case 274:
      if (lookahead == 'R') ADVANCE(270);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(1100);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(1996);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(1998);
      END_STATE();
    case 278:
      if (lookahead == 'S') ADVANCE(1842);
      if (lookahead == 'n') ADVANCE(1849);
      if (lookahead == 's') ADVANCE(1851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 279:
      if (lookahead == 'S') ADVANCE(249);
      END_STATE();
    case 280:
      if (lookahead == 'S') ADVANCE(268);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(252);
      END_STATE();
    case 282:
      if (lookahead == 'T') ADVANCE(237);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(1996);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(257);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 286:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 287:
      if (lookahead == 'U') ADVANCE(254);
      END_STATE();
    case 288:
      if (lookahead == 'U') ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == 'U') ADVANCE(284);
      END_STATE();
    case 290:
      if (lookahead == '^') ADVANCE(1905);
      if (lookahead == 'n') ADVANCE(1904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1903);
      END_STATE();
    case 291:
      if (lookahead == '_') ADVANCE(240);
      END_STATE();
    case 292:
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(2004);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(2008);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 331:
      if (lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 332:
      if (lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 333:
      if (lookahead == 'b') ADVANCE(342);
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(485);
      END_STATE();
    case 335:
      if (lookahead == 'b') ADVANCE(550);
      END_STATE();
    case 336:
      if (lookahead == 'b') ADVANCE(561);
      END_STATE();
    case 337:
      if (lookahead == 'b') ADVANCE(563);
      END_STATE();
    case 338:
      if (lookahead == 'b') ADVANCE(503);
      END_STATE();
    case 339:
      if (lookahead == 'b') ADVANCE(619);
      END_STATE();
    case 340:
      if (lookahead == 'b') ADVANCE(330);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1101);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(2000);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'g') ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(1999);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(554);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(671);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(359);
      if (lookahead == 'n') ADVANCE(701);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead == 'u') ADVANCE(670);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(821);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(1957);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(1999);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(1958);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(2018);
      if (lookahead == 'n') ADVANCE(2025);
      if (lookahead == 's') ADVANCE(2030);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1785);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(617);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(652);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(622);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(653);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(655);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(658);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(866);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(1963);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1880);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(1999);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 424:
      if (lookahead == 'f') ADVANCE(1982);
      END_STATE();
    case 425:
      if (lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 426:
      if (lookahead == 'f') ADVANCE(1995);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 427:
      if (lookahead == 'f') ADVANCE(472);
      END_STATE();
    case 428:
      if (lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 429:
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 431:
      if (lookahead == 'g') ADVANCE(2001);
      END_STATE();
    case 432:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 433:
      if (lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 434:
      if (lookahead == 'g') ADVANCE(419);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(531);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(665);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1562);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(578);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1049);
      END_STATE();
    case 446:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 449:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 450:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 451:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 468:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 469:
      if (lookahead == 'h') ADVANCE(543);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 491:
      if (lookahead == 'k') ADVANCE(1867);
      END_STATE();
    case 492:
      if (lookahead == 'k') ADVANCE(1897);
      END_STATE();
    case 493:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(403);
      END_STATE();
    case 495:
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 496:
      if (lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1563);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(2000);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(2001);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(2005);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(2003);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(1868);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(2008);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(482);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(881);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(931);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(932);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1476);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(630);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(2040);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(1896);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1335);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(549);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(398);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(483);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(690);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(564);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(675);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(415);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(2000);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(673);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 602:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(2004);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(2038);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(2008);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(1786);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(669);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(639);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(682);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(1870);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(1988);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(1987);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(1995);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 684:
      if (lookahead == 'u') ADVANCE(571);
      END_STATE();
    case 685:
      if (lookahead == 'u') ADVANCE(666);
      END_STATE();
    case 686:
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 687:
      if (lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 688:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 689:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(663);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 692:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 693:
      if (lookahead == 'v') ADVANCE(412);
      END_STATE();
    case 694:
      if (lookahead == 'v') ADVANCE(393);
      END_STATE();
    case 695:
      if (lookahead == 'w') ADVANCE(1981);
      END_STATE();
    case 696:
      if (lookahead == 'w') ADVANCE(378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 697:
      if (lookahead == 'w') ADVANCE(559);
      END_STATE();
    case 698:
      if (lookahead == 'w') ADVANCE(479);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(363);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 701:
      if (lookahead == 'y') ADVANCE(1945);
      END_STATE();
    case 702:
      if (lookahead == 'y') ADVANCE(1995);
      END_STATE();
    case 703:
      if (lookahead == 'y') ADVANCE(1999);
      END_STATE();
    case 704:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 705:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 706:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1302);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1485);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1455);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 707:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(821);
      END_STATE();
    case 708:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1629);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1303);
      END_STATE();
    case 709:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1042);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1465);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1306);
      END_STATE();
    case 710:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1715);
      END_STATE();
    case 711:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(825);
      END_STATE();
    case 712:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1211);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 713:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(810);
      END_STATE();
    case 714:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1758);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 716:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1458);
      END_STATE();
    case 717:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1755);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1035);
      END_STATE();
    case 719:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1212);
      END_STATE();
    case 720:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1457);
      END_STATE();
    case 721:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1486);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(826);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1490);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(907);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(806);
      END_STATE();
    case 722:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1257);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1197);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1499);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1243);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1210);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1049);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1493);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1580);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1201);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1202);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1213);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1659);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1249);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1542);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1479);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1577);
      END_STATE();
    case 743:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1634);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1504);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1502);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1505);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1204);
      END_STATE();
    case 747:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1508);
      END_STATE();
    case 748:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1570);
      END_STATE();
    case 749:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1227);
      END_STATE();
    case 750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1205);
      END_STATE();
    case 751:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1517);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1670);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1207);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1208);
      END_STATE();
    case 756:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1565);
      END_STATE();
    case 757:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1720);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(994);
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1218);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1054);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1317);
      END_STATE();
    case 761:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1217);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1642);
      END_STATE();
    case 763:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1683);
      END_STATE();
    case 764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1318);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1463);
      END_STATE();
    case 766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1268);
      END_STATE();
    case 767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1648);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1113);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1225);
      END_STATE();
    case 771:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 772:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1111);
      END_STATE();
    case 773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1320);
      END_STATE();
    case 774:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1269);
      END_STATE();
    case 775:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1583);
      END_STATE();
    case 776:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1325);
      END_STATE();
    case 777:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1326);
      END_STATE();
    case 778:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1654);
      END_STATE();
    case 779:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1607);
      END_STATE();
    case 780:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1328);
      END_STATE();
    case 781:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1237);
      END_STATE();
    case 782:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1604);
      END_STATE();
    case 783:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1136);
      END_STATE();
    case 784:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1686);
      END_STATE();
    case 785:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1057);
      END_STATE();
    case 786:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1687);
      END_STATE();
    case 787:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1688);
      END_STATE();
    case 788:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1689);
      END_STATE();
    case 789:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1690);
      END_STATE();
    case 790:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1691);
      END_STATE();
    case 791:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1692);
      END_STATE();
    case 792:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1693);
      END_STATE();
    case 793:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1694);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1244);
      END_STATE();
    case 795:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1245);
      END_STATE();
    case 796:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1246);
      END_STATE();
    case 797:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1247);
      END_STATE();
    case 798:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 799:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1728);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1729);
      END_STATE();
    case 801:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(864);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(948);
      END_STATE();
    case 802:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1730);
      END_STATE();
    case 803:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1731);
      END_STATE();
    case 804:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1732);
      END_STATE();
    case 805:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1733);
      END_STATE();
    case 806:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1180);
      END_STATE();
    case 807:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(889);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1757);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1370);
      END_STATE();
    case 808:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(728);
      END_STATE();
    case 809:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(736);
      END_STATE();
    case 810:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1222);
      END_STATE();
    case 811:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1410);
      END_STATE();
    case 812:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1140);
      END_STATE();
    case 813:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(991);
      END_STATE();
    case 814:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1803);
      END_STATE();
    case 815:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1193);
      END_STATE();
    case 816:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1062);
      END_STATE();
    case 817:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1717);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1742);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1566);
      END_STATE();
    case 818:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1065);
      END_STATE();
    case 819:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1191);
      END_STATE();
    case 820:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 821:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1537);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      END_STATE();
    case 822:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1073);
      END_STATE();
    case 823:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1192);
      END_STATE();
    case 824:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1215);
      END_STATE();
    case 825:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(836);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1707);
      END_STATE();
    case 826:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1538);
      END_STATE();
    case 827:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1695);
      END_STATE();
    case 828:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1373);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1387);
      END_STATE();
    case 829:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1617);
      END_STATE();
    case 830:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1110);
      END_STATE();
    case 831:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1378);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1351);
      END_STATE();
    case 832:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 833:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 834:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(737);
      END_STATE();
    case 835:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 836:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(943);
      END_STATE();
    case 837:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 838:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 839:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 840:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(918);
      END_STATE();
    case 841:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      END_STATE();
    case 842:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 843:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1068);
      END_STATE();
    case 844:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1685);
      END_STATE();
    case 845:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1513);
      END_STATE();
    case 846:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 847:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1348);
      END_STATE();
    case 848:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1444);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1716);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1582);
      END_STATE();
    case 849:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(794);
      END_STATE();
    case 850:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(784);
      END_STATE();
    case 851:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1446);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1435);
      END_STATE();
    case 852:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      END_STATE();
    case 853:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1447);
      END_STATE();
    case 854:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 855:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1448);
      END_STATE();
    case 856:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(788);
      END_STATE();
    case 857:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1449);
      END_STATE();
    case 858:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(789);
      END_STATE();
    case 859:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(790);
      END_STATE();
    case 860:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 861:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      END_STATE();
    case 862:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      END_STATE();
    case 863:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1021);
      END_STATE();
    case 864:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(863);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1710);
      END_STATE();
    case 865:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(866);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 866:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1178);
      END_STATE();
    case 867:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(759);
      END_STATE();
    case 868:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      END_STATE();
    case 869:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1934);
      END_STATE();
    case 870:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1935);
      END_STATE();
    case 871:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1950);
      END_STATE();
    case 872:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1960);
      END_STATE();
    case 873:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1961);
      END_STATE();
    case 874:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1262);
      END_STATE();
    case 875:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1914);
      END_STATE();
    case 876:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1933);
      END_STATE();
    case 877:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1943);
      END_STATE();
    case 878:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1858);
      END_STATE();
    case 879:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 880:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1126);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(945);
      END_STATE();
    case 881:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(762);
      END_STATE();
    case 882:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(899);
      END_STATE();
    case 883:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(847);
      END_STATE();
    case 884:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1781);
      END_STATE();
    case 885:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1518);
      END_STATE();
    case 886:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1123);
      END_STATE();
    case 887:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      END_STATE();
    case 888:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(947);
      END_STATE();
    case 889:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1127);
      END_STATE();
    case 890:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1401);
      END_STATE();
    case 891:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1331);
      END_STATE();
    case 892:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1467);
      END_STATE();
    case 893:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1030);
      END_STATE();
    case 894:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(972);
      END_STATE();
    case 895:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(976);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1235);
      END_STATE();
    case 897:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1470);
      END_STATE();
    case 898:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1005);
      END_STATE();
    case 899:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1529);
      END_STATE();
    case 900:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1085);
      END_STATE();
    case 901:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(797);
      END_STATE();
    case 902:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(798);
      END_STATE();
    case 903:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(800);
      END_STATE();
    case 904:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(803);
      END_STATE();
    case 905:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 906:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1562);
      END_STATE();
    case 907:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1756);
      END_STATE();
    case 908:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1766);
      END_STATE();
    case 909:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(956);
      END_STATE();
    case 910:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1923);
      END_STATE();
    case 911:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1872);
      END_STATE();
    case 912:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1937);
      END_STATE();
    case 913:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 914:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1971);
      END_STATE();
    case 915:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      END_STATE();
    case 917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1984);
      END_STATE();
    case 918:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1989);
      END_STATE();
    case 919:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1874);
      END_STATE();
    case 920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1887);
      END_STATE();
    case 921:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1964);
      END_STATE();
    case 922:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1991);
      END_STATE();
    case 923:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1877);
      END_STATE();
    case 924:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1906);
      END_STATE();
    case 925:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 926:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1900);
      END_STATE();
    case 927:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1564);
      END_STATE();
    case 928:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1735);
      END_STATE();
    case 929:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1775);
      END_STATE();
    case 930:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1478);
      END_STATE();
    case 932:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1309);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1719);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1768);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1473);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1780);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 943:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1471);
      END_STATE();
    case 944:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1771);
      END_STATE();
    case 945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1497);
      END_STATE();
    case 947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1301);
      END_STATE();
    case 948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1492);
      END_STATE();
    case 950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 953:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 954:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 956:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1599);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1568);
      END_STATE();
    case 957:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1770);
      END_STATE();
    case 958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1520);
      END_STATE();
    case 959:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 960:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1343);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1595);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 964:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1536);
      END_STATE();
    case 965:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1571);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1292);
      END_STATE();
    case 970:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 971:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1480);
      END_STATE();
    case 972:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1481);
      END_STATE();
    case 973:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 974:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 975:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1482);
      END_STATE();
    case 977:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1549);
      END_STATE();
    case 978:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1483);
      END_STATE();
    case 979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1484);
      END_STATE();
    case 980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1559);
      END_STATE();
    case 981:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1682);
      END_STATE();
    case 982:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1737);
      END_STATE();
    case 983:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 984:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 985:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1275);
      END_STATE();
    case 986:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1573);
      END_STATE();
    case 987:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1769);
      END_STATE();
    case 988:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1503);
      END_STATE();
    case 989:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 990:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1255);
      END_STATE();
    case 991:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1772);
      END_STATE();
    case 993:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1507);
      END_STATE();
    case 994:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1226);
      END_STATE();
    case 995:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1603);
      END_STATE();
    case 996:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 997:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1773);
      END_STATE();
    case 998:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 999:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1512);
      END_STATE();
    case 1000:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1327);
      END_STATE();
    case 1001:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1329);
      END_STATE();
    case 1002:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1332);
      END_STATE();
    case 1003:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 1004:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 1005:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1344);
      END_STATE();
    case 1006:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 1007:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1345);
      END_STATE();
    case 1008:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 1009:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 1010:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 1011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 1012:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 1013:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1359);
      END_STATE();
    case 1014:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1360);
      END_STATE();
    case 1015:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1361);
      END_STATE();
    case 1016:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 1017:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 1018:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 1019:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1365);
      END_STATE();
    case 1020:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 1021:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1475);
      END_STATE();
    case 1022:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 1023:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 1024:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 1025:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1779);
      END_STATE();
    case 1026:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(892);
      END_STATE();
    case 1027:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      END_STATE();
    case 1028:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(729);
      END_STATE();
    case 1029:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(768);
      END_STATE();
    case 1030:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(769);
      END_STATE();
    case 1031:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1459);
      END_STATE();
    case 1032:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1399);
      END_STATE();
    case 1033:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(958);
      END_STATE();
    case 1034:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1131);
      END_STATE();
    case 1035:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1675);
      END_STATE();
    case 1036:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1141);
      END_STATE();
    case 1037:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(770);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1424);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(714);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1004);
      END_STATE();
    case 1038:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1432);
      END_STATE();
    case 1039:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1143);
      END_STATE();
    case 1040:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1144);
      END_STATE();
    case 1041:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1438);
      END_STATE();
    case 1042:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1985);
      END_STATE();
    case 1043:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1980);
      END_STATE();
    case 1044:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1027);
      END_STATE();
    case 1045:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1339);
      END_STATE();
    case 1046:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1291);
      END_STATE();
    case 1047:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1553);
      END_STATE();
    case 1048:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(975);
      END_STATE();
    case 1049:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1048);
      END_STATE();
    case 1050:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(949);
      END_STATE();
    case 1051:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1430);
      END_STATE();
    case 1052:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1120);
      END_STATE();
    case 1053:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(999);
      END_STATE();
    case 1054:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1000);
      END_STATE();
    case 1055:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1001);
      END_STATE();
    case 1056:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(778);
      END_STATE();
    case 1057:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1002);
      END_STATE();
    case 1058:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1434);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 1059:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1437);
      END_STATE();
    case 1060:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1440);
      END_STATE();
    case 1061:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1442);
      END_STATE();
    case 1062:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1799);
      END_STATE();
    case 1063:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1899);
      END_STATE();
    case 1064:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1907);
      END_STATE();
    case 1065:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1254);
      END_STATE();
    case 1066:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1258);
      END_STATE();
    case 1067:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(748);
      END_STATE();
    case 1068:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(955);
      END_STATE();
    case 1069:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1221);
      END_STATE();
    case 1070:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(946);
      END_STATE();
    case 1071:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1260);
      END_STATE();
    case 1072:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(960);
      END_STATE();
    case 1073:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(741);
      END_STATE();
    case 1074:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1264);
      END_STATE();
    case 1075:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1266);
      END_STATE();
    case 1076:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1184);
      END_STATE();
    case 1077:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1267);
      END_STATE();
    case 1078:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1402);
      END_STATE();
    case 1079:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1416);
      END_STATE();
    case 1080:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1418);
      END_STATE();
    case 1081:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1420);
      END_STATE();
    case 1082:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1433);
      END_STATE();
    case 1083:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1436);
      END_STATE();
    case 1084:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1439);
      END_STATE();
    case 1085:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1441);
      END_STATE();
    case 1086:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1423);
      END_STATE();
    case 1087:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1425);
      END_STATE();
    case 1088:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1427);
      END_STATE();
    case 1089:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1445);
      END_STATE();
    case 1090:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1013);
      END_STATE();
    case 1091:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1014);
      END_STATE();
    case 1092:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1015);
      END_STATE();
    case 1093:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1016);
      END_STATE();
    case 1094:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1017);
      END_STATE();
    case 1095:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1018);
      END_STATE();
    case 1096:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1019);
      END_STATE();
    case 1097:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1020);
      END_STATE();
    case 1098:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1477);
      END_STATE();
    case 1099:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 1100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1025);
      END_STATE();
    case 1101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1045);
      END_STATE();
    case 1103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1034);
      END_STATE();
    case 1104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1453);
      END_STATE();
    case 1105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1052);
      END_STATE();
    case 1106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1616);
      END_STATE();
    case 1107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1618);
      END_STATE();
    case 1108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1632);
      END_STATE();
    case 1109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(894);
      END_STATE();
    case 1110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1236);
      END_STATE();
    case 1111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1330);
      END_STATE();
    case 1112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1219);
      END_STATE();
    case 1113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1233);
      END_STATE();
    case 1114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1619);
      END_STATE();
    case 1115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1311);
      END_STATE();
    case 1116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1660);
      END_STATE();
    case 1117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(961);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(783);
      END_STATE();
    case 1118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1641);
      END_STATE();
    case 1119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1335);
      END_STATE();
    case 1120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1356);
      END_STATE();
    case 1121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 1122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 1123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1310);
      END_STATE();
    case 1124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1782);
      END_STATE();
    case 1125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 1126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1316);
      END_STATE();
    case 1127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1314);
      END_STATE();
    case 1128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1263);
      END_STATE();
    case 1129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1336);
      END_STATE();
    case 1130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      END_STATE();
    case 1131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      END_STATE();
    case 1132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1313);
      END_STATE();
    case 1133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1739);
      END_STATE();
    case 1134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1408);
      END_STATE();
    case 1135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1740);
      END_STATE();
    case 1136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1228);
      END_STATE();
    case 1137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1429);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1324);
      END_STATE();
    case 1139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1741);
      END_STATE();
    case 1140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1322);
      END_STATE();
    case 1141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1229);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1384);
      END_STATE();
    case 1143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1230);
      END_STATE();
    case 1144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1231);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1388);
      END_STATE();
    case 1146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1390);
      END_STATE();
    case 1147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(839);
      END_STATE();
    case 1148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1587);
      END_STATE();
    case 1149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1392);
      END_STATE();
    case 1150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1393);
      END_STATE();
    case 1151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1394);
      END_STATE();
    case 1152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1396);
      END_STATE();
    case 1153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 1154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1397);
      END_STATE();
    case 1155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1398);
      END_STATE();
    case 1156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1273);
      END_STATE();
    case 1157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 1158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1664);
      END_STATE();
    case 1159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1676);
      END_STATE();
    case 1160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1431);
      END_STATE();
    case 1161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1277);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1727);
      END_STATE();
    case 1162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1666);
      END_STATE();
    case 1163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1667);
      END_STATE();
    case 1164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1669);
      END_STATE();
    case 1165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      END_STATE();
    case 1166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 1167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 1168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      END_STATE();
    case 1169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      END_STATE();
    case 1170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 1171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 1172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 1173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 1174:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1976);
      END_STATE();
    case 1175:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1979);
      END_STATE();
    case 1176:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1838);
      END_STATE();
    case 1177:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(908);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1376);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1714);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1407);
      END_STATE();
    case 1178:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(929);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(986);
      END_STATE();
    case 1179:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(718);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(732);
      END_STATE();
    case 1180:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(934);
      END_STATE();
    case 1181:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(966);
      END_STATE();
    case 1182:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(938);
      END_STATE();
    case 1183:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(940);
      END_STATE();
    case 1184:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(944);
      END_STATE();
    case 1185:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(953);
      END_STATE();
    case 1186:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(957);
      END_STATE();
    case 1187:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(959);
      END_STATE();
    case 1188:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(992);
      END_STATE();
    case 1189:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1338);
      END_STATE();
    case 1190:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(997);
      END_STATE();
    case 1191:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1132);
      END_STATE();
    case 1192:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1240);
      END_STATE();
    case 1193:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1079);
      END_STATE();
    case 1194:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1358);
      END_STATE();
    case 1195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 1196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1800);
      END_STATE();
    case 1197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(828);
      END_STATE();
    case 1198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1986);
      END_STATE();
    case 1199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1256);
      END_STATE();
    case 1200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1936);
      END_STATE();
    case 1201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 1202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1058);
      END_STATE();
    case 1203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1975);
      END_STATE();
    case 1204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1970);
      END_STATE();
    case 1205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1876);
      END_STATE();
    case 1206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1802);
      END_STATE();
    case 1207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1337);
      END_STATE();
    case 1208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1801);
      END_STATE();
    case 1209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1371);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1567);
      END_STATE();
    case 1210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1194);
      END_STATE();
    case 1211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 1212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1051);
      END_STATE();
    case 1213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(812);
      END_STATE();
    case 1214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1372);
      END_STATE();
    case 1215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(982);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(954);
      END_STATE();
    case 1216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1156);
      END_STATE();
    case 1217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1133);
      END_STATE();
    case 1218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1242);
      END_STATE();
    case 1219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1762);
      END_STATE();
    case 1220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1007);
      END_STATE();
    case 1221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1412);
      END_STATE();
    case 1222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(909);
      END_STATE();
    case 1223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1203);
      END_STATE();
    case 1224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1764);
      END_STATE();
    case 1225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 1227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1558);
      END_STATE();
    case 1228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      END_STATE();
    case 1229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(920);
      END_STATE();
    case 1230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 1231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 1232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 1233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1725);
      END_STATE();
    case 1234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1115);
      END_STATE();
    case 1235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1129);
      END_STATE();
    case 1236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1118);
      END_STATE();
    case 1237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1135);
      END_STATE();
    case 1238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1415);
      END_STATE();
    case 1239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1417);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      END_STATE();
    case 1240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1419);
      END_STATE();
    case 1241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1421);
      END_STATE();
    case 1242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1041);
      END_STATE();
    case 1243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1084);
      END_STATE();
    case 1244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1087);
      END_STATE();
    case 1245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      END_STATE();
    case 1246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1059);
      END_STATE();
    case 1247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1060);
      END_STATE();
    case 1248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1061);
      END_STATE();
    case 1249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 1250:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1456);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1312);
      END_STATE();
    case 1251:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(813);
      END_STATE();
    case 1252:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1452);
      END_STATE();
    case 1253:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1259);
      END_STATE();
    case 1254:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1381);
      END_STATE();
    case 1255:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1460);
      END_STATE();
    case 1256:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(779);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(743);
      END_STATE();
    case 1257:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(910);
      END_STATE();
    case 1258:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1543);
      END_STATE();
    case 1259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(760);
      END_STATE();
    case 1260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1550);
      END_STATE();
    case 1261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(772);
      END_STATE();
    case 1262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(756);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1323);
      END_STATE();
    case 1263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(963);
      END_STATE();
    case 1264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1554);
      END_STATE();
    case 1265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(717);
      END_STATE();
    case 1266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1557);
      END_STATE();
    case 1267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1560);
      END_STATE();
    case 1268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(923);
      END_STATE();
    case 1269:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(980);
      END_STATE();
    case 1270:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1106);
      END_STATE();
    case 1271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1461);
      END_STATE();
    case 1272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1112);
      END_STATE();
    case 1273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1114);
      END_STATE();
    case 1274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1159);
      END_STATE();
    case 1275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1414);
      END_STATE();
    case 1276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(764);
      END_STATE();
    case 1277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1006);
      END_STATE();
    case 1278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1238);
      END_STATE();
    case 1279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(773);
      END_STATE();
    case 1280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(776);
      END_STATE();
    case 1281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(777);
      END_STATE();
    case 1282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(780);
      END_STATE();
    case 1283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1276);
      END_STATE();
    case 1284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1279);
      END_STATE();
    case 1285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1280);
      END_STATE();
    case 1286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1281);
      END_STATE();
    case 1287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1282);
      END_STATE();
    case 1288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1892);
      END_STATE();
    case 1289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1928);
      END_STATE();
    case 1290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1994);
      END_STATE();
    case 1291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1901);
      END_STATE();
    case 1292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1944);
      END_STATE();
    case 1293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1916);
      END_STATE();
    case 1294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1956);
      END_STATE();
    case 1295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1942);
      END_STATE();
    case 1296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1910);
      END_STATE();
    case 1297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1920);
      END_STATE();
    case 1298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1930);
      END_STATE();
    case 1299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1931);
      END_STATE();
    case 1300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1050);
      END_STATE();
    case 1301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1734);
      END_STATE();
    case 1302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1374);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1102);
      END_STATE();
    case 1303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(879);
      END_STATE();
    case 1304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1038);
      END_STATE();
    case 1305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1377);
      END_STATE();
    case 1306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1315);
      END_STATE();
    case 1307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1724);
      END_STATE();
    case 1308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1122);
      END_STATE();
    case 1309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1663);
      END_STATE();
    case 1310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1047);
      END_STATE();
    case 1311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1175);
      END_STATE();
    case 1312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(989);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1495);
      END_STATE();
    case 1313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1043);
      END_STATE();
    case 1314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1673);
      END_STATE();
    case 1315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(942);
      END_STATE();
    case 1316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1307);
      END_STATE();
    case 1317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 1318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 1319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1633);
      END_STATE();
    case 1320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 1321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1224);
      END_STATE();
    case 1322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 1323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1234);
      END_STATE();
    case 1324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1636);
      END_STATE();
    case 1325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 1326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 1327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1620);
      END_STATE();
    case 1328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      END_STATE();
    case 1329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1621);
      END_STATE();
    case 1330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1547);
      END_STATE();
    case 1331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1548);
      END_STATE();
    case 1332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1622);
      END_STATE();
    case 1333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1665);
      END_STATE();
    case 1334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1556);
      END_STATE();
    case 1335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 1337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(981);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1598);
      END_STATE();
    case 1338:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1403);
      END_STATE();
    case 1339:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 1340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 1341:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 1342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1613);
      END_STATE();
    case 1343:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1684);
      END_STATE();
    case 1344:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1644);
      END_STATE();
    case 1345:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 1346:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1189);
      END_STATE();
    case 1347:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1032);
      END_STATE();
    case 1348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 1349:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1678);
      END_STATE();
    case 1350:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1147);
      END_STATE();
    case 1351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1680);
      END_STATE();
    case 1352:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1428);
      END_STATE();
    case 1353:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 1354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1086);
      END_STATE();
    case 1355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1089);
      END_STATE();
    case 1356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 1357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1450);
      END_STATE();
    case 1358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1451);
      END_STATE();
    case 1359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1697);
      END_STATE();
    case 1360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1698);
      END_STATE();
    case 1361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1699);
      END_STATE();
    case 1362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1700);
      END_STATE();
    case 1363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1701);
      END_STATE();
    case 1364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1702);
      END_STATE();
    case 1365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1703);
      END_STATE();
    case 1366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1704);
      END_STATE();
    case 1367:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1563);
      END_STATE();
    case 1368:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 1369:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1078);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1251);
      END_STATE();
    case 1370:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1744);
      END_STATE();
    case 1371:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 1372:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 1373:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1253);
      END_STATE();
    case 1374:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1308);
      END_STATE();
    case 1375:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1031);
      END_STATE();
    case 1376:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1639);
      END_STATE();
    case 1377:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1501);
      END_STATE();
    case 1378:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1726);
      END_STATE();
    case 1379:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1304);
      END_STATE();
    case 1380:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1539);
      END_STATE();
    case 1381:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(887);
      END_STATE();
    case 1382:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1199);
      END_STATE();
    case 1383:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1469);
      END_STATE();
    case 1384:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1288);
      END_STATE();
    case 1385:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1321);
      END_STATE();
    case 1386:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1496);
      END_STATE();
    case 1387:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1487);
      END_STATE();
    case 1388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1290);
      END_STATE();
    case 1389:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1342);
      END_STATE();
    case 1390:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 1391:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 1392:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1294);
      END_STATE();
    case 1393:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1295);
      END_STATE();
    case 1394:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1296);
      END_STATE();
    case 1395:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1510);
      END_STATE();
    case 1396:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1297);
      END_STATE();
    case 1397:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1298);
      END_STATE();
    case 1398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1299);
      END_STATE();
    case 1399:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1534);
      END_STATE();
    case 1400:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1494);
      END_STATE();
    case 1401:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1649);
      END_STATE();
    case 1402:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1574);
      END_STATE();
    case 1403:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1745);
      END_STATE();
    case 1404:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1736);
      END_STATE();
    case 1405:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1261);
      END_STATE();
    case 1406:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1722);
      END_STATE();
    case 1407:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1182);
      END_STATE();
    case 1408:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1319);
      END_STATE();
    case 1409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1271);
      END_STATE();
    case 1410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1586);
      END_STATE();
    case 1411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 1412:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 1413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1723);
      END_STATE();
    case 1414:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1651);
      END_STATE();
    case 1415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 1416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1592);
      END_STATE();
    case 1417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      END_STATE();
    case 1418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1579);
      END_STATE();
    case 1419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 1420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1421:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 1422:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 1423:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1584);
      END_STATE();
    case 1424:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1588);
      END_STATE();
    case 1425:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1589);
      END_STATE();
    case 1426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1590);
      END_STATE();
    case 1427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1591);
      END_STATE();
    case 1428:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1350);
      END_STATE();
    case 1429:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1341);
      END_STATE();
    case 1430:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1522);
      END_STATE();
    case 1431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1347);
      END_STATE();
    case 1432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1523);
      END_STATE();
    case 1433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1605);
      END_STATE();
    case 1434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1526);
      END_STATE();
    case 1435:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1528);
      END_STATE();
    case 1436:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1606);
      END_STATE();
    case 1437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1530);
      END_STATE();
    case 1438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 1439:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1608);
      END_STATE();
    case 1440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1532);
      END_STATE();
    case 1441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1609);
      END_STATE();
    case 1442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1533);
      END_STATE();
    case 1443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1743);
      END_STATE();
    case 1444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1283);
      END_STATE();
    case 1445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1612);
      END_STATE();
    case 1446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1284);
      END_STATE();
    case 1447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1285);
      END_STATE();
    case 1448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1286);
      END_STATE();
    case 1449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1287);
      END_STATE();
    case 1450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1753);
      END_STATE();
    case 1451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1754);
      END_STATE();
    case 1452:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1951);
      END_STATE();
    case 1453:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1888);
      END_STATE();
    case 1454:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(881);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(931);
      END_STATE();
    case 1455:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1070);
      END_STATE();
    case 1456:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1524);
      END_STATE();
    case 1457:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1099);
      END_STATE();
    case 1458:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 1459:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(782);
      END_STATE();
    case 1460:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1647);
      END_STATE();
    case 1461:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1650);
      END_STATE();
    case 1462:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(914);
      END_STATE();
    case 1463:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1011);
      END_STATE();
    case 1464:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(977);
      END_STATE();
    case 1465:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1181);
      END_STATE();
    case 1466:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1525);
      END_STATE();
    case 1467:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(775);
      END_STATE();
    case 1468:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1500);
      END_STATE();
    case 1469:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(969);
      END_STATE();
    case 1470:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1506);
      END_STATE();
    case 1471:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1652);
      END_STATE();
    case 1472:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1389);
      END_STATE();
    case 1473:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(781);
      END_STATE();
    case 1474:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1535);
      END_STATE();
    case 1475:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1705);
      END_STATE();
    case 1476:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1380);
      END_STATE();
    case 1477:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1179);
      END_STATE();
    case 1478:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1860);
      END_STATE();
    case 1479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1902);
      END_STATE();
    case 1480:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1895);
      END_STATE();
    case 1481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1947);
      END_STATE();
    case 1482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1966);
      END_STATE();
    case 1483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 1484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1861);
      END_STATE();
    case 1485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1630);
      END_STATE();
    case 1486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1270);
      END_STATE();
    case 1487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1747);
      END_STATE();
    case 1488:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1100);
      END_STATE();
    case 1489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1738);
      END_STATE();
    case 1490:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1615);
      END_STATE();
    case 1491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(811);
      END_STATE();
    case 1492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1466);
      END_STATE();
    case 1493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 1494:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 1495:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1382);
      END_STATE();
    case 1496:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 1497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1540);
      END_STATE();
    case 1498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 1499:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(758);
      END_STATE();
    case 1500:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1404);
      END_STATE();
    case 1501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 1502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 1503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 1504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1576);
      END_STATE();
    case 1505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 1506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1409);
      END_STATE();
    case 1507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(941);
      END_STATE();
    case 1508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 1509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 1510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(897);
      END_STATE();
    case 1511:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 1512:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(968);
      END_STATE();
    case 1513:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      END_STATE();
    case 1514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 1515:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 1516:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      END_STATE();
    case 1517:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 1518:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1585);
      END_STATE();
    case 1519:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 1520:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1511);
      END_STATE();
    case 1521:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      END_STATE();
    case 1522:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1116);
      END_STATE();
    case 1523:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1748);
      END_STATE();
    case 1524:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(995);
      END_STATE();
    case 1525:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1138);
      END_STATE();
    case 1526:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 1527:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1274);
      END_STATE();
    case 1528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1750);
      END_STATE();
    case 1529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1162);
      END_STATE();
    case 1531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1751);
      END_STATE();
    case 1532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1163);
      END_STATE();
    case 1533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1164);
      END_STATE();
    case 1534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1241);
      END_STATE();
    case 1535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1443);
      END_STATE();
    case 1536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 1537:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1939);
      END_STATE();
    case 1538:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 1539:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1929);
      END_STATE();
    case 1540:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1889);
      END_STATE();
    case 1541:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1873);
      END_STATE();
    case 1542:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1922);
      END_STATE();
    case 1543:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1932);
      END_STATE();
    case 1544:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1990);
      END_STATE();
    case 1545:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1954);
      END_STATE();
    case 1546:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1965);
      END_STATE();
    case 1547:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1875);
      END_STATE();
    case 1548:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1992);
      END_STATE();
    case 1549:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 1550:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1921);
      END_STATE();
    case 1551:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1893);
      END_STATE();
    case 1552:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1878);
      END_STATE();
    case 1553:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1891);
      END_STATE();
    case 1554:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1884);
      END_STATE();
    case 1555:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1941);
      END_STATE();
    case 1556:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1949);
      END_STATE();
    case 1557:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1955);
      END_STATE();
    case 1558:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1917);
      END_STATE();
    case 1559:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1879);
      END_STATE();
    case 1560:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1918);
      END_STATE();
    case 1561:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1746);
      END_STATE();
    case 1562:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1214);
      END_STATE();
    case 1563:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1614);
      END_STATE();
    case 1564:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1718);
      END_STATE();
    case 1565:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1174);
      END_STATE();
    case 1566:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1134);
      END_STATE();
    case 1567:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      END_STATE();
    case 1568:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1076);
      END_STATE();
    case 1569:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1561);
      END_STATE();
    case 1570:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1064);
      END_STATE();
    case 1571:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1472);
      END_STATE();
    case 1572:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
      END_STATE();
    case 1573:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1594);
      END_STATE();
    case 1574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1575:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1662);
      END_STATE();
    case 1576:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1148);
      END_STATE();
    case 1577:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1124);
      END_STATE();
    case 1578:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1541);
      END_STATE();
    case 1579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1640);
      END_STATE();
    case 1580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(950);
      END_STATE();
    case 1581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1668);
      END_STATE();
    case 1582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(939);
      END_STATE();
    case 1583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1545);
      END_STATE();
    case 1584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1646);
      END_STATE();
    case 1585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(742);
      END_STATE();
    case 1586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      END_STATE();
    case 1587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1624);
      END_STATE();
    case 1588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1645);
      END_STATE();
    case 1589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1626);
      END_STATE();
    case 1590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1627);
      END_STATE();
    case 1591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1628);
      END_STATE();
    case 1592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1637);
      END_STATE();
    case 1593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1638);
      END_STATE();
    case 1594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 1595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1385);
      END_STATE();
    case 1596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1655);
      END_STATE();
    case 1597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(978);
      END_STATE();
    case 1598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(979);
      END_STATE();
    case 1599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      END_STATE();
    case 1600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 1601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1749);
      END_STATE();
    case 1602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1142);
      END_STATE();
    case 1603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1602);
      END_STATE();
    case 1604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1601);
      END_STATE();
    case 1605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1671);
      END_STATE();
    case 1606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1672);
      END_STATE();
    case 1607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1679);
      END_STATE();
    case 1608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1674);
      END_STATE();
    case 1609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1677);
      END_STATE();
    case 1610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1039);
      END_STATE();
    case 1611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1040);
      END_STATE();
    case 1612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1696);
      END_STATE();
    case 1613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1023);
      END_STATE();
    case 1614:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1796);
      END_STATE();
    case 1615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1948);
      END_STATE();
    case 1616:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1239);
      END_STATE();
    case 1617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1137);
      END_STATE();
    case 1618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      END_STATE();
    case 1619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1959);
      END_STATE();
    case 1620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1911);
      END_STATE();
    case 1621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1925);
      END_STATE();
    case 1622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1866);
      END_STATE();
    case 1623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1894);
      END_STATE();
    case 1624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1898);
      END_STATE();
    case 1625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1913);
      END_STATE();
    case 1626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1940);
      END_STATE();
    case 1627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1795);
      END_STATE();
    case 1628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1857);
      END_STATE();
    case 1629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(818);
      END_STATE();
    case 1630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 1631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 1632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1776);
      END_STATE();
    case 1633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1774);
      END_STATE();
    case 1634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1063);
      END_STATE();
    case 1635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1761);
      END_STATE();
    case 1636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1067);
      END_STATE();
    case 1637:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 1638:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1391);
      END_STATE();
    case 1639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1008);
      END_STATE();
    case 1640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1572);
      END_STATE();
    case 1641:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1765);
      END_STATE();
    case 1642:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1009);
      END_STATE();
    case 1643:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1635);
      END_STATE();
    case 1644:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 1645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1340);
      END_STATE();
    case 1646:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1610);
      END_STATE();
    case 1647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1551);
      END_STATE();
    case 1648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(984);
      END_STATE();
    case 1649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1552);
      END_STATE();
    case 1650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1555);
      END_STATE();
    case 1651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      END_STATE();
    case 1652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(983);
      END_STATE();
    case 1653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(990);
      END_STATE();
    case 1654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(952);
      END_STATE();
    case 1655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(970);
      END_STATE();
    case 1656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      END_STATE();
    case 1658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1072);
      END_STATE();
    case 1659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1721);
      END_STATE();
    case 1660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1066);
      END_STATE();
    case 1661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1379);
      END_STATE();
    case 1662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1643);
      END_STATE();
    case 1663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 1664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1071);
      END_STATE();
    case 1665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1265);
      END_STATE();
    case 1666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1074);
      END_STATE();
    case 1667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1075);
      END_STATE();
    case 1668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 1669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 1670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1653);
      END_STATE();
    case 1671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 1672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 1673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(996);
      END_STATE();
    case 1674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(964);
      END_STATE();
    case 1676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1656);
      END_STATE();
    case 1677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 1678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(967);
      END_STATE();
    case 1679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(971);
      END_STATE();
    case 1680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(974);
      END_STATE();
    case 1681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1777);
      END_STATE();
    case 1682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1752);
      END_STATE();
    case 1683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 1684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 1686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1146);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1160);
      END_STATE();
    case 1688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1149);
      END_STATE();
    case 1689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1150);
      END_STATE();
    case 1690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1151);
      END_STATE();
    case 1691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1152);
      END_STATE();
    case 1692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1153);
      END_STATE();
    case 1693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1154);
      END_STATE();
    case 1694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1081);
      END_STATE();
    case 1696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1611);
      END_STATE();
    case 1697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1168);
      END_STATE();
    case 1700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 1701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1170);
      END_STATE();
    case 1702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1171);
      END_STATE();
    case 1703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      END_STATE();
    case 1704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1173);
      END_STATE();
    case 1705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1012);
      END_STATE();
    case 1706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1090);
      END_STATE();
    case 1707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1091);
      END_STATE();
    case 1708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1092);
      END_STATE();
    case 1709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 1710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 1711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1095);
      END_STATE();
    case 1712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 1713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1097);
      END_STATE();
    case 1714:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(993);
      END_STATE();
    case 1715:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1631);
      END_STATE();
    case 1716:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1252);
      END_STATE();
    case 1717:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1521);
      END_STATE();
    case 1718:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(726);
      END_STATE();
    case 1719:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1346);
      END_STATE();
    case 1720:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1658);
      END_STATE();
    case 1721:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1515);
      END_STATE();
    case 1722:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1623);
      END_STATE();
    case 1723:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1625);
      END_STATE();
    case 1724:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1223);
      END_STATE();
    case 1725:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1514);
      END_STATE();
    case 1726:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1333);
      END_STATE();
    case 1727:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1596);
      END_STATE();
    case 1728:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1706);
      END_STATE();
    case 1729:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1708);
      END_STATE();
    case 1730:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1709);
      END_STATE();
    case 1731:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1711);
      END_STATE();
    case 1732:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1712);
      END_STATE();
    case 1733:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1713);
      END_STATE();
    case 1734:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1967);
      END_STATE();
    case 1735:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1130);
      END_STATE();
    case 1736:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1109);
      END_STATE();
    case 1737:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(951);
      END_STATE();
    case 1738:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(746);
      END_STATE();
    case 1739:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(913);
      END_STATE();
    case 1740:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(917);
      END_STATE();
    case 1741:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1022);
      END_STATE();
    case 1742:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(988);
      END_STATE();
    case 1743:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1157);
      END_STATE();
    case 1744:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1353);
      END_STATE();
    case 1745:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1289);
      END_STATE();
    case 1746:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1386);
      END_STATE();
    case 1747:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(744);
      END_STATE();
    case 1748:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(745);
      END_STATE();
    case 1749:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1395);
      END_STATE();
    case 1750:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(747);
      END_STATE();
    case 1751:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(751);
      END_STATE();
    case 1752:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1400);
      END_STATE();
    case 1753:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1354);
      END_STATE();
    case 1754:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1355);
      END_STATE();
    case 1755:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1969);
      END_STATE();
    case 1756:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1760);
      END_STATE();
    case 1757:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(719);
      END_STATE();
    case 1758:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(890);
      END_STATE();
    case 1759:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 1760:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(848);
      END_STATE();
    case 1761:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1962);
      END_STATE();
    case 1762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1869);
      END_STATE();
    case 1763:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1993);
      END_STATE();
    case 1764:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1924);
      END_STATE();
    case 1765:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1983);
      END_STATE();
    case 1766:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1216);
      END_STATE();
    case 1767:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(843);
      END_STATE();
    case 1768:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(711);
      END_STATE();
    case 1769:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(735);
      END_STATE();
    case 1770:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(891);
      END_STATE();
    case 1771:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1600);
      END_STATE();
    case 1772:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1544);
      END_STATE();
    case 1773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1546);
      END_STATE();
    case 1774:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1462);
      END_STATE();
    case 1775:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1593);
      END_STATE();
    case 1776:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1183);
      END_STATE();
    case 1777:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1464);
      END_STATE();
    case 1778:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1681);
      END_STATE();
    case 1779:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1083);
      END_STATE();
    case 1780:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1474);
      END_STATE();
    case 1781:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(915);
      END_STATE();
    case 1782:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(921);
      END_STATE();
    case 1783:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1995);
      END_STATE();
    case 1784:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1978);
      END_STATE();
    case 1785:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1977);
      END_STATE();
    case 1786:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1995);
      END_STATE();
    case 1787:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1998);
      END_STATE();
    case 1788:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1784);
      END_STATE();
    case 1789:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1785);
      END_STATE();
    case 1790:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 1791:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1792:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 1793:
      if (eof) ADVANCE(1794);
      if (lookahead == '\n') ADVANCE(2054);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1826);
      if (lookahead == '#') ADVANCE(2050);
      if (lookahead == '+') ADVANCE(1885);
      if (lookahead == ',') ADVANCE(1855);
      if (lookahead == '-') ADVANCE(1886);
      if (lookahead == '0') ADVANCE(1788);
      if (lookahead == '3') ADVANCE(373);
      if (lookahead == ':') ADVANCE(1883);
      if (lookahead == '=') ADVANCE(1974);
      if (lookahead == '@') ADVANCE(1952);
      if (lookahead == 'A') ADVANCE(865);
      if (lookahead == 'C') ADVANCE(706);
      if (lookahead == 'D') ADVANCE(247);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'F') ADVANCE(236);
      if (lookahead == 'H') ADVANCE(1367);
      if (lookahead == 'I') ADVANCE(264);
      if (lookahead == 'M') ADVANCE(707);
      if (lookahead == 'Q') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(905);
      if (lookahead == 'S') ADVANCE(906);
      if (lookahead == 'U') ADVANCE(1454);
      if (lookahead == 'V') ADVANCE(248);
      if (lookahead == '^') ADVANCE(1890);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(1098);
      if (lookahead == 'h') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == 'u') ADVANCE(516);
      if (lookahead == 'v') ADVANCE(927);
      if (lookahead == 'w') ADVANCE(388);
      if (lookahead == '}') ADVANCE(2037);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(708);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1209);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(807);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1369);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(710);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1789);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(733);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(987);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_match_declaration_token1);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym__all_token1);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym__match_canonical_token1);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym__match_final_token1);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym__match_exec_token1);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'S') ADVANCE(256);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'T') ADVANCE(2013);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2009);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2009);
      if (lookahead == 'H' ||
          lookahead == 'I' ||
          lookahead == 'K' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(2010);
      if (lookahead == 'C' ||
          lookahead == 'L' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'k' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(2009);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2034);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2011);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1049);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1335);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1590);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(978);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2012);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2009);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(2010);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (sym_token_character_set_1(lookahead)) ADVANCE(2013);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2034);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2036);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2011);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2012);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2009);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1856);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(2010);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (sym_token_character_set_1(lookahead)) ADVANCE(2013);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token1);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == ':') ADVANCE(1840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'S') ADVANCE(1842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'h') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(2041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 's') ADVANCE(2039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 's') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'y') ADVANCE(1946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym__match_originalhost_token1);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym__match_tagged_token1);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1357);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__match_localuser_token1);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1871);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1903);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1161);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym__proxy_jump_arg_token1);
      if (lookahead == 'S') ADVANCE(1953);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_subsystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1977);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__syslog_facility_token1);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(928);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1996);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(sym_facility);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(500);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(2034);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'a') ADVANCE(2031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'b') ADVANCE(2026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'f') ADVANCE(2016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'l') ADVANCE(2028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'm') ADVANCE(1972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'n') ADVANCE(2019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'o') ADVANCE(2024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(2020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'y') ADVANCE(2027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2033);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1856);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1854);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2043);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2050);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2051);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(2051);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2052);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2053);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1793},
  [2] = {.lex_state = 1793},
  [3] = {.lex_state = 1793},
  [4] = {.lex_state = 1793},
  [5] = {.lex_state = 1793},
  [6] = {.lex_state = 1793},
  [7] = {.lex_state = 1793},
  [8] = {.lex_state = 1793},
  [9] = {.lex_state = 1793},
  [10] = {.lex_state = 1793},
  [11] = {.lex_state = 1793},
  [12] = {.lex_state = 1793},
  [13] = {.lex_state = 1793},
  [14] = {.lex_state = 1793},
  [15] = {.lex_state = 1793},
  [16] = {.lex_state = 1793},
  [17] = {.lex_state = 1793},
  [18] = {.lex_state = 1793},
  [19] = {.lex_state = 1793},
  [20] = {.lex_state = 1793},
  [21] = {.lex_state = 1793},
  [22] = {.lex_state = 1793},
  [23] = {.lex_state = 1793},
  [24] = {.lex_state = 1793},
  [25] = {.lex_state = 1793},
  [26] = {.lex_state = 1793},
  [27] = {.lex_state = 1793},
  [28] = {.lex_state = 1793},
  [29] = {.lex_state = 1793},
  [30] = {.lex_state = 1793},
  [31] = {.lex_state = 1793},
  [32] = {.lex_state = 1793},
  [33] = {.lex_state = 1793},
  [34] = {.lex_state = 1793},
  [35] = {.lex_state = 1793},
  [36] = {.lex_state = 1793},
  [37] = {.lex_state = 1793},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 42},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 43},
  [63] = {.lex_state = 43},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 24},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 44},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 38},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 38},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 28},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 48},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 40},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 31},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 49},
  [138] = {.lex_state = 40},
  [139] = {.lex_state = 40},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 46},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 40},
  [150] = {.lex_state = 40},
  [151] = {.lex_state = 40},
  [152] = {.lex_state = 40},
  [153] = {.lex_state = 242},
  [154] = {.lex_state = 40},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 26},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 27},
  [159] = {.lex_state = 49},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 40},
  [162] = {.lex_state = 38},
  [163] = {.lex_state = 33},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 46},
  [168] = {.lex_state = 40},
  [169] = {.lex_state = 40},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 38},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 38},
  [177] = {.lex_state = 1793},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 35},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 30},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 372},
  [187] = {.lex_state = 30},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 50},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 49},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 50},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 13},
  [203] = {.lex_state = 41},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 29},
  [206] = {.lex_state = 38},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 50},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 35},
  [213] = {.lex_state = 34},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 1793},
  [218] = {.lex_state = 1793},
  [219] = {.lex_state = 28},
  [220] = {.lex_state = 27},
  [221] = {.lex_state = 50},
  [222] = {.lex_state = 1793},
  [223] = {.lex_state = 41},
  [224] = {.lex_state = 1793},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 1793},
  [227] = {.lex_state = 1793},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 1793},
  [230] = {.lex_state = 1793},
  [231] = {.lex_state = 1793},
  [232] = {.lex_state = 1793},
  [233] = {.lex_state = 1793},
  [234] = {.lex_state = 41},
  [235] = {.lex_state = 37},
  [236] = {.lex_state = 1793},
  [237] = {.lex_state = 1793},
  [238] = {.lex_state = 1793},
  [239] = {.lex_state = 1793},
  [240] = {.lex_state = 1793},
  [241] = {.lex_state = 1793},
  [242] = {.lex_state = 1793},
  [243] = {.lex_state = 1793},
  [244] = {.lex_state = 15},
  [245] = {.lex_state = 1793},
  [246] = {.lex_state = 1793},
  [247] = {.lex_state = 1793},
  [248] = {.lex_state = 1793},
  [249] = {.lex_state = 1793},
  [250] = {.lex_state = 1793},
  [251] = {.lex_state = 1793},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 30},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 1793},
  [256] = {.lex_state = 278},
  [257] = {.lex_state = 1793},
  [258] = {.lex_state = 1793},
  [259] = {.lex_state = 1793},
  [260] = {.lex_state = 1793},
  [261] = {.lex_state = 1793},
  [262] = {.lex_state = 1793},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 1793},
  [265] = {.lex_state = 37},
  [266] = {.lex_state = 28},
  [267] = {.lex_state = 1793},
  [268] = {.lex_state = 1793},
  [269] = {.lex_state = 15},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 1793},
  [272] = {.lex_state = 1793},
  [273] = {.lex_state = 1793},
  [274] = {.lex_state = 1793},
  [275] = {.lex_state = 1793},
  [276] = {.lex_state = 1793},
  [277] = {.lex_state = 1793},
  [278] = {.lex_state = 1793},
  [279] = {.lex_state = 41},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 13},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 1793},
  [284] = {.lex_state = 34},
  [285] = {.lex_state = 1793},
  [286] = {.lex_state = 1793},
  [287] = {.lex_state = 1793},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 1793},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 41},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 1793},
  [294] = {.lex_state = 1793},
  [295] = {.lex_state = 1793},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 37},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 15},
  [302] = {.lex_state = 15},
  [303] = {.lex_state = 15},
  [304] = {.lex_state = 15},
  [305] = {.lex_state = 3},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 15},
  [308] = {.lex_state = 15},
  [309] = {.lex_state = 15},
  [310] = {.lex_state = 15},
  [311] = {.lex_state = 15},
  [312] = {.lex_state = 15},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 15},
  [315] = {.lex_state = 15},
  [316] = {.lex_state = 15},
  [317] = {.lex_state = 1793},
  [318] = {.lex_state = 15},
  [319] = {.lex_state = 15},
  [320] = {.lex_state = 3},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 15},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 15},
  [325] = {.lex_state = 15},
  [326] = {.lex_state = 1793},
  [327] = {.lex_state = 3},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 15},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 1793},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 15},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 15},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 15},
  [341] = {.lex_state = 15},
  [342] = {.lex_state = 15},
  [343] = {.lex_state = 1793},
  [344] = {.lex_state = 3},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 15},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 15},
  [350] = {.lex_state = 15},
  [351] = {.lex_state = 15},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 15},
  [354] = {.lex_state = 15},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 15},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 15},
  [360] = {.lex_state = 15},
  [361] = {.lex_state = 1793},
  [362] = {.lex_state = 15},
  [363] = {.lex_state = 15},
  [364] = {.lex_state = 15},
  [365] = {.lex_state = 3},
  [366] = {.lex_state = 15},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 15},
  [369] = {.lex_state = 15},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 1793},
  [372] = {.lex_state = 3},
  [373] = {.lex_state = 3},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 15},
  [378] = {.lex_state = 15},
  [379] = {.lex_state = 15},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 1793},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 15},
  [385] = {.lex_state = 30},
  [386] = {.lex_state = 15},
  [387] = {.lex_state = 15},
  [388] = {.lex_state = 15},
  [389] = {.lex_state = 3},
  [390] = {.lex_state = 15},
  [391] = {.lex_state = 37},
  [392] = {.lex_state = 1793},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 15},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 15},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 1793},
  [404] = {.lex_state = 1793},
  [405] = {.lex_state = 1793},
  [406] = {.lex_state = 1793},
  [407] = {.lex_state = 3},
  [408] = {.lex_state = 1793},
  [409] = {.lex_state = 1793},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 1793},
  [412] = {.lex_state = 1793},
  [413] = {.lex_state = 1793},
  [414] = {.lex_state = 3},
  [415] = {.lex_state = 3},
  [416] = {.lex_state = 3},
  [417] = {.lex_state = 1793},
  [418] = {.lex_state = 3},
  [419] = {.lex_state = 1793},
  [420] = {.lex_state = 15},
  [421] = {.lex_state = 1793},
  [422] = {.lex_state = 1793},
  [423] = {.lex_state = 3},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 47},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 1793},
  [428] = {.lex_state = 3},
  [429] = {.lex_state = 47},
  [430] = {.lex_state = 1793},
  [431] = {.lex_state = 15},
  [432] = {.lex_state = 3},
  [433] = {.lex_state = 1793},
  [434] = {.lex_state = 3},
  [435] = {.lex_state = 1793},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 3},
  [439] = {.lex_state = 1793},
  [440] = {.lex_state = 3},
  [441] = {.lex_state = 47},
  [442] = {.lex_state = 1793},
  [443] = {.lex_state = 3},
  [444] = {.lex_state = 1793},
  [445] = {.lex_state = 1793},
  [446] = {.lex_state = 3},
  [447] = {.lex_state = 1793},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 3},
  [451] = {.lex_state = 1793},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 15},
  [454] = {.lex_state = 1793},
  [455] = {.lex_state = 3},
  [456] = {.lex_state = 1793},
  [457] = {.lex_state = 3},
  [458] = {.lex_state = 1793},
  [459] = {.lex_state = 1793},
  [460] = {.lex_state = 16},
  [461] = {.lex_state = 47},
  [462] = {.lex_state = 1793},
  [463] = {.lex_state = 1793},
  [464] = {.lex_state = 15},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 15},
  [467] = {.lex_state = 1793},
  [468] = {.lex_state = 15},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 19},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 15},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 15},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 1793},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 3},
  [486] = {.lex_state = 3},
  [487] = {.lex_state = 3},
  [488] = {.lex_state = 3},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 1793},
  [492] = {.lex_state = 1793},
  [493] = {.lex_state = 1793},
  [494] = {.lex_state = 1793},
  [495] = {.lex_state = 3},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 3},
  [498] = {.lex_state = 1793},
  [499] = {.lex_state = 47},
  [500] = {.lex_state = 1793},
  [501] = {.lex_state = 1793},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 15},
  [504] = {.lex_state = 47},
  [505] = {.lex_state = 1793},
  [506] = {.lex_state = 3},
  [507] = {.lex_state = 34},
  [508] = {.lex_state = 47},
  [509] = {.lex_state = 1793},
  [510] = {.lex_state = 1793},
  [511] = {.lex_state = 47},
  [512] = {.lex_state = 3},
  [513] = {.lex_state = 3},
  [514] = {.lex_state = 1793},
  [515] = {.lex_state = 35},
  [516] = {.lex_state = 3},
  [517] = {.lex_state = 3},
  [518] = {.lex_state = 3},
  [519] = {.lex_state = 1793},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 3},
  [522] = {.lex_state = 1793},
  [523] = {.lex_state = 3},
  [524] = {.lex_state = 1793},
  [525] = {.lex_state = 1793},
  [526] = {.lex_state = 1793},
  [527] = {.lex_state = 1793},
  [528] = {.lex_state = 1793},
  [529] = {.lex_state = 1793},
  [530] = {.lex_state = 1793},
  [531] = {.lex_state = 1793},
  [532] = {.lex_state = 3},
  [533] = {.lex_state = 1793},
  [534] = {.lex_state = 3},
  [535] = {.lex_state = 1793},
  [536] = {.lex_state = 1793},
  [537] = {.lex_state = 1793},
  [538] = {.lex_state = 1793},
  [539] = {.lex_state = 1793},
  [540] = {.lex_state = 1793},
  [541] = {.lex_state = 3},
  [542] = {.lex_state = 1793},
  [543] = {.lex_state = 1793},
  [544] = {.lex_state = 1793},
  [545] = {.lex_state = 1793},
  [546] = {.lex_state = 3},
  [547] = {.lex_state = 1793},
  [548] = {.lex_state = 1793},
  [549] = {.lex_state = 1793},
  [550] = {.lex_state = 1793},
  [551] = {.lex_state = 1793},
  [552] = {.lex_state = 1793},
  [553] = {.lex_state = 1793},
  [554] = {.lex_state = 1793},
  [555] = {.lex_state = 1793},
  [556] = {.lex_state = 1793},
  [557] = {.lex_state = 1793},
  [558] = {.lex_state = 1793},
  [559] = {.lex_state = 1793},
  [560] = {.lex_state = 1793},
  [561] = {.lex_state = 1793},
  [562] = {.lex_state = 1793},
  [563] = {.lex_state = 1793},
  [564] = {.lex_state = 3},
  [565] = {.lex_state = 1793},
  [566] = {.lex_state = 1793},
  [567] = {.lex_state = 1793},
  [568] = {.lex_state = 1793},
  [569] = {.lex_state = 1793},
  [570] = {.lex_state = 1793},
  [571] = {.lex_state = 1793},
  [572] = {.lex_state = 1793},
  [573] = {.lex_state = 1790},
  [574] = {.lex_state = 1793},
  [575] = {.lex_state = 1793},
  [576] = {.lex_state = 1793},
  [577] = {.lex_state = 1793},
  [578] = {.lex_state = 1793},
  [579] = {.lex_state = 1793},
  [580] = {.lex_state = 1793},
  [581] = {.lex_state = 1793},
  [582] = {.lex_state = 290},
  [583] = {.lex_state = 1793},
  [584] = {.lex_state = 1793},
  [585] = {.lex_state = 1793},
  [586] = {.lex_state = 1793},
  [587] = {.lex_state = 1793},
  [588] = {.lex_state = 1793},
  [589] = {.lex_state = 1793},
  [590] = {.lex_state = 1793},
  [591] = {.lex_state = 1793},
  [592] = {.lex_state = 3},
  [593] = {.lex_state = 1793},
  [594] = {.lex_state = 1793},
  [595] = {.lex_state = 1793},
  [596] = {.lex_state = 1793},
  [597] = {.lex_state = 1793},
  [598] = {.lex_state = 1793},
  [599] = {.lex_state = 1793},
  [600] = {.lex_state = 1793},
  [601] = {.lex_state = 3},
  [602] = {.lex_state = 1793},
  [603] = {.lex_state = 1793},
  [604] = {.lex_state = 1793},
  [605] = {.lex_state = 1793},
  [606] = {.lex_state = 1793},
  [607] = {.lex_state = 1793},
  [608] = {.lex_state = 1793},
  [609] = {.lex_state = 1793},
  [610] = {.lex_state = 1793},
  [611] = {.lex_state = 1793},
  [612] = {.lex_state = 1793},
  [613] = {.lex_state = 1793},
  [614] = {.lex_state = 1793},
  [615] = {.lex_state = 1793},
  [616] = {.lex_state = 1793},
  [617] = {.lex_state = 1793},
  [618] = {.lex_state = 15},
  [619] = {.lex_state = 1793},
  [620] = {.lex_state = 1793},
  [621] = {.lex_state = 1793},
  [622] = {.lex_state = 1793},
  [623] = {.lex_state = 1793},
  [624] = {.lex_state = 1793},
  [625] = {.lex_state = 1793},
  [626] = {.lex_state = 1793},
  [627] = {.lex_state = 1793},
  [628] = {.lex_state = 3},
  [629] = {.lex_state = 1793},
  [630] = {.lex_state = 1793},
  [631] = {.lex_state = 1793},
  [632] = {.lex_state = 1793},
  [633] = {.lex_state = 1793},
  [634] = {.lex_state = 15},
  [635] = {.lex_state = 1793},
  [636] = {.lex_state = 1793},
  [637] = {.lex_state = 1793},
  [638] = {.lex_state = 1793},
  [639] = {.lex_state = 1793},
  [640] = {.lex_state = 1793},
  [641] = {.lex_state = 1793},
  [642] = {.lex_state = 1793},
  [643] = {.lex_state = 1793},
  [644] = {.lex_state = 1793},
  [645] = {.lex_state = 1793},
  [646] = {.lex_state = 1793},
  [647] = {.lex_state = 1793},
  [648] = {.lex_state = 1793},
  [649] = {.lex_state = 1793},
  [650] = {.lex_state = 1793},
  [651] = {.lex_state = 1793},
  [652] = {.lex_state = 1793},
  [653] = {.lex_state = 1793},
  [654] = {.lex_state = 1793},
  [655] = {.lex_state = 1793},
  [656] = {.lex_state = 1793},
  [657] = {.lex_state = 1793},
  [658] = {.lex_state = 1793},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 1793},
  [661] = {.lex_state = 1793},
  [662] = {.lex_state = 1793},
  [663] = {.lex_state = 1793},
  [664] = {.lex_state = 1793},
  [665] = {.lex_state = 1793},
  [666] = {.lex_state = 1793},
  [667] = {.lex_state = 3},
  [668] = {.lex_state = 1793},
  [669] = {.lex_state = 1793},
  [670] = {.lex_state = 1793},
  [671] = {.lex_state = 1793},
  [672] = {.lex_state = 1793},
  [673] = {.lex_state = 1793},
  [674] = {.lex_state = 1793},
  [675] = {.lex_state = 1793},
  [676] = {.lex_state = 1793},
  [677] = {.lex_state = 1793},
  [678] = {.lex_state = 1793},
  [679] = {.lex_state = 1793},
  [680] = {.lex_state = 1793},
  [681] = {.lex_state = 1793},
  [682] = {.lex_state = 1793},
  [683] = {.lex_state = 1793},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 1793},
  [686] = {.lex_state = 51},
  [687] = {.lex_state = 1793},
  [688] = {.lex_state = 1793},
  [689] = {.lex_state = 1793},
  [690] = {.lex_state = 1793},
  [691] = {.lex_state = 1793},
  [692] = {.lex_state = 1793},
  [693] = {.lex_state = 1793},
  [694] = {.lex_state = 1793},
  [695] = {.lex_state = 1793},
  [696] = {.lex_state = 1793},
  [697] = {.lex_state = 1793},
  [698] = {.lex_state = 1793},
  [699] = {.lex_state = 1793},
  [700] = {.lex_state = 1793},
  [701] = {.lex_state = 1793},
  [702] = {.lex_state = 1793},
  [703] = {.lex_state = 1793},
  [704] = {.lex_state = 1793},
  [705] = {.lex_state = 1793},
  [706] = {.lex_state = 1793},
  [707] = {.lex_state = 1793},
  [708] = {.lex_state = 1793},
  [709] = {.lex_state = 1793},
  [710] = {.lex_state = 1793},
  [711] = {.lex_state = 1793},
  [712] = {.lex_state = 1793},
  [713] = {.lex_state = 1793},
  [714] = {.lex_state = 1793},
  [715] = {.lex_state = 1793},
  [716] = {.lex_state = 1793},
  [717] = {.lex_state = 1793},
  [718] = {.lex_state = 1793},
  [719] = {.lex_state = 1793},
  [720] = {.lex_state = 1793},
  [721] = {.lex_state = 1793},
  [722] = {.lex_state = 20},
  [723] = {.lex_state = 1793},
  [724] = {.lex_state = 1793},
  [725] = {.lex_state = 1793},
  [726] = {.lex_state = 1793},
  [727] = {.lex_state = 1793},
  [728] = {.lex_state = 1793},
  [729] = {.lex_state = 1793},
  [730] = {.lex_state = 1793},
  [731] = {.lex_state = 1793},
  [732] = {.lex_state = 3},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 1793},
  [735] = {.lex_state = 1793},
  [736] = {.lex_state = 1793},
  [737] = {.lex_state = 1793},
  [738] = {.lex_state = 1793},
  [739] = {.lex_state = 1793},
  [740] = {.lex_state = 3},
  [741] = {.lex_state = 1793},
  [742] = {.lex_state = 1793},
  [743] = {.lex_state = 1793},
  [744] = {.lex_state = 1793},
  [745] = {.lex_state = 1793},
  [746] = {.lex_state = 1793},
  [747] = {.lex_state = 1793},
  [748] = {.lex_state = 1793},
  [749] = {.lex_state = 1793},
  [750] = {.lex_state = 1793},
  [751] = {.lex_state = 1793},
  [752] = {.lex_state = 3},
  [753] = {.lex_state = 1793},
  [754] = {.lex_state = 1793},
  [755] = {.lex_state = 1793},
  [756] = {.lex_state = 1793},
  [757] = {.lex_state = 1793},
  [758] = {.lex_state = 1793},
  [759] = {.lex_state = 3},
  [760] = {.lex_state = 1793},
  [761] = {.lex_state = 15},
  [762] = {.lex_state = 1793},
  [763] = {.lex_state = 1793},
  [764] = {.lex_state = 1793},
  [765] = {.lex_state = 15},
  [766] = {.lex_state = 1791},
  [767] = {.lex_state = 1792},
  [768] = {.lex_state = 1790},
  [769] = {.lex_state = 242},
  [770] = {.lex_state = 1793},
  [771] = {.lex_state = 1793},
  [772] = {.lex_state = 1793},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 1793},
  [776] = {.lex_state = 1793},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 1793},
  [779] = {.lex_state = 1793},
  [780] = {.lex_state = 15},
  [781] = {.lex_state = 1793},
  [782] = {.lex_state = 1793},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 3},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 1793},
  [787] = {.lex_state = 1793},
  [788] = {.lex_state = 1793},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 1793},
  [791] = {.lex_state = 1793},
  [792] = {.lex_state = 1793},
  [793] = {.lex_state = 1793},
  [794] = {.lex_state = 15},
  [795] = {.lex_state = 15},
  [796] = {.lex_state = 1791},
  [797] = {.lex_state = 1790},
  [798] = {.lex_state = 1792},
  [799] = {.lex_state = 1793},
  [800] = {.lex_state = 1793},
  [801] = {.lex_state = 1793},
  [802] = {.lex_state = 242},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 1793},
  [805] = {.lex_state = 1792},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 3},
  [808] = {.lex_state = 1793},
  [809] = {.lex_state = 242},
  [810] = {.lex_state = 1793},
  [811] = {.lex_state = 242},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 1793},
  [815] = {.lex_state = 1793},
  [816] = {.lex_state = 1793},
  [817] = {.lex_state = 1793},
  [818] = {.lex_state = 1793},
  [819] = {.lex_state = 1793},
  [820] = {.lex_state = 1793},
  [821] = {.lex_state = 1793},
  [822] = {.lex_state = 1793},
  [823] = {.lex_state = 1790},
  [824] = {.lex_state = 1790},
  [825] = {.lex_state = 1790},
  [826] = {.lex_state = 1790},
  [827] = {.lex_state = 1790},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym__match_exec_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__match_exec_token3] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym__log_verbose_value_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__send_env_value_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
    [aux_sym__hosts_token_token1] = ACTIONS(1),
    [aux_sym__hostname_token_token1] = ACTIONS(1),
    [aux_sym__proxy_token_token1] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_bytes_token1] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(806),
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(584),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(191),
    [sym__space] = ACTIONS(193),
    [sym__eol] = ACTIONS(195),
  },
  [2] = {
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(584),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_host_declaration_token1] = ACTIONS(199),
    [aux_sym_match_declaration_token1] = ACTIONS(202),
    [aux_sym__match_user_token1] = ACTIONS(205),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(208),
    [aux_sym__address_family_token1] = ACTIONS(211),
    [aux_sym__batch_mode_token1] = ACTIONS(214),
    [aux_sym__bind_address_token1] = ACTIONS(217),
    [aux_sym__bind_interface_token1] = ACTIONS(220),
    [aux_sym__canonical_domains_token1] = ACTIONS(223),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(226),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(229),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(232),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(235),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(238),
    [aux_sym__certificate_file_token1] = ACTIONS(241),
    [aux_sym__check_host_ip_token1] = ACTIONS(244),
    [aux_sym__ciphers_token1] = ACTIONS(247),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(250),
    [aux_sym__compression_token1] = ACTIONS(253),
    [aux_sym__connection_attempts_token1] = ACTIONS(256),
    [aux_sym__connect_timeout_token1] = ACTIONS(259),
    [aux_sym__control_master_token1] = ACTIONS(262),
    [aux_sym__control_persist_token1] = ACTIONS(265),
    [aux_sym__control_path_token1] = ACTIONS(268),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(271),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(274),
    [aux_sym__escape_char_token1] = ACTIONS(277),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(280),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(283),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(286),
    [aux_sym__forward_agent_token1] = ACTIONS(289),
    [aux_sym__forward_x11_token1] = ACTIONS(292),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(295),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(298),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(301),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(304),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(307),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(310),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(310),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(313),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(316),
    [aux_sym__host_key_alias_token1] = ACTIONS(319),
    [aux_sym__hostname_token1] = ACTIONS(322),
    [aux_sym__identities_only_token1] = ACTIONS(325),
    [aux_sym__identity_agent_token1] = ACTIONS(328),
    [aux_sym__identity_file_token1] = ACTIONS(331),
    [aux_sym__ignore_unknown_token1] = ACTIONS(334),
    [aux_sym__ipqos_token1] = ACTIONS(337),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(340),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(340),
    [aux_sym__kex_algorithms_token1] = ACTIONS(343),
    [aux_sym__known_hosts_command_token1] = ACTIONS(346),
    [aux_sym__local_command_token1] = ACTIONS(349),
    [aux_sym__local_forward_token1] = ACTIONS(352),
    [aux_sym__log_level_token1] = ACTIONS(355),
    [aux_sym__log_verbose_token1] = ACTIONS(358),
    [aux_sym__macs_token1] = ACTIONS(361),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(364),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(367),
    [aux_sym__password_authentication_token1] = ACTIONS(370),
    [aux_sym__permit_local_command_token1] = ACTIONS(373),
    [aux_sym__permit_remote_open_token1] = ACTIONS(376),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(379),
    [aux_sym__port_token1] = ACTIONS(382),
    [aux_sym__preferred_authentications_token1] = ACTIONS(385),
    [aux_sym__proxy_command_token1] = ACTIONS(388),
    [aux_sym__proxy_jump_token1] = ACTIONS(391),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(394),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(397),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(400),
    [aux_sym__rekey_limit_token1] = ACTIONS(403),
    [aux_sym__remote_command_token1] = ACTIONS(406),
    [aux_sym__remote_forward_token1] = ACTIONS(409),
    [aux_sym__request_tty_token1] = ACTIONS(412),
    [aux_sym__required_rsa_size_token1] = ACTIONS(415),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(418),
    [aux_sym__security_key_provider_token1] = ACTIONS(421),
    [aux_sym__send_env_token1] = ACTIONS(424),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(427),
    [aux_sym__server_alive_interval_token1] = ACTIONS(430),
    [aux_sym__session_type_token1] = ACTIONS(433),
    [aux_sym__stdin_null_token1] = ACTIONS(436),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(439),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(442),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(445),
    [aux_sym__syslog_facility_token1] = ACTIONS(448),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(451),
    [aux_sym__tag_token1] = ACTIONS(454),
    [aux_sym__tunnel_token1] = ACTIONS(457),
    [aux_sym__tunnel_device_token1] = ACTIONS(460),
    [aux_sym__update_host_keys_token1] = ACTIONS(463),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(466),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(469),
    [aux_sym__visual_host_key_token1] = ACTIONS(472),
    [aux_sym__xauth_location_token1] = ACTIONS(475),
    [sym_comment] = ACTIONS(478),
    [sym__space] = ACTIONS(481),
    [sym__eol] = ACTIONS(484),
  },
  [3] = {
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(584),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(191),
    [sym__space] = ACTIONS(193),
    [sym__eol] = ACTIONS(489),
  },
  [4] = {
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_host_declaration_token1] = ACTIONS(493),
    [aux_sym_match_declaration_token1] = ACTIONS(491),
    [aux_sym__match_user_token1] = ACTIONS(495),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(498),
    [aux_sym__address_family_token1] = ACTIONS(501),
    [aux_sym__batch_mode_token1] = ACTIONS(504),
    [aux_sym__bind_address_token1] = ACTIONS(507),
    [aux_sym__bind_interface_token1] = ACTIONS(510),
    [aux_sym__canonical_domains_token1] = ACTIONS(513),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(516),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(519),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(522),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(525),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(528),
    [aux_sym__certificate_file_token1] = ACTIONS(531),
    [aux_sym__check_host_ip_token1] = ACTIONS(534),
    [aux_sym__ciphers_token1] = ACTIONS(537),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(540),
    [aux_sym__compression_token1] = ACTIONS(543),
    [aux_sym__connection_attempts_token1] = ACTIONS(546),
    [aux_sym__connect_timeout_token1] = ACTIONS(549),
    [aux_sym__control_master_token1] = ACTIONS(552),
    [aux_sym__control_persist_token1] = ACTIONS(555),
    [aux_sym__control_path_token1] = ACTIONS(558),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(561),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(564),
    [aux_sym__escape_char_token1] = ACTIONS(567),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(570),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(573),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(576),
    [aux_sym__forward_agent_token1] = ACTIONS(579),
    [aux_sym__forward_x11_token1] = ACTIONS(582),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(585),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(588),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(591),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(594),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(597),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(600),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(600),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(603),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(606),
    [aux_sym__host_key_alias_token1] = ACTIONS(609),
    [aux_sym__hostname_token1] = ACTIONS(612),
    [aux_sym__identities_only_token1] = ACTIONS(615),
    [aux_sym__identity_agent_token1] = ACTIONS(618),
    [aux_sym__identity_file_token1] = ACTIONS(621),
    [aux_sym__ignore_unknown_token1] = ACTIONS(624),
    [aux_sym__ipqos_token1] = ACTIONS(627),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(630),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(630),
    [aux_sym__kex_algorithms_token1] = ACTIONS(633),
    [aux_sym__known_hosts_command_token1] = ACTIONS(636),
    [aux_sym__local_command_token1] = ACTIONS(639),
    [aux_sym__local_forward_token1] = ACTIONS(642),
    [aux_sym__log_level_token1] = ACTIONS(645),
    [aux_sym__log_verbose_token1] = ACTIONS(648),
    [aux_sym__macs_token1] = ACTIONS(651),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(654),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(657),
    [aux_sym__password_authentication_token1] = ACTIONS(660),
    [aux_sym__permit_local_command_token1] = ACTIONS(663),
    [aux_sym__permit_remote_open_token1] = ACTIONS(666),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(669),
    [aux_sym__port_token1] = ACTIONS(672),
    [aux_sym__preferred_authentications_token1] = ACTIONS(675),
    [aux_sym__proxy_command_token1] = ACTIONS(678),
    [aux_sym__proxy_jump_token1] = ACTIONS(681),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(684),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(687),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(690),
    [aux_sym__rekey_limit_token1] = ACTIONS(693),
    [aux_sym__remote_command_token1] = ACTIONS(696),
    [aux_sym__remote_forward_token1] = ACTIONS(699),
    [aux_sym__request_tty_token1] = ACTIONS(702),
    [aux_sym__required_rsa_size_token1] = ACTIONS(705),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(708),
    [aux_sym__security_key_provider_token1] = ACTIONS(711),
    [aux_sym__send_env_token1] = ACTIONS(714),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(717),
    [aux_sym__server_alive_interval_token1] = ACTIONS(720),
    [aux_sym__session_type_token1] = ACTIONS(723),
    [aux_sym__stdin_null_token1] = ACTIONS(726),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(729),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(732),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(735),
    [aux_sym__syslog_facility_token1] = ACTIONS(738),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(741),
    [aux_sym__tag_token1] = ACTIONS(744),
    [aux_sym__tunnel_token1] = ACTIONS(747),
    [aux_sym__tunnel_device_token1] = ACTIONS(750),
    [aux_sym__update_host_keys_token1] = ACTIONS(753),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(756),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(759),
    [aux_sym__visual_host_key_token1] = ACTIONS(762),
    [aux_sym__xauth_location_token1] = ACTIONS(765),
    [sym_comment] = ACTIONS(768),
    [sym__space] = ACTIONS(771),
    [sym__eol] = ACTIONS(491),
  },
  [5] = {
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(774),
    [aux_sym_host_declaration_token1] = ACTIONS(776),
    [aux_sym_match_declaration_token1] = ACTIONS(774),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
    [sym__eol] = ACTIONS(774),
  },
  [6] = {
    [sym_host_declaration] = STATE(23),
    [sym_match_declaration] = STATE(23),
    [sym_parameter] = STATE(699),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(782),
    [sym__eol] = ACTIONS(784),
  },
  [7] = {
    [sym__declarations] = STATE(36),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [8] = {
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [9] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [10] = {
    [sym__declarations] = STATE(30),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [11] = {
    [sym__declarations] = STATE(35),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [12] = {
    [sym__declarations] = STATE(31),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [13] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [14] = {
    [sym__declarations] = STATE(33),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [15] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [16] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [17] = {
    [sym__declarations] = STATE(37),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [18] = {
    [sym__declarations] = STATE(24),
    [sym_parameter] = STATE(587),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__declarations_repeat1] = STATE(5),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(778),
    [sym__space] = ACTIONS(780),
  },
  [19] = {
    [sym_parameter] = STATE(707),
    [sym__add_keys_to_agent] = STATE(583),
    [sym__address_family] = STATE(580),
    [sym__batch_mode] = STATE(579),
    [sym__bind_address] = STATE(578),
    [sym__bind_interface] = STATE(576),
    [sym__canonical_domains] = STATE(571),
    [sym__canonicalize_fallback_local] = STATE(569),
    [sym__canonicalize_hostname] = STATE(568),
    [sym__canonicalize_max_dots] = STATE(567),
    [sym__canonicalize_permitted_cnames] = STATE(581),
    [sym__ca_signature_algorithms] = STATE(557),
    [sym__certificate_file] = STATE(556),
    [sym__check_host_ip] = STATE(555),
    [sym__ciphers] = STATE(552),
    [sym__clear_all_forwardings] = STATE(547),
    [sym__compression] = STATE(544),
    [sym__connection_attempts] = STATE(543),
    [sym__connect_timeout] = STATE(542),
    [sym__control_master] = STATE(540),
    [sym__control_persist] = STATE(539),
    [sym__control_path] = STATE(537),
    [sym__enable_escape_command_line] = STATE(536),
    [sym__enable_ssh_keysign] = STATE(530),
    [sym__escape_char] = STATE(529),
    [sym__exit_on_forward_failure] = STATE(528),
    [sym__fingerprint_hash] = STATE(527),
    [sym__fork_after_authentication] = STATE(526),
    [sym__forward_agent] = STATE(565),
    [sym__forward_x11] = STATE(570),
    [sym__forward_x11_timeout] = STATE(572),
    [sym__forward_x11_trusted] = STATE(577),
    [sym__global_known_hosts_file] = STATE(646),
    [sym__gssapi_authentication] = STATE(589),
    [sym__gssapi_delegate_credentials] = STATE(590),
    [sym__hostbased_accepted_algorithms] = STATE(595),
    [sym__hostbased_authentication] = STATE(596),
    [sym__host_key_algorithms] = STATE(598),
    [sym__host_key_alias] = STATE(600),
    [sym__hostname] = STATE(602),
    [sym__identities_only] = STATE(605),
    [sym__identity_agent] = STATE(606),
    [sym__identity_file] = STATE(607),
    [sym__ignore_unknown] = STATE(610),
    [sym__ipqos] = STATE(611),
    [sym__kbd_interactive_authentication] = STATE(612),
    [sym__kex_algorithms] = STATE(613),
    [sym__known_hosts_command] = STATE(614),
    [sym__local_command] = STATE(621),
    [sym__local_forward] = STATE(644),
    [sym__log_level] = STATE(548),
    [sym__log_verbose] = STATE(670),
    [sym__macs] = STATE(673),
    [sym__no_host_authentication_for_localhost] = STATE(701),
    [sym__number_of_password_prompts] = STATE(704),
    [sym__password_authentication] = STATE(711),
    [sym__permit_local_command] = STATE(712),
    [sym__permit_remote_open] = STATE(714),
    [sym__pkcs11_provider] = STATE(716),
    [sym__port] = STATE(717),
    [sym__preferred_authentications] = STATE(724),
    [sym__proxy_command] = STATE(727),
    [sym__proxy_jump] = STATE(728),
    [sym__proxy_use_fdpass] = STATE(731),
    [sym__pubkey_accepted_algorithms] = STATE(709),
    [sym__pubkey_authentication] = STATE(705),
    [sym__rekey_limit] = STATE(700),
    [sym__remote_command] = STATE(669),
    [sym__remote_forward] = STATE(597),
    [sym__request_tty] = STATE(585),
    [sym__required_rsa_size] = STATE(575),
    [sym__revoked_host_keys] = STATE(566),
    [sym__security_key_provider] = STATE(559),
    [sym__send_env] = STATE(554),
    [sym__server_alive_count_max] = STATE(553),
    [sym__server_alive_interval] = STATE(551),
    [sym__session_type] = STATE(550),
    [sym__set_env] = STATE(562),
    [sym__stdin_null] = STATE(533),
    [sym__stream_local_bind_mask] = STATE(689),
    [sym__stream_local_bind_unlink] = STATE(560),
    [sym__strict_host_key_checking] = STATE(736),
    [sym__syslog_facility] = STATE(718),
    [sym__tcp_keep_alive] = STATE(713),
    [sym__tag] = STATE(702),
    [sym__tunnel] = STATE(672),
    [sym__tunnel_device] = STATE(616),
    [sym__update_host_keys] = STATE(574),
    [sym__user] = STATE(524),
    [sym__user_known_hosts_file] = STATE(531),
    [sym__verify_host_key_dns] = STATE(535),
    [sym__visual_host_key] = STATE(538),
    [sym__xauth_location] = STATE(545),
    [aux_sym__match_user_token1] = ACTIONS(9),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(11),
    [aux_sym__address_family_token1] = ACTIONS(13),
    [aux_sym__batch_mode_token1] = ACTIONS(15),
    [aux_sym__bind_address_token1] = ACTIONS(17),
    [aux_sym__bind_interface_token1] = ACTIONS(19),
    [aux_sym__canonical_domains_token1] = ACTIONS(21),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(23),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(25),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(27),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(29),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(31),
    [aux_sym__certificate_file_token1] = ACTIONS(33),
    [aux_sym__check_host_ip_token1] = ACTIONS(35),
    [aux_sym__ciphers_token1] = ACTIONS(37),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(39),
    [aux_sym__compression_token1] = ACTIONS(41),
    [aux_sym__connection_attempts_token1] = ACTIONS(43),
    [aux_sym__connect_timeout_token1] = ACTIONS(45),
    [aux_sym__control_master_token1] = ACTIONS(47),
    [aux_sym__control_persist_token1] = ACTIONS(49),
    [aux_sym__control_path_token1] = ACTIONS(51),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(53),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(55),
    [aux_sym__escape_char_token1] = ACTIONS(57),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(59),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(61),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(63),
    [aux_sym__forward_agent_token1] = ACTIONS(65),
    [aux_sym__forward_x11_token1] = ACTIONS(67),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(69),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(71),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(73),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(75),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(77),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(79),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(81),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(83),
    [aux_sym__host_key_alias_token1] = ACTIONS(85),
    [aux_sym__hostname_token1] = ACTIONS(87),
    [aux_sym__identities_only_token1] = ACTIONS(89),
    [aux_sym__identity_agent_token1] = ACTIONS(91),
    [aux_sym__identity_file_token1] = ACTIONS(93),
    [aux_sym__ignore_unknown_token1] = ACTIONS(95),
    [aux_sym__ipqos_token1] = ACTIONS(97),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(99),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(99),
    [aux_sym__kex_algorithms_token1] = ACTIONS(101),
    [aux_sym__known_hosts_command_token1] = ACTIONS(103),
    [aux_sym__local_command_token1] = ACTIONS(105),
    [aux_sym__local_forward_token1] = ACTIONS(107),
    [aux_sym__log_level_token1] = ACTIONS(109),
    [aux_sym__log_verbose_token1] = ACTIONS(111),
    [aux_sym__macs_token1] = ACTIONS(113),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(115),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(117),
    [aux_sym__password_authentication_token1] = ACTIONS(119),
    [aux_sym__permit_local_command_token1] = ACTIONS(121),
    [aux_sym__permit_remote_open_token1] = ACTIONS(123),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(125),
    [aux_sym__port_token1] = ACTIONS(127),
    [aux_sym__preferred_authentications_token1] = ACTIONS(129),
    [aux_sym__proxy_command_token1] = ACTIONS(131),
    [aux_sym__proxy_jump_token1] = ACTIONS(133),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(135),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(137),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(139),
    [aux_sym__rekey_limit_token1] = ACTIONS(141),
    [aux_sym__remote_command_token1] = ACTIONS(143),
    [aux_sym__remote_forward_token1] = ACTIONS(145),
    [aux_sym__request_tty_token1] = ACTIONS(147),
    [aux_sym__required_rsa_size_token1] = ACTIONS(149),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(151),
    [aux_sym__security_key_provider_token1] = ACTIONS(153),
    [aux_sym__send_env_token1] = ACTIONS(155),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(157),
    [aux_sym__server_alive_interval_token1] = ACTIONS(159),
    [aux_sym__session_type_token1] = ACTIONS(161),
    [aux_sym__stdin_null_token1] = ACTIONS(163),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(165),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(167),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(169),
    [aux_sym__syslog_facility_token1] = ACTIONS(171),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(173),
    [aux_sym__tag_token1] = ACTIONS(175),
    [aux_sym__tunnel_token1] = ACTIONS(177),
    [aux_sym__tunnel_device_token1] = ACTIONS(179),
    [aux_sym__update_host_keys_token1] = ACTIONS(181),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(183),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(185),
    [aux_sym__visual_host_key_token1] = ACTIONS(187),
    [aux_sym__xauth_location_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(786),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(788),
    [aux_sym_host_declaration_token1] = ACTIONS(790),
    [aux_sym_match_declaration_token1] = ACTIONS(788),
    [aux_sym__match_user_token1] = ACTIONS(790),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(788),
    [aux_sym__address_family_token1] = ACTIONS(788),
    [aux_sym__batch_mode_token1] = ACTIONS(788),
    [aux_sym__bind_address_token1] = ACTIONS(788),
    [aux_sym__bind_interface_token1] = ACTIONS(788),
    [aux_sym__canonical_domains_token1] = ACTIONS(788),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(788),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(788),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(788),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(788),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(788),
    [aux_sym__certificate_file_token1] = ACTIONS(788),
    [aux_sym__check_host_ip_token1] = ACTIONS(788),
    [aux_sym__ciphers_token1] = ACTIONS(788),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(788),
    [aux_sym__compression_token1] = ACTIONS(788),
    [aux_sym__connection_attempts_token1] = ACTIONS(788),
    [aux_sym__connect_timeout_token1] = ACTIONS(788),
    [aux_sym__control_master_token1] = ACTIONS(788),
    [aux_sym__control_persist_token1] = ACTIONS(788),
    [aux_sym__control_path_token1] = ACTIONS(788),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(788),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(788),
    [aux_sym__escape_char_token1] = ACTIONS(788),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(788),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(788),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(788),
    [aux_sym__forward_agent_token1] = ACTIONS(788),
    [aux_sym__forward_x11_token1] = ACTIONS(790),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(788),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(788),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(788),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(788),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(788),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(788),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(788),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(788),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(788),
    [aux_sym__host_key_alias_token1] = ACTIONS(788),
    [aux_sym__hostname_token1] = ACTIONS(788),
    [aux_sym__identities_only_token1] = ACTIONS(788),
    [aux_sym__identity_agent_token1] = ACTIONS(788),
    [aux_sym__identity_file_token1] = ACTIONS(788),
    [aux_sym__ignore_unknown_token1] = ACTIONS(788),
    [aux_sym__ipqos_token1] = ACTIONS(788),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(788),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(788),
    [aux_sym__kex_algorithms_token1] = ACTIONS(788),
    [aux_sym__known_hosts_command_token1] = ACTIONS(788),
    [aux_sym__local_command_token1] = ACTIONS(788),
    [aux_sym__local_forward_token1] = ACTIONS(788),
    [aux_sym__log_level_token1] = ACTIONS(788),
    [aux_sym__log_verbose_token1] = ACTIONS(788),
    [aux_sym__macs_token1] = ACTIONS(788),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(788),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(788),
    [aux_sym__password_authentication_token1] = ACTIONS(788),
    [aux_sym__permit_local_command_token1] = ACTIONS(788),
    [aux_sym__permit_remote_open_token1] = ACTIONS(788),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(788),
    [aux_sym__port_token1] = ACTIONS(788),
    [aux_sym__preferred_authentications_token1] = ACTIONS(788),
    [aux_sym__proxy_command_token1] = ACTIONS(788),
    [aux_sym__proxy_jump_token1] = ACTIONS(788),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(788),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(788),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(788),
    [aux_sym__rekey_limit_token1] = ACTIONS(788),
    [aux_sym__remote_command_token1] = ACTIONS(788),
    [aux_sym__remote_forward_token1] = ACTIONS(788),
    [aux_sym__request_tty_token1] = ACTIONS(788),
    [aux_sym__required_rsa_size_token1] = ACTIONS(788),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(788),
    [aux_sym__security_key_provider_token1] = ACTIONS(788),
    [aux_sym__send_env_token1] = ACTIONS(788),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(788),
    [aux_sym__server_alive_interval_token1] = ACTIONS(788),
    [aux_sym__session_type_token1] = ACTIONS(788),
    [aux_sym__stdin_null_token1] = ACTIONS(788),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(788),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(788),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(788),
    [aux_sym__syslog_facility_token1] = ACTIONS(788),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(788),
    [aux_sym__tag_token1] = ACTIONS(788),
    [aux_sym__tunnel_token1] = ACTIONS(790),
    [aux_sym__tunnel_device_token1] = ACTIONS(788),
    [aux_sym__update_host_keys_token1] = ACTIONS(788),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(788),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(788),
    [aux_sym__visual_host_key_token1] = ACTIONS(788),
    [aux_sym__xauth_location_token1] = ACTIONS(788),
    [sym_comment] = ACTIONS(788),
    [sym__space] = ACTIONS(788),
    [sym__eol] = ACTIONS(788),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(792),
    [aux_sym_host_declaration_token1] = ACTIONS(794),
    [aux_sym_match_declaration_token1] = ACTIONS(792),
    [aux_sym__match_user_token1] = ACTIONS(794),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(792),
    [aux_sym__address_family_token1] = ACTIONS(792),
    [aux_sym__batch_mode_token1] = ACTIONS(792),
    [aux_sym__bind_address_token1] = ACTIONS(792),
    [aux_sym__bind_interface_token1] = ACTIONS(792),
    [aux_sym__canonical_domains_token1] = ACTIONS(792),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(792),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(792),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(792),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(792),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(792),
    [aux_sym__certificate_file_token1] = ACTIONS(792),
    [aux_sym__check_host_ip_token1] = ACTIONS(792),
    [aux_sym__ciphers_token1] = ACTIONS(792),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(792),
    [aux_sym__compression_token1] = ACTIONS(792),
    [aux_sym__connection_attempts_token1] = ACTIONS(792),
    [aux_sym__connect_timeout_token1] = ACTIONS(792),
    [aux_sym__control_master_token1] = ACTIONS(792),
    [aux_sym__control_persist_token1] = ACTIONS(792),
    [aux_sym__control_path_token1] = ACTIONS(792),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(792),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(792),
    [aux_sym__escape_char_token1] = ACTIONS(792),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(792),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(792),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(792),
    [aux_sym__forward_agent_token1] = ACTIONS(792),
    [aux_sym__forward_x11_token1] = ACTIONS(794),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(792),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(792),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(792),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(792),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(792),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(792),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(792),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(792),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(792),
    [aux_sym__host_key_alias_token1] = ACTIONS(792),
    [aux_sym__hostname_token1] = ACTIONS(792),
    [aux_sym__identities_only_token1] = ACTIONS(792),
    [aux_sym__identity_agent_token1] = ACTIONS(792),
    [aux_sym__identity_file_token1] = ACTIONS(792),
    [aux_sym__ignore_unknown_token1] = ACTIONS(792),
    [aux_sym__ipqos_token1] = ACTIONS(792),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(792),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(792),
    [aux_sym__kex_algorithms_token1] = ACTIONS(792),
    [aux_sym__known_hosts_command_token1] = ACTIONS(792),
    [aux_sym__local_command_token1] = ACTIONS(792),
    [aux_sym__local_forward_token1] = ACTIONS(792),
    [aux_sym__log_level_token1] = ACTIONS(792),
    [aux_sym__log_verbose_token1] = ACTIONS(792),
    [aux_sym__macs_token1] = ACTIONS(792),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(792),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(792),
    [aux_sym__password_authentication_token1] = ACTIONS(792),
    [aux_sym__permit_local_command_token1] = ACTIONS(792),
    [aux_sym__permit_remote_open_token1] = ACTIONS(792),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(792),
    [aux_sym__port_token1] = ACTIONS(792),
    [aux_sym__preferred_authentications_token1] = ACTIONS(792),
    [aux_sym__proxy_command_token1] = ACTIONS(792),
    [aux_sym__proxy_jump_token1] = ACTIONS(792),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(792),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(792),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(792),
    [aux_sym__rekey_limit_token1] = ACTIONS(792),
    [aux_sym__remote_command_token1] = ACTIONS(792),
    [aux_sym__remote_forward_token1] = ACTIONS(792),
    [aux_sym__request_tty_token1] = ACTIONS(792),
    [aux_sym__required_rsa_size_token1] = ACTIONS(792),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(792),
    [aux_sym__security_key_provider_token1] = ACTIONS(792),
    [aux_sym__send_env_token1] = ACTIONS(792),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(792),
    [aux_sym__server_alive_interval_token1] = ACTIONS(792),
    [aux_sym__session_type_token1] = ACTIONS(792),
    [aux_sym__stdin_null_token1] = ACTIONS(792),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(792),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(792),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(792),
    [aux_sym__syslog_facility_token1] = ACTIONS(792),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(792),
    [aux_sym__tag_token1] = ACTIONS(792),
    [aux_sym__tunnel_token1] = ACTIONS(794),
    [aux_sym__tunnel_device_token1] = ACTIONS(792),
    [aux_sym__update_host_keys_token1] = ACTIONS(792),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(792),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(792),
    [aux_sym__visual_host_key_token1] = ACTIONS(792),
    [aux_sym__xauth_location_token1] = ACTIONS(792),
    [sym_comment] = ACTIONS(792),
    [sym__space] = ACTIONS(792),
    [sym__eol] = ACTIONS(792),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(796),
    [aux_sym_host_declaration_token1] = ACTIONS(798),
    [aux_sym_match_declaration_token1] = ACTIONS(796),
    [aux_sym__match_user_token1] = ACTIONS(798),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(796),
    [aux_sym__address_family_token1] = ACTIONS(796),
    [aux_sym__batch_mode_token1] = ACTIONS(796),
    [aux_sym__bind_address_token1] = ACTIONS(796),
    [aux_sym__bind_interface_token1] = ACTIONS(796),
    [aux_sym__canonical_domains_token1] = ACTIONS(796),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(796),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(796),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(796),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(796),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(796),
    [aux_sym__certificate_file_token1] = ACTIONS(796),
    [aux_sym__check_host_ip_token1] = ACTIONS(796),
    [aux_sym__ciphers_token1] = ACTIONS(796),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(796),
    [aux_sym__compression_token1] = ACTIONS(796),
    [aux_sym__connection_attempts_token1] = ACTIONS(796),
    [aux_sym__connect_timeout_token1] = ACTIONS(796),
    [aux_sym__control_master_token1] = ACTIONS(796),
    [aux_sym__control_persist_token1] = ACTIONS(796),
    [aux_sym__control_path_token1] = ACTIONS(796),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(796),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(796),
    [aux_sym__escape_char_token1] = ACTIONS(796),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(796),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(796),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(796),
    [aux_sym__forward_agent_token1] = ACTIONS(796),
    [aux_sym__forward_x11_token1] = ACTIONS(798),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(796),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(796),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(796),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(796),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(796),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(796),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(796),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(796),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(796),
    [aux_sym__host_key_alias_token1] = ACTIONS(796),
    [aux_sym__hostname_token1] = ACTIONS(796),
    [aux_sym__identities_only_token1] = ACTIONS(796),
    [aux_sym__identity_agent_token1] = ACTIONS(796),
    [aux_sym__identity_file_token1] = ACTIONS(796),
    [aux_sym__ignore_unknown_token1] = ACTIONS(796),
    [aux_sym__ipqos_token1] = ACTIONS(796),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(796),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(796),
    [aux_sym__kex_algorithms_token1] = ACTIONS(796),
    [aux_sym__known_hosts_command_token1] = ACTIONS(796),
    [aux_sym__local_command_token1] = ACTIONS(796),
    [aux_sym__local_forward_token1] = ACTIONS(796),
    [aux_sym__log_level_token1] = ACTIONS(796),
    [aux_sym__log_verbose_token1] = ACTIONS(796),
    [aux_sym__macs_token1] = ACTIONS(796),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(796),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(796),
    [aux_sym__password_authentication_token1] = ACTIONS(796),
    [aux_sym__permit_local_command_token1] = ACTIONS(796),
    [aux_sym__permit_remote_open_token1] = ACTIONS(796),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(796),
    [aux_sym__port_token1] = ACTIONS(796),
    [aux_sym__preferred_authentications_token1] = ACTIONS(796),
    [aux_sym__proxy_command_token1] = ACTIONS(796),
    [aux_sym__proxy_jump_token1] = ACTIONS(796),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(796),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(796),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(796),
    [aux_sym__rekey_limit_token1] = ACTIONS(796),
    [aux_sym__remote_command_token1] = ACTIONS(796),
    [aux_sym__remote_forward_token1] = ACTIONS(796),
    [aux_sym__request_tty_token1] = ACTIONS(796),
    [aux_sym__required_rsa_size_token1] = ACTIONS(796),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(796),
    [aux_sym__security_key_provider_token1] = ACTIONS(796),
    [aux_sym__send_env_token1] = ACTIONS(796),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(796),
    [aux_sym__server_alive_interval_token1] = ACTIONS(796),
    [aux_sym__session_type_token1] = ACTIONS(796),
    [aux_sym__stdin_null_token1] = ACTIONS(796),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(796),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(796),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(796),
    [aux_sym__syslog_facility_token1] = ACTIONS(796),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(796),
    [aux_sym__tag_token1] = ACTIONS(796),
    [aux_sym__tunnel_token1] = ACTIONS(798),
    [aux_sym__tunnel_device_token1] = ACTIONS(796),
    [aux_sym__update_host_keys_token1] = ACTIONS(796),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(796),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(796),
    [aux_sym__visual_host_key_token1] = ACTIONS(796),
    [aux_sym__xauth_location_token1] = ACTIONS(796),
    [sym_comment] = ACTIONS(796),
    [sym__space] = ACTIONS(796),
    [sym__eol] = ACTIONS(796),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_host_declaration_token1] = ACTIONS(800),
    [aux_sym_match_declaration_token1] = ACTIONS(197),
    [aux_sym__match_user_token1] = ACTIONS(800),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(197),
    [aux_sym__address_family_token1] = ACTIONS(197),
    [aux_sym__batch_mode_token1] = ACTIONS(197),
    [aux_sym__bind_address_token1] = ACTIONS(197),
    [aux_sym__bind_interface_token1] = ACTIONS(197),
    [aux_sym__canonical_domains_token1] = ACTIONS(197),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(197),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(197),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(197),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(197),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(197),
    [aux_sym__certificate_file_token1] = ACTIONS(197),
    [aux_sym__check_host_ip_token1] = ACTIONS(197),
    [aux_sym__ciphers_token1] = ACTIONS(197),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(197),
    [aux_sym__compression_token1] = ACTIONS(197),
    [aux_sym__connection_attempts_token1] = ACTIONS(197),
    [aux_sym__connect_timeout_token1] = ACTIONS(197),
    [aux_sym__control_master_token1] = ACTIONS(197),
    [aux_sym__control_persist_token1] = ACTIONS(197),
    [aux_sym__control_path_token1] = ACTIONS(197),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(197),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(197),
    [aux_sym__escape_char_token1] = ACTIONS(197),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(197),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(197),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(197),
    [aux_sym__forward_agent_token1] = ACTIONS(197),
    [aux_sym__forward_x11_token1] = ACTIONS(800),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(197),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(197),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(197),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(197),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(197),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(197),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(197),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(197),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(197),
    [aux_sym__host_key_alias_token1] = ACTIONS(197),
    [aux_sym__hostname_token1] = ACTIONS(197),
    [aux_sym__identities_only_token1] = ACTIONS(197),
    [aux_sym__identity_agent_token1] = ACTIONS(197),
    [aux_sym__identity_file_token1] = ACTIONS(197),
    [aux_sym__ignore_unknown_token1] = ACTIONS(197),
    [aux_sym__ipqos_token1] = ACTIONS(197),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(197),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(197),
    [aux_sym__kex_algorithms_token1] = ACTIONS(197),
    [aux_sym__known_hosts_command_token1] = ACTIONS(197),
    [aux_sym__local_command_token1] = ACTIONS(197),
    [aux_sym__local_forward_token1] = ACTIONS(197),
    [aux_sym__log_level_token1] = ACTIONS(197),
    [aux_sym__log_verbose_token1] = ACTIONS(197),
    [aux_sym__macs_token1] = ACTIONS(197),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(197),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(197),
    [aux_sym__password_authentication_token1] = ACTIONS(197),
    [aux_sym__permit_local_command_token1] = ACTIONS(197),
    [aux_sym__permit_remote_open_token1] = ACTIONS(197),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(197),
    [aux_sym__port_token1] = ACTIONS(197),
    [aux_sym__preferred_authentications_token1] = ACTIONS(197),
    [aux_sym__proxy_command_token1] = ACTIONS(197),
    [aux_sym__proxy_jump_token1] = ACTIONS(197),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(197),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(197),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(197),
    [aux_sym__rekey_limit_token1] = ACTIONS(197),
    [aux_sym__remote_command_token1] = ACTIONS(197),
    [aux_sym__remote_forward_token1] = ACTIONS(197),
    [aux_sym__request_tty_token1] = ACTIONS(197),
    [aux_sym__required_rsa_size_token1] = ACTIONS(197),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(197),
    [aux_sym__security_key_provider_token1] = ACTIONS(197),
    [aux_sym__send_env_token1] = ACTIONS(197),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(197),
    [aux_sym__server_alive_interval_token1] = ACTIONS(197),
    [aux_sym__session_type_token1] = ACTIONS(197),
    [aux_sym__stdin_null_token1] = ACTIONS(197),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(197),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(197),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(197),
    [aux_sym__syslog_facility_token1] = ACTIONS(197),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(197),
    [aux_sym__tag_token1] = ACTIONS(197),
    [aux_sym__tunnel_token1] = ACTIONS(800),
    [aux_sym__tunnel_device_token1] = ACTIONS(197),
    [aux_sym__update_host_keys_token1] = ACTIONS(197),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(197),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(197),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(197),
    [sym__space] = ACTIONS(197),
    [sym__eol] = ACTIONS(197),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(802),
    [aux_sym_host_declaration_token1] = ACTIONS(804),
    [aux_sym_match_declaration_token1] = ACTIONS(802),
    [aux_sym__match_user_token1] = ACTIONS(804),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(802),
    [aux_sym__address_family_token1] = ACTIONS(802),
    [aux_sym__batch_mode_token1] = ACTIONS(802),
    [aux_sym__bind_address_token1] = ACTIONS(802),
    [aux_sym__bind_interface_token1] = ACTIONS(802),
    [aux_sym__canonical_domains_token1] = ACTIONS(802),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(802),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(802),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(802),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(802),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(802),
    [aux_sym__certificate_file_token1] = ACTIONS(802),
    [aux_sym__check_host_ip_token1] = ACTIONS(802),
    [aux_sym__ciphers_token1] = ACTIONS(802),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(802),
    [aux_sym__compression_token1] = ACTIONS(802),
    [aux_sym__connection_attempts_token1] = ACTIONS(802),
    [aux_sym__connect_timeout_token1] = ACTIONS(802),
    [aux_sym__control_master_token1] = ACTIONS(802),
    [aux_sym__control_persist_token1] = ACTIONS(802),
    [aux_sym__control_path_token1] = ACTIONS(802),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(802),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(802),
    [aux_sym__escape_char_token1] = ACTIONS(802),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(802),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(802),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(802),
    [aux_sym__forward_agent_token1] = ACTIONS(802),
    [aux_sym__forward_x11_token1] = ACTIONS(804),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(802),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(802),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(802),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(802),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(802),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(802),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(802),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(802),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(802),
    [aux_sym__host_key_alias_token1] = ACTIONS(802),
    [aux_sym__hostname_token1] = ACTIONS(802),
    [aux_sym__identities_only_token1] = ACTIONS(802),
    [aux_sym__identity_agent_token1] = ACTIONS(802),
    [aux_sym__identity_file_token1] = ACTIONS(802),
    [aux_sym__ignore_unknown_token1] = ACTIONS(802),
    [aux_sym__ipqos_token1] = ACTIONS(802),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(802),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(802),
    [aux_sym__kex_algorithms_token1] = ACTIONS(802),
    [aux_sym__known_hosts_command_token1] = ACTIONS(802),
    [aux_sym__local_command_token1] = ACTIONS(802),
    [aux_sym__local_forward_token1] = ACTIONS(802),
    [aux_sym__log_level_token1] = ACTIONS(802),
    [aux_sym__log_verbose_token1] = ACTIONS(802),
    [aux_sym__macs_token1] = ACTIONS(802),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(802),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(802),
    [aux_sym__password_authentication_token1] = ACTIONS(802),
    [aux_sym__permit_local_command_token1] = ACTIONS(802),
    [aux_sym__permit_remote_open_token1] = ACTIONS(802),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(802),
    [aux_sym__port_token1] = ACTIONS(802),
    [aux_sym__preferred_authentications_token1] = ACTIONS(802),
    [aux_sym__proxy_command_token1] = ACTIONS(802),
    [aux_sym__proxy_jump_token1] = ACTIONS(802),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(802),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(802),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(802),
    [aux_sym__rekey_limit_token1] = ACTIONS(802),
    [aux_sym__remote_command_token1] = ACTIONS(802),
    [aux_sym__remote_forward_token1] = ACTIONS(802),
    [aux_sym__request_tty_token1] = ACTIONS(802),
    [aux_sym__required_rsa_size_token1] = ACTIONS(802),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(802),
    [aux_sym__security_key_provider_token1] = ACTIONS(802),
    [aux_sym__send_env_token1] = ACTIONS(802),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(802),
    [aux_sym__server_alive_interval_token1] = ACTIONS(802),
    [aux_sym__session_type_token1] = ACTIONS(802),
    [aux_sym__stdin_null_token1] = ACTIONS(802),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(802),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(802),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(802),
    [aux_sym__syslog_facility_token1] = ACTIONS(802),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(802),
    [aux_sym__tag_token1] = ACTIONS(802),
    [aux_sym__tunnel_token1] = ACTIONS(804),
    [aux_sym__tunnel_device_token1] = ACTIONS(802),
    [aux_sym__update_host_keys_token1] = ACTIONS(802),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(802),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(802),
    [aux_sym__visual_host_key_token1] = ACTIONS(802),
    [aux_sym__xauth_location_token1] = ACTIONS(802),
    [sym_comment] = ACTIONS(802),
    [sym__space] = ACTIONS(802),
    [sym__eol] = ACTIONS(802),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(806),
    [aux_sym_host_declaration_token1] = ACTIONS(808),
    [aux_sym_match_declaration_token1] = ACTIONS(806),
    [aux_sym__match_user_token1] = ACTIONS(808),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(806),
    [aux_sym__address_family_token1] = ACTIONS(806),
    [aux_sym__batch_mode_token1] = ACTIONS(806),
    [aux_sym__bind_address_token1] = ACTIONS(806),
    [aux_sym__bind_interface_token1] = ACTIONS(806),
    [aux_sym__canonical_domains_token1] = ACTIONS(806),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(806),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(806),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(806),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(806),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(806),
    [aux_sym__certificate_file_token1] = ACTIONS(806),
    [aux_sym__check_host_ip_token1] = ACTIONS(806),
    [aux_sym__ciphers_token1] = ACTIONS(806),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(806),
    [aux_sym__compression_token1] = ACTIONS(806),
    [aux_sym__connection_attempts_token1] = ACTIONS(806),
    [aux_sym__connect_timeout_token1] = ACTIONS(806),
    [aux_sym__control_master_token1] = ACTIONS(806),
    [aux_sym__control_persist_token1] = ACTIONS(806),
    [aux_sym__control_path_token1] = ACTIONS(806),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(806),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(806),
    [aux_sym__escape_char_token1] = ACTIONS(806),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(806),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(806),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(806),
    [aux_sym__forward_agent_token1] = ACTIONS(806),
    [aux_sym__forward_x11_token1] = ACTIONS(808),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(806),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(806),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(806),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(806),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(806),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(806),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(806),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(806),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(806),
    [aux_sym__host_key_alias_token1] = ACTIONS(806),
    [aux_sym__hostname_token1] = ACTIONS(806),
    [aux_sym__identities_only_token1] = ACTIONS(806),
    [aux_sym__identity_agent_token1] = ACTIONS(806),
    [aux_sym__identity_file_token1] = ACTIONS(806),
    [aux_sym__ignore_unknown_token1] = ACTIONS(806),
    [aux_sym__ipqos_token1] = ACTIONS(806),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(806),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(806),
    [aux_sym__kex_algorithms_token1] = ACTIONS(806),
    [aux_sym__known_hosts_command_token1] = ACTIONS(806),
    [aux_sym__local_command_token1] = ACTIONS(806),
    [aux_sym__local_forward_token1] = ACTIONS(806),
    [aux_sym__log_level_token1] = ACTIONS(806),
    [aux_sym__log_verbose_token1] = ACTIONS(806),
    [aux_sym__macs_token1] = ACTIONS(806),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(806),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(806),
    [aux_sym__password_authentication_token1] = ACTIONS(806),
    [aux_sym__permit_local_command_token1] = ACTIONS(806),
    [aux_sym__permit_remote_open_token1] = ACTIONS(806),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(806),
    [aux_sym__port_token1] = ACTIONS(806),
    [aux_sym__preferred_authentications_token1] = ACTIONS(806),
    [aux_sym__proxy_command_token1] = ACTIONS(806),
    [aux_sym__proxy_jump_token1] = ACTIONS(806),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(806),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(806),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(806),
    [aux_sym__rekey_limit_token1] = ACTIONS(806),
    [aux_sym__remote_command_token1] = ACTIONS(806),
    [aux_sym__remote_forward_token1] = ACTIONS(806),
    [aux_sym__request_tty_token1] = ACTIONS(806),
    [aux_sym__required_rsa_size_token1] = ACTIONS(806),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(806),
    [aux_sym__security_key_provider_token1] = ACTIONS(806),
    [aux_sym__send_env_token1] = ACTIONS(806),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(806),
    [aux_sym__server_alive_interval_token1] = ACTIONS(806),
    [aux_sym__session_type_token1] = ACTIONS(806),
    [aux_sym__stdin_null_token1] = ACTIONS(806),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(806),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(806),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(806),
    [aux_sym__syslog_facility_token1] = ACTIONS(806),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(806),
    [aux_sym__tag_token1] = ACTIONS(806),
    [aux_sym__tunnel_token1] = ACTIONS(808),
    [aux_sym__tunnel_device_token1] = ACTIONS(806),
    [aux_sym__update_host_keys_token1] = ACTIONS(806),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(806),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(806),
    [aux_sym__visual_host_key_token1] = ACTIONS(806),
    [aux_sym__xauth_location_token1] = ACTIONS(806),
    [sym_comment] = ACTIONS(806),
    [sym__space] = ACTIONS(806),
    [sym__eol] = ACTIONS(806),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(810),
    [aux_sym_host_declaration_token1] = ACTIONS(812),
    [aux_sym_match_declaration_token1] = ACTIONS(810),
    [aux_sym__match_user_token1] = ACTIONS(812),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(810),
    [aux_sym__address_family_token1] = ACTIONS(810),
    [aux_sym__batch_mode_token1] = ACTIONS(810),
    [aux_sym__bind_address_token1] = ACTIONS(810),
    [aux_sym__bind_interface_token1] = ACTIONS(810),
    [aux_sym__canonical_domains_token1] = ACTIONS(810),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(810),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(810),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(810),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(810),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(810),
    [aux_sym__certificate_file_token1] = ACTIONS(810),
    [aux_sym__check_host_ip_token1] = ACTIONS(810),
    [aux_sym__ciphers_token1] = ACTIONS(810),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(810),
    [aux_sym__compression_token1] = ACTIONS(810),
    [aux_sym__connection_attempts_token1] = ACTIONS(810),
    [aux_sym__connect_timeout_token1] = ACTIONS(810),
    [aux_sym__control_master_token1] = ACTIONS(810),
    [aux_sym__control_persist_token1] = ACTIONS(810),
    [aux_sym__control_path_token1] = ACTIONS(810),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(810),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(810),
    [aux_sym__escape_char_token1] = ACTIONS(810),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(810),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(810),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(810),
    [aux_sym__forward_agent_token1] = ACTIONS(810),
    [aux_sym__forward_x11_token1] = ACTIONS(812),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(810),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(810),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(810),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(810),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(810),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(810),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(810),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(810),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(810),
    [aux_sym__host_key_alias_token1] = ACTIONS(810),
    [aux_sym__hostname_token1] = ACTIONS(810),
    [aux_sym__identities_only_token1] = ACTIONS(810),
    [aux_sym__identity_agent_token1] = ACTIONS(810),
    [aux_sym__identity_file_token1] = ACTIONS(810),
    [aux_sym__ignore_unknown_token1] = ACTIONS(810),
    [aux_sym__ipqos_token1] = ACTIONS(810),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(810),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(810),
    [aux_sym__kex_algorithms_token1] = ACTIONS(810),
    [aux_sym__known_hosts_command_token1] = ACTIONS(810),
    [aux_sym__local_command_token1] = ACTIONS(810),
    [aux_sym__local_forward_token1] = ACTIONS(810),
    [aux_sym__log_level_token1] = ACTIONS(810),
    [aux_sym__log_verbose_token1] = ACTIONS(810),
    [aux_sym__macs_token1] = ACTIONS(810),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(810),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(810),
    [aux_sym__password_authentication_token1] = ACTIONS(810),
    [aux_sym__permit_local_command_token1] = ACTIONS(810),
    [aux_sym__permit_remote_open_token1] = ACTIONS(810),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(810),
    [aux_sym__port_token1] = ACTIONS(810),
    [aux_sym__preferred_authentications_token1] = ACTIONS(810),
    [aux_sym__proxy_command_token1] = ACTIONS(810),
    [aux_sym__proxy_jump_token1] = ACTIONS(810),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(810),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(810),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(810),
    [aux_sym__rekey_limit_token1] = ACTIONS(810),
    [aux_sym__remote_command_token1] = ACTIONS(810),
    [aux_sym__remote_forward_token1] = ACTIONS(810),
    [aux_sym__request_tty_token1] = ACTIONS(810),
    [aux_sym__required_rsa_size_token1] = ACTIONS(810),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(810),
    [aux_sym__security_key_provider_token1] = ACTIONS(810),
    [aux_sym__send_env_token1] = ACTIONS(810),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(810),
    [aux_sym__server_alive_interval_token1] = ACTIONS(810),
    [aux_sym__session_type_token1] = ACTIONS(810),
    [aux_sym__stdin_null_token1] = ACTIONS(810),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(810),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(810),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(810),
    [aux_sym__syslog_facility_token1] = ACTIONS(810),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(810),
    [aux_sym__tag_token1] = ACTIONS(810),
    [aux_sym__tunnel_token1] = ACTIONS(812),
    [aux_sym__tunnel_device_token1] = ACTIONS(810),
    [aux_sym__update_host_keys_token1] = ACTIONS(810),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(810),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(810),
    [aux_sym__visual_host_key_token1] = ACTIONS(810),
    [aux_sym__xauth_location_token1] = ACTIONS(810),
    [sym_comment] = ACTIONS(810),
    [sym__space] = ACTIONS(810),
    [sym__eol] = ACTIONS(810),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_host_declaration_token1] = ACTIONS(493),
    [aux_sym_match_declaration_token1] = ACTIONS(491),
    [aux_sym__match_user_token1] = ACTIONS(493),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(491),
    [aux_sym__address_family_token1] = ACTIONS(491),
    [aux_sym__batch_mode_token1] = ACTIONS(491),
    [aux_sym__bind_address_token1] = ACTIONS(491),
    [aux_sym__bind_interface_token1] = ACTIONS(491),
    [aux_sym__canonical_domains_token1] = ACTIONS(491),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(491),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(491),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(491),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(491),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(491),
    [aux_sym__certificate_file_token1] = ACTIONS(491),
    [aux_sym__check_host_ip_token1] = ACTIONS(491),
    [aux_sym__ciphers_token1] = ACTIONS(491),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(491),
    [aux_sym__compression_token1] = ACTIONS(491),
    [aux_sym__connection_attempts_token1] = ACTIONS(491),
    [aux_sym__connect_timeout_token1] = ACTIONS(491),
    [aux_sym__control_master_token1] = ACTIONS(491),
    [aux_sym__control_persist_token1] = ACTIONS(491),
    [aux_sym__control_path_token1] = ACTIONS(491),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(491),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(491),
    [aux_sym__escape_char_token1] = ACTIONS(491),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(491),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(491),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(491),
    [aux_sym__forward_agent_token1] = ACTIONS(491),
    [aux_sym__forward_x11_token1] = ACTIONS(493),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(491),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(491),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(491),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(491),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(491),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(491),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(491),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(491),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(491),
    [aux_sym__host_key_alias_token1] = ACTIONS(491),
    [aux_sym__hostname_token1] = ACTIONS(491),
    [aux_sym__identities_only_token1] = ACTIONS(491),
    [aux_sym__identity_agent_token1] = ACTIONS(491),
    [aux_sym__identity_file_token1] = ACTIONS(491),
    [aux_sym__ignore_unknown_token1] = ACTIONS(491),
    [aux_sym__ipqos_token1] = ACTIONS(491),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(491),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(491),
    [aux_sym__kex_algorithms_token1] = ACTIONS(491),
    [aux_sym__known_hosts_command_token1] = ACTIONS(491),
    [aux_sym__local_command_token1] = ACTIONS(491),
    [aux_sym__local_forward_token1] = ACTIONS(491),
    [aux_sym__log_level_token1] = ACTIONS(491),
    [aux_sym__log_verbose_token1] = ACTIONS(491),
    [aux_sym__macs_token1] = ACTIONS(491),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(491),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(491),
    [aux_sym__password_authentication_token1] = ACTIONS(491),
    [aux_sym__permit_local_command_token1] = ACTIONS(491),
    [aux_sym__permit_remote_open_token1] = ACTIONS(491),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(491),
    [aux_sym__port_token1] = ACTIONS(491),
    [aux_sym__preferred_authentications_token1] = ACTIONS(491),
    [aux_sym__proxy_command_token1] = ACTIONS(491),
    [aux_sym__proxy_jump_token1] = ACTIONS(491),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(491),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(491),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(491),
    [aux_sym__rekey_limit_token1] = ACTIONS(491),
    [aux_sym__remote_command_token1] = ACTIONS(491),
    [aux_sym__remote_forward_token1] = ACTIONS(491),
    [aux_sym__request_tty_token1] = ACTIONS(491),
    [aux_sym__required_rsa_size_token1] = ACTIONS(491),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(491),
    [aux_sym__security_key_provider_token1] = ACTIONS(491),
    [aux_sym__send_env_token1] = ACTIONS(491),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(491),
    [aux_sym__server_alive_interval_token1] = ACTIONS(491),
    [aux_sym__session_type_token1] = ACTIONS(491),
    [aux_sym__stdin_null_token1] = ACTIONS(491),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(491),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(491),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(491),
    [aux_sym__syslog_facility_token1] = ACTIONS(491),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(491),
    [aux_sym__tag_token1] = ACTIONS(491),
    [aux_sym__tunnel_token1] = ACTIONS(493),
    [aux_sym__tunnel_device_token1] = ACTIONS(491),
    [aux_sym__update_host_keys_token1] = ACTIONS(491),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(491),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(491),
    [aux_sym__visual_host_key_token1] = ACTIONS(491),
    [aux_sym__xauth_location_token1] = ACTIONS(491),
    [sym_comment] = ACTIONS(491),
    [sym__space] = ACTIONS(491),
    [sym__eol] = ACTIONS(491),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(814),
    [aux_sym_host_declaration_token1] = ACTIONS(816),
    [aux_sym_match_declaration_token1] = ACTIONS(814),
    [aux_sym__match_user_token1] = ACTIONS(816),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(814),
    [aux_sym__address_family_token1] = ACTIONS(814),
    [aux_sym__batch_mode_token1] = ACTIONS(814),
    [aux_sym__bind_address_token1] = ACTIONS(814),
    [aux_sym__bind_interface_token1] = ACTIONS(814),
    [aux_sym__canonical_domains_token1] = ACTIONS(814),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(814),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(814),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(814),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(814),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(814),
    [aux_sym__certificate_file_token1] = ACTIONS(814),
    [aux_sym__check_host_ip_token1] = ACTIONS(814),
    [aux_sym__ciphers_token1] = ACTIONS(814),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(814),
    [aux_sym__compression_token1] = ACTIONS(814),
    [aux_sym__connection_attempts_token1] = ACTIONS(814),
    [aux_sym__connect_timeout_token1] = ACTIONS(814),
    [aux_sym__control_master_token1] = ACTIONS(814),
    [aux_sym__control_persist_token1] = ACTIONS(814),
    [aux_sym__control_path_token1] = ACTIONS(814),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(814),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(814),
    [aux_sym__escape_char_token1] = ACTIONS(814),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(814),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(814),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(814),
    [aux_sym__forward_agent_token1] = ACTIONS(814),
    [aux_sym__forward_x11_token1] = ACTIONS(816),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(814),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(814),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(814),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(814),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(814),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(814),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(814),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(814),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(814),
    [aux_sym__host_key_alias_token1] = ACTIONS(814),
    [aux_sym__hostname_token1] = ACTIONS(814),
    [aux_sym__identities_only_token1] = ACTIONS(814),
    [aux_sym__identity_agent_token1] = ACTIONS(814),
    [aux_sym__identity_file_token1] = ACTIONS(814),
    [aux_sym__ignore_unknown_token1] = ACTIONS(814),
    [aux_sym__ipqos_token1] = ACTIONS(814),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(814),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(814),
    [aux_sym__kex_algorithms_token1] = ACTIONS(814),
    [aux_sym__known_hosts_command_token1] = ACTIONS(814),
    [aux_sym__local_command_token1] = ACTIONS(814),
    [aux_sym__local_forward_token1] = ACTIONS(814),
    [aux_sym__log_level_token1] = ACTIONS(814),
    [aux_sym__log_verbose_token1] = ACTIONS(814),
    [aux_sym__macs_token1] = ACTIONS(814),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(814),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(814),
    [aux_sym__password_authentication_token1] = ACTIONS(814),
    [aux_sym__permit_local_command_token1] = ACTIONS(814),
    [aux_sym__permit_remote_open_token1] = ACTIONS(814),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(814),
    [aux_sym__port_token1] = ACTIONS(814),
    [aux_sym__preferred_authentications_token1] = ACTIONS(814),
    [aux_sym__proxy_command_token1] = ACTIONS(814),
    [aux_sym__proxy_jump_token1] = ACTIONS(814),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(814),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(814),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(814),
    [aux_sym__rekey_limit_token1] = ACTIONS(814),
    [aux_sym__remote_command_token1] = ACTIONS(814),
    [aux_sym__remote_forward_token1] = ACTIONS(814),
    [aux_sym__request_tty_token1] = ACTIONS(814),
    [aux_sym__required_rsa_size_token1] = ACTIONS(814),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(814),
    [aux_sym__security_key_provider_token1] = ACTIONS(814),
    [aux_sym__send_env_token1] = ACTIONS(814),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(814),
    [aux_sym__server_alive_interval_token1] = ACTIONS(814),
    [aux_sym__session_type_token1] = ACTIONS(814),
    [aux_sym__stdin_null_token1] = ACTIONS(814),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(814),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(814),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(814),
    [aux_sym__syslog_facility_token1] = ACTIONS(814),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(814),
    [aux_sym__tag_token1] = ACTIONS(814),
    [aux_sym__tunnel_token1] = ACTIONS(816),
    [aux_sym__tunnel_device_token1] = ACTIONS(814),
    [aux_sym__update_host_keys_token1] = ACTIONS(814),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(814),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(814),
    [aux_sym__visual_host_key_token1] = ACTIONS(814),
    [aux_sym__xauth_location_token1] = ACTIONS(814),
    [sym_comment] = ACTIONS(814),
    [sym__space] = ACTIONS(814),
    [sym__eol] = ACTIONS(814),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(818),
    [aux_sym_host_declaration_token1] = ACTIONS(820),
    [aux_sym_match_declaration_token1] = ACTIONS(818),
    [aux_sym__match_user_token1] = ACTIONS(820),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(818),
    [aux_sym__address_family_token1] = ACTIONS(818),
    [aux_sym__batch_mode_token1] = ACTIONS(818),
    [aux_sym__bind_address_token1] = ACTIONS(818),
    [aux_sym__bind_interface_token1] = ACTIONS(818),
    [aux_sym__canonical_domains_token1] = ACTIONS(818),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(818),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(818),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(818),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(818),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(818),
    [aux_sym__certificate_file_token1] = ACTIONS(818),
    [aux_sym__check_host_ip_token1] = ACTIONS(818),
    [aux_sym__ciphers_token1] = ACTIONS(818),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(818),
    [aux_sym__compression_token1] = ACTIONS(818),
    [aux_sym__connection_attempts_token1] = ACTIONS(818),
    [aux_sym__connect_timeout_token1] = ACTIONS(818),
    [aux_sym__control_master_token1] = ACTIONS(818),
    [aux_sym__control_persist_token1] = ACTIONS(818),
    [aux_sym__control_path_token1] = ACTIONS(818),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(818),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(818),
    [aux_sym__escape_char_token1] = ACTIONS(818),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(818),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(818),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(818),
    [aux_sym__forward_agent_token1] = ACTIONS(818),
    [aux_sym__forward_x11_token1] = ACTIONS(820),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(818),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(818),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(818),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(818),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(818),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(818),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(818),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(818),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(818),
    [aux_sym__host_key_alias_token1] = ACTIONS(818),
    [aux_sym__hostname_token1] = ACTIONS(818),
    [aux_sym__identities_only_token1] = ACTIONS(818),
    [aux_sym__identity_agent_token1] = ACTIONS(818),
    [aux_sym__identity_file_token1] = ACTIONS(818),
    [aux_sym__ignore_unknown_token1] = ACTIONS(818),
    [aux_sym__ipqos_token1] = ACTIONS(818),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(818),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(818),
    [aux_sym__kex_algorithms_token1] = ACTIONS(818),
    [aux_sym__known_hosts_command_token1] = ACTIONS(818),
    [aux_sym__local_command_token1] = ACTIONS(818),
    [aux_sym__local_forward_token1] = ACTIONS(818),
    [aux_sym__log_level_token1] = ACTIONS(818),
    [aux_sym__log_verbose_token1] = ACTIONS(818),
    [aux_sym__macs_token1] = ACTIONS(818),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(818),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(818),
    [aux_sym__password_authentication_token1] = ACTIONS(818),
    [aux_sym__permit_local_command_token1] = ACTIONS(818),
    [aux_sym__permit_remote_open_token1] = ACTIONS(818),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(818),
    [aux_sym__port_token1] = ACTIONS(818),
    [aux_sym__preferred_authentications_token1] = ACTIONS(818),
    [aux_sym__proxy_command_token1] = ACTIONS(818),
    [aux_sym__proxy_jump_token1] = ACTIONS(818),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(818),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(818),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(818),
    [aux_sym__rekey_limit_token1] = ACTIONS(818),
    [aux_sym__remote_command_token1] = ACTIONS(818),
    [aux_sym__remote_forward_token1] = ACTIONS(818),
    [aux_sym__request_tty_token1] = ACTIONS(818),
    [aux_sym__required_rsa_size_token1] = ACTIONS(818),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(818),
    [aux_sym__security_key_provider_token1] = ACTIONS(818),
    [aux_sym__send_env_token1] = ACTIONS(818),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(818),
    [aux_sym__server_alive_interval_token1] = ACTIONS(818),
    [aux_sym__session_type_token1] = ACTIONS(818),
    [aux_sym__stdin_null_token1] = ACTIONS(818),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(818),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(818),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(818),
    [aux_sym__syslog_facility_token1] = ACTIONS(818),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(818),
    [aux_sym__tag_token1] = ACTIONS(818),
    [aux_sym__tunnel_token1] = ACTIONS(820),
    [aux_sym__tunnel_device_token1] = ACTIONS(818),
    [aux_sym__update_host_keys_token1] = ACTIONS(818),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(818),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(818),
    [aux_sym__visual_host_key_token1] = ACTIONS(818),
    [aux_sym__xauth_location_token1] = ACTIONS(818),
    [sym_comment] = ACTIONS(818),
    [sym__space] = ACTIONS(818),
    [sym__eol] = ACTIONS(818),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(822),
    [aux_sym_host_declaration_token1] = ACTIONS(824),
    [aux_sym_match_declaration_token1] = ACTIONS(822),
    [aux_sym__match_user_token1] = ACTIONS(824),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(822),
    [aux_sym__address_family_token1] = ACTIONS(822),
    [aux_sym__batch_mode_token1] = ACTIONS(822),
    [aux_sym__bind_address_token1] = ACTIONS(822),
    [aux_sym__bind_interface_token1] = ACTIONS(822),
    [aux_sym__canonical_domains_token1] = ACTIONS(822),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(822),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(822),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(822),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(822),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(822),
    [aux_sym__certificate_file_token1] = ACTIONS(822),
    [aux_sym__check_host_ip_token1] = ACTIONS(822),
    [aux_sym__ciphers_token1] = ACTIONS(822),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(822),
    [aux_sym__compression_token1] = ACTIONS(822),
    [aux_sym__connection_attempts_token1] = ACTIONS(822),
    [aux_sym__connect_timeout_token1] = ACTIONS(822),
    [aux_sym__control_master_token1] = ACTIONS(822),
    [aux_sym__control_persist_token1] = ACTIONS(822),
    [aux_sym__control_path_token1] = ACTIONS(822),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(822),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(822),
    [aux_sym__escape_char_token1] = ACTIONS(822),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(822),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(822),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(822),
    [aux_sym__forward_agent_token1] = ACTIONS(822),
    [aux_sym__forward_x11_token1] = ACTIONS(824),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(822),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(822),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(822),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(822),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(822),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(822),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(822),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(822),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(822),
    [aux_sym__host_key_alias_token1] = ACTIONS(822),
    [aux_sym__hostname_token1] = ACTIONS(822),
    [aux_sym__identities_only_token1] = ACTIONS(822),
    [aux_sym__identity_agent_token1] = ACTIONS(822),
    [aux_sym__identity_file_token1] = ACTIONS(822),
    [aux_sym__ignore_unknown_token1] = ACTIONS(822),
    [aux_sym__ipqos_token1] = ACTIONS(822),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(822),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(822),
    [aux_sym__kex_algorithms_token1] = ACTIONS(822),
    [aux_sym__known_hosts_command_token1] = ACTIONS(822),
    [aux_sym__local_command_token1] = ACTIONS(822),
    [aux_sym__local_forward_token1] = ACTIONS(822),
    [aux_sym__log_level_token1] = ACTIONS(822),
    [aux_sym__log_verbose_token1] = ACTIONS(822),
    [aux_sym__macs_token1] = ACTIONS(822),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(822),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(822),
    [aux_sym__password_authentication_token1] = ACTIONS(822),
    [aux_sym__permit_local_command_token1] = ACTIONS(822),
    [aux_sym__permit_remote_open_token1] = ACTIONS(822),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(822),
    [aux_sym__port_token1] = ACTIONS(822),
    [aux_sym__preferred_authentications_token1] = ACTIONS(822),
    [aux_sym__proxy_command_token1] = ACTIONS(822),
    [aux_sym__proxy_jump_token1] = ACTIONS(822),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(822),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(822),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(822),
    [aux_sym__rekey_limit_token1] = ACTIONS(822),
    [aux_sym__remote_command_token1] = ACTIONS(822),
    [aux_sym__remote_forward_token1] = ACTIONS(822),
    [aux_sym__request_tty_token1] = ACTIONS(822),
    [aux_sym__required_rsa_size_token1] = ACTIONS(822),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(822),
    [aux_sym__security_key_provider_token1] = ACTIONS(822),
    [aux_sym__send_env_token1] = ACTIONS(822),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(822),
    [aux_sym__server_alive_interval_token1] = ACTIONS(822),
    [aux_sym__session_type_token1] = ACTIONS(822),
    [aux_sym__stdin_null_token1] = ACTIONS(822),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(822),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(822),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(822),
    [aux_sym__syslog_facility_token1] = ACTIONS(822),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(822),
    [aux_sym__tag_token1] = ACTIONS(822),
    [aux_sym__tunnel_token1] = ACTIONS(824),
    [aux_sym__tunnel_device_token1] = ACTIONS(822),
    [aux_sym__update_host_keys_token1] = ACTIONS(822),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(822),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(822),
    [aux_sym__visual_host_key_token1] = ACTIONS(822),
    [aux_sym__xauth_location_token1] = ACTIONS(822),
    [sym_comment] = ACTIONS(822),
    [sym__space] = ACTIONS(822),
    [sym__eol] = ACTIONS(822),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(826),
    [aux_sym_host_declaration_token1] = ACTIONS(828),
    [aux_sym_match_declaration_token1] = ACTIONS(826),
    [aux_sym__match_user_token1] = ACTIONS(828),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(826),
    [aux_sym__address_family_token1] = ACTIONS(826),
    [aux_sym__batch_mode_token1] = ACTIONS(826),
    [aux_sym__bind_address_token1] = ACTIONS(826),
    [aux_sym__bind_interface_token1] = ACTIONS(826),
    [aux_sym__canonical_domains_token1] = ACTIONS(826),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(826),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(826),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(826),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(826),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(826),
    [aux_sym__certificate_file_token1] = ACTIONS(826),
    [aux_sym__check_host_ip_token1] = ACTIONS(826),
    [aux_sym__ciphers_token1] = ACTIONS(826),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(826),
    [aux_sym__compression_token1] = ACTIONS(826),
    [aux_sym__connection_attempts_token1] = ACTIONS(826),
    [aux_sym__connect_timeout_token1] = ACTIONS(826),
    [aux_sym__control_master_token1] = ACTIONS(826),
    [aux_sym__control_persist_token1] = ACTIONS(826),
    [aux_sym__control_path_token1] = ACTIONS(826),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(826),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(826),
    [aux_sym__escape_char_token1] = ACTIONS(826),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(826),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(826),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(826),
    [aux_sym__forward_agent_token1] = ACTIONS(826),
    [aux_sym__forward_x11_token1] = ACTIONS(828),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(826),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(826),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(826),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(826),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(826),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(826),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(826),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(826),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(826),
    [aux_sym__host_key_alias_token1] = ACTIONS(826),
    [aux_sym__hostname_token1] = ACTIONS(826),
    [aux_sym__identities_only_token1] = ACTIONS(826),
    [aux_sym__identity_agent_token1] = ACTIONS(826),
    [aux_sym__identity_file_token1] = ACTIONS(826),
    [aux_sym__ignore_unknown_token1] = ACTIONS(826),
    [aux_sym__ipqos_token1] = ACTIONS(826),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(826),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(826),
    [aux_sym__kex_algorithms_token1] = ACTIONS(826),
    [aux_sym__known_hosts_command_token1] = ACTIONS(826),
    [aux_sym__local_command_token1] = ACTIONS(826),
    [aux_sym__local_forward_token1] = ACTIONS(826),
    [aux_sym__log_level_token1] = ACTIONS(826),
    [aux_sym__log_verbose_token1] = ACTIONS(826),
    [aux_sym__macs_token1] = ACTIONS(826),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(826),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(826),
    [aux_sym__password_authentication_token1] = ACTIONS(826),
    [aux_sym__permit_local_command_token1] = ACTIONS(826),
    [aux_sym__permit_remote_open_token1] = ACTIONS(826),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(826),
    [aux_sym__port_token1] = ACTIONS(826),
    [aux_sym__preferred_authentications_token1] = ACTIONS(826),
    [aux_sym__proxy_command_token1] = ACTIONS(826),
    [aux_sym__proxy_jump_token1] = ACTIONS(826),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(826),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(826),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(826),
    [aux_sym__rekey_limit_token1] = ACTIONS(826),
    [aux_sym__remote_command_token1] = ACTIONS(826),
    [aux_sym__remote_forward_token1] = ACTIONS(826),
    [aux_sym__request_tty_token1] = ACTIONS(826),
    [aux_sym__required_rsa_size_token1] = ACTIONS(826),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(826),
    [aux_sym__security_key_provider_token1] = ACTIONS(826),
    [aux_sym__send_env_token1] = ACTIONS(826),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(826),
    [aux_sym__server_alive_interval_token1] = ACTIONS(826),
    [aux_sym__session_type_token1] = ACTIONS(826),
    [aux_sym__stdin_null_token1] = ACTIONS(826),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(826),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(826),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(826),
    [aux_sym__syslog_facility_token1] = ACTIONS(826),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(826),
    [aux_sym__tag_token1] = ACTIONS(826),
    [aux_sym__tunnel_token1] = ACTIONS(828),
    [aux_sym__tunnel_device_token1] = ACTIONS(826),
    [aux_sym__update_host_keys_token1] = ACTIONS(826),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(826),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(826),
    [aux_sym__visual_host_key_token1] = ACTIONS(826),
    [aux_sym__xauth_location_token1] = ACTIONS(826),
    [sym_comment] = ACTIONS(826),
    [sym__space] = ACTIONS(826),
    [sym__eol] = ACTIONS(826),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(830),
    [aux_sym_host_declaration_token1] = ACTIONS(832),
    [aux_sym_match_declaration_token1] = ACTIONS(830),
    [aux_sym__match_user_token1] = ACTIONS(832),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(830),
    [aux_sym__address_family_token1] = ACTIONS(830),
    [aux_sym__batch_mode_token1] = ACTIONS(830),
    [aux_sym__bind_address_token1] = ACTIONS(830),
    [aux_sym__bind_interface_token1] = ACTIONS(830),
    [aux_sym__canonical_domains_token1] = ACTIONS(830),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(830),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(830),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(830),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(830),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(830),
    [aux_sym__certificate_file_token1] = ACTIONS(830),
    [aux_sym__check_host_ip_token1] = ACTIONS(830),
    [aux_sym__ciphers_token1] = ACTIONS(830),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(830),
    [aux_sym__compression_token1] = ACTIONS(830),
    [aux_sym__connection_attempts_token1] = ACTIONS(830),
    [aux_sym__connect_timeout_token1] = ACTIONS(830),
    [aux_sym__control_master_token1] = ACTIONS(830),
    [aux_sym__control_persist_token1] = ACTIONS(830),
    [aux_sym__control_path_token1] = ACTIONS(830),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(830),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(830),
    [aux_sym__escape_char_token1] = ACTIONS(830),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(830),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(830),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(830),
    [aux_sym__forward_agent_token1] = ACTIONS(830),
    [aux_sym__forward_x11_token1] = ACTIONS(832),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(830),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(830),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(830),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(830),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(830),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(830),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(830),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(830),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(830),
    [aux_sym__host_key_alias_token1] = ACTIONS(830),
    [aux_sym__hostname_token1] = ACTIONS(830),
    [aux_sym__identities_only_token1] = ACTIONS(830),
    [aux_sym__identity_agent_token1] = ACTIONS(830),
    [aux_sym__identity_file_token1] = ACTIONS(830),
    [aux_sym__ignore_unknown_token1] = ACTIONS(830),
    [aux_sym__ipqos_token1] = ACTIONS(830),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(830),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(830),
    [aux_sym__kex_algorithms_token1] = ACTIONS(830),
    [aux_sym__known_hosts_command_token1] = ACTIONS(830),
    [aux_sym__local_command_token1] = ACTIONS(830),
    [aux_sym__local_forward_token1] = ACTIONS(830),
    [aux_sym__log_level_token1] = ACTIONS(830),
    [aux_sym__log_verbose_token1] = ACTIONS(830),
    [aux_sym__macs_token1] = ACTIONS(830),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(830),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(830),
    [aux_sym__password_authentication_token1] = ACTIONS(830),
    [aux_sym__permit_local_command_token1] = ACTIONS(830),
    [aux_sym__permit_remote_open_token1] = ACTIONS(830),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(830),
    [aux_sym__port_token1] = ACTIONS(830),
    [aux_sym__preferred_authentications_token1] = ACTIONS(830),
    [aux_sym__proxy_command_token1] = ACTIONS(830),
    [aux_sym__proxy_jump_token1] = ACTIONS(830),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(830),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(830),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(830),
    [aux_sym__rekey_limit_token1] = ACTIONS(830),
    [aux_sym__remote_command_token1] = ACTIONS(830),
    [aux_sym__remote_forward_token1] = ACTIONS(830),
    [aux_sym__request_tty_token1] = ACTIONS(830),
    [aux_sym__required_rsa_size_token1] = ACTIONS(830),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(830),
    [aux_sym__security_key_provider_token1] = ACTIONS(830),
    [aux_sym__send_env_token1] = ACTIONS(830),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(830),
    [aux_sym__server_alive_interval_token1] = ACTIONS(830),
    [aux_sym__session_type_token1] = ACTIONS(830),
    [aux_sym__stdin_null_token1] = ACTIONS(830),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(830),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(830),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(830),
    [aux_sym__syslog_facility_token1] = ACTIONS(830),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(830),
    [aux_sym__tag_token1] = ACTIONS(830),
    [aux_sym__tunnel_token1] = ACTIONS(832),
    [aux_sym__tunnel_device_token1] = ACTIONS(830),
    [aux_sym__update_host_keys_token1] = ACTIONS(830),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(830),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(830),
    [aux_sym__visual_host_key_token1] = ACTIONS(830),
    [aux_sym__xauth_location_token1] = ACTIONS(830),
    [sym_comment] = ACTIONS(830),
    [sym__space] = ACTIONS(830),
    [sym__eol] = ACTIONS(830),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(834),
    [aux_sym_host_declaration_token1] = ACTIONS(836),
    [aux_sym_match_declaration_token1] = ACTIONS(834),
    [aux_sym__match_user_token1] = ACTIONS(836),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(834),
    [aux_sym__address_family_token1] = ACTIONS(834),
    [aux_sym__batch_mode_token1] = ACTIONS(834),
    [aux_sym__bind_address_token1] = ACTIONS(834),
    [aux_sym__bind_interface_token1] = ACTIONS(834),
    [aux_sym__canonical_domains_token1] = ACTIONS(834),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(834),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(834),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(834),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(834),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(834),
    [aux_sym__certificate_file_token1] = ACTIONS(834),
    [aux_sym__check_host_ip_token1] = ACTIONS(834),
    [aux_sym__ciphers_token1] = ACTIONS(834),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(834),
    [aux_sym__compression_token1] = ACTIONS(834),
    [aux_sym__connection_attempts_token1] = ACTIONS(834),
    [aux_sym__connect_timeout_token1] = ACTIONS(834),
    [aux_sym__control_master_token1] = ACTIONS(834),
    [aux_sym__control_persist_token1] = ACTIONS(834),
    [aux_sym__control_path_token1] = ACTIONS(834),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(834),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(834),
    [aux_sym__escape_char_token1] = ACTIONS(834),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(834),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(834),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(834),
    [aux_sym__forward_agent_token1] = ACTIONS(834),
    [aux_sym__forward_x11_token1] = ACTIONS(836),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(834),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(834),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(834),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(834),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(834),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(834),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(834),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(834),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(834),
    [aux_sym__host_key_alias_token1] = ACTIONS(834),
    [aux_sym__hostname_token1] = ACTIONS(834),
    [aux_sym__identities_only_token1] = ACTIONS(834),
    [aux_sym__identity_agent_token1] = ACTIONS(834),
    [aux_sym__identity_file_token1] = ACTIONS(834),
    [aux_sym__ignore_unknown_token1] = ACTIONS(834),
    [aux_sym__ipqos_token1] = ACTIONS(834),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(834),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(834),
    [aux_sym__kex_algorithms_token1] = ACTIONS(834),
    [aux_sym__known_hosts_command_token1] = ACTIONS(834),
    [aux_sym__local_command_token1] = ACTIONS(834),
    [aux_sym__local_forward_token1] = ACTIONS(834),
    [aux_sym__log_level_token1] = ACTIONS(834),
    [aux_sym__log_verbose_token1] = ACTIONS(834),
    [aux_sym__macs_token1] = ACTIONS(834),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(834),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(834),
    [aux_sym__password_authentication_token1] = ACTIONS(834),
    [aux_sym__permit_local_command_token1] = ACTIONS(834),
    [aux_sym__permit_remote_open_token1] = ACTIONS(834),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(834),
    [aux_sym__port_token1] = ACTIONS(834),
    [aux_sym__preferred_authentications_token1] = ACTIONS(834),
    [aux_sym__proxy_command_token1] = ACTIONS(834),
    [aux_sym__proxy_jump_token1] = ACTIONS(834),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(834),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(834),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(834),
    [aux_sym__rekey_limit_token1] = ACTIONS(834),
    [aux_sym__remote_command_token1] = ACTIONS(834),
    [aux_sym__remote_forward_token1] = ACTIONS(834),
    [aux_sym__request_tty_token1] = ACTIONS(834),
    [aux_sym__required_rsa_size_token1] = ACTIONS(834),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(834),
    [aux_sym__security_key_provider_token1] = ACTIONS(834),
    [aux_sym__send_env_token1] = ACTIONS(834),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(834),
    [aux_sym__server_alive_interval_token1] = ACTIONS(834),
    [aux_sym__session_type_token1] = ACTIONS(834),
    [aux_sym__stdin_null_token1] = ACTIONS(834),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(834),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(834),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(834),
    [aux_sym__syslog_facility_token1] = ACTIONS(834),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(834),
    [aux_sym__tag_token1] = ACTIONS(834),
    [aux_sym__tunnel_token1] = ACTIONS(836),
    [aux_sym__tunnel_device_token1] = ACTIONS(834),
    [aux_sym__update_host_keys_token1] = ACTIONS(834),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(834),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(834),
    [aux_sym__visual_host_key_token1] = ACTIONS(834),
    [aux_sym__xauth_location_token1] = ACTIONS(834),
    [sym_comment] = ACTIONS(834),
    [sym__space] = ACTIONS(834),
    [sym__eol] = ACTIONS(834),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(838),
    [aux_sym_host_declaration_token1] = ACTIONS(840),
    [aux_sym_match_declaration_token1] = ACTIONS(838),
    [aux_sym__match_user_token1] = ACTIONS(840),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(838),
    [aux_sym__address_family_token1] = ACTIONS(838),
    [aux_sym__batch_mode_token1] = ACTIONS(838),
    [aux_sym__bind_address_token1] = ACTIONS(838),
    [aux_sym__bind_interface_token1] = ACTIONS(838),
    [aux_sym__canonical_domains_token1] = ACTIONS(838),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(838),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(838),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(838),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(838),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(838),
    [aux_sym__certificate_file_token1] = ACTIONS(838),
    [aux_sym__check_host_ip_token1] = ACTIONS(838),
    [aux_sym__ciphers_token1] = ACTIONS(838),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(838),
    [aux_sym__compression_token1] = ACTIONS(838),
    [aux_sym__connection_attempts_token1] = ACTIONS(838),
    [aux_sym__connect_timeout_token1] = ACTIONS(838),
    [aux_sym__control_master_token1] = ACTIONS(838),
    [aux_sym__control_persist_token1] = ACTIONS(838),
    [aux_sym__control_path_token1] = ACTIONS(838),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(838),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(838),
    [aux_sym__escape_char_token1] = ACTIONS(838),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(838),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(838),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(838),
    [aux_sym__forward_agent_token1] = ACTIONS(838),
    [aux_sym__forward_x11_token1] = ACTIONS(840),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(838),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(838),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(838),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(838),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(838),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(838),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(838),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(838),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(838),
    [aux_sym__host_key_alias_token1] = ACTIONS(838),
    [aux_sym__hostname_token1] = ACTIONS(838),
    [aux_sym__identities_only_token1] = ACTIONS(838),
    [aux_sym__identity_agent_token1] = ACTIONS(838),
    [aux_sym__identity_file_token1] = ACTIONS(838),
    [aux_sym__ignore_unknown_token1] = ACTIONS(838),
    [aux_sym__ipqos_token1] = ACTIONS(838),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(838),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(838),
    [aux_sym__kex_algorithms_token1] = ACTIONS(838),
    [aux_sym__known_hosts_command_token1] = ACTIONS(838),
    [aux_sym__local_command_token1] = ACTIONS(838),
    [aux_sym__local_forward_token1] = ACTIONS(838),
    [aux_sym__log_level_token1] = ACTIONS(838),
    [aux_sym__log_verbose_token1] = ACTIONS(838),
    [aux_sym__macs_token1] = ACTIONS(838),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(838),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(838),
    [aux_sym__password_authentication_token1] = ACTIONS(838),
    [aux_sym__permit_local_command_token1] = ACTIONS(838),
    [aux_sym__permit_remote_open_token1] = ACTIONS(838),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(838),
    [aux_sym__port_token1] = ACTIONS(838),
    [aux_sym__preferred_authentications_token1] = ACTIONS(838),
    [aux_sym__proxy_command_token1] = ACTIONS(838),
    [aux_sym__proxy_jump_token1] = ACTIONS(838),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(838),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(838),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(838),
    [aux_sym__rekey_limit_token1] = ACTIONS(838),
    [aux_sym__remote_command_token1] = ACTIONS(838),
    [aux_sym__remote_forward_token1] = ACTIONS(838),
    [aux_sym__request_tty_token1] = ACTIONS(838),
    [aux_sym__required_rsa_size_token1] = ACTIONS(838),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(838),
    [aux_sym__security_key_provider_token1] = ACTIONS(838),
    [aux_sym__send_env_token1] = ACTIONS(838),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(838),
    [aux_sym__server_alive_interval_token1] = ACTIONS(838),
    [aux_sym__session_type_token1] = ACTIONS(838),
    [aux_sym__stdin_null_token1] = ACTIONS(838),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(838),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(838),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(838),
    [aux_sym__syslog_facility_token1] = ACTIONS(838),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(838),
    [aux_sym__tag_token1] = ACTIONS(838),
    [aux_sym__tunnel_token1] = ACTIONS(840),
    [aux_sym__tunnel_device_token1] = ACTIONS(838),
    [aux_sym__update_host_keys_token1] = ACTIONS(838),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(838),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(838),
    [aux_sym__visual_host_key_token1] = ACTIONS(838),
    [aux_sym__xauth_location_token1] = ACTIONS(838),
    [sym_comment] = ACTIONS(838),
    [sym__space] = ACTIONS(838),
    [sym__eol] = ACTIONS(838),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(842),
    [aux_sym_host_declaration_token1] = ACTIONS(844),
    [aux_sym_match_declaration_token1] = ACTIONS(842),
    [aux_sym__match_user_token1] = ACTIONS(844),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(842),
    [aux_sym__address_family_token1] = ACTIONS(842),
    [aux_sym__batch_mode_token1] = ACTIONS(842),
    [aux_sym__bind_address_token1] = ACTIONS(842),
    [aux_sym__bind_interface_token1] = ACTIONS(842),
    [aux_sym__canonical_domains_token1] = ACTIONS(842),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(842),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(842),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(842),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(842),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(842),
    [aux_sym__certificate_file_token1] = ACTIONS(842),
    [aux_sym__check_host_ip_token1] = ACTIONS(842),
    [aux_sym__ciphers_token1] = ACTIONS(842),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(842),
    [aux_sym__compression_token1] = ACTIONS(842),
    [aux_sym__connection_attempts_token1] = ACTIONS(842),
    [aux_sym__connect_timeout_token1] = ACTIONS(842),
    [aux_sym__control_master_token1] = ACTIONS(842),
    [aux_sym__control_persist_token1] = ACTIONS(842),
    [aux_sym__control_path_token1] = ACTIONS(842),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(842),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(842),
    [aux_sym__escape_char_token1] = ACTIONS(842),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(842),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(842),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(842),
    [aux_sym__forward_agent_token1] = ACTIONS(842),
    [aux_sym__forward_x11_token1] = ACTIONS(844),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(842),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(842),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(842),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(842),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(842),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(842),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(842),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(842),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(842),
    [aux_sym__host_key_alias_token1] = ACTIONS(842),
    [aux_sym__hostname_token1] = ACTIONS(842),
    [aux_sym__identities_only_token1] = ACTIONS(842),
    [aux_sym__identity_agent_token1] = ACTIONS(842),
    [aux_sym__identity_file_token1] = ACTIONS(842),
    [aux_sym__ignore_unknown_token1] = ACTIONS(842),
    [aux_sym__ipqos_token1] = ACTIONS(842),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(842),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(842),
    [aux_sym__kex_algorithms_token1] = ACTIONS(842),
    [aux_sym__known_hosts_command_token1] = ACTIONS(842),
    [aux_sym__local_command_token1] = ACTIONS(842),
    [aux_sym__local_forward_token1] = ACTIONS(842),
    [aux_sym__log_level_token1] = ACTIONS(842),
    [aux_sym__log_verbose_token1] = ACTIONS(842),
    [aux_sym__macs_token1] = ACTIONS(842),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(842),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(842),
    [aux_sym__password_authentication_token1] = ACTIONS(842),
    [aux_sym__permit_local_command_token1] = ACTIONS(842),
    [aux_sym__permit_remote_open_token1] = ACTIONS(842),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(842),
    [aux_sym__port_token1] = ACTIONS(842),
    [aux_sym__preferred_authentications_token1] = ACTIONS(842),
    [aux_sym__proxy_command_token1] = ACTIONS(842),
    [aux_sym__proxy_jump_token1] = ACTIONS(842),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(842),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(842),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(842),
    [aux_sym__rekey_limit_token1] = ACTIONS(842),
    [aux_sym__remote_command_token1] = ACTIONS(842),
    [aux_sym__remote_forward_token1] = ACTIONS(842),
    [aux_sym__request_tty_token1] = ACTIONS(842),
    [aux_sym__required_rsa_size_token1] = ACTIONS(842),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(842),
    [aux_sym__security_key_provider_token1] = ACTIONS(842),
    [aux_sym__send_env_token1] = ACTIONS(842),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(842),
    [aux_sym__server_alive_interval_token1] = ACTIONS(842),
    [aux_sym__session_type_token1] = ACTIONS(842),
    [aux_sym__stdin_null_token1] = ACTIONS(842),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(842),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(842),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(842),
    [aux_sym__syslog_facility_token1] = ACTIONS(842),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(842),
    [aux_sym__tag_token1] = ACTIONS(842),
    [aux_sym__tunnel_token1] = ACTIONS(844),
    [aux_sym__tunnel_device_token1] = ACTIONS(842),
    [aux_sym__update_host_keys_token1] = ACTIONS(842),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(842),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(842),
    [aux_sym__visual_host_key_token1] = ACTIONS(842),
    [aux_sym__xauth_location_token1] = ACTIONS(842),
    [sym_comment] = ACTIONS(842),
    [sym__space] = ACTIONS(842),
    [sym__eol] = ACTIONS(842),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(846),
    [aux_sym_host_declaration_token1] = ACTIONS(848),
    [aux_sym_match_declaration_token1] = ACTIONS(846),
    [aux_sym__match_user_token1] = ACTIONS(848),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(846),
    [aux_sym__address_family_token1] = ACTIONS(846),
    [aux_sym__batch_mode_token1] = ACTIONS(846),
    [aux_sym__bind_address_token1] = ACTIONS(846),
    [aux_sym__bind_interface_token1] = ACTIONS(846),
    [aux_sym__canonical_domains_token1] = ACTIONS(846),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(846),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(846),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(846),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(846),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(846),
    [aux_sym__certificate_file_token1] = ACTIONS(846),
    [aux_sym__check_host_ip_token1] = ACTIONS(846),
    [aux_sym__ciphers_token1] = ACTIONS(846),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(846),
    [aux_sym__compression_token1] = ACTIONS(846),
    [aux_sym__connection_attempts_token1] = ACTIONS(846),
    [aux_sym__connect_timeout_token1] = ACTIONS(846),
    [aux_sym__control_master_token1] = ACTIONS(846),
    [aux_sym__control_persist_token1] = ACTIONS(846),
    [aux_sym__control_path_token1] = ACTIONS(846),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(846),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(846),
    [aux_sym__escape_char_token1] = ACTIONS(846),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(846),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(846),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(846),
    [aux_sym__forward_agent_token1] = ACTIONS(846),
    [aux_sym__forward_x11_token1] = ACTIONS(848),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(846),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(846),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(846),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(846),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(846),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(846),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(846),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(846),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(846),
    [aux_sym__host_key_alias_token1] = ACTIONS(846),
    [aux_sym__hostname_token1] = ACTIONS(846),
    [aux_sym__identities_only_token1] = ACTIONS(846),
    [aux_sym__identity_agent_token1] = ACTIONS(846),
    [aux_sym__identity_file_token1] = ACTIONS(846),
    [aux_sym__ignore_unknown_token1] = ACTIONS(846),
    [aux_sym__ipqos_token1] = ACTIONS(846),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(846),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(846),
    [aux_sym__kex_algorithms_token1] = ACTIONS(846),
    [aux_sym__known_hosts_command_token1] = ACTIONS(846),
    [aux_sym__local_command_token1] = ACTIONS(846),
    [aux_sym__local_forward_token1] = ACTIONS(846),
    [aux_sym__log_level_token1] = ACTIONS(846),
    [aux_sym__log_verbose_token1] = ACTIONS(846),
    [aux_sym__macs_token1] = ACTIONS(846),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(846),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(846),
    [aux_sym__password_authentication_token1] = ACTIONS(846),
    [aux_sym__permit_local_command_token1] = ACTIONS(846),
    [aux_sym__permit_remote_open_token1] = ACTIONS(846),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(846),
    [aux_sym__port_token1] = ACTIONS(846),
    [aux_sym__preferred_authentications_token1] = ACTIONS(846),
    [aux_sym__proxy_command_token1] = ACTIONS(846),
    [aux_sym__proxy_jump_token1] = ACTIONS(846),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(846),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(846),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(846),
    [aux_sym__rekey_limit_token1] = ACTIONS(846),
    [aux_sym__remote_command_token1] = ACTIONS(846),
    [aux_sym__remote_forward_token1] = ACTIONS(846),
    [aux_sym__request_tty_token1] = ACTIONS(846),
    [aux_sym__required_rsa_size_token1] = ACTIONS(846),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(846),
    [aux_sym__security_key_provider_token1] = ACTIONS(846),
    [aux_sym__send_env_token1] = ACTIONS(846),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(846),
    [aux_sym__server_alive_interval_token1] = ACTIONS(846),
    [aux_sym__session_type_token1] = ACTIONS(846),
    [aux_sym__stdin_null_token1] = ACTIONS(846),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(846),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(846),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(846),
    [aux_sym__syslog_facility_token1] = ACTIONS(846),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(846),
    [aux_sym__tag_token1] = ACTIONS(846),
    [aux_sym__tunnel_token1] = ACTIONS(848),
    [aux_sym__tunnel_device_token1] = ACTIONS(846),
    [aux_sym__update_host_keys_token1] = ACTIONS(846),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(846),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(846),
    [aux_sym__visual_host_key_token1] = ACTIONS(846),
    [aux_sym__xauth_location_token1] = ACTIONS(846),
    [sym_comment] = ACTIONS(846),
    [sym__space] = ACTIONS(846),
    [sym__eol] = ACTIONS(846),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(850),
    [aux_sym_host_declaration_token1] = ACTIONS(852),
    [aux_sym_match_declaration_token1] = ACTIONS(850),
    [aux_sym__match_user_token1] = ACTIONS(852),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(850),
    [aux_sym__address_family_token1] = ACTIONS(850),
    [aux_sym__batch_mode_token1] = ACTIONS(850),
    [aux_sym__bind_address_token1] = ACTIONS(850),
    [aux_sym__bind_interface_token1] = ACTIONS(850),
    [aux_sym__canonical_domains_token1] = ACTIONS(850),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(850),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(850),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(850),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(850),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(850),
    [aux_sym__certificate_file_token1] = ACTIONS(850),
    [aux_sym__check_host_ip_token1] = ACTIONS(850),
    [aux_sym__ciphers_token1] = ACTIONS(850),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(850),
    [aux_sym__compression_token1] = ACTIONS(850),
    [aux_sym__connection_attempts_token1] = ACTIONS(850),
    [aux_sym__connect_timeout_token1] = ACTIONS(850),
    [aux_sym__control_master_token1] = ACTIONS(850),
    [aux_sym__control_persist_token1] = ACTIONS(850),
    [aux_sym__control_path_token1] = ACTIONS(850),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(850),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(850),
    [aux_sym__escape_char_token1] = ACTIONS(850),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(850),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(850),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(850),
    [aux_sym__forward_agent_token1] = ACTIONS(850),
    [aux_sym__forward_x11_token1] = ACTIONS(852),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(850),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(850),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(850),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(850),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(850),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(850),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(850),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(850),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(850),
    [aux_sym__host_key_alias_token1] = ACTIONS(850),
    [aux_sym__hostname_token1] = ACTIONS(850),
    [aux_sym__identities_only_token1] = ACTIONS(850),
    [aux_sym__identity_agent_token1] = ACTIONS(850),
    [aux_sym__identity_file_token1] = ACTIONS(850),
    [aux_sym__ignore_unknown_token1] = ACTIONS(850),
    [aux_sym__ipqos_token1] = ACTIONS(850),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(850),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(850),
    [aux_sym__kex_algorithms_token1] = ACTIONS(850),
    [aux_sym__known_hosts_command_token1] = ACTIONS(850),
    [aux_sym__local_command_token1] = ACTIONS(850),
    [aux_sym__local_forward_token1] = ACTIONS(850),
    [aux_sym__log_level_token1] = ACTIONS(850),
    [aux_sym__log_verbose_token1] = ACTIONS(850),
    [aux_sym__macs_token1] = ACTIONS(850),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(850),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(850),
    [aux_sym__password_authentication_token1] = ACTIONS(850),
    [aux_sym__permit_local_command_token1] = ACTIONS(850),
    [aux_sym__permit_remote_open_token1] = ACTIONS(850),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(850),
    [aux_sym__port_token1] = ACTIONS(850),
    [aux_sym__preferred_authentications_token1] = ACTIONS(850),
    [aux_sym__proxy_command_token1] = ACTIONS(850),
    [aux_sym__proxy_jump_token1] = ACTIONS(850),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(850),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(850),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(850),
    [aux_sym__rekey_limit_token1] = ACTIONS(850),
    [aux_sym__remote_command_token1] = ACTIONS(850),
    [aux_sym__remote_forward_token1] = ACTIONS(850),
    [aux_sym__request_tty_token1] = ACTIONS(850),
    [aux_sym__required_rsa_size_token1] = ACTIONS(850),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(850),
    [aux_sym__security_key_provider_token1] = ACTIONS(850),
    [aux_sym__send_env_token1] = ACTIONS(850),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(850),
    [aux_sym__server_alive_interval_token1] = ACTIONS(850),
    [aux_sym__session_type_token1] = ACTIONS(850),
    [aux_sym__stdin_null_token1] = ACTIONS(850),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(850),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(850),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(850),
    [aux_sym__syslog_facility_token1] = ACTIONS(850),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(850),
    [aux_sym__tag_token1] = ACTIONS(850),
    [aux_sym__tunnel_token1] = ACTIONS(852),
    [aux_sym__tunnel_device_token1] = ACTIONS(850),
    [aux_sym__update_host_keys_token1] = ACTIONS(850),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(850),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(850),
    [aux_sym__visual_host_key_token1] = ACTIONS(850),
    [aux_sym__xauth_location_token1] = ACTIONS(850),
    [sym_comment] = ACTIONS(850),
    [sym__space] = ACTIONS(850),
    [sym__eol] = ACTIONS(850),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(854), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(856), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(858), 1,
      aux_sym__match_final_token1,
    ACTIONS(860), 1,
      aux_sym__match_exec_token1,
    ACTIONS(862), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(864), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(866), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(868), 1,
      aux_sym__match_user_token1,
    ACTIONS(870), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(872), 1,
      sym__space,
    ACTIONS(874), 1,
      sym__eol,
    STATE(40), 1,
      aux_sym_match_declaration_repeat1,
    STATE(67), 1,
      sym__match_user,
    STATE(69), 1,
      sym__match_originalhost,
    STATE(70), 1,
      sym__match_tagged,
    STATE(71), 1,
      sym__match_localuser,
    STATE(72), 1,
      sym__match_localnetwork,
    STATE(73), 1,
      sym__match_host,
    STATE(75), 1,
      sym__match_final,
    STATE(82), 1,
      sym__match_exec,
    STATE(84), 1,
      sym__match_canonical,
  [64] = 21,
    ACTIONS(854), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(856), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(858), 1,
      aux_sym__match_final_token1,
    ACTIONS(860), 1,
      aux_sym__match_exec_token1,
    ACTIONS(862), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(864), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(866), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(868), 1,
      aux_sym__match_user_token1,
    ACTIONS(870), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(876), 1,
      aux_sym__all_token1,
    STATE(38), 1,
      aux_sym_match_declaration_repeat1,
    STATE(67), 1,
      sym__match_user,
    STATE(69), 1,
      sym__match_originalhost,
    STATE(70), 1,
      sym__match_tagged,
    STATE(71), 1,
      sym__match_localuser,
    STATE(72), 1,
      sym__match_localnetwork,
    STATE(73), 1,
      sym__match_host,
    STATE(75), 1,
      sym__match_final,
    STATE(82), 1,
      sym__match_exec,
    STATE(84), 1,
      sym__match_canonical,
    STATE(525), 1,
      sym__all,
  [128] = 20,
    ACTIONS(878), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(881), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(884), 1,
      aux_sym__match_final_token1,
    ACTIONS(887), 1,
      aux_sym__match_exec_token1,
    ACTIONS(890), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(893), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(896), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(899), 1,
      aux_sym__match_user_token1,
    ACTIONS(902), 1,
      aux_sym__match_localuser_token1,
    STATE(40), 1,
      aux_sym_match_declaration_repeat1,
    STATE(67), 1,
      sym__match_user,
    STATE(69), 1,
      sym__match_originalhost,
    STATE(70), 1,
      sym__match_tagged,
    STATE(71), 1,
      sym__match_localuser,
    STATE(72), 1,
      sym__match_localnetwork,
    STATE(73), 1,
      sym__match_host,
    STATE(75), 1,
      sym__match_final,
    STATE(82), 1,
      sym__match_exec,
    STATE(84), 1,
      sym__match_canonical,
    ACTIONS(905), 2,
      sym__space,
      sym__eol,
  [190] = 6,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__match_value_repeat1,
    STATE(56), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(907), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [220] = 6,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__match_value_repeat1,
    STATE(52), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(915), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [250] = 4,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    STATE(45), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(917), 12,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      anon_sym_COMMA,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [275] = 4,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    STATE(45), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(919), 12,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      anon_sym_COMMA,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [300] = 4,
    ACTIONS(923), 1,
      aux_sym__match_exec_token2,
    STATE(45), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(926), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(921), 12,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      anon_sym_COMMA,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [325] = 2,
    ACTIONS(931), 1,
      aux_sym__match_exec_token2,
    ACTIONS(929), 14,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      anon_sym_COMMA,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [345] = 5,
    ACTIONS(935), 1,
      aux_sym__match_exec_token2,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    STATE(47), 1,
      aux_sym__match_exec_repeat1,
    STATE(51), 1,
      sym__file_token,
    ACTIONS(933), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [371] = 5,
    ACTIONS(943), 1,
      aux_sym__match_exec_token2,
    ACTIONS(945), 1,
      aux_sym__file_token_token1,
    STATE(47), 1,
      aux_sym__match_exec_repeat1,
    STATE(51), 1,
      sym__file_token,
    ACTIONS(941), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [397] = 11,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(953), 1,
      anon_sym_STAR,
    ACTIONS(955), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(957), 1,
      sym__number,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(777), 1,
      sym_string,
    STATE(779), 1,
      sym_number,
    ACTIONS(947), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
    STATE(778), 2,
      sym__forward_value1,
      sym__file_string,
  [434] = 11,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(953), 1,
      anon_sym_STAR,
    ACTIONS(955), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(957), 1,
      sym__number,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(777), 1,
      sym_string,
    STATE(779), 1,
      sym_number,
    ACTIONS(947), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
    STATE(791), 2,
      sym__forward_value1,
      sym__file_string,
  [471] = 2,
    ACTIONS(961), 1,
      aux_sym__match_exec_token2,
    ACTIONS(959), 12,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [489] = 3,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(963), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [509] = 3,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(965), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [529] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(970), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [549] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(974), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [569] = 3,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(976), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [589] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(978), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [609] = 4,
    ACTIONS(982), 1,
      aux_sym__sep_token1,
    ACTIONS(984), 1,
      sym__space,
    STATE(608), 1,
      sym__sep,
    ACTIONS(980), 10,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__eol,
  [631] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(986), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [651] = 4,
    ACTIONS(990), 1,
      aux_sym__sep_token1,
    ACTIONS(992), 1,
      sym__space,
    STATE(609), 1,
      sym__sep,
    ACTIONS(988), 10,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__eol,
  [673] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(994), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [693] = 9,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(955), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(999), 1,
      anon_sym_STAR,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(789), 1,
      sym_string,
    ACTIONS(947), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
    STATE(661), 2,
      sym__forward_value2,
      sym__file_string,
  [724] = 9,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(955), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(999), 1,
      anon_sym_STAR,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(789), 1,
      sym_string,
    ACTIONS(947), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
    STATE(690), 2,
      sym__forward_value2,
      sym__file_string,
  [755] = 10,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1007), 1,
      anon_sym_DOLLAR,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(725), 1,
      sym__var_value,
    STATE(726), 1,
      sym__file_string,
    ACTIONS(1003), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [788] = 1,
    ACTIONS(1011), 12,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      anon_sym_COMMA,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [803] = 1,
    ACTIONS(1013), 12,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      anon_sym_COMMA,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [818] = 1,
    ACTIONS(1015), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [832] = 1,
    ACTIONS(1017), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [846] = 1,
    ACTIONS(1015), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [860] = 1,
    ACTIONS(1015), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [874] = 1,
    ACTIONS(1015), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [888] = 1,
    ACTIONS(1015), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [902] = 1,
    ACTIONS(1015), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [916] = 1,
    ACTIONS(1019), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [930] = 1,
    ACTIONS(1021), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [944] = 1,
    ACTIONS(1023), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [958] = 1,
    ACTIONS(986), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [972] = 1,
    ACTIONS(1025), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [986] = 1,
    ACTIONS(1027), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1000] = 1,
    ACTIONS(1029), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1014] = 1,
    ACTIONS(1031), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1028] = 1,
    ACTIONS(1015), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1042] = 1,
    ACTIONS(1033), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1056] = 1,
    ACTIONS(1021), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1070] = 1,
    ACTIONS(1035), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1084] = 1,
    ACTIONS(1037), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1098] = 1,
    ACTIONS(1039), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1112] = 1,
    ACTIONS(1041), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1126] = 1,
    ACTIONS(1043), 11,
      aux_sym_host_declaration_token1,
      aux_sym__match_canonical_token1,
      aux_sym__match_final_token1,
      aux_sym__match_exec_token1,
      aux_sym__match_localnetwork_token1,
      aux_sym__match_originalhost_token1,
      aux_sym__match_tagged_token1,
      aux_sym__match_user_token1,
      aux_sym__match_localuser_token1,
      sym__space,
      sym__eol,
  [1140] = 7,
    ACTIONS(1045), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1051), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(92), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(708), 1,
      sym__file_pattern_vars,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1049), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1165] = 6,
    ACTIONS(1053), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1059), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(91), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(1062), 2,
      sym__space,
      sym__eol,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1056), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1188] = 6,
    ACTIONS(1045), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1051), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(91), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(1064), 2,
      sym__space,
      sym__eol,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1049), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1211] = 7,
    ACTIONS(1045), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
    ACTIONS(1051), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(92), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(762), 1,
      sym__file_pattern_vars,
    STATE(124), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1049), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1236] = 6,
    ACTIONS(1066), 1,
      anon_sym_DQUOTE,
    ACTIONS(1068), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1072), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(95), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(156), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1070), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1258] = 6,
    ACTIONS(1074), 1,
      anon_sym_DQUOTE,
    ACTIONS(1076), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1082), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(95), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(156), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1079), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1280] = 8,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1085), 1,
      anon_sym_none,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(456), 1,
      sym__file_string,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1306] = 8,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1087), 1,
      anon_sym_none,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(697), 1,
      sym__file_string,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1332] = 7,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(651), 1,
      sym__file_string,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1355] = 7,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1095), 1,
      anon_sym_none,
    STATE(159), 1,
      aux_sym__match_value_repeat1,
    STATE(332), 1,
      sym__cnames_map,
    STATE(333), 1,
      sym_pattern,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1378] = 7,
    ACTIONS(1097), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1099), 1,
      anon_sym_DQUOTE,
    ACTIONS(1101), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1103), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(106), 1,
      aux_sym__hosts_string_repeat1,
    STATE(715), 1,
      sym__hosts_string,
    STATE(197), 2,
      sym__hosts_token,
      sym_variable,
  [1401] = 7,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      anon_sym_BANG,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1111), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(586), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1424] = 7,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      anon_sym_BANG,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1113), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(586), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1447] = 7,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      anon_sym_BANG,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1115), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(586), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1470] = 6,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1007), 1,
      anon_sym_DOLLAR,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(751), 1,
      sym__var_value,
    ACTIONS(1119), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(522), 2,
      sym_string,
      sym__boolean,
  [1491] = 7,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(430), 1,
      sym__file_string,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1514] = 6,
    ACTIONS(1097), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1101), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1103), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(110), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(1121), 2,
      sym__space,
      sym__eol,
    STATE(197), 2,
      sym__hosts_token,
      sym_variable,
  [1535] = 7,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(688), 1,
      sym__file_string,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1558] = 7,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(112), 1,
      aux_sym__file_string_repeat1,
    STATE(723), 1,
      sym__file_string,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1581] = 5,
    ACTIONS(1068), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1072), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(94), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(156), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1070), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1600] = 6,
    ACTIONS(1123), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1126), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1129), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(110), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(1132), 2,
      sym__space,
      sym__eol,
    STATE(197), 2,
      sym__hosts_token,
      sym_variable,
  [1621] = 6,
    ACTIONS(1134), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1137), 1,
      aux_sym__file_token_token1,
    ACTIONS(1140), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(111), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1143), 2,
      sym__space,
      sym__eol,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1642] = 6,
    ACTIONS(947), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1005), 1,
      aux_sym__file_token_token1,
    ACTIONS(1009), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(111), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1145), 2,
      sym__space,
      sym__eol,
    STATE(194), 2,
      sym__file_token,
      sym_variable,
  [1663] = 7,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      anon_sym_BANG,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1147), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(586), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1686] = 6,
    ACTIONS(1149), 1,
      anon_sym_DQUOTE,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    STATE(355), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1706] = 6,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1157), 1,
      anon_sym_BANG,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym__match_value_repeat1,
    STATE(79), 1,
      sym__match_value,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1726] = 6,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    STATE(339), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1746] = 6,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      anon_sym_BANG,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(586), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1766] = 4,
    ACTIONS(1163), 1,
      aux_sym__match_exec_token2,
    STATE(118), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1166), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(921), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1782] = 6,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE,
    ACTIONS(1171), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1173), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1175), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(120), 1,
      aux_sym__hosts_string_repeat2,
    STATE(266), 2,
      sym__hosts_token,
      sym_variable,
  [1802] = 6,
    ACTIONS(1177), 1,
      anon_sym_DQUOTE,
    ACTIONS(1179), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1182), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1185), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(120), 1,
      aux_sym__hosts_string_repeat2,
    STATE(266), 2,
      sym__hosts_token,
      sym_variable,
  [1822] = 6,
    ACTIONS(1188), 1,
      anon_sym_DQUOTE,
    ACTIONS(1190), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1193), 1,
      aux_sym__file_token_token1,
    ACTIONS(1196), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(121), 1,
      aux_sym__file_string_repeat2,
    STATE(270), 2,
      sym__file_token,
      sym_variable,
  [1842] = 6,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1203), 1,
      aux_sym__file_token_token1,
    ACTIONS(1205), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(121), 1,
      aux_sym__file_string_repeat2,
    STATE(270), 2,
      sym__file_token,
      sym_variable,
  [1862] = 6,
    ACTIONS(1207), 1,
      aux_sym_time_token1,
    ACTIONS(1209), 1,
      aux_sym_time_token2,
    ACTIONS(1211), 1,
      aux_sym_time_token3,
    ACTIONS(1213), 1,
      aux_sym_time_token4,
    ACTIONS(1215), 1,
      aux_sym_time_token5,
    ACTIONS(1217), 2,
      sym__space,
      sym__eol,
  [1882] = 2,
    ACTIONS(1219), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1221), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1894] = 2,
    ACTIONS(1223), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1225), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1906] = 4,
    ACTIONS(1229), 1,
      anon_sym_confirm,
    ACTIONS(1231), 1,
      sym__number,
    STATE(593), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1227), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1922] = 5,
    ACTIONS(1233), 1,
      aux_sym__match_localnetwork_token3,
    ACTIONS(1235), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(122), 1,
      aux_sym__file_string_repeat2,
    ACTIONS(1201), 2,
      aux_sym__match_exec_token3,
      aux_sym__file_token_token1,
    STATE(270), 2,
      sym__file_token,
      sym_variable,
  [1940] = 6,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1237), 1,
      anon_sym_BANG,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(371), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1960] = 6,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1157), 1,
      anon_sym_BANG,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym__match_value_repeat1,
    STATE(80), 1,
      sym__match_value,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1980] = 6,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__match_value_repeat1,
    STATE(333), 1,
      sym_pattern,
    STATE(622), 1,
      sym__cnames_map,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2000] = 6,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1157), 1,
      anon_sym_BANG,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym__match_value_repeat1,
    STATE(81), 1,
      sym__match_value,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2020] = 4,
    ACTIONS(1239), 1,
      aux_sym__match_exec_token2,
    STATE(118), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1243), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1241), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [2036] = 7,
    ACTIONS(1245), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    ACTIONS(1249), 1,
      anon_sym_none,
    ACTIONS(1251), 1,
      aux_sym__proxy_token_token1,
    STATE(148), 1,
      aux_sym__proxy_string_content,
    STATE(216), 1,
      sym__proxy_token,
    STATE(419), 1,
      sym__proxy_string,
  [2058] = 6,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1157), 1,
      anon_sym_BANG,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym__match_value_repeat1,
    STATE(88), 1,
      sym__match_value,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2078] = 6,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1157), 1,
      anon_sym_BANG,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym__match_value_repeat1,
    STATE(78), 1,
      sym__match_value,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2098] = 3,
    STATE(136), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1256), 2,
      sym__space,
      sym__eol,
    ACTIONS(1253), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2111] = 4,
    ACTIONS(1258), 1,
      aux_sym__match_exec_token2,
    STATE(137), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(921), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1261), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2126] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(620), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2143] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1239), 1,
      aux_sym__match_exec_token2,
    STATE(132), 1,
      aux_sym__match_value_repeat1,
    STATE(251), 1,
      sym_pattern,
    ACTIONS(1243), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2160] = 6,
    ACTIONS(1245), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    ACTIONS(1251), 1,
      aux_sym__proxy_token_token1,
    STATE(148), 1,
      aux_sym__proxy_string_content,
    STATE(216), 1,
      sym__proxy_token,
    STATE(682), 1,
      sym__proxy_string,
  [2179] = 4,
    ACTIONS(1264), 1,
      aux_sym__match_exec_token2,
    STATE(141), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(921), 2,
      sym__space,
      sym__eol,
    ACTIONS(1267), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2194] = 3,
    STATE(136), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1272), 2,
      sym__space,
      sym__eol,
    ACTIONS(1270), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2207] = 4,
    ACTIONS(1274), 1,
      anon_sym_DASH,
    STATE(146), 1,
      aux_sym__send_env_value_repeat1,
    STATE(691), 1,
      sym__send_env_value,
    ACTIONS(1270), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2222] = 4,
    ACTIONS(1276), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(287), 1,
      sym__log_verbose_value,
    ACTIONS(1278), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2237] = 2,
    ACTIONS(1223), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1225), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2248] = 3,
    STATE(136), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1280), 2,
      sym__space,
      sym__eol,
    ACTIONS(1270), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2261] = 5,
    ACTIONS(1282), 1,
      anon_sym_DQUOTE,
    ACTIONS(1284), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1286), 1,
      anon_sym_STAR,
    STATE(411), 1,
      sym__permit_remote_open_value,
    ACTIONS(1288), 2,
      anon_sym_none,
      anon_sym_any,
  [2278] = 5,
    ACTIONS(1245), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1251), 1,
      aux_sym__proxy_token_token1,
    STATE(164), 1,
      aux_sym__proxy_string_content,
    STATE(216), 1,
      sym__proxy_token,
    ACTIONS(1290), 2,
      sym__space,
      sym__eol,
  [2295] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(326), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2312] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(639), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2329] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(619), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2346] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1239), 1,
      aux_sym__match_exec_token2,
    STATE(132), 1,
      aux_sym__match_value_repeat1,
    STATE(250), 1,
      sym_pattern,
    ACTIONS(1243), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2363] = 2,
    STATE(561), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1292), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [2374] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(703), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2391] = 5,
    ACTIONS(1171), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1173), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1175), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(119), 1,
      aux_sym__hosts_string_repeat2,
    STATE(266), 2,
      sym__hosts_token,
      sym_variable,
  [2408] = 2,
    ACTIONS(1296), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1294), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2419] = 5,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__match_value_repeat1,
    STATE(251), 1,
      sym_pattern,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2436] = 5,
    ACTIONS(1201), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1203), 1,
      aux_sym__file_token_token1,
    ACTIONS(1205), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(122), 1,
      aux_sym__file_string_repeat2,
    STATE(270), 2,
      sym__file_token,
      sym_variable,
  [2453] = 4,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token2,
    STATE(137), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1241), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2468] = 5,
    ACTIONS(1298), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1300), 1,
      aux_sym__hostname_token_token1,
    STATE(166), 1,
      aux_sym__hostname_string_repeat1,
    STATE(292), 1,
      sym__hostname_token,
    ACTIONS(1302), 2,
      sym__space,
      sym__eol,
  [2485] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1239), 1,
      aux_sym__match_exec_token2,
    STATE(132), 1,
      aux_sym__match_value_repeat1,
    STATE(226), 1,
      sym_pattern,
    ACTIONS(1243), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2502] = 4,
    ACTIONS(1306), 1,
      aux_sym__match_exec_token3,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1304), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1309), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2517] = 6,
    ACTIONS(1298), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1300), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(1312), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym__hostname_string_repeat1,
    STATE(292), 1,
      sym__hostname_token,
    STATE(735), 1,
      sym__hostname_string,
  [2536] = 5,
    ACTIONS(1314), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1317), 1,
      aux_sym__proxy_token_token1,
    STATE(164), 1,
      aux_sym__proxy_string_content,
    STATE(216), 1,
      sym__proxy_token,
    ACTIONS(1320), 2,
      sym__space,
      sym__eol,
  [2553] = 2,
    ACTIONS(931), 1,
      aux_sym__match_exec_token2,
    ACTIONS(929), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2564] = 5,
    ACTIONS(1322), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1325), 1,
      aux_sym__hostname_token_token1,
    STATE(166), 1,
      aux_sym__hostname_string_repeat1,
    STATE(292), 1,
      sym__hostname_token,
    ACTIONS(1328), 2,
      sym__space,
      sym__eol,
  [2581] = 5,
    ACTIONS(1282), 1,
      anon_sym_DQUOTE,
    ACTIONS(1284), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1286), 1,
      anon_sym_STAR,
    STATE(676), 1,
      sym__permit_remote_open_value,
    ACTIONS(1330), 2,
      anon_sym_none,
      anon_sym_any,
  [2598] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(647), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2615] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(381), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2632] = 3,
    ACTIONS(1334), 1,
      anon_sym_auto,
    STATE(764), 1,
      sym__boolean,
    ACTIONS(1332), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [2645] = 4,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(141), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1241), 2,
      sym__space,
      sym__eol,
  [2660] = 5,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token2,
    STATE(171), 1,
      aux_sym__match_value_repeat1,
    STATE(462), 1,
      sym_pattern,
    ACTIONS(1109), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2677] = 4,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1336), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [2692] = 2,
    STATE(633), 1,
      sym__boolean,
    ACTIONS(1338), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [2703] = 4,
    ACTIONS(1274), 1,
      anon_sym_DASH,
    STATE(146), 1,
      aux_sym__send_env_value_repeat1,
    STATE(439), 1,
      sym__send_env_value,
    ACTIONS(1270), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2718] = 4,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1340), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [2733] = 1,
    ACTIONS(1342), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2741] = 5,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    ACTIONS(1346), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1349), 1,
      aux_sym__proxy_token_token1,
    STATE(178), 1,
      aux_sym__proxy_string_repeat1,
    STATE(507), 1,
      sym__proxy_token,
  [2757] = 2,
    ACTIONS(931), 1,
      aux_sym__match_exec_token2,
    ACTIONS(929), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2767] = 5,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
    ACTIONS(1354), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1357), 1,
      aux_sym__hostname_token_token1,
    STATE(180), 1,
      aux_sym__hostname_string_repeat2,
    STATE(515), 1,
      sym__hostname_token,
  [2783] = 4,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1360), 1,
      anon_sym_BANG,
    STATE(173), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2797] = 5,
    ACTIONS(1362), 1,
      anon_sym_DQUOTE,
    ACTIONS(1364), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1367), 1,
      aux_sym__file_token_token1,
    STATE(182), 1,
      aux_sym__match_exec_repeat2,
    STATE(385), 1,
      sym__file_token,
  [2813] = 4,
    ACTIONS(1370), 1,
      aux_sym__match_exec_token3,
    STATE(208), 1,
      aux_sym__match_value_repeat3,
    STATE(733), 1,
      sym__log_verbose_quoted,
    ACTIONS(1372), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2827] = 2,
    STATE(627), 1,
      sym__boolean,
    ACTIONS(1374), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2837] = 4,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1376), 1,
      anon_sym_BANG,
    STATE(43), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2851] = 3,
    ACTIONS(1380), 1,
      sym__var_name,
    STATE(445), 1,
      sym__set_env_value,
    ACTIONS(1378), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [2863] = 5,
    ACTIONS(1382), 1,
      anon_sym_DQUOTE,
    ACTIONS(1384), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1386), 1,
      aux_sym__file_token_token1,
    STATE(182), 1,
      aux_sym__match_exec_repeat2,
    STATE(385), 1,
      sym__file_token,
  [2879] = 5,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1007), 1,
      anon_sym_DOLLAR,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(648), 1,
      sym_string,
    STATE(650), 1,
      sym__var_value,
  [2895] = 4,
    ACTIONS(1370), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    STATE(196), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1372), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2909] = 2,
    STATE(654), 1,
      sym__boolean,
    ACTIONS(1390), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2919] = 2,
    ACTIONS(931), 1,
      aux_sym__match_exec_token2,
    ACTIONS(929), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2929] = 3,
    ACTIONS(1394), 1,
      anon_sym_COLON,
    STATE(211), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1392), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2941] = 4,
    ACTIONS(1396), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1399), 1,
      sym_token,
    STATE(193), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(1402), 2,
      sym__space,
      sym__eol,
  [2955] = 2,
    ACTIONS(1404), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1406), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2965] = 4,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1408), 1,
      anon_sym_BANG,
    STATE(114), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2979] = 4,
    ACTIONS(1304), 1,
      anon_sym_COLON,
    ACTIONS(1410), 1,
      aux_sym__match_exec_token3,
    STATE(196), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1413), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2993] = 2,
    ACTIONS(1416), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1418), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [3003] = 4,
    ACTIONS(1420), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1422), 1,
      sym_token,
    STATE(193), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(1424), 2,
      sym__space,
      sym__eol,
  [3017] = 4,
    ACTIONS(1370), 1,
      aux_sym__match_exec_token3,
    STATE(208), 1,
      aux_sym__match_value_repeat3,
    STATE(520), 1,
      sym__log_verbose_quoted,
    ACTIONS(1372), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3031] = 3,
    ACTIONS(1426), 1,
      anon_sym_COLON,
    STATE(211), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1392), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [3043] = 4,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    ACTIONS(1428), 1,
      aux_sym__match_exec_token3,
    STATE(201), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1431), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3057] = 1,
    ACTIONS(1434), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [3065] = 4,
    ACTIONS(1436), 1,
      anon_sym_DQUOTE,
    ACTIONS(1438), 1,
      aux_sym__match_exec_token3,
    STATE(201), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1440), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3079] = 2,
    ACTIONS(1223), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1225), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [3089] = 5,
    ACTIONS(943), 1,
      aux_sym__match_exec_token2,
    ACTIONS(945), 1,
      aux_sym__file_token_token1,
    ACTIONS(1442), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym__match_exec_repeat1,
    STATE(51), 1,
      sym__file_token,
  [3105] = 2,
    ACTIONS(1446), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1444), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3115] = 5,
    ACTIONS(1420), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1422), 1,
      sym_token,
    ACTIONS(1448), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym__token_string_repeat1,
    STATE(392), 1,
      sym__token_string,
  [3131] = 4,
    ACTIONS(1370), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1450), 1,
      anon_sym_COLON,
    STATE(196), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1372), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3145] = 3,
    STATE(200), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(421), 1,
      sym__log_verbose_value,
    ACTIONS(1278), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [3157] = 2,
    ACTIONS(1223), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1225), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [3167] = 3,
    ACTIONS(1455), 1,
      anon_sym_COLON,
    STATE(211), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1452), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [3179] = 5,
    ACTIONS(1457), 1,
      anon_sym_DQUOTE,
    ACTIONS(1459), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1461), 1,
      aux_sym__hostname_token_token1,
    STATE(180), 1,
      aux_sym__hostname_string_repeat2,
    STATE(515), 1,
      sym__hostname_token,
  [3195] = 5,
    ACTIONS(1463), 1,
      anon_sym_DQUOTE,
    ACTIONS(1465), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1467), 1,
      aux_sym__proxy_token_token1,
    STATE(178), 1,
      aux_sym__proxy_string_repeat1,
    STATE(507), 1,
      sym__proxy_token,
  [3211] = 3,
    ACTIONS(1231), 1,
      sym__number,
    ACTIONS(1469), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(763), 2,
      sym__boolean,
      sym_time,
  [3223] = 5,
    ACTIONS(1420), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1422), 1,
      sym_token,
    ACTIONS(1448), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      aux_sym__token_string_repeat1,
    STATE(657), 1,
      sym__token_string,
  [3239] = 2,
    ACTIONS(1471), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1473), 3,
      aux_sym__proxy_token_token1,
      sym__space,
      sym__eol,
  [3248] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1477), 2,
      sym__space,
      sym__eol,
  [3259] = 3,
    ACTIONS(1479), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1482), 2,
      sym__space,
      sym__eol,
  [3270] = 2,
    ACTIONS(1223), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1225), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3279] = 2,
    ACTIONS(1223), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1225), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3288] = 2,
    ACTIONS(1446), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1444), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3297] = 2,
    ACTIONS(1486), 1,
      sym_cipher,
    ACTIONS(1484), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3306] = 3,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    STATE(176), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3317] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1490), 2,
      sym__space,
      sym__eol,
  [3328] = 3,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    STATE(44), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3339] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1492), 2,
      sym__space,
      sym__eol,
  [3350] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1494), 2,
      sym__space,
      sym__eol,
  [3361] = 3,
    ACTIONS(1151), 1,
      aux_sym__match_exec_token3,
    STATE(116), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1155), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3372] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1498), 2,
      sym__space,
      sym__eol,
  [3383] = 3,
    ACTIONS(1500), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1503), 2,
      sym__space,
      sym__eol,
  [3394] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1508), 2,
      sym__space,
      sym__eol,
  [3405] = 3,
    ACTIONS(1510), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1512), 2,
      sym__space,
      sym__eol,
  [3416] = 3,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1517), 2,
      sym__space,
      sym__eol,
  [3427] = 3,
    ACTIONS(1370), 1,
      aux_sym__match_exec_token3,
    STATE(189), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1372), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3438] = 4,
    ACTIONS(1519), 1,
      anon_sym_DQUOTE,
    ACTIONS(1521), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1524), 1,
      sym_token,
    STATE(235), 1,
      aux_sym__token_string_repeat2,
  [3451] = 3,
    ACTIONS(1527), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1530), 2,
      sym__space,
      sym__eol,
  [3462] = 3,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1534), 2,
      sym__space,
      sym__eol,
  [3473] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1536), 2,
      sym__space,
      sym__eol,
  [3484] = 2,
    ACTIONS(1540), 1,
      sym_key_sig,
    ACTIONS(1538), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3493] = 3,
    ACTIONS(1542), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1545), 2,
      sym__space,
      sym__eol,
  [3504] = 2,
    ACTIONS(1549), 1,
      sym_key_sig,
    ACTIONS(1547), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3513] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1551), 2,
      sym__space,
      sym__eol,
  [3524] = 3,
    ACTIONS(1553), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1556), 2,
      sym__space,
      sym__eol,
  [3535] = 3,
    ACTIONS(1560), 1,
      sym__number,
    STATE(721), 1,
      sym_number,
    ACTIONS(1558), 2,
      anon_sym_none,
      sym_ipqos,
  [3546] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1562), 2,
      sym__space,
      sym__eol,
  [3557] = 2,
    ACTIONS(1566), 1,
      sym_kex,
    ACTIONS(1564), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3566] = 3,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1571), 2,
      sym__space,
      sym__eol,
  [3577] = 2,
    ACTIONS(1575), 1,
      sym_mac,
    ACTIONS(1573), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3586] = 3,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1579), 2,
      sym__space,
      sym__eol,
  [3597] = 3,
    ACTIONS(1488), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1581), 2,
      sym__space,
      sym__eol,
  [3608] = 1,
    ACTIONS(1482), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3615] = 4,
    ACTIONS(1583), 1,
      aux_sym_time_token2,
    ACTIONS(1585), 1,
      aux_sym_time_token3,
    ACTIONS(1587), 1,
      aux_sym_time_token4,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [3628] = 4,
    ACTIONS(1384), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1386), 1,
      aux_sym__file_token_token1,
    STATE(187), 1,
      aux_sym__match_exec_repeat2,
    STATE(385), 1,
      sym__file_token,
  [3641] = 3,
    ACTIONS(909), 1,
      aux_sym__match_exec_token2,
    STATE(41), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(913), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3652] = 1,
    ACTIONS(1591), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3659] = 3,
    ACTIONS(1593), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1597), 1,
      aux_sym__proxy_jump_arg_token1,
    ACTIONS(1595), 2,
      anon_sym_none,
      aux_sym__proxy_jump_arg_token2,
  [3670] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1599), 2,
      sym__space,
      sym__eol,
  [3681] = 2,
    ACTIONS(1603), 1,
      sym_key_sig,
    ACTIONS(1601), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3690] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1599), 2,
      sym__space,
      sym__eol,
  [3701] = 3,
    ACTIONS(1605), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1607), 2,
      sym__space,
      sym__eol,
  [3712] = 3,
    ACTIONS(1510), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1609), 2,
      sym__space,
      sym__eol,
  [3723] = 3,
    ACTIONS(1510), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1609), 2,
      sym__space,
      sym__eol,
  [3734] = 2,
    STATE(192), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1611), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [3743] = 3,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1615), 2,
      sym__space,
      sym__eol,
  [3754] = 4,
    ACTIONS(1617), 1,
      anon_sym_DQUOTE,
    ACTIONS(1619), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1621), 1,
      sym_token,
    STATE(235), 1,
      aux_sym__token_string_repeat2,
  [3767] = 2,
    ACTIONS(1625), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1623), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3776] = 3,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1627), 2,
      sym__space,
      sym__eol,
  [3787] = 3,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1627), 2,
      sym__space,
      sym__eol,
  [3798] = 3,
    ACTIONS(1560), 1,
      sym__number,
    STATE(649), 1,
      sym_number,
    ACTIONS(1629), 2,
      anon_sym_none,
      sym_ipqos,
  [3809] = 2,
    ACTIONS(1633), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1631), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3818] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1635), 2,
      sym__space,
      sym__eol,
  [3829] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1635), 2,
      sym__space,
      sym__eol,
  [3840] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1637), 2,
      sym__space,
      sym__eol,
  [3851] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1637), 2,
      sym__space,
      sym__eol,
  [3862] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1639), 2,
      sym__space,
      sym__eol,
  [3873] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1639), 2,
      sym__space,
      sym__eol,
  [3884] = 3,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1641), 2,
      sym__space,
      sym__eol,
  [3895] = 3,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1641), 2,
      sym__space,
      sym__eol,
  [3906] = 2,
    ACTIONS(1446), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1444), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3915] = 2,
    STATE(626), 1,
      sym__boolean,
    ACTIONS(1643), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3924] = 2,
    STATE(142), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1270), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [3933] = 2,
    STATE(625), 1,
      sym__boolean,
    ACTIONS(1645), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3942] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1647), 2,
      sym__space,
      sym__eol,
  [3953] = 4,
    ACTIONS(1465), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1467), 1,
      aux_sym__proxy_token_token1,
    STATE(213), 1,
      aux_sym__proxy_string_repeat1,
    STATE(507), 1,
      sym__proxy_token,
  [3966] = 3,
    ACTIONS(1605), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1649), 2,
      sym__space,
      sym__eol,
  [3977] = 3,
    ACTIONS(1510), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1651), 2,
      sym__space,
      sym__eol,
  [3988] = 3,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1653), 2,
      sym__space,
      sym__eol,
  [3999] = 2,
    ACTIONS(1655), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1657), 3,
      sym_token,
      sym__space,
      sym__eol,
  [4008] = 3,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1659), 2,
      sym__space,
      sym__eol,
  [4019] = 4,
    ACTIONS(1459), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1461), 1,
      aux_sym__hostname_token_token1,
    STATE(212), 1,
      aux_sym__hostname_string_repeat2,
    STATE(515), 1,
      sym__hostname_token,
  [4032] = 3,
    ACTIONS(1438), 1,
      aux_sym__match_exec_token3,
    STATE(203), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1440), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [4043] = 2,
    ACTIONS(1661), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1663), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [4052] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1665), 2,
      sym__space,
      sym__eol,
  [4063] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1667), 2,
      sym__space,
      sym__eol,
  [4074] = 3,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1669), 2,
      sym__space,
      sym__eol,
  [4085] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(1671), 1,
      anon_sym_STAR,
    STATE(773), 1,
      sym_number,
  [4095] = 2,
    ACTIONS(1675), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1673), 2,
      anon_sym_DQUOTE,
      sym_token,
  [4103] = 3,
    ACTIONS(1677), 1,
      aux_sym__sep_token1,
    ACTIONS(1679), 1,
      sym__space,
    STATE(39), 1,
      sym__sep,
  [4113] = 3,
    ACTIONS(1681), 1,
      aux_sym__sep_token1,
    ACTIONS(1683), 1,
      sym__space,
    STATE(205), 1,
      sym__sep,
  [4123] = 3,
    ACTIONS(1685), 1,
      aux_sym__sep_token1,
    ACTIONS(1687), 1,
      sym__space,
    STATE(473), 1,
      sym__sep,
  [4133] = 3,
    ACTIONS(1689), 1,
      aux_sym__sep_token1,
    ACTIONS(1691), 1,
      sym__space,
    STATE(131), 1,
      sym__sep,
  [4143] = 3,
    ACTIONS(1693), 1,
      aux_sym__sep_token1,
    ACTIONS(1695), 1,
      sym__space,
    STATE(129), 1,
      sym__sep,
  [4153] = 3,
    ACTIONS(1697), 1,
      aux_sym__sep_token1,
    ACTIONS(1699), 1,
      sym__space,
    STATE(115), 1,
      sym__sep,
  [4163] = 3,
    ACTIONS(1701), 1,
      aux_sym__sep_token1,
    ACTIONS(1703), 1,
      sym__space,
    STATE(135), 1,
      sym__sep,
  [4173] = 2,
    ACTIONS(1707), 1,
      sym_sig,
    ACTIONS(1705), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4181] = 2,
    STATE(710), 1,
      sym__boolean,
    ACTIONS(1709), 2,
      anon_sym_yes,
      anon_sym_no,
  [4189] = 3,
    ACTIONS(1711), 1,
      aux_sym__sep_token1,
    ACTIONS(1713), 1,
      sym__space,
    STATE(511), 1,
      sym__sep,
  [4199] = 3,
    ACTIONS(1715), 1,
      aux_sym__sep_token1,
    ACTIONS(1717), 1,
      sym__space,
    STATE(126), 1,
      sym__sep,
  [4209] = 3,
    ACTIONS(1719), 1,
      aux_sym__sep_token1,
    ACTIONS(1721), 1,
      sym__space,
    STATE(549), 1,
      sym__sep,
  [4219] = 3,
    ACTIONS(1723), 1,
      aux_sym__sep_token1,
    ACTIONS(1725), 1,
      sym__space,
    STATE(517), 1,
      sym__sep,
  [4229] = 3,
    ACTIONS(1727), 1,
      aux_sym__sep_token1,
    ACTIONS(1729), 1,
      sym__space,
    STATE(151), 1,
      sym__sep,
  [4239] = 3,
    ACTIONS(1731), 1,
      aux_sym__sep_token1,
    ACTIONS(1733), 1,
      sym__space,
    STATE(150), 1,
      sym__sep,
  [4249] = 3,
    ACTIONS(1735), 1,
      aux_sym__sep_token1,
    ACTIONS(1737), 1,
      sym__space,
    STATE(149), 1,
      sym__sep,
  [4259] = 3,
    ACTIONS(1739), 1,
      aux_sym__sep_token1,
    ACTIONS(1741), 1,
      sym__space,
    STATE(414), 1,
      sym__sep,
  [4269] = 3,
    ACTIONS(1743), 1,
      aux_sym__sep_token1,
    ACTIONS(1745), 1,
      sym__space,
    STATE(389), 1,
      sym__sep,
  [4279] = 3,
    ACTIONS(1747), 1,
      aux_sym__sep_token1,
    ACTIONS(1749), 1,
      sym__space,
    STATE(523), 1,
      sym__sep,
  [4289] = 1,
    ACTIONS(1751), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [4295] = 3,
    ACTIONS(1753), 1,
      aux_sym__sep_token1,
    ACTIONS(1755), 1,
      sym__space,
    STATE(99), 1,
      sym__sep,
  [4305] = 3,
    ACTIONS(1757), 1,
      aux_sym__sep_token1,
    ACTIONS(1759), 1,
      sym__space,
    STATE(305), 1,
      sym__sep,
  [4315] = 2,
    STATE(719), 1,
      sym__boolean,
    ACTIONS(1761), 2,
      anon_sym_yes,
      anon_sym_no,
  [4323] = 3,
    ACTIONS(1763), 1,
      aux_sym__sep_token1,
    ACTIONS(1765), 1,
      sym__space,
    STATE(90), 1,
      sym__sep,
  [4333] = 3,
    ACTIONS(1767), 1,
      aux_sym__sep_token1,
    ACTIONS(1769), 1,
      sym__space,
    STATE(306), 1,
      sym__sep,
  [4343] = 2,
    ACTIONS(1771), 1,
      sym__number,
    ACTIONS(1773), 2,
      sym__space,
      sym__eol,
  [4351] = 3,
    ACTIONS(1775), 1,
      aux_sym__sep_token1,
    ACTIONS(1777), 1,
      sym__space,
    STATE(222), 1,
      sym__sep,
  [4361] = 3,
    ACTIONS(1779), 1,
      aux_sym__sep_token1,
    ACTIONS(1781), 1,
      sym__space,
    STATE(320), 1,
      sym__sep,
  [4371] = 3,
    ACTIONS(1783), 1,
      sym__space,
    ACTIONS(1785), 1,
      sym__eol,
    STATE(491), 1,
      aux_sym__canonical_domains_repeat1,
  [4381] = 2,
    ACTIONS(1787), 1,
      sym__number,
    ACTIONS(1789), 2,
      sym__space,
      sym__eol,
  [4389] = 2,
    ACTIONS(1791), 1,
      sym__number,
    ACTIONS(1789), 2,
      sym__space,
      sym__eol,
  [4397] = 3,
    ACTIONS(1793), 1,
      aux_sym__sep_token1,
    ACTIONS(1795), 1,
      sym__space,
    STATE(338), 1,
      sym__sep,
  [4407] = 3,
    ACTIONS(1797), 1,
      anon_sym_DQUOTE,
    ACTIONS(1799), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym__match_localnetwork_repeat2,
  [4417] = 3,
    ACTIONS(1802), 1,
      aux_sym__sep_token1,
    ACTIONS(1804), 1,
      sym__space,
    STATE(759), 1,
      sym__sep,
  [4427] = 3,
    ACTIONS(1806), 1,
      sym__space,
    ACTIONS(1808), 1,
      sym__eol,
    STATE(493), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4437] = 3,
    ACTIONS(1810), 1,
      anon_sym_COMMA,
    ACTIONS(1812), 1,
      anon_sym_COLON,
    STATE(496), 1,
      aux_sym__cnames_map_repeat1,
  [4447] = 3,
    ACTIONS(1814), 1,
      aux_sym__sep_token1,
    ACTIONS(1816), 1,
      sym__space,
    STATE(752), 1,
      sym__sep,
  [4457] = 3,
    ACTIONS(1818), 1,
      anon_sym_DQUOTE,
    ACTIONS(1820), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym__match_value_repeat4,
  [4467] = 3,
    ACTIONS(1823), 1,
      aux_sym__sep_token1,
    ACTIONS(1825), 1,
      sym__space,
    STATE(170), 1,
      sym__sep,
  [4477] = 3,
    ACTIONS(1827), 1,
      aux_sym__sep_token1,
    ACTIONS(1829), 1,
      sym__space,
    STATE(214), 1,
      sym__sep,
  [4487] = 2,
    STATE(738), 1,
      sym__boolean,
    ACTIONS(1831), 2,
      anon_sym_yes,
      anon_sym_no,
  [4495] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1833), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      aux_sym__match_value_repeat4,
  [4505] = 3,
    ACTIONS(1835), 1,
      aux_sym__sep_token1,
    ACTIONS(1837), 1,
      sym__space,
    STATE(93), 1,
      sym__sep,
  [4515] = 3,
    ACTIONS(1839), 1,
      aux_sym__sep_token1,
    ACTIONS(1841), 1,
      sym__space,
    STATE(372), 1,
      sym__sep,
  [4525] = 3,
    ACTIONS(1843), 1,
      aux_sym__sep_token1,
    ACTIONS(1845), 1,
      sym__space,
    STATE(373), 1,
      sym__sep,
  [4535] = 1,
    ACTIONS(1847), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4541] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(1849), 1,
      anon_sym_STAR,
    STATE(659), 1,
      sym_number,
  [4551] = 3,
    ACTIONS(1851), 1,
      aux_sym_time_token3,
    ACTIONS(1853), 1,
      aux_sym_time_token4,
    ACTIONS(1855), 1,
      aux_sym_time_token5,
  [4561] = 3,
    ACTIONS(1857), 1,
      aux_sym__sep_token1,
    ACTIONS(1859), 1,
      sym__space,
    STATE(582), 1,
      sym__sep,
  [4571] = 3,
    ACTIONS(1861), 1,
      aux_sym__sep_token1,
    ACTIONS(1863), 1,
      sym__space,
    STATE(407), 1,
      sym__sep,
  [4581] = 3,
    ACTIONS(1865), 1,
      anon_sym_DQUOTE,
    ACTIONS(1867), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym__match_localnetwork_repeat2,
  [4591] = 3,
    ACTIONS(1869), 1,
      aux_sym__sep_token1,
    ACTIONS(1871), 1,
      sym__space,
    STATE(679), 1,
      sym__sep,
  [4601] = 3,
    ACTIONS(1873), 1,
      aux_sym__sep_token1,
    ACTIONS(1875), 1,
      sym__space,
    STATE(416), 1,
      sym__sep,
  [4611] = 3,
    ACTIONS(1877), 1,
      aux_sym__sep_token1,
    ACTIONS(1879), 1,
      sym__space,
    STATE(104), 1,
      sym__sep,
  [4621] = 3,
    ACTIONS(1881), 1,
      aux_sym__sep_token1,
    ACTIONS(1883), 1,
      sym__space,
    STATE(418), 1,
      sym__sep,
  [4631] = 3,
    ACTIONS(1885), 1,
      aux_sym__sep_token1,
    ACTIONS(1887), 1,
      sym__space,
    STATE(667), 1,
      sym__sep,
  [4641] = 3,
    ACTIONS(1889), 1,
      aux_sym__sep_token1,
    ACTIONS(1891), 1,
      sym__space,
    STATE(423), 1,
      sym__sep,
  [4651] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1893), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      aux_sym__match_value_repeat4,
  [4661] = 3,
    ACTIONS(1895), 1,
      aux_sym__sep_token1,
    ACTIONS(1897), 1,
      sym__space,
    STATE(429), 1,
      sym__sep,
  [4671] = 3,
    ACTIONS(1899), 1,
      aux_sym__sep_token1,
    ACTIONS(1901), 1,
      sym__space,
    STATE(432), 1,
      sym__sep,
  [4681] = 3,
    ACTIONS(1903), 1,
      aux_sym__sep_token1,
    ACTIONS(1905), 1,
      sym__space,
    STATE(434), 1,
      sym__sep,
  [4691] = 3,
    ACTIONS(1907), 1,
      aux_sym__sep_token1,
    ACTIONS(1909), 1,
      sym__space,
    STATE(239), 1,
      sym__sep,
  [4701] = 3,
    ACTIONS(1911), 1,
      aux_sym__sep_token1,
    ACTIONS(1913), 1,
      sym__space,
    STATE(440), 1,
      sym__sep,
  [4711] = 3,
    ACTIONS(1915), 1,
      sym__space,
    ACTIONS(1917), 1,
      sym__eol,
    STATE(509), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4721] = 3,
    ACTIONS(1919), 1,
      aux_sym__sep_token1,
    ACTIONS(1921), 1,
      sym__space,
    STATE(241), 1,
      sym__sep,
  [4731] = 3,
    ACTIONS(1923), 1,
      aux_sym__sep_token1,
    ACTIONS(1925), 1,
      sym__space,
    STATE(441), 1,
      sym__sep,
  [4741] = 3,
    ACTIONS(1927), 1,
      aux_sym__sep_token1,
    ACTIONS(1929), 1,
      sym__space,
    STATE(163), 1,
      sym__sep,
  [4751] = 2,
    STATE(624), 1,
      sym__boolean,
    ACTIONS(1931), 2,
      anon_sym_yes,
      anon_sym_no,
  [4759] = 3,
    ACTIONS(1933), 1,
      aux_sym__sep_token1,
    ACTIONS(1935), 1,
      sym__space,
    STATE(443), 1,
      sym__sep,
  [4769] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(1937), 1,
      anon_sym_STAR,
    STATE(343), 1,
      sym_number,
  [4779] = 3,
    ACTIONS(1939), 1,
      aux_sym__sep_token1,
    ACTIONS(1941), 1,
      sym__space,
    STATE(134), 1,
      sym__sep,
  [4789] = 3,
    ACTIONS(1943), 1,
      aux_sym__sep_token1,
    ACTIONS(1945), 1,
      sym__space,
    STATE(64), 1,
      sym__sep,
  [4799] = 3,
    ACTIONS(1947), 1,
      anon_sym_DQUOTE,
    ACTIONS(1949), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym__log_verbose_repeat2,
  [4809] = 3,
    ACTIONS(1952), 1,
      sym__space,
    ACTIONS(1954), 1,
      sym__eol,
    STATE(467), 1,
      aux_sym_host_declaration_repeat1,
  [4819] = 2,
    STATE(760), 1,
      sym__boolean,
    ACTIONS(1956), 2,
      anon_sym_yes,
      anon_sym_no,
  [4827] = 2,
    STATE(758), 1,
      sym__boolean,
    ACTIONS(1958), 2,
      anon_sym_yes,
      anon_sym_no,
  [4835] = 2,
    ACTIONS(1960), 1,
      sym__number,
    ACTIONS(1962), 2,
      sym__space,
      sym__eol,
  [4843] = 2,
    ACTIONS(1964), 1,
      sym__number,
    ACTIONS(1962), 2,
      sym__space,
      sym__eol,
  [4851] = 2,
    ACTIONS(1966), 1,
      sym__number,
    ACTIONS(1962), 2,
      sym__space,
      sym__eol,
  [4859] = 3,
    ACTIONS(1968), 1,
      aux_sym__sep_token1,
    ACTIONS(1970), 1,
      sym__space,
    STATE(108), 1,
      sym__sep,
  [4869] = 3,
    ACTIONS(1972), 1,
      aux_sym__sep_token1,
    ACTIONS(1974), 1,
      sym__space,
    STATE(169), 1,
      sym__sep,
  [4879] = 3,
    ACTIONS(1976), 1,
      aux_sym__sep_token1,
    ACTIONS(1978), 1,
      sym__space,
    STATE(244), 1,
      sym__sep,
  [4889] = 3,
    ACTIONS(1867), 1,
      anon_sym_COMMA,
    ACTIONS(1980), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      aux_sym__match_localnetwork_repeat2,
  [4899] = 3,
    ACTIONS(1982), 1,
      sym__space,
    ACTIONS(1984), 1,
      sym__eol,
    STATE(510), 1,
      aux_sym__ignore_unknown_repeat1,
  [4909] = 3,
    ACTIONS(1986), 1,
      aux_sym__sep_token1,
    ACTIONS(1988), 1,
      sym__space,
    STATE(446), 1,
      sym__sep,
  [4919] = 3,
    ACTIONS(1990), 1,
      aux_sym__sep_token1,
    ACTIONS(1992), 1,
      sym__space,
    STATE(246), 1,
      sym__sep,
  [4929] = 3,
    ACTIONS(1994), 1,
      aux_sym__sep_token1,
    ACTIONS(1996), 1,
      sym__space,
    STATE(100), 1,
      sym__sep,
  [4939] = 2,
    ACTIONS(2000), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1998), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [4947] = 3,
    ACTIONS(2002), 1,
      aux_sym__sep_token1,
    ACTIONS(2004), 1,
      sym__space,
    STATE(207), 1,
      sym__sep,
  [4957] = 3,
    ACTIONS(2006), 1,
      aux_sym__sep_token1,
    ACTIONS(2008), 1,
      sym__space,
    STATE(49), 1,
      sym__sep,
  [4967] = 3,
    ACTIONS(2010), 1,
      aux_sym__sep_token1,
    ACTIONS(2012), 1,
      sym__space,
    STATE(793), 1,
      sym__sep,
  [4977] = 2,
    STATE(665), 1,
      sym__boolean,
    ACTIONS(2014), 2,
      anon_sym_yes,
      anon_sym_no,
  [4985] = 3,
    ACTIONS(2016), 1,
      aux_sym__sep_token1,
    ACTIONS(2018), 1,
      sym__space,
    STATE(144), 1,
      sym__sep,
  [4995] = 3,
    ACTIONS(1619), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1621), 1,
      sym_token,
    STATE(265), 1,
      aux_sym__token_string_repeat2,
  [5005] = 3,
    ACTIONS(2020), 1,
      sym__space,
    ACTIONS(2022), 1,
      sym__eol,
    STATE(514), 1,
      aux_sym__local_command_repeat1,
  [5015] = 3,
    ACTIONS(2024), 1,
      aux_sym__sep_token1,
    ACTIONS(2026), 1,
      sym__space,
    STATE(248), 1,
      sym__sep,
  [5025] = 3,
    ACTIONS(2028), 1,
      aux_sym__sep_token1,
    ACTIONS(2030), 1,
      sym__space,
    STATE(450), 1,
      sym__sep,
  [5035] = 3,
    ACTIONS(2032), 1,
      aux_sym__sep_token1,
    ACTIONS(2034), 1,
      sym__space,
    STATE(628), 1,
      sym__sep,
  [5045] = 3,
    ACTIONS(2036), 1,
      aux_sym__sep_token1,
    ACTIONS(2038), 1,
      sym__space,
    STATE(455), 1,
      sym__sep,
  [5055] = 3,
    ACTIONS(2040), 1,
      aux_sym__sep_token1,
    ACTIONS(2042), 1,
      sym__space,
    STATE(457), 1,
      sym__sep,
  [5065] = 3,
    ACTIONS(2044), 1,
      aux_sym__sep_token1,
    ACTIONS(2046), 1,
      sym__space,
    STATE(147), 1,
      sym__sep,
  [5075] = 3,
    ACTIONS(2048), 1,
      aux_sym__sep_token1,
    ACTIONS(2050), 1,
      sym__space,
    STATE(461), 1,
      sym__sep,
  [5085] = 3,
    ACTIONS(2052), 1,
      aux_sym__sep_token1,
    ACTIONS(2054), 1,
      sym__space,
    STATE(601), 1,
      sym__sep,
  [5095] = 3,
    ACTIONS(2056), 1,
      aux_sym__sep_token1,
    ACTIONS(2058), 1,
      sym__space,
    STATE(802), 1,
      sym__sep,
  [5105] = 3,
    ACTIONS(2060), 1,
      aux_sym__sep_token1,
    ACTIONS(2062), 1,
      sym__space,
    STATE(128), 1,
      sym__sep,
  [5115] = 3,
    ACTIONS(2064), 1,
      sym__space,
    ACTIONS(2067), 1,
      sym__eol,
    STATE(403), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5125] = 3,
    ACTIONS(2069), 1,
      sym__space,
    ACTIONS(2072), 1,
      sym__eol,
    STATE(404), 1,
      aux_sym__set_env_repeat1,
  [5135] = 3,
    ACTIONS(2074), 1,
      sym__space,
    ACTIONS(2077), 1,
      sym__eol,
    STATE(405), 1,
      aux_sym__send_env_repeat1,
  [5145] = 3,
    ACTIONS(2079), 1,
      sym__space,
    ACTIONS(2082), 1,
      sym__eol,
    STATE(406), 1,
      aux_sym__remote_command_repeat1,
  [5155] = 2,
    STATE(756), 1,
      sym__boolean,
    ACTIONS(2084), 2,
      anon_sym_yes,
      anon_sym_no,
  [5163] = 2,
    ACTIONS(2086), 1,
      anon_sym_COLON,
    ACTIONS(2088), 2,
      sym__space,
      sym__eol,
  [5171] = 3,
    ACTIONS(2090), 1,
      sym__space,
    ACTIONS(2093), 1,
      sym__eol,
    STATE(409), 1,
      aux_sym__proxy_command_arg_repeat1,
  [5181] = 3,
    ACTIONS(2095), 1,
      aux_sym__sep_token1,
    ACTIONS(2097), 1,
      sym__space,
    STATE(256), 1,
      sym__sep,
  [5191] = 3,
    ACTIONS(2099), 1,
      sym__space,
    ACTIONS(2101), 1,
      sym__eol,
    STATE(519), 1,
      aux_sym__permit_remote_open_repeat1,
  [5201] = 1,
    ACTIONS(1503), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5207] = 3,
    ACTIONS(2103), 1,
      sym__space,
    ACTIONS(2106), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym__permit_remote_open_repeat1,
  [5217] = 2,
    STATE(656), 1,
      sym__boolean,
    ACTIONS(2108), 2,
      anon_sym_yes,
      anon_sym_no,
  [5225] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(2110), 1,
      anon_sym_STAR,
    STATE(774), 1,
      sym_number,
  [5235] = 2,
    STATE(754), 1,
      sym__boolean,
    ACTIONS(2112), 2,
      anon_sym_yes,
      anon_sym_no,
  [5243] = 1,
    ACTIONS(1508), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5249] = 2,
    STATE(749), 1,
      sym__boolean,
    ACTIONS(2114), 2,
      anon_sym_yes,
      anon_sym_no,
  [5257] = 3,
    ACTIONS(2116), 1,
      sym__space,
    ACTIONS(2118), 1,
      sym__eol,
    STATE(505), 1,
      aux_sym__proxy_command_arg_repeat1,
  [5267] = 3,
    ACTIONS(2120), 1,
      aux_sym__sep_token1,
    ACTIONS(2122), 1,
      sym__space,
    STATE(438), 1,
      sym__sep,
  [5277] = 1,
    ACTIONS(2124), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5283] = 2,
    ACTIONS(2126), 1,
      anon_sym_COLON,
    ACTIONS(2128), 2,
      sym__space,
      sym__eol,
  [5291] = 2,
    STATE(747), 1,
      sym__boolean,
    ACTIONS(2130), 2,
      anon_sym_yes,
      anon_sym_no,
  [5299] = 3,
    ACTIONS(2132), 1,
      anon_sym_DQUOTE,
    ACTIONS(2134), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym__log_verbose_repeat2,
  [5309] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(623), 1,
      sym_string,
  [5319] = 3,
    ACTIONS(2136), 1,
      aux_sym__sep_token1,
    ACTIONS(2138), 1,
      sym__space,
    STATE(258), 1,
      sym__sep,
  [5329] = 3,
    ACTIONS(2140), 1,
      sym__space,
    ACTIONS(2143), 1,
      sym__eol,
    STATE(427), 1,
      aux_sym__local_command_repeat1,
  [5339] = 2,
    ACTIONS(2145), 1,
      aux_sym_bytes_token1,
    ACTIONS(2147), 2,
      sym__space,
      sym__eol,
  [5347] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(361), 1,
      sym_string,
  [5357] = 3,
    ACTIONS(2149), 1,
      sym__space,
    ACTIONS(2151), 1,
      sym__eol,
    STATE(501), 1,
      aux_sym__remote_command_repeat1,
  [5367] = 3,
    ACTIONS(2153), 1,
      aux_sym__sep_token1,
    ACTIONS(2155), 1,
      sym__space,
    STATE(153), 1,
      sym__sep,
  [5377] = 2,
    STATE(746), 1,
      sym__boolean,
    ACTIONS(2157), 2,
      anon_sym_yes,
      anon_sym_no,
  [5385] = 1,
    ACTIONS(1530), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5391] = 2,
    STATE(744), 1,
      sym__boolean,
    ACTIONS(2159), 2,
      anon_sym_yes,
      anon_sym_no,
  [5399] = 3,
    ACTIONS(2161), 1,
      sym__space,
    ACTIONS(2164), 1,
      sym__eol,
    STATE(435), 1,
      aux_sym__ignore_unknown_repeat1,
  [5409] = 3,
    ACTIONS(2166), 1,
      aux_sym__sep_token1,
    ACTIONS(2168), 1,
      sym__space,
    STATE(503), 1,
      sym__sep,
  [5419] = 3,
    ACTIONS(2170), 1,
      aux_sym__sep_token1,
    ACTIONS(2172), 1,
      sym__space,
    STATE(105), 1,
      sym__sep,
  [5429] = 2,
    STATE(666), 1,
      sym__boolean,
    ACTIONS(2174), 2,
      anon_sym_yes,
      anon_sym_no,
  [5437] = 3,
    ACTIONS(2176), 1,
      sym__space,
    ACTIONS(2178), 1,
      sym__eol,
    STATE(500), 1,
      aux_sym__send_env_repeat1,
  [5447] = 2,
    STATE(742), 1,
      sym__boolean,
    ACTIONS(2180), 2,
      anon_sym_yes,
      anon_sym_no,
  [5455] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(737), 1,
      sym_string,
  [5465] = 1,
    ACTIONS(1545), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5471] = 2,
    STATE(730), 1,
      sym__boolean,
    ACTIONS(2182), 2,
      anon_sym_yes,
      anon_sym_no,
  [5479] = 3,
    ACTIONS(2184), 1,
      sym__space,
    ACTIONS(2187), 1,
      sym__eol,
    STATE(444), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5489] = 3,
    ACTIONS(2189), 1,
      sym__space,
    ACTIONS(2191), 1,
      sym__eol,
    STATE(498), 1,
      aux_sym__set_env_repeat1,
  [5499] = 2,
    STATE(720), 1,
      sym__boolean,
    ACTIONS(2193), 2,
      anon_sym_yes,
      anon_sym_no,
  [5507] = 1,
    ACTIONS(1556), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5513] = 3,
    ACTIONS(2195), 1,
      aux_sym__sep_token1,
    ACTIONS(2197), 1,
      sym__space,
    STATE(50), 1,
      sym__sep,
  [5523] = 3,
    ACTIONS(2199), 1,
      aux_sym__sep_token1,
    ACTIONS(2201), 1,
      sym__space,
    STATE(190), 1,
      sym__sep,
  [5533] = 2,
    STATE(698), 1,
      sym__boolean,
    ACTIONS(2203), 2,
      anon_sym_yes,
      anon_sym_no,
  [5541] = 1,
    ACTIONS(1571), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5547] = 3,
    ACTIONS(1482), 1,
      anon_sym_COLON,
    ACTIONS(2205), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym__cnames_map_repeat1,
  [5557] = 3,
    ACTIONS(2208), 1,
      aux_sym__sep_token1,
    ACTIONS(2210), 1,
      sym__space,
    STATE(546), 1,
      sym__sep,
  [5567] = 2,
    ACTIONS(2212), 1,
      anon_sym_COLON,
    ACTIONS(2214), 2,
      sym__space,
      sym__eol,
  [5575] = 2,
    STATE(692), 1,
      sym__boolean,
    ACTIONS(2216), 2,
      anon_sym_yes,
      anon_sym_no,
  [5583] = 3,
    ACTIONS(2218), 1,
      sym__space,
    ACTIONS(2220), 1,
      sym__eol,
    STATE(494), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5593] = 2,
    STATE(664), 1,
      sym__boolean,
    ACTIONS(2222), 2,
      anon_sym_yes,
      anon_sym_no,
  [5601] = 3,
    ACTIONS(2224), 1,
      sym__space,
    ACTIONS(2227), 1,
      sym__eol,
    STATE(458), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5611] = 3,
    ACTIONS(2229), 1,
      sym__space,
    ACTIONS(2232), 1,
      sym__eol,
    STATE(459), 1,
      aux_sym__canonical_domains_repeat1,
  [5621] = 3,
    ACTIONS(1585), 1,
      aux_sym_time_token3,
    ACTIONS(1587), 1,
      aux_sym_time_token4,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [5631] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(681), 1,
      sym_string,
  [5641] = 3,
    ACTIONS(2234), 1,
      sym__space,
    ACTIONS(2236), 1,
      sym__eol,
    STATE(492), 1,
      aux_sym_host_declaration_repeat1,
  [5651] = 1,
    ACTIONS(2238), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [5657] = 3,
    ACTIONS(2240), 1,
      aux_sym__sep_token1,
    ACTIONS(2242), 1,
      sym__space,
    STATE(98), 1,
      sym__sep,
  [5667] = 3,
    ACTIONS(2244), 1,
      aux_sym__sep_token1,
    ACTIONS(2246), 1,
      sym__space,
    STATE(188), 1,
      sym__sep,
  [5677] = 3,
    ACTIONS(2248), 1,
      aux_sym__sep_token1,
    ACTIONS(2250), 1,
      sym__space,
    STATE(175), 1,
      sym__sep,
  [5687] = 3,
    ACTIONS(2252), 1,
      sym__space,
    ACTIONS(2254), 1,
      sym__eol,
    STATE(482), 1,
      aux_sym_host_declaration_repeat1,
  [5697] = 3,
    ACTIONS(2256), 1,
      aux_sym__sep_token1,
    ACTIONS(2258), 1,
      sym__space,
    STATE(534), 1,
      sym__sep,
  [5707] = 3,
    ACTIONS(2260), 1,
      aux_sym__sep_token1,
    ACTIONS(2262), 1,
      sym__space,
    STATE(532), 1,
      sym__sep,
  [5717] = 3,
    ACTIONS(2264), 1,
      aux_sym__sep_token1,
    ACTIONS(2266), 1,
      sym__space,
    STATE(186), 1,
      sym__sep,
  [5727] = 3,
    ACTIONS(2268), 1,
      aux_sym__sep_token1,
    ACTIONS(2270), 1,
      sym__space,
    STATE(518), 1,
      sym__sep,
  [5737] = 3,
    ACTIONS(2272), 1,
      aux_sym__sep_token1,
    ACTIONS(2274), 1,
      sym__space,
    STATE(816), 1,
      sym__sep,
  [5747] = 3,
    ACTIONS(2276), 1,
      anon_sym_BANG,
    ACTIONS(2278), 1,
      anon_sym_DQUOTE,
    ACTIONS(2280), 1,
      aux_sym__match_localnetwork_token2,
  [5757] = 3,
    ACTIONS(2282), 1,
      aux_sym__sep_token1,
    ACTIONS(2284), 1,
      sym__space,
    STATE(513), 1,
      sym__sep,
  [5767] = 3,
    ACTIONS(2286), 1,
      aux_sym__sep_token1,
    ACTIONS(2288), 1,
      sym__space,
    STATE(174), 1,
      sym__sep,
  [5777] = 3,
    ACTIONS(2290), 1,
      aux_sym__sep_token1,
    ACTIONS(2292), 1,
      sym__space,
    STATE(769), 1,
      sym__sep,
  [5787] = 3,
    ACTIONS(2294), 1,
      aux_sym__sep_token1,
    ACTIONS(2296), 1,
      sym__space,
    STATE(506), 1,
      sym__sep,
  [5797] = 3,
    ACTIONS(2298), 1,
      aux_sym__sep_token1,
    ACTIONS(2300), 1,
      sym__space,
    STATE(504), 1,
      sym__sep,
  [5807] = 3,
    ACTIONS(2302), 1,
      aux_sym__sep_token1,
    ACTIONS(2304), 1,
      sym__space,
    STATE(184), 1,
      sym__sep,
  [5817] = 3,
    ACTIONS(2306), 1,
      aux_sym__sep_token1,
    ACTIONS(2308), 1,
      sym__space,
    STATE(497), 1,
      sym__sep,
  [5827] = 3,
    ACTIONS(2310), 1,
      aux_sym__sep_token1,
    ACTIONS(2312), 1,
      sym__space,
    STATE(280), 1,
      sym__sep,
  [5837] = 3,
    ACTIONS(2314), 1,
      sym__space,
    ACTIONS(2317), 1,
      sym__eol,
    STATE(482), 1,
      aux_sym_host_declaration_repeat1,
  [5847] = 3,
    ACTIONS(2319), 1,
      aux_sym__sep_token1,
    ACTIONS(2321), 1,
      sym__space,
    STATE(96), 1,
      sym__sep,
  [5857] = 3,
    ACTIONS(2323), 1,
      aux_sym__sep_token1,
    ACTIONS(2325), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [5867] = 2,
    ACTIONS(2327), 1,
      sym__number,
    ACTIONS(2329), 2,
      sym__space,
      sym__eol,
  [5875] = 2,
    ACTIONS(2331), 1,
      sym__number,
    ACTIONS(2329), 2,
      sym__space,
      sym__eol,
  [5883] = 2,
    ACTIONS(2333), 1,
      sym__number,
    ACTIONS(2329), 2,
      sym__space,
      sym__eol,
  [5891] = 2,
    ACTIONS(2335), 1,
      sym__number,
    ACTIONS(2329), 2,
      sym__space,
      sym__eol,
  [5899] = 3,
    ACTIONS(2337), 1,
      aux_sym__sep_token1,
    ACTIONS(2339), 1,
      sym__space,
    STATE(365), 1,
      sym__sep,
  [5909] = 3,
    ACTIONS(2341), 1,
      aux_sym__sep_token1,
    ACTIONS(2343), 1,
      sym__space,
    STATE(425), 1,
      sym__sep,
  [5919] = 3,
    ACTIONS(1783), 1,
      sym__space,
    ACTIONS(2345), 1,
      sym__eol,
    STATE(459), 1,
      aux_sym__canonical_domains_repeat1,
  [5929] = 3,
    ACTIONS(2347), 1,
      sym__space,
    ACTIONS(2349), 1,
      sym__eol,
    STATE(482), 1,
      aux_sym_host_declaration_repeat1,
  [5939] = 3,
    ACTIONS(1806), 1,
      sym__space,
    ACTIONS(2351), 1,
      sym__eol,
    STATE(458), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5949] = 3,
    ACTIONS(2218), 1,
      sym__space,
    ACTIONS(2353), 1,
      sym__eol,
    STATE(403), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5959] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(2355), 1,
      anon_sym_any,
    STATE(696), 1,
      sym_number,
  [5969] = 3,
    ACTIONS(1810), 1,
      anon_sym_COMMA,
    ACTIONS(2357), 1,
      anon_sym_COLON,
    STATE(452), 1,
      aux_sym__cnames_map_repeat1,
  [5979] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(2359), 1,
      anon_sym_any,
    STATE(454), 1,
      sym_number,
  [5989] = 3,
    ACTIONS(2189), 1,
      sym__space,
    ACTIONS(2361), 1,
      sym__eol,
    STATE(404), 1,
      aux_sym__set_env_repeat1,
  [5999] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(693), 1,
      sym_string,
  [6009] = 3,
    ACTIONS(2176), 1,
      sym__space,
    ACTIONS(2363), 1,
      sym__eol,
    STATE(405), 1,
      aux_sym__send_env_repeat1,
  [6019] = 3,
    ACTIONS(2149), 1,
      sym__space,
    ACTIONS(2365), 1,
      sym__eol,
    STATE(406), 1,
      aux_sym__remote_command_repeat1,
  [6029] = 3,
    ACTIONS(2367), 1,
      aux_sym__sep_token1,
    ACTIONS(2369), 1,
      sym__space,
    STATE(133), 1,
      sym__sep,
  [6039] = 3,
    ACTIONS(2371), 1,
      anon_sym_none,
    ACTIONS(2373), 1,
      sym__number,
    STATE(658), 1,
      sym_bytes,
  [6049] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(629), 1,
      sym_string,
  [6059] = 3,
    ACTIONS(2116), 1,
      sym__space,
    ACTIONS(2375), 1,
      sym__eol,
    STATE(409), 1,
      aux_sym__proxy_command_arg_repeat1,
  [6069] = 2,
    STATE(630), 1,
      sym__boolean,
    ACTIONS(2377), 2,
      anon_sym_yes,
      anon_sym_no,
  [6077] = 2,
    ACTIONS(2381), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2379), 2,
      anon_sym_DQUOTE,
      aux_sym__proxy_token_token1,
  [6085] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(637), 1,
      sym_string,
  [6095] = 3,
    ACTIONS(1915), 1,
      sym__space,
    ACTIONS(2383), 1,
      sym__eol,
    STATE(444), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [6105] = 3,
    ACTIONS(1982), 1,
      sym__space,
    ACTIONS(2385), 1,
      sym__eol,
    STATE(435), 1,
      aux_sym__ignore_unknown_repeat1,
  [6115] = 3,
    ACTIONS(951), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(588), 1,
      sym_string,
  [6125] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(2387), 1,
      anon_sym_STAR,
    STATE(674), 1,
      sym_number,
  [6135] = 2,
    STATE(635), 1,
      sym__boolean,
    ACTIONS(2389), 2,
      anon_sym_yes,
      anon_sym_no,
  [6143] = 3,
    ACTIONS(2020), 1,
      sym__space,
    ACTIONS(2391), 1,
      sym__eol,
    STATE(427), 1,
      aux_sym__local_command_repeat1,
  [6153] = 2,
    ACTIONS(2395), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2393), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [6161] = 3,
    ACTIONS(1560), 1,
      sym__number,
    ACTIONS(2397), 1,
      anon_sym_STAR,
    STATE(675), 1,
      sym_number,
  [6171] = 2,
    STATE(603), 1,
      sym__boolean,
    ACTIONS(2399), 2,
      anon_sym_yes,
      anon_sym_no,
  [6179] = 2,
    STATE(638), 1,
      sym__boolean,
    ACTIONS(2401), 2,
      anon_sym_yes,
      anon_sym_no,
  [6187] = 3,
    ACTIONS(2099), 1,
      sym__space,
    ACTIONS(2403), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym__permit_remote_open_repeat1,
  [6197] = 3,
    ACTIONS(2134), 1,
      anon_sym_COMMA,
    ACTIONS(2405), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      aux_sym__log_verbose_repeat2,
  [6207] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(685), 1,
      sym_number,
  [6214] = 1,
    ACTIONS(2407), 2,
      sym__space,
      sym__eol,
  [6219] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(677), 1,
      sym_number,
  [6226] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6231] = 2,
    ACTIONS(2411), 1,
      sym__space,
    ACTIONS(2413), 1,
      sym__eol,
  [6238] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6243] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6248] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6253] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6258] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6263] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6268] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(641), 1,
      sym_number,
  [6275] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6280] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(642), 1,
      sym_number,
  [6287] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6292] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6297] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6302] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6307] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6312] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6317] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(790), 1,
      sym_number,
  [6324] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6329] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6334] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6339] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6344] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(652), 1,
      sym_number,
  [6351] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6356] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6361] = 2,
    ACTIONS(2415), 1,
      anon_sym_inet,
    ACTIONS(2417), 1,
      anon_sym_inet6,
  [6368] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6373] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6378] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6383] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6388] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6393] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6398] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6403] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6408] = 1,
    ACTIONS(2419), 2,
      sym__space,
      sym__eol,
  [6413] = 1,
    ACTIONS(2421), 2,
      sym__space,
      sym__eol,
  [6418] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6423] = 1,
    ACTIONS(2423), 2,
      sym__space,
      sym__eol,
  [6428] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6433] = 1,
    ACTIONS(2425), 2,
      sym__space,
      sym__eol,
  [6438] = 2,
    ACTIONS(1231), 1,
      sym__number,
    STATE(687), 1,
      sym_time,
  [6445] = 1,
    ACTIONS(2421), 2,
      sym__space,
      sym__eol,
  [6450] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6455] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6460] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6465] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6470] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6475] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6480] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6485] = 2,
    ACTIONS(2427), 1,
      sym__var_name,
    STATE(694), 1,
      sym__set_env_value,
  [6492] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6497] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6502] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6507] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6512] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6517] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6522] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6527] = 1,
    ACTIONS(2429), 2,
      sym__space,
      sym__eol,
  [6532] = 2,
    ACTIONS(2431), 1,
      anon_sym_none,
    ACTIONS(2433), 1,
      aux_sym__escape_char_token2,
  [6539] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6544] = 2,
    ACTIONS(782), 1,
      sym__space,
    ACTIONS(784), 1,
      sym__eol,
  [6551] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6556] = 1,
    ACTIONS(2435), 2,
      sym__space,
      sym__eol,
  [6561] = 2,
    ACTIONS(2437), 1,
      sym__space,
    ACTIONS(2439), 1,
      sym__eol,
  [6568] = 1,
    ACTIONS(2441), 2,
      sym__space,
      sym__eol,
  [6573] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6578] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6583] = 1,
    ACTIONS(2329), 2,
      sym__space,
      sym__eol,
  [6588] = 2,
    ACTIONS(1231), 1,
      sym__number,
    STATE(615), 1,
      sym_time,
  [6595] = 1,
    ACTIONS(2443), 2,
      sym__space,
      sym__eol,
  [6600] = 2,
    ACTIONS(2443), 1,
      sym__eol,
    ACTIONS(2445), 1,
      sym__space,
  [6607] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6612] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6617] = 1,
    ACTIONS(2447), 2,
      sym__space,
      sym__eol,
  [6622] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6627] = 1,
    ACTIONS(2449), 2,
      sym__space,
      sym__eol,
  [6632] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6637] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(678), 1,
      sym_number,
  [6644] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6649] = 1,
    ACTIONS(2451), 2,
      sym__space,
      sym__eol,
  [6654] = 1,
    ACTIONS(2453), 2,
      sym__space,
      sym__eol,
  [6659] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6664] = 1,
    ACTIONS(2421), 2,
      sym__space,
      sym__eol,
  [6669] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6674] = 2,
    ACTIONS(2455), 1,
      aux_sym__all_token1,
    STATE(85), 1,
      sym__all,
  [6681] = 2,
    ACTIONS(2457), 1,
      aux_sym__all_token1,
    STATE(86), 1,
      sym__all,
  [6688] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6693] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6698] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6703] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6708] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6713] = 1,
    ACTIONS(2459), 2,
      sym__space,
      sym__eol,
  [6718] = 1,
    ACTIONS(2461), 2,
      sym__space,
      sym__eol,
  [6723] = 1,
    ACTIONS(1773), 2,
      sym__space,
      sym__eol,
  [6728] = 2,
    ACTIONS(1587), 1,
      aux_sym_time_token4,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [6735] = 1,
    ACTIONS(2463), 2,
      sym__space,
      sym__eol,
  [6740] = 1,
    ACTIONS(2465), 2,
      sym__space,
      sym__eol,
  [6745] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6750] = 1,
    ACTIONS(2467), 2,
      sym__space,
      sym__eol,
  [6755] = 1,
    ACTIONS(2469), 2,
      sym__space,
      sym__eol,
  [6760] = 1,
    ACTIONS(2471), 2,
      sym__space,
      sym__eol,
  [6765] = 1,
    ACTIONS(2473), 2,
      sym__space,
      sym__eol,
  [6770] = 1,
    ACTIONS(2475), 2,
      sym__space,
      sym__eol,
  [6775] = 1,
    ACTIONS(2477), 2,
      sym__space,
      sym__eol,
  [6780] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(695), 1,
      sym_number,
  [6787] = 1,
    ACTIONS(2479), 2,
      sym__space,
      sym__eol,
  [6792] = 1,
    ACTIONS(2481), 2,
      sym__space,
      sym__eol,
  [6797] = 1,
    ACTIONS(2483), 2,
      sym__space,
      sym__eol,
  [6802] = 1,
    ACTIONS(2485), 2,
      sym__space,
      sym__eol,
  [6807] = 1,
    ACTIONS(2487), 2,
      sym__space,
      sym__eol,
  [6812] = 2,
    ACTIONS(2489), 1,
      aux_sym_time_token4,
    ACTIONS(2491), 1,
      aux_sym_time_token5,
  [6819] = 1,
    ACTIONS(2493), 2,
      sym__space,
      sym__eol,
  [6824] = 1,
    ACTIONS(2495), 2,
      sym__space,
      sym__eol,
  [6829] = 1,
    ACTIONS(2497), 2,
      sym__space,
      sym__eol,
  [6834] = 1,
    ACTIONS(2499), 2,
      sym__space,
      sym__eol,
  [6839] = 1,
    ACTIONS(2501), 2,
      sym__space,
      sym__eol,
  [6844] = 1,
    ACTIONS(2503), 2,
      sym__space,
      sym__eol,
  [6849] = 1,
    ACTIONS(2505), 2,
      sym__space,
      sym__eol,
  [6854] = 1,
    ACTIONS(2507), 2,
      sym__space,
      sym__eol,
  [6859] = 1,
    ACTIONS(2509), 2,
      sym__space,
      sym__eol,
  [6864] = 1,
    ACTIONS(2447), 2,
      sym__space,
      sym__eol,
  [6869] = 1,
    ACTIONS(2511), 2,
      sym__space,
      sym__eol,
  [6874] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6879] = 1,
    ACTIONS(2164), 2,
      sym__space,
      sym__eol,
  [6884] = 1,
    ACTIONS(2513), 2,
      sym__space,
      sym__eol,
  [6889] = 1,
    ACTIONS(2515), 2,
      sym__space,
      sym__eol,
  [6894] = 1,
    ACTIONS(2517), 2,
      sym__space,
      sym__eol,
  [6899] = 1,
    ACTIONS(2519), 2,
      sym__space,
      sym__eol,
  [6904] = 1,
    ACTIONS(2521), 2,
      sym__space,
      sym__eol,
  [6909] = 1,
    ACTIONS(2523), 2,
      sym__space,
      sym__eol,
  [6914] = 1,
    ACTIONS(2525), 2,
      sym__space,
      sym__eol,
  [6919] = 1,
    ACTIONS(2527), 2,
      sym__space,
      sym__eol,
  [6924] = 1,
    ACTIONS(2529), 2,
      sym__space,
      sym__eol,
  [6929] = 1,
    ACTIONS(2143), 2,
      sym__space,
      sym__eol,
  [6934] = 2,
    ACTIONS(2531), 1,
      sym__space,
    ACTIONS(2533), 1,
      sym__eol,
  [6941] = 1,
    ACTIONS(2535), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6946] = 1,
    ACTIONS(1789), 2,
      sym__space,
      sym__eol,
  [6951] = 1,
    ACTIONS(2537), 2,
      sym__space,
      sym__eol,
  [6956] = 1,
    ACTIONS(2539), 2,
      sym__space,
      sym__eol,
  [6961] = 1,
    ACTIONS(2533), 2,
      sym__space,
      sym__eol,
  [6966] = 1,
    ACTIONS(2541), 2,
      sym__space,
      sym__eol,
  [6971] = 1,
    ACTIONS(2543), 2,
      sym__space,
      sym__eol,
  [6976] = 1,
    ACTIONS(2545), 2,
      sym__space,
      sym__eol,
  [6981] = 2,
    ACTIONS(1231), 1,
      sym__number,
    STATE(748), 1,
      sym_time,
  [6988] = 1,
    ACTIONS(2547), 2,
      sym__space,
      sym__eol,
  [6993] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6998] = 1,
    ACTIONS(2549), 2,
      sym__space,
      sym__eol,
  [7003] = 1,
    ACTIONS(2118), 2,
      sym__space,
      sym__eol,
  [7008] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7013] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7018] = 1,
    ACTIONS(2551), 2,
      sym__space,
      sym__eol,
  [7023] = 1,
    ACTIONS(2553), 2,
      sym__space,
      sym__eol,
  [7028] = 1,
    ACTIONS(2555), 2,
      sym__space,
      sym__eol,
  [7033] = 1,
    ACTIONS(2557), 2,
      sym__space,
      sym__eol,
  [7038] = 1,
    ACTIONS(2559), 2,
      sym__space,
      sym__eol,
  [7043] = 1,
    ACTIONS(2561), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [7048] = 1,
    ACTIONS(2563), 2,
      sym__space,
      sym__eol,
  [7053] = 1,
    ACTIONS(2565), 2,
      sym__space,
      sym__eol,
  [7058] = 1,
    ACTIONS(2093), 2,
      sym__space,
      sym__eol,
  [7063] = 1,
    ACTIONS(2567), 2,
      sym__space,
      sym__eol,
  [7068] = 1,
    ACTIONS(2569), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7073] = 1,
    ACTIONS(2088), 2,
      sym__space,
      sym__eol,
  [7078] = 2,
    ACTIONS(2571), 1,
      aux_sym__match_localnetwork_token3,
    ACTIONS(2573), 1,
      anon_sym_STAR,
  [7085] = 1,
    ACTIONS(2575), 2,
      sym__space,
      sym__eol,
  [7090] = 1,
    ACTIONS(2082), 2,
      sym__space,
      sym__eol,
  [7095] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7100] = 1,
    ACTIONS(2577), 2,
      sym__space,
      sym__eol,
  [7105] = 1,
    ACTIONS(2579), 2,
      sym__space,
      sym__eol,
  [7110] = 1,
    ACTIONS(2581), 2,
      sym__space,
      sym__eol,
  [7115] = 1,
    ACTIONS(2583), 2,
      sym__space,
      sym__eol,
  [7120] = 1,
    ACTIONS(2585), 2,
      sym__space,
      sym__eol,
  [7125] = 1,
    ACTIONS(2587), 2,
      sym__space,
      sym__eol,
  [7130] = 1,
    ACTIONS(2589), 2,
      sym__space,
      sym__eol,
  [7135] = 1,
    ACTIONS(2591), 2,
      sym__space,
      sym__eol,
  [7140] = 1,
    ACTIONS(2593), 2,
      sym__space,
      sym__eol,
  [7145] = 2,
    ACTIONS(2595), 1,
      sym__space,
    ACTIONS(2597), 1,
      sym__eol,
  [7152] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7157] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7162] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7167] = 1,
    ACTIONS(2599), 2,
      sym__space,
      sym__eol,
  [7172] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7177] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7182] = 1,
    ACTIONS(2601), 2,
      sym__space,
      sym__eol,
  [7187] = 2,
    ACTIONS(2603), 1,
      sym__space,
    ACTIONS(2605), 1,
      sym__eol,
  [7194] = 1,
    ACTIONS(2607), 2,
      sym__space,
      sym__eol,
  [7199] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7204] = 1,
    ACTIONS(2609), 2,
      sym__space,
      sym__eol,
  [7209] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7214] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7219] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7224] = 1,
    ACTIONS(2611), 2,
      sym__space,
      sym__eol,
  [7229] = 1,
    ACTIONS(2613), 2,
      sym__space,
      sym__eol,
  [7234] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7239] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7244] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7249] = 1,
    ACTIONS(2615), 2,
      sym__space,
      sym__eol,
  [7254] = 1,
    ACTIONS(2617), 2,
      sym__space,
      sym__eol,
  [7259] = 2,
    ACTIONS(2619), 1,
      sym__space,
    ACTIONS(2621), 1,
      sym__eol,
  [7266] = 2,
    ACTIONS(2623), 1,
      anon_sym_BANG,
    ACTIONS(2625), 1,
      aux_sym__match_localnetwork_token2,
  [7273] = 1,
    ACTIONS(2627), 2,
      sym__space,
      sym__eol,
  [7278] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7283] = 1,
    ACTIONS(2629), 2,
      sym__space,
      sym__eol,
  [7288] = 1,
    ACTIONS(2631), 2,
      sym__space,
      sym__eol,
  [7293] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7298] = 1,
    ACTIONS(2633), 2,
      sym__space,
      sym__eol,
  [7303] = 1,
    ACTIONS(1962), 2,
      sym__space,
      sym__eol,
  [7308] = 1,
    ACTIONS(2635), 2,
      sym__space,
      sym__eol,
  [7313] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7318] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(753), 1,
      sym_number,
  [7325] = 1,
    ACTIONS(2637), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7330] = 1,
    ACTIONS(2639), 2,
      sym__space,
      sym__eol,
  [7335] = 1,
    ACTIONS(2641), 2,
      sym__space,
      sym__eol,
  [7340] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [7345] = 1,
    ACTIONS(2643), 2,
      sym__space,
      sym__eol,
  [7350] = 1,
    ACTIONS(2645), 2,
      sym__space,
      sym__eol,
  [7355] = 1,
    ACTIONS(2647), 2,
      sym__space,
      sym__eol,
  [7360] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(739), 1,
      sym_number,
  [7367] = 1,
    ACTIONS(2649), 2,
      sym__space,
      sym__eol,
  [7372] = 1,
    ACTIONS(2651), 2,
      sym__space,
      sym__eol,
  [7377] = 1,
    ACTIONS(2653), 2,
      sym__space,
      sym__eol,
  [7382] = 1,
    ACTIONS(2655), 2,
      sym__space,
      sym__eol,
  [7387] = 1,
    ACTIONS(2657), 2,
      sym__space,
      sym__eol,
  [7392] = 1,
    ACTIONS(2659), 2,
      sym__space,
      sym__eol,
  [7397] = 1,
    ACTIONS(2661), 2,
      sym__space,
      sym__eol,
  [7402] = 1,
    ACTIONS(2663), 2,
      sym__space,
      sym__eol,
  [7407] = 1,
    ACTIONS(2665), 2,
      sym__space,
      sym__eol,
  [7412] = 1,
    ACTIONS(2667), 2,
      sym__space,
      sym__eol,
  [7417] = 1,
    ACTIONS(2669), 2,
      sym__space,
      sym__eol,
  [7422] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(750), 1,
      sym_number,
  [7429] = 1,
    ACTIONS(2671), 2,
      sym__space,
      sym__eol,
  [7434] = 1,
    ACTIONS(2673), 2,
      sym__space,
      sym__eol,
  [7439] = 1,
    ACTIONS(2675), 2,
      sym__space,
      sym__eol,
  [7444] = 1,
    ACTIONS(2677), 2,
      sym__space,
      sym__eol,
  [7449] = 1,
    ACTIONS(2679), 2,
      sym__space,
      sym__eol,
  [7454] = 1,
    ACTIONS(2681), 2,
      sym__space,
      sym__eol,
  [7459] = 2,
    ACTIONS(1560), 1,
      sym__number,
    STATE(745), 1,
      sym_number,
  [7466] = 1,
    ACTIONS(2683), 2,
      sym__space,
      sym__eol,
  [7471] = 2,
    ACTIONS(1853), 1,
      aux_sym_time_token4,
    ACTIONS(1855), 1,
      aux_sym_time_token5,
  [7478] = 1,
    ACTIONS(2685), 2,
      sym__space,
      sym__eol,
  [7483] = 1,
    ACTIONS(2687), 2,
      sym__space,
      sym__eol,
  [7488] = 1,
    ACTIONS(2689), 2,
      sym__space,
      sym__eol,
  [7493] = 1,
    ACTIONS(1589), 1,
      aux_sym_time_token5,
  [7497] = 1,
    ACTIONS(2691), 1,
      aux_sym__match_localnetwork_token2,
  [7501] = 1,
    ACTIONS(2693), 1,
      aux_sym__match_localnetwork_token3,
  [7505] = 1,
    ACTIONS(2695), 1,
      sym__var_name,
  [7509] = 1,
    ACTIONS(2697), 1,
      sym_facility,
  [7513] = 1,
    ACTIONS(2699), 1,
      sym__eol,
  [7517] = 1,
    ACTIONS(2701), 1,
      sym_key_sig,
  [7521] = 1,
    ACTIONS(2703), 1,
      sym_key_sig,
  [7525] = 1,
    ACTIONS(2705), 1,
      anon_sym_DQUOTE,
  [7529] = 1,
    ACTIONS(2707), 1,
      anon_sym_DQUOTE,
  [7533] = 1,
    ACTIONS(2709), 1,
      sym_kex,
  [7537] = 1,
    ACTIONS(2711), 1,
      sym_cipher,
  [7541] = 1,
    ACTIONS(2713), 1,
      anon_sym_COLON,
  [7545] = 1,
    ACTIONS(2715), 1,
      sym__space,
  [7549] = 1,
    ACTIONS(2717), 1,
      sym__space,
  [7553] = 1,
    ACTIONS(2719), 1,
      aux_sym_time_token5,
  [7557] = 1,
    ACTIONS(2605), 1,
      sym__eol,
  [7561] = 1,
    ACTIONS(2721), 1,
      sym_mac,
  [7565] = 1,
    ACTIONS(2723), 1,
      anon_sym_COLON,
  [7569] = 1,
    ACTIONS(2725), 1,
      sym_sig,
  [7573] = 1,
    ACTIONS(2727), 1,
      anon_sym_COLON,
  [7577] = 1,
    ACTIONS(2597), 1,
      sym__eol,
  [7581] = 1,
    ACTIONS(2729), 1,
      anon_sym_AT,
  [7585] = 1,
    ACTIONS(2731), 1,
      sym_key_sig,
  [7589] = 1,
    ACTIONS(2733), 1,
      anon_sym_COLON,
  [7593] = 1,
    ACTIONS(2735), 1,
      sym__space,
  [7597] = 1,
    ACTIONS(2737), 1,
      sym__space,
  [7601] = 1,
    ACTIONS(2739), 1,
      anon_sym_EQ,
  [7605] = 1,
    ACTIONS(2741), 1,
      sym_verbosity,
  [7609] = 1,
    ACTIONS(2491), 1,
      aux_sym_time_token5,
  [7613] = 1,
    ACTIONS(1855), 1,
      aux_sym_time_token5,
  [7617] = 1,
    ACTIONS(2743), 1,
      aux_sym__match_localnetwork_token2,
  [7621] = 1,
    ACTIONS(2745), 1,
      sym__var_name,
  [7625] = 1,
    ACTIONS(2747), 1,
      aux_sym__match_localnetwork_token3,
  [7629] = 1,
    ACTIONS(2749), 1,
      sym__eol,
  [7633] = 1,
    ACTIONS(2751), 1,
      sym__eol,
  [7637] = 1,
    ACTIONS(2753), 1,
      sym__eol,
  [7641] = 1,
    ACTIONS(2755), 1,
      sym_authentication,
  [7645] = 1,
    ACTIONS(2757), 1,
      anon_sym_DQUOTE,
  [7649] = 1,
    ACTIONS(784), 1,
      sym__eol,
  [7653] = 1,
    ACTIONS(2759), 1,
      aux_sym__match_localnetwork_token3,
  [7657] = 1,
    ACTIONS(2761), 1,
      ts_builtin_sym_end,
  [7661] = 1,
    ACTIONS(2763), 1,
      sym_sig,
  [7665] = 1,
    ACTIONS(2765), 1,
      anon_sym_RBRACE,
  [7669] = 1,
    ACTIONS(2767), 1,
      aux_sym__proxy_jump_arg_token1,
  [7673] = 1,
    ACTIONS(2769), 1,
      sym_cipher,
  [7677] = 1,
    ACTIONS(2771), 1,
      sym_authentication,
  [7681] = 1,
    ACTIONS(2773), 1,
      anon_sym_COLON,
  [7685] = 1,
    ACTIONS(2775), 1,
      anon_sym_COLON,
  [7689] = 1,
    ACTIONS(2777), 1,
      sym_mac,
  [7693] = 1,
    ACTIONS(2779), 1,
      sym_kex,
  [7697] = 1,
    ACTIONS(2781), 1,
      aux_sym__stream_local_bind_mask_token2,
  [7701] = 1,
    ACTIONS(2783), 1,
      anon_sym_RBRACE,
  [7705] = 1,
    ACTIONS(2785), 1,
      sym_key_sig,
  [7709] = 1,
    ACTIONS(2787), 1,
      anon_sym_RBRACE,
  [7713] = 1,
    ACTIONS(2789), 1,
      anon_sym_RBRACE,
  [7717] = 1,
    ACTIONS(2791), 1,
      anon_sym_RBRACE,
  [7721] = 1,
    ACTIONS(2793), 1,
      anon_sym_RBRACE,
  [7725] = 1,
    ACTIONS(2795), 1,
      sym__var_name,
  [7729] = 1,
    ACTIONS(2797), 1,
      sym__var_name,
  [7733] = 1,
    ACTIONS(2799), 1,
      sym__var_name,
  [7737] = 1,
    ACTIONS(2801), 1,
      sym__var_name,
  [7741] = 1,
    ACTIONS(2803), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 64,
  [SMALL_STATE(40)] = 128,
  [SMALL_STATE(41)] = 190,
  [SMALL_STATE(42)] = 220,
  [SMALL_STATE(43)] = 250,
  [SMALL_STATE(44)] = 275,
  [SMALL_STATE(45)] = 300,
  [SMALL_STATE(46)] = 325,
  [SMALL_STATE(47)] = 345,
  [SMALL_STATE(48)] = 371,
  [SMALL_STATE(49)] = 397,
  [SMALL_STATE(50)] = 434,
  [SMALL_STATE(51)] = 471,
  [SMALL_STATE(52)] = 489,
  [SMALL_STATE(53)] = 509,
  [SMALL_STATE(54)] = 529,
  [SMALL_STATE(55)] = 549,
  [SMALL_STATE(56)] = 569,
  [SMALL_STATE(57)] = 589,
  [SMALL_STATE(58)] = 609,
  [SMALL_STATE(59)] = 631,
  [SMALL_STATE(60)] = 651,
  [SMALL_STATE(61)] = 673,
  [SMALL_STATE(62)] = 693,
  [SMALL_STATE(63)] = 724,
  [SMALL_STATE(64)] = 755,
  [SMALL_STATE(65)] = 788,
  [SMALL_STATE(66)] = 803,
  [SMALL_STATE(67)] = 818,
  [SMALL_STATE(68)] = 832,
  [SMALL_STATE(69)] = 846,
  [SMALL_STATE(70)] = 860,
  [SMALL_STATE(71)] = 874,
  [SMALL_STATE(72)] = 888,
  [SMALL_STATE(73)] = 902,
  [SMALL_STATE(74)] = 916,
  [SMALL_STATE(75)] = 930,
  [SMALL_STATE(76)] = 944,
  [SMALL_STATE(77)] = 958,
  [SMALL_STATE(78)] = 972,
  [SMALL_STATE(79)] = 986,
  [SMALL_STATE(80)] = 1000,
  [SMALL_STATE(81)] = 1014,
  [SMALL_STATE(82)] = 1028,
  [SMALL_STATE(83)] = 1042,
  [SMALL_STATE(84)] = 1056,
  [SMALL_STATE(85)] = 1070,
  [SMALL_STATE(86)] = 1084,
  [SMALL_STATE(87)] = 1098,
  [SMALL_STATE(88)] = 1112,
  [SMALL_STATE(89)] = 1126,
  [SMALL_STATE(90)] = 1140,
  [SMALL_STATE(91)] = 1165,
  [SMALL_STATE(92)] = 1188,
  [SMALL_STATE(93)] = 1211,
  [SMALL_STATE(94)] = 1236,
  [SMALL_STATE(95)] = 1258,
  [SMALL_STATE(96)] = 1280,
  [SMALL_STATE(97)] = 1306,
  [SMALL_STATE(98)] = 1332,
  [SMALL_STATE(99)] = 1355,
  [SMALL_STATE(100)] = 1378,
  [SMALL_STATE(101)] = 1401,
  [SMALL_STATE(102)] = 1424,
  [SMALL_STATE(103)] = 1447,
  [SMALL_STATE(104)] = 1470,
  [SMALL_STATE(105)] = 1491,
  [SMALL_STATE(106)] = 1514,
  [SMALL_STATE(107)] = 1535,
  [SMALL_STATE(108)] = 1558,
  [SMALL_STATE(109)] = 1581,
  [SMALL_STATE(110)] = 1600,
  [SMALL_STATE(111)] = 1621,
  [SMALL_STATE(112)] = 1642,
  [SMALL_STATE(113)] = 1663,
  [SMALL_STATE(114)] = 1686,
  [SMALL_STATE(115)] = 1706,
  [SMALL_STATE(116)] = 1726,
  [SMALL_STATE(117)] = 1746,
  [SMALL_STATE(118)] = 1766,
  [SMALL_STATE(119)] = 1782,
  [SMALL_STATE(120)] = 1802,
  [SMALL_STATE(121)] = 1822,
  [SMALL_STATE(122)] = 1842,
  [SMALL_STATE(123)] = 1862,
  [SMALL_STATE(124)] = 1882,
  [SMALL_STATE(125)] = 1894,
  [SMALL_STATE(126)] = 1906,
  [SMALL_STATE(127)] = 1922,
  [SMALL_STATE(128)] = 1940,
  [SMALL_STATE(129)] = 1960,
  [SMALL_STATE(130)] = 1980,
  [SMALL_STATE(131)] = 2000,
  [SMALL_STATE(132)] = 2020,
  [SMALL_STATE(133)] = 2036,
  [SMALL_STATE(134)] = 2058,
  [SMALL_STATE(135)] = 2078,
  [SMALL_STATE(136)] = 2098,
  [SMALL_STATE(137)] = 2111,
  [SMALL_STATE(138)] = 2126,
  [SMALL_STATE(139)] = 2143,
  [SMALL_STATE(140)] = 2160,
  [SMALL_STATE(141)] = 2179,
  [SMALL_STATE(142)] = 2194,
  [SMALL_STATE(143)] = 2207,
  [SMALL_STATE(144)] = 2222,
  [SMALL_STATE(145)] = 2237,
  [SMALL_STATE(146)] = 2248,
  [SMALL_STATE(147)] = 2261,
  [SMALL_STATE(148)] = 2278,
  [SMALL_STATE(149)] = 2295,
  [SMALL_STATE(150)] = 2312,
  [SMALL_STATE(151)] = 2329,
  [SMALL_STATE(152)] = 2346,
  [SMALL_STATE(153)] = 2363,
  [SMALL_STATE(154)] = 2374,
  [SMALL_STATE(155)] = 2391,
  [SMALL_STATE(156)] = 2408,
  [SMALL_STATE(157)] = 2419,
  [SMALL_STATE(158)] = 2436,
  [SMALL_STATE(159)] = 2453,
  [SMALL_STATE(160)] = 2468,
  [SMALL_STATE(161)] = 2485,
  [SMALL_STATE(162)] = 2502,
  [SMALL_STATE(163)] = 2517,
  [SMALL_STATE(164)] = 2536,
  [SMALL_STATE(165)] = 2553,
  [SMALL_STATE(166)] = 2564,
  [SMALL_STATE(167)] = 2581,
  [SMALL_STATE(168)] = 2598,
  [SMALL_STATE(169)] = 2615,
  [SMALL_STATE(170)] = 2632,
  [SMALL_STATE(171)] = 2645,
  [SMALL_STATE(172)] = 2660,
  [SMALL_STATE(173)] = 2677,
  [SMALL_STATE(174)] = 2692,
  [SMALL_STATE(175)] = 2703,
  [SMALL_STATE(176)] = 2718,
  [SMALL_STATE(177)] = 2733,
  [SMALL_STATE(178)] = 2741,
  [SMALL_STATE(179)] = 2757,
  [SMALL_STATE(180)] = 2767,
  [SMALL_STATE(181)] = 2783,
  [SMALL_STATE(182)] = 2797,
  [SMALL_STATE(183)] = 2813,
  [SMALL_STATE(184)] = 2827,
  [SMALL_STATE(185)] = 2837,
  [SMALL_STATE(186)] = 2851,
  [SMALL_STATE(187)] = 2863,
  [SMALL_STATE(188)] = 2879,
  [SMALL_STATE(189)] = 2895,
  [SMALL_STATE(190)] = 2909,
  [SMALL_STATE(191)] = 2919,
  [SMALL_STATE(192)] = 2929,
  [SMALL_STATE(193)] = 2941,
  [SMALL_STATE(194)] = 2955,
  [SMALL_STATE(195)] = 2965,
  [SMALL_STATE(196)] = 2979,
  [SMALL_STATE(197)] = 2993,
  [SMALL_STATE(198)] = 3003,
  [SMALL_STATE(199)] = 3017,
  [SMALL_STATE(200)] = 3031,
  [SMALL_STATE(201)] = 3043,
  [SMALL_STATE(202)] = 3057,
  [SMALL_STATE(203)] = 3065,
  [SMALL_STATE(204)] = 3079,
  [SMALL_STATE(205)] = 3089,
  [SMALL_STATE(206)] = 3105,
  [SMALL_STATE(207)] = 3115,
  [SMALL_STATE(208)] = 3131,
  [SMALL_STATE(209)] = 3145,
  [SMALL_STATE(210)] = 3157,
  [SMALL_STATE(211)] = 3167,
  [SMALL_STATE(212)] = 3179,
  [SMALL_STATE(213)] = 3195,
  [SMALL_STATE(214)] = 3211,
  [SMALL_STATE(215)] = 3223,
  [SMALL_STATE(216)] = 3239,
  [SMALL_STATE(217)] = 3248,
  [SMALL_STATE(218)] = 3259,
  [SMALL_STATE(219)] = 3270,
  [SMALL_STATE(220)] = 3279,
  [SMALL_STATE(221)] = 3288,
  [SMALL_STATE(222)] = 3297,
  [SMALL_STATE(223)] = 3306,
  [SMALL_STATE(224)] = 3317,
  [SMALL_STATE(225)] = 3328,
  [SMALL_STATE(226)] = 3339,
  [SMALL_STATE(227)] = 3350,
  [SMALL_STATE(228)] = 3361,
  [SMALL_STATE(229)] = 3372,
  [SMALL_STATE(230)] = 3383,
  [SMALL_STATE(231)] = 3394,
  [SMALL_STATE(232)] = 3405,
  [SMALL_STATE(233)] = 3416,
  [SMALL_STATE(234)] = 3427,
  [SMALL_STATE(235)] = 3438,
  [SMALL_STATE(236)] = 3451,
  [SMALL_STATE(237)] = 3462,
  [SMALL_STATE(238)] = 3473,
  [SMALL_STATE(239)] = 3484,
  [SMALL_STATE(240)] = 3493,
  [SMALL_STATE(241)] = 3504,
  [SMALL_STATE(242)] = 3513,
  [SMALL_STATE(243)] = 3524,
  [SMALL_STATE(244)] = 3535,
  [SMALL_STATE(245)] = 3546,
  [SMALL_STATE(246)] = 3557,
  [SMALL_STATE(247)] = 3566,
  [SMALL_STATE(248)] = 3577,
  [SMALL_STATE(249)] = 3586,
  [SMALL_STATE(250)] = 3597,
  [SMALL_STATE(251)] = 3608,
  [SMALL_STATE(252)] = 3615,
  [SMALL_STATE(253)] = 3628,
  [SMALL_STATE(254)] = 3641,
  [SMALL_STATE(255)] = 3652,
  [SMALL_STATE(256)] = 3659,
  [SMALL_STATE(257)] = 3670,
  [SMALL_STATE(258)] = 3681,
  [SMALL_STATE(259)] = 3690,
  [SMALL_STATE(260)] = 3701,
  [SMALL_STATE(261)] = 3712,
  [SMALL_STATE(262)] = 3723,
  [SMALL_STATE(263)] = 3734,
  [SMALL_STATE(264)] = 3743,
  [SMALL_STATE(265)] = 3754,
  [SMALL_STATE(266)] = 3767,
  [SMALL_STATE(267)] = 3776,
  [SMALL_STATE(268)] = 3787,
  [SMALL_STATE(269)] = 3798,
  [SMALL_STATE(270)] = 3809,
  [SMALL_STATE(271)] = 3818,
  [SMALL_STATE(272)] = 3829,
  [SMALL_STATE(273)] = 3840,
  [SMALL_STATE(274)] = 3851,
  [SMALL_STATE(275)] = 3862,
  [SMALL_STATE(276)] = 3873,
  [SMALL_STATE(277)] = 3884,
  [SMALL_STATE(278)] = 3895,
  [SMALL_STATE(279)] = 3906,
  [SMALL_STATE(280)] = 3915,
  [SMALL_STATE(281)] = 3924,
  [SMALL_STATE(282)] = 3933,
  [SMALL_STATE(283)] = 3942,
  [SMALL_STATE(284)] = 3953,
  [SMALL_STATE(285)] = 3966,
  [SMALL_STATE(286)] = 3977,
  [SMALL_STATE(287)] = 3988,
  [SMALL_STATE(288)] = 3999,
  [SMALL_STATE(289)] = 4008,
  [SMALL_STATE(290)] = 4019,
  [SMALL_STATE(291)] = 4032,
  [SMALL_STATE(292)] = 4043,
  [SMALL_STATE(293)] = 4052,
  [SMALL_STATE(294)] = 4063,
  [SMALL_STATE(295)] = 4074,
  [SMALL_STATE(296)] = 4085,
  [SMALL_STATE(297)] = 4095,
  [SMALL_STATE(298)] = 4103,
  [SMALL_STATE(299)] = 4113,
  [SMALL_STATE(300)] = 4123,
  [SMALL_STATE(301)] = 4133,
  [SMALL_STATE(302)] = 4143,
  [SMALL_STATE(303)] = 4153,
  [SMALL_STATE(304)] = 4163,
  [SMALL_STATE(305)] = 4173,
  [SMALL_STATE(306)] = 4181,
  [SMALL_STATE(307)] = 4189,
  [SMALL_STATE(308)] = 4199,
  [SMALL_STATE(309)] = 4209,
  [SMALL_STATE(310)] = 4219,
  [SMALL_STATE(311)] = 4229,
  [SMALL_STATE(312)] = 4239,
  [SMALL_STATE(313)] = 4249,
  [SMALL_STATE(314)] = 4259,
  [SMALL_STATE(315)] = 4269,
  [SMALL_STATE(316)] = 4279,
  [SMALL_STATE(317)] = 4289,
  [SMALL_STATE(318)] = 4295,
  [SMALL_STATE(319)] = 4305,
  [SMALL_STATE(320)] = 4315,
  [SMALL_STATE(321)] = 4323,
  [SMALL_STATE(322)] = 4333,
  [SMALL_STATE(323)] = 4343,
  [SMALL_STATE(324)] = 4351,
  [SMALL_STATE(325)] = 4361,
  [SMALL_STATE(326)] = 4371,
  [SMALL_STATE(327)] = 4381,
  [SMALL_STATE(328)] = 4389,
  [SMALL_STATE(329)] = 4397,
  [SMALL_STATE(330)] = 4407,
  [SMALL_STATE(331)] = 4417,
  [SMALL_STATE(332)] = 4427,
  [SMALL_STATE(333)] = 4437,
  [SMALL_STATE(334)] = 4447,
  [SMALL_STATE(335)] = 4457,
  [SMALL_STATE(336)] = 4467,
  [SMALL_STATE(337)] = 4477,
  [SMALL_STATE(338)] = 4487,
  [SMALL_STATE(339)] = 4495,
  [SMALL_STATE(340)] = 4505,
  [SMALL_STATE(341)] = 4515,
  [SMALL_STATE(342)] = 4525,
  [SMALL_STATE(343)] = 4535,
  [SMALL_STATE(344)] = 4541,
  [SMALL_STATE(345)] = 4551,
  [SMALL_STATE(346)] = 4561,
  [SMALL_STATE(347)] = 4571,
  [SMALL_STATE(348)] = 4581,
  [SMALL_STATE(349)] = 4591,
  [SMALL_STATE(350)] = 4601,
  [SMALL_STATE(351)] = 4611,
  [SMALL_STATE(352)] = 4621,
  [SMALL_STATE(353)] = 4631,
  [SMALL_STATE(354)] = 4641,
  [SMALL_STATE(355)] = 4651,
  [SMALL_STATE(356)] = 4661,
  [SMALL_STATE(357)] = 4671,
  [SMALL_STATE(358)] = 4681,
  [SMALL_STATE(359)] = 4691,
  [SMALL_STATE(360)] = 4701,
  [SMALL_STATE(361)] = 4711,
  [SMALL_STATE(362)] = 4721,
  [SMALL_STATE(363)] = 4731,
  [SMALL_STATE(364)] = 4741,
  [SMALL_STATE(365)] = 4751,
  [SMALL_STATE(366)] = 4759,
  [SMALL_STATE(367)] = 4769,
  [SMALL_STATE(368)] = 4779,
  [SMALL_STATE(369)] = 4789,
  [SMALL_STATE(370)] = 4799,
  [SMALL_STATE(371)] = 4809,
  [SMALL_STATE(372)] = 4819,
  [SMALL_STATE(373)] = 4827,
  [SMALL_STATE(374)] = 4835,
  [SMALL_STATE(375)] = 4843,
  [SMALL_STATE(376)] = 4851,
  [SMALL_STATE(377)] = 4859,
  [SMALL_STATE(378)] = 4869,
  [SMALL_STATE(379)] = 4879,
  [SMALL_STATE(380)] = 4889,
  [SMALL_STATE(381)] = 4899,
  [SMALL_STATE(382)] = 4909,
  [SMALL_STATE(383)] = 4919,
  [SMALL_STATE(384)] = 4929,
  [SMALL_STATE(385)] = 4939,
  [SMALL_STATE(386)] = 4947,
  [SMALL_STATE(387)] = 4957,
  [SMALL_STATE(388)] = 4967,
  [SMALL_STATE(389)] = 4977,
  [SMALL_STATE(390)] = 4985,
  [SMALL_STATE(391)] = 4995,
  [SMALL_STATE(392)] = 5005,
  [SMALL_STATE(393)] = 5015,
  [SMALL_STATE(394)] = 5025,
  [SMALL_STATE(395)] = 5035,
  [SMALL_STATE(396)] = 5045,
  [SMALL_STATE(397)] = 5055,
  [SMALL_STATE(398)] = 5065,
  [SMALL_STATE(399)] = 5075,
  [SMALL_STATE(400)] = 5085,
  [SMALL_STATE(401)] = 5095,
  [SMALL_STATE(402)] = 5105,
  [SMALL_STATE(403)] = 5115,
  [SMALL_STATE(404)] = 5125,
  [SMALL_STATE(405)] = 5135,
  [SMALL_STATE(406)] = 5145,
  [SMALL_STATE(407)] = 5155,
  [SMALL_STATE(408)] = 5163,
  [SMALL_STATE(409)] = 5171,
  [SMALL_STATE(410)] = 5181,
  [SMALL_STATE(411)] = 5191,
  [SMALL_STATE(412)] = 5201,
  [SMALL_STATE(413)] = 5207,
  [SMALL_STATE(414)] = 5217,
  [SMALL_STATE(415)] = 5225,
  [SMALL_STATE(416)] = 5235,
  [SMALL_STATE(417)] = 5243,
  [SMALL_STATE(418)] = 5249,
  [SMALL_STATE(419)] = 5257,
  [SMALL_STATE(420)] = 5267,
  [SMALL_STATE(421)] = 5277,
  [SMALL_STATE(422)] = 5283,
  [SMALL_STATE(423)] = 5291,
  [SMALL_STATE(424)] = 5299,
  [SMALL_STATE(425)] = 5309,
  [SMALL_STATE(426)] = 5319,
  [SMALL_STATE(427)] = 5329,
  [SMALL_STATE(428)] = 5339,
  [SMALL_STATE(429)] = 5347,
  [SMALL_STATE(430)] = 5357,
  [SMALL_STATE(431)] = 5367,
  [SMALL_STATE(432)] = 5377,
  [SMALL_STATE(433)] = 5385,
  [SMALL_STATE(434)] = 5391,
  [SMALL_STATE(435)] = 5399,
  [SMALL_STATE(436)] = 5409,
  [SMALL_STATE(437)] = 5419,
  [SMALL_STATE(438)] = 5429,
  [SMALL_STATE(439)] = 5437,
  [SMALL_STATE(440)] = 5447,
  [SMALL_STATE(441)] = 5455,
  [SMALL_STATE(442)] = 5465,
  [SMALL_STATE(443)] = 5471,
  [SMALL_STATE(444)] = 5479,
  [SMALL_STATE(445)] = 5489,
  [SMALL_STATE(446)] = 5499,
  [SMALL_STATE(447)] = 5507,
  [SMALL_STATE(448)] = 5513,
  [SMALL_STATE(449)] = 5523,
  [SMALL_STATE(450)] = 5533,
  [SMALL_STATE(451)] = 5541,
  [SMALL_STATE(452)] = 5547,
  [SMALL_STATE(453)] = 5557,
  [SMALL_STATE(454)] = 5567,
  [SMALL_STATE(455)] = 5575,
  [SMALL_STATE(456)] = 5583,
  [SMALL_STATE(457)] = 5593,
  [SMALL_STATE(458)] = 5601,
  [SMALL_STATE(459)] = 5611,
  [SMALL_STATE(460)] = 5621,
  [SMALL_STATE(461)] = 5631,
  [SMALL_STATE(462)] = 5641,
  [SMALL_STATE(463)] = 5651,
  [SMALL_STATE(464)] = 5657,
  [SMALL_STATE(465)] = 5667,
  [SMALL_STATE(466)] = 5677,
  [SMALL_STATE(467)] = 5687,
  [SMALL_STATE(468)] = 5697,
  [SMALL_STATE(469)] = 5707,
  [SMALL_STATE(470)] = 5717,
  [SMALL_STATE(471)] = 5727,
  [SMALL_STATE(472)] = 5737,
  [SMALL_STATE(473)] = 5747,
  [SMALL_STATE(474)] = 5757,
  [SMALL_STATE(475)] = 5767,
  [SMALL_STATE(476)] = 5777,
  [SMALL_STATE(477)] = 5787,
  [SMALL_STATE(478)] = 5797,
  [SMALL_STATE(479)] = 5807,
  [SMALL_STATE(480)] = 5817,
  [SMALL_STATE(481)] = 5827,
  [SMALL_STATE(482)] = 5837,
  [SMALL_STATE(483)] = 5847,
  [SMALL_STATE(484)] = 5857,
  [SMALL_STATE(485)] = 5867,
  [SMALL_STATE(486)] = 5875,
  [SMALL_STATE(487)] = 5883,
  [SMALL_STATE(488)] = 5891,
  [SMALL_STATE(489)] = 5899,
  [SMALL_STATE(490)] = 5909,
  [SMALL_STATE(491)] = 5919,
  [SMALL_STATE(492)] = 5929,
  [SMALL_STATE(493)] = 5939,
  [SMALL_STATE(494)] = 5949,
  [SMALL_STATE(495)] = 5959,
  [SMALL_STATE(496)] = 5969,
  [SMALL_STATE(497)] = 5979,
  [SMALL_STATE(498)] = 5989,
  [SMALL_STATE(499)] = 5999,
  [SMALL_STATE(500)] = 6009,
  [SMALL_STATE(501)] = 6019,
  [SMALL_STATE(502)] = 6029,
  [SMALL_STATE(503)] = 6039,
  [SMALL_STATE(504)] = 6049,
  [SMALL_STATE(505)] = 6059,
  [SMALL_STATE(506)] = 6069,
  [SMALL_STATE(507)] = 6077,
  [SMALL_STATE(508)] = 6085,
  [SMALL_STATE(509)] = 6095,
  [SMALL_STATE(510)] = 6105,
  [SMALL_STATE(511)] = 6115,
  [SMALL_STATE(512)] = 6125,
  [SMALL_STATE(513)] = 6135,
  [SMALL_STATE(514)] = 6143,
  [SMALL_STATE(515)] = 6153,
  [SMALL_STATE(516)] = 6161,
  [SMALL_STATE(517)] = 6171,
  [SMALL_STATE(518)] = 6179,
  [SMALL_STATE(519)] = 6187,
  [SMALL_STATE(520)] = 6197,
  [SMALL_STATE(521)] = 6207,
  [SMALL_STATE(522)] = 6214,
  [SMALL_STATE(523)] = 6219,
  [SMALL_STATE(524)] = 6226,
  [SMALL_STATE(525)] = 6231,
  [SMALL_STATE(526)] = 6238,
  [SMALL_STATE(527)] = 6243,
  [SMALL_STATE(528)] = 6248,
  [SMALL_STATE(529)] = 6253,
  [SMALL_STATE(530)] = 6258,
  [SMALL_STATE(531)] = 6263,
  [SMALL_STATE(532)] = 6268,
  [SMALL_STATE(533)] = 6275,
  [SMALL_STATE(534)] = 6280,
  [SMALL_STATE(535)] = 6287,
  [SMALL_STATE(536)] = 6292,
  [SMALL_STATE(537)] = 6297,
  [SMALL_STATE(538)] = 6302,
  [SMALL_STATE(539)] = 6307,
  [SMALL_STATE(540)] = 6312,
  [SMALL_STATE(541)] = 6317,
  [SMALL_STATE(542)] = 6324,
  [SMALL_STATE(543)] = 6329,
  [SMALL_STATE(544)] = 6334,
  [SMALL_STATE(545)] = 6339,
  [SMALL_STATE(546)] = 6344,
  [SMALL_STATE(547)] = 6351,
  [SMALL_STATE(548)] = 6356,
  [SMALL_STATE(549)] = 6361,
  [SMALL_STATE(550)] = 6368,
  [SMALL_STATE(551)] = 6373,
  [SMALL_STATE(552)] = 6378,
  [SMALL_STATE(553)] = 6383,
  [SMALL_STATE(554)] = 6388,
  [SMALL_STATE(555)] = 6393,
  [SMALL_STATE(556)] = 6398,
  [SMALL_STATE(557)] = 6403,
  [SMALL_STATE(558)] = 6408,
  [SMALL_STATE(559)] = 6413,
  [SMALL_STATE(560)] = 6418,
  [SMALL_STATE(561)] = 6423,
  [SMALL_STATE(562)] = 6428,
  [SMALL_STATE(563)] = 6433,
  [SMALL_STATE(564)] = 6438,
  [SMALL_STATE(565)] = 6445,
  [SMALL_STATE(566)] = 6450,
  [SMALL_STATE(567)] = 6455,
  [SMALL_STATE(568)] = 6460,
  [SMALL_STATE(569)] = 6465,
  [SMALL_STATE(570)] = 6470,
  [SMALL_STATE(571)] = 6475,
  [SMALL_STATE(572)] = 6480,
  [SMALL_STATE(573)] = 6485,
  [SMALL_STATE(574)] = 6492,
  [SMALL_STATE(575)] = 6497,
  [SMALL_STATE(576)] = 6502,
  [SMALL_STATE(577)] = 6507,
  [SMALL_STATE(578)] = 6512,
  [SMALL_STATE(579)] = 6517,
  [SMALL_STATE(580)] = 6522,
  [SMALL_STATE(581)] = 6527,
  [SMALL_STATE(582)] = 6532,
  [SMALL_STATE(583)] = 6539,
  [SMALL_STATE(584)] = 6544,
  [SMALL_STATE(585)] = 6551,
  [SMALL_STATE(586)] = 6556,
  [SMALL_STATE(587)] = 6561,
  [SMALL_STATE(588)] = 6568,
  [SMALL_STATE(589)] = 6573,
  [SMALL_STATE(590)] = 6578,
  [SMALL_STATE(591)] = 6583,
  [SMALL_STATE(592)] = 6588,
  [SMALL_STATE(593)] = 6595,
  [SMALL_STATE(594)] = 6600,
  [SMALL_STATE(595)] = 6607,
  [SMALL_STATE(596)] = 6612,
  [SMALL_STATE(597)] = 6617,
  [SMALL_STATE(598)] = 6622,
  [SMALL_STATE(599)] = 6627,
  [SMALL_STATE(600)] = 6632,
  [SMALL_STATE(601)] = 6637,
  [SMALL_STATE(602)] = 6644,
  [SMALL_STATE(603)] = 6649,
  [SMALL_STATE(604)] = 6654,
  [SMALL_STATE(605)] = 6659,
  [SMALL_STATE(606)] = 6664,
  [SMALL_STATE(607)] = 6669,
  [SMALL_STATE(608)] = 6674,
  [SMALL_STATE(609)] = 6681,
  [SMALL_STATE(610)] = 6688,
  [SMALL_STATE(611)] = 6693,
  [SMALL_STATE(612)] = 6698,
  [SMALL_STATE(613)] = 6703,
  [SMALL_STATE(614)] = 6708,
  [SMALL_STATE(615)] = 6713,
  [SMALL_STATE(616)] = 6718,
  [SMALL_STATE(617)] = 6723,
  [SMALL_STATE(618)] = 6728,
  [SMALL_STATE(619)] = 6735,
  [SMALL_STATE(620)] = 6740,
  [SMALL_STATE(621)] = 6745,
  [SMALL_STATE(622)] = 6750,
  [SMALL_STATE(623)] = 6755,
  [SMALL_STATE(624)] = 6760,
  [SMALL_STATE(625)] = 6765,
  [SMALL_STATE(626)] = 6770,
  [SMALL_STATE(627)] = 6775,
  [SMALL_STATE(628)] = 6780,
  [SMALL_STATE(629)] = 6787,
  [SMALL_STATE(630)] = 6792,
  [SMALL_STATE(631)] = 6797,
  [SMALL_STATE(632)] = 6802,
  [SMALL_STATE(633)] = 6807,
  [SMALL_STATE(634)] = 6812,
  [SMALL_STATE(635)] = 6819,
  [SMALL_STATE(636)] = 6824,
  [SMALL_STATE(637)] = 6829,
  [SMALL_STATE(638)] = 6834,
  [SMALL_STATE(639)] = 6839,
  [SMALL_STATE(640)] = 6844,
  [SMALL_STATE(641)] = 6849,
  [SMALL_STATE(642)] = 6854,
  [SMALL_STATE(643)] = 6859,
  [SMALL_STATE(644)] = 6864,
  [SMALL_STATE(645)] = 6869,
  [SMALL_STATE(646)] = 6874,
  [SMALL_STATE(647)] = 6879,
  [SMALL_STATE(648)] = 6884,
  [SMALL_STATE(649)] = 6889,
  [SMALL_STATE(650)] = 6894,
  [SMALL_STATE(651)] = 6899,
  [SMALL_STATE(652)] = 6904,
  [SMALL_STATE(653)] = 6909,
  [SMALL_STATE(654)] = 6914,
  [SMALL_STATE(655)] = 6919,
  [SMALL_STATE(656)] = 6924,
  [SMALL_STATE(657)] = 6929,
  [SMALL_STATE(658)] = 6934,
  [SMALL_STATE(659)] = 6941,
  [SMALL_STATE(660)] = 6946,
  [SMALL_STATE(661)] = 6951,
  [SMALL_STATE(662)] = 6956,
  [SMALL_STATE(663)] = 6961,
  [SMALL_STATE(664)] = 6966,
  [SMALL_STATE(665)] = 6971,
  [SMALL_STATE(666)] = 6976,
  [SMALL_STATE(667)] = 6981,
  [SMALL_STATE(668)] = 6988,
  [SMALL_STATE(669)] = 6993,
  [SMALL_STATE(670)] = 6998,
  [SMALL_STATE(671)] = 7003,
  [SMALL_STATE(672)] = 7008,
  [SMALL_STATE(673)] = 7013,
  [SMALL_STATE(674)] = 7018,
  [SMALL_STATE(675)] = 7023,
  [SMALL_STATE(676)] = 7028,
  [SMALL_STATE(677)] = 7033,
  [SMALL_STATE(678)] = 7038,
  [SMALL_STATE(679)] = 7043,
  [SMALL_STATE(680)] = 7048,
  [SMALL_STATE(681)] = 7053,
  [SMALL_STATE(682)] = 7058,
  [SMALL_STATE(683)] = 7063,
  [SMALL_STATE(684)] = 7068,
  [SMALL_STATE(685)] = 7073,
  [SMALL_STATE(686)] = 7078,
  [SMALL_STATE(687)] = 7085,
  [SMALL_STATE(688)] = 7090,
  [SMALL_STATE(689)] = 7095,
  [SMALL_STATE(690)] = 7100,
  [SMALL_STATE(691)] = 7105,
  [SMALL_STATE(692)] = 7110,
  [SMALL_STATE(693)] = 7115,
  [SMALL_STATE(694)] = 7120,
  [SMALL_STATE(695)] = 7125,
  [SMALL_STATE(696)] = 7130,
  [SMALL_STATE(697)] = 7135,
  [SMALL_STATE(698)] = 7140,
  [SMALL_STATE(699)] = 7145,
  [SMALL_STATE(700)] = 7152,
  [SMALL_STATE(701)] = 7157,
  [SMALL_STATE(702)] = 7162,
  [SMALL_STATE(703)] = 7167,
  [SMALL_STATE(704)] = 7172,
  [SMALL_STATE(705)] = 7177,
  [SMALL_STATE(706)] = 7182,
  [SMALL_STATE(707)] = 7187,
  [SMALL_STATE(708)] = 7194,
  [SMALL_STATE(709)] = 7199,
  [SMALL_STATE(710)] = 7204,
  [SMALL_STATE(711)] = 7209,
  [SMALL_STATE(712)] = 7214,
  [SMALL_STATE(713)] = 7219,
  [SMALL_STATE(714)] = 7224,
  [SMALL_STATE(715)] = 7229,
  [SMALL_STATE(716)] = 7234,
  [SMALL_STATE(717)] = 7239,
  [SMALL_STATE(718)] = 7244,
  [SMALL_STATE(719)] = 7249,
  [SMALL_STATE(720)] = 7254,
  [SMALL_STATE(721)] = 7259,
  [SMALL_STATE(722)] = 7266,
  [SMALL_STATE(723)] = 7273,
  [SMALL_STATE(724)] = 7278,
  [SMALL_STATE(725)] = 7283,
  [SMALL_STATE(726)] = 7288,
  [SMALL_STATE(727)] = 7293,
  [SMALL_STATE(728)] = 7298,
  [SMALL_STATE(729)] = 7303,
  [SMALL_STATE(730)] = 7308,
  [SMALL_STATE(731)] = 7313,
  [SMALL_STATE(732)] = 7318,
  [SMALL_STATE(733)] = 7325,
  [SMALL_STATE(734)] = 7330,
  [SMALL_STATE(735)] = 7335,
  [SMALL_STATE(736)] = 7340,
  [SMALL_STATE(737)] = 7345,
  [SMALL_STATE(738)] = 7350,
  [SMALL_STATE(739)] = 7355,
  [SMALL_STATE(740)] = 7360,
  [SMALL_STATE(741)] = 7367,
  [SMALL_STATE(742)] = 7372,
  [SMALL_STATE(743)] = 7377,
  [SMALL_STATE(744)] = 7382,
  [SMALL_STATE(745)] = 7387,
  [SMALL_STATE(746)] = 7392,
  [SMALL_STATE(747)] = 7397,
  [SMALL_STATE(748)] = 7402,
  [SMALL_STATE(749)] = 7407,
  [SMALL_STATE(750)] = 7412,
  [SMALL_STATE(751)] = 7417,
  [SMALL_STATE(752)] = 7422,
  [SMALL_STATE(753)] = 7429,
  [SMALL_STATE(754)] = 7434,
  [SMALL_STATE(755)] = 7439,
  [SMALL_STATE(756)] = 7444,
  [SMALL_STATE(757)] = 7449,
  [SMALL_STATE(758)] = 7454,
  [SMALL_STATE(759)] = 7459,
  [SMALL_STATE(760)] = 7466,
  [SMALL_STATE(761)] = 7471,
  [SMALL_STATE(762)] = 7478,
  [SMALL_STATE(763)] = 7483,
  [SMALL_STATE(764)] = 7488,
  [SMALL_STATE(765)] = 7493,
  [SMALL_STATE(766)] = 7497,
  [SMALL_STATE(767)] = 7501,
  [SMALL_STATE(768)] = 7505,
  [SMALL_STATE(769)] = 7509,
  [SMALL_STATE(770)] = 7513,
  [SMALL_STATE(771)] = 7517,
  [SMALL_STATE(772)] = 7521,
  [SMALL_STATE(773)] = 7525,
  [SMALL_STATE(774)] = 7529,
  [SMALL_STATE(775)] = 7533,
  [SMALL_STATE(776)] = 7537,
  [SMALL_STATE(777)] = 7541,
  [SMALL_STATE(778)] = 7545,
  [SMALL_STATE(779)] = 7549,
  [SMALL_STATE(780)] = 7553,
  [SMALL_STATE(781)] = 7557,
  [SMALL_STATE(782)] = 7561,
  [SMALL_STATE(783)] = 7565,
  [SMALL_STATE(784)] = 7569,
  [SMALL_STATE(785)] = 7573,
  [SMALL_STATE(786)] = 7577,
  [SMALL_STATE(787)] = 7581,
  [SMALL_STATE(788)] = 7585,
  [SMALL_STATE(789)] = 7589,
  [SMALL_STATE(790)] = 7593,
  [SMALL_STATE(791)] = 7597,
  [SMALL_STATE(792)] = 7601,
  [SMALL_STATE(793)] = 7605,
  [SMALL_STATE(794)] = 7609,
  [SMALL_STATE(795)] = 7613,
  [SMALL_STATE(796)] = 7617,
  [SMALL_STATE(797)] = 7621,
  [SMALL_STATE(798)] = 7625,
  [SMALL_STATE(799)] = 7629,
  [SMALL_STATE(800)] = 7633,
  [SMALL_STATE(801)] = 7637,
  [SMALL_STATE(802)] = 7641,
  [SMALL_STATE(803)] = 7645,
  [SMALL_STATE(804)] = 7649,
  [SMALL_STATE(805)] = 7653,
  [SMALL_STATE(806)] = 7657,
  [SMALL_STATE(807)] = 7661,
  [SMALL_STATE(808)] = 7665,
  [SMALL_STATE(809)] = 7669,
  [SMALL_STATE(810)] = 7673,
  [SMALL_STATE(811)] = 7677,
  [SMALL_STATE(812)] = 7681,
  [SMALL_STATE(813)] = 7685,
  [SMALL_STATE(814)] = 7689,
  [SMALL_STATE(815)] = 7693,
  [SMALL_STATE(816)] = 7697,
  [SMALL_STATE(817)] = 7701,
  [SMALL_STATE(818)] = 7705,
  [SMALL_STATE(819)] = 7709,
  [SMALL_STATE(820)] = 7713,
  [SMALL_STATE(821)] = 7717,
  [SMALL_STATE(822)] = 7721,
  [SMALL_STATE(823)] = 7725,
  [SMALL_STATE(824)] = 7729,
  [SMALL_STATE(825)] = 7733,
  [SMALL_STATE(826)] = 7737,
  [SMALL_STATE(827)] = 7741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(402),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(298),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(307),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(308),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(309),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(310),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(311),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(312),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(313),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(314),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(315),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(316),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(318),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(319),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(321),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(322),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(324),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(329),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(331),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(334),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(337),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(340),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(342),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(350),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(351),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(353),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(356),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(357),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(359),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(360),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(363),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(364),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(366),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(369),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(377),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(379),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(382),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(384),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(386),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(387),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(388),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(390),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(394),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(395),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(397),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(398),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(399),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(400),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(401),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(502),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(410),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(426),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(431),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(436),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(437),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(448),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(449),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(453),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(464),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(465),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(466),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(468),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(469),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(470),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(471),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(472),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(474),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(475),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(476),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(477),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(478),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(479),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(480),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(481),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(483),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(484),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(489),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(490),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(804),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(6),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(307),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(308),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(309),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(310),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(311),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(312),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(313),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(314),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(315),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(316),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(318),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(319),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(321),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(322),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(324),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(325),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(329),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(331),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(334),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(336),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(337),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(340),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(341),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(342),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(346),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(347),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(349),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(350),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(351),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(352),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(353),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(354),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(356),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(357),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(358),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(359),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(360),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(362),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(363),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(364),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(366),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(369),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(377),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(378),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(379),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(382),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(383),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(384),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(386),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(387),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(388),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(390),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(393),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(394),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(395),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(396),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(397),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(398),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(399),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(400),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(401),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(502),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(410),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(420),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(426),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(431),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(436),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(437),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(448),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(449),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(453),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(464),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(465),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(466),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(468),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(469),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(470),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(471),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(472),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(474),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(475),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(476),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(477),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(478),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(479),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(480),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(481),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(483),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(484),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(489),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(490),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(587),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(19),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, .production_id = 14),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, .production_id = 14),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, .production_id = 37),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, .production_id = 37),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 63),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 63),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 27),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 27),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, .production_id = 14),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, .production_id = 14),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 13),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 13),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 27),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 27),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, .production_id = 37),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, .production_id = 37),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 63),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 63),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 25),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 25),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 25),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 25),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 13),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 13),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(368),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(60),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(58),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(299),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(300),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(301),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(302),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(303),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24), SHIFT_REPEAT(304),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, .production_id = 24),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 57),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, .production_id = 16),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, .production_id = 64),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 3, .production_id = 73),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2),
  [923] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(46),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(46),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2),
  [935] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(51),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(51),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, .production_id = 35),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 16),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2), SHIFT_REPEAT(722),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, .production_id = 58),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, .production_id = 59),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 57),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, .production_id = 35),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, .production_id = 9),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, .production_id = 66),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, .production_id = 9),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2), SHIFT_REPEAT(185),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 3, .production_id = 75),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2, .production_id = 67),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 1, .production_id = 11),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 64),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 5, .production_id = 73),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 1, .production_id = 10),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, .production_id = 65),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, .production_id = 36),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, .production_id = 36),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, .production_id = 36),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, .production_id = 36),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, .production_id = 74),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, .production_id = 9),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, .production_id = 9),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 73),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, .production_id = 34),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 64),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(124),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(124),
  [1059] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(797),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 16),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [1076] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(156),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(156),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(825),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 18),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(197),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(197),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(824),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(194),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(194),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(823),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 18),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(165),
  [1166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(165),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2),
  [1179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(266),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(266),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(827),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [1190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(270),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(270),
  [1196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(826),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 43),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 43),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2), SHIFT_REPEAT(202),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2),
  [1258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(191),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(191),
  [1264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(179),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(179),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, .production_id = 31),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, .production_id = 23),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 18),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 18),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2),
  [1306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(206),
  [1309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(206),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(216),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(216),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2),
  [1322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(292),
  [1325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(292),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, .production_id = 64),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 3, .production_id = 73),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(507),
  [1349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(507),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(515),
  [1357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(515),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2),
  [1364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(385),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(385),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(288),
  [1399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(288),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(221),
  [1413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(221),
  [1416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 18),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(279),
  [1431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(279),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(211),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 13),
  [1479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(139),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 68),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 61),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 60),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 38),
  [1500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(811),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(814),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 38),
  [1514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 50), SHIFT_REPEAT(209),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 50),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2),
  [1521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(297),
  [1524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(297),
  [1527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(815),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 38),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 38),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(818),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 38),
  [1553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(810),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 38),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(807),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 38),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 41),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 27),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 27),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 27),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 29),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 27),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 27),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 27),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 27),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 27),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 13),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 13),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 13),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 20),
  [1655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 13),
  [1661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 13),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 13),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 13),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 13),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2),
  [1799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2), SHIFT_REPEAT(767),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 15),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2),
  [1820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2), SHIFT_REPEAT(181),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 69),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 13),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 50),
  [1949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 50), SHIFT_REPEAT(183),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 13),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [2000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [2012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 13),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [2026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [2042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [2058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [2064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 33), SHIFT_REPEAT(97),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 33),
  [2069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 33), SHIFT_REPEAT(573),
  [2072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 33),
  [2074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 33), SHIFT_REPEAT(143),
  [2077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 33),
  [2079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(107),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 55),
  [2090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2), SHIFT_REPEAT(140),
  [2093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 21),
  [2103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 54), SHIFT_REPEAT(167),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 54),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 13),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 49),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 22),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [2140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2), SHIFT_REPEAT(215),
  [2143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, .production_id = 13),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(168),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, .production_id = 13),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 33), SHIFT_REPEAT(508),
  [2187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 33),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [2191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, .production_id = 13),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(157),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, .production_id = 13),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, .production_id = 13),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 40), SHIFT_REPEAT(130),
  [2227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 40),
  [2229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 33), SHIFT_REPEAT(138),
  [2232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 33),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [2276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [2278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [2280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [2292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [2300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [2314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 33), SHIFT_REPEAT(117),
  [2317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 33),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [2345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 25),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 26),
  [2353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, .production_id = 25),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, .production_id = 25),
  [2363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, .production_id = 25),
  [2365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 4, .production_id = 27),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 4, .production_id = 27),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [2381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [2383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 25),
  [2385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 27),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [2391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 4, .production_id = 27),
  [2393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 30),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 13),
  [2409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [2415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [2419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 28),
  [2421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [2423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, .production_id = 13),
  [2425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2),
  [2427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [2431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [2435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 32),
  [2437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, .production_id = 12),
  [2443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 13),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [2449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 13),
  [2451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 13),
  [2453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [2455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [2457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 38),
  [2461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 8),
  [2463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 13),
  [2465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 32),
  [2467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 39),
  [2469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, .production_id = 13),
  [2471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, .production_id = 13),
  [2473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, .production_id = 13),
  [2475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, .production_id = 13),
  [2477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, .production_id = 13),
  [2479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, .production_id = 13),
  [2481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, .production_id = 13),
  [2483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 42),
  [2485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, .production_id = 13),
  [2487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, .production_id = 13),
  [2489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, .production_id = 13),
  [2495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, .production_id = 13),
  [2497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 32),
  [2499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, .production_id = 13),
  [2501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 13),
  [2503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, .production_id = 13),
  [2505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, .production_id = 13),
  [2507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, .production_id = 13),
  [2509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 44),
  [2511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 44),
  [2513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 13),
  [2515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 45),
  [2517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 17),
  [2519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, .production_id = 13),
  [2521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, .production_id = 13),
  [2523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 3, .production_id = 44),
  [2525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, .production_id = 13),
  [2527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 3, .production_id = 44),
  [2529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 13),
  [2531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [2533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, .production_id = 13),
  [2535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 69),
  [2537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 47),
  [2539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 48),
  [2541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 13),
  [2543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 13),
  [2545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 13),
  [2547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 13),
  [2549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [2551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 51),
  [2553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 52),
  [2555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 53),
  [2557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 13),
  [2559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 13),
  [2561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 3, .production_id = 44),
  [2565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 13),
  [2567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 14),
  [2569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2, .production_id = 67),
  [2571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [2573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [2575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, .production_id = 45),
  [2577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, .production_id = 47),
  [2579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 32),
  [2581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 13),
  [2583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, .production_id = 23),
  [2585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 32),
  [2587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 13),
  [2589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, .production_id = 38),
  [2591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 32),
  [2593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 13),
  [2595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 56),
  [2601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 13),
  [2603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 13),
  [2609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 13),
  [2611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [2613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 13),
  [2615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 13),
  [2617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 13),
  [2619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 13),
  [2623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [2625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [2627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 13),
  [2629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 17),
  [2631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 13),
  [2633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [2635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 13),
  [2637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 49),
  [2639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 62),
  [2641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 13),
  [2643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 13),
  [2645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 13),
  [2647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 72),
  [2649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 71),
  [2651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 13),
  [2653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 70),
  [2655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 13),
  [2657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 13),
  [2659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 13),
  [2661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 13),
  [2663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 13),
  [2665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 13),
  [2667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 13),
  [2669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 17),
  [2671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, .production_id = 52),
  [2673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 13),
  [2675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 13),
  [2677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 13),
  [2679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 13),
  [2681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 13),
  [2683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 13),
  [2685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 13),
  [2687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 13),
  [2689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 13),
  [2691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 19),
  [2719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [2733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, .production_id = 46),
  [2737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [2747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [2759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2761] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [2765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [2779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
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
