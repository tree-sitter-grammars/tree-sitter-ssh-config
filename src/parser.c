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
#define STATE_COUNT 825
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 367
#define ALIAS_COUNT 3
#define TOKEN_COUNT 181
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 77

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
  anon_sym_any = 25,
  anon_sym_inet = 26,
  anon_sym_inet6 = 27,
  aux_sym__batch_mode_token1 = 28,
  aux_sym__bind_address_token1 = 29,
  aux_sym__bind_interface_token1 = 30,
  aux_sym__canonical_domains_token1 = 31,
  aux_sym__canonicalize_fallback_local_token1 = 32,
  aux_sym__canonicalize_hostname_token1 = 33,
  aux_sym__canonicalize_max_dots_token1 = 34,
  aux_sym__canonicalize_permitted_cnames_token1 = 35,
  anon_sym_none = 36,
  anon_sym_COLON = 37,
  aux_sym__ca_signature_algorithms_token1 = 38,
  anon_sym_PLUS = 39,
  anon_sym_DASH = 40,
  aux_sym__certificate_file_token1 = 41,
  aux_sym__check_host_ip_token1 = 42,
  aux_sym__ciphers_token1 = 43,
  anon_sym_CARET = 44,
  aux_sym__clear_all_forwardings_token1 = 45,
  aux_sym__compression_token1 = 46,
  aux_sym__connection_attempts_token1 = 47,
  aux_sym__connect_timeout_token1 = 48,
  aux_sym__control_master_token1 = 49,
  anon_sym_auto = 50,
  anon_sym_autoask = 51,
  aux_sym__control_persist_token1 = 52,
  aux_sym__control_path_token1 = 53,
  aux_sym__dynamic_forward_token1 = 54,
  aux_sym__enable_escape_command_line_token1 = 55,
  aux_sym__enable_ssh_keysign_token1 = 56,
  aux_sym__escape_char_token1 = 57,
  aux_sym__escape_char_token2 = 58,
  aux_sym__exit_on_forward_failure_token1 = 59,
  aux_sym__fingerprint_hash_token1 = 60,
  anon_sym_md5 = 61,
  anon_sym_sha256 = 62,
  aux_sym__fork_after_authentication_token1 = 63,
  aux_sym__forward_agent_token1 = 64,
  aux_sym__forward_x11_token1 = 65,
  aux_sym__forward_x11_timeout_token1 = 66,
  aux_sym__forward_x11_trusted_token1 = 67,
  aux_sym__global_known_hosts_file_token1 = 68,
  aux_sym__gssapi_authentication_token1 = 69,
  aux_sym__gssapi_delegate_credentials_token1 = 70,
  aux_sym__hostbased_accepted_algorithms_token1 = 71,
  aux_sym__hostbased_accepted_algorithms_token2 = 72,
  aux_sym__hostbased_authentication_token1 = 73,
  aux_sym__host_key_algorithms_token1 = 74,
  aux_sym__host_key_alias_token1 = 75,
  aux_sym__hostname_token1 = 76,
  aux_sym__identities_only_token1 = 77,
  aux_sym__identity_agent_token1 = 78,
  anon_sym_SSH_AUTH_SOCK = 79,
  aux_sym__identity_file_token1 = 80,
  aux_sym__ignore_unknown_token1 = 81,
  aux_sym__include_token1 = 82,
  aux_sym__ipqos_token1 = 83,
  aux_sym__kbd_interactive_authentication_token1 = 84,
  aux_sym__kbd_interactive_authentication_token2 = 85,
  aux_sym__kex_algorithms_token1 = 86,
  aux_sym__known_hosts_command_token1 = 87,
  aux_sym__local_command_token1 = 88,
  aux_sym__local_forward_token1 = 89,
  aux_sym__log_level_token1 = 90,
  aux_sym__log_verbose_token1 = 91,
  aux_sym__log_verbose_value_token1 = 92,
  aux_sym__macs_token1 = 93,
  aux_sym__no_host_authentication_for_localhost_token1 = 94,
  aux_sym__number_of_password_prompts_token1 = 95,
  aux_sym__password_authentication_token1 = 96,
  aux_sym__permit_local_command_token1 = 97,
  aux_sym__permit_remote_open_token1 = 98,
  aux_sym__pkcs11_provider_token1 = 99,
  aux_sym__port_token1 = 100,
  aux_sym__preferred_authentications_token1 = 101,
  aux_sym__proxy_command_token1 = 102,
  aux_sym__proxy_jump_token1 = 103,
  anon_sym_AT = 104,
  aux_sym__proxy_jump_arg_token1 = 105,
  aux_sym__proxy_use_fdpass_token1 = 106,
  aux_sym__pubkey_accepted_algorithms_token1 = 107,
  aux_sym__pubkey_accepted_algorithms_token2 = 108,
  aux_sym__pubkey_authentication_token1 = 109,
  anon_sym_unbound = 110,
  anon_sym_host_DASHbound = 111,
  aux_sym__rekey_limit_token1 = 112,
  aux_sym__remote_command_token1 = 113,
  aux_sym__remote_command_token2 = 114,
  aux_sym__remote_forward_token1 = 115,
  aux_sym__request_tty_token1 = 116,
  anon_sym_force = 117,
  aux_sym__required_rsa_size_token1 = 118,
  aux_sym__revoked_host_keys_token1 = 119,
  aux_sym__security_key_provider_token1 = 120,
  aux_sym__send_env_token1 = 121,
  aux_sym__send_env_value_token1 = 122,
  aux_sym__server_alive_count_max_token1 = 123,
  aux_sym__server_alive_interval_token1 = 124,
  aux_sym__session_type_token1 = 125,
  anon_sym_subsystem = 126,
  anon_sym_default = 127,
  aux_sym__set_env_token1 = 128,
  anon_sym_EQ = 129,
  aux_sym__stdin_null_token1 = 130,
  aux_sym__stream_local_bind_mask_token1 = 131,
  aux_sym__stream_local_bind_mask_token2 = 132,
  aux_sym__stream_local_bind_unlink_token1 = 133,
  aux_sym__strict_host_key_checking_token1 = 134,
  anon_sym_accept_DASHnew = 135,
  anon_sym_off = 136,
  aux_sym__syslog_facility_token1 = 137,
  aux_sym__tcp_keep_alive_token1 = 138,
  aux_sym__tag_token1 = 139,
  aux_sym__tunnel_token1 = 140,
  anon_sym_point_DASHto_DASHpoint = 141,
  anon_sym_ethernet = 142,
  aux_sym__tunnel_device_token1 = 143,
  aux_sym__update_host_keys_token1 = 144,
  aux_sym__use_keychain_token1 = 145,
  aux_sym__user_known_hosts_file_token1 = 146,
  aux_sym__verify_host_key_dns_token1 = 147,
  aux_sym__visual_host_key_token1 = 148,
  aux_sym__xauth_location_token1 = 149,
  sym_ipqos = 150,
  sym_verbosity = 151,
  sym_facility = 152,
  sym_authentication = 153,
  sym_cipher = 154,
  sym_kex = 155,
  sym_key_sig = 156,
  sym_mac = 157,
  sym_sig = 158,
  aux_sym__file_token_token1 = 159,
  aux_sym__hosts_token_token1 = 160,
  aux_sym__hostname_token_token1 = 161,
  aux_sym__proxy_token_token1 = 162,
  sym_token = 163,
  anon_sym_DOLLAR = 164,
  sym__var_name = 165,
  anon_sym_DOLLAR_LBRACE = 166,
  anon_sym_RBRACE = 167,
  anon_sym_yes = 168,
  anon_sym_no = 169,
  sym__number = 170,
  aux_sym_bytes_token1 = 171,
  aux_sym_time_token1 = 172,
  aux_sym_time_token2 = 173,
  aux_sym_time_token3 = 174,
  aux_sym_time_token4 = 175,
  aux_sym_time_token5 = 176,
  sym_comment = 177,
  aux_sym__sep_token1 = 178,
  sym__space = 179,
  sym__eol = 180,
  sym_config = 181,
  sym_host_declaration = 182,
  sym_match_declaration = 183,
  sym_condition = 184,
  sym__all = 185,
  sym__match_canonical = 186,
  sym__match_final = 187,
  sym__match_exec = 188,
  sym__match_localnetwork = 189,
  sym__match_host = 190,
  sym__match_originalhost = 191,
  sym__match_tagged = 192,
  sym__match_user = 193,
  sym__match_localuser = 194,
  sym__match_value = 195,
  sym__declarations = 196,
  sym_parameter = 197,
  sym__add_keys_to_agent = 198,
  sym__address_family = 199,
  sym__batch_mode = 200,
  sym__bind_address = 201,
  sym__bind_interface = 202,
  sym__canonical_domains = 203,
  sym__canonicalize_fallback_local = 204,
  sym__canonicalize_hostname = 205,
  sym__canonicalize_max_dots = 206,
  sym__canonicalize_permitted_cnames = 207,
  sym__cnames_map = 208,
  sym__ca_signature_algorithms = 209,
  sym__certificate_file = 210,
  sym__check_host_ip = 211,
  sym__ciphers = 212,
  sym__clear_all_forwardings = 213,
  sym__compression = 214,
  sym__connection_attempts = 215,
  sym__connect_timeout = 216,
  sym__control_master = 217,
  sym__control_persist = 218,
  sym__control_path = 219,
  sym__dynamic_forward = 220,
  sym__forward_value_inner = 221,
  sym__dynamic_forward_value = 222,
  sym__enable_escape_command_line = 223,
  sym__enable_ssh_keysign = 224,
  sym__escape_char = 225,
  sym__exit_on_forward_failure = 226,
  sym__fingerprint_hash = 227,
  sym__fork_after_authentication = 228,
  sym__forward_agent = 229,
  sym__forward_x11 = 230,
  sym__forward_x11_timeout = 231,
  sym__forward_x11_trusted = 232,
  sym__global_known_hosts_file = 233,
  sym__gssapi_authentication = 234,
  sym__gssapi_delegate_credentials = 235,
  sym__hostbased_accepted_algorithms = 236,
  sym__hostbased_authentication = 237,
  sym__host_key_algorithms = 238,
  sym__host_key_alias = 239,
  sym__hostname = 240,
  sym__identities_only = 241,
  sym__identity_agent = 242,
  sym__identity_file = 243,
  sym__ignore_unknown = 244,
  sym__include = 245,
  sym__ipqos = 246,
  sym__kbd_interactive_authentication = 247,
  sym__kex_algorithms = 248,
  sym__known_hosts_command = 249,
  sym__local_command = 250,
  sym__local_forward = 251,
  sym__forward_value1 = 252,
  sym__forward_value2 = 253,
  sym__log_level = 254,
  sym__log_verbose = 255,
  sym__log_verbose_value = 256,
  sym__log_verbose_quoted = 257,
  sym__macs = 258,
  sym__no_host_authentication_for_localhost = 259,
  sym__number_of_password_prompts = 260,
  sym__password_authentication = 261,
  sym__permit_local_command = 262,
  sym__permit_remote_open = 263,
  sym__permit_remote_open_value = 264,
  sym__pkcs11_provider = 265,
  sym__port = 266,
  sym__preferred_authentications = 267,
  sym__proxy_command = 268,
  sym__proxy_jump = 269,
  sym__proxy_use_fdpass = 270,
  sym__pubkey_accepted_algorithms = 271,
  sym__pubkey_authentication = 272,
  sym__pubkey_authentication_arg = 273,
  sym__rekey_limit = 274,
  sym__remote_command = 275,
  sym__remote_forward = 276,
  sym__request_tty = 277,
  sym__required_rsa_size = 278,
  sym__revoked_host_keys = 279,
  sym__security_key_provider = 280,
  sym__send_env = 281,
  sym__send_env_value = 282,
  sym__server_alive_count_max = 283,
  sym__server_alive_interval = 284,
  sym__session_type = 285,
  sym__set_env = 286,
  sym__set_env_value = 287,
  sym__stdin_null = 288,
  sym__stream_local_bind_mask = 289,
  sym__stream_local_bind_unlink = 290,
  sym__strict_host_key_checking = 291,
  sym__syslog_facility = 292,
  sym__tcp_keep_alive = 293,
  sym__tag = 294,
  sym__tunnel = 295,
  sym__tunnel_device = 296,
  sym__update_host_keys = 297,
  sym__use_keychain = 298,
  sym__user = 299,
  sym__user_known_hosts_file = 300,
  sym__verify_host_key_dns = 301,
  sym__visual_host_key = 302,
  sym__xauth_location = 303,
  sym__file_token = 304,
  sym__hosts_token = 305,
  sym__hostname_token = 306,
  sym__proxy_token = 307,
  sym__var_value = 308,
  sym_variable = 309,
  sym__file_string = 310,
  sym__hosts_string = 311,
  sym__hostname_string = 312,
  sym__proxy_string = 313,
  sym__token_string = 314,
  sym__string = 315,
  sym__file_pattern_vars = 316,
  sym__pattern = 317,
  sym__boolean = 318,
  sym_number = 319,
  sym_bytes = 320,
  sym_time = 321,
  sym__sep = 322,
  aux_sym_config_repeat1 = 323,
  aux_sym_host_declaration_repeat1 = 324,
  aux_sym_match_declaration_repeat1 = 325,
  aux_sym__match_exec_repeat1 = 326,
  aux_sym__match_exec_repeat2 = 327,
  aux_sym__match_localnetwork_repeat1 = 328,
  aux_sym__match_localnetwork_repeat2 = 329,
  aux_sym__match_value_repeat1 = 330,
  aux_sym__match_value_repeat2 = 331,
  aux_sym__match_value_repeat3 = 332,
  aux_sym__match_value_repeat4 = 333,
  aux_sym__declarations_repeat1 = 334,
  aux_sym__canonical_domains_repeat1 = 335,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 336,
  aux_sym__cnames_map_repeat1 = 337,
  aux_sym__ca_signature_algorithms_repeat1 = 338,
  aux_sym__ciphers_repeat1 = 339,
  aux_sym__dynamic_forward_repeat1 = 340,
  aux_sym__global_known_hosts_file_repeat1 = 341,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 342,
  aux_sym__ignore_unknown_repeat1 = 343,
  aux_sym__kex_algorithms_repeat1 = 344,
  aux_sym__log_verbose_repeat1 = 345,
  aux_sym__log_verbose_repeat2 = 346,
  aux_sym__log_verbose_value_repeat1 = 347,
  aux_sym__macs_repeat1 = 348,
  aux_sym__permit_remote_open_repeat1 = 349,
  aux_sym__preferred_authentications_repeat1 = 350,
  aux_sym__remote_command_repeat1 = 351,
  aux_sym__send_env_repeat1 = 352,
  aux_sym__send_env_value_repeat1 = 353,
  aux_sym__set_env_repeat1 = 354,
  aux_sym__user_known_hosts_file_repeat1 = 355,
  aux_sym__file_string_repeat1 = 356,
  aux_sym__file_string_repeat2 = 357,
  aux_sym__hosts_string_repeat1 = 358,
  aux_sym__hostname_string_repeat1 = 359,
  aux_sym__hostname_string_repeat2 = 360,
  aux_sym__proxy_string_repeat1 = 361,
  aux_sym__token_string_repeat1 = 362,
  aux_sym__string_repeat1 = 363,
  aux_sym__string_repeat2 = 364,
  aux_sym__file_pattern_vars_repeat1 = 365,
  aux_sym__file_pattern_vars_repeat2 = 366,
  anon_alias_sym_User = 367,
  anon_alias_sym_host = 368,
  alias_sym_pattern = 369,
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
  [aux_sym__match_localnetwork_token2] = "string",
  [anon_sym_COMMA] = ",",
  [aux_sym__match_localnetwork_token3] = "string",
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
  [anon_sym_any] = "any",
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
  [aux_sym__dynamic_forward_token1] = "DynamicForward",
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
  [aux_sym__include_token1] = "Include",
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
  [aux_sym__pkcs11_provider_token1] = "PKCS11Provider",
  [aux_sym__port_token1] = "Port",
  [aux_sym__preferred_authentications_token1] = "PreferredAuthentications",
  [aux_sym__proxy_command_token1] = "ProxyCommand",
  [aux_sym__proxy_jump_token1] = "ProxyJump",
  [anon_sym_AT] = "@",
  [aux_sym__proxy_jump_arg_token1] = "uri",
  [aux_sym__proxy_use_fdpass_token1] = "ProxyUseFdpass",
  [aux_sym__pubkey_accepted_algorithms_token1] = "PubkeyAcceptedAlgorithms",
  [aux_sym__pubkey_accepted_algorithms_token2] = "PubkeyAcceptedKeyTypes",
  [aux_sym__pubkey_authentication_token1] = "PubkeyAuthentication",
  [anon_sym_unbound] = "unbound",
  [anon_sym_host_DASHbound] = "host-bound",
  [aux_sym__rekey_limit_token1] = "RekeyLimit",
  [aux_sym__remote_command_token1] = "RemoteCommand",
  [aux_sym__remote_command_token2] = "_remote_command_token2",
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
  [aux_sym__set_env_token1] = "SetEnv",
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
  [aux_sym__use_keychain_token1] = "UseKeychain",
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
  [sym_condition] = "condition",
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
  [sym__dynamic_forward] = "_dynamic_forward",
  [sym__forward_value_inner] = "_forward_value_inner",
  [sym__dynamic_forward_value] = "_dynamic_forward_value",
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
  [sym__include] = "_include",
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
  [sym__use_keychain] = "_use_keychain",
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
  [sym__proxy_string] = "_proxy_string",
  [sym__token_string] = "_token_string",
  [sym__string] = "_string",
  [sym__file_pattern_vars] = "_file_pattern_vars",
  [sym__pattern] = "_pattern",
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
  [aux_sym__dynamic_forward_repeat1] = "_dynamic_forward_repeat1",
  [aux_sym__global_known_hosts_file_repeat1] = "_global_known_hosts_file_repeat1",
  [aux_sym__hostbased_accepted_algorithms_repeat1] = "_hostbased_accepted_algorithms_repeat1",
  [aux_sym__ignore_unknown_repeat1] = "_ignore_unknown_repeat1",
  [aux_sym__kex_algorithms_repeat1] = "_kex_algorithms_repeat1",
  [aux_sym__log_verbose_repeat1] = "_log_verbose_repeat1",
  [aux_sym__log_verbose_repeat2] = "_log_verbose_repeat2",
  [aux_sym__log_verbose_value_repeat1] = "_log_verbose_value_repeat1",
  [aux_sym__macs_repeat1] = "_macs_repeat1",
  [aux_sym__permit_remote_open_repeat1] = "_permit_remote_open_repeat1",
  [aux_sym__preferred_authentications_repeat1] = "_preferred_authentications_repeat1",
  [aux_sym__remote_command_repeat1] = "_remote_command_repeat1",
  [aux_sym__send_env_repeat1] = "_send_env_repeat1",
  [aux_sym__send_env_value_repeat1] = "_send_env_value_repeat1",
  [aux_sym__set_env_repeat1] = "_set_env_repeat1",
  [aux_sym__user_known_hosts_file_repeat1] = "_user_known_hosts_file_repeat1",
  [aux_sym__file_string_repeat1] = "_file_string_repeat1",
  [aux_sym__file_string_repeat2] = "_file_string_repeat2",
  [aux_sym__hosts_string_repeat1] = "_hosts_string_repeat1",
  [aux_sym__hostname_string_repeat1] = "_hostname_string_repeat1",
  [aux_sym__hostname_string_repeat2] = "_hostname_string_repeat2",
  [aux_sym__proxy_string_repeat1] = "_proxy_string_repeat1",
  [aux_sym__token_string_repeat1] = "_token_string_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__string_repeat2] = "_string_repeat2",
  [aux_sym__file_pattern_vars_repeat1] = "_file_pattern_vars_repeat1",
  [aux_sym__file_pattern_vars_repeat2] = "_file_pattern_vars_repeat2",
  [anon_alias_sym_User] = "User",
  [anon_alias_sym_host] = "host",
  [alias_sym_pattern] = "pattern",
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
  [aux_sym__match_localnetwork_token3] = aux_sym__match_localnetwork_token2,
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
  [anon_sym_any] = anon_sym_any,
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
  [aux_sym__dynamic_forward_token1] = aux_sym__dynamic_forward_token1,
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
  [aux_sym__include_token1] = aux_sym__include_token1,
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
  [aux_sym__pkcs11_provider_token1] = aux_sym__pkcs11_provider_token1,
  [aux_sym__port_token1] = aux_sym__port_token1,
  [aux_sym__preferred_authentications_token1] = aux_sym__preferred_authentications_token1,
  [aux_sym__proxy_command_token1] = aux_sym__proxy_command_token1,
  [aux_sym__proxy_jump_token1] = aux_sym__proxy_jump_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__proxy_jump_arg_token1] = aux_sym__proxy_jump_arg_token1,
  [aux_sym__proxy_use_fdpass_token1] = aux_sym__proxy_use_fdpass_token1,
  [aux_sym__pubkey_accepted_algorithms_token1] = aux_sym__pubkey_accepted_algorithms_token1,
  [aux_sym__pubkey_accepted_algorithms_token2] = aux_sym__pubkey_accepted_algorithms_token2,
  [aux_sym__pubkey_authentication_token1] = aux_sym__pubkey_authentication_token1,
  [anon_sym_unbound] = anon_sym_unbound,
  [anon_sym_host_DASHbound] = anon_sym_host_DASHbound,
  [aux_sym__rekey_limit_token1] = aux_sym__rekey_limit_token1,
  [aux_sym__remote_command_token1] = aux_sym__remote_command_token1,
  [aux_sym__remote_command_token2] = aux_sym__remote_command_token2,
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
  [aux_sym__set_env_token1] = aux_sym__set_env_token1,
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
  [aux_sym__use_keychain_token1] = aux_sym__use_keychain_token1,
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
  [sym_condition] = sym_condition,
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
  [sym__dynamic_forward] = sym__dynamic_forward,
  [sym__forward_value_inner] = sym__forward_value_inner,
  [sym__dynamic_forward_value] = sym__dynamic_forward_value,
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
  [sym__include] = sym__include,
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
  [sym__use_keychain] = sym__use_keychain,
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
  [sym__proxy_string] = sym__proxy_string,
  [sym__token_string] = sym__token_string,
  [sym__string] = sym__string,
  [sym__file_pattern_vars] = sym__file_pattern_vars,
  [sym__pattern] = sym__pattern,
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
  [aux_sym__dynamic_forward_repeat1] = aux_sym__dynamic_forward_repeat1,
  [aux_sym__global_known_hosts_file_repeat1] = aux_sym__global_known_hosts_file_repeat1,
  [aux_sym__hostbased_accepted_algorithms_repeat1] = aux_sym__hostbased_accepted_algorithms_repeat1,
  [aux_sym__ignore_unknown_repeat1] = aux_sym__ignore_unknown_repeat1,
  [aux_sym__kex_algorithms_repeat1] = aux_sym__kex_algorithms_repeat1,
  [aux_sym__log_verbose_repeat1] = aux_sym__log_verbose_repeat1,
  [aux_sym__log_verbose_repeat2] = aux_sym__log_verbose_repeat2,
  [aux_sym__log_verbose_value_repeat1] = aux_sym__log_verbose_value_repeat1,
  [aux_sym__macs_repeat1] = aux_sym__macs_repeat1,
  [aux_sym__permit_remote_open_repeat1] = aux_sym__permit_remote_open_repeat1,
  [aux_sym__preferred_authentications_repeat1] = aux_sym__preferred_authentications_repeat1,
  [aux_sym__remote_command_repeat1] = aux_sym__remote_command_repeat1,
  [aux_sym__send_env_repeat1] = aux_sym__send_env_repeat1,
  [aux_sym__send_env_value_repeat1] = aux_sym__send_env_value_repeat1,
  [aux_sym__set_env_repeat1] = aux_sym__set_env_repeat1,
  [aux_sym__user_known_hosts_file_repeat1] = aux_sym__user_known_hosts_file_repeat1,
  [aux_sym__file_string_repeat1] = aux_sym__file_string_repeat1,
  [aux_sym__file_string_repeat2] = aux_sym__file_string_repeat2,
  [aux_sym__hosts_string_repeat1] = aux_sym__hosts_string_repeat1,
  [aux_sym__hostname_string_repeat1] = aux_sym__hostname_string_repeat1,
  [aux_sym__hostname_string_repeat2] = aux_sym__hostname_string_repeat2,
  [aux_sym__proxy_string_repeat1] = aux_sym__proxy_string_repeat1,
  [aux_sym__token_string_repeat1] = aux_sym__token_string_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym__string_repeat2] = aux_sym__string_repeat2,
  [aux_sym__file_pattern_vars_repeat1] = aux_sym__file_pattern_vars_repeat1,
  [aux_sym__file_pattern_vars_repeat2] = aux_sym__file_pattern_vars_repeat2,
  [anon_alias_sym_User] = anon_alias_sym_User,
  [anon_alias_sym_host] = anon_alias_sym_host,
  [alias_sym_pattern] = alias_sym_pattern,
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
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__match_localnetwork_token3] = {
    .visible = true,
    .named = true,
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
  [anon_sym_any] = {
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
  [aux_sym__dynamic_forward_token1] = {
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
  [aux_sym__include_token1] = {
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
  [aux_sym__pubkey_accepted_algorithms_token2] = {
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
  [aux_sym__remote_command_token2] = {
    .visible = false,
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
  [aux_sym__set_env_token1] = {
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
  [aux_sym__use_keychain_token1] = {
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
  [sym_condition] = {
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
  [sym__dynamic_forward] = {
    .visible = false,
    .named = true,
  },
  [sym__forward_value_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__dynamic_forward_value] = {
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
  [sym__include] = {
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
  [sym__use_keychain] = {
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
  [sym__proxy_string] = {
    .visible = false,
    .named = true,
  },
  [sym__token_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__file_pattern_vars] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
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
  [aux_sym__dynamic_forward_repeat1] = {
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
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat2] = {
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
  [alias_sym_pattern] = {
    .visible = true,
    .named = true,
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
  field_socket = 13,
  field_source_domain_list = 14,
  field_target_domain_list = 15,
  field_uri = 16,
  field_user = 17,
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
  [field_socket] = "socket",
  [field_source_domain_list] = "source_domain_list",
  [field_target_domain_list] = "target_domain_list",
  [field_uri] = "uri",
  [field_user] = "user",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 4},
  [4] = {.index = 10, .length = 3},
  [5] = {.index = 13, .length = 5},
  [6] = {.index = 18, .length = 5},
  [7] = {.index = 23, .length = 4},
  [8] = {.index = 27, .length = 6},
  [9] = {.index = 33, .length = 4},
  [10] = {.index = 37, .length = 1},
  [12] = {.index = 38, .length = 1},
  [13] = {.index = 39, .length = 1},
  [14] = {.index = 40, .length = 2},
  [15] = {.index = 42, .length = 2},
  [17] = {.index = 42, .length = 2},
  [18] = {.index = 44, .length = 1},
  [19] = {.index = 45, .length = 4},
  [20] = {.index = 49, .length = 2},
  [21] = {.index = 51, .length = 4},
  [22] = {.index = 55, .length = 1},
  [23] = {.index = 56, .length = 3},
  [24] = {.index = 59, .length = 1},
  [25] = {.index = 60, .length = 5},
  [26] = {.index = 65, .length = 4},
  [27] = {.index = 42, .length = 2},
  [28] = {.index = 69, .length = 5},
  [30] = {.index = 74, .length = 1},
  [31] = {.index = 75, .length = 2},
  [32] = {.index = 77, .length = 3},
  [33] = {.index = 80, .length = 7},
  [34] = {.index = 87, .length = 3},
  [35] = {.index = 90, .length = 7},
  [36] = {.index = 97, .length = 1},
  [37] = {.index = 98, .length = 9},
  [38] = {.index = 107, .length = 7},
  [41] = {.index = 114, .length = 1},
  [42] = {.index = 115, .length = 2},
  [43] = {.index = 117, .length = 2},
  [44] = {.index = 117, .length = 2},
  [45] = {.index = 117, .length = 2},
  [47] = {.index = 119, .length = 4},
  [48] = {.index = 123, .length = 3},
  [49] = {.index = 126, .length = 6},
  [50] = {.index = 132, .length = 2},
  [51] = {.index = 97, .length = 1},
  [52] = {.index = 134, .length = 2},
  [53] = {.index = 136, .length = 2},
  [54] = {.index = 138, .length = 3},
  [55] = {.index = 141, .length = 6},
  [56] = {.index = 147, .length = 3},
  [57] = {.index = 150, .length = 9},
  [58] = {.index = 159, .length = 7},
  [59] = {.index = 166, .length = 3},
  [60] = {.index = 169, .length = 6},
  [61] = {.index = 175, .length = 2},
  [62] = {.index = 177, .length = 2},
  [63] = {.index = 179, .length = 4},
  [64] = {.index = 183, .length = 2},
  [65] = {.index = 185, .length = 3},
  [66] = {.index = 188, .length = 3},
  [67] = {.index = 191, .length = 3},
  [68] = {.index = 194, .length = 11},
  [69] = {.index = 205, .length = 4},
  [70] = {.index = 209, .length = 4},
  [71] = {.index = 209, .length = 4},
  [72] = {.index = 213, .length = 4},
  [73] = {.index = 217, .length = 3},
  [74] = {.index = 220, .length = 2},
  [75] = {.index = 222, .length = 6},
  [76] = {.index = 228, .length = 5},
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
    {field_bind_address, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [10] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [13] =
    {field_argument, 0, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_socket, 0, .inherited = true},
  [18] =
    {field_argument, 0, .inherited = true},
    {field_file, 0, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_line, 0, .inherited = true},
  [23] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [27] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_uri, 0, .inherited = true},
    {field_user, 0, .inherited = true},
  [33] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_local_tun, 0, .inherited = true},
    {field_remote_tun, 0, .inherited = true},
  [37] =
    {field_keyword, 0, .inherited = true},
  [38] =
    {field_criteria, 0},
  [39] =
    {field_criteria, 0, .inherited = true},
  [40] =
    {field_argument, 0, .inherited = true},
    {field_criteria, 0, .inherited = true},
  [42] =
    {field_argument, 2},
    {field_keyword, 0},
  [44] =
    {field_keyword, 0},
  [45] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [49] =
    {field_bind_address, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [51] =
    {field_argument, 2},
    {field_bind_address, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [55] =
    {field_port, 0},
  [56] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [59] =
    {field_socket, 0},
  [60] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [65] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [69] =
    {field_argument, 2},
    {field_bind_address, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_socket, 2, .inherited = true},
  [74] =
    {field_criteria, 1, .inherited = true},
  [75] =
    {field_argument, 1, .inherited = true},
    {field_criteria, 1, .inherited = true},
  [77] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [80] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [87] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [90] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [97] =
    {field_name, 1},
  [98] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [107] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [114] =
    {field_argument, 1},
  [115] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [117] =
    {field_argument, 2},
    {field_criteria, 0},
  [119] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [123] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [126] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [132] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [134] =
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [136] =
    {field_bind_address, 0},
    {field_port, 2},
  [138] =
    {field_argument, 1},
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [141] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_bind_address, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [147] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [150] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
    {field_socket, 2, .inherited = true},
    {field_socket, 4, .inherited = true},
  [159] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [166] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [169] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [175] =
    {field_host, 0},
    {field_port, 2},
  [177] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [179] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [183] =
    {field_argument, 1},
    {field_argument, 2},
  [185] =
    {field_argument, 2},
    {field_argument, 3},
    {field_criteria, 0},
  [188] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [191] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [194] =
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
  [205] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [209] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_criteria, 0},
  [213] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [217] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [220] =
    {field_host, 1},
    {field_port, 3},
  [222] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_argument, 6},
    {field_keyword, 0},
  [228] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_criteria, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = alias_sym_pattern,
  },
  [15] = {
    [0] = anon_alias_sym_User,
  },
  [16] = {
    [0] = aux_sym__match_localnetwork_token2,
  },
  [27] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [29] = {
    [0] = sym_variable,
  },
  [36] = {
    [1] = sym_variable,
  },
  [39] = {
    [1] = sym_variable,
  },
  [40] = {
    [1] = alias_sym_pattern,
  },
  [43] = {
    [0] = anon_alias_sym_host,
  },
  [44] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [46] = {
    [1] = aux_sym__match_localnetwork_token2,
  },
  [70] = {
    [3] = aux_sym__match_localnetwork_token2,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__match_exec_repeat1, 2,
    aux_sym__match_exec_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__match_exec_repeat2, 2,
    aux_sym__match_exec_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__match_value_repeat1, 2,
    aux_sym__match_value_repeat1,
    alias_sym_pattern,
  aux_sym__match_value_repeat3, 2,
    aux_sym__match_value_repeat3,
    alias_sym_pattern,
  aux_sym__remote_command_repeat1, 2,
    aux_sym__remote_command_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__send_env_value_repeat1, 2,
    aux_sym__send_env_value_repeat1,
    sym_variable,
  aux_sym__file_string_repeat1, 2,
    aux_sym__file_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__file_string_repeat2, 2,
    aux_sym__file_string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__hosts_string_repeat1, 2,
    aux_sym__hosts_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__hostname_string_repeat1, 2,
    aux_sym__hostname_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__hostname_string_repeat2, 2,
    aux_sym__hostname_string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__proxy_string_repeat1, 2,
    aux_sym__proxy_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__token_string_repeat1, 2,
    aux_sym__token_string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__string_repeat1, 2,
    aux_sym__string_repeat1,
    aux_sym__match_localnetwork_token2,
  aux_sym__string_repeat2, 2,
    aux_sym__string_repeat2,
    aux_sym__match_localnetwork_token2,
  aux_sym__file_pattern_vars_repeat1, 2,
    aux_sym__file_pattern_vars_repeat1,
    alias_sym_pattern,
  aux_sym__file_pattern_vars_repeat2, 2,
    aux_sym__file_pattern_vars_repeat2,
    alias_sym_pattern,
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
  [94] = 84,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 92,
  [101] = 101,
  [102] = 83,
  [103] = 103,
  [104] = 88,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 88,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 83,
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
  [147] = 97,
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
  [159] = 99,
  [160] = 160,
  [161] = 99,
  [162] = 97,
  [163] = 163,
  [164] = 164,
  [165] = 84,
  [166] = 166,
  [167] = 167,
  [168] = 84,
  [169] = 84,
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
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 167,
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
  [263] = 167,
  [264] = 84,
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
  [300] = 187,
  [301] = 232,
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
  [401] = 181,
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
  [572] = 326,
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
  [810] = 772,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 772,
  [815] = 815,
  [816] = 772,
  [817] = 772,
  [818] = 772,
  [819] = 819,
  [820] = 777,
  [821] = 777,
  [822] = 777,
  [823] = 777,
  [824] = 777,
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
      if (eof) ADVANCE(1844);
      if (lookahead == '!') ADVANCE(1847);
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(2051);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '+') ADVANCE(1911);
      if (lookahead == ',') ADVANCE(1880);
      if (lookahead == '-') ADVANCE(1912);
      if (lookahead == ':') ADVANCE(1909);
      if (lookahead == '=') ADVANCE(2009);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead == '@') ADVANCE(1978);
      if (lookahead == 'S') ADVANCE(1853);
      if (lookahead == '^') ADVANCE(1916);
      if (lookahead == 's') ADVANCE(1853);
      if (lookahead == '}') ADVANCE(2054);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1864);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1864);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1853);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1853);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1853);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1853);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'g' ||
          lookahead == 'k') ADVANCE(1853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1853);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2069);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1847);
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '+') ADVANCE(1911);
      if (lookahead == '-') ADVANCE(1912);
      if (lookahead == '0') ADVANCE(2057);
      if (lookahead == ':') ADVANCE(1909);
      if (lookahead == '=') ADVANCE(2066);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead == 'A') ADVANCE(1229);
      if (lookahead == 'C') ADVANCE(789);
      if (lookahead == 'E') ADVANCE(1806);
      if (lookahead == 'F') ADVANCE(1167);
      if (lookahead == 'O') ADVANCE(1560);
      if (lookahead == 'S') ADVANCE(1966);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead == 'r') ADVANCE(665);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 'w') ADVANCE(426);
      if (lookahead == 'y') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2067);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1460);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1641);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2058);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1847);
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == ':') ADVANCE(1909);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1989);
      if (lookahead == '%') ADVANCE(1992);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1990);
      if (lookahead != 0) ADVANCE(1987);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1989);
      if (lookahead == '%') ADVANCE(1993);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1990);
      if (lookahead != 0) ADVANCE(1987);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1991);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1990);
      if (lookahead != 0) ADVANCE(1987);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1859);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1994);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1990);
      if (lookahead != 0) ADVANCE(1987);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == ',') ADVANCE(1880);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '-') ADVANCE(1912);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2002);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(2057);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2061);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2062);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2063);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2064);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2060);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2058);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'D') ADVANCE(240);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'U') ADVANCE(279);
      if (lookahead == 'h') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(551);
      if (lookahead == 'u') ADVANCE(530);
      if (lookahead == 'y') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead == 'G' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(2059);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(2051);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == 'S') ADVANCE(1854);
      if (lookahead == 'n') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '0') ADVANCE(1853);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1864);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead == 'n') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(1858);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(1865);
      if (lookahead == '%') ADVANCE(1867);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0) ADVANCE(1864);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(1865);
      if (lookahead == '%') ADVANCE(1867);
      if (lookahead != 0) ADVANCE(1864);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(2050);
      if (lookahead == 'n') ADVANCE(1856);
      if (lookahead == 'y') ADVANCE(1855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '$') ADVANCE(2050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '%') ADVANCE(1861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '%') ADVANCE(1867);
      if (lookahead != 0) ADVANCE(1864);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '%') ADVANCE(1859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '%') ADVANCE(1866);
      if (lookahead != 0) ADVANCE(1864);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == ',') ADVANCE(1880);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0) ADVANCE(1864);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '0') ADVANCE(1853);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead == 'n') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0) ADVANCE(1864);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1864);
      if (lookahead != 0) ADVANCE(1853);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead != 0) ADVANCE(1864);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1863);
      if (lookahead == '*') ADVANCE(1888);
      if (lookahead == 'a') ADVANCE(1874);
      if (lookahead == 'n') ADVANCE(1876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(1989);
      if (lookahead == '%') ADVANCE(1992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1987);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(1989);
      if (lookahead == '%') ADVANCE(1993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1987);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(1991);
      if (lookahead == 'n') ADVANCE(1988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1987);
      END_STATE();
    case 46:
      if (lookahead == '%') ADVANCE(1994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1987);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == ',') ADVANCE(1880);
      if (lookahead == ':') ADVANCE(1909);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(1887);
      if (lookahead == ':') ADVANCE(1909);
      if (lookahead == '?') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1864);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(1889);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1881);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(398);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(519);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(436);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(707);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(525);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(637);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(447);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(713);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '@') ADVANCE(576);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == '@') ADVANCE(553);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '1') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(480);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(536);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(684);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(339);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(547);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(652);
      if (lookahead == '4') ADVANCE(87);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '8') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(419);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(659);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(660);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(668);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(670);
      END_STATE();
    case 101:
      if (lookahead == '.') ADVANCE(561);
      END_STATE();
    case 102:
      if (lookahead == '.') ADVANCE(351);
      END_STATE();
    case 103:
      if (lookahead == '.') ADVANCE(354);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(356);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(357);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(359);
      END_STATE();
    case 107:
      if (lookahead == '0') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == '0') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == '0') ADVANCE(181);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '2') ADVANCE(179);
      END_STATE();
    case 111:
      if (lookahead == '1') ADVANCE(2040);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(2042);
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(226);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(715);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(1939);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(173);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(2037);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(2037);
      if (lookahead == '2') ADVANCE(190);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(2044);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(1833);
      if (lookahead == '2') ADVANCE(1833);
      if (lookahead == '3') ADVANCE(1833);
      if (lookahead == '4') ADVANCE(1833);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(222);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(224);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '6') ADVANCE(175);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(223);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(115);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(228);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(142);
      END_STATE();
    case 130:
      if (lookahead == '1') ADVANCE(170);
      END_STATE();
    case 131:
      if (lookahead == '1') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == '1') ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == '1') ADVANCE(1509);
      END_STATE();
    case 134:
      if (lookahead == '1') ADVANCE(227);
      END_STATE();
    case 135:
      if (lookahead == '1') ADVANCE(232);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(221);
      if (lookahead == '9') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(2040);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(2037);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(2044);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(217);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(2043);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '3') ADVANCE(219);
      if (lookahead == '5') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(186);
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(184);
      if (lookahead == '5') ADVANCE(129);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(117);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(190);
      if (lookahead == '3') ADVANCE(218);
      if (lookahead == '5') ADVANCE(151);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(111);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(191);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == '3') ADVANCE(220);
      if (lookahead == '5') ADVANCE(159);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == '5') ADVANCE(132);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(78);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(200);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(80);
      END_STATE();
    case 167:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 168:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 170:
      if (lookahead == '2') ADVANCE(233);
      END_STATE();
    case 171:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 172:
      if (lookahead == '2') ADVANCE(97);
      END_STATE();
    case 173:
      if (lookahead == '3') ADVANCE(109);
      END_STATE();
    case 174:
      if (lookahead == '4') ADVANCE(2040);
      END_STATE();
    case 175:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 176:
      if (lookahead == '4') ADVANCE(2037);
      END_STATE();
    case 177:
      if (lookahead == '4') ADVANCE(2044);
      END_STATE();
    case 178:
      if (lookahead == '5') ADVANCE(1935);
      END_STATE();
    case 179:
      if (lookahead == '5') ADVANCE(213);
      END_STATE();
    case 180:
      if (lookahead == '5') ADVANCE(2042);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(231);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(205);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(113);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(211);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(183);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(206);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(122);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(207);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(187);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(210);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(123);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(214);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(192);
      END_STATE();
    case 195:
      if (lookahead == '5') ADVANCE(209);
      END_STATE();
    case 196:
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 197:
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 198:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 199:
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 200:
      if (lookahead == '5') ADVANCE(198);
      END_STATE();
    case 201:
      if (lookahead == '5') ADVANCE(199);
      END_STATE();
    case 202:
      if (lookahead == '5') ADVANCE(134);
      END_STATE();
    case 203:
      if (lookahead == '5') ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == '5') ADVANCE(215);
      END_STATE();
    case 205:
      if (lookahead == '6') ADVANCE(1936);
      END_STATE();
    case 206:
      if (lookahead == '6') ADVANCE(2040);
      END_STATE();
    case 207:
      if (lookahead == '6') ADVANCE(2038);
      END_STATE();
    case 208:
      if (lookahead == '6') ADVANCE(2037);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(2044);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(66);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(2043);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(114);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(232);
      END_STATE();
    case 215:
      if (lookahead == '6') ADVANCE(234);
      END_STATE();
    case 216:
      if (lookahead == '7') ADVANCE(212);
      END_STATE();
    case 217:
      if (lookahead == '8') ADVANCE(67);
      END_STATE();
    case 218:
      if (lookahead == '8') ADVANCE(176);
      END_STATE();
    case 219:
      if (lookahead == '8') ADVANCE(174);
      END_STATE();
    case 220:
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 221:
      if (lookahead == '8') ADVANCE(54);
      END_STATE();
    case 222:
      if (lookahead == '9') ADVANCE(2040);
      END_STATE();
    case 223:
      if (lookahead == '9') ADVANCE(2044);
      END_STATE();
    case 224:
      if (lookahead == '9') ADVANCE(66);
      END_STATE();
    case 225:
      if (lookahead == '9') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 226:
      if (lookahead == '9') ADVANCE(81);
      END_STATE();
    case 227:
      if (lookahead == '9') ADVANCE(85);
      END_STATE();
    case 228:
      if (lookahead == '9') ADVANCE(234);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(1909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 230:
      if (lookahead == '@') ADVANCE(553);
      END_STATE();
    case 231:
      if (lookahead == '@') ADVANCE(575);
      END_STATE();
    case 232:
      if (lookahead == '@') ADVANCE(576);
      END_STATE();
    case 233:
      if (lookahead == '@') ADVANCE(577);
      END_STATE();
    case 234:
      if (lookahead == '@') ADVANCE(578);
      END_STATE();
    case 235:
      if (lookahead == 'A') ADVANCE(280);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 236:
      if (lookahead == 'A') ADVANCE(259);
      END_STATE();
    case 237:
      if (lookahead == 'A') ADVANCE(1245);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(260);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(286);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(248);
      END_STATE();
    case 241:
      if (lookahead == 'B') ADVANCE(285);
      END_STATE();
    case 242:
      if (lookahead == 'B') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1054);
      END_STATE();
    case 243:
      if (lookahead == 'C') ADVANCE(258);
      END_STATE();
    case 244:
      if (lookahead == 'C') ADVANCE(238);
      END_STATE();
    case 245:
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1341);
      END_STATE();
    case 246:
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(1528);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1607);
      END_STATE();
    case 247:
      if (lookahead == 'E') ADVANCE(2032);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(276);
      END_STATE();
    case 251:
      if (lookahead == 'F') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1247);
      END_STATE();
    case 252:
      if (lookahead == 'G') ADVANCE(2033);
      END_STATE();
    case 253:
      if (lookahead == 'H') ADVANCE(728);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(597);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1526);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(955);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1285);
      END_STATE();
    case 254:
      if (lookahead == 'H') ADVANCE(289);
      END_STATE();
    case 255:
      if (lookahead == 'H') ADVANCE(2034);
      END_STATE();
    case 256:
      if (lookahead == 'H') ADVANCE(290);
      END_STATE();
    case 257:
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 258:
      if (lookahead == 'K') ADVANCE(1953);
      END_STATE();
    case 259:
      if (lookahead == 'L') ADVANCE(2032);
      END_STATE();
    case 260:
      if (lookahead == 'L') ADVANCE(1837);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(269);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(251);
      if (lookahead == 'n') ADVANCE(835);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(958);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1517);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(2034);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(835);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(958);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1517);
      END_STATE();
    case 265:
      if (lookahead == 'O') ADVANCE(1109);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1286);
      END_STATE();
    case 266:
      if (lookahead == 'O') ADVANCE(2032);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(277);
      END_STATE();
    case 268:
      if (lookahead == 'O') ADVANCE(243);
      END_STATE();
    case 269:
      if (lookahead == 'O') ADVANCE(263);
      END_STATE();
    case 270:
      if (lookahead == 'O') ADVANCE(275);
      END_STATE();
    case 271:
      if (lookahead == 'O') ADVANCE(244);
      END_STATE();
    case 272:
      if (lookahead == 'R') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1132);
      END_STATE();
    case 273:
      if (lookahead == 'R') ADVANCE(270);
      END_STATE();
    case 274:
      if (lookahead == 'R') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(1131);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(2032);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(2034);
      END_STATE();
    case 277:
      if (lookahead == 'S') ADVANCE(247);
      END_STATE();
    case 278:
      if (lookahead == 'S') ADVANCE(268);
      END_STATE();
    case 279:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 280:
      if (lookahead == 'T') ADVANCE(236);
      END_STATE();
    case 281:
      if (lookahead == 'T') ADVANCE(2032);
      END_STATE();
    case 282:
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(256);
      END_STATE();
    case 284:
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 285:
      if (lookahead == 'U') ADVANCE(252);
      END_STATE();
    case 286:
      if (lookahead == 'U') ADVANCE(283);
      END_STATE();
    case 287:
      if (lookahead == 'U') ADVANCE(282);
      END_STATE();
    case 288:
      if (lookahead == '^') ADVANCE(1932);
      if (lookahead == 'n') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1930);
      END_STATE();
    case 289:
      if (lookahead == '_') ADVANCE(239);
      END_STATE();
    case 290:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 291:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(2040);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(2044);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(717);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 330:
      if (lookahead == 'b') ADVANCE(615);
      END_STATE();
    case 331:
      if (lookahead == 'b') ADVANCE(343);
      END_STATE();
    case 332:
      if (lookahead == 'b') ADVANCE(343);
      if (lookahead == 't') ADVANCE(598);
      END_STATE();
    case 333:
      if (lookahead == 'b') ADVANCE(300);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 335:
      if (lookahead == 'b') ADVANCE(508);
      END_STATE();
    case 336:
      if (lookahead == 'b') ADVANCE(570);
      END_STATE();
    case 337:
      if (lookahead == 'b') ADVANCE(309);
      END_STATE();
    case 338:
      if (lookahead == 'b') ADVANCE(564);
      END_STATE();
    case 339:
      if (lookahead == 'b') ADVANCE(572);
      END_STATE();
    case 340:
      if (lookahead == 'b') ADVANCE(629);
      END_STATE();
    case 341:
      if (lookahead == 'b') ADVANCE(329);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1132);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(2036);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(2035);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1257);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(565);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(567);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(683);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(992);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(1983);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(1984);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(2035);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1835);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(664);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(666);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(669);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(888);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1341);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(1907);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(1997);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(2031);
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(2035);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1247);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 427:
      if (lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 428:
      if (lookahead == 'f') ADVANCE(2017);
      END_STATE();
    case 429:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(2031);
      END_STATE();
    case 431:
      if (lookahead == 'f') ADVANCE(427);
      END_STATE();
    case 432:
      if (lookahead == 'f') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1139);
      END_STATE();
    case 433:
      if (lookahead == 'f') ADVANCE(293);
      END_STATE();
    case 434:
      if (lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 435:
      if (lookahead == 'g') ADVANCE(2037);
      END_STATE();
    case 436:
      if (lookahead == 'g') ADVANCE(601);
      END_STATE();
    case 437:
      if (lookahead == 'g') ADVANCE(448);
      END_STATE();
    case 438:
      if (lookahead == 'g') ADVANCE(422);
      END_STATE();
    case 439:
      if (lookahead == 'g') ADVANCE(642);
      if (lookahead == 'h') ADVANCE(571);
      if (lookahead == 'k') ADVANCE(403);
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(537);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == 'k') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(904);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1605);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 446:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(399);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(583);
      END_STATE();
    case 449:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 450:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 451:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(306);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 468:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 469:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 470:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 471:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 472:
      if (lookahead == 'h') ADVANCE(89);
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 473:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 474:
      if (lookahead == 'h') ADVANCE(550);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 495:
      if (lookahead == 'k') ADVANCE(1892);
      END_STATE();
    case 496:
      if (lookahead == 'k') ADVANCE(1923);
      END_STATE();
    case 497:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 498:
      if (lookahead == 'k') ADVANCE(404);
      END_STATE();
    case 499:
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 500:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1606);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(2036);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(2006);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(2037);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(2041);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(2039);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(1893);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(2044);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(484);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(905);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(952);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(1876);
      if (lookahead == 's') ADVANCE(1877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1439);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(2056);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(1922);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1391);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1373);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(556);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(705);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(687);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(574);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 593:
      if (lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 594:
      if (lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 595:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 596:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(2036);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(2040);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(2055);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(2044);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(720);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1210);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(1836);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 660:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 664:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 665:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 666:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 667:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 668:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 669:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 670:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(1897);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(2007);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(2023);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(2022);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(2031);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(717);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 698:
      if (lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 699:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 700:
      if (lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 701:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 702:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 703:
      if (lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 704:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 705:
      if (lookahead == 'u') ADVANCE(675);
      END_STATE();
    case 706:
      if (lookahead == 'u') ADVANCE(697);
      END_STATE();
    case 707:
      if (lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 708:
      if (lookahead == 'v') ADVANCE(415);
      END_STATE();
    case 709:
      if (lookahead == 'v') ADVANCE(394);
      END_STATE();
    case 710:
      if (lookahead == 'w') ADVANCE(2016);
      END_STATE();
    case 711:
      if (lookahead == 'w') ADVANCE(377);
      END_STATE();
    case 712:
      if (lookahead == 'w') ADVANCE(568);
      END_STATE();
    case 713:
      if (lookahead == 'w') ADVANCE(486);
      END_STATE();
    case 714:
      if (lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 715:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 716:
      if (lookahead == 'y') ADVANCE(1895);
      END_STATE();
    case 717:
      if (lookahead == 'y') ADVANCE(2031);
      END_STATE();
    case 718:
      if (lookahead == 'y') ADVANCE(2035);
      END_STATE();
    case 719:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 720:
      if (lookahead == 'y') ADVANCE(621);
      END_STATE();
    case 721:
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 722:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1526);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(955);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1285);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1674);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1342);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1506);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1345);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1760);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1245);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1288);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1805);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1498);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1314);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1802);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1539);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1497);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1612);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1525);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(845);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1529);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(931);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(825);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1246);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1294);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(906);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1231);
      END_STATE();
    case 743:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1244);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1082);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1533);
      END_STATE();
    case 747:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 748:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(865);
      END_STATE();
    case 749:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1625);
      END_STATE();
    case 750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1235);
      END_STATE();
    case 751:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1236);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1701);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1284);
      END_STATE();
    case 756:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1519);
      END_STATE();
    case 757:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1540);
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1156);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1584);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1543);
      END_STATE();
    case 761:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1621);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1677);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1544);
      END_STATE();
    case 763:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1546);
      END_STATE();
    case 764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1238);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1547);
      END_STATE();
    case 766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1615);
      END_STATE();
    case 767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1262);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1557);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1239);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1718);
      END_STATE();
    case 771:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1240);
      END_STATE();
    case 772:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1241);
      END_STATE();
    case 773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1242);
      END_STATE();
    case 774:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1608);
      END_STATE();
    case 775:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1766);
      END_STATE();
    case 776:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1253);
      END_STATE();
    case 777:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1307);
      END_STATE();
    case 778:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1354);
      END_STATE();
    case 779:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1251);
      END_STATE();
    case 780:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1686);
      END_STATE();
    case 781:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1727);
      END_STATE();
    case 782:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1083);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 783:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1142);
      END_STATE();
    case 784:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1503);
      END_STATE();
    case 785:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1356);
      END_STATE();
    case 786:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1303);
      END_STATE();
    case 787:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      END_STATE();
    case 788:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1260);
      END_STATE();
    case 789:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1391);
      END_STATE();
    case 790:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1358);
      END_STATE();
    case 791:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1304);
      END_STATE();
    case 792:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1691);
      END_STATE();
    case 793:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1146);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1626);
      END_STATE();
    case 795:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1363);
      END_STATE();
    case 796:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1365);
      END_STATE();
    case 797:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1649);
      END_STATE();
    case 798:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1367);
      END_STATE();
    case 799:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1695);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      END_STATE();
    case 801:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1647);
      END_STATE();
    case 802:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1731);
      END_STATE();
    case 803:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1085);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1170);
      END_STATE();
    case 804:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1732);
      END_STATE();
    case 805:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1087);
      END_STATE();
    case 806:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1733);
      END_STATE();
    case 807:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1734);
      END_STATE();
    case 808:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1735);
      END_STATE();
    case 809:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1736);
      END_STATE();
    case 810:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1737);
      END_STATE();
    case 811:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1738);
      END_STATE();
    case 812:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1739);
      END_STATE();
    case 813:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(978);
      END_STATE();
    case 814:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 815:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1279);
      END_STATE();
    case 816:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1282);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1039);
      END_STATE();
    case 817:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1280);
      END_STATE();
    case 818:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1283);
      END_STATE();
    case 819:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1773);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1023);
      END_STATE();
    case 820:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1774);
      END_STATE();
    case 821:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1775);
      END_STATE();
    case 822:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1776);
      END_STATE();
    case 823:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1777);
      END_STATE();
    case 824:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1778);
      END_STATE();
    case 825:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1214);
      END_STATE();
    case 826:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(913);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1804);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 827:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1019);
      END_STATE();
    case 828:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(744);
      END_STATE();
    case 829:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(754);
      END_STATE();
    case 830:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1259);
      END_STATE();
    case 831:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1447);
      END_STATE();
    case 832:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1173);
      END_STATE();
    case 833:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1852);
      END_STATE();
    case 834:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1227);
      END_STATE();
    case 835:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1247);
      END_STATE();
    case 836:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1092);
      END_STATE();
    case 837:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1761);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(916);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1781);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1609);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      END_STATE();
    case 838:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1095);
      END_STATE();
    case 839:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1225);
      END_STATE();
    case 840:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 841:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1579);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(836);
      END_STATE();
    case 842:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1103);
      END_STATE();
    case 843:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1226);
      END_STATE();
    case 844:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1098);
      END_STATE();
    case 845:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1580);
      END_STATE();
    case 846:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      END_STATE();
    case 847:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1740);
      END_STATE();
    case 848:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(857);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1751);
      END_STATE();
    case 849:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1660);
      END_STATE();
    case 850:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1412);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1422);
      END_STATE();
    case 851:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1144);
      END_STATE();
    case 852:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1417);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1390);
      END_STATE();
    case 853:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 854:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(781);
      END_STATE();
    case 855:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 856:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 857:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(969);
      END_STATE();
    case 858:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(769);
      END_STATE();
    case 859:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      END_STATE();
    case 860:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 861:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(943);
      END_STATE();
    case 862:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(944);
      END_STATE();
    case 863:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(784);
      END_STATE();
    case 864:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1100);
      END_STATE();
    case 865:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1730);
      END_STATE();
    case 866:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1554);
      END_STATE();
    case 867:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      END_STATE();
    case 868:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1035);
      END_STATE();
    case 869:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1388);
      END_STATE();
    case 870:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1070);
      END_STATE();
    case 871:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(868);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1754);
      END_STATE();
    case 872:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1484);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1762);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1629);
      END_STATE();
    case 873:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(815);
      END_STATE();
    case 874:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(802);
      END_STATE();
    case 875:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1486);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1474);
      END_STATE();
    case 876:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(804);
      END_STATE();
    case 877:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1487);
      END_STATE();
    case 878:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      END_STATE();
    case 879:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1488);
      END_STATE();
    case 880:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(807);
      END_STATE();
    case 881:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1489);
      END_STATE();
    case 882:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(808);
      END_STATE();
    case 883:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      END_STATE();
    case 884:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(810);
      END_STATE();
    case 885:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(811);
      END_STATE();
    case 886:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(812);
      END_STATE();
    case 887:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(888);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 888:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1211);
      END_STATE();
    case 889:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(782);
      END_STATE();
    case 890:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(813);
      END_STATE();
    case 891:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1962);
      END_STATE();
    case 892:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1963);
      END_STATE();
    case 893:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1976);
      END_STATE();
    case 894:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1986);
      END_STATE();
    case 895:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1995);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1926);
      END_STATE();
    case 897:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1297);
      END_STATE();
    case 898:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1941);
      END_STATE();
    case 899:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1961);
      END_STATE();
    case 900:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1971);
      END_STATE();
    case 901:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1883);
      END_STATE();
    case 902:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 903:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(816);
      END_STATE();
    case 904:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1157);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 905:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(780);
      END_STATE();
    case 906:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(924);
      END_STATE();
    case 907:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1558);
      END_STATE();
    case 908:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1831);
      END_STATE();
    case 909:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(869);
      END_STATE();
    case 910:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1155);
      END_STATE();
    case 911:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(934);
      END_STATE();
    case 912:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(936);
      END_STATE();
    case 913:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1158);
      END_STATE();
    case 914:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1438);
      END_STATE();
    case 915:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1369);
      END_STATE();
    case 916:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(977);
      END_STATE();
    case 917:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1059);
      END_STATE();
    case 918:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1508);
      END_STATE();
    case 919:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1000);
      END_STATE();
    case 920:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1002);
      END_STATE();
    case 921:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1271);
      END_STATE();
    case 922:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1510);
      END_STATE();
    case 923:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1036);
      END_STATE();
    case 924:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1570);
      END_STATE();
    case 925:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      END_STATE();
    case 926:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(818);
      END_STATE();
    case 927:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(820);
      END_STATE();
    case 928:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 929:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1210);
      END_STATE();
    case 930:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(904);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1605);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1062);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1803);
      END_STATE();
    case 932:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1813);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1956);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1950);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1899);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1965);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2005);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1954);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2019);
      END_STATE();
    case 943:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2024);
      END_STATE();
    case 944:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1901);
      END_STATE();
    case 945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1913);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1998);
      END_STATE();
    case 947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2027);
      END_STATE();
    case 948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1904);
      END_STATE();
    case 949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1933);
      END_STATE();
    case 950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1942);
      END_STATE();
    case 951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1927);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1213);
      END_STATE();
    case 953:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1528);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1607);
      END_STATE();
    case 954:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1823);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 956:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1782);
      END_STATE();
    case 957:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1814);
      END_STATE();
    case 958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1347);
      END_STATE();
    case 959:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 960:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1764);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1816);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1515);
      END_STATE();
    case 963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 964:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1538);
      END_STATE();
    case 965:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1338);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1532);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1512);
      END_STATE();
    case 970:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 971:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 972:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1232);
      END_STATE();
    case 973:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1291);
      END_STATE();
    case 974:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1819);
      END_STATE();
    case 975:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 977:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1339);
      END_STATE();
    case 978:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1562);
      END_STATE();
    case 981:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1234);
      END_STATE();
    case 982:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1643);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1613);
      END_STATE();
    case 983:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1818);
      END_STATE();
    case 984:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1810);
      END_STATE();
    case 985:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 986:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 987:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1639);
      END_STATE();
    case 988:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 989:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1559);
      END_STATE();
    case 990:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 991:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1445);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 993:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1616);
      END_STATE();
    case 994:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1420);
      END_STATE();
    case 995:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 996:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 997:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1520);
      END_STATE();
    case 998:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1329);
      END_STATE();
    case 999:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 1000:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1521);
      END_STATE();
    case 1001:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1531);
      END_STATE();
    case 1002:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 1003:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 1004:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 1005:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1591);
      END_STATE();
    case 1006:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 1007:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1524);
      END_STATE();
    case 1008:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1597);
      END_STATE();
    case 1009:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1726);
      END_STATE();
    case 1010:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1602);
      END_STATE();
    case 1011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1784);
      END_STATE();
    case 1012:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 1013:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1065);
      END_STATE();
    case 1014:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1815);
      END_STATE();
    case 1015:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1542);
      END_STATE();
    case 1016:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 1017:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1310);
      END_STATE();
    case 1018:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1817);
      END_STATE();
    case 1019:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1536);
      END_STATE();
    case 1020:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 1021:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1820);
      END_STATE();
    case 1022:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1619);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1550);
      END_STATE();
    case 1023:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1261);
      END_STATE();
    case 1024:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1549);
      END_STATE();
    case 1025:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1646);
      END_STATE();
    case 1026:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1821);
      END_STATE();
    case 1027:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1622);
      END_STATE();
    case 1028:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1553);
      END_STATE();
    case 1029:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 1030:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1370);
      END_STATE();
    case 1032:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1376);
      END_STATE();
    case 1033:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 1034:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 1035:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1514);
      END_STATE();
    case 1036:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1384);
      END_STATE();
    case 1037:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1450);
      END_STATE();
    case 1038:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 1039:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 1040:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1113);
      END_STATE();
    case 1041:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 1042:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 1043:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1398);
      END_STATE();
    case 1044:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 1045:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1400);
      END_STATE();
    case 1046:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 1047:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1402);
      END_STATE();
    case 1048:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 1049:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 1050:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 1051:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 1052:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 1053:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 1054:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1829);
      END_STATE();
    case 1055:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1712);
      END_STATE();
    case 1056:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(918);
      END_STATE();
    case 1057:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(747);
      END_STATE();
    case 1058:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(787);
      END_STATE();
    case 1059:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(758);
      END_STATE();
    case 1060:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(777);
      END_STATE();
    case 1061:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1499);
      END_STATE();
    case 1062:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(980);
      END_STATE();
    case 1063:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1434);
      END_STATE();
    case 1064:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1162);
      END_STATE();
    case 1065:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1174);
      END_STATE();
    case 1066:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(788);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1462);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(731);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1034);
      END_STATE();
    case 1067:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1470);
      END_STATE();
    case 1068:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1177);
      END_STATE();
    case 1069:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1178);
      END_STATE();
    case 1070:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1477);
      END_STATE();
    case 1071:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1480);
      END_STATE();
    case 1072:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2020);
      END_STATE();
    case 1073:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2015);
      END_STATE();
    case 1074:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1057);
      END_STATE();
    case 1075:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1328);
      END_STATE();
    case 1076:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1028);
      END_STATE();
    case 1077:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1595);
      END_STATE();
    case 1078:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1004);
      END_STATE();
    case 1079:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1378);
      END_STATE();
    case 1080:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(968);
      END_STATE();
    case 1081:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1466);
      END_STATE();
    case 1082:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1078);
      END_STATE();
    case 1083:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1029);
      END_STATE();
    case 1084:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1171);
      END_STATE();
    case 1085:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1030);
      END_STATE();
    case 1086:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(799);
      END_STATE();
    case 1087:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1031);
      END_STATE();
    case 1088:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1473);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      END_STATE();
    case 1089:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1476);
      END_STATE();
    case 1090:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1479);
      END_STATE();
    case 1091:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1482);
      END_STATE();
    case 1092:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1848);
      END_STATE();
    case 1093:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1925);
      END_STATE();
    case 1094:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1934);
      END_STATE();
    case 1095:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1290);
      END_STATE();
    case 1096:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(964);
      END_STATE();
    case 1097:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1293);
      END_STATE();
    case 1098:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(783);
      END_STATE();
    case 1099:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(766);
      END_STATE();
    case 1100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(988);
      END_STATE();
    case 1101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1255);
      END_STATE();
    case 1102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1296);
      END_STATE();
    case 1103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(756);
      END_STATE();
    case 1104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1298);
      END_STATE();
    case 1105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(990);
      END_STATE();
    case 1106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1300);
      END_STATE();
    case 1107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1218);
      END_STATE();
    case 1108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1302);
      END_STATE();
    case 1109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1439);
      END_STATE();
    case 1110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1453);
      END_STATE();
    case 1111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1456);
      END_STATE();
    case 1112:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1458);
      END_STATE();
    case 1113:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1472);
      END_STATE();
    case 1114:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1475);
      END_STATE();
    case 1115:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1478);
      END_STATE();
    case 1116:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1481);
      END_STATE();
    case 1117:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1461);
      END_STATE();
    case 1118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1463);
      END_STATE();
    case 1119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1465);
      END_STATE();
    case 1120:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1485);
      END_STATE();
    case 1121:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1043);
      END_STATE();
    case 1122:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1044);
      END_STATE();
    case 1123:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1045);
      END_STATE();
    case 1124:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1046);
      END_STATE();
    case 1125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1047);
      END_STATE();
    case 1126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1048);
      END_STATE();
    case 1127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1049);
      END_STATE();
    case 1128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1050);
      END_STATE();
    case 1129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 1130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 1131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1054);
      END_STATE();
    case 1132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1703);
      END_STATE();
    case 1133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1079);
      END_STATE();
    case 1134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1064);
      END_STATE();
    case 1135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1075);
      END_STATE();
    case 1136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 1137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1493);
      END_STATE();
    case 1138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1659);
      END_STATE();
    case 1139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1084);
      END_STATE();
    case 1140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1471);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1159);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1325);
      END_STATE();
    case 1143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1675);
      END_STATE();
    case 1144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1254);
      END_STATE();
    case 1146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1368);
      END_STATE();
    case 1147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1662);
      END_STATE();
    case 1148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 1149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1702);
      END_STATE();
    case 1150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1682);
      END_STATE();
    case 1151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(987);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(803);
      END_STATE();
    case 1152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      END_STATE();
    case 1153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(853);
      END_STATE();
    case 1154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1832);
      END_STATE();
    case 1155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1350);
      END_STATE();
    case 1156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1268);
      END_STATE();
    case 1157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1353);
      END_STATE();
    case 1158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1381);
      END_STATE();
    case 1159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1301);
      END_STATE();
    case 1160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1374);
      END_STATE();
    case 1161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 1162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 1163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1786);
      END_STATE();
    case 1164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1352);
      END_STATE();
    case 1165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1451);
      END_STATE();
    case 1166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 1167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1373);
      END_STATE();
    case 1168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1787);
      END_STATE();
    case 1169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1423);
      END_STATE();
    case 1170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1263);
      END_STATE();
    case 1171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1395);
      END_STATE();
    case 1172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1788);
      END_STATE();
    case 1173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1360);
      END_STATE();
    case 1174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1264);
      END_STATE();
    case 1175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1362);
      END_STATE();
    case 1176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1425);
      END_STATE();
    case 1177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1265);
      END_STATE();
    case 1178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1266);
      END_STATE();
    case 1179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1427);
      END_STATE();
    case 1180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1429);
      END_STATE();
    case 1181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 1182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1630);
      END_STATE();
    case 1183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1431);
      END_STATE();
    case 1184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1432);
      END_STATE();
    case 1185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1433);
      END_STATE();
    case 1186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1448);
      END_STATE();
    case 1187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1435);
      END_STATE();
    case 1188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1436);
      END_STATE();
    case 1189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1308);
      END_STATE();
    case 1190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1708);
      END_STATE();
    case 1191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1723);
      END_STATE();
    case 1192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1468);
      END_STATE();
    case 1193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1313);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1772);
      END_STATE();
    case 1194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(920);
      END_STATE();
    case 1195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1710);
      END_STATE();
    case 1196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1711);
      END_STATE();
    case 1197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1714);
      END_STATE();
    case 1198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 1199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 1200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      END_STATE();
    case 1201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      END_STATE();
    case 1202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 1203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 1204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      END_STATE();
    case 1205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 1206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 1207:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2011);
      END_STATE();
    case 1208:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2014);
      END_STATE();
    case 1209:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1868);
      END_STATE();
    case 1210:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(932);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1414);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1758);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1446);
      END_STATE();
    case 1211:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(954);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 1212:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(735);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(746);
      END_STATE();
    case 1213:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1885);
      END_STATE();
    case 1214:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(961);
      END_STATE();
    case 1215:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(996);
      END_STATE();
    case 1216:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(963);
      END_STATE();
    case 1217:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(970);
      END_STATE();
    case 1218:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(974);
      END_STATE();
    case 1219:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(983);
      END_STATE();
    case 1220:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(984);
      END_STATE();
    case 1221:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1014);
      END_STATE();
    case 1222:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1021);
      END_STATE();
    case 1223:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1377);
      END_STATE();
    case 1224:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1026);
      END_STATE();
    case 1225:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1164);
      END_STATE();
    case 1226:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1275);
      END_STATE();
    case 1227:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1110);
      END_STATE();
    case 1228:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1397);
      END_STATE();
    case 1229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 1230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1849);
      END_STATE();
    case 1231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 1232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2021);
      END_STATE();
    case 1233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1292);
      END_STATE();
    case 1234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1964);
      END_STATE();
    case 1235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(908);
      END_STATE();
    case 1236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      END_STATE();
    case 1237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2010);
      END_STATE();
    case 1238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2004);
      END_STATE();
    case 1239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1903);
      END_STATE();
    case 1240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1851);
      END_STATE();
    case 1241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1375);
      END_STATE();
    case 1242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1850);
      END_STATE();
    case 1243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1611);
      END_STATE();
    case 1244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1228);
      END_STATE();
    case 1245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1257);
      END_STATE();
    case 1246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1081);
      END_STATE();
    case 1247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1759);
      END_STATE();
    case 1248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 1249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1411);
      END_STATE();
    case 1250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1189);
      END_STATE();
    case 1251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1163);
      END_STATE();
    case 1252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1011);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(976);
      END_STATE();
    case 1253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1277);
      END_STATE();
    case 1254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1809);
      END_STATE();
    case 1255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1449);
      END_STATE();
    case 1256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1811);
      END_STATE();
    case 1257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1032);
      END_STATE();
    case 1258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 1259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(933);
      END_STATE();
    case 1260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1267);
      END_STATE();
    case 1261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(959);
      END_STATE();
    case 1262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1601);
      END_STATE();
    case 1263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(941);
      END_STATE();
    case 1264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(945);
      END_STATE();
    case 1265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(947);
      END_STATE();
    case 1266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(950);
      END_STATE();
    case 1267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(829);
      END_STATE();
    case 1268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1770);
      END_STATE();
    case 1269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1148);
      END_STATE();
    case 1270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1150);
      END_STATE();
    case 1271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1160);
      END_STATE();
    case 1272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1168);
      END_STATE();
    case 1273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1452);
      END_STATE();
    case 1274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1455);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 1275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1457);
      END_STATE();
    case 1276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1459);
      END_STATE();
    case 1277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1071);
      END_STATE();
    case 1278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1115);
      END_STATE();
    case 1279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1118);
      END_STATE();
    case 1280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1119);
      END_STATE();
    case 1281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1089);
      END_STATE();
    case 1282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1090);
      END_STATE();
    case 1283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1091);
      END_STATE();
    case 1284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(879);
      END_STATE();
    case 1285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1496);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1351);
      END_STATE();
    case 1286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(827);
      END_STATE();
    case 1287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1492);
      END_STATE();
    case 1288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1136);
      END_STATE();
    case 1289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1295);
      END_STATE();
    case 1290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1442);
      END_STATE();
    case 1291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1500);
      END_STATE();
    case 1292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(797);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(762);
      END_STATE();
    case 1293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1585);
      END_STATE();
    case 1294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(935);
      END_STATE();
    case 1295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(778);
      END_STATE();
    case 1296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1592);
      END_STATE();
    case 1297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(774);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1361);
      END_STATE();
    case 1298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1596);
      END_STATE();
    case 1299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(734);
      END_STATE();
    case 1300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1600);
      END_STATE();
    case 1301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(991);
      END_STATE();
    case 1302:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1603);
      END_STATE();
    case 1303:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(948);
      END_STATE();
    case 1304:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1010);
      END_STATE();
    case 1305:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1138);
      END_STATE();
    case 1306:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1501);
      END_STATE();
    case 1307:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1145);
      END_STATE();
    case 1308:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1147);
      END_STATE();
    case 1309:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1191);
      END_STATE();
    case 1310:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1454);
      END_STATE();
    case 1311:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(793);
      END_STATE();
    case 1312:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(785);
      END_STATE();
    case 1313:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1037);
      END_STATE();
    case 1314:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1273);
      END_STATE();
    case 1315:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(790);
      END_STATE();
    case 1316:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(795);
      END_STATE();
    case 1317:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(796);
      END_STATE();
    case 1318:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(798);
      END_STATE();
    case 1319:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1312);
      END_STATE();
    case 1320:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1315);
      END_STATE();
    case 1321:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1316);
      END_STATE();
    case 1322:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1317);
      END_STATE();
    case 1323:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1318);
      END_STATE();
    case 1324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1918);
      END_STATE();
    case 1325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2026);
      END_STATE();
    case 1326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1955);
      END_STATE();
    case 1327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2030);
      END_STATE();
    case 1328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1928);
      END_STATE();
    case 1329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1972);
      END_STATE();
    case 1330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1943);
      END_STATE();
    case 1331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1982);
      END_STATE();
    case 1332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1970);
      END_STATE();
    case 1333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1937);
      END_STATE();
    case 1334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1947);
      END_STATE();
    case 1335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1958);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1959);
      END_STATE();
    case 1337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 1338:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1779);
      END_STATE();
    case 1339:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1780);
      END_STATE();
    case 1340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1413);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1133);
      END_STATE();
    case 1341:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 1342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 1343:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 1344:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1443);
      END_STATE();
    case 1345:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1355);
      END_STATE();
    case 1346:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1153);
      END_STATE();
    case 1347:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1707);
      END_STATE();
    case 1348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1769);
      END_STATE();
    case 1349:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1208);
      END_STATE();
    case 1350:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1077);
      END_STATE();
    case 1351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1535);
      END_STATE();
    case 1352:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1073);
      END_STATE();
    case 1353:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1348);
      END_STATE();
    case 1354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 1355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      END_STATE();
    case 1356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 1357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1676);
      END_STATE();
    case 1358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 1359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1256);
      END_STATE();
    case 1360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 1361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1269);
      END_STATE();
    case 1362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1704);
      END_STATE();
    case 1363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      END_STATE();
    case 1364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1663);
      END_STATE();
    case 1365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      END_STATE();
    case 1366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1664);
      END_STATE();
    case 1367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 1368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1589);
      END_STATE();
    case 1369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1590);
      END_STATE();
    case 1370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1665);
      END_STATE();
    case 1371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1709);
      END_STATE();
    case 1372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1599);
      END_STATE();
    case 1373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 1374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      END_STATE();
    case 1375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1009);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1642);
      END_STATE();
    case 1376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1076);
      END_STATE();
    case 1377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1440);
      END_STATE();
    case 1378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 1379:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 1380:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 1381:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1725);
      END_STATE();
    case 1382:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1656);
      END_STATE();
    case 1383:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1728);
      END_STATE();
    case 1384:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1685);
      END_STATE();
    case 1385:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1223);
      END_STATE();
    case 1386:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1063);
      END_STATE();
    case 1387:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1715);
      END_STATE();
    case 1388:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 1389:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1181);
      END_STATE();
    case 1390:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1721);
      END_STATE();
    case 1391:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1467);
      END_STATE();
    case 1392:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1111);
      END_STATE();
    case 1393:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1117);
      END_STATE();
    case 1394:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1120);
      END_STATE();
    case 1395:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 1396:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1490);
      END_STATE();
    case 1397:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1491);
      END_STATE();
    case 1398:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1742);
      END_STATE();
    case 1399:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1743);
      END_STATE();
    case 1400:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1744);
      END_STATE();
    case 1401:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1745);
      END_STATE();
    case 1402:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1746);
      END_STATE();
    case 1403:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1747);
      END_STATE();
    case 1404:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1748);
      END_STATE();
    case 1405:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1749);
      END_STATE();
    case 1406:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1606);
      END_STATE();
    case 1407:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1109);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1286);
      END_STATE();
    case 1408:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 1409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1790);
      END_STATE();
    case 1410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      END_STATE();
    case 1411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 1412:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 1413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1346);
      END_STATE();
    case 1414:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1684);
      END_STATE();
    case 1415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1061);
      END_STATE();
    case 1416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1771);
      END_STATE();
    case 1418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1343);
      END_STATE();
    case 1419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1233);
      END_STATE();
    case 1420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1511);
      END_STATE();
    case 1421:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1537);
      END_STATE();
    case 1422:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1527);
      END_STATE();
    case 1423:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 1424:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1359);
      END_STATE();
    case 1425:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1327);
      END_STATE();
    case 1426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1382);
      END_STATE();
    case 1427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1330);
      END_STATE();
    case 1428:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(805);
      END_STATE();
    case 1429:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1331);
      END_STATE();
    case 1430:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1551);
      END_STATE();
    case 1431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1332);
      END_STATE();
    case 1432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 1434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1576);
      END_STATE();
    case 1435:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1335);
      END_STATE();
    case 1436:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 1437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1534);
      END_STATE();
    case 1438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1689);
      END_STATE();
    case 1439:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1614);
      END_STATE();
    case 1440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1791);
      END_STATE();
    case 1441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1783);
      END_STATE();
    case 1442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 1443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1545);
      END_STATE();
    case 1444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1311);
      END_STATE();
    case 1445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1767);
      END_STATE();
    case 1446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1216);
      END_STATE();
    case 1447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1632);
      END_STATE();
    case 1448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 1450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1768);
      END_STATE();
    case 1451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1357);
      END_STATE();
    case 1452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 1453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1637);
      END_STATE();
    case 1454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1692);
      END_STATE();
    case 1455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(856);
      END_STATE();
    case 1456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1623);
      END_STATE();
    case 1457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 1458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1624);
      END_STATE();
    case 1459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 1460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 1461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1627);
      END_STATE();
    case 1462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1631);
      END_STATE();
    case 1463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1633);
      END_STATE();
    case 1464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1634);
      END_STATE();
    case 1465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1635);
      END_STATE();
    case 1466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1563);
      END_STATE();
    case 1467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1389);
      END_STATE();
    case 1468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1386);
      END_STATE();
    case 1469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1306);
      END_STATE();
    case 1470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1564);
      END_STATE();
    case 1471:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 1472:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1648);
      END_STATE();
    case 1473:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1567);
      END_STATE();
    case 1474:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1569);
      END_STATE();
    case 1475:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1650);
      END_STATE();
    case 1476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1571);
      END_STATE();
    case 1477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1572);
      END_STATE();
    case 1478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1651);
      END_STATE();
    case 1479:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1573);
      END_STATE();
    case 1480:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1574);
      END_STATE();
    case 1481:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1652);
      END_STATE();
    case 1482:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1575);
      END_STATE();
    case 1483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1789);
      END_STATE();
    case 1484:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1319);
      END_STATE();
    case 1485:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1655);
      END_STATE();
    case 1486:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1320);
      END_STATE();
    case 1487:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1321);
      END_STATE();
    case 1488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1322);
      END_STATE();
    case 1489:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1323);
      END_STATE();
    case 1490:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1800);
      END_STATE();
    case 1491:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1801);
      END_STATE();
    case 1492:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1977);
      END_STATE();
    case 1493:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1914);
      END_STATE();
    case 1494:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(905);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(952);
      END_STATE();
    case 1495:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1096);
      END_STATE();
    case 1496:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1565);
      END_STATE();
    case 1497:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1129);
      END_STATE();
    case 1498:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(966);
      END_STATE();
    case 1499:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(801);
      END_STATE();
    case 1500:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1688);
      END_STATE();
    case 1501:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1690);
      END_STATE();
    case 1502:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 1503:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1042);
      END_STATE();
    case 1504:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1005);
      END_STATE();
    case 1505:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1008);
      END_STATE();
    case 1506:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1215);
      END_STATE();
    case 1507:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1566);
      END_STATE();
    case 1508:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(794);
      END_STATE();
    case 1509:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1541);
      END_STATE();
    case 1510:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1548);
      END_STATE();
    case 1511:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(998);
      END_STATE();
    case 1512:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1693);
      END_STATE();
    case 1513:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1426);
      END_STATE();
    case 1514:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1697);
      END_STATE();
    case 1515:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(800);
      END_STATE();
    case 1516:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1577);
      END_STATE();
    case 1517:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1416);
      END_STATE();
    case 1518:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1212);
      END_STATE();
    case 1519:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1929);
      END_STATE();
    case 1520:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1921);
      END_STATE();
    case 1521:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1973);
      END_STATE();
    case 1522:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2000);
      END_STATE();
    case 1523:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1884);
      END_STATE();
    case 1524:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1886);
      END_STATE();
    case 1525:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 1526:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1672);
      END_STATE();
    case 1527:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1793);
      END_STATE();
    case 1528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1131);
      END_STATE();
    case 1529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1658);
      END_STATE();
    case 1530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 1531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1785);
      END_STATE();
    case 1532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1507);
      END_STATE();
    case 1533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(889);
      END_STATE();
    case 1534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1209);
      END_STATE();
    case 1535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1419);
      END_STATE();
    case 1536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1415);
      END_STATE();
    case 1537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 1538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1582);
      END_STATE();
    case 1539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 1540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      END_STATE();
    case 1541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1441);
      END_STATE();
    case 1542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 1543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 1544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1620);
      END_STATE();
    case 1545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 1546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 1547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 1548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1469);
      END_STATE();
    case 1549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 1550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 1551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 1552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1053);
      END_STATE();
    case 1553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(993);
      END_STATE();
    case 1554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 1555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 1556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 1557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 1558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1628);
      END_STATE();
    case 1559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 1560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1139);
      END_STATE();
    case 1561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1143);
      END_STATE();
    case 1562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1552);
      END_STATE();
    case 1563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1149);
      END_STATE();
    case 1564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1794);
      END_STATE();
    case 1565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1025);
      END_STATE();
    case 1566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1190);
      END_STATE();
    case 1568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1309);
      END_STATE();
    case 1569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1796);
      END_STATE();
    case 1570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1027);
      END_STATE();
    case 1571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1195);
      END_STATE();
    case 1572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1196);
      END_STATE();
    case 1574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1799);
      END_STATE();
    case 1575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1197);
      END_STATE();
    case 1576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1276);
      END_STATE();
    case 1577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1483);
      END_STATE();
    case 1578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 1579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1967);
      END_STATE();
    case 1580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 1581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1957);
      END_STATE();
    case 1582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1915);
      END_STATE();
    case 1583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1900);
      END_STATE();
    case 1584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1949);
      END_STATE();
    case 1585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1960);
      END_STATE();
    case 1586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2025);
      END_STATE();
    case 1587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1979);
      END_STATE();
    case 1588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1999);
      END_STATE();
    case 1589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1902);
      END_STATE();
    case 1590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2028);
      END_STATE();
    case 1591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1946);
      END_STATE();
    case 1592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1948);
      END_STATE();
    case 1593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 1594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1905);
      END_STATE();
    case 1595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1917);
      END_STATE();
    case 1596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1910);
      END_STATE();
    case 1597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1981);
      END_STATE();
    case 1598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1969);
      END_STATE();
    case 1599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1975);
      END_STATE();
    case 1600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1980);
      END_STATE();
    case 1601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1944);
      END_STATE();
    case 1602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1906);
      END_STATE();
    case 1603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1945);
      END_STATE();
    case 1604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1792);
      END_STATE();
    case 1605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1249);
      END_STATE();
    case 1606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1763);
      END_STATE();
    case 1608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1207);
      END_STATE();
    case 1609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1165);
      END_STATE();
    case 1610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1060);
      END_STATE();
    case 1611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      END_STATE();
    case 1612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1604);
      END_STATE();
    case 1613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1107);
      END_STATE();
    case 1614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1699);
      END_STATE();
    case 1615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1094);
      END_STATE();
    case 1616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1513);
      END_STATE();
    case 1617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1610);
      END_STATE();
    case 1618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      END_STATE();
    case 1619:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1705);
      END_STATE();
    case 1620:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1182);
      END_STATE();
    case 1621:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1154);
      END_STATE();
    case 1622:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1583);
      END_STATE();
    case 1623:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1681);
      END_STATE();
    case 1624:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1713);
      END_STATE();
    case 1625:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(979);
      END_STATE();
    case 1626:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1587);
      END_STATE();
    case 1627:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1687);
      END_STATE();
    case 1628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(761);
      END_STATE();
    case 1629:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(967);
      END_STATE();
    case 1630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1667);
      END_STATE();
    case 1631:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1706);
      END_STATE();
    case 1632:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(937);
      END_STATE();
    case 1633:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1669);
      END_STATE();
    case 1634:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1670);
      END_STATE();
    case 1635:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1671);
      END_STATE();
    case 1636:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 1637:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1679);
      END_STATE();
    case 1638:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1680);
      END_STATE();
    case 1639:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1424);
      END_STATE();
    case 1640:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1696);
      END_STATE();
    case 1641:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1006);
      END_STATE();
    case 1642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1007);
      END_STATE();
    case 1643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      END_STATE();
    case 1644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1795);
      END_STATE();
    case 1645:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1169);
      END_STATE();
    case 1646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1645);
      END_STATE();
    case 1647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1644);
      END_STATE();
    case 1648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1716);
      END_STATE();
    case 1649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1717);
      END_STATE();
    case 1650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1719);
      END_STATE();
    case 1651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1720);
      END_STATE();
    case 1652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1722);
      END_STATE();
    case 1653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1068);
      END_STATE();
    case 1654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1069);
      END_STATE();
    case 1655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1741);
      END_STATE();
    case 1656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 1657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1846);
      END_STATE();
    case 1658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1974);
      END_STATE();
    case 1659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1274);
      END_STATE();
    case 1660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 1661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1151);
      END_STATE();
    case 1662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1985);
      END_STATE();
    case 1663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1938);
      END_STATE();
    case 1664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1952);
      END_STATE();
    case 1665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1891);
      END_STATE();
    case 1666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1920);
      END_STATE();
    case 1667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1924);
      END_STATE();
    case 1668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1940);
      END_STATE();
    case 1669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1968);
      END_STATE();
    case 1670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1845);
      END_STATE();
    case 1671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1882);
      END_STATE();
    case 1672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1134);
      END_STATE();
    case 1673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1101);
      END_STATE();
    case 1674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(838);
      END_STATE();
    case 1675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1824);
      END_STATE();
    case 1676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1822);
      END_STATE();
    case 1677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 1678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1808);
      END_STATE();
    case 1679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1137);
      END_STATE();
    case 1680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1428);
      END_STATE();
    case 1681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1618);
      END_STATE();
    case 1682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1812);
      END_STATE();
    case 1683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1678);
      END_STATE();
    case 1684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1038);
      END_STATE();
    case 1685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1152);
      END_STATE();
    case 1686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1040);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1653);
      END_STATE();
    case 1688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1593);
      END_STATE();
    case 1689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1594);
      END_STATE();
    case 1690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1598);
      END_STATE();
    case 1691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1013);
      END_STATE();
    case 1692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(994);
      END_STATE();
    case 1693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      END_STATE();
    case 1694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(986);
      END_STATE();
    case 1696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(999);
      END_STATE();
    case 1697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1012);
      END_STATE();
    case 1698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 1699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      END_STATE();
    case 1700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 1701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1765);
      END_STATE();
    case 1702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1097);
      END_STATE();
    case 1703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1418);
      END_STATE();
    case 1704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1099);
      END_STATE();
    case 1705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1683);
      END_STATE();
    case 1706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1379);
      END_STATE();
    case 1707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1140);
      END_STATE();
    case 1708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1102);
      END_STATE();
    case 1709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1299);
      END_STATE();
    case 1710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 1711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1106);
      END_STATE();
    case 1712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      END_STATE();
    case 1713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1221);
      END_STATE();
    case 1714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 1715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      END_STATE();
    case 1716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1222);
      END_STATE();
    case 1717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(997);
      END_STATE();
    case 1718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1694);
      END_STATE();
    case 1719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1219);
      END_STATE();
    case 1720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1220);
      END_STATE();
    case 1721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1001);
      END_STATE();
    case 1722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1224);
      END_STATE();
    case 1723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1698);
      END_STATE();
    case 1724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1825);
      END_STATE();
    case 1725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 1726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1798);
      END_STATE();
    case 1727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 1728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1198);
      END_STATE();
    case 1729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1826);
      END_STATE();
    case 1730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1172);
      END_STATE();
    case 1731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1192);
      END_STATE();
    case 1732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1179);
      END_STATE();
    case 1733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 1734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1183);
      END_STATE();
    case 1735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1184);
      END_STATE();
    case 1736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 1737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 1738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 1740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 1741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1654);
      END_STATE();
    case 1742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1200);
      END_STATE();
    case 1744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1201);
      END_STATE();
    case 1745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 1746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 1747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1205);
      END_STATE();
    case 1749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1206);
      END_STATE();
    case 1750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 1751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1122);
      END_STATE();
    case 1752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1123);
      END_STATE();
    case 1753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1124);
      END_STATE();
    case 1754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1125);
      END_STATE();
    case 1755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1126);
      END_STATE();
    case 1756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1127);
      END_STATE();
    case 1757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1758:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1022);
      END_STATE();
    case 1759:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(911);
      END_STATE();
    case 1760:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1673);
      END_STATE();
    case 1761:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1561);
      END_STATE();
    case 1762:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1287);
      END_STATE();
    case 1763:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 1764:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1385);
      END_STATE();
    case 1765:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1556);
      END_STATE();
    case 1766:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1700);
      END_STATE();
    case 1767:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1666);
      END_STATE();
    case 1768:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1668);
      END_STATE();
    case 1769:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1258);
      END_STATE();
    case 1770:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1555);
      END_STATE();
    case 1771:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1371);
      END_STATE();
    case 1772:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1640);
      END_STATE();
    case 1773:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1750);
      END_STATE();
    case 1774:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1752);
      END_STATE();
    case 1775:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1753);
      END_STATE();
    case 1776:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1755);
      END_STATE();
    case 1777:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1756);
      END_STATE();
    case 1778:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1757);
      END_STATE();
    case 1779:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2008);
      END_STATE();
    case 1780:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2001);
      END_STATE();
    case 1781:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1015);
      END_STATE();
    case 1782:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1161);
      END_STATE();
    case 1783:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1166);
      END_STATE();
    case 1784:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(981);
      END_STATE();
    case 1785:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(764);
      END_STATE();
    case 1786:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(938);
      END_STATE();
    case 1787:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(942);
      END_STATE();
    case 1788:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1051);
      END_STATE();
    case 1789:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1194);
      END_STATE();
    case 1790:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1392);
      END_STATE();
    case 1791:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1326);
      END_STATE();
    case 1792:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1421);
      END_STATE();
    case 1793:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(757);
      END_STATE();
    case 1794:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(760);
      END_STATE();
    case 1795:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1430);
      END_STATE();
    case 1796:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(763);
      END_STATE();
    case 1797:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(765);
      END_STATE();
    case 1798:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1437);
      END_STATE();
    case 1799:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(768);
      END_STATE();
    case 1800:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1393);
      END_STATE();
    case 1801:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1394);
      END_STATE();
    case 1802:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2003);
      END_STATE();
    case 1803:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1807);
      END_STATE();
    case 1804:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(739);
      END_STATE();
    case 1805:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(914);
      END_STATE();
    case 1806:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(992);
      END_STATE();
    case 1807:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(872);
      END_STATE();
    case 1808:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1996);
      END_STATE();
    case 1809:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1894);
      END_STATE();
    case 1810:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2029);
      END_STATE();
    case 1811:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1951);
      END_STATE();
    case 1812:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2018);
      END_STATE();
    case 1813:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1250);
      END_STATE();
    case 1814:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(844);
      END_STATE();
    case 1815:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(864);
      END_STATE();
    case 1816:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(727);
      END_STATE();
    case 1817:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(751);
      END_STATE();
    case 1818:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(915);
      END_STATE();
    case 1819:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1636);
      END_STATE();
    case 1820:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1586);
      END_STATE();
    case 1821:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1588);
      END_STATE();
    case 1822:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1502);
      END_STATE();
    case 1823:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1638);
      END_STATE();
    case 1824:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1217);
      END_STATE();
    case 1825:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1504);
      END_STATE();
    case 1826:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1505);
      END_STATE();
    case 1827:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1724);
      END_STATE();
    case 1828:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1729);
      END_STATE();
    case 1829:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1114);
      END_STATE();
    case 1830:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1516);
      END_STATE();
    case 1831:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(940);
      END_STATE();
    case 1832:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(946);
      END_STATE();
    case 1833:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2031);
      END_STATE();
    case 1834:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2013);
      END_STATE();
    case 1835:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2012);
      END_STATE();
    case 1836:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2031);
      END_STATE();
    case 1837:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2034);
      END_STATE();
    case 1838:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1834);
      END_STATE();
    case 1839:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1835);
      END_STATE();
    case 1840:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2052);
      END_STATE();
    case 1841:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1842:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1881);
      END_STATE();
    case 1843:
      if (eof) ADVANCE(1844);
      if (lookahead == '\n') ADVANCE(2069);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1862);
      if (lookahead == '#') ADVANCE(2065);
      if (lookahead == '+') ADVANCE(1911);
      if (lookahead == ',') ADVANCE(1880);
      if (lookahead == '-') ADVANCE(1912);
      if (lookahead == '0') ADVANCE(1838);
      if (lookahead == '3') ADVANCE(373);
      if (lookahead == ':') ADVANCE(1909);
      if (lookahead == '=') ADVANCE(2009);
      if (lookahead == '@') ADVANCE(1978);
      if (lookahead == 'A') ADVANCE(887);
      if (lookahead == 'C') ADVANCE(722);
      if (lookahead == 'D') ADVANCE(245);
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'H') ADVANCE(1406);
      if (lookahead == 'I') ADVANCE(262);
      if (lookahead == 'M') ADVANCE(723);
      if (lookahead == 'N') ADVANCE(1407);
      if (lookahead == 'Q') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(929);
      if (lookahead == 'S') ADVANCE(930);
      if (lookahead == 'U') ADVANCE(1494);
      if (lookahead == 'V') ADVANCE(246);
      if (lookahead == '^') ADVANCE(1916);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(1130);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 'u') ADVANCE(522);
      if (lookahead == 'v') ADVANCE(953);
      if (lookahead == 'w') ADVANCE(397);
      if (lookahead == '}') ADVANCE(2054);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(724);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1243);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(826);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1408);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(738);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(726);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1839);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(749);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1018);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym_match_declaration_token1);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__all_token1);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym__match_canonical_token1);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__match_final_token1);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__match_exec_token1);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'S') ADVANCE(254);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(2056);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2053);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2047);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2058);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2045);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2053);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2047);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2045);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token1);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == ':') ADVANCE(1870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'h') ADVANCE(1871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 's') ADVANCE(1873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'y') ADVANCE(1896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1881);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__match_originalhost_token1);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym__match_tagged_token1);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1396);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__match_localuser_token1);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1881);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1898);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1879);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym__dynamic_forward_token1);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1930);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1193);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym__include_token1);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token2);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '{') ADVANCE(2053);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2048);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2045);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(2046);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (sym_token_character_set_1(lookahead)) ADVANCE(2049);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(anon_sym_subsystem);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym__set_env_token1);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2012);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym__syslog_facility_token1);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(956);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym__use_keychain_token1);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2032);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym_facility);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(502);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(225);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(405);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(2053);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2052);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2058);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2065);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2066);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(2066);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2067);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2068);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1843},
  [2] = {.lex_state = 1843},
  [3] = {.lex_state = 1843},
  [4] = {.lex_state = 1843},
  [5] = {.lex_state = 1843},
  [6] = {.lex_state = 1843},
  [7] = {.lex_state = 1843},
  [8] = {.lex_state = 1843},
  [9] = {.lex_state = 1843},
  [10] = {.lex_state = 1843},
  [11] = {.lex_state = 1843},
  [12] = {.lex_state = 1843},
  [13] = {.lex_state = 1843},
  [14] = {.lex_state = 1843},
  [15] = {.lex_state = 1843},
  [16] = {.lex_state = 1843},
  [17] = {.lex_state = 1843},
  [18] = {.lex_state = 1843},
  [19] = {.lex_state = 1843},
  [20] = {.lex_state = 1843},
  [21] = {.lex_state = 1843},
  [22] = {.lex_state = 1843},
  [23] = {.lex_state = 1843},
  [24] = {.lex_state = 1843},
  [25] = {.lex_state = 1843},
  [26] = {.lex_state = 1843},
  [27] = {.lex_state = 1843},
  [28] = {.lex_state = 1843},
  [29] = {.lex_state = 1843},
  [30] = {.lex_state = 1843},
  [31] = {.lex_state = 1843},
  [32] = {.lex_state = 1843},
  [33] = {.lex_state = 1843},
  [34] = {.lex_state = 1843},
  [35] = {.lex_state = 1843},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 38},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 25},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 36},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 47},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 47},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 41},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 43},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 31},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 37},
  [148] = {.lex_state = 37},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 37},
  [152] = {.lex_state = 1843},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 30},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 48},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 47},
  [162] = {.lex_state = 48},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 48},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 33},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 1843},
  [172] = {.lex_state = 1843},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 1843},
  [175] = {.lex_state = 1843},
  [176] = {.lex_state = 1843},
  [177] = {.lex_state = 1843},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 1843},
  [180] = {.lex_state = 1843},
  [181] = {.lex_state = 1843},
  [182] = {.lex_state = 1843},
  [183] = {.lex_state = 1843},
  [184] = {.lex_state = 1843},
  [185] = {.lex_state = 1843},
  [186] = {.lex_state = 26},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 1843},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 1843},
  [191] = {.lex_state = 1843},
  [192] = {.lex_state = 1843},
  [193] = {.lex_state = 1843},
  [194] = {.lex_state = 1843},
  [195] = {.lex_state = 39},
  [196] = {.lex_state = 37},
  [197] = {.lex_state = 1843},
  [198] = {.lex_state = 1843},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 37},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 1843},
  [204] = {.lex_state = 1843},
  [205] = {.lex_state = 30},
  [206] = {.lex_state = 1843},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 1843},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 1843},
  [211] = {.lex_state = 1843},
  [212] = {.lex_state = 1843},
  [213] = {.lex_state = 1843},
  [214] = {.lex_state = 1843},
  [215] = {.lex_state = 1843},
  [216] = {.lex_state = 1843},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 16},
  [219] = {.lex_state = 1843},
  [220] = {.lex_state = 39},
  [221] = {.lex_state = 1843},
  [222] = {.lex_state = 1843},
  [223] = {.lex_state = 1843},
  [224] = {.lex_state = 1843},
  [225] = {.lex_state = 32},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 1843},
  [228] = {.lex_state = 1843},
  [229] = {.lex_state = 1843},
  [230] = {.lex_state = 1843},
  [231] = {.lex_state = 37},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 1843},
  [237] = {.lex_state = 1843},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 1843},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 1843},
  [242] = {.lex_state = 1843},
  [243] = {.lex_state = 1843},
  [244] = {.lex_state = 37},
  [245] = {.lex_state = 1843},
  [246] = {.lex_state = 1843},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 1843},
  [250] = {.lex_state = 1843},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 1843},
  [253] = {.lex_state = 1843},
  [254] = {.lex_state = 1843},
  [255] = {.lex_state = 1843},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 37},
  [258] = {.lex_state = 1843},
  [259] = {.lex_state = 1843},
  [260] = {.lex_state = 1843},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 39},
  [263] = {.lex_state = 48},
  [264] = {.lex_state = 26},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 1843},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 524},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 1843},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 229},
  [301] = {.lex_state = 229},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 1843},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 1843},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 1843},
  [319] = {.lex_state = 1843},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 1843},
  [323] = {.lex_state = 2},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 18},
  [327] = {.lex_state = 1843},
  [328] = {.lex_state = 1843},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 1843},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 1843},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 1843},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 16},
  [343] = {.lex_state = 1843},
  [344] = {.lex_state = 1843},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 2},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 1843},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 30},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 2},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 2},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 1843},
  [366] = {.lex_state = 2},
  [367] = {.lex_state = 2},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 1843},
  [370] = {.lex_state = 1843},
  [371] = {.lex_state = 1843},
  [372] = {.lex_state = 1843},
  [373] = {.lex_state = 1843},
  [374] = {.lex_state = 1843},
  [375] = {.lex_state = 1843},
  [376] = {.lex_state = 2},
  [377] = {.lex_state = 1843},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 1843},
  [380] = {.lex_state = 1843},
  [381] = {.lex_state = 1843},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 1843},
  [385] = {.lex_state = 1843},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 1843},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 1843},
  [390] = {.lex_state = 1843},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 1843},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 2},
  [395] = {.lex_state = 1843},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 1843},
  [400] = {.lex_state = 1843},
  [401] = {.lex_state = 1843},
  [402] = {.lex_state = 1843},
  [403] = {.lex_state = 1843},
  [404] = {.lex_state = 2},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 16},
  [407] = {.lex_state = 2},
  [408] = {.lex_state = 40},
  [409] = {.lex_state = 1843},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 2},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 1843},
  [414] = {.lex_state = 2},
  [415] = {.lex_state = 2},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 2},
  [418] = {.lex_state = 2},
  [419] = {.lex_state = 2},
  [420] = {.lex_state = 2},
  [421] = {.lex_state = 1843},
  [422] = {.lex_state = 2},
  [423] = {.lex_state = 2},
  [424] = {.lex_state = 2},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 2},
  [427] = {.lex_state = 2},
  [428] = {.lex_state = 2},
  [429] = {.lex_state = 1843},
  [430] = {.lex_state = 1843},
  [431] = {.lex_state = 2},
  [432] = {.lex_state = 2},
  [433] = {.lex_state = 2},
  [434] = {.lex_state = 1843},
  [435] = {.lex_state = 2},
  [436] = {.lex_state = 2},
  [437] = {.lex_state = 2},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 1843},
  [440] = {.lex_state = 2},
  [441] = {.lex_state = 1843},
  [442] = {.lex_state = 2},
  [443] = {.lex_state = 17},
  [444] = {.lex_state = 2},
  [445] = {.lex_state = 1843},
  [446] = {.lex_state = 2},
  [447] = {.lex_state = 1843},
  [448] = {.lex_state = 2},
  [449] = {.lex_state = 1843},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 1843},
  [453] = {.lex_state = 2},
  [454] = {.lex_state = 2},
  [455] = {.lex_state = 2},
  [456] = {.lex_state = 2},
  [457] = {.lex_state = 2},
  [458] = {.lex_state = 2},
  [459] = {.lex_state = 32},
  [460] = {.lex_state = 2},
  [461] = {.lex_state = 1843},
  [462] = {.lex_state = 1843},
  [463] = {.lex_state = 1843},
  [464] = {.lex_state = 2},
  [465] = {.lex_state = 2},
  [466] = {.lex_state = 16},
  [467] = {.lex_state = 16},
  [468] = {.lex_state = 16},
  [469] = {.lex_state = 16},
  [470] = {.lex_state = 1843},
  [471] = {.lex_state = 1843},
  [472] = {.lex_state = 2},
  [473] = {.lex_state = 1843},
  [474] = {.lex_state = 2},
  [475] = {.lex_state = 1843},
  [476] = {.lex_state = 2},
  [477] = {.lex_state = 2},
  [478] = {.lex_state = 1843},
  [479] = {.lex_state = 1843},
  [480] = {.lex_state = 40},
  [481] = {.lex_state = 2},
  [482] = {.lex_state = 2},
  [483] = {.lex_state = 2},
  [484] = {.lex_state = 1843},
  [485] = {.lex_state = 1843},
  [486] = {.lex_state = 1843},
  [487] = {.lex_state = 1843},
  [488] = {.lex_state = 1843},
  [489] = {.lex_state = 1843},
  [490] = {.lex_state = 1843},
  [491] = {.lex_state = 1843},
  [492] = {.lex_state = 1843},
  [493] = {.lex_state = 1843},
  [494] = {.lex_state = 1843},
  [495] = {.lex_state = 2},
  [496] = {.lex_state = 1843},
  [497] = {.lex_state = 1843},
  [498] = {.lex_state = 1843},
  [499] = {.lex_state = 1843},
  [500] = {.lex_state = 1843},
  [501] = {.lex_state = 1843},
  [502] = {.lex_state = 1843},
  [503] = {.lex_state = 1843},
  [504] = {.lex_state = 1843},
  [505] = {.lex_state = 1843},
  [506] = {.lex_state = 1843},
  [507] = {.lex_state = 1843},
  [508] = {.lex_state = 1843},
  [509] = {.lex_state = 1843},
  [510] = {.lex_state = 1843},
  [511] = {.lex_state = 1843},
  [512] = {.lex_state = 42},
  [513] = {.lex_state = 1843},
  [514] = {.lex_state = 1843},
  [515] = {.lex_state = 1843},
  [516] = {.lex_state = 1843},
  [517] = {.lex_state = 2},
  [518] = {.lex_state = 40},
  [519] = {.lex_state = 1843},
  [520] = {.lex_state = 2},
  [521] = {.lex_state = 1843},
  [522] = {.lex_state = 1843},
  [523] = {.lex_state = 1843},
  [524] = {.lex_state = 1843},
  [525] = {.lex_state = 1843},
  [526] = {.lex_state = 2},
  [527] = {.lex_state = 1843},
  [528] = {.lex_state = 1843},
  [529] = {.lex_state = 2},
  [530] = {.lex_state = 1843},
  [531] = {.lex_state = 1843},
  [532] = {.lex_state = 2},
  [533] = {.lex_state = 1843},
  [534] = {.lex_state = 1840},
  [535] = {.lex_state = 2},
  [536] = {.lex_state = 1843},
  [537] = {.lex_state = 1843},
  [538] = {.lex_state = 1843},
  [539] = {.lex_state = 1843},
  [540] = {.lex_state = 1843},
  [541] = {.lex_state = 1843},
  [542] = {.lex_state = 1843},
  [543] = {.lex_state = 1843},
  [544] = {.lex_state = 1843},
  [545] = {.lex_state = 1843},
  [546] = {.lex_state = 1843},
  [547] = {.lex_state = 1843},
  [548] = {.lex_state = 1843},
  [549] = {.lex_state = 1843},
  [550] = {.lex_state = 1843},
  [551] = {.lex_state = 1843},
  [552] = {.lex_state = 1843},
  [553] = {.lex_state = 1843},
  [554] = {.lex_state = 1843},
  [555] = {.lex_state = 1843},
  [556] = {.lex_state = 1843},
  [557] = {.lex_state = 1843},
  [558] = {.lex_state = 1843},
  [559] = {.lex_state = 1843},
  [560] = {.lex_state = 1843},
  [561] = {.lex_state = 1843},
  [562] = {.lex_state = 1843},
  [563] = {.lex_state = 1843},
  [564] = {.lex_state = 1843},
  [565] = {.lex_state = 1843},
  [566] = {.lex_state = 1843},
  [567] = {.lex_state = 1843},
  [568] = {.lex_state = 1843},
  [569] = {.lex_state = 1843},
  [570] = {.lex_state = 2},
  [571] = {.lex_state = 1843},
  [572] = {.lex_state = 229},
  [573] = {.lex_state = 1843},
  [574] = {.lex_state = 1843},
  [575] = {.lex_state = 1843},
  [576] = {.lex_state = 1843},
  [577] = {.lex_state = 1843},
  [578] = {.lex_state = 1843},
  [579] = {.lex_state = 2},
  [580] = {.lex_state = 1843},
  [581] = {.lex_state = 1843},
  [582] = {.lex_state = 1843},
  [583] = {.lex_state = 1843},
  [584] = {.lex_state = 2},
  [585] = {.lex_state = 1843},
  [586] = {.lex_state = 1843},
  [587] = {.lex_state = 1843},
  [588] = {.lex_state = 1843},
  [589] = {.lex_state = 1843},
  [590] = {.lex_state = 1843},
  [591] = {.lex_state = 1843},
  [592] = {.lex_state = 1840},
  [593] = {.lex_state = 1843},
  [594] = {.lex_state = 1843},
  [595] = {.lex_state = 1843},
  [596] = {.lex_state = 1843},
  [597] = {.lex_state = 2},
  [598] = {.lex_state = 1843},
  [599] = {.lex_state = 1843},
  [600] = {.lex_state = 1843},
  [601] = {.lex_state = 1843},
  [602] = {.lex_state = 1843},
  [603] = {.lex_state = 1843},
  [604] = {.lex_state = 1843},
  [605] = {.lex_state = 1843},
  [606] = {.lex_state = 1843},
  [607] = {.lex_state = 1843},
  [608] = {.lex_state = 49},
  [609] = {.lex_state = 1843},
  [610] = {.lex_state = 1843},
  [611] = {.lex_state = 1843},
  [612] = {.lex_state = 1843},
  [613] = {.lex_state = 1843},
  [614] = {.lex_state = 1843},
  [615] = {.lex_state = 1843},
  [616] = {.lex_state = 1843},
  [617] = {.lex_state = 1843},
  [618] = {.lex_state = 1843},
  [619] = {.lex_state = 1843},
  [620] = {.lex_state = 1843},
  [621] = {.lex_state = 16},
  [622] = {.lex_state = 1843},
  [623] = {.lex_state = 1843},
  [624] = {.lex_state = 1843},
  [625] = {.lex_state = 1843},
  [626] = {.lex_state = 1843},
  [627] = {.lex_state = 1843},
  [628] = {.lex_state = 1843},
  [629] = {.lex_state = 1843},
  [630] = {.lex_state = 1843},
  [631] = {.lex_state = 1843},
  [632] = {.lex_state = 1843},
  [633] = {.lex_state = 1843},
  [634] = {.lex_state = 1843},
  [635] = {.lex_state = 1843},
  [636] = {.lex_state = 2},
  [637] = {.lex_state = 16},
  [638] = {.lex_state = 1843},
  [639] = {.lex_state = 1843},
  [640] = {.lex_state = 1843},
  [641] = {.lex_state = 1843},
  [642] = {.lex_state = 1843},
  [643] = {.lex_state = 1843},
  [644] = {.lex_state = 1843},
  [645] = {.lex_state = 1843},
  [646] = {.lex_state = 1843},
  [647] = {.lex_state = 1843},
  [648] = {.lex_state = 1843},
  [649] = {.lex_state = 1843},
  [650] = {.lex_state = 1843},
  [651] = {.lex_state = 1843},
  [652] = {.lex_state = 1843},
  [653] = {.lex_state = 1843},
  [654] = {.lex_state = 1843},
  [655] = {.lex_state = 1843},
  [656] = {.lex_state = 1843},
  [657] = {.lex_state = 1843},
  [658] = {.lex_state = 1843},
  [659] = {.lex_state = 1843},
  [660] = {.lex_state = 1843},
  [661] = {.lex_state = 1843},
  [662] = {.lex_state = 1843},
  [663] = {.lex_state = 288},
  [664] = {.lex_state = 1843},
  [665] = {.lex_state = 1843},
  [666] = {.lex_state = 1843},
  [667] = {.lex_state = 1843},
  [668] = {.lex_state = 1843},
  [669] = {.lex_state = 1843},
  [670] = {.lex_state = 1843},
  [671] = {.lex_state = 1843},
  [672] = {.lex_state = 1843},
  [673] = {.lex_state = 1843},
  [674] = {.lex_state = 1843},
  [675] = {.lex_state = 1843},
  [676] = {.lex_state = 1843},
  [677] = {.lex_state = 1843},
  [678] = {.lex_state = 1843},
  [679] = {.lex_state = 1843},
  [680] = {.lex_state = 1843},
  [681] = {.lex_state = 1843},
  [682] = {.lex_state = 1843},
  [683] = {.lex_state = 1843},
  [684] = {.lex_state = 1843},
  [685] = {.lex_state = 1843},
  [686] = {.lex_state = 1843},
  [687] = {.lex_state = 1843},
  [688] = {.lex_state = 1843},
  [689] = {.lex_state = 1843},
  [690] = {.lex_state = 1843},
  [691] = {.lex_state = 1843},
  [692] = {.lex_state = 1843},
  [693] = {.lex_state = 1843},
  [694] = {.lex_state = 1843},
  [695] = {.lex_state = 1843},
  [696] = {.lex_state = 1843},
  [697] = {.lex_state = 1843},
  [698] = {.lex_state = 1843},
  [699] = {.lex_state = 1843},
  [700] = {.lex_state = 1843},
  [701] = {.lex_state = 1843},
  [702] = {.lex_state = 1843},
  [703] = {.lex_state = 1843},
  [704] = {.lex_state = 1843},
  [705] = {.lex_state = 1843},
  [706] = {.lex_state = 1843},
  [707] = {.lex_state = 1843},
  [708] = {.lex_state = 1843},
  [709] = {.lex_state = 1843},
  [710] = {.lex_state = 1843},
  [711] = {.lex_state = 1843},
  [712] = {.lex_state = 1843},
  [713] = {.lex_state = 1843},
  [714] = {.lex_state = 1843},
  [715] = {.lex_state = 1843},
  [716] = {.lex_state = 1843},
  [717] = {.lex_state = 1843},
  [718] = {.lex_state = 1843},
  [719] = {.lex_state = 1843},
  [720] = {.lex_state = 1843},
  [721] = {.lex_state = 1843},
  [722] = {.lex_state = 1843},
  [723] = {.lex_state = 1843},
  [724] = {.lex_state = 1843},
  [725] = {.lex_state = 1843},
  [726] = {.lex_state = 1843},
  [727] = {.lex_state = 1843},
  [728] = {.lex_state = 1843},
  [729] = {.lex_state = 1843},
  [730] = {.lex_state = 1843},
  [731] = {.lex_state = 1843},
  [732] = {.lex_state = 1843},
  [733] = {.lex_state = 1843},
  [734] = {.lex_state = 1843},
  [735] = {.lex_state = 1843},
  [736] = {.lex_state = 1843},
  [737] = {.lex_state = 1843},
  [738] = {.lex_state = 1843},
  [739] = {.lex_state = 1843},
  [740] = {.lex_state = 1843},
  [741] = {.lex_state = 1843},
  [742] = {.lex_state = 1843},
  [743] = {.lex_state = 1843},
  [744] = {.lex_state = 1843},
  [745] = {.lex_state = 1843},
  [746] = {.lex_state = 2},
  [747] = {.lex_state = 1843},
  [748] = {.lex_state = 2},
  [749] = {.lex_state = 1843},
  [750] = {.lex_state = 1843},
  [751] = {.lex_state = 1843},
  [752] = {.lex_state = 1843},
  [753] = {.lex_state = 1843},
  [754] = {.lex_state = 1843},
  [755] = {.lex_state = 1843},
  [756] = {.lex_state = 1843},
  [757] = {.lex_state = 1843},
  [758] = {.lex_state = 1843},
  [759] = {.lex_state = 1843},
  [760] = {.lex_state = 1843},
  [761] = {.lex_state = 1843},
  [762] = {.lex_state = 1843},
  [763] = {.lex_state = 1843},
  [764] = {.lex_state = 1843},
  [765] = {.lex_state = 1843},
  [766] = {.lex_state = 1843},
  [767] = {.lex_state = 40},
  [768] = {.lex_state = 1843},
  [769] = {.lex_state = 16},
  [770] = {.lex_state = 1843},
  [771] = {.lex_state = 1843},
  [772] = {.lex_state = 1843},
  [773] = {.lex_state = 1843},
  [774] = {.lex_state = 1843},
  [775] = {.lex_state = 1843},
  [776] = {.lex_state = 2},
  [777] = {.lex_state = 1840},
  [778] = {.lex_state = 1843},
  [779] = {.lex_state = 1841},
  [780] = {.lex_state = 1843},
  [781] = {.lex_state = 1843},
  [782] = {.lex_state = 1840},
  [783] = {.lex_state = 1843},
  [784] = {.lex_state = 1843},
  [785] = {.lex_state = 1843},
  [786] = {.lex_state = 1843},
  [787] = {.lex_state = 16},
  [788] = {.lex_state = 1843},
  [789] = {.lex_state = 1842},
  [790] = {.lex_state = 16},
  [791] = {.lex_state = 1843},
  [792] = {.lex_state = 1843},
  [793] = {.lex_state = 16},
  [794] = {.lex_state = 1843},
  [795] = {.lex_state = 1841},
  [796] = {.lex_state = 439},
  [797] = {.lex_state = 1842},
  [798] = {.lex_state = 16},
  [799] = {.lex_state = 1843},
  [800] = {.lex_state = 1843},
  [801] = {.lex_state = 1843},
  [802] = {.lex_state = 1843},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 1843},
  [805] = {.lex_state = 1843},
  [806] = {.lex_state = 17},
  [807] = {.lex_state = 1843},
  [808] = {.lex_state = 1843},
  [809] = {.lex_state = 1843},
  [810] = {.lex_state = 1843},
  [811] = {.lex_state = 2},
  [812] = {.lex_state = 439},
  [813] = {.lex_state = 1843},
  [814] = {.lex_state = 1843},
  [815] = {.lex_state = 1843},
  [816] = {.lex_state = 1843},
  [817] = {.lex_state = 1843},
  [818] = {.lex_state = 1843},
  [819] = {.lex_state = 1843},
  [820] = {.lex_state = 1840},
  [821] = {.lex_state = 1840},
  [822] = {.lex_state = 1840},
  [823] = {.lex_state = 1840},
  [824] = {.lex_state = 1840},
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
    [aux_sym__remote_command_token2] = ACTIONS(1),
    [aux_sym__send_env_value_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__file_token_token1] = ACTIONS(1),
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
    [sym_config] = STATE(803),
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(542),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym_config_repeat1] = STATE(2),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(199),
    [sym__space] = ACTIONS(201),
    [sym__eol] = ACTIONS(203),
  },
  [2] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(542),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(205),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(199),
    [sym__space] = ACTIONS(201),
    [sym__eol] = ACTIONS(207),
  },
  [3] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(542),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_host_declaration_token1] = ACTIONS(211),
    [aux_sym_match_declaration_token1] = ACTIONS(214),
    [aux_sym__match_user_token1] = ACTIONS(217),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(220),
    [aux_sym__address_family_token1] = ACTIONS(223),
    [aux_sym__batch_mode_token1] = ACTIONS(226),
    [aux_sym__bind_address_token1] = ACTIONS(229),
    [aux_sym__bind_interface_token1] = ACTIONS(232),
    [aux_sym__canonical_domains_token1] = ACTIONS(235),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(238),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(241),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(244),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(247),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(250),
    [aux_sym__certificate_file_token1] = ACTIONS(253),
    [aux_sym__check_host_ip_token1] = ACTIONS(256),
    [aux_sym__ciphers_token1] = ACTIONS(259),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(262),
    [aux_sym__compression_token1] = ACTIONS(265),
    [aux_sym__connection_attempts_token1] = ACTIONS(268),
    [aux_sym__connect_timeout_token1] = ACTIONS(271),
    [aux_sym__control_master_token1] = ACTIONS(274),
    [aux_sym__control_persist_token1] = ACTIONS(277),
    [aux_sym__control_path_token1] = ACTIONS(280),
    [aux_sym__dynamic_forward_token1] = ACTIONS(283),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(286),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(289),
    [aux_sym__escape_char_token1] = ACTIONS(292),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(295),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(298),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(301),
    [aux_sym__forward_agent_token1] = ACTIONS(304),
    [aux_sym__forward_x11_token1] = ACTIONS(307),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(310),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(313),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(316),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(319),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(322),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(325),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(325),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(328),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(331),
    [aux_sym__host_key_alias_token1] = ACTIONS(334),
    [aux_sym__hostname_token1] = ACTIONS(337),
    [aux_sym__identities_only_token1] = ACTIONS(340),
    [aux_sym__identity_agent_token1] = ACTIONS(343),
    [aux_sym__identity_file_token1] = ACTIONS(346),
    [aux_sym__ignore_unknown_token1] = ACTIONS(349),
    [aux_sym__include_token1] = ACTIONS(352),
    [aux_sym__ipqos_token1] = ACTIONS(355),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(358),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(358),
    [aux_sym__kex_algorithms_token1] = ACTIONS(361),
    [aux_sym__known_hosts_command_token1] = ACTIONS(364),
    [aux_sym__local_command_token1] = ACTIONS(367),
    [aux_sym__local_forward_token1] = ACTIONS(370),
    [aux_sym__log_level_token1] = ACTIONS(373),
    [aux_sym__log_verbose_token1] = ACTIONS(376),
    [aux_sym__macs_token1] = ACTIONS(379),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(382),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(385),
    [aux_sym__password_authentication_token1] = ACTIONS(388),
    [aux_sym__permit_local_command_token1] = ACTIONS(391),
    [aux_sym__permit_remote_open_token1] = ACTIONS(394),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(397),
    [aux_sym__port_token1] = ACTIONS(400),
    [aux_sym__preferred_authentications_token1] = ACTIONS(403),
    [aux_sym__proxy_command_token1] = ACTIONS(406),
    [aux_sym__proxy_jump_token1] = ACTIONS(409),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(412),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(415),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(415),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(418),
    [aux_sym__rekey_limit_token1] = ACTIONS(421),
    [aux_sym__remote_command_token1] = ACTIONS(424),
    [aux_sym__remote_forward_token1] = ACTIONS(427),
    [aux_sym__request_tty_token1] = ACTIONS(430),
    [aux_sym__required_rsa_size_token1] = ACTIONS(433),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(436),
    [aux_sym__security_key_provider_token1] = ACTIONS(439),
    [aux_sym__send_env_token1] = ACTIONS(442),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(445),
    [aux_sym__server_alive_interval_token1] = ACTIONS(448),
    [aux_sym__session_type_token1] = ACTIONS(451),
    [aux_sym__set_env_token1] = ACTIONS(454),
    [aux_sym__stdin_null_token1] = ACTIONS(457),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(460),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(463),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(466),
    [aux_sym__syslog_facility_token1] = ACTIONS(469),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(472),
    [aux_sym__tag_token1] = ACTIONS(475),
    [aux_sym__tunnel_token1] = ACTIONS(478),
    [aux_sym__tunnel_device_token1] = ACTIONS(481),
    [aux_sym__update_host_keys_token1] = ACTIONS(484),
    [aux_sym__use_keychain_token1] = ACTIONS(487),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(490),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(493),
    [aux_sym__visual_host_key_token1] = ACTIONS(496),
    [aux_sym__xauth_location_token1] = ACTIONS(499),
    [sym_comment] = ACTIONS(502),
    [sym__space] = ACTIONS(505),
    [sym__eol] = ACTIONS(508),
  },
  [4] = {
    [sym__declarations] = STATE(35),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(511),
    [aux_sym_host_declaration_token1] = ACTIONS(513),
    [aux_sym_match_declaration_token1] = ACTIONS(511),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
    [sym__eol] = ACTIONS(511),
  },
  [5] = {
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(519),
    [aux_sym_host_declaration_token1] = ACTIONS(521),
    [aux_sym_match_declaration_token1] = ACTIONS(519),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
    [sym__eol] = ACTIONS(519),
  },
  [6] = {
    [sym__declarations] = STATE(31),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(523),
    [aux_sym_host_declaration_token1] = ACTIONS(525),
    [aux_sym_match_declaration_token1] = ACTIONS(523),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
    [sym__eol] = ACTIONS(523),
  },
  [7] = {
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_host_declaration_token1] = ACTIONS(529),
    [aux_sym_match_declaration_token1] = ACTIONS(527),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
    [sym__eol] = ACTIONS(527),
  },
  [8] = {
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_host_declaration_token1] = ACTIONS(533),
    [aux_sym_match_declaration_token1] = ACTIONS(531),
    [aux_sym__match_user_token1] = ACTIONS(535),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(538),
    [aux_sym__address_family_token1] = ACTIONS(541),
    [aux_sym__batch_mode_token1] = ACTIONS(544),
    [aux_sym__bind_address_token1] = ACTIONS(547),
    [aux_sym__bind_interface_token1] = ACTIONS(550),
    [aux_sym__canonical_domains_token1] = ACTIONS(553),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(556),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(559),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(562),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(565),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(568),
    [aux_sym__certificate_file_token1] = ACTIONS(571),
    [aux_sym__check_host_ip_token1] = ACTIONS(574),
    [aux_sym__ciphers_token1] = ACTIONS(577),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(580),
    [aux_sym__compression_token1] = ACTIONS(583),
    [aux_sym__connection_attempts_token1] = ACTIONS(586),
    [aux_sym__connect_timeout_token1] = ACTIONS(589),
    [aux_sym__control_master_token1] = ACTIONS(592),
    [aux_sym__control_persist_token1] = ACTIONS(595),
    [aux_sym__control_path_token1] = ACTIONS(598),
    [aux_sym__dynamic_forward_token1] = ACTIONS(601),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(604),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(607),
    [aux_sym__escape_char_token1] = ACTIONS(610),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(613),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(616),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(619),
    [aux_sym__forward_agent_token1] = ACTIONS(622),
    [aux_sym__forward_x11_token1] = ACTIONS(625),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(628),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(631),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(634),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(637),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(640),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(643),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(643),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(646),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(649),
    [aux_sym__host_key_alias_token1] = ACTIONS(652),
    [aux_sym__hostname_token1] = ACTIONS(655),
    [aux_sym__identities_only_token1] = ACTIONS(658),
    [aux_sym__identity_agent_token1] = ACTIONS(661),
    [aux_sym__identity_file_token1] = ACTIONS(664),
    [aux_sym__ignore_unknown_token1] = ACTIONS(667),
    [aux_sym__include_token1] = ACTIONS(670),
    [aux_sym__ipqos_token1] = ACTIONS(673),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(676),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(676),
    [aux_sym__kex_algorithms_token1] = ACTIONS(679),
    [aux_sym__known_hosts_command_token1] = ACTIONS(682),
    [aux_sym__local_command_token1] = ACTIONS(685),
    [aux_sym__local_forward_token1] = ACTIONS(688),
    [aux_sym__log_level_token1] = ACTIONS(691),
    [aux_sym__log_verbose_token1] = ACTIONS(694),
    [aux_sym__macs_token1] = ACTIONS(697),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(700),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(703),
    [aux_sym__password_authentication_token1] = ACTIONS(706),
    [aux_sym__permit_local_command_token1] = ACTIONS(709),
    [aux_sym__permit_remote_open_token1] = ACTIONS(712),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(715),
    [aux_sym__port_token1] = ACTIONS(718),
    [aux_sym__preferred_authentications_token1] = ACTIONS(721),
    [aux_sym__proxy_command_token1] = ACTIONS(724),
    [aux_sym__proxy_jump_token1] = ACTIONS(727),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(730),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(733),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(733),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(736),
    [aux_sym__rekey_limit_token1] = ACTIONS(739),
    [aux_sym__remote_command_token1] = ACTIONS(742),
    [aux_sym__remote_forward_token1] = ACTIONS(745),
    [aux_sym__request_tty_token1] = ACTIONS(748),
    [aux_sym__required_rsa_size_token1] = ACTIONS(751),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(754),
    [aux_sym__security_key_provider_token1] = ACTIONS(757),
    [aux_sym__send_env_token1] = ACTIONS(760),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(763),
    [aux_sym__server_alive_interval_token1] = ACTIONS(766),
    [aux_sym__session_type_token1] = ACTIONS(769),
    [aux_sym__set_env_token1] = ACTIONS(772),
    [aux_sym__stdin_null_token1] = ACTIONS(775),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(778),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(781),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(784),
    [aux_sym__syslog_facility_token1] = ACTIONS(787),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(790),
    [aux_sym__tag_token1] = ACTIONS(793),
    [aux_sym__tunnel_token1] = ACTIONS(796),
    [aux_sym__tunnel_device_token1] = ACTIONS(799),
    [aux_sym__update_host_keys_token1] = ACTIONS(802),
    [aux_sym__use_keychain_token1] = ACTIONS(805),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(808),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(811),
    [aux_sym__visual_host_key_token1] = ACTIONS(814),
    [aux_sym__xauth_location_token1] = ACTIONS(817),
    [sym_comment] = ACTIONS(820),
    [sym__space] = ACTIONS(823),
    [sym__eol] = ACTIONS(531),
  },
  [9] = {
    [sym_host_declaration] = STATE(21),
    [sym_match_declaration] = STATE(21),
    [sym_parameter] = STATE(546),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(826),
    [sym__eol] = ACTIONS(828),
  },
  [10] = {
    [sym__declarations] = STATE(33),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [11] = {
    [sym__declarations] = STATE(27),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [12] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [13] = {
    [sym__declarations] = STATE(34),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [14] = {
    [sym__declarations] = STATE(24),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [15] = {
    [sym__declarations] = STATE(19),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [16] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [17] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(606),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
    [aux_sym__declarations_repeat1] = STATE(7),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(515),
    [sym__space] = ACTIONS(517),
  },
  [18] = {
    [sym_parameter] = STATE(718),
    [sym__add_keys_to_agent] = STATE(556),
    [sym__address_family] = STATE(561),
    [sym__batch_mode] = STATE(576),
    [sym__bind_address] = STATE(580),
    [sym__bind_interface] = STATE(730),
    [sym__canonical_domains] = STATE(770),
    [sym__canonicalize_fallback_local] = STATE(766),
    [sym__canonicalize_hostname] = STATE(761),
    [sym__canonicalize_max_dots] = STATE(759),
    [sym__canonicalize_permitted_cnames] = STATE(756),
    [sym__ca_signature_algorithms] = STATE(745),
    [sym__certificate_file] = STATE(740),
    [sym__check_host_ip] = STATE(739),
    [sym__ciphers] = STATE(731),
    [sym__clear_all_forwardings] = STATE(728),
    [sym__compression] = STATE(727),
    [sym__connection_attempts] = STATE(725),
    [sym__connect_timeout] = STATE(724),
    [sym__control_master] = STATE(699),
    [sym__control_persist] = STATE(696),
    [sym__control_path] = STATE(690),
    [sym__dynamic_forward] = STATE(560),
    [sym__enable_escape_command_line] = STATE(687),
    [sym__enable_ssh_keysign] = STATE(686),
    [sym__escape_char] = STATE(684),
    [sym__exit_on_forward_failure] = STATE(682),
    [sym__fingerprint_hash] = STATE(675),
    [sym__fork_after_authentication] = STATE(673),
    [sym__forward_agent] = STATE(667),
    [sym__forward_x11] = STATE(665),
    [sym__forward_x11_timeout] = STATE(664),
    [sym__forward_x11_trusted] = STATE(662),
    [sym__global_known_hosts_file] = STATE(655),
    [sym__gssapi_authentication] = STATE(653),
    [sym__gssapi_delegate_credentials] = STATE(649),
    [sym__hostbased_accepted_algorithms] = STATE(647),
    [sym__hostbased_authentication] = STATE(645),
    [sym__host_key_algorithms] = STATE(643),
    [sym__host_key_alias] = STATE(635),
    [sym__hostname] = STATE(622),
    [sym__identities_only] = STATE(620),
    [sym__identity_agent] = STATE(619),
    [sym__identity_file] = STATE(618),
    [sym__ignore_unknown] = STATE(613),
    [sym__include] = STATE(603),
    [sym__ipqos] = STATE(602),
    [sym__kbd_interactive_authentication] = STATE(601),
    [sym__kex_algorithms] = STATE(591),
    [sym__known_hosts_command] = STATE(590),
    [sym__local_command] = STATE(588),
    [sym__local_forward] = STATE(587),
    [sym__log_level] = STATE(582),
    [sym__log_verbose] = STATE(581),
    [sym__macs] = STATE(578),
    [sym__no_host_authentication_for_localhost] = STATE(577),
    [sym__number_of_password_prompts] = STATE(574),
    [sym__password_authentication] = STATE(571),
    [sym__permit_local_command] = STATE(569),
    [sym__permit_remote_open] = STATE(568),
    [sym__pkcs11_provider] = STATE(567),
    [sym__port] = STATE(566),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(564),
    [sym__proxy_jump] = STATE(599),
    [sym__proxy_use_fdpass] = STATE(559),
    [sym__pubkey_accepted_algorithms] = STATE(557),
    [sym__pubkey_authentication] = STATE(555),
    [sym__rekey_limit] = STATE(554),
    [sym__remote_command] = STATE(552),
    [sym__remote_forward] = STATE(549),
    [sym__request_tty] = STATE(548),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(545),
    [sym__security_key_provider] = STATE(485),
    [sym__send_env] = STATE(543),
    [sym__server_alive_count_max] = STATE(541),
    [sym__server_alive_interval] = STATE(539),
    [sym__session_type] = STATE(533),
    [sym__set_env] = STATE(531),
    [sym__stdin_null] = STATE(528),
    [sym__stream_local_bind_mask] = STATE(527),
    [sym__stream_local_bind_unlink] = STATE(525),
    [sym__strict_host_key_checking] = STATE(524),
    [sym__syslog_facility] = STATE(523),
    [sym__tcp_keep_alive] = STATE(522),
    [sym__tag] = STATE(519),
    [sym__tunnel] = STATE(516),
    [sym__tunnel_device] = STATE(515),
    [sym__update_host_keys] = STATE(514),
    [sym__use_keychain] = STATE(513),
    [sym__user] = STATE(511),
    [sym__user_known_hosts_file] = STATE(499),
    [sym__verify_host_key_dns] = STATE(498),
    [sym__visual_host_key] = STATE(497),
    [sym__xauth_location] = STATE(496),
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(53),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(55),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(57),
    [aux_sym__escape_char_token1] = ACTIONS(59),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(61),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(63),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(65),
    [aux_sym__forward_agent_token1] = ACTIONS(67),
    [aux_sym__forward_x11_token1] = ACTIONS(69),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(71),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(73),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(75),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(77),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(79),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(81),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(81),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(83),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(85),
    [aux_sym__host_key_alias_token1] = ACTIONS(87),
    [aux_sym__hostname_token1] = ACTIONS(89),
    [aux_sym__identities_only_token1] = ACTIONS(91),
    [aux_sym__identity_agent_token1] = ACTIONS(93),
    [aux_sym__identity_file_token1] = ACTIONS(95),
    [aux_sym__ignore_unknown_token1] = ACTIONS(97),
    [aux_sym__include_token1] = ACTIONS(99),
    [aux_sym__ipqos_token1] = ACTIONS(101),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(103),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(103),
    [aux_sym__kex_algorithms_token1] = ACTIONS(105),
    [aux_sym__known_hosts_command_token1] = ACTIONS(107),
    [aux_sym__local_command_token1] = ACTIONS(109),
    [aux_sym__local_forward_token1] = ACTIONS(111),
    [aux_sym__log_level_token1] = ACTIONS(113),
    [aux_sym__log_verbose_token1] = ACTIONS(115),
    [aux_sym__macs_token1] = ACTIONS(117),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(119),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(121),
    [aux_sym__password_authentication_token1] = ACTIONS(123),
    [aux_sym__permit_local_command_token1] = ACTIONS(125),
    [aux_sym__permit_remote_open_token1] = ACTIONS(127),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(129),
    [aux_sym__port_token1] = ACTIONS(131),
    [aux_sym__preferred_authentications_token1] = ACTIONS(133),
    [aux_sym__proxy_command_token1] = ACTIONS(135),
    [aux_sym__proxy_jump_token1] = ACTIONS(137),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(139),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(141),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(141),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(143),
    [aux_sym__rekey_limit_token1] = ACTIONS(145),
    [aux_sym__remote_command_token1] = ACTIONS(147),
    [aux_sym__remote_forward_token1] = ACTIONS(149),
    [aux_sym__request_tty_token1] = ACTIONS(151),
    [aux_sym__required_rsa_size_token1] = ACTIONS(153),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(155),
    [aux_sym__security_key_provider_token1] = ACTIONS(157),
    [aux_sym__send_env_token1] = ACTIONS(159),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(161),
    [aux_sym__server_alive_interval_token1] = ACTIONS(163),
    [aux_sym__session_type_token1] = ACTIONS(165),
    [aux_sym__set_env_token1] = ACTIONS(167),
    [aux_sym__stdin_null_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(171),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(173),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(175),
    [aux_sym__syslog_facility_token1] = ACTIONS(177),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(179),
    [aux_sym__tag_token1] = ACTIONS(181),
    [aux_sym__tunnel_token1] = ACTIONS(183),
    [aux_sym__tunnel_device_token1] = ACTIONS(185),
    [aux_sym__update_host_keys_token1] = ACTIONS(187),
    [aux_sym__use_keychain_token1] = ACTIONS(189),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(191),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(193),
    [aux_sym__visual_host_key_token1] = ACTIONS(195),
    [aux_sym__xauth_location_token1] = ACTIONS(197),
    [sym_comment] = ACTIONS(830),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(832),
    [aux_sym_host_declaration_token1] = ACTIONS(834),
    [aux_sym_match_declaration_token1] = ACTIONS(832),
    [aux_sym__match_user_token1] = ACTIONS(834),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(832),
    [aux_sym__address_family_token1] = ACTIONS(832),
    [aux_sym__batch_mode_token1] = ACTIONS(832),
    [aux_sym__bind_address_token1] = ACTIONS(832),
    [aux_sym__bind_interface_token1] = ACTIONS(832),
    [aux_sym__canonical_domains_token1] = ACTIONS(832),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(832),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(832),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(832),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(832),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(832),
    [aux_sym__certificate_file_token1] = ACTIONS(832),
    [aux_sym__check_host_ip_token1] = ACTIONS(832),
    [aux_sym__ciphers_token1] = ACTIONS(832),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(832),
    [aux_sym__compression_token1] = ACTIONS(832),
    [aux_sym__connection_attempts_token1] = ACTIONS(832),
    [aux_sym__connect_timeout_token1] = ACTIONS(832),
    [aux_sym__control_master_token1] = ACTIONS(832),
    [aux_sym__control_persist_token1] = ACTIONS(832),
    [aux_sym__control_path_token1] = ACTIONS(832),
    [aux_sym__dynamic_forward_token1] = ACTIONS(832),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(832),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(832),
    [aux_sym__escape_char_token1] = ACTIONS(832),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(832),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(832),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(832),
    [aux_sym__forward_agent_token1] = ACTIONS(832),
    [aux_sym__forward_x11_token1] = ACTIONS(834),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(832),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(832),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(832),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(832),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(832),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(832),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(832),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(832),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(832),
    [aux_sym__host_key_alias_token1] = ACTIONS(832),
    [aux_sym__hostname_token1] = ACTIONS(832),
    [aux_sym__identities_only_token1] = ACTIONS(832),
    [aux_sym__identity_agent_token1] = ACTIONS(832),
    [aux_sym__identity_file_token1] = ACTIONS(832),
    [aux_sym__ignore_unknown_token1] = ACTIONS(832),
    [aux_sym__include_token1] = ACTIONS(832),
    [aux_sym__ipqos_token1] = ACTIONS(832),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(832),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(832),
    [aux_sym__kex_algorithms_token1] = ACTIONS(832),
    [aux_sym__known_hosts_command_token1] = ACTIONS(832),
    [aux_sym__local_command_token1] = ACTIONS(832),
    [aux_sym__local_forward_token1] = ACTIONS(832),
    [aux_sym__log_level_token1] = ACTIONS(832),
    [aux_sym__log_verbose_token1] = ACTIONS(832),
    [aux_sym__macs_token1] = ACTIONS(832),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(832),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(832),
    [aux_sym__password_authentication_token1] = ACTIONS(832),
    [aux_sym__permit_local_command_token1] = ACTIONS(832),
    [aux_sym__permit_remote_open_token1] = ACTIONS(832),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(832),
    [aux_sym__port_token1] = ACTIONS(832),
    [aux_sym__preferred_authentications_token1] = ACTIONS(832),
    [aux_sym__proxy_command_token1] = ACTIONS(832),
    [aux_sym__proxy_jump_token1] = ACTIONS(832),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(832),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(832),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(832),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(832),
    [aux_sym__rekey_limit_token1] = ACTIONS(832),
    [aux_sym__remote_command_token1] = ACTIONS(832),
    [aux_sym__remote_forward_token1] = ACTIONS(832),
    [aux_sym__request_tty_token1] = ACTIONS(832),
    [aux_sym__required_rsa_size_token1] = ACTIONS(832),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(832),
    [aux_sym__security_key_provider_token1] = ACTIONS(832),
    [aux_sym__send_env_token1] = ACTIONS(832),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(832),
    [aux_sym__server_alive_interval_token1] = ACTIONS(832),
    [aux_sym__session_type_token1] = ACTIONS(832),
    [aux_sym__set_env_token1] = ACTIONS(832),
    [aux_sym__stdin_null_token1] = ACTIONS(832),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(832),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(832),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(832),
    [aux_sym__syslog_facility_token1] = ACTIONS(832),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(832),
    [aux_sym__tag_token1] = ACTIONS(832),
    [aux_sym__tunnel_token1] = ACTIONS(834),
    [aux_sym__tunnel_device_token1] = ACTIONS(832),
    [aux_sym__update_host_keys_token1] = ACTIONS(832),
    [aux_sym__use_keychain_token1] = ACTIONS(832),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(832),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(832),
    [aux_sym__visual_host_key_token1] = ACTIONS(832),
    [aux_sym__xauth_location_token1] = ACTIONS(832),
    [sym_comment] = ACTIONS(832),
    [sym__space] = ACTIONS(832),
    [sym__eol] = ACTIONS(832),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(836),
    [aux_sym_host_declaration_token1] = ACTIONS(838),
    [aux_sym_match_declaration_token1] = ACTIONS(836),
    [aux_sym__match_user_token1] = ACTIONS(838),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(836),
    [aux_sym__address_family_token1] = ACTIONS(836),
    [aux_sym__batch_mode_token1] = ACTIONS(836),
    [aux_sym__bind_address_token1] = ACTIONS(836),
    [aux_sym__bind_interface_token1] = ACTIONS(836),
    [aux_sym__canonical_domains_token1] = ACTIONS(836),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(836),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(836),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(836),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(836),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(836),
    [aux_sym__certificate_file_token1] = ACTIONS(836),
    [aux_sym__check_host_ip_token1] = ACTIONS(836),
    [aux_sym__ciphers_token1] = ACTIONS(836),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(836),
    [aux_sym__compression_token1] = ACTIONS(836),
    [aux_sym__connection_attempts_token1] = ACTIONS(836),
    [aux_sym__connect_timeout_token1] = ACTIONS(836),
    [aux_sym__control_master_token1] = ACTIONS(836),
    [aux_sym__control_persist_token1] = ACTIONS(836),
    [aux_sym__control_path_token1] = ACTIONS(836),
    [aux_sym__dynamic_forward_token1] = ACTIONS(836),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(836),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(836),
    [aux_sym__escape_char_token1] = ACTIONS(836),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(836),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(836),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(836),
    [aux_sym__forward_agent_token1] = ACTIONS(836),
    [aux_sym__forward_x11_token1] = ACTIONS(838),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(836),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(836),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(836),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(836),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(836),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(836),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(836),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(836),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(836),
    [aux_sym__host_key_alias_token1] = ACTIONS(836),
    [aux_sym__hostname_token1] = ACTIONS(836),
    [aux_sym__identities_only_token1] = ACTIONS(836),
    [aux_sym__identity_agent_token1] = ACTIONS(836),
    [aux_sym__identity_file_token1] = ACTIONS(836),
    [aux_sym__ignore_unknown_token1] = ACTIONS(836),
    [aux_sym__include_token1] = ACTIONS(836),
    [aux_sym__ipqos_token1] = ACTIONS(836),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(836),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(836),
    [aux_sym__kex_algorithms_token1] = ACTIONS(836),
    [aux_sym__known_hosts_command_token1] = ACTIONS(836),
    [aux_sym__local_command_token1] = ACTIONS(836),
    [aux_sym__local_forward_token1] = ACTIONS(836),
    [aux_sym__log_level_token1] = ACTIONS(836),
    [aux_sym__log_verbose_token1] = ACTIONS(836),
    [aux_sym__macs_token1] = ACTIONS(836),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(836),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(836),
    [aux_sym__password_authentication_token1] = ACTIONS(836),
    [aux_sym__permit_local_command_token1] = ACTIONS(836),
    [aux_sym__permit_remote_open_token1] = ACTIONS(836),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(836),
    [aux_sym__port_token1] = ACTIONS(836),
    [aux_sym__preferred_authentications_token1] = ACTIONS(836),
    [aux_sym__proxy_command_token1] = ACTIONS(836),
    [aux_sym__proxy_jump_token1] = ACTIONS(836),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(836),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(836),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(836),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(836),
    [aux_sym__rekey_limit_token1] = ACTIONS(836),
    [aux_sym__remote_command_token1] = ACTIONS(836),
    [aux_sym__remote_forward_token1] = ACTIONS(836),
    [aux_sym__request_tty_token1] = ACTIONS(836),
    [aux_sym__required_rsa_size_token1] = ACTIONS(836),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(836),
    [aux_sym__security_key_provider_token1] = ACTIONS(836),
    [aux_sym__send_env_token1] = ACTIONS(836),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(836),
    [aux_sym__server_alive_interval_token1] = ACTIONS(836),
    [aux_sym__session_type_token1] = ACTIONS(836),
    [aux_sym__set_env_token1] = ACTIONS(836),
    [aux_sym__stdin_null_token1] = ACTIONS(836),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(836),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(836),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(836),
    [aux_sym__syslog_facility_token1] = ACTIONS(836),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(836),
    [aux_sym__tag_token1] = ACTIONS(836),
    [aux_sym__tunnel_token1] = ACTIONS(838),
    [aux_sym__tunnel_device_token1] = ACTIONS(836),
    [aux_sym__update_host_keys_token1] = ACTIONS(836),
    [aux_sym__use_keychain_token1] = ACTIONS(836),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(836),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(836),
    [aux_sym__visual_host_key_token1] = ACTIONS(836),
    [aux_sym__xauth_location_token1] = ACTIONS(836),
    [sym_comment] = ACTIONS(836),
    [sym__space] = ACTIONS(836),
    [sym__eol] = ACTIONS(836),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_host_declaration_token1] = ACTIONS(840),
    [aux_sym_match_declaration_token1] = ACTIONS(209),
    [aux_sym__match_user_token1] = ACTIONS(840),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(209),
    [aux_sym__address_family_token1] = ACTIONS(209),
    [aux_sym__batch_mode_token1] = ACTIONS(209),
    [aux_sym__bind_address_token1] = ACTIONS(209),
    [aux_sym__bind_interface_token1] = ACTIONS(209),
    [aux_sym__canonical_domains_token1] = ACTIONS(209),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(209),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(209),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(209),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(209),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(209),
    [aux_sym__certificate_file_token1] = ACTIONS(209),
    [aux_sym__check_host_ip_token1] = ACTIONS(209),
    [aux_sym__ciphers_token1] = ACTIONS(209),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(209),
    [aux_sym__compression_token1] = ACTIONS(209),
    [aux_sym__connection_attempts_token1] = ACTIONS(209),
    [aux_sym__connect_timeout_token1] = ACTIONS(209),
    [aux_sym__control_master_token1] = ACTIONS(209),
    [aux_sym__control_persist_token1] = ACTIONS(209),
    [aux_sym__control_path_token1] = ACTIONS(209),
    [aux_sym__dynamic_forward_token1] = ACTIONS(209),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(209),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(209),
    [aux_sym__escape_char_token1] = ACTIONS(209),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(209),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(209),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(209),
    [aux_sym__forward_agent_token1] = ACTIONS(209),
    [aux_sym__forward_x11_token1] = ACTIONS(840),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(209),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(209),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(209),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(209),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(209),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(209),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(209),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(209),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(209),
    [aux_sym__host_key_alias_token1] = ACTIONS(209),
    [aux_sym__hostname_token1] = ACTIONS(209),
    [aux_sym__identities_only_token1] = ACTIONS(209),
    [aux_sym__identity_agent_token1] = ACTIONS(209),
    [aux_sym__identity_file_token1] = ACTIONS(209),
    [aux_sym__ignore_unknown_token1] = ACTIONS(209),
    [aux_sym__include_token1] = ACTIONS(209),
    [aux_sym__ipqos_token1] = ACTIONS(209),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(209),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(209),
    [aux_sym__kex_algorithms_token1] = ACTIONS(209),
    [aux_sym__known_hosts_command_token1] = ACTIONS(209),
    [aux_sym__local_command_token1] = ACTIONS(209),
    [aux_sym__local_forward_token1] = ACTIONS(209),
    [aux_sym__log_level_token1] = ACTIONS(209),
    [aux_sym__log_verbose_token1] = ACTIONS(209),
    [aux_sym__macs_token1] = ACTIONS(209),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(209),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(209),
    [aux_sym__password_authentication_token1] = ACTIONS(209),
    [aux_sym__permit_local_command_token1] = ACTIONS(209),
    [aux_sym__permit_remote_open_token1] = ACTIONS(209),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(209),
    [aux_sym__port_token1] = ACTIONS(209),
    [aux_sym__preferred_authentications_token1] = ACTIONS(209),
    [aux_sym__proxy_command_token1] = ACTIONS(209),
    [aux_sym__proxy_jump_token1] = ACTIONS(209),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(209),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(209),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(209),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(209),
    [aux_sym__rekey_limit_token1] = ACTIONS(209),
    [aux_sym__remote_command_token1] = ACTIONS(209),
    [aux_sym__remote_forward_token1] = ACTIONS(209),
    [aux_sym__request_tty_token1] = ACTIONS(209),
    [aux_sym__required_rsa_size_token1] = ACTIONS(209),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(209),
    [aux_sym__security_key_provider_token1] = ACTIONS(209),
    [aux_sym__send_env_token1] = ACTIONS(209),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(209),
    [aux_sym__server_alive_interval_token1] = ACTIONS(209),
    [aux_sym__session_type_token1] = ACTIONS(209),
    [aux_sym__set_env_token1] = ACTIONS(209),
    [aux_sym__stdin_null_token1] = ACTIONS(209),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(209),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(209),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(209),
    [aux_sym__syslog_facility_token1] = ACTIONS(209),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(209),
    [aux_sym__tag_token1] = ACTIONS(209),
    [aux_sym__tunnel_token1] = ACTIONS(840),
    [aux_sym__tunnel_device_token1] = ACTIONS(209),
    [aux_sym__update_host_keys_token1] = ACTIONS(209),
    [aux_sym__use_keychain_token1] = ACTIONS(209),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(209),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(209),
    [aux_sym__visual_host_key_token1] = ACTIONS(209),
    [aux_sym__xauth_location_token1] = ACTIONS(209),
    [sym_comment] = ACTIONS(209),
    [sym__space] = ACTIONS(209),
    [sym__eol] = ACTIONS(209),
  },
  [22] = {
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(842),
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
    [aux_sym__include_token1] = ACTIONS(842),
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
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(842),
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
    [aux_sym__set_env_token1] = ACTIONS(842),
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
    [aux_sym__use_keychain_token1] = ACTIONS(842),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(842),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(842),
    [aux_sym__visual_host_key_token1] = ACTIONS(842),
    [aux_sym__xauth_location_token1] = ACTIONS(842),
    [sym_comment] = ACTIONS(842),
    [sym__space] = ACTIONS(842),
    [sym__eol] = ACTIONS(842),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_host_declaration_token1] = ACTIONS(533),
    [aux_sym_match_declaration_token1] = ACTIONS(531),
    [aux_sym__match_user_token1] = ACTIONS(533),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(531),
    [aux_sym__address_family_token1] = ACTIONS(531),
    [aux_sym__batch_mode_token1] = ACTIONS(531),
    [aux_sym__bind_address_token1] = ACTIONS(531),
    [aux_sym__bind_interface_token1] = ACTIONS(531),
    [aux_sym__canonical_domains_token1] = ACTIONS(531),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(531),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(531),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(531),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(531),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(531),
    [aux_sym__certificate_file_token1] = ACTIONS(531),
    [aux_sym__check_host_ip_token1] = ACTIONS(531),
    [aux_sym__ciphers_token1] = ACTIONS(531),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(531),
    [aux_sym__compression_token1] = ACTIONS(531),
    [aux_sym__connection_attempts_token1] = ACTIONS(531),
    [aux_sym__connect_timeout_token1] = ACTIONS(531),
    [aux_sym__control_master_token1] = ACTIONS(531),
    [aux_sym__control_persist_token1] = ACTIONS(531),
    [aux_sym__control_path_token1] = ACTIONS(531),
    [aux_sym__dynamic_forward_token1] = ACTIONS(531),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(531),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(531),
    [aux_sym__escape_char_token1] = ACTIONS(531),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(531),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(531),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(531),
    [aux_sym__forward_agent_token1] = ACTIONS(531),
    [aux_sym__forward_x11_token1] = ACTIONS(533),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(531),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(531),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(531),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(531),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(531),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(531),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(531),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(531),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(531),
    [aux_sym__host_key_alias_token1] = ACTIONS(531),
    [aux_sym__hostname_token1] = ACTIONS(531),
    [aux_sym__identities_only_token1] = ACTIONS(531),
    [aux_sym__identity_agent_token1] = ACTIONS(531),
    [aux_sym__identity_file_token1] = ACTIONS(531),
    [aux_sym__ignore_unknown_token1] = ACTIONS(531),
    [aux_sym__include_token1] = ACTIONS(531),
    [aux_sym__ipqos_token1] = ACTIONS(531),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(531),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(531),
    [aux_sym__kex_algorithms_token1] = ACTIONS(531),
    [aux_sym__known_hosts_command_token1] = ACTIONS(531),
    [aux_sym__local_command_token1] = ACTIONS(531),
    [aux_sym__local_forward_token1] = ACTIONS(531),
    [aux_sym__log_level_token1] = ACTIONS(531),
    [aux_sym__log_verbose_token1] = ACTIONS(531),
    [aux_sym__macs_token1] = ACTIONS(531),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(531),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(531),
    [aux_sym__password_authentication_token1] = ACTIONS(531),
    [aux_sym__permit_local_command_token1] = ACTIONS(531),
    [aux_sym__permit_remote_open_token1] = ACTIONS(531),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(531),
    [aux_sym__port_token1] = ACTIONS(531),
    [aux_sym__preferred_authentications_token1] = ACTIONS(531),
    [aux_sym__proxy_command_token1] = ACTIONS(531),
    [aux_sym__proxy_jump_token1] = ACTIONS(531),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(531),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(531),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(531),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(531),
    [aux_sym__rekey_limit_token1] = ACTIONS(531),
    [aux_sym__remote_command_token1] = ACTIONS(531),
    [aux_sym__remote_forward_token1] = ACTIONS(531),
    [aux_sym__request_tty_token1] = ACTIONS(531),
    [aux_sym__required_rsa_size_token1] = ACTIONS(531),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(531),
    [aux_sym__security_key_provider_token1] = ACTIONS(531),
    [aux_sym__send_env_token1] = ACTIONS(531),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(531),
    [aux_sym__server_alive_interval_token1] = ACTIONS(531),
    [aux_sym__session_type_token1] = ACTIONS(531),
    [aux_sym__set_env_token1] = ACTIONS(531),
    [aux_sym__stdin_null_token1] = ACTIONS(531),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(531),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(531),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(531),
    [aux_sym__syslog_facility_token1] = ACTIONS(531),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(531),
    [aux_sym__tag_token1] = ACTIONS(531),
    [aux_sym__tunnel_token1] = ACTIONS(533),
    [aux_sym__tunnel_device_token1] = ACTIONS(531),
    [aux_sym__update_host_keys_token1] = ACTIONS(531),
    [aux_sym__use_keychain_token1] = ACTIONS(531),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(531),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(531),
    [aux_sym__visual_host_key_token1] = ACTIONS(531),
    [aux_sym__xauth_location_token1] = ACTIONS(531),
    [sym_comment] = ACTIONS(531),
    [sym__space] = ACTIONS(531),
    [sym__eol] = ACTIONS(531),
  },
  [24] = {
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(846),
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
    [aux_sym__include_token1] = ACTIONS(846),
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
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(846),
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
    [aux_sym__set_env_token1] = ACTIONS(846),
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
    [aux_sym__use_keychain_token1] = ACTIONS(846),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(846),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(846),
    [aux_sym__visual_host_key_token1] = ACTIONS(846),
    [aux_sym__xauth_location_token1] = ACTIONS(846),
    [sym_comment] = ACTIONS(846),
    [sym__space] = ACTIONS(846),
    [sym__eol] = ACTIONS(846),
  },
  [25] = {
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(850),
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
    [aux_sym__include_token1] = ACTIONS(850),
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
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(850),
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
    [aux_sym__set_env_token1] = ACTIONS(850),
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
    [aux_sym__use_keychain_token1] = ACTIONS(850),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(850),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(850),
    [aux_sym__visual_host_key_token1] = ACTIONS(850),
    [aux_sym__xauth_location_token1] = ACTIONS(850),
    [sym_comment] = ACTIONS(850),
    [sym__space] = ACTIONS(850),
    [sym__eol] = ACTIONS(850),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(854),
    [aux_sym_host_declaration_token1] = ACTIONS(856),
    [aux_sym_match_declaration_token1] = ACTIONS(854),
    [aux_sym__match_user_token1] = ACTIONS(856),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(854),
    [aux_sym__address_family_token1] = ACTIONS(854),
    [aux_sym__batch_mode_token1] = ACTIONS(854),
    [aux_sym__bind_address_token1] = ACTIONS(854),
    [aux_sym__bind_interface_token1] = ACTIONS(854),
    [aux_sym__canonical_domains_token1] = ACTIONS(854),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(854),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(854),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(854),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(854),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(854),
    [aux_sym__certificate_file_token1] = ACTIONS(854),
    [aux_sym__check_host_ip_token1] = ACTIONS(854),
    [aux_sym__ciphers_token1] = ACTIONS(854),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(854),
    [aux_sym__compression_token1] = ACTIONS(854),
    [aux_sym__connection_attempts_token1] = ACTIONS(854),
    [aux_sym__connect_timeout_token1] = ACTIONS(854),
    [aux_sym__control_master_token1] = ACTIONS(854),
    [aux_sym__control_persist_token1] = ACTIONS(854),
    [aux_sym__control_path_token1] = ACTIONS(854),
    [aux_sym__dynamic_forward_token1] = ACTIONS(854),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(854),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(854),
    [aux_sym__escape_char_token1] = ACTIONS(854),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(854),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(854),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(854),
    [aux_sym__forward_agent_token1] = ACTIONS(854),
    [aux_sym__forward_x11_token1] = ACTIONS(856),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(854),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(854),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(854),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(854),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(854),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(854),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(854),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(854),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(854),
    [aux_sym__host_key_alias_token1] = ACTIONS(854),
    [aux_sym__hostname_token1] = ACTIONS(854),
    [aux_sym__identities_only_token1] = ACTIONS(854),
    [aux_sym__identity_agent_token1] = ACTIONS(854),
    [aux_sym__identity_file_token1] = ACTIONS(854),
    [aux_sym__ignore_unknown_token1] = ACTIONS(854),
    [aux_sym__include_token1] = ACTIONS(854),
    [aux_sym__ipqos_token1] = ACTIONS(854),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(854),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(854),
    [aux_sym__kex_algorithms_token1] = ACTIONS(854),
    [aux_sym__known_hosts_command_token1] = ACTIONS(854),
    [aux_sym__local_command_token1] = ACTIONS(854),
    [aux_sym__local_forward_token1] = ACTIONS(854),
    [aux_sym__log_level_token1] = ACTIONS(854),
    [aux_sym__log_verbose_token1] = ACTIONS(854),
    [aux_sym__macs_token1] = ACTIONS(854),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(854),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(854),
    [aux_sym__password_authentication_token1] = ACTIONS(854),
    [aux_sym__permit_local_command_token1] = ACTIONS(854),
    [aux_sym__permit_remote_open_token1] = ACTIONS(854),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(854),
    [aux_sym__port_token1] = ACTIONS(854),
    [aux_sym__preferred_authentications_token1] = ACTIONS(854),
    [aux_sym__proxy_command_token1] = ACTIONS(854),
    [aux_sym__proxy_jump_token1] = ACTIONS(854),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(854),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(854),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(854),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(854),
    [aux_sym__rekey_limit_token1] = ACTIONS(854),
    [aux_sym__remote_command_token1] = ACTIONS(854),
    [aux_sym__remote_forward_token1] = ACTIONS(854),
    [aux_sym__request_tty_token1] = ACTIONS(854),
    [aux_sym__required_rsa_size_token1] = ACTIONS(854),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(854),
    [aux_sym__security_key_provider_token1] = ACTIONS(854),
    [aux_sym__send_env_token1] = ACTIONS(854),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(854),
    [aux_sym__server_alive_interval_token1] = ACTIONS(854),
    [aux_sym__session_type_token1] = ACTIONS(854),
    [aux_sym__set_env_token1] = ACTIONS(854),
    [aux_sym__stdin_null_token1] = ACTIONS(854),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(854),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(854),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(854),
    [aux_sym__syslog_facility_token1] = ACTIONS(854),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(854),
    [aux_sym__tag_token1] = ACTIONS(854),
    [aux_sym__tunnel_token1] = ACTIONS(856),
    [aux_sym__tunnel_device_token1] = ACTIONS(854),
    [aux_sym__update_host_keys_token1] = ACTIONS(854),
    [aux_sym__use_keychain_token1] = ACTIONS(854),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(854),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(854),
    [aux_sym__visual_host_key_token1] = ACTIONS(854),
    [aux_sym__xauth_location_token1] = ACTIONS(854),
    [sym_comment] = ACTIONS(854),
    [sym__space] = ACTIONS(854),
    [sym__eol] = ACTIONS(854),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(858),
    [aux_sym_host_declaration_token1] = ACTIONS(860),
    [aux_sym_match_declaration_token1] = ACTIONS(858),
    [aux_sym__match_user_token1] = ACTIONS(860),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(858),
    [aux_sym__address_family_token1] = ACTIONS(858),
    [aux_sym__batch_mode_token1] = ACTIONS(858),
    [aux_sym__bind_address_token1] = ACTIONS(858),
    [aux_sym__bind_interface_token1] = ACTIONS(858),
    [aux_sym__canonical_domains_token1] = ACTIONS(858),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(858),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(858),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(858),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(858),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(858),
    [aux_sym__certificate_file_token1] = ACTIONS(858),
    [aux_sym__check_host_ip_token1] = ACTIONS(858),
    [aux_sym__ciphers_token1] = ACTIONS(858),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(858),
    [aux_sym__compression_token1] = ACTIONS(858),
    [aux_sym__connection_attempts_token1] = ACTIONS(858),
    [aux_sym__connect_timeout_token1] = ACTIONS(858),
    [aux_sym__control_master_token1] = ACTIONS(858),
    [aux_sym__control_persist_token1] = ACTIONS(858),
    [aux_sym__control_path_token1] = ACTIONS(858),
    [aux_sym__dynamic_forward_token1] = ACTIONS(858),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(858),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(858),
    [aux_sym__escape_char_token1] = ACTIONS(858),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(858),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(858),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(858),
    [aux_sym__forward_agent_token1] = ACTIONS(858),
    [aux_sym__forward_x11_token1] = ACTIONS(860),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(858),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(858),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(858),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(858),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(858),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(858),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(858),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(858),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(858),
    [aux_sym__host_key_alias_token1] = ACTIONS(858),
    [aux_sym__hostname_token1] = ACTIONS(858),
    [aux_sym__identities_only_token1] = ACTIONS(858),
    [aux_sym__identity_agent_token1] = ACTIONS(858),
    [aux_sym__identity_file_token1] = ACTIONS(858),
    [aux_sym__ignore_unknown_token1] = ACTIONS(858),
    [aux_sym__include_token1] = ACTIONS(858),
    [aux_sym__ipqos_token1] = ACTIONS(858),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(858),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(858),
    [aux_sym__kex_algorithms_token1] = ACTIONS(858),
    [aux_sym__known_hosts_command_token1] = ACTIONS(858),
    [aux_sym__local_command_token1] = ACTIONS(858),
    [aux_sym__local_forward_token1] = ACTIONS(858),
    [aux_sym__log_level_token1] = ACTIONS(858),
    [aux_sym__log_verbose_token1] = ACTIONS(858),
    [aux_sym__macs_token1] = ACTIONS(858),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(858),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(858),
    [aux_sym__password_authentication_token1] = ACTIONS(858),
    [aux_sym__permit_local_command_token1] = ACTIONS(858),
    [aux_sym__permit_remote_open_token1] = ACTIONS(858),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(858),
    [aux_sym__port_token1] = ACTIONS(858),
    [aux_sym__preferred_authentications_token1] = ACTIONS(858),
    [aux_sym__proxy_command_token1] = ACTIONS(858),
    [aux_sym__proxy_jump_token1] = ACTIONS(858),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(858),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(858),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(858),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(858),
    [aux_sym__rekey_limit_token1] = ACTIONS(858),
    [aux_sym__remote_command_token1] = ACTIONS(858),
    [aux_sym__remote_forward_token1] = ACTIONS(858),
    [aux_sym__request_tty_token1] = ACTIONS(858),
    [aux_sym__required_rsa_size_token1] = ACTIONS(858),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(858),
    [aux_sym__security_key_provider_token1] = ACTIONS(858),
    [aux_sym__send_env_token1] = ACTIONS(858),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(858),
    [aux_sym__server_alive_interval_token1] = ACTIONS(858),
    [aux_sym__session_type_token1] = ACTIONS(858),
    [aux_sym__set_env_token1] = ACTIONS(858),
    [aux_sym__stdin_null_token1] = ACTIONS(858),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(858),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(858),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(858),
    [aux_sym__syslog_facility_token1] = ACTIONS(858),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(858),
    [aux_sym__tag_token1] = ACTIONS(858),
    [aux_sym__tunnel_token1] = ACTIONS(860),
    [aux_sym__tunnel_device_token1] = ACTIONS(858),
    [aux_sym__update_host_keys_token1] = ACTIONS(858),
    [aux_sym__use_keychain_token1] = ACTIONS(858),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(858),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(858),
    [aux_sym__visual_host_key_token1] = ACTIONS(858),
    [aux_sym__xauth_location_token1] = ACTIONS(858),
    [sym_comment] = ACTIONS(858),
    [sym__space] = ACTIONS(858),
    [sym__eol] = ACTIONS(858),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(862),
    [aux_sym_host_declaration_token1] = ACTIONS(864),
    [aux_sym_match_declaration_token1] = ACTIONS(862),
    [aux_sym__match_user_token1] = ACTIONS(864),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(862),
    [aux_sym__address_family_token1] = ACTIONS(862),
    [aux_sym__batch_mode_token1] = ACTIONS(862),
    [aux_sym__bind_address_token1] = ACTIONS(862),
    [aux_sym__bind_interface_token1] = ACTIONS(862),
    [aux_sym__canonical_domains_token1] = ACTIONS(862),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(862),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(862),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(862),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(862),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(862),
    [aux_sym__certificate_file_token1] = ACTIONS(862),
    [aux_sym__check_host_ip_token1] = ACTIONS(862),
    [aux_sym__ciphers_token1] = ACTIONS(862),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(862),
    [aux_sym__compression_token1] = ACTIONS(862),
    [aux_sym__connection_attempts_token1] = ACTIONS(862),
    [aux_sym__connect_timeout_token1] = ACTIONS(862),
    [aux_sym__control_master_token1] = ACTIONS(862),
    [aux_sym__control_persist_token1] = ACTIONS(862),
    [aux_sym__control_path_token1] = ACTIONS(862),
    [aux_sym__dynamic_forward_token1] = ACTIONS(862),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(862),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(862),
    [aux_sym__escape_char_token1] = ACTIONS(862),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(862),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(862),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(862),
    [aux_sym__forward_agent_token1] = ACTIONS(862),
    [aux_sym__forward_x11_token1] = ACTIONS(864),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(862),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(862),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(862),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(862),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(862),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(862),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(862),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(862),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(862),
    [aux_sym__host_key_alias_token1] = ACTIONS(862),
    [aux_sym__hostname_token1] = ACTIONS(862),
    [aux_sym__identities_only_token1] = ACTIONS(862),
    [aux_sym__identity_agent_token1] = ACTIONS(862),
    [aux_sym__identity_file_token1] = ACTIONS(862),
    [aux_sym__ignore_unknown_token1] = ACTIONS(862),
    [aux_sym__include_token1] = ACTIONS(862),
    [aux_sym__ipqos_token1] = ACTIONS(862),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(862),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(862),
    [aux_sym__kex_algorithms_token1] = ACTIONS(862),
    [aux_sym__known_hosts_command_token1] = ACTIONS(862),
    [aux_sym__local_command_token1] = ACTIONS(862),
    [aux_sym__local_forward_token1] = ACTIONS(862),
    [aux_sym__log_level_token1] = ACTIONS(862),
    [aux_sym__log_verbose_token1] = ACTIONS(862),
    [aux_sym__macs_token1] = ACTIONS(862),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(862),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(862),
    [aux_sym__password_authentication_token1] = ACTIONS(862),
    [aux_sym__permit_local_command_token1] = ACTIONS(862),
    [aux_sym__permit_remote_open_token1] = ACTIONS(862),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(862),
    [aux_sym__port_token1] = ACTIONS(862),
    [aux_sym__preferred_authentications_token1] = ACTIONS(862),
    [aux_sym__proxy_command_token1] = ACTIONS(862),
    [aux_sym__proxy_jump_token1] = ACTIONS(862),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(862),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(862),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(862),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(862),
    [aux_sym__rekey_limit_token1] = ACTIONS(862),
    [aux_sym__remote_command_token1] = ACTIONS(862),
    [aux_sym__remote_forward_token1] = ACTIONS(862),
    [aux_sym__request_tty_token1] = ACTIONS(862),
    [aux_sym__required_rsa_size_token1] = ACTIONS(862),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(862),
    [aux_sym__security_key_provider_token1] = ACTIONS(862),
    [aux_sym__send_env_token1] = ACTIONS(862),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(862),
    [aux_sym__server_alive_interval_token1] = ACTIONS(862),
    [aux_sym__session_type_token1] = ACTIONS(862),
    [aux_sym__set_env_token1] = ACTIONS(862),
    [aux_sym__stdin_null_token1] = ACTIONS(862),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(862),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(862),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(862),
    [aux_sym__syslog_facility_token1] = ACTIONS(862),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(862),
    [aux_sym__tag_token1] = ACTIONS(862),
    [aux_sym__tunnel_token1] = ACTIONS(864),
    [aux_sym__tunnel_device_token1] = ACTIONS(862),
    [aux_sym__update_host_keys_token1] = ACTIONS(862),
    [aux_sym__use_keychain_token1] = ACTIONS(862),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(862),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(862),
    [aux_sym__visual_host_key_token1] = ACTIONS(862),
    [aux_sym__xauth_location_token1] = ACTIONS(862),
    [sym_comment] = ACTIONS(862),
    [sym__space] = ACTIONS(862),
    [sym__eol] = ACTIONS(862),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(866),
    [aux_sym_host_declaration_token1] = ACTIONS(868),
    [aux_sym_match_declaration_token1] = ACTIONS(866),
    [aux_sym__match_user_token1] = ACTIONS(868),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(866),
    [aux_sym__address_family_token1] = ACTIONS(866),
    [aux_sym__batch_mode_token1] = ACTIONS(866),
    [aux_sym__bind_address_token1] = ACTIONS(866),
    [aux_sym__bind_interface_token1] = ACTIONS(866),
    [aux_sym__canonical_domains_token1] = ACTIONS(866),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(866),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(866),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(866),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(866),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(866),
    [aux_sym__certificate_file_token1] = ACTIONS(866),
    [aux_sym__check_host_ip_token1] = ACTIONS(866),
    [aux_sym__ciphers_token1] = ACTIONS(866),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(866),
    [aux_sym__compression_token1] = ACTIONS(866),
    [aux_sym__connection_attempts_token1] = ACTIONS(866),
    [aux_sym__connect_timeout_token1] = ACTIONS(866),
    [aux_sym__control_master_token1] = ACTIONS(866),
    [aux_sym__control_persist_token1] = ACTIONS(866),
    [aux_sym__control_path_token1] = ACTIONS(866),
    [aux_sym__dynamic_forward_token1] = ACTIONS(866),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(866),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(866),
    [aux_sym__escape_char_token1] = ACTIONS(866),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(866),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(866),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(866),
    [aux_sym__forward_agent_token1] = ACTIONS(866),
    [aux_sym__forward_x11_token1] = ACTIONS(868),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(866),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(866),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(866),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(866),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(866),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(866),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(866),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(866),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(866),
    [aux_sym__host_key_alias_token1] = ACTIONS(866),
    [aux_sym__hostname_token1] = ACTIONS(866),
    [aux_sym__identities_only_token1] = ACTIONS(866),
    [aux_sym__identity_agent_token1] = ACTIONS(866),
    [aux_sym__identity_file_token1] = ACTIONS(866),
    [aux_sym__ignore_unknown_token1] = ACTIONS(866),
    [aux_sym__include_token1] = ACTIONS(866),
    [aux_sym__ipqos_token1] = ACTIONS(866),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(866),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(866),
    [aux_sym__kex_algorithms_token1] = ACTIONS(866),
    [aux_sym__known_hosts_command_token1] = ACTIONS(866),
    [aux_sym__local_command_token1] = ACTIONS(866),
    [aux_sym__local_forward_token1] = ACTIONS(866),
    [aux_sym__log_level_token1] = ACTIONS(866),
    [aux_sym__log_verbose_token1] = ACTIONS(866),
    [aux_sym__macs_token1] = ACTIONS(866),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(866),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(866),
    [aux_sym__password_authentication_token1] = ACTIONS(866),
    [aux_sym__permit_local_command_token1] = ACTIONS(866),
    [aux_sym__permit_remote_open_token1] = ACTIONS(866),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(866),
    [aux_sym__port_token1] = ACTIONS(866),
    [aux_sym__preferred_authentications_token1] = ACTIONS(866),
    [aux_sym__proxy_command_token1] = ACTIONS(866),
    [aux_sym__proxy_jump_token1] = ACTIONS(866),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(866),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(866),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(866),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(866),
    [aux_sym__rekey_limit_token1] = ACTIONS(866),
    [aux_sym__remote_command_token1] = ACTIONS(866),
    [aux_sym__remote_forward_token1] = ACTIONS(866),
    [aux_sym__request_tty_token1] = ACTIONS(866),
    [aux_sym__required_rsa_size_token1] = ACTIONS(866),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(866),
    [aux_sym__security_key_provider_token1] = ACTIONS(866),
    [aux_sym__send_env_token1] = ACTIONS(866),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(866),
    [aux_sym__server_alive_interval_token1] = ACTIONS(866),
    [aux_sym__session_type_token1] = ACTIONS(866),
    [aux_sym__set_env_token1] = ACTIONS(866),
    [aux_sym__stdin_null_token1] = ACTIONS(866),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(866),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(866),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(866),
    [aux_sym__syslog_facility_token1] = ACTIONS(866),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(866),
    [aux_sym__tag_token1] = ACTIONS(866),
    [aux_sym__tunnel_token1] = ACTIONS(868),
    [aux_sym__tunnel_device_token1] = ACTIONS(866),
    [aux_sym__update_host_keys_token1] = ACTIONS(866),
    [aux_sym__use_keychain_token1] = ACTIONS(866),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(866),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(866),
    [aux_sym__visual_host_key_token1] = ACTIONS(866),
    [aux_sym__xauth_location_token1] = ACTIONS(866),
    [sym_comment] = ACTIONS(866),
    [sym__space] = ACTIONS(866),
    [sym__eol] = ACTIONS(866),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(870),
    [aux_sym_host_declaration_token1] = ACTIONS(872),
    [aux_sym_match_declaration_token1] = ACTIONS(870),
    [aux_sym__match_user_token1] = ACTIONS(872),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(870),
    [aux_sym__address_family_token1] = ACTIONS(870),
    [aux_sym__batch_mode_token1] = ACTIONS(870),
    [aux_sym__bind_address_token1] = ACTIONS(870),
    [aux_sym__bind_interface_token1] = ACTIONS(870),
    [aux_sym__canonical_domains_token1] = ACTIONS(870),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(870),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(870),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(870),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(870),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(870),
    [aux_sym__certificate_file_token1] = ACTIONS(870),
    [aux_sym__check_host_ip_token1] = ACTIONS(870),
    [aux_sym__ciphers_token1] = ACTIONS(870),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(870),
    [aux_sym__compression_token1] = ACTIONS(870),
    [aux_sym__connection_attempts_token1] = ACTIONS(870),
    [aux_sym__connect_timeout_token1] = ACTIONS(870),
    [aux_sym__control_master_token1] = ACTIONS(870),
    [aux_sym__control_persist_token1] = ACTIONS(870),
    [aux_sym__control_path_token1] = ACTIONS(870),
    [aux_sym__dynamic_forward_token1] = ACTIONS(870),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(870),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(870),
    [aux_sym__escape_char_token1] = ACTIONS(870),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(870),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(870),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(870),
    [aux_sym__forward_agent_token1] = ACTIONS(870),
    [aux_sym__forward_x11_token1] = ACTIONS(872),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(870),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(870),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(870),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(870),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(870),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(870),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(870),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(870),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(870),
    [aux_sym__host_key_alias_token1] = ACTIONS(870),
    [aux_sym__hostname_token1] = ACTIONS(870),
    [aux_sym__identities_only_token1] = ACTIONS(870),
    [aux_sym__identity_agent_token1] = ACTIONS(870),
    [aux_sym__identity_file_token1] = ACTIONS(870),
    [aux_sym__ignore_unknown_token1] = ACTIONS(870),
    [aux_sym__include_token1] = ACTIONS(870),
    [aux_sym__ipqos_token1] = ACTIONS(870),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(870),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(870),
    [aux_sym__kex_algorithms_token1] = ACTIONS(870),
    [aux_sym__known_hosts_command_token1] = ACTIONS(870),
    [aux_sym__local_command_token1] = ACTIONS(870),
    [aux_sym__local_forward_token1] = ACTIONS(870),
    [aux_sym__log_level_token1] = ACTIONS(870),
    [aux_sym__log_verbose_token1] = ACTIONS(870),
    [aux_sym__macs_token1] = ACTIONS(870),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(870),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(870),
    [aux_sym__password_authentication_token1] = ACTIONS(870),
    [aux_sym__permit_local_command_token1] = ACTIONS(870),
    [aux_sym__permit_remote_open_token1] = ACTIONS(870),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(870),
    [aux_sym__port_token1] = ACTIONS(870),
    [aux_sym__preferred_authentications_token1] = ACTIONS(870),
    [aux_sym__proxy_command_token1] = ACTIONS(870),
    [aux_sym__proxy_jump_token1] = ACTIONS(870),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(870),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(870),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(870),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(870),
    [aux_sym__rekey_limit_token1] = ACTIONS(870),
    [aux_sym__remote_command_token1] = ACTIONS(870),
    [aux_sym__remote_forward_token1] = ACTIONS(870),
    [aux_sym__request_tty_token1] = ACTIONS(870),
    [aux_sym__required_rsa_size_token1] = ACTIONS(870),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(870),
    [aux_sym__security_key_provider_token1] = ACTIONS(870),
    [aux_sym__send_env_token1] = ACTIONS(870),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(870),
    [aux_sym__server_alive_interval_token1] = ACTIONS(870),
    [aux_sym__session_type_token1] = ACTIONS(870),
    [aux_sym__set_env_token1] = ACTIONS(870),
    [aux_sym__stdin_null_token1] = ACTIONS(870),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(870),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(870),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(870),
    [aux_sym__syslog_facility_token1] = ACTIONS(870),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(870),
    [aux_sym__tag_token1] = ACTIONS(870),
    [aux_sym__tunnel_token1] = ACTIONS(872),
    [aux_sym__tunnel_device_token1] = ACTIONS(870),
    [aux_sym__update_host_keys_token1] = ACTIONS(870),
    [aux_sym__use_keychain_token1] = ACTIONS(870),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(870),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(870),
    [aux_sym__visual_host_key_token1] = ACTIONS(870),
    [aux_sym__xauth_location_token1] = ACTIONS(870),
    [sym_comment] = ACTIONS(870),
    [sym__space] = ACTIONS(870),
    [sym__eol] = ACTIONS(870),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [aux_sym_host_declaration_token1] = ACTIONS(513),
    [aux_sym_match_declaration_token1] = ACTIONS(511),
    [aux_sym__match_user_token1] = ACTIONS(513),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(511),
    [aux_sym__address_family_token1] = ACTIONS(511),
    [aux_sym__batch_mode_token1] = ACTIONS(511),
    [aux_sym__bind_address_token1] = ACTIONS(511),
    [aux_sym__bind_interface_token1] = ACTIONS(511),
    [aux_sym__canonical_domains_token1] = ACTIONS(511),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(511),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(511),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(511),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(511),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(511),
    [aux_sym__certificate_file_token1] = ACTIONS(511),
    [aux_sym__check_host_ip_token1] = ACTIONS(511),
    [aux_sym__ciphers_token1] = ACTIONS(511),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(511),
    [aux_sym__compression_token1] = ACTIONS(511),
    [aux_sym__connection_attempts_token1] = ACTIONS(511),
    [aux_sym__connect_timeout_token1] = ACTIONS(511),
    [aux_sym__control_master_token1] = ACTIONS(511),
    [aux_sym__control_persist_token1] = ACTIONS(511),
    [aux_sym__control_path_token1] = ACTIONS(511),
    [aux_sym__dynamic_forward_token1] = ACTIONS(511),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(511),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(511),
    [aux_sym__escape_char_token1] = ACTIONS(511),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(511),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(511),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(511),
    [aux_sym__forward_agent_token1] = ACTIONS(511),
    [aux_sym__forward_x11_token1] = ACTIONS(513),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(511),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(511),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(511),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(511),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(511),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(511),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(511),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(511),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(511),
    [aux_sym__host_key_alias_token1] = ACTIONS(511),
    [aux_sym__hostname_token1] = ACTIONS(511),
    [aux_sym__identities_only_token1] = ACTIONS(511),
    [aux_sym__identity_agent_token1] = ACTIONS(511),
    [aux_sym__identity_file_token1] = ACTIONS(511),
    [aux_sym__ignore_unknown_token1] = ACTIONS(511),
    [aux_sym__include_token1] = ACTIONS(511),
    [aux_sym__ipqos_token1] = ACTIONS(511),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(511),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(511),
    [aux_sym__kex_algorithms_token1] = ACTIONS(511),
    [aux_sym__known_hosts_command_token1] = ACTIONS(511),
    [aux_sym__local_command_token1] = ACTIONS(511),
    [aux_sym__local_forward_token1] = ACTIONS(511),
    [aux_sym__log_level_token1] = ACTIONS(511),
    [aux_sym__log_verbose_token1] = ACTIONS(511),
    [aux_sym__macs_token1] = ACTIONS(511),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(511),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(511),
    [aux_sym__password_authentication_token1] = ACTIONS(511),
    [aux_sym__permit_local_command_token1] = ACTIONS(511),
    [aux_sym__permit_remote_open_token1] = ACTIONS(511),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(511),
    [aux_sym__port_token1] = ACTIONS(511),
    [aux_sym__preferred_authentications_token1] = ACTIONS(511),
    [aux_sym__proxy_command_token1] = ACTIONS(511),
    [aux_sym__proxy_jump_token1] = ACTIONS(511),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(511),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(511),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(511),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(511),
    [aux_sym__rekey_limit_token1] = ACTIONS(511),
    [aux_sym__remote_command_token1] = ACTIONS(511),
    [aux_sym__remote_forward_token1] = ACTIONS(511),
    [aux_sym__request_tty_token1] = ACTIONS(511),
    [aux_sym__required_rsa_size_token1] = ACTIONS(511),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(511),
    [aux_sym__security_key_provider_token1] = ACTIONS(511),
    [aux_sym__send_env_token1] = ACTIONS(511),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(511),
    [aux_sym__server_alive_interval_token1] = ACTIONS(511),
    [aux_sym__session_type_token1] = ACTIONS(511),
    [aux_sym__set_env_token1] = ACTIONS(511),
    [aux_sym__stdin_null_token1] = ACTIONS(511),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(511),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(511),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(511),
    [aux_sym__syslog_facility_token1] = ACTIONS(511),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(511),
    [aux_sym__tag_token1] = ACTIONS(511),
    [aux_sym__tunnel_token1] = ACTIONS(513),
    [aux_sym__tunnel_device_token1] = ACTIONS(511),
    [aux_sym__update_host_keys_token1] = ACTIONS(511),
    [aux_sym__use_keychain_token1] = ACTIONS(511),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(511),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(511),
    [aux_sym__visual_host_key_token1] = ACTIONS(511),
    [aux_sym__xauth_location_token1] = ACTIONS(511),
    [sym_comment] = ACTIONS(511),
    [sym__space] = ACTIONS(511),
    [sym__eol] = ACTIONS(511),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [aux_sym_host_declaration_token1] = ACTIONS(525),
    [aux_sym_match_declaration_token1] = ACTIONS(523),
    [aux_sym__match_user_token1] = ACTIONS(525),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(523),
    [aux_sym__address_family_token1] = ACTIONS(523),
    [aux_sym__batch_mode_token1] = ACTIONS(523),
    [aux_sym__bind_address_token1] = ACTIONS(523),
    [aux_sym__bind_interface_token1] = ACTIONS(523),
    [aux_sym__canonical_domains_token1] = ACTIONS(523),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(523),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(523),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(523),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(523),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(523),
    [aux_sym__certificate_file_token1] = ACTIONS(523),
    [aux_sym__check_host_ip_token1] = ACTIONS(523),
    [aux_sym__ciphers_token1] = ACTIONS(523),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(523),
    [aux_sym__compression_token1] = ACTIONS(523),
    [aux_sym__connection_attempts_token1] = ACTIONS(523),
    [aux_sym__connect_timeout_token1] = ACTIONS(523),
    [aux_sym__control_master_token1] = ACTIONS(523),
    [aux_sym__control_persist_token1] = ACTIONS(523),
    [aux_sym__control_path_token1] = ACTIONS(523),
    [aux_sym__dynamic_forward_token1] = ACTIONS(523),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(523),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(523),
    [aux_sym__escape_char_token1] = ACTIONS(523),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(523),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(523),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(523),
    [aux_sym__forward_agent_token1] = ACTIONS(523),
    [aux_sym__forward_x11_token1] = ACTIONS(525),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(523),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(523),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(523),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(523),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(523),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(523),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(523),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(523),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(523),
    [aux_sym__host_key_alias_token1] = ACTIONS(523),
    [aux_sym__hostname_token1] = ACTIONS(523),
    [aux_sym__identities_only_token1] = ACTIONS(523),
    [aux_sym__identity_agent_token1] = ACTIONS(523),
    [aux_sym__identity_file_token1] = ACTIONS(523),
    [aux_sym__ignore_unknown_token1] = ACTIONS(523),
    [aux_sym__include_token1] = ACTIONS(523),
    [aux_sym__ipqos_token1] = ACTIONS(523),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(523),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(523),
    [aux_sym__kex_algorithms_token1] = ACTIONS(523),
    [aux_sym__known_hosts_command_token1] = ACTIONS(523),
    [aux_sym__local_command_token1] = ACTIONS(523),
    [aux_sym__local_forward_token1] = ACTIONS(523),
    [aux_sym__log_level_token1] = ACTIONS(523),
    [aux_sym__log_verbose_token1] = ACTIONS(523),
    [aux_sym__macs_token1] = ACTIONS(523),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(523),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(523),
    [aux_sym__password_authentication_token1] = ACTIONS(523),
    [aux_sym__permit_local_command_token1] = ACTIONS(523),
    [aux_sym__permit_remote_open_token1] = ACTIONS(523),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(523),
    [aux_sym__port_token1] = ACTIONS(523),
    [aux_sym__preferred_authentications_token1] = ACTIONS(523),
    [aux_sym__proxy_command_token1] = ACTIONS(523),
    [aux_sym__proxy_jump_token1] = ACTIONS(523),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(523),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(523),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(523),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(523),
    [aux_sym__rekey_limit_token1] = ACTIONS(523),
    [aux_sym__remote_command_token1] = ACTIONS(523),
    [aux_sym__remote_forward_token1] = ACTIONS(523),
    [aux_sym__request_tty_token1] = ACTIONS(523),
    [aux_sym__required_rsa_size_token1] = ACTIONS(523),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(523),
    [aux_sym__security_key_provider_token1] = ACTIONS(523),
    [aux_sym__send_env_token1] = ACTIONS(523),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(523),
    [aux_sym__server_alive_interval_token1] = ACTIONS(523),
    [aux_sym__session_type_token1] = ACTIONS(523),
    [aux_sym__set_env_token1] = ACTIONS(523),
    [aux_sym__stdin_null_token1] = ACTIONS(523),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(523),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(523),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(523),
    [aux_sym__syslog_facility_token1] = ACTIONS(523),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(523),
    [aux_sym__tag_token1] = ACTIONS(523),
    [aux_sym__tunnel_token1] = ACTIONS(525),
    [aux_sym__tunnel_device_token1] = ACTIONS(523),
    [aux_sym__update_host_keys_token1] = ACTIONS(523),
    [aux_sym__use_keychain_token1] = ACTIONS(523),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(523),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(523),
    [aux_sym__visual_host_key_token1] = ACTIONS(523),
    [aux_sym__xauth_location_token1] = ACTIONS(523),
    [sym_comment] = ACTIONS(523),
    [sym__space] = ACTIONS(523),
    [sym__eol] = ACTIONS(523),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(874),
    [aux_sym_host_declaration_token1] = ACTIONS(876),
    [aux_sym_match_declaration_token1] = ACTIONS(874),
    [aux_sym__match_user_token1] = ACTIONS(876),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(874),
    [aux_sym__address_family_token1] = ACTIONS(874),
    [aux_sym__batch_mode_token1] = ACTIONS(874),
    [aux_sym__bind_address_token1] = ACTIONS(874),
    [aux_sym__bind_interface_token1] = ACTIONS(874),
    [aux_sym__canonical_domains_token1] = ACTIONS(874),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(874),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(874),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(874),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(874),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(874),
    [aux_sym__certificate_file_token1] = ACTIONS(874),
    [aux_sym__check_host_ip_token1] = ACTIONS(874),
    [aux_sym__ciphers_token1] = ACTIONS(874),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(874),
    [aux_sym__compression_token1] = ACTIONS(874),
    [aux_sym__connection_attempts_token1] = ACTIONS(874),
    [aux_sym__connect_timeout_token1] = ACTIONS(874),
    [aux_sym__control_master_token1] = ACTIONS(874),
    [aux_sym__control_persist_token1] = ACTIONS(874),
    [aux_sym__control_path_token1] = ACTIONS(874),
    [aux_sym__dynamic_forward_token1] = ACTIONS(874),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(874),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(874),
    [aux_sym__escape_char_token1] = ACTIONS(874),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(874),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(874),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(874),
    [aux_sym__forward_agent_token1] = ACTIONS(874),
    [aux_sym__forward_x11_token1] = ACTIONS(876),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(874),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(874),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(874),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(874),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(874),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(874),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(874),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(874),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(874),
    [aux_sym__host_key_alias_token1] = ACTIONS(874),
    [aux_sym__hostname_token1] = ACTIONS(874),
    [aux_sym__identities_only_token1] = ACTIONS(874),
    [aux_sym__identity_agent_token1] = ACTIONS(874),
    [aux_sym__identity_file_token1] = ACTIONS(874),
    [aux_sym__ignore_unknown_token1] = ACTIONS(874),
    [aux_sym__include_token1] = ACTIONS(874),
    [aux_sym__ipqos_token1] = ACTIONS(874),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(874),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(874),
    [aux_sym__kex_algorithms_token1] = ACTIONS(874),
    [aux_sym__known_hosts_command_token1] = ACTIONS(874),
    [aux_sym__local_command_token1] = ACTIONS(874),
    [aux_sym__local_forward_token1] = ACTIONS(874),
    [aux_sym__log_level_token1] = ACTIONS(874),
    [aux_sym__log_verbose_token1] = ACTIONS(874),
    [aux_sym__macs_token1] = ACTIONS(874),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(874),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(874),
    [aux_sym__password_authentication_token1] = ACTIONS(874),
    [aux_sym__permit_local_command_token1] = ACTIONS(874),
    [aux_sym__permit_remote_open_token1] = ACTIONS(874),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(874),
    [aux_sym__port_token1] = ACTIONS(874),
    [aux_sym__preferred_authentications_token1] = ACTIONS(874),
    [aux_sym__proxy_command_token1] = ACTIONS(874),
    [aux_sym__proxy_jump_token1] = ACTIONS(874),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(874),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(874),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(874),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(874),
    [aux_sym__rekey_limit_token1] = ACTIONS(874),
    [aux_sym__remote_command_token1] = ACTIONS(874),
    [aux_sym__remote_forward_token1] = ACTIONS(874),
    [aux_sym__request_tty_token1] = ACTIONS(874),
    [aux_sym__required_rsa_size_token1] = ACTIONS(874),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(874),
    [aux_sym__security_key_provider_token1] = ACTIONS(874),
    [aux_sym__send_env_token1] = ACTIONS(874),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(874),
    [aux_sym__server_alive_interval_token1] = ACTIONS(874),
    [aux_sym__session_type_token1] = ACTIONS(874),
    [aux_sym__set_env_token1] = ACTIONS(874),
    [aux_sym__stdin_null_token1] = ACTIONS(874),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(874),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(874),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(874),
    [aux_sym__syslog_facility_token1] = ACTIONS(874),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(874),
    [aux_sym__tag_token1] = ACTIONS(874),
    [aux_sym__tunnel_token1] = ACTIONS(876),
    [aux_sym__tunnel_device_token1] = ACTIONS(874),
    [aux_sym__update_host_keys_token1] = ACTIONS(874),
    [aux_sym__use_keychain_token1] = ACTIONS(874),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(874),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(874),
    [aux_sym__visual_host_key_token1] = ACTIONS(874),
    [aux_sym__xauth_location_token1] = ACTIONS(874),
    [sym_comment] = ACTIONS(874),
    [sym__space] = ACTIONS(874),
    [sym__eol] = ACTIONS(874),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(878),
    [aux_sym_host_declaration_token1] = ACTIONS(880),
    [aux_sym_match_declaration_token1] = ACTIONS(878),
    [aux_sym__match_user_token1] = ACTIONS(880),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(878),
    [aux_sym__address_family_token1] = ACTIONS(878),
    [aux_sym__batch_mode_token1] = ACTIONS(878),
    [aux_sym__bind_address_token1] = ACTIONS(878),
    [aux_sym__bind_interface_token1] = ACTIONS(878),
    [aux_sym__canonical_domains_token1] = ACTIONS(878),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(878),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(878),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(878),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(878),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(878),
    [aux_sym__certificate_file_token1] = ACTIONS(878),
    [aux_sym__check_host_ip_token1] = ACTIONS(878),
    [aux_sym__ciphers_token1] = ACTIONS(878),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(878),
    [aux_sym__compression_token1] = ACTIONS(878),
    [aux_sym__connection_attempts_token1] = ACTIONS(878),
    [aux_sym__connect_timeout_token1] = ACTIONS(878),
    [aux_sym__control_master_token1] = ACTIONS(878),
    [aux_sym__control_persist_token1] = ACTIONS(878),
    [aux_sym__control_path_token1] = ACTIONS(878),
    [aux_sym__dynamic_forward_token1] = ACTIONS(878),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(878),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(878),
    [aux_sym__escape_char_token1] = ACTIONS(878),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(878),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(878),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(878),
    [aux_sym__forward_agent_token1] = ACTIONS(878),
    [aux_sym__forward_x11_token1] = ACTIONS(880),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(878),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(878),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(878),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(878),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(878),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(878),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(878),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(878),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(878),
    [aux_sym__host_key_alias_token1] = ACTIONS(878),
    [aux_sym__hostname_token1] = ACTIONS(878),
    [aux_sym__identities_only_token1] = ACTIONS(878),
    [aux_sym__identity_agent_token1] = ACTIONS(878),
    [aux_sym__identity_file_token1] = ACTIONS(878),
    [aux_sym__ignore_unknown_token1] = ACTIONS(878),
    [aux_sym__include_token1] = ACTIONS(878),
    [aux_sym__ipqos_token1] = ACTIONS(878),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(878),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(878),
    [aux_sym__kex_algorithms_token1] = ACTIONS(878),
    [aux_sym__known_hosts_command_token1] = ACTIONS(878),
    [aux_sym__local_command_token1] = ACTIONS(878),
    [aux_sym__local_forward_token1] = ACTIONS(878),
    [aux_sym__log_level_token1] = ACTIONS(878),
    [aux_sym__log_verbose_token1] = ACTIONS(878),
    [aux_sym__macs_token1] = ACTIONS(878),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(878),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(878),
    [aux_sym__password_authentication_token1] = ACTIONS(878),
    [aux_sym__permit_local_command_token1] = ACTIONS(878),
    [aux_sym__permit_remote_open_token1] = ACTIONS(878),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(878),
    [aux_sym__port_token1] = ACTIONS(878),
    [aux_sym__preferred_authentications_token1] = ACTIONS(878),
    [aux_sym__proxy_command_token1] = ACTIONS(878),
    [aux_sym__proxy_jump_token1] = ACTIONS(878),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(878),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(878),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(878),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(878),
    [aux_sym__rekey_limit_token1] = ACTIONS(878),
    [aux_sym__remote_command_token1] = ACTIONS(878),
    [aux_sym__remote_forward_token1] = ACTIONS(878),
    [aux_sym__request_tty_token1] = ACTIONS(878),
    [aux_sym__required_rsa_size_token1] = ACTIONS(878),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(878),
    [aux_sym__security_key_provider_token1] = ACTIONS(878),
    [aux_sym__send_env_token1] = ACTIONS(878),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(878),
    [aux_sym__server_alive_interval_token1] = ACTIONS(878),
    [aux_sym__session_type_token1] = ACTIONS(878),
    [aux_sym__set_env_token1] = ACTIONS(878),
    [aux_sym__stdin_null_token1] = ACTIONS(878),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(878),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(878),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(878),
    [aux_sym__syslog_facility_token1] = ACTIONS(878),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(878),
    [aux_sym__tag_token1] = ACTIONS(878),
    [aux_sym__tunnel_token1] = ACTIONS(880),
    [aux_sym__tunnel_device_token1] = ACTIONS(878),
    [aux_sym__update_host_keys_token1] = ACTIONS(878),
    [aux_sym__use_keychain_token1] = ACTIONS(878),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(878),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(878),
    [aux_sym__visual_host_key_token1] = ACTIONS(878),
    [aux_sym__xauth_location_token1] = ACTIONS(878),
    [sym_comment] = ACTIONS(878),
    [sym__space] = ACTIONS(878),
    [sym__eol] = ACTIONS(878),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(882),
    [aux_sym_host_declaration_token1] = ACTIONS(884),
    [aux_sym_match_declaration_token1] = ACTIONS(882),
    [aux_sym__match_user_token1] = ACTIONS(884),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(882),
    [aux_sym__address_family_token1] = ACTIONS(882),
    [aux_sym__batch_mode_token1] = ACTIONS(882),
    [aux_sym__bind_address_token1] = ACTIONS(882),
    [aux_sym__bind_interface_token1] = ACTIONS(882),
    [aux_sym__canonical_domains_token1] = ACTIONS(882),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(882),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(882),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(882),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(882),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(882),
    [aux_sym__certificate_file_token1] = ACTIONS(882),
    [aux_sym__check_host_ip_token1] = ACTIONS(882),
    [aux_sym__ciphers_token1] = ACTIONS(882),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(882),
    [aux_sym__compression_token1] = ACTIONS(882),
    [aux_sym__connection_attempts_token1] = ACTIONS(882),
    [aux_sym__connect_timeout_token1] = ACTIONS(882),
    [aux_sym__control_master_token1] = ACTIONS(882),
    [aux_sym__control_persist_token1] = ACTIONS(882),
    [aux_sym__control_path_token1] = ACTIONS(882),
    [aux_sym__dynamic_forward_token1] = ACTIONS(882),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(882),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(882),
    [aux_sym__escape_char_token1] = ACTIONS(882),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(882),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(882),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(882),
    [aux_sym__forward_agent_token1] = ACTIONS(882),
    [aux_sym__forward_x11_token1] = ACTIONS(884),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(882),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(882),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(882),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(882),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(882),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(882),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(882),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(882),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(882),
    [aux_sym__host_key_alias_token1] = ACTIONS(882),
    [aux_sym__hostname_token1] = ACTIONS(882),
    [aux_sym__identities_only_token1] = ACTIONS(882),
    [aux_sym__identity_agent_token1] = ACTIONS(882),
    [aux_sym__identity_file_token1] = ACTIONS(882),
    [aux_sym__ignore_unknown_token1] = ACTIONS(882),
    [aux_sym__include_token1] = ACTIONS(882),
    [aux_sym__ipqos_token1] = ACTIONS(882),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(882),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(882),
    [aux_sym__kex_algorithms_token1] = ACTIONS(882),
    [aux_sym__known_hosts_command_token1] = ACTIONS(882),
    [aux_sym__local_command_token1] = ACTIONS(882),
    [aux_sym__local_forward_token1] = ACTIONS(882),
    [aux_sym__log_level_token1] = ACTIONS(882),
    [aux_sym__log_verbose_token1] = ACTIONS(882),
    [aux_sym__macs_token1] = ACTIONS(882),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(882),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(882),
    [aux_sym__password_authentication_token1] = ACTIONS(882),
    [aux_sym__permit_local_command_token1] = ACTIONS(882),
    [aux_sym__permit_remote_open_token1] = ACTIONS(882),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(882),
    [aux_sym__port_token1] = ACTIONS(882),
    [aux_sym__preferred_authentications_token1] = ACTIONS(882),
    [aux_sym__proxy_command_token1] = ACTIONS(882),
    [aux_sym__proxy_jump_token1] = ACTIONS(882),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(882),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(882),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(882),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(882),
    [aux_sym__rekey_limit_token1] = ACTIONS(882),
    [aux_sym__remote_command_token1] = ACTIONS(882),
    [aux_sym__remote_forward_token1] = ACTIONS(882),
    [aux_sym__request_tty_token1] = ACTIONS(882),
    [aux_sym__required_rsa_size_token1] = ACTIONS(882),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(882),
    [aux_sym__security_key_provider_token1] = ACTIONS(882),
    [aux_sym__send_env_token1] = ACTIONS(882),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(882),
    [aux_sym__server_alive_interval_token1] = ACTIONS(882),
    [aux_sym__session_type_token1] = ACTIONS(882),
    [aux_sym__set_env_token1] = ACTIONS(882),
    [aux_sym__stdin_null_token1] = ACTIONS(882),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(882),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(882),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(882),
    [aux_sym__syslog_facility_token1] = ACTIONS(882),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(882),
    [aux_sym__tag_token1] = ACTIONS(882),
    [aux_sym__tunnel_token1] = ACTIONS(884),
    [aux_sym__tunnel_device_token1] = ACTIONS(882),
    [aux_sym__update_host_keys_token1] = ACTIONS(882),
    [aux_sym__use_keychain_token1] = ACTIONS(882),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(882),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(882),
    [aux_sym__visual_host_key_token1] = ACTIONS(882),
    [aux_sym__xauth_location_token1] = ACTIONS(882),
    [sym_comment] = ACTIONS(882),
    [sym__space] = ACTIONS(882),
    [sym__eol] = ACTIONS(882),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(886), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(888), 1,
      anon_sym_BANG,
    ACTIONS(890), 1,
      aux_sym__all_token1,
    ACTIONS(892), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(894), 1,
      aux_sym__match_final_token1,
    ACTIONS(896), 1,
      aux_sym__match_exec_token1,
    ACTIONS(898), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(900), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(902), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(904), 1,
      aux_sym__match_user_token1,
    ACTIONS(906), 1,
      aux_sym__match_localuser_token1,
    STATE(315), 1,
      sym_condition,
    STATE(615), 1,
      sym__all,
    STATE(642), 1,
      sym__match_canonical,
    STATE(674), 1,
      sym__match_final,
    STATE(683), 1,
      sym__match_exec,
    STATE(716), 1,
      sym__match_localnetwork,
    STATE(732), 1,
      sym__match_host,
    STATE(735), 1,
      sym__match_originalhost,
    STATE(747), 1,
      sym__match_tagged,
    STATE(753), 1,
      sym__match_user,
    STATE(768), 1,
      sym__match_localuser,
  [67] = 21,
    ACTIONS(886), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(888), 1,
      anon_sym_BANG,
    ACTIONS(892), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(894), 1,
      aux_sym__match_final_token1,
    ACTIONS(896), 1,
      aux_sym__match_exec_token1,
    ACTIONS(898), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(900), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(902), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(904), 1,
      aux_sym__match_user_token1,
    ACTIONS(906), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(908), 1,
      sym__eol,
    STATE(628), 1,
      sym_condition,
    STATE(642), 1,
      sym__match_canonical,
    STATE(674), 1,
      sym__match_final,
    STATE(683), 1,
      sym__match_exec,
    STATE(716), 1,
      sym__match_localnetwork,
    STATE(732), 1,
      sym__match_host,
    STATE(735), 1,
      sym__match_originalhost,
    STATE(747), 1,
      sym__match_tagged,
    STATE(753), 1,
      sym__match_user,
    STATE(768), 1,
      sym__match_localuser,
  [131] = 21,
    ACTIONS(886), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(888), 1,
      anon_sym_BANG,
    ACTIONS(892), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(894), 1,
      aux_sym__match_final_token1,
    ACTIONS(896), 1,
      aux_sym__match_exec_token1,
    ACTIONS(898), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(900), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(902), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(904), 1,
      aux_sym__match_user_token1,
    ACTIONS(906), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(910), 1,
      sym__eol,
    STATE(628), 1,
      sym_condition,
    STATE(642), 1,
      sym__match_canonical,
    STATE(674), 1,
      sym__match_final,
    STATE(683), 1,
      sym__match_exec,
    STATE(716), 1,
      sym__match_localnetwork,
    STATE(732), 1,
      sym__match_host,
    STATE(735), 1,
      sym__match_originalhost,
    STATE(747), 1,
      sym__match_tagged,
    STATE(753), 1,
      sym__match_user,
    STATE(768), 1,
      sym__match_localuser,
  [195] = 20,
    ACTIONS(886), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(888), 1,
      anon_sym_BANG,
    ACTIONS(892), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(894), 1,
      aux_sym__match_final_token1,
    ACTIONS(896), 1,
      aux_sym__match_exec_token1,
    ACTIONS(898), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(900), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(902), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(904), 1,
      aux_sym__match_user_token1,
    ACTIONS(906), 1,
      aux_sym__match_localuser_token1,
    STATE(628), 1,
      sym_condition,
    STATE(642), 1,
      sym__match_canonical,
    STATE(674), 1,
      sym__match_final,
    STATE(683), 1,
      sym__match_exec,
    STATE(716), 1,
      sym__match_localnetwork,
    STATE(732), 1,
      sym__match_host,
    STATE(735), 1,
      sym__match_originalhost,
    STATE(747), 1,
      sym__match_tagged,
    STATE(753), 1,
      sym__match_user,
    STATE(768), 1,
      sym__match_localuser,
  [256] = 18,
    ACTIONS(886), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(892), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(894), 1,
      aux_sym__match_final_token1,
    ACTIONS(896), 1,
      aux_sym__match_exec_token1,
    ACTIONS(898), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(900), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(902), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(904), 1,
      aux_sym__match_user_token1,
    ACTIONS(906), 1,
      aux_sym__match_localuser_token1,
    STATE(500), 1,
      sym__match_canonical,
    STATE(501), 1,
      sym__match_final,
    STATE(502), 1,
      sym__match_exec,
    STATE(503), 1,
      sym__match_localnetwork,
    STATE(504), 1,
      sym__match_host,
    STATE(505), 1,
      sym__match_originalhost,
    STATE(506), 1,
      sym__match_tagged,
    STATE(507), 1,
      sym__match_user,
    STATE(508), 1,
      sym__match_localuser,
  [311] = 14,
    ACTIONS(912), 1,
      aux_sym__match_exec_token2,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(922), 1,
      sym__number,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(585), 1,
      sym__forward_value1,
    STATE(629), 1,
      sym_number,
    STATE(630), 1,
      sym__file_string,
    STATE(632), 1,
      sym__forward_value_inner,
    STATE(799), 1,
      sym__string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [355] = 14,
    ACTIONS(912), 1,
      aux_sym__match_exec_token2,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(922), 1,
      sym__number,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(629), 1,
      sym_number,
    STATE(630), 1,
      sym__file_string,
    STATE(632), 1,
      sym__forward_value_inner,
    STATE(788), 1,
      sym__forward_value1,
    STATE(799), 1,
      sym__string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [399] = 12,
    ACTIONS(912), 1,
      aux_sym__match_exec_token2,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(678), 1,
      sym__forward_value_inner,
    STATE(680), 1,
      sym__file_string,
    STATE(701), 1,
      sym__forward_value2,
    STATE(799), 1,
      sym__string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [437] = 12,
    ACTIONS(912), 1,
      aux_sym__match_exec_token2,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(678), 1,
      sym__forward_value_inner,
    STATE(679), 1,
      sym__forward_value2,
    STATE(680), 1,
      sym__file_string,
    STATE(799), 1,
      sym__string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [475] = 12,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__match_exec_token2,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(930), 1,
      aux_sym__match_exec_token3,
    ACTIONS(932), 1,
      aux_sym__file_token_token1,
    ACTIONS(934), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(80), 1,
      aux_sym__file_string_repeat2,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(480), 1,
      aux_sym__string_repeat2,
    STATE(775), 1,
      sym__forward_value_inner,
    STATE(799), 1,
      sym__string,
    STATE(173), 2,
      sym__file_token,
      sym_variable,
  [513] = 12,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__match_exec_token2,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(930), 1,
      aux_sym__match_exec_token3,
    ACTIONS(932), 1,
      aux_sym__file_token_token1,
    ACTIONS(934), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(80), 1,
      aux_sym__file_string_repeat2,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(480), 1,
      aux_sym__string_repeat2,
    STATE(780), 1,
      sym__forward_value_inner,
    STATE(799), 1,
      sym__string,
    STATE(173), 2,
      sym__file_token,
      sym_variable,
  [551] = 10,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token2,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    ACTIONS(942), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(486), 1,
      sym__var_value,
    STATE(657), 1,
      sym__file_string,
    ACTIONS(940), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [584] = 7,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(51), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(734), 1,
      sym__file_pattern_vars,
    STATE(82), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(948), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [609] = 7,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(51), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(719), 1,
      sym__file_pattern_vars,
    STATE(82), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(948), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [634] = 6,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    ACTIONS(958), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(961), 2,
      sym__space,
      sym__eol,
    STATE(82), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(955), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [657] = 6,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(950), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(963), 2,
      sym__space,
      sym__eol,
    STATE(82), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(948), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [680] = 6,
    ACTIONS(965), 1,
      anon_sym_DQUOTE,
    ACTIONS(967), 1,
      aux_sym__match_exec_token3,
    ACTIONS(973), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(52), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(96), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(970), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [702] = 9,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(922), 1,
      sym__number,
    ACTIONS(926), 1,
      aux_sym__match_exec_token2,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(365), 1,
      sym__dynamic_forward_value,
    STATE(713), 1,
      sym_number,
    STATE(715), 1,
      sym__forward_value_inner,
    STATE(799), 1,
      sym__string,
  [730] = 7,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DOLLAR,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(698), 1,
      sym__var_value,
    ACTIONS(982), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(695), 2,
      sym__string,
      sym__boolean,
  [754] = 9,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(922), 1,
      sym__number,
    ACTIONS(926), 1,
      aux_sym__match_exec_token2,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(658), 1,
      sym__dynamic_forward_value,
    STATE(713), 1,
      sym_number,
    STATE(715), 1,
      sym__forward_value_inner,
    STATE(799), 1,
      sym__string,
  [782] = 6,
    ACTIONS(984), 1,
      anon_sym_DQUOTE,
    ACTIONS(986), 1,
      aux_sym__match_exec_token3,
    ACTIONS(990), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(52), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(96), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(988), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [804] = 8,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token2,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    ACTIONS(992), 1,
      anon_sym_none,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(473), 1,
      sym__file_string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [830] = 8,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token2,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    ACTIONS(994), 1,
      anon_sym_none,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(708), 1,
      sym__file_string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [856] = 7,
    ACTIONS(996), 1,
      anon_sym_BANG,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      sym__eol,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(605), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [879] = 7,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token2,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(563), 1,
      sym__file_string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [902] = 7,
    ACTIONS(1006), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1008), 1,
      aux_sym__file_token_token1,
    ACTIONS(1010), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1012), 1,
      sym__space,
    ACTIONS(1014), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym__remote_command_repeat1,
    STATE(143), 2,
      sym__file_token,
      sym_variable,
  [925] = 7,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1020), 1,
      anon_sym_none,
    STATE(104), 1,
      aux_sym__match_value_repeat1,
    STATE(343), 1,
      sym__cnames_map,
    STATE(344), 1,
      sym__pattern,
    ACTIONS(1018), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [948] = 7,
    ACTIONS(1022), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1024), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1026), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1028), 1,
      sym__space,
    ACTIONS(1030), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym__hosts_string_repeat1,
    STATE(142), 2,
      sym__hosts_token,
      sym_variable,
  [971] = 6,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token2,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1032), 2,
      sym__space,
      sym__eol,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [992] = 8,
    ACTIONS(916), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__match_exec_token2,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(1034), 1,
      aux_sym__match_exec_token3,
    STATE(301), 1,
      aux_sym__string_repeat1,
    STATE(480), 1,
      aux_sym__string_repeat2,
    STATE(799), 1,
      sym__string,
    STATE(808), 1,
      sym__forward_value_inner,
  [1017] = 7,
    ACTIONS(1036), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1039), 1,
      aux_sym__file_token_token1,
    ACTIONS(1042), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1045), 1,
      sym__space,
    ACTIONS(1047), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym__remote_command_repeat1,
    STATE(143), 2,
      sym__file_token,
      sym_variable,
  [1040] = 5,
    ACTIONS(986), 1,
      aux_sym__match_exec_token3,
    ACTIONS(990), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(96), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(988), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [1059] = 7,
    ACTIONS(1049), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1052), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1055), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1058), 1,
      sym__space,
    ACTIONS(1060), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym__hosts_string_repeat1,
    STATE(142), 2,
      sym__hosts_token,
      sym_variable,
  [1082] = 6,
    ACTIONS(1062), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1065), 1,
      aux_sym__file_token_token1,
    ACTIONS(1068), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1071), 2,
      sym__space,
      sym__eol,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [1103] = 7,
    ACTIONS(918), 1,
      aux_sym__file_token_token1,
    ACTIONS(920), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token2,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    STATE(652), 1,
      sym__file_string,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [1126] = 6,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    STATE(250), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1079), 2,
      sym__space,
      sym__eol,
  [1147] = 7,
    ACTIONS(996), 1,
      anon_sym_BANG,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1081), 1,
      sym__eol,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(605), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1170] = 7,
    ACTIONS(996), 1,
      anon_sym_BANG,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1083), 1,
      sym__eol,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(605), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1193] = 7,
    ACTIONS(996), 1,
      anon_sym_BANG,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1085), 1,
      sym__eol,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(605), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1216] = 6,
    ACTIONS(996), 1,
      anon_sym_BANG,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(605), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1236] = 6,
    ACTIONS(1087), 1,
      anon_sym_DQUOTE,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__match_value_repeat3,
    STATE(331), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1256] = 6,
    ACTIONS(1022), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1024), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1026), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(63), 1,
      aux_sym__hosts_string_repeat1,
    STATE(640), 1,
      sym__hosts_string,
    STATE(142), 2,
      sym__hosts_token,
      sym_variable,
  [1276] = 6,
    ACTIONS(1095), 1,
      anon_sym_DQUOTE,
    ACTIONS(1097), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1100), 1,
      aux_sym__file_token_token1,
    ACTIONS(1103), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(78), 1,
      aux_sym__file_string_repeat2,
    STATE(173), 2,
      sym__file_token,
      sym_variable,
  [1296] = 6,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      aux_sym__match_exec_token2,
    STATE(104), 1,
      aux_sym__match_value_repeat1,
    STATE(344), 1,
      sym__pattern,
    STATE(641), 1,
      sym__cnames_map,
    ACTIONS(1018), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1316] = 6,
    ACTIONS(932), 1,
      aux_sym__file_token_token1,
    ACTIONS(934), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1106), 1,
      anon_sym_DQUOTE,
    ACTIONS(1108), 1,
      aux_sym__match_exec_token3,
    STATE(78), 1,
      aux_sym__file_string_repeat2,
    STATE(173), 2,
      sym__file_token,
      sym_variable,
  [1336] = 6,
    ACTIONS(1110), 1,
      aux_sym_time_token1,
    ACTIONS(1112), 1,
      aux_sym_time_token2,
    ACTIONS(1114), 1,
      aux_sym_time_token3,
    ACTIONS(1116), 1,
      aux_sym_time_token4,
    ACTIONS(1118), 1,
      aux_sym_time_token5,
    ACTIONS(1120), 2,
      sym__space,
      sym__eol,
  [1356] = 2,
    ACTIONS(1122), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1124), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1368] = 4,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token2,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1131), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1129), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1384] = 2,
    ACTIONS(1134), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1136), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1396] = 4,
    ACTIONS(1140), 1,
      anon_sym_confirm,
    ACTIONS(1142), 1,
      sym__number,
    STATE(764), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1138), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1412] = 4,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1144), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1428] = 6,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1146), 1,
      anon_sym_BANG,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(303), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1448] = 4,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1148), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1464] = 3,
    ACTIONS(1150), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1153), 1,
      anon_sym_COLON,
    ACTIONS(1155), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1477] = 3,
    STATE(90), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1160), 2,
      sym__space,
      sym__eol,
    ACTIONS(1157), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1490] = 6,
    ACTIONS(1162), 1,
      anon_sym_none,
    ACTIONS(1164), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1166), 1,
      aux_sym__proxy_token_token1,
    STATE(137), 1,
      aux_sym__proxy_string_repeat1,
    STATE(209), 1,
      sym__proxy_token,
    STATE(598), 1,
      sym__proxy_string,
  [1509] = 5,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    STATE(88), 1,
      aux_sym__match_value_repeat1,
    STATE(208), 1,
      sym__pattern,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1526] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(670), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1543] = 2,
    ACTIONS(1134), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1136), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1554] = 5,
    ACTIONS(1168), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1171), 1,
      aux_sym__hostname_token_token1,
    STATE(95), 1,
      aux_sym__hostname_string_repeat1,
    STATE(226), 1,
      sym__hostname_token,
    ACTIONS(1174), 2,
      sym__space,
      sym__eol,
  [1571] = 2,
    ACTIONS(1178), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1176), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1582] = 4,
    ACTIONS(1182), 1,
      aux_sym__match_exec_token3,
    STATE(97), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1180), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1185), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1597] = 5,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    STATE(88), 1,
      aux_sym__match_value_repeat1,
    STATE(197), 1,
      sym__pattern,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1614] = 2,
    ACTIONS(1188), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [1625] = 5,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      aux_sym__match_exec_token2,
    STATE(104), 1,
      aux_sym__match_value_repeat1,
    STATE(208), 1,
      sym__pattern,
    ACTIONS(1018), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1642] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(639), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1659] = 4,
    ACTIONS(1192), 1,
      aux_sym__match_exec_token2,
    STATE(102), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1129), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1195), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1674] = 4,
    ACTIONS(1198), 1,
      anon_sym_DQUOTE,
    STATE(429), 1,
      sym__permit_remote_open_value,
    ACTIONS(1200), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1202), 2,
      anon_sym_any,
      anon_sym_none,
  [1689] = 4,
    ACTIONS(1016), 1,
      aux_sym__match_exec_token2,
    STATE(102), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1018), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1704] = 5,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    STATE(626), 1,
      sym__match_value,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1721] = 4,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token3,
    STATE(97), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1206), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1736] = 5,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    STATE(625), 1,
      sym__match_value,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1753] = 4,
    ACTIONS(1210), 1,
      anon_sym_DASH,
    STATE(129), 1,
      aux_sym__send_env_value_repeat1,
    STATE(372), 1,
      sym__send_env_value,
    ACTIONS(1208), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1768] = 5,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    STATE(624), 1,
      sym__match_value,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1785] = 6,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    ACTIONS(980), 1,
      anon_sym_DOLLAR,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(530), 1,
      sym__var_value,
    STATE(558), 1,
      sym__string,
  [1804] = 4,
    ACTIONS(1212), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(213), 1,
      sym__log_verbose_value,
    ACTIONS(1214), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1819] = 4,
    ACTIONS(1198), 1,
      anon_sym_DQUOTE,
    STATE(693), 1,
      sym__permit_remote_open_value,
    ACTIONS(1200), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1216), 2,
      anon_sym_any,
      anon_sym_none,
  [1834] = 2,
    STATE(536), 1,
      sym__boolean,
    ACTIONS(1218), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [1845] = 5,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    STATE(623), 1,
      sym__match_value,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1862] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(479), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1879] = 5,
    ACTIONS(1220), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1223), 1,
      aux_sym__file_token_token1,
    STATE(116), 1,
      aux_sym__match_exec_repeat1,
    STATE(202), 1,
      sym__file_token,
    ACTIONS(1226), 2,
      sym__space,
      sym__eol,
  [1896] = 6,
    ACTIONS(1228), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1231), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1234), 1,
      sym__space,
    ACTIONS(1236), 1,
      sym__eol,
    STATE(117), 1,
      aux_sym__proxy_string_repeat1,
    STATE(209), 1,
      sym__proxy_token,
  [1915] = 5,
    ACTIONS(1006), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1008), 1,
      aux_sym__file_token_token1,
    ACTIONS(1010), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(61), 1,
      aux_sym__remote_command_repeat1,
    STATE(143), 2,
      sym__file_token,
      sym_variable,
  [1932] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(651), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1949] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(399), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1966] = 2,
    STATE(593), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1238), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [1977] = 6,
    ACTIONS(1240), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1242), 1,
      anon_sym_DQUOTE,
    ACTIONS(1244), 1,
      aux_sym__hostname_token_token1,
    STATE(126), 1,
      aux_sym__hostname_string_repeat1,
    STATE(226), 1,
      sym__hostname_token,
    STATE(661), 1,
      sym__hostname_string,
  [1996] = 4,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    STATE(128), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1148), 2,
      sym__space,
      sym__eol,
  [2011] = 5,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    STATE(614), 1,
      sym__match_value,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2028] = 3,
    STATE(90), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1246), 2,
      sym__space,
      sym__eol,
    ACTIONS(1208), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2041] = 5,
    ACTIONS(1240), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1244), 1,
      aux_sym__hostname_token_token1,
    STATE(95), 1,
      aux_sym__hostname_string_repeat1,
    STATE(226), 1,
      sym__hostname_token,
    ACTIONS(1248), 2,
      sym__space,
      sym__eol,
  [2058] = 4,
    ACTIONS(1210), 1,
      anon_sym_DASH,
    STATE(129), 1,
      aux_sym__send_env_value_repeat1,
    STATE(702), 1,
      sym__send_env_value,
    ACTIONS(1208), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2073] = 4,
    ACTIONS(1250), 1,
      aux_sym__match_exec_token2,
    STATE(128), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1129), 2,
      sym__space,
      sym__eol,
    ACTIONS(1253), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2088] = 3,
    STATE(90), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1256), 2,
      sym__space,
      sym__eol,
    ACTIONS(1208), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2101] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(714), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2118] = 5,
    ACTIONS(932), 1,
      aux_sym__file_token_token1,
    ACTIONS(934), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1108), 1,
      aux_sym__match_exec_token3,
    STATE(80), 1,
      aux_sym__file_string_repeat2,
    STATE(173), 2,
      sym__file_token,
      sym_variable,
  [2135] = 3,
    ACTIONS(1260), 1,
      anon_sym_auto,
    STATE(721), 1,
      sym__boolean,
    ACTIONS(1258), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [2148] = 5,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1264), 1,
      aux_sym__file_token_token1,
    STATE(116), 1,
      aux_sym__match_exec_repeat1,
    STATE(202), 1,
      sym__file_token,
    ACTIONS(1266), 2,
      sym__space,
      sym__eol,
  [2165] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(752), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2182] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(751), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2199] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym__match_value_repeat1,
    STATE(337), 1,
      sym__pattern,
    ACTIONS(1002), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2216] = 6,
    ACTIONS(1164), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1166), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1268), 1,
      sym__space,
    ACTIONS(1270), 1,
      sym__eol,
    STATE(117), 1,
      aux_sym__proxy_string_repeat1,
    STATE(209), 1,
      sym__proxy_token,
  [2235] = 5,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    STATE(88), 1,
      aux_sym__match_value_repeat1,
    STATE(254), 1,
      sym__pattern,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2252] = 3,
    ACTIONS(1274), 1,
      anon_sym_COLON,
    STATE(160), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1272), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2264] = 4,
    ACTIONS(1276), 1,
      aux_sym__match_exec_token3,
    STATE(164), 1,
      aux_sym__match_value_repeat3,
    STATE(449), 1,
      sym__log_verbose_quoted,
    ACTIONS(1278), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2278] = 5,
    ACTIONS(1280), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1282), 1,
      sym_token,
    ACTIONS(1284), 1,
      sym__space,
    ACTIONS(1286), 1,
      sym__eol,
    STATE(166), 1,
      aux_sym__token_string_repeat1,
  [2294] = 2,
    ACTIONS(1288), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1290), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2304] = 2,
    ACTIONS(1292), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1294), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2314] = 1,
    ACTIONS(1296), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [2322] = 3,
    ACTIONS(1142), 1,
      sym__number,
    ACTIONS(1298), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(720), 2,
      sym__boolean,
      sym_time,
  [2334] = 5,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    ACTIONS(1302), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1305), 1,
      aux_sym__hostname_token_token1,
    STATE(146), 1,
      aux_sym__hostname_string_repeat2,
    STATE(459), 1,
      sym__hostname_token,
  [2350] = 4,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
    ACTIONS(1308), 1,
      aux_sym__match_exec_token3,
    STATE(147), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1311), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2364] = 4,
    ACTIONS(1314), 1,
      anon_sym_DQUOTE,
    ACTIONS(1316), 1,
      aux_sym__match_exec_token3,
    STATE(147), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1318), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2378] = 2,
    ACTIONS(1320), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1155), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2388] = 5,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    ACTIONS(1324), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1326), 1,
      aux_sym__hostname_token_token1,
    STATE(146), 1,
      aux_sym__hostname_string_repeat2,
    STATE(459), 1,
      sym__hostname_token,
  [2404] = 4,
    ACTIONS(1276), 1,
      aux_sym__match_exec_token3,
    STATE(164), 1,
      aux_sym__match_value_repeat3,
    STATE(742), 1,
      sym__log_verbose_quoted,
    ACTIONS(1278), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2418] = 1,
    ACTIONS(1328), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2426] = 3,
    ACTIONS(1330), 1,
      anon_sym_COLON,
    STATE(160), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1272), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2438] = 5,
    ACTIONS(1262), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1264), 1,
      aux_sym__file_token_token1,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym__match_exec_repeat1,
    STATE(202), 1,
      sym__file_token,
  [2454] = 5,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1338), 1,
      aux_sym__file_token_token1,
    STATE(158), 1,
      aux_sym__match_exec_repeat2,
    STATE(355), 1,
      sym__file_token,
  [2470] = 2,
    STATE(575), 1,
      sym__boolean,
    ACTIONS(1340), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2480] = 4,
    ACTIONS(1276), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1342), 1,
      anon_sym_COLON,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1278), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2494] = 5,
    ACTIONS(1344), 1,
      anon_sym_DQUOTE,
    ACTIONS(1346), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1349), 1,
      aux_sym__file_token_token1,
    STATE(158), 1,
      aux_sym__match_exec_repeat2,
    STATE(355), 1,
      sym__file_token,
  [2510] = 2,
    ACTIONS(1188), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2520] = 3,
    ACTIONS(1355), 1,
      anon_sym_COLON,
    STATE(160), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1352), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2532] = 2,
    ACTIONS(1188), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2542] = 4,
    ACTIONS(1180), 1,
      anon_sym_COLON,
    ACTIONS(1357), 1,
      aux_sym__match_exec_token3,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1360), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2556] = 3,
    STATE(139), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(380), 1,
      sym__log_verbose_value,
    ACTIONS(1214), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2568] = 4,
    ACTIONS(1276), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1363), 1,
      anon_sym_COLON,
    STATE(162), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1278), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2582] = 2,
    ACTIONS(1134), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1136), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2592] = 5,
    ACTIONS(1365), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1368), 1,
      sym_token,
    ACTIONS(1371), 1,
      sym__space,
    ACTIONS(1373), 1,
      sym__eol,
    STATE(166), 1,
      aux_sym__token_string_repeat1,
  [2608] = 2,
    ACTIONS(1377), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1375), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2618] = 2,
    ACTIONS(1134), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1136), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2628] = 2,
    ACTIONS(1134), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1136), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2638] = 2,
    STATE(489), 1,
      sym__boolean,
    ACTIONS(1379), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2648] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1383), 2,
      sym__space,
      sym__eol,
  [2659] = 3,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1388), 2,
      sym__space,
      sym__eol,
  [2670] = 2,
    ACTIONS(1392), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1390), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2679] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1394), 2,
      sym__space,
      sym__eol,
  [2690] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1394), 2,
      sym__space,
      sym__eol,
  [2701] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1396), 2,
      sym__space,
      sym__eol,
  [2712] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1396), 2,
      sym__space,
      sym__eol,
  [2723] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(660), 1,
      sym__string,
  [2736] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1400), 2,
      sym__space,
      sym__eol,
  [2747] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1400), 2,
      sym__space,
      sym__eol,
  [2758] = 3,
    ACTIONS(1402), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1405), 2,
      sym__space,
      sym__eol,
  [2769] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1409), 2,
      sym__space,
      sym__eol,
  [2780] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1409), 2,
      sym__space,
      sym__eol,
  [2791] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1413), 2,
      sym__space,
      sym__eol,
  [2802] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1413), 2,
      sym__space,
      sym__eol,
  [2813] = 3,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
    ACTIONS(1418), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1390), 2,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2824] = 3,
    ACTIONS(1421), 1,
      aux_sym__match_exec_token2,
    STATE(187), 1,
      aux_sym__string_repeat1,
    ACTIONS(1424), 2,
      sym__space,
      sym__eol,
  [2835] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1428), 2,
      sym__space,
      sym__eol,
  [2846] = 2,
    STATE(153), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1430), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2855] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1434), 2,
      sym__space,
      sym__eol,
  [2866] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1434), 2,
      sym__space,
      sym__eol,
  [2877] = 3,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1438), 2,
      sym__space,
      sym__eol,
  [2888] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1440), 2,
      sym__space,
      sym__eol,
  [2899] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1440), 2,
      sym__space,
      sym__eol,
  [2910] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(704), 1,
      sym__string,
  [2923] = 2,
    ACTIONS(1377), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1375), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2932] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1444), 2,
      sym__space,
      sym__eol,
  [2943] = 1,
    ACTIONS(1446), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2950] = 2,
    STATE(125), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1208), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2959] = 3,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token3,
    STATE(76), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2970] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(765), 1,
      sym__string,
  [2983] = 2,
    ACTIONS(1448), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1450), 3,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [2992] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1452), 2,
      sym__space,
      sym__eol,
  [3003] = 3,
    ACTIONS(1454), 1,
      anon_sym_COLON,
    ACTIONS(1456), 1,
      anon_sym_AT,
    ACTIONS(1458), 2,
      sym__space,
      sym__eol,
  [3014] = 4,
    ACTIONS(1336), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1338), 1,
      aux_sym__file_token_token1,
    STATE(155), 1,
      aux_sym__match_exec_repeat2,
    STATE(355), 1,
      sym__file_token,
  [3027] = 3,
    ACTIONS(1460), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1462), 2,
      sym__space,
      sym__eol,
  [3038] = 4,
    ACTIONS(1464), 1,
      aux_sym_time_token2,
    ACTIONS(1466), 1,
      aux_sym_time_token3,
    ACTIONS(1468), 1,
      aux_sym_time_token4,
    ACTIONS(1470), 1,
      aux_sym_time_token5,
  [3051] = 1,
    ACTIONS(1405), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3058] = 2,
    ACTIONS(1472), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1474), 2,
      aux_sym__proxy_token_token1,
      sym__eol,
  [3067] = 3,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1476), 2,
      sym__space,
      sym__eol,
  [3078] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1478), 2,
      sym__space,
      sym__eol,
  [3089] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1480), 2,
      sym__space,
      sym__eol,
  [3100] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1482), 2,
      sym__space,
      sym__eol,
  [3111] = 3,
    ACTIONS(1484), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1487), 2,
      sym__space,
      sym__eol,
  [3122] = 2,
    ACTIONS(1491), 1,
      sym_cipher,
    ACTIONS(1489), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3131] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1493), 2,
      sym__space,
      sym__eol,
  [3142] = 2,
    ACTIONS(1495), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1497), 2,
      sym_token,
      sym__eol,
  [3151] = 3,
    ACTIONS(1501), 1,
      sym__number,
    STATE(672), 1,
      sym_number,
    ACTIONS(1499), 2,
      anon_sym_none,
      sym_ipqos,
  [3162] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1503), 2,
      sym__space,
      sym__eol,
  [3173] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(494), 1,
      sym__string,
  [3186] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1508), 2,
      sym__space,
      sym__eol,
  [3197] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1510), 2,
      sym__space,
      sym__eol,
  [3208] = 3,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1512), 2,
      sym__space,
      sym__eol,
  [3219] = 3,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1517), 2,
      sym__space,
      sym__eol,
  [3230] = 4,
    ACTIONS(1324), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1326), 1,
      aux_sym__hostname_token_token1,
    STATE(150), 1,
      aux_sym__hostname_string_repeat2,
    STATE(459), 1,
      sym__hostname_token,
  [3243] = 2,
    ACTIONS(1519), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1521), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [3252] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1523), 2,
      sym__space,
      sym__eol,
  [3263] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1525), 2,
      sym__space,
      sym__eol,
  [3274] = 3,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1527), 2,
      sym__space,
      sym__eol,
  [3285] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1529), 2,
      sym__space,
      sym__eol,
  [3296] = 3,
    ACTIONS(1276), 1,
      aux_sym__match_exec_token3,
    STATE(157), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1278), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3307] = 3,
    ACTIONS(1531), 1,
      aux_sym__match_exec_token2,
    STATE(187), 1,
      aux_sym__string_repeat1,
    ACTIONS(1533), 2,
      sym__space,
      sym__eol,
  [3318] = 4,
    ACTIONS(1535), 1,
      aux_sym__sep_token1,
    ACTIONS(1537), 1,
      sym__space,
    ACTIONS(1539), 1,
      sym__eol,
    STATE(510), 1,
      sym__sep,
  [3331] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(379), 1,
      sym__string,
  [3344] = 4,
    ACTIONS(1541), 1,
      aux_sym__sep_token1,
    ACTIONS(1543), 1,
      sym__space,
    ACTIONS(1545), 1,
      sym__eol,
    STATE(509), 1,
      sym__sep,
  [3357] = 3,
    ACTIONS(1547), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1550), 2,
      sym__space,
      sym__eol,
  [3368] = 2,
    ACTIONS(1554), 1,
      sym_key_sig,
    ACTIONS(1552), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3377] = 2,
    STATE(490), 1,
      sym__boolean,
    ACTIONS(1556), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3386] = 2,
    ACTIONS(1560), 1,
      sym_key_sig,
    ACTIONS(1558), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3395] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(669), 1,
      sym__string,
  [3408] = 3,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1562), 2,
      sym__space,
      sym__eol,
  [3419] = 2,
    ACTIONS(1566), 1,
      sym_key_sig,
    ACTIONS(1564), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3428] = 3,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1571), 2,
      sym__space,
      sym__eol,
  [3439] = 3,
    ACTIONS(1316), 1,
      aux_sym__match_exec_token3,
    STATE(148), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1318), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3450] = 3,
    ACTIONS(1573), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1576), 2,
      sym__space,
      sym__eol,
  [3461] = 3,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1578), 2,
      sym__space,
      sym__eol,
  [3472] = 3,
    ACTIONS(1501), 1,
      sym__number,
    STATE(562), 1,
      sym_number,
    ACTIONS(1580), 2,
      anon_sym_none,
      sym_ipqos,
  [3483] = 3,
    ACTIONS(1073), 1,
      aux_sym__match_exec_token2,
    STATE(86), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3494] = 2,
    ACTIONS(1584), 1,
      sym_kex,
    ACTIONS(1582), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3503] = 3,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1586), 2,
      sym__space,
      sym__eol,
  [3514] = 4,
    ACTIONS(1280), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1282), 1,
      sym_token,
    STATE(141), 1,
      aux_sym__token_string_repeat1,
    STATE(633), 1,
      sym__token_string,
  [3527] = 3,
    ACTIONS(1460), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1588), 2,
      sym__space,
      sym__eol,
  [3538] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1590), 2,
      sym__space,
      sym__eol,
  [3549] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1592), 2,
      sym__space,
      sym__eol,
  [3560] = 2,
    ACTIONS(1596), 1,
      sym_mac,
    ACTIONS(1594), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3569] = 2,
    STATE(492), 1,
      sym__boolean,
    ACTIONS(1598), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3578] = 3,
    ACTIONS(1089), 1,
      aux_sym__match_exec_token3,
    STATE(106), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1093), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3589] = 3,
    ACTIONS(1600), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1603), 2,
      sym__space,
      sym__eol,
  [3600] = 3,
    ACTIONS(1605), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1608), 2,
      sym__space,
      sym__eol,
  [3611] = 3,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1610), 2,
      sym__space,
      sym__eol,
  [3622] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(604), 1,
      sym__string,
  [3635] = 4,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(978), 1,
      aux_sym__match_exec_token2,
    STATE(232), 1,
      aux_sym__string_repeat1,
    STATE(488), 1,
      sym__string,
  [3648] = 2,
    ACTIONS(1377), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1375), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3657] = 2,
    ACTIONS(1134), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1136), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3666] = 3,
    ACTIONS(1612), 1,
      aux_sym__sep_token1,
    ACTIONS(1614), 1,
      sym__space,
    STATE(156), 1,
      sym__sep,
  [3676] = 3,
    ACTIONS(1616), 1,
      sym__space,
    ACTIONS(1618), 1,
      sym__eol,
    STATE(402), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3686] = 2,
    STATE(659), 1,
      sym__boolean,
    ACTIONS(1620), 2,
      anon_sym_yes,
      anon_sym_no,
  [3694] = 3,
    ACTIONS(1622), 1,
      aux_sym__sep_token1,
    ACTIONS(1624), 1,
      sym__space,
    STATE(529), 1,
      sym__sep,
  [3704] = 3,
    ACTIONS(1626), 1,
      aux_sym__sep_token1,
    ACTIONS(1628), 1,
      sym__space,
    STATE(108), 1,
      sym__sep,
  [3714] = 2,
    STATE(646), 1,
      sym__boolean,
    ACTIONS(1630), 2,
      anon_sym_yes,
      anon_sym_no,
  [3722] = 3,
    ACTIONS(1632), 1,
      aux_sym__sep_token1,
    ACTIONS(1634), 1,
      sym__space,
    STATE(110), 1,
      sym__sep,
  [3732] = 3,
    ACTIONS(1636), 1,
      aux_sym__sep_token1,
    ACTIONS(1638), 1,
      sym__space,
    STATE(60), 1,
      sym__sep,
  [3742] = 3,
    ACTIONS(1640), 1,
      aux_sym__sep_token1,
    ACTIONS(1642), 1,
      sym__space,
    STATE(170), 1,
      sym__sep,
  [3752] = 2,
    STATE(612), 1,
      sym__boolean,
    ACTIONS(1644), 2,
      anon_sym_yes,
      anon_sym_no,
  [3760] = 3,
    ACTIONS(1646), 1,
      aux_sym__sep_token1,
    ACTIONS(1648), 1,
      sym__space,
    STATE(295), 1,
      sym__sep,
  [3770] = 2,
    STATE(610), 1,
      sym__boolean,
    ACTIONS(1650), 2,
      anon_sym_yes,
      anon_sym_no,
  [3778] = 2,
    STATE(609), 1,
      sym__boolean,
    ACTIONS(1652), 2,
      anon_sym_yes,
      anon_sym_no,
  [3786] = 3,
    ACTIONS(1654), 1,
      aux_sym__sep_token1,
    ACTIONS(1656), 1,
      sym__space,
    STATE(238), 1,
      sym__sep,
  [3796] = 3,
    ACTIONS(1658), 1,
      aux_sym__sep_token1,
    ACTIONS(1660), 1,
      sym__space,
    STATE(296), 1,
      sym__sep,
  [3806] = 2,
    ACTIONS(1662), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1664), 2,
      anon_sym_none,
      aux_sym__proxy_jump_arg_token1,
  [3814] = 2,
    STATE(595), 1,
      sym__boolean,
    ACTIONS(1666), 2,
      anon_sym_yes,
      anon_sym_no,
  [3822] = 3,
    ACTIONS(1668), 1,
      anon_sym_none,
    ACTIONS(1670), 1,
      sym__number,
    STATE(586), 1,
      sym_bytes,
  [3832] = 3,
    ACTIONS(1672), 1,
      aux_sym__sep_token1,
    ACTIONS(1674), 1,
      sym__space,
    STATE(526), 1,
      sym__sep,
  [3842] = 3,
    ACTIONS(1676), 1,
      aux_sym__sep_token1,
    ACTIONS(1678), 1,
      sym__space,
    STATE(57), 1,
      sym__sep,
  [3852] = 3,
    ACTIONS(1680), 1,
      aux_sym__sep_token1,
    ACTIONS(1682), 1,
      sym__space,
    STATE(294), 1,
      sym__sep,
  [3862] = 3,
    ACTIONS(1684), 1,
      aux_sym__sep_token1,
    ACTIONS(1686), 1,
      sym__space,
    STATE(256), 1,
      sym__sep,
  [3872] = 3,
    ACTIONS(1688), 1,
      aux_sym__sep_token1,
    ACTIONS(1690), 1,
      sym__space,
    STATE(298), 1,
      sym__sep,
  [3882] = 1,
    ACTIONS(1692), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [3888] = 3,
    ACTIONS(1694), 1,
      aux_sym__sep_token1,
    ACTIONS(1696), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [3898] = 2,
    STATE(544), 1,
      sym__boolean,
    ACTIONS(1698), 2,
      anon_sym_yes,
      anon_sym_no,
  [3906] = 3,
    ACTIONS(1700), 1,
      aux_sym__sep_token1,
    ACTIONS(1702), 1,
      sym__space,
    STATE(220), 1,
      sym__sep,
  [3916] = 2,
    STATE(537), 1,
      sym__boolean,
    ACTIONS(1704), 2,
      anon_sym_yes,
      anon_sym_no,
  [3924] = 3,
    ACTIONS(1706), 1,
      aux_sym__sep_token1,
    ACTIONS(1708), 1,
      sym__space,
    STATE(201), 1,
      sym__sep,
  [3934] = 2,
    STATE(487), 1,
      sym__boolean,
    ACTIONS(1710), 2,
      anon_sym_yes,
      anon_sym_no,
  [3942] = 3,
    ACTIONS(1501), 1,
      sym__number,
    ACTIONS(1712), 1,
      anon_sym_any,
    STATE(470), 1,
      sym_number,
  [3952] = 2,
    STATE(491), 1,
      sym__boolean,
    ACTIONS(1714), 2,
      anon_sym_yes,
      anon_sym_no,
  [3960] = 3,
    ACTIONS(1716), 1,
      aux_sym__sep_token1,
    ACTIONS(1718), 1,
      sym__space,
    STATE(41), 1,
      sym__sep,
  [3970] = 2,
    STATE(493), 1,
      sym__boolean,
    ACTIONS(1720), 2,
      anon_sym_yes,
      anon_sym_no,
  [3978] = 3,
    ACTIONS(1722), 1,
      aux_sym__sep_token1,
    ACTIONS(1724), 1,
      sym__space,
    STATE(276), 1,
      sym__sep,
  [3988] = 3,
    ACTIONS(1424), 1,
      anon_sym_COLON,
    ACTIONS(1726), 1,
      aux_sym__match_exec_token2,
    STATE(300), 1,
      aux_sym__string_repeat1,
  [3998] = 3,
    ACTIONS(926), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1533), 1,
      anon_sym_COLON,
    STATE(300), 1,
      aux_sym__string_repeat1,
  [4008] = 3,
    ACTIONS(1729), 1,
      aux_sym__sep_token1,
    ACTIONS(1731), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [4018] = 3,
    ACTIONS(1733), 1,
      sym__space,
    ACTIONS(1735), 1,
      sym__eol,
    STATE(484), 1,
      aux_sym_host_declaration_repeat1,
  [4028] = 2,
    ACTIONS(1737), 1,
      sym__number,
    ACTIONS(1739), 2,
      sym__space,
      sym__eol,
  [4036] = 3,
    ACTIONS(1741), 1,
      aux_sym__sep_token1,
    ACTIONS(1743), 1,
      sym__space,
    STATE(124), 1,
      sym__sep,
  [4046] = 3,
    ACTIONS(1745), 1,
      aux_sym__sep_token1,
    ACTIONS(1747), 1,
      sym__space,
    STATE(121), 1,
      sym__sep,
  [4056] = 2,
    STATE(685), 1,
      sym__boolean,
    ACTIONS(1749), 2,
      anon_sym_yes,
      anon_sym_no,
  [4064] = 2,
    STATE(648), 1,
      sym__boolean,
    ACTIONS(1751), 2,
      anon_sym_yes,
      anon_sym_no,
  [4072] = 3,
    ACTIONS(1753), 1,
      aux_sym__sep_token1,
    ACTIONS(1755), 1,
      sym__space,
    STATE(154), 1,
      sym__sep,
  [4082] = 3,
    ACTIONS(1757), 1,
      aux_sym__sep_token1,
    ACTIONS(1759), 1,
      sym__space,
    STATE(512), 1,
      sym__sep,
  [4092] = 3,
    ACTIONS(1761), 1,
      aux_sym__sep_token1,
    ACTIONS(1763), 1,
      sym__space,
    STATE(114), 1,
      sym__sep,
  [4102] = 3,
    ACTIONS(1765), 1,
      aux_sym__sep_token1,
    ACTIONS(1767), 1,
      sym__space,
    STATE(109), 1,
      sym__sep,
  [4112] = 3,
    ACTIONS(1769), 1,
      aux_sym__sep_token1,
    ACTIONS(1771), 1,
      sym__space,
    STATE(107), 1,
      sym__sep,
  [4122] = 3,
    ACTIONS(1773), 1,
      aux_sym__sep_token1,
    ACTIONS(1775), 1,
      sym__space,
    STATE(105), 1,
      sym__sep,
  [4132] = 3,
    ACTIONS(1777), 1,
      sym__space,
    ACTIONS(1779), 1,
      sym__eol,
    STATE(475), 1,
      aux_sym_match_declaration_repeat1,
  [4142] = 2,
    ACTIONS(1781), 1,
      sym__number,
    ACTIONS(1783), 2,
      sym__space,
      sym__eol,
  [4150] = 2,
    ACTIONS(1785), 1,
      sym__number,
    ACTIONS(1783), 2,
      sym__space,
      sym__eol,
  [4158] = 3,
    ACTIONS(1787), 1,
      anon_sym_DQUOTE,
    ACTIONS(1789), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym__match_localnetwork_repeat2,
  [4168] = 3,
    ACTIONS(1792), 1,
      anon_sym_DQUOTE,
    ACTIONS(1794), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym__match_value_repeat4,
  [4178] = 3,
    ACTIONS(1797), 1,
      aux_sym__sep_token1,
    ACTIONS(1799), 1,
      sym__space,
    STATE(85), 1,
      sym__sep,
  [4188] = 3,
    ACTIONS(1801), 1,
      aux_sym__sep_token1,
    ACTIONS(1803), 1,
      sym__space,
    STATE(445), 1,
      sym__sep,
  [4198] = 1,
    ACTIONS(1805), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4204] = 3,
    ACTIONS(1501), 1,
      sym__number,
    ACTIONS(1807), 1,
      anon_sym_STAR,
    STATE(631), 1,
      sym_number,
  [4214] = 3,
    ACTIONS(1809), 1,
      aux_sym_time_token3,
    ACTIONS(1811), 1,
      aux_sym_time_token4,
    ACTIONS(1813), 1,
      aux_sym_time_token5,
  [4224] = 3,
    ACTIONS(1815), 1,
      aux_sym__sep_token1,
    ACTIONS(1817), 1,
      sym__space,
    STATE(440), 1,
      sym__sep,
  [4234] = 1,
    ACTIONS(1153), 3,
      aux_sym__match_exec_token2,
      sym__space,
      sym__eol,
  [4240] = 1,
    ACTIONS(1608), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4246] = 3,
    ACTIONS(1819), 1,
      anon_sym_DQUOTE,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym__match_localnetwork_repeat2,
  [4256] = 2,
    STATE(689), 1,
      sym__boolean,
    ACTIONS(1823), 2,
      anon_sym_yes,
      anon_sym_no,
  [4264] = 3,
    ACTIONS(1825), 1,
      aux_sym__sep_token1,
    ACTIONS(1827), 1,
      sym__space,
    STATE(134), 1,
      sym__sep,
  [4274] = 3,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
    ACTIONS(1829), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      aux_sym__match_value_repeat4,
  [4284] = 3,
    ACTIONS(1831), 1,
      aux_sym__sep_token1,
    ACTIONS(1833), 1,
      sym__space,
    STATE(242), 1,
      sym__sep,
  [4294] = 3,
    ACTIONS(1835), 1,
      aux_sym__sep_token1,
    ACTIONS(1837), 1,
      sym__space,
    STATE(135), 1,
      sym__sep,
  [4304] = 3,
    ACTIONS(1839), 1,
      aux_sym__sep_token1,
    ACTIONS(1841), 1,
      sym__space,
    STATE(136), 1,
      sym__sep,
  [4314] = 3,
    ACTIONS(1843), 1,
      aux_sym__sep_token1,
    ACTIONS(1845), 1,
      sym__space,
    STATE(436), 1,
      sym__sep,
  [4324] = 3,
    ACTIONS(1847), 1,
      aux_sym__sep_token1,
    ACTIONS(1849), 1,
      sym__space,
    STATE(435), 1,
      sym__sep,
  [4334] = 3,
    ACTIONS(1851), 1,
      sym__space,
    ACTIONS(1853), 1,
      sym__eol,
    STATE(478), 1,
      aux_sym__canonical_domains_repeat1,
  [4344] = 3,
    ACTIONS(1855), 1,
      aux_sym__sep_token1,
    ACTIONS(1857), 1,
      sym__space,
    STATE(597), 1,
      sym__sep,
  [4354] = 3,
    ACTIONS(1501), 1,
      sym__number,
    ACTIONS(1859), 1,
      anon_sym_STAR,
    STATE(322), 1,
      sym_number,
  [4364] = 3,
    ACTIONS(1861), 1,
      anon_sym_DQUOTE,
    ACTIONS(1863), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym__log_verbose_repeat2,
  [4374] = 2,
    ACTIONS(1866), 1,
      sym__number,
    ACTIONS(1868), 2,
      sym__space,
      sym__eol,
  [4382] = 2,
    ACTIONS(1870), 1,
      sym__number,
    ACTIONS(1868), 2,
      sym__space,
      sym__eol,
  [4390] = 3,
    ACTIONS(1616), 1,
      sym__space,
    ACTIONS(1872), 1,
      sym__eol,
    STATE(266), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4400] = 3,
    ACTIONS(1874), 1,
      anon_sym_COMMA,
    ACTIONS(1876), 1,
      anon_sym_COLON,
    STATE(471), 1,
      aux_sym__cnames_map_repeat1,
  [4410] = 2,
    ACTIONS(1878), 1,
      sym__number,
    ACTIONS(1868), 2,
      sym__space,
      sym__eol,
  [4418] = 2,
    STATE(694), 1,
      sym__boolean,
    ACTIONS(1880), 2,
      anon_sym_yes,
      anon_sym_no,
  [4426] = 3,
    ACTIONS(1882), 1,
      aux_sym__sep_token1,
    ACTIONS(1884), 1,
      sym__space,
    STATE(281), 1,
      sym__sep,
  [4436] = 3,
    ACTIONS(1886), 1,
      aux_sym__sep_token1,
    ACTIONS(1888), 1,
      sym__space,
    STATE(280), 1,
      sym__sep,
  [4446] = 3,
    ACTIONS(1890), 1,
      aux_sym__sep_token1,
    ACTIONS(1892), 1,
      sym__space,
    STATE(62), 1,
      sym__sep,
  [4456] = 3,
    ACTIONS(1894), 1,
      aux_sym__sep_token1,
    ACTIONS(1896), 1,
      sym__space,
    STATE(422), 1,
      sym__sep,
  [4466] = 3,
    ACTIONS(1898), 1,
      aux_sym__sep_token1,
    ACTIONS(1900), 1,
      sym__space,
    STATE(91), 1,
      sym__sep,
  [4476] = 3,
    ACTIONS(1902), 1,
      aux_sym__sep_token1,
    ACTIONS(1904), 1,
      sym__space,
    STATE(48), 1,
      sym__sep,
  [4486] = 3,
    ACTIONS(1821), 1,
      anon_sym_COMMA,
    ACTIONS(1906), 1,
      anon_sym_DQUOTE,
    STATE(328), 1,
      aux_sym__match_localnetwork_repeat2,
  [4496] = 3,
    ACTIONS(1908), 1,
      aux_sym__sep_token1,
    ACTIONS(1910), 1,
      sym__space,
    STATE(532), 1,
      sym__sep,
  [4506] = 2,
    ACTIONS(1914), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1912), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [4514] = 3,
    ACTIONS(1916), 1,
      aux_sym__sep_token1,
    ACTIONS(1918), 1,
      sym__space,
    STATE(419), 1,
      sym__sep,
  [4524] = 3,
    ACTIONS(1920), 1,
      aux_sym__sep_token1,
    ACTIONS(1922), 1,
      sym__space,
    STATE(215), 1,
      sym__sep,
  [4534] = 3,
    ACTIONS(1924), 1,
      aux_sym__sep_token1,
    ACTIONS(1926), 1,
      sym__space,
    STATE(418), 1,
      sym__sep,
  [4544] = 3,
    ACTIONS(1928), 1,
      aux_sym__sep_token1,
    ACTIONS(1930), 1,
      sym__space,
    STATE(410), 1,
      sym__sep,
  [4554] = 3,
    ACTIONS(1932), 1,
      aux_sym__sep_token1,
    ACTIONS(1934), 1,
      sym__space,
    STATE(636), 1,
      sym__sep,
  [4564] = 3,
    ACTIONS(1936), 1,
      aux_sym__sep_token1,
    ACTIONS(1938), 1,
      sym__space,
    STATE(570), 1,
      sym__sep,
  [4574] = 3,
    ACTIONS(1940), 1,
      aux_sym__sep_token1,
    ACTIONS(1942), 1,
      sym__space,
    STATE(812), 1,
      sym__sep,
  [4584] = 3,
    ACTIONS(1944), 1,
      aux_sym__sep_token1,
    ACTIONS(1946), 1,
      sym__space,
    STATE(132), 1,
      sym__sep,
  [4594] = 3,
    ACTIONS(1948), 1,
      aux_sym__sep_token1,
    ACTIONS(1950), 1,
      sym__space,
    STATE(145), 1,
      sym__sep,
  [4604] = 3,
    ACTIONS(1952), 1,
      sym__space,
    ACTIONS(1954), 1,
      sym__eol,
    STATE(463), 1,
      aux_sym__dynamic_forward_repeat1,
  [4614] = 3,
    ACTIONS(1956), 1,
      aux_sym__sep_token1,
    ACTIONS(1958), 1,
      sym__space,
    STATE(49), 1,
      sym__sep,
  [4624] = 3,
    ACTIONS(1960), 1,
      aux_sym__sep_token1,
    ACTIONS(1962), 1,
      sym__space,
    STATE(53), 1,
      sym__sep,
  [4634] = 3,
    ACTIONS(1964), 1,
      aux_sym__sep_token1,
    ACTIONS(1966), 1,
      sym__space,
    STATE(87), 1,
      sym__sep,
  [4644] = 3,
    ACTIONS(1968), 1,
      sym__space,
    ACTIONS(1971), 1,
      sym__eol,
    STATE(369), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4654] = 3,
    ACTIONS(1973), 1,
      sym__space,
    ACTIONS(1976), 1,
      sym__eol,
    STATE(370), 1,
      aux_sym__set_env_repeat1,
  [4664] = 3,
    ACTIONS(1978), 1,
      sym__space,
    ACTIONS(1981), 1,
      sym__eol,
    STATE(371), 1,
      aux_sym__send_env_repeat1,
  [4674] = 3,
    ACTIONS(1983), 1,
      sym__space,
    ACTIONS(1985), 1,
      sym__eol,
    STATE(441), 1,
      aux_sym__send_env_repeat1,
  [4684] = 2,
    ACTIONS(1987), 1,
      anon_sym_COLON,
    ACTIONS(1989), 2,
      sym__space,
      sym__eol,
  [4692] = 1,
    ACTIONS(1576), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4698] = 3,
    ACTIONS(1991), 1,
      sym__space,
    ACTIONS(1994), 1,
      sym__eol,
    STATE(375), 1,
      aux_sym__permit_remote_open_repeat1,
  [4708] = 3,
    ACTIONS(1501), 1,
      sym__number,
    ACTIONS(1996), 1,
      anon_sym_STAR,
    STATE(774), 1,
      sym_number,
  [4718] = 1,
    ACTIONS(1571), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4724] = 3,
    ACTIONS(1998), 1,
      aux_sym__sep_token1,
    ACTIONS(2000), 1,
      sym__space,
    STATE(262), 1,
      sym__sep,
  [4734] = 3,
    ACTIONS(2002), 1,
      sym__space,
    ACTIONS(2004), 1,
      sym__eol,
    STATE(462), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4744] = 1,
    ACTIONS(2006), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4750] = 3,
    ACTIONS(2008), 1,
      anon_sym_DQUOTE,
    ACTIONS(2010), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym__log_verbose_repeat2,
  [4760] = 3,
    ACTIONS(2012), 1,
      aux_sym__sep_token1,
    ACTIONS(2014), 1,
      sym__space,
    STATE(391), 1,
      sym__sep,
  [4770] = 2,
    STATE(553), 1,
      sym__boolean,
    ACTIONS(2016), 2,
      anon_sym_yes,
      anon_sym_no,
  [4778] = 1,
    ACTIONS(1517), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4784] = 3,
    ACTIONS(2018), 1,
      sym__space,
    ACTIONS(2021), 1,
      sym__eol,
    STATE(385), 1,
      aux_sym__ignore_unknown_repeat1,
  [4794] = 3,
    ACTIONS(2023), 1,
      aux_sym__sep_token1,
    ACTIONS(2025), 1,
      sym__space,
    STATE(663), 1,
      sym__sep,
  [4804] = 1,
    ACTIONS(1508), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4810] = 2,
    STATE(709), 1,
      sym__boolean,
    ACTIONS(2027), 2,
      anon_sym_yes,
      anon_sym_no,
  [4818] = 3,
    ACTIONS(2029), 1,
      sym__space,
    ACTIONS(2032), 1,
      sym__eol,
    STATE(389), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4828] = 3,
    ACTIONS(2034), 1,
      sym__space,
    ACTIONS(2037), 1,
      sym__eol,
    STATE(390), 1,
      aux_sym__dynamic_forward_repeat1,
  [4838] = 2,
    STATE(711), 1,
      sym__boolean,
    ACTIONS(2039), 2,
      anon_sym_yes,
      anon_sym_no,
  [4846] = 1,
    ACTIONS(2041), 3,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [4852] = 2,
    STATE(712), 1,
      sym__boolean,
    ACTIONS(2043), 2,
      anon_sym_yes,
      anon_sym_no,
  [4860] = 3,
    ACTIONS(2045), 1,
      aux_sym__sep_token1,
    ACTIONS(2047), 1,
      sym__space,
    STATE(288), 1,
      sym__sep,
  [4870] = 1,
    ACTIONS(1388), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4876] = 3,
    ACTIONS(2049), 1,
      aux_sym__sep_token1,
    ACTIONS(2051), 1,
      sym__space,
    STATE(388), 1,
      sym__sep,
  [4886] = 3,
    ACTIONS(2053), 1,
      aux_sym__sep_token1,
    ACTIONS(2055), 1,
      sym__space,
    STATE(517), 1,
      sym__sep,
  [4896] = 3,
    ACTIONS(2057), 1,
      aux_sym__sep_token1,
    ACTIONS(2059), 1,
      sym__space,
    STATE(671), 1,
      sym__sep,
  [4906] = 3,
    ACTIONS(2061), 1,
      sym__space,
    ACTIONS(2063), 1,
      sym__eol,
    STATE(452), 1,
      aux_sym__ignore_unknown_repeat1,
  [4916] = 1,
    ACTIONS(1487), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4922] = 3,
    ACTIONS(1405), 1,
      anon_sym_COLON,
    ACTIONS(2065), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym__cnames_map_repeat1,
  [4932] = 3,
    ACTIONS(2068), 1,
      sym__space,
    ACTIONS(2071), 1,
      sym__eol,
    STATE(402), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4942] = 3,
    ACTIONS(2073), 1,
      sym__space,
    ACTIONS(2076), 1,
      sym__eol,
    STATE(403), 1,
      aux_sym__canonical_domains_repeat1,
  [4952] = 3,
    ACTIONS(2078), 1,
      aux_sym__sep_token1,
    ACTIONS(2080), 1,
      sym__space,
    STATE(534), 1,
      sym__sep,
  [4962] = 3,
    ACTIONS(2082), 1,
      aux_sym__sep_token1,
    ACTIONS(2084), 1,
      sym__space,
    STATE(807), 1,
      sym__sep,
  [4972] = 3,
    ACTIONS(1466), 1,
      aux_sym_time_token3,
    ACTIONS(1468), 1,
      aux_sym_time_token4,
    ACTIONS(1470), 1,
      aux_sym_time_token5,
  [4982] = 3,
    ACTIONS(2086), 1,
      aux_sym__sep_token1,
    ACTIONS(2088), 1,
      sym__space,
    STATE(261), 1,
      sym__sep,
  [4992] = 3,
    ACTIONS(2090), 1,
      anon_sym_DQUOTE,
    ACTIONS(2092), 1,
      aux_sym__match_exec_token3,
    STATE(408), 1,
      aux_sym__string_repeat2,
  [5002] = 1,
    ACTIONS(2095), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [5008] = 2,
    STATE(726), 1,
      sym__boolean,
    ACTIONS(2097), 2,
      anon_sym_yes,
      anon_sym_no,
  [5016] = 3,
    ACTIONS(2099), 1,
      aux_sym__sep_token1,
    ACTIONS(2101), 1,
      sym__space,
    STATE(103), 1,
      sym__sep,
  [5026] = 3,
    ACTIONS(2103), 1,
      aux_sym__sep_token1,
    ACTIONS(2105), 1,
      sym__space,
    STATE(277), 1,
      sym__sep,
  [5036] = 3,
    ACTIONS(2107), 1,
      sym__space,
    ACTIONS(2110), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym_match_declaration_repeat1,
  [5046] = 3,
    ACTIONS(2112), 1,
      aux_sym__sep_token1,
    ACTIONS(2114), 1,
      sym__space,
    STATE(383), 1,
      sym__sep,
  [5056] = 3,
    ACTIONS(2116), 1,
      aux_sym__sep_token1,
    ACTIONS(2118), 1,
      sym__space,
    STATE(54), 1,
      sym__sep,
  [5066] = 3,
    ACTIONS(2120), 1,
      aux_sym__sep_token1,
    ACTIONS(2122), 1,
      sym__space,
    STATE(346), 1,
      sym__sep,
  [5076] = 3,
    ACTIONS(2124), 1,
      aux_sym__sep_token1,
    ACTIONS(2126), 1,
      sym__space,
    STATE(746), 1,
      sym__sep,
  [5086] = 2,
    STATE(729), 1,
      sym__boolean,
    ACTIONS(2128), 2,
      anon_sym_yes,
      anon_sym_no,
  [5094] = 2,
    STATE(733), 1,
      sym__boolean,
    ACTIONS(2130), 2,
      anon_sym_yes,
      anon_sym_no,
  [5102] = 3,
    ACTIONS(2132), 1,
      aux_sym__sep_token1,
    ACTIONS(2134), 1,
      sym__space,
    STATE(290), 1,
      sym__sep,
  [5112] = 3,
    ACTIONS(2136), 1,
      sym__space,
    ACTIONS(2139), 1,
      sym__eol,
    STATE(421), 1,
      aux_sym_host_declaration_repeat1,
  [5122] = 2,
    ACTIONS(2143), 1,
      sym_sig,
    ACTIONS(2141), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5130] = 3,
    ACTIONS(2145), 1,
      aux_sym__sep_token1,
    ACTIONS(2147), 1,
      sym__space,
    STATE(329), 1,
      sym__sep,
  [5140] = 3,
    ACTIONS(2149), 1,
      aux_sym__sep_token1,
    ACTIONS(2151), 1,
      sym__space,
    STATE(234), 1,
      sym__sep,
  [5150] = 3,
    ACTIONS(2153), 1,
      aux_sym__sep_token1,
    ACTIONS(2155), 1,
      sym__space,
    STATE(308), 1,
      sym__sep,
  [5160] = 3,
    ACTIONS(2157), 1,
      aux_sym__sep_token1,
    ACTIONS(2159), 1,
      sym__space,
    STATE(307), 1,
      sym__sep,
  [5170] = 3,
    ACTIONS(2161), 1,
      aux_sym__sep_token1,
    ACTIONS(2163), 1,
      sym__space,
    STATE(237), 1,
      sym__sep,
  [5180] = 3,
    ACTIONS(2165), 1,
      aux_sym__sep_token1,
    ACTIONS(2167), 1,
      sym__space,
    STATE(460), 1,
      sym__sep,
  [5190] = 3,
    ACTIONS(2169), 1,
      sym__space,
    ACTIONS(2171), 1,
      sym__eol,
    STATE(447), 1,
      aux_sym__permit_remote_open_repeat1,
  [5200] = 3,
    ACTIONS(2173), 1,
      sym__space,
    ACTIONS(2175), 1,
      sym__eol,
    STATE(421), 1,
      aux_sym_host_declaration_repeat1,
  [5210] = 3,
    ACTIONS(2177), 1,
      aux_sym__sep_token1,
    ACTIONS(2179), 1,
      sym__space,
    STATE(239), 1,
      sym__sep,
  [5220] = 3,
    ACTIONS(2181), 1,
      aux_sym__sep_token1,
    ACTIONS(2183), 1,
      sym__space,
    STATE(240), 1,
      sym__sep,
  [5230] = 3,
    ACTIONS(2185), 1,
      aux_sym__sep_token1,
    ACTIONS(2187), 1,
      sym__space,
    STATE(122), 1,
      sym__sep,
  [5240] = 3,
    ACTIONS(2189), 1,
      sym__space,
    ACTIONS(2191), 1,
      sym__eol,
    STATE(369), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5250] = 2,
    STATE(749), 1,
      sym__boolean,
    ACTIONS(2193), 2,
      anon_sym_yes,
      anon_sym_no,
  [5258] = 2,
    STATE(750), 1,
      sym__boolean,
    ACTIONS(2195), 2,
      anon_sym_yes,
      anon_sym_no,
  [5266] = 3,
    ACTIONS(2197), 1,
      aux_sym__sep_token1,
    ACTIONS(2199), 1,
      sym__space,
    STATE(267), 1,
      sym__sep,
  [5276] = 3,
    ACTIONS(1501), 1,
      sym__number,
    ACTIONS(2201), 1,
      anon_sym_any,
    STATE(707), 1,
      sym_number,
  [5286] = 3,
    ACTIONS(2203), 1,
      sym__space,
    ACTIONS(2205), 1,
      sym__eol,
    STATE(370), 1,
      aux_sym__set_env_repeat1,
  [5296] = 2,
    STATE(754), 1,
      sym__boolean,
    ACTIONS(2207), 2,
      anon_sym_yes,
      anon_sym_no,
  [5304] = 3,
    ACTIONS(1983), 1,
      sym__space,
    ACTIONS(2209), 1,
      sym__eol,
    STATE(371), 1,
      aux_sym__send_env_repeat1,
  [5314] = 3,
    ACTIONS(2211), 1,
      aux_sym__sep_token1,
    ACTIONS(2213), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [5324] = 2,
    ACTIONS(2215), 1,
      aux_sym_bytes_token1,
    ACTIONS(2217), 2,
      sym__space,
      sym__eol,
  [5332] = 3,
    ACTIONS(2219), 1,
      aux_sym__sep_token1,
    ACTIONS(2221), 1,
      sym__space,
    STATE(70), 1,
      sym__sep,
  [5342] = 2,
    ACTIONS(2225), 1,
      anon_sym_inet,
    ACTIONS(2223), 2,
      anon_sym_any,
      anon_sym_inet6,
  [5350] = 3,
    ACTIONS(2227), 1,
      aux_sym__sep_token1,
    ACTIONS(2229), 1,
      sym__space,
    STATE(119), 1,
      sym__sep,
  [5360] = 3,
    ACTIONS(2169), 1,
      sym__space,
    ACTIONS(2231), 1,
      sym__eol,
    STATE(375), 1,
      aux_sym__permit_remote_open_repeat1,
  [5370] = 3,
    ACTIONS(1501), 1,
      sym__number,
    ACTIONS(2233), 1,
      anon_sym_STAR,
    STATE(692), 1,
      sym_number,
  [5380] = 3,
    ACTIONS(2010), 1,
      anon_sym_COMMA,
    ACTIONS(2235), 1,
      anon_sym_DQUOTE,
    STATE(381), 1,
      aux_sym__log_verbose_repeat2,
  [5390] = 3,
    ACTIONS(2237), 1,
      aux_sym__sep_token1,
    ACTIONS(2239), 1,
      sym__space,
    STATE(120), 1,
      sym__sep,
  [5400] = 3,
    ACTIONS(2241), 1,
      aux_sym__sep_token1,
    ACTIONS(2243), 1,
      sym__space,
    STATE(393), 1,
      sym__sep,
  [5410] = 3,
    ACTIONS(2061), 1,
      sym__space,
    ACTIONS(2245), 1,
      sym__eol,
    STATE(385), 1,
      aux_sym__ignore_unknown_repeat1,
  [5420] = 3,
    ACTIONS(2247), 1,
      aux_sym__sep_token1,
    ACTIONS(2249), 1,
      sym__space,
    STATE(292), 1,
      sym__sep,
  [5430] = 3,
    ACTIONS(2251), 1,
      aux_sym__sep_token1,
    ACTIONS(2253), 1,
      sym__space,
    STATE(113), 1,
      sym__sep,
  [5440] = 3,
    ACTIONS(2255), 1,
      aux_sym__sep_token1,
    ACTIONS(2257), 1,
      sym__space,
    STATE(247), 1,
      sym__sep,
  [5450] = 3,
    ACTIONS(2259), 1,
      aux_sym__sep_token1,
    ACTIONS(2261), 1,
      sym__space,
    STATE(806), 1,
      sym__sep,
  [5460] = 3,
    ACTIONS(2263), 1,
      aux_sym__sep_token1,
    ACTIONS(2265), 1,
      sym__space,
    STATE(118), 1,
      sym__sep,
  [5470] = 3,
    ACTIONS(2267), 1,
      aux_sym__sep_token1,
    ACTIONS(2269), 1,
      sym__space,
    STATE(270), 1,
      sym__sep,
  [5480] = 2,
    ACTIONS(2273), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2271), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [5488] = 2,
    STATE(677), 1,
      sym__boolean,
    ACTIONS(2275), 2,
      anon_sym_yes,
      anon_sym_no,
  [5496] = 3,
    ACTIONS(2203), 1,
      sym__space,
    ACTIONS(2277), 1,
      sym__eol,
    STATE(439), 1,
      aux_sym__set_env_repeat1,
  [5506] = 3,
    ACTIONS(2002), 1,
      sym__space,
    ACTIONS(2279), 1,
      sym__eol,
    STATE(389), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5516] = 3,
    ACTIONS(1952), 1,
      sym__space,
    ACTIONS(2281), 1,
      sym__eol,
    STATE(390), 1,
      aux_sym__dynamic_forward_repeat1,
  [5526] = 3,
    ACTIONS(2283), 1,
      aux_sym__sep_token1,
    ACTIONS(2285), 1,
      sym__space,
    STATE(249), 1,
      sym__sep,
  [5536] = 3,
    ACTIONS(2287), 1,
      aux_sym__sep_token1,
    ACTIONS(2289), 1,
      sym__space,
    STATE(77), 1,
      sym__sep,
  [5546] = 2,
    ACTIONS(2291), 1,
      sym__number,
    ACTIONS(2293), 2,
      sym__space,
      sym__eol,
  [5554] = 2,
    ACTIONS(2295), 1,
      sym__number,
    ACTIONS(2293), 2,
      sym__space,
      sym__eol,
  [5562] = 2,
    ACTIONS(2297), 1,
      sym__number,
    ACTIONS(2293), 2,
      sym__space,
      sym__eol,
  [5570] = 2,
    ACTIONS(2299), 1,
      sym__number,
    ACTIONS(2293), 2,
      sym__space,
      sym__eol,
  [5578] = 2,
    ACTIONS(2301), 1,
      anon_sym_COLON,
    ACTIONS(2303), 2,
      sym__space,
      sym__eol,
  [5586] = 3,
    ACTIONS(1874), 1,
      anon_sym_COMMA,
    ACTIONS(2305), 1,
      anon_sym_COLON,
    STATE(401), 1,
      aux_sym__cnames_map_repeat1,
  [5596] = 3,
    ACTIONS(2307), 1,
      aux_sym__sep_token1,
    ACTIONS(2309), 1,
      sym__space,
    STATE(111), 1,
      sym__sep,
  [5606] = 3,
    ACTIONS(2189), 1,
      sym__space,
    ACTIONS(2311), 1,
      sym__eol,
    STATE(434), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5616] = 3,
    ACTIONS(2313), 1,
      aux_sym__sep_token1,
    ACTIONS(2315), 1,
      sym__space,
    STATE(783), 1,
      sym__sep,
  [5626] = 3,
    ACTIONS(908), 1,
      sym__eol,
    ACTIONS(2317), 1,
      sym__space,
    STATE(413), 1,
      aux_sym_match_declaration_repeat1,
  [5636] = 3,
    ACTIONS(2319), 1,
      aux_sym__sep_token1,
    ACTIONS(2321), 1,
      sym__space,
    STATE(251), 1,
      sym__sep,
  [5646] = 3,
    ACTIONS(2323), 1,
      aux_sym__sep_token1,
    ACTIONS(2325), 1,
      sym__space,
    STATE(495), 1,
      sym__sep,
  [5656] = 3,
    ACTIONS(1851), 1,
      sym__space,
    ACTIONS(2327), 1,
      sym__eol,
    STATE(403), 1,
      aux_sym__canonical_domains_repeat1,
  [5666] = 3,
    ACTIONS(2329), 1,
      sym__space,
    ACTIONS(2331), 1,
      sym__eol,
    STATE(430), 1,
      aux_sym_host_declaration_repeat1,
  [5676] = 3,
    ACTIONS(2333), 1,
      anon_sym_DQUOTE,
    ACTIONS(2335), 1,
      aux_sym__match_exec_token3,
    STATE(408), 1,
      aux_sym__string_repeat2,
  [5686] = 3,
    ACTIONS(2337), 1,
      aux_sym__sep_token1,
    ACTIONS(2339), 1,
      sym__space,
    STATE(42), 1,
      sym__sep,
  [5696] = 3,
    ACTIONS(2341), 1,
      aux_sym__sep_token1,
    ACTIONS(2343), 1,
      sym__space,
    STATE(274), 1,
      sym__sep,
  [5706] = 3,
    ACTIONS(2345), 1,
      aux_sym__sep_token1,
    ACTIONS(2347), 1,
      sym__space,
    STATE(255), 1,
      sym__sep,
  [5716] = 3,
    ACTIONS(2349), 1,
      sym__space,
    ACTIONS(2351), 1,
      sym__eol,
    STATE(421), 1,
      aux_sym_host_declaration_repeat1,
  [5726] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5731] = 1,
    ACTIONS(2355), 2,
      sym__space,
      sym__eol,
  [5736] = 1,
    ACTIONS(2357), 2,
      sym__space,
      sym__eol,
  [5741] = 1,
    ACTIONS(2359), 2,
      sym__space,
      sym__eol,
  [5746] = 1,
    ACTIONS(2361), 2,
      sym__space,
      sym__eol,
  [5751] = 1,
    ACTIONS(2363), 2,
      sym__space,
      sym__eol,
  [5756] = 1,
    ACTIONS(2365), 2,
      sym__space,
      sym__eol,
  [5761] = 1,
    ACTIONS(2367), 2,
      sym__space,
      sym__eol,
  [5766] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [5771] = 1,
    ACTIONS(2371), 2,
      sym__space,
      sym__eol,
  [5776] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(611), 1,
      sym_number,
  [5783] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5788] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5793] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5798] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5803] = 1,
    ACTIONS(2375), 2,
      sym__space,
      sym__eol,
  [5808] = 1,
    ACTIONS(2375), 2,
      sym__space,
      sym__eol,
  [5813] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5818] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5823] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5828] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5833] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5838] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5843] = 1,
    ACTIONS(2377), 2,
      sym__space,
      sym__eol,
  [5848] = 2,
    ACTIONS(2379), 1,
      aux_sym__all_token1,
    STATE(616), 1,
      sym__all,
  [5855] = 2,
    ACTIONS(2381), 1,
      aux_sym__all_token1,
    STATE(617), 1,
      sym__all,
  [5862] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5867] = 2,
    ACTIONS(2383), 1,
      anon_sym_DQUOTE,
    ACTIONS(2385), 1,
      aux_sym__match_localnetwork_token2,
  [5874] = 1,
    ACTIONS(2387), 2,
      sym__space,
      sym__eol,
  [5879] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5884] = 1,
    ACTIONS(2389), 2,
      sym__space,
      sym__eol,
  [5889] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5894] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(600), 1,
      sym_number,
  [5901] = 1,
    ACTIONS(2391), 2,
      anon_sym_DQUOTE,
      aux_sym__match_exec_token3,
  [5906] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5911] = 2,
    ACTIONS(1142), 1,
      sym__number,
    STATE(634), 1,
      sym_time,
  [5918] = 1,
    ACTIONS(2293), 2,
      sym__space,
      sym__eol,
  [5923] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5928] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5933] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5938] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5943] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(573), 1,
      sym_number,
  [5950] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5955] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5960] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(644), 1,
      sym_number,
  [5967] = 1,
    ACTIONS(2393), 2,
      sym__space,
      sym__eol,
  [5972] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5977] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(551), 1,
      sym_number,
  [5984] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [5989] = 2,
    ACTIONS(2395), 1,
      sym__var_name,
    STATE(461), 1,
      sym__set_env_value,
  [5996] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(392), 1,
      sym_number,
  [6003] = 1,
    ACTIONS(2397), 2,
      sym__space,
      sym__eol,
  [6008] = 1,
    ACTIONS(2399), 2,
      sym__space,
      sym__eol,
  [6013] = 1,
    ACTIONS(2401), 2,
      sym__space,
      sym__eol,
  [6018] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6023] = 1,
    ACTIONS(2403), 2,
      sym__space,
      sym__eol,
  [6028] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6033] = 2,
    ACTIONS(826), 1,
      sym__space,
    ACTIONS(828), 1,
      sym__eol,
  [6040] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6045] = 1,
    ACTIONS(2405), 2,
      sym__space,
      sym__eol,
  [6050] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6055] = 2,
    ACTIONS(2407), 1,
      sym__space,
    ACTIONS(2409), 1,
      sym__eol,
  [6062] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6067] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6072] = 1,
    ACTIONS(2411), 2,
      sym__space,
      sym__eol,
  [6077] = 1,
    ACTIONS(2413), 2,
      sym__space,
      sym__eol,
  [6082] = 1,
    ACTIONS(2415), 2,
      sym__space,
      sym__eol,
  [6087] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6092] = 1,
    ACTIONS(2417), 2,
      sym__space,
      sym__eol,
  [6097] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6102] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6107] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6112] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6117] = 1,
    ACTIONS(2419), 2,
      sym__space,
      sym__eol,
  [6122] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6127] = 1,
    ACTIONS(2421), 2,
      sym__space,
      sym__eol,
  [6132] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6137] = 2,
    ACTIONS(2423), 1,
      sym__space,
    ACTIONS(2425), 1,
      sym__eol,
  [6144] = 1,
    ACTIONS(2427), 2,
      sym__space,
      sym__eol,
  [6149] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6154] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6159] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6164] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6169] = 1,
    ACTIONS(2429), 2,
      sym__space,
      sym__eol,
  [6174] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6179] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(722), 1,
      sym_number,
  [6186] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6191] = 2,
    ACTIONS(1153), 1,
      anon_sym_COLON,
    ACTIONS(2431), 1,
      aux_sym__match_exec_token2,
  [6198] = 1,
    ACTIONS(2433), 2,
      sym__space,
      sym__eol,
  [6203] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6208] = 1,
    ACTIONS(2435), 2,
      sym__space,
      sym__eol,
  [6213] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6218] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6223] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6228] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(697), 1,
      sym_number,
  [6235] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6240] = 1,
    ACTIONS(2437), 2,
      sym__space,
      sym__eol,
  [6245] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6250] = 1,
    ACTIONS(2439), 2,
      sym__space,
      sym__eol,
  [6255] = 2,
    ACTIONS(1142), 1,
      sym__number,
    STATE(700), 1,
      sym_time,
  [6262] = 2,
    ACTIONS(2441), 1,
      sym__space,
    ACTIONS(2443), 1,
      sym__eol,
  [6269] = 2,
    ACTIONS(2445), 1,
      sym__space,
    ACTIONS(2447), 1,
      sym__eol,
  [6276] = 1,
    ACTIONS(2411), 2,
      sym__space,
      sym__eol,
  [6281] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6286] = 1,
    ACTIONS(2447), 2,
      sym__space,
      sym__eol,
  [6291] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6296] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6301] = 2,
    ACTIONS(2395), 1,
      sym__var_name,
    STATE(705), 1,
      sym__set_env_value,
  [6308] = 1,
    ACTIONS(2449), 2,
      sym__space,
      sym__eol,
  [6313] = 1,
    ACTIONS(2451), 2,
      sym__space,
      sym__eol,
  [6318] = 1,
    ACTIONS(2453), 2,
      sym__space,
      sym__eol,
  [6323] = 1,
    ACTIONS(1458), 2,
      sym__space,
      sym__eol,
  [6328] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(744), 1,
      sym_number,
  [6335] = 1,
    ACTIONS(2455), 2,
      sym__space,
      sym__eol,
  [6340] = 1,
    ACTIONS(2457), 2,
      sym__space,
      sym__eol,
  [6345] = 1,
    ACTIONS(2459), 2,
      sym__space,
      sym__eol,
  [6350] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6355] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6360] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6365] = 1,
    ACTIONS(2461), 2,
      sym__space,
      sym__eol,
  [6370] = 1,
    ACTIONS(2463), 2,
      sym__space,
      sym__eol,
  [6375] = 2,
    ACTIONS(2465), 1,
      sym__space,
    ACTIONS(2467), 1,
      sym__eol,
  [6382] = 1,
    ACTIONS(1739), 2,
      sym__space,
      sym__eol,
  [6387] = 1,
    ACTIONS(2469), 2,
      aux_sym__match_localnetwork_token3,
      anon_sym_STAR,
  [6392] = 1,
    ACTIONS(2471), 2,
      sym__space,
      sym__eol,
  [6397] = 1,
    ACTIONS(2473), 2,
      sym__space,
      sym__eol,
  [6402] = 1,
    ACTIONS(2475), 2,
      sym__space,
      sym__eol,
  [6407] = 1,
    ACTIONS(2477), 2,
      sym__space,
      sym__eol,
  [6412] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6417] = 1,
    ACTIONS(2479), 2,
      sym__space,
      sym__eol,
  [6422] = 2,
    ACTIONS(1779), 1,
      sym__eol,
    ACTIONS(2481), 1,
      sym__space,
  [6429] = 1,
    ACTIONS(2483), 2,
      sym__space,
      sym__eol,
  [6434] = 1,
    ACTIONS(2485), 2,
      sym__space,
      sym__eol,
  [6439] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6444] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6449] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6454] = 2,
    ACTIONS(2487), 1,
      aux_sym_time_token4,
    ACTIONS(2489), 1,
      aux_sym_time_token5,
  [6461] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6466] = 1,
    ACTIONS(2491), 2,
      sym__space,
      sym__eol,
  [6471] = 1,
    ACTIONS(2493), 2,
      sym__space,
      sym__eol,
  [6476] = 1,
    ACTIONS(2495), 2,
      sym__space,
      sym__eol,
  [6481] = 1,
    ACTIONS(2497), 2,
      sym__space,
      sym__eol,
  [6486] = 1,
    ACTIONS(2499), 2,
      sym__space,
      sym__eol,
  [6491] = 1,
    ACTIONS(2110), 2,
      sym__space,
      sym__eol,
  [6496] = 1,
    ACTIONS(2501), 2,
      sym__space,
      sym__eol,
  [6501] = 1,
    ACTIONS(2503), 2,
      sym__space,
      sym__eol,
  [6506] = 1,
    ACTIONS(2505), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6511] = 1,
    ACTIONS(2507), 2,
      sym__space,
      sym__eol,
  [6516] = 1,
    ACTIONS(2509), 2,
      sym__space,
      sym__eol,
  [6521] = 1,
    ACTIONS(2511), 2,
      sym__space,
      sym__eol,
  [6526] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6531] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(723), 1,
      sym_number,
  [6538] = 2,
    ACTIONS(1468), 1,
      aux_sym_time_token4,
    ACTIONS(1470), 1,
      aux_sym_time_token5,
  [6545] = 1,
    ACTIONS(1783), 2,
      sym__space,
      sym__eol,
  [6550] = 1,
    ACTIONS(2513), 2,
      sym__space,
      sym__eol,
  [6555] = 1,
    ACTIONS(2515), 2,
      sym__space,
      sym__eol,
  [6560] = 1,
    ACTIONS(2517), 2,
      sym__space,
      sym__eol,
  [6565] = 1,
    ACTIONS(2519), 2,
      sym__space,
      sym__eol,
  [6570] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6575] = 1,
    ACTIONS(2521), 2,
      sym__space,
      sym__eol,
  [6580] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6585] = 1,
    ACTIONS(2523), 2,
      sym__space,
      sym__eol,
  [6590] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6595] = 1,
    ACTIONS(2525), 2,
      sym__space,
      sym__eol,
  [6600] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6605] = 1,
    ACTIONS(2527), 2,
      sym__space,
      sym__eol,
  [6610] = 1,
    ACTIONS(2529), 2,
      sym__space,
      sym__eol,
  [6615] = 1,
    ACTIONS(2531), 2,
      sym__space,
      sym__eol,
  [6620] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6625] = 1,
    ACTIONS(2533), 2,
      sym__space,
      sym__eol,
  [6630] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6635] = 1,
    ACTIONS(2535), 2,
      sym__space,
      sym__eol,
  [6640] = 1,
    ACTIONS(2537), 2,
      sym__space,
      sym__eol,
  [6645] = 1,
    ACTIONS(2539), 2,
      sym__space,
      sym__eol,
  [6650] = 1,
    ACTIONS(2541), 2,
      sym__space,
      sym__eol,
  [6655] = 1,
    ACTIONS(2543), 2,
      sym__space,
      sym__eol,
  [6660] = 1,
    ACTIONS(2545), 2,
      sym__space,
      sym__eol,
  [6665] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6670] = 2,
    ACTIONS(2547), 1,
      anon_sym_none,
    ACTIONS(2549), 1,
      aux_sym__escape_char_token2,
  [6677] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6682] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6687] = 1,
    ACTIONS(2551), 2,
      sym__space,
      sym__eol,
  [6692] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6697] = 1,
    ACTIONS(2553), 2,
      sym__space,
      sym__eol,
  [6702] = 1,
    ACTIONS(2555), 2,
      sym__space,
      sym__eol,
  [6707] = 1,
    ACTIONS(2021), 2,
      sym__space,
      sym__eol,
  [6712] = 1,
    ACTIONS(2557), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [6717] = 1,
    ACTIONS(2559), 2,
      sym__space,
      sym__eol,
  [6722] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6727] = 1,
    ACTIONS(2519), 2,
      sym__space,
      sym__eol,
  [6732] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6737] = 1,
    ACTIONS(2561), 2,
      sym__space,
      sym__eol,
  [6742] = 1,
    ACTIONS(2563), 2,
      sym__space,
      sym__eol,
  [6747] = 1,
    ACTIONS(2565), 2,
      sym__space,
      sym__eol,
  [6752] = 1,
    ACTIONS(2567), 2,
      sym__space,
      sym__eol,
  [6757] = 1,
    ACTIONS(2569), 2,
      sym__space,
      sym__eol,
  [6762] = 1,
    ACTIONS(2571), 2,
      sym__space,
      sym__eol,
  [6767] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6772] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [6777] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6782] = 1,
    ACTIONS(2575), 2,
      sym__space,
      sym__eol,
  [6787] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6792] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6797] = 1,
    ACTIONS(2577), 2,
      sym__space,
      sym__eol,
  [6802] = 1,
    ACTIONS(2579), 2,
      sym__space,
      sym__eol,
  [6807] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6812] = 1,
    ACTIONS(2581), 2,
      sym__space,
      sym__eol,
  [6817] = 1,
    ACTIONS(2583), 2,
      sym__space,
      sym__eol,
  [6822] = 1,
    ACTIONS(2585), 2,
      sym__space,
      sym__eol,
  [6827] = 1,
    ACTIONS(2587), 2,
      sym__space,
      sym__eol,
  [6832] = 1,
    ACTIONS(2589), 2,
      sym__space,
      sym__eol,
  [6837] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6842] = 1,
    ACTIONS(1989), 2,
      sym__space,
      sym__eol,
  [6847] = 1,
    ACTIONS(2591), 2,
      sym__space,
      sym__eol,
  [6852] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6857] = 1,
    ACTIONS(2593), 2,
      sym__space,
      sym__eol,
  [6862] = 1,
    ACTIONS(2595), 2,
      sym__space,
      sym__eol,
  [6867] = 1,
    ACTIONS(2597), 2,
      sym__space,
      sym__eol,
  [6872] = 1,
    ACTIONS(1787), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6877] = 1,
    ACTIONS(2599), 2,
      sym__space,
      sym__eol,
  [6882] = 1,
    ACTIONS(2601), 2,
      sym__space,
      sym__eol,
  [6887] = 1,
    ACTIONS(2603), 2,
      sym__space,
      sym__eol,
  [6892] = 1,
    ACTIONS(2605), 2,
      sym__space,
      sym__eol,
  [6897] = 1,
    ACTIONS(2607), 2,
      sym__space,
      sym__eol,
  [6902] = 1,
    ACTIONS(2609), 2,
      sym__space,
      sym__eol,
  [6907] = 1,
    ACTIONS(2611), 2,
      sym__space,
      sym__eol,
  [6912] = 1,
    ACTIONS(2613), 2,
      sym__space,
      sym__eol,
  [6917] = 1,
    ACTIONS(2615), 2,
      sym__space,
      sym__eol,
  [6922] = 1,
    ACTIONS(2617), 2,
      sym__space,
      sym__eol,
  [6927] = 1,
    ACTIONS(2619), 2,
      sym__space,
      sym__eol,
  [6932] = 1,
    ACTIONS(2621), 2,
      sym__space,
      sym__eol,
  [6937] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [6942] = 1,
    ACTIONS(2623), 2,
      sym__space,
      sym__eol,
  [6947] = 2,
    ACTIONS(2625), 1,
      sym__space,
    ACTIONS(2627), 1,
      sym__eol,
  [6954] = 1,
    ACTIONS(2629), 2,
      sym__space,
      sym__eol,
  [6959] = 1,
    ACTIONS(2631), 2,
      sym__space,
      sym__eol,
  [6964] = 1,
    ACTIONS(2633), 2,
      sym__space,
      sym__eol,
  [6969] = 1,
    ACTIONS(2635), 2,
      sym__space,
      sym__eol,
  [6974] = 1,
    ACTIONS(2637), 2,
      sym__space,
      sym__eol,
  [6979] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6984] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6989] = 1,
    ACTIONS(2639), 2,
      sym__space,
      sym__eol,
  [6994] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [6999] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7004] = 1,
    ACTIONS(2641), 2,
      sym__space,
      sym__eol,
  [7009] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7014] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7019] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [7024] = 1,
    ACTIONS(2643), 2,
      sym__space,
      sym__eol,
  [7029] = 1,
    ACTIONS(2645), 2,
      sym__space,
      sym__eol,
  [7034] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [7039] = 1,
    ACTIONS(2647), 2,
      sym__space,
      sym__eol,
  [7044] = 1,
    ACTIONS(2649), 2,
      sym__space,
      sym__eol,
  [7049] = 1,
    ACTIONS(1868), 2,
      sym__space,
      sym__eol,
  [7054] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7059] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7064] = 1,
    ACTIONS(2651), 2,
      sym__space,
      sym__eol,
  [7069] = 1,
    ACTIONS(2653), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7074] = 1,
    ACTIONS(2655), 2,
      sym__space,
      sym__eol,
  [7079] = 1,
    ACTIONS(2657), 2,
      sym__space,
      sym__eol,
  [7084] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7089] = 2,
    ACTIONS(1142), 1,
      sym__number,
    STATE(691), 1,
      sym_time,
  [7096] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [7101] = 2,
    ACTIONS(1501), 1,
      sym__number,
    STATE(736), 1,
      sym_number,
  [7108] = 1,
    ACTIONS(2659), 2,
      sym__space,
      sym__eol,
  [7113] = 1,
    ACTIONS(2661), 2,
      sym__space,
      sym__eol,
  [7118] = 1,
    ACTIONS(2663), 2,
      sym__space,
      sym__eol,
  [7123] = 1,
    ACTIONS(2665), 2,
      sym__space,
      sym__eol,
  [7128] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [7133] = 1,
    ACTIONS(2667), 2,
      sym__space,
      sym__eol,
  [7138] = 1,
    ACTIONS(2669), 2,
      sym__space,
      sym__eol,
  [7143] = 1,
    ACTIONS(2671), 2,
      sym__space,
      sym__eol,
  [7148] = 1,
    ACTIONS(2673), 2,
      sym__space,
      sym__eol,
  [7153] = 2,
    ACTIONS(2675), 1,
      sym__space,
    ACTIONS(2677), 1,
      sym__eol,
  [7160] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7165] = 1,
    ACTIONS(2679), 2,
      sym__space,
      sym__eol,
  [7170] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7175] = 1,
    ACTIONS(2681), 2,
      sym__space,
      sym__eol,
  [7180] = 1,
    ACTIONS(2683), 2,
      sym__space,
      sym__eol,
  [7185] = 1,
    ACTIONS(2677), 2,
      sym__space,
      sym__eol,
  [7190] = 1,
    ACTIONS(2685), 2,
      sym__space,
      sym__eol,
  [7195] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7200] = 2,
    ACTIONS(2335), 1,
      aux_sym__match_exec_token3,
    STATE(480), 1,
      aux_sym__string_repeat2,
  [7207] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [7212] = 2,
    ACTIONS(1811), 1,
      aux_sym_time_token4,
    ACTIONS(1813), 1,
      aux_sym_time_token5,
  [7219] = 1,
    ACTIONS(2373), 2,
      sym__space,
      sym__eol,
  [7224] = 1,
    ACTIONS(2687), 1,
      anon_sym_COLON,
  [7228] = 1,
    ACTIONS(2689), 1,
      anon_sym_RBRACE,
  [7232] = 1,
    ACTIONS(2691), 1,
      sym__eol,
  [7236] = 1,
    ACTIONS(2693), 1,
      anon_sym_DQUOTE,
  [7240] = 1,
    ACTIONS(2695), 1,
      anon_sym_DQUOTE,
  [7244] = 1,
    ACTIONS(2697), 1,
      sym_sig,
  [7248] = 1,
    ACTIONS(2699), 1,
      sym__var_name,
  [7252] = 1,
    ACTIONS(2701), 1,
      sym_cipher,
  [7256] = 1,
    ACTIONS(2703), 1,
      aux_sym__match_localnetwork_token2,
  [7260] = 1,
    ACTIONS(2705), 1,
      anon_sym_DQUOTE,
  [7264] = 1,
    ACTIONS(2627), 1,
      sym__eol,
  [7268] = 1,
    ACTIONS(2707), 1,
      sym__var_name,
  [7272] = 1,
    ACTIONS(2709), 1,
      sym_verbosity,
  [7276] = 1,
    ACTIONS(2711), 1,
      sym_key_sig,
  [7280] = 1,
    ACTIONS(2713), 1,
      sym_key_sig,
  [7284] = 1,
    ACTIONS(2715), 1,
      sym_kex,
  [7288] = 1,
    ACTIONS(1470), 1,
      aux_sym_time_token5,
  [7292] = 1,
    ACTIONS(2717), 1,
      sym__space,
  [7296] = 1,
    ACTIONS(2719), 1,
      aux_sym__match_localnetwork_token3,
  [7300] = 1,
    ACTIONS(2489), 1,
      aux_sym_time_token5,
  [7304] = 1,
    ACTIONS(2721), 1,
      sym_mac,
  [7308] = 1,
    ACTIONS(2723), 1,
      anon_sym_COLON,
  [7312] = 1,
    ACTIONS(2725), 1,
      aux_sym_time_token5,
  [7316] = 1,
    ACTIONS(2727), 1,
      sym_key_sig,
  [7320] = 1,
    ACTIONS(2729), 1,
      aux_sym__match_localnetwork_token2,
  [7324] = 1,
    ACTIONS(2731), 1,
      sym_authentication,
  [7328] = 1,
    ACTIONS(2733), 1,
      aux_sym__match_localnetwork_token3,
  [7332] = 1,
    ACTIONS(1813), 1,
      aux_sym_time_token5,
  [7336] = 1,
    ACTIONS(2735), 1,
      anon_sym_COLON,
  [7340] = 1,
    ACTIONS(2737), 1,
      sym_kex,
  [7344] = 1,
    ACTIONS(2739), 1,
      anon_sym_EQ,
  [7348] = 1,
    ACTIONS(2741), 1,
      sym_key_sig,
  [7352] = 1,
    ACTIONS(2743), 1,
      ts_builtin_sym_end,
  [7356] = 1,
    ACTIONS(828), 1,
      sym__eol,
  [7360] = 1,
    ACTIONS(2409), 1,
      sym__eol,
  [7364] = 1,
    ACTIONS(2745), 1,
      sym_facility,
  [7368] = 1,
    ACTIONS(2747), 1,
      aux_sym__stream_local_bind_mask_token2,
  [7372] = 1,
    ACTIONS(2749), 1,
      anon_sym_DQUOTE,
  [7376] = 1,
    ACTIONS(2751), 1,
      sym_cipher,
  [7380] = 1,
    ACTIONS(2753), 1,
      anon_sym_RBRACE,
  [7384] = 1,
    ACTIONS(2755), 1,
      sym_sig,
  [7388] = 1,
    ACTIONS(2757), 1,
      sym_authentication,
  [7392] = 1,
    ACTIONS(908), 1,
      sym__eol,
  [7396] = 1,
    ACTIONS(2759), 1,
      anon_sym_RBRACE,
  [7400] = 1,
    ACTIONS(2761), 1,
      sym__eol,
  [7404] = 1,
    ACTIONS(2763), 1,
      anon_sym_RBRACE,
  [7408] = 1,
    ACTIONS(2765), 1,
      anon_sym_RBRACE,
  [7412] = 1,
    ACTIONS(2767), 1,
      anon_sym_RBRACE,
  [7416] = 1,
    ACTIONS(2769), 1,
      sym_mac,
  [7420] = 1,
    ACTIONS(2771), 1,
      sym__var_name,
  [7424] = 1,
    ACTIONS(2773), 1,
      sym__var_name,
  [7428] = 1,
    ACTIONS(2775), 1,
      sym__var_name,
  [7432] = 1,
    ACTIONS(2777), 1,
      sym__var_name,
  [7436] = 1,
    ACTIONS(2779), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 67,
  [SMALL_STATE(38)] = 131,
  [SMALL_STATE(39)] = 195,
  [SMALL_STATE(40)] = 256,
  [SMALL_STATE(41)] = 311,
  [SMALL_STATE(42)] = 355,
  [SMALL_STATE(43)] = 399,
  [SMALL_STATE(44)] = 437,
  [SMALL_STATE(45)] = 475,
  [SMALL_STATE(46)] = 513,
  [SMALL_STATE(47)] = 551,
  [SMALL_STATE(48)] = 584,
  [SMALL_STATE(49)] = 609,
  [SMALL_STATE(50)] = 634,
  [SMALL_STATE(51)] = 657,
  [SMALL_STATE(52)] = 680,
  [SMALL_STATE(53)] = 702,
  [SMALL_STATE(54)] = 730,
  [SMALL_STATE(55)] = 754,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 804,
  [SMALL_STATE(58)] = 830,
  [SMALL_STATE(59)] = 856,
  [SMALL_STATE(60)] = 879,
  [SMALL_STATE(61)] = 902,
  [SMALL_STATE(62)] = 925,
  [SMALL_STATE(63)] = 948,
  [SMALL_STATE(64)] = 971,
  [SMALL_STATE(65)] = 992,
  [SMALL_STATE(66)] = 1017,
  [SMALL_STATE(67)] = 1040,
  [SMALL_STATE(68)] = 1059,
  [SMALL_STATE(69)] = 1082,
  [SMALL_STATE(70)] = 1103,
  [SMALL_STATE(71)] = 1126,
  [SMALL_STATE(72)] = 1147,
  [SMALL_STATE(73)] = 1170,
  [SMALL_STATE(74)] = 1193,
  [SMALL_STATE(75)] = 1216,
  [SMALL_STATE(76)] = 1236,
  [SMALL_STATE(77)] = 1256,
  [SMALL_STATE(78)] = 1276,
  [SMALL_STATE(79)] = 1296,
  [SMALL_STATE(80)] = 1316,
  [SMALL_STATE(81)] = 1336,
  [SMALL_STATE(82)] = 1356,
  [SMALL_STATE(83)] = 1368,
  [SMALL_STATE(84)] = 1384,
  [SMALL_STATE(85)] = 1396,
  [SMALL_STATE(86)] = 1412,
  [SMALL_STATE(87)] = 1428,
  [SMALL_STATE(88)] = 1448,
  [SMALL_STATE(89)] = 1464,
  [SMALL_STATE(90)] = 1477,
  [SMALL_STATE(91)] = 1490,
  [SMALL_STATE(92)] = 1509,
  [SMALL_STATE(93)] = 1526,
  [SMALL_STATE(94)] = 1543,
  [SMALL_STATE(95)] = 1554,
  [SMALL_STATE(96)] = 1571,
  [SMALL_STATE(97)] = 1582,
  [SMALL_STATE(98)] = 1597,
  [SMALL_STATE(99)] = 1614,
  [SMALL_STATE(100)] = 1625,
  [SMALL_STATE(101)] = 1642,
  [SMALL_STATE(102)] = 1659,
  [SMALL_STATE(103)] = 1674,
  [SMALL_STATE(104)] = 1689,
  [SMALL_STATE(105)] = 1704,
  [SMALL_STATE(106)] = 1721,
  [SMALL_STATE(107)] = 1736,
  [SMALL_STATE(108)] = 1753,
  [SMALL_STATE(109)] = 1768,
  [SMALL_STATE(110)] = 1785,
  [SMALL_STATE(111)] = 1804,
  [SMALL_STATE(112)] = 1819,
  [SMALL_STATE(113)] = 1834,
  [SMALL_STATE(114)] = 1845,
  [SMALL_STATE(115)] = 1862,
  [SMALL_STATE(116)] = 1879,
  [SMALL_STATE(117)] = 1896,
  [SMALL_STATE(118)] = 1915,
  [SMALL_STATE(119)] = 1932,
  [SMALL_STATE(120)] = 1949,
  [SMALL_STATE(121)] = 1966,
  [SMALL_STATE(122)] = 1977,
  [SMALL_STATE(123)] = 1996,
  [SMALL_STATE(124)] = 2011,
  [SMALL_STATE(125)] = 2028,
  [SMALL_STATE(126)] = 2041,
  [SMALL_STATE(127)] = 2058,
  [SMALL_STATE(128)] = 2073,
  [SMALL_STATE(129)] = 2088,
  [SMALL_STATE(130)] = 2101,
  [SMALL_STATE(131)] = 2118,
  [SMALL_STATE(132)] = 2135,
  [SMALL_STATE(133)] = 2148,
  [SMALL_STATE(134)] = 2165,
  [SMALL_STATE(135)] = 2182,
  [SMALL_STATE(136)] = 2199,
  [SMALL_STATE(137)] = 2216,
  [SMALL_STATE(138)] = 2235,
  [SMALL_STATE(139)] = 2252,
  [SMALL_STATE(140)] = 2264,
  [SMALL_STATE(141)] = 2278,
  [SMALL_STATE(142)] = 2294,
  [SMALL_STATE(143)] = 2304,
  [SMALL_STATE(144)] = 2314,
  [SMALL_STATE(145)] = 2322,
  [SMALL_STATE(146)] = 2334,
  [SMALL_STATE(147)] = 2350,
  [SMALL_STATE(148)] = 2364,
  [SMALL_STATE(149)] = 2378,
  [SMALL_STATE(150)] = 2388,
  [SMALL_STATE(151)] = 2404,
  [SMALL_STATE(152)] = 2418,
  [SMALL_STATE(153)] = 2426,
  [SMALL_STATE(154)] = 2438,
  [SMALL_STATE(155)] = 2454,
  [SMALL_STATE(156)] = 2470,
  [SMALL_STATE(157)] = 2480,
  [SMALL_STATE(158)] = 2494,
  [SMALL_STATE(159)] = 2510,
  [SMALL_STATE(160)] = 2520,
  [SMALL_STATE(161)] = 2532,
  [SMALL_STATE(162)] = 2542,
  [SMALL_STATE(163)] = 2556,
  [SMALL_STATE(164)] = 2568,
  [SMALL_STATE(165)] = 2582,
  [SMALL_STATE(166)] = 2592,
  [SMALL_STATE(167)] = 2608,
  [SMALL_STATE(168)] = 2618,
  [SMALL_STATE(169)] = 2628,
  [SMALL_STATE(170)] = 2638,
  [SMALL_STATE(171)] = 2648,
  [SMALL_STATE(172)] = 2659,
  [SMALL_STATE(173)] = 2670,
  [SMALL_STATE(174)] = 2679,
  [SMALL_STATE(175)] = 2690,
  [SMALL_STATE(176)] = 2701,
  [SMALL_STATE(177)] = 2712,
  [SMALL_STATE(178)] = 2723,
  [SMALL_STATE(179)] = 2736,
  [SMALL_STATE(180)] = 2747,
  [SMALL_STATE(181)] = 2758,
  [SMALL_STATE(182)] = 2769,
  [SMALL_STATE(183)] = 2780,
  [SMALL_STATE(184)] = 2791,
  [SMALL_STATE(185)] = 2802,
  [SMALL_STATE(186)] = 2813,
  [SMALL_STATE(187)] = 2824,
  [SMALL_STATE(188)] = 2835,
  [SMALL_STATE(189)] = 2846,
  [SMALL_STATE(190)] = 2855,
  [SMALL_STATE(191)] = 2866,
  [SMALL_STATE(192)] = 2877,
  [SMALL_STATE(193)] = 2888,
  [SMALL_STATE(194)] = 2899,
  [SMALL_STATE(195)] = 2910,
  [SMALL_STATE(196)] = 2923,
  [SMALL_STATE(197)] = 2932,
  [SMALL_STATE(198)] = 2943,
  [SMALL_STATE(199)] = 2950,
  [SMALL_STATE(200)] = 2959,
  [SMALL_STATE(201)] = 2970,
  [SMALL_STATE(202)] = 2983,
  [SMALL_STATE(203)] = 2992,
  [SMALL_STATE(204)] = 3003,
  [SMALL_STATE(205)] = 3014,
  [SMALL_STATE(206)] = 3027,
  [SMALL_STATE(207)] = 3038,
  [SMALL_STATE(208)] = 3051,
  [SMALL_STATE(209)] = 3058,
  [SMALL_STATE(210)] = 3067,
  [SMALL_STATE(211)] = 3078,
  [SMALL_STATE(212)] = 3089,
  [SMALL_STATE(213)] = 3100,
  [SMALL_STATE(214)] = 3111,
  [SMALL_STATE(215)] = 3122,
  [SMALL_STATE(216)] = 3131,
  [SMALL_STATE(217)] = 3142,
  [SMALL_STATE(218)] = 3151,
  [SMALL_STATE(219)] = 3162,
  [SMALL_STATE(220)] = 3173,
  [SMALL_STATE(221)] = 3186,
  [SMALL_STATE(222)] = 3197,
  [SMALL_STATE(223)] = 3208,
  [SMALL_STATE(224)] = 3219,
  [SMALL_STATE(225)] = 3230,
  [SMALL_STATE(226)] = 3243,
  [SMALL_STATE(227)] = 3252,
  [SMALL_STATE(228)] = 3263,
  [SMALL_STATE(229)] = 3274,
  [SMALL_STATE(230)] = 3285,
  [SMALL_STATE(231)] = 3296,
  [SMALL_STATE(232)] = 3307,
  [SMALL_STATE(233)] = 3318,
  [SMALL_STATE(234)] = 3331,
  [SMALL_STATE(235)] = 3344,
  [SMALL_STATE(236)] = 3357,
  [SMALL_STATE(237)] = 3368,
  [SMALL_STATE(238)] = 3377,
  [SMALL_STATE(239)] = 3386,
  [SMALL_STATE(240)] = 3395,
  [SMALL_STATE(241)] = 3408,
  [SMALL_STATE(242)] = 3419,
  [SMALL_STATE(243)] = 3428,
  [SMALL_STATE(244)] = 3439,
  [SMALL_STATE(245)] = 3450,
  [SMALL_STATE(246)] = 3461,
  [SMALL_STATE(247)] = 3472,
  [SMALL_STATE(248)] = 3483,
  [SMALL_STATE(249)] = 3494,
  [SMALL_STATE(250)] = 3503,
  [SMALL_STATE(251)] = 3514,
  [SMALL_STATE(252)] = 3527,
  [SMALL_STATE(253)] = 3538,
  [SMALL_STATE(254)] = 3549,
  [SMALL_STATE(255)] = 3560,
  [SMALL_STATE(256)] = 3569,
  [SMALL_STATE(257)] = 3578,
  [SMALL_STATE(258)] = 3589,
  [SMALL_STATE(259)] = 3600,
  [SMALL_STATE(260)] = 3611,
  [SMALL_STATE(261)] = 3622,
  [SMALL_STATE(262)] = 3635,
  [SMALL_STATE(263)] = 3648,
  [SMALL_STATE(264)] = 3657,
  [SMALL_STATE(265)] = 3666,
  [SMALL_STATE(266)] = 3676,
  [SMALL_STATE(267)] = 3686,
  [SMALL_STATE(268)] = 3694,
  [SMALL_STATE(269)] = 3704,
  [SMALL_STATE(270)] = 3714,
  [SMALL_STATE(271)] = 3722,
  [SMALL_STATE(272)] = 3732,
  [SMALL_STATE(273)] = 3742,
  [SMALL_STATE(274)] = 3752,
  [SMALL_STATE(275)] = 3760,
  [SMALL_STATE(276)] = 3770,
  [SMALL_STATE(277)] = 3778,
  [SMALL_STATE(278)] = 3786,
  [SMALL_STATE(279)] = 3796,
  [SMALL_STATE(280)] = 3806,
  [SMALL_STATE(281)] = 3814,
  [SMALL_STATE(282)] = 3822,
  [SMALL_STATE(283)] = 3832,
  [SMALL_STATE(284)] = 3842,
  [SMALL_STATE(285)] = 3852,
  [SMALL_STATE(286)] = 3862,
  [SMALL_STATE(287)] = 3872,
  [SMALL_STATE(288)] = 3882,
  [SMALL_STATE(289)] = 3888,
  [SMALL_STATE(290)] = 3898,
  [SMALL_STATE(291)] = 3906,
  [SMALL_STATE(292)] = 3916,
  [SMALL_STATE(293)] = 3924,
  [SMALL_STATE(294)] = 3934,
  [SMALL_STATE(295)] = 3942,
  [SMALL_STATE(296)] = 3952,
  [SMALL_STATE(297)] = 3960,
  [SMALL_STATE(298)] = 3970,
  [SMALL_STATE(299)] = 3978,
  [SMALL_STATE(300)] = 3988,
  [SMALL_STATE(301)] = 3998,
  [SMALL_STATE(302)] = 4008,
  [SMALL_STATE(303)] = 4018,
  [SMALL_STATE(304)] = 4028,
  [SMALL_STATE(305)] = 4036,
  [SMALL_STATE(306)] = 4046,
  [SMALL_STATE(307)] = 4056,
  [SMALL_STATE(308)] = 4064,
  [SMALL_STATE(309)] = 4072,
  [SMALL_STATE(310)] = 4082,
  [SMALL_STATE(311)] = 4092,
  [SMALL_STATE(312)] = 4102,
  [SMALL_STATE(313)] = 4112,
  [SMALL_STATE(314)] = 4122,
  [SMALL_STATE(315)] = 4132,
  [SMALL_STATE(316)] = 4142,
  [SMALL_STATE(317)] = 4150,
  [SMALL_STATE(318)] = 4158,
  [SMALL_STATE(319)] = 4168,
  [SMALL_STATE(320)] = 4178,
  [SMALL_STATE(321)] = 4188,
  [SMALL_STATE(322)] = 4198,
  [SMALL_STATE(323)] = 4204,
  [SMALL_STATE(324)] = 4214,
  [SMALL_STATE(325)] = 4224,
  [SMALL_STATE(326)] = 4234,
  [SMALL_STATE(327)] = 4240,
  [SMALL_STATE(328)] = 4246,
  [SMALL_STATE(329)] = 4256,
  [SMALL_STATE(330)] = 4264,
  [SMALL_STATE(331)] = 4274,
  [SMALL_STATE(332)] = 4284,
  [SMALL_STATE(333)] = 4294,
  [SMALL_STATE(334)] = 4304,
  [SMALL_STATE(335)] = 4314,
  [SMALL_STATE(336)] = 4324,
  [SMALL_STATE(337)] = 4334,
  [SMALL_STATE(338)] = 4344,
  [SMALL_STATE(339)] = 4354,
  [SMALL_STATE(340)] = 4364,
  [SMALL_STATE(341)] = 4374,
  [SMALL_STATE(342)] = 4382,
  [SMALL_STATE(343)] = 4390,
  [SMALL_STATE(344)] = 4400,
  [SMALL_STATE(345)] = 4410,
  [SMALL_STATE(346)] = 4418,
  [SMALL_STATE(347)] = 4426,
  [SMALL_STATE(348)] = 4436,
  [SMALL_STATE(349)] = 4446,
  [SMALL_STATE(350)] = 4456,
  [SMALL_STATE(351)] = 4466,
  [SMALL_STATE(352)] = 4476,
  [SMALL_STATE(353)] = 4486,
  [SMALL_STATE(354)] = 4496,
  [SMALL_STATE(355)] = 4506,
  [SMALL_STATE(356)] = 4514,
  [SMALL_STATE(357)] = 4524,
  [SMALL_STATE(358)] = 4534,
  [SMALL_STATE(359)] = 4544,
  [SMALL_STATE(360)] = 4554,
  [SMALL_STATE(361)] = 4564,
  [SMALL_STATE(362)] = 4574,
  [SMALL_STATE(363)] = 4584,
  [SMALL_STATE(364)] = 4594,
  [SMALL_STATE(365)] = 4604,
  [SMALL_STATE(366)] = 4614,
  [SMALL_STATE(367)] = 4624,
  [SMALL_STATE(368)] = 4634,
  [SMALL_STATE(369)] = 4644,
  [SMALL_STATE(370)] = 4654,
  [SMALL_STATE(371)] = 4664,
  [SMALL_STATE(372)] = 4674,
  [SMALL_STATE(373)] = 4684,
  [SMALL_STATE(374)] = 4692,
  [SMALL_STATE(375)] = 4698,
  [SMALL_STATE(376)] = 4708,
  [SMALL_STATE(377)] = 4718,
  [SMALL_STATE(378)] = 4724,
  [SMALL_STATE(379)] = 4734,
  [SMALL_STATE(380)] = 4744,
  [SMALL_STATE(381)] = 4750,
  [SMALL_STATE(382)] = 4760,
  [SMALL_STATE(383)] = 4770,
  [SMALL_STATE(384)] = 4778,
  [SMALL_STATE(385)] = 4784,
  [SMALL_STATE(386)] = 4794,
  [SMALL_STATE(387)] = 4804,
  [SMALL_STATE(388)] = 4810,
  [SMALL_STATE(389)] = 4818,
  [SMALL_STATE(390)] = 4828,
  [SMALL_STATE(391)] = 4838,
  [SMALL_STATE(392)] = 4846,
  [SMALL_STATE(393)] = 4852,
  [SMALL_STATE(394)] = 4860,
  [SMALL_STATE(395)] = 4870,
  [SMALL_STATE(396)] = 4876,
  [SMALL_STATE(397)] = 4886,
  [SMALL_STATE(398)] = 4896,
  [SMALL_STATE(399)] = 4906,
  [SMALL_STATE(400)] = 4916,
  [SMALL_STATE(401)] = 4922,
  [SMALL_STATE(402)] = 4932,
  [SMALL_STATE(403)] = 4942,
  [SMALL_STATE(404)] = 4952,
  [SMALL_STATE(405)] = 4962,
  [SMALL_STATE(406)] = 4972,
  [SMALL_STATE(407)] = 4982,
  [SMALL_STATE(408)] = 4992,
  [SMALL_STATE(409)] = 5002,
  [SMALL_STATE(410)] = 5008,
  [SMALL_STATE(411)] = 5016,
  [SMALL_STATE(412)] = 5026,
  [SMALL_STATE(413)] = 5036,
  [SMALL_STATE(414)] = 5046,
  [SMALL_STATE(415)] = 5056,
  [SMALL_STATE(416)] = 5066,
  [SMALL_STATE(417)] = 5076,
  [SMALL_STATE(418)] = 5086,
  [SMALL_STATE(419)] = 5094,
  [SMALL_STATE(420)] = 5102,
  [SMALL_STATE(421)] = 5112,
  [SMALL_STATE(422)] = 5122,
  [SMALL_STATE(423)] = 5130,
  [SMALL_STATE(424)] = 5140,
  [SMALL_STATE(425)] = 5150,
  [SMALL_STATE(426)] = 5160,
  [SMALL_STATE(427)] = 5170,
  [SMALL_STATE(428)] = 5180,
  [SMALL_STATE(429)] = 5190,
  [SMALL_STATE(430)] = 5200,
  [SMALL_STATE(431)] = 5210,
  [SMALL_STATE(432)] = 5220,
  [SMALL_STATE(433)] = 5230,
  [SMALL_STATE(434)] = 5240,
  [SMALL_STATE(435)] = 5250,
  [SMALL_STATE(436)] = 5258,
  [SMALL_STATE(437)] = 5266,
  [SMALL_STATE(438)] = 5276,
  [SMALL_STATE(439)] = 5286,
  [SMALL_STATE(440)] = 5296,
  [SMALL_STATE(441)] = 5304,
  [SMALL_STATE(442)] = 5314,
  [SMALL_STATE(443)] = 5324,
  [SMALL_STATE(444)] = 5332,
  [SMALL_STATE(445)] = 5342,
  [SMALL_STATE(446)] = 5350,
  [SMALL_STATE(447)] = 5360,
  [SMALL_STATE(448)] = 5370,
  [SMALL_STATE(449)] = 5380,
  [SMALL_STATE(450)] = 5390,
  [SMALL_STATE(451)] = 5400,
  [SMALL_STATE(452)] = 5410,
  [SMALL_STATE(453)] = 5420,
  [SMALL_STATE(454)] = 5430,
  [SMALL_STATE(455)] = 5440,
  [SMALL_STATE(456)] = 5450,
  [SMALL_STATE(457)] = 5460,
  [SMALL_STATE(458)] = 5470,
  [SMALL_STATE(459)] = 5480,
  [SMALL_STATE(460)] = 5488,
  [SMALL_STATE(461)] = 5496,
  [SMALL_STATE(462)] = 5506,
  [SMALL_STATE(463)] = 5516,
  [SMALL_STATE(464)] = 5526,
  [SMALL_STATE(465)] = 5536,
  [SMALL_STATE(466)] = 5546,
  [SMALL_STATE(467)] = 5554,
  [SMALL_STATE(468)] = 5562,
  [SMALL_STATE(469)] = 5570,
  [SMALL_STATE(470)] = 5578,
  [SMALL_STATE(471)] = 5586,
  [SMALL_STATE(472)] = 5596,
  [SMALL_STATE(473)] = 5606,
  [SMALL_STATE(474)] = 5616,
  [SMALL_STATE(475)] = 5626,
  [SMALL_STATE(476)] = 5636,
  [SMALL_STATE(477)] = 5646,
  [SMALL_STATE(478)] = 5656,
  [SMALL_STATE(479)] = 5666,
  [SMALL_STATE(480)] = 5676,
  [SMALL_STATE(481)] = 5686,
  [SMALL_STATE(482)] = 5696,
  [SMALL_STATE(483)] = 5706,
  [SMALL_STATE(484)] = 5716,
  [SMALL_STATE(485)] = 5726,
  [SMALL_STATE(486)] = 5731,
  [SMALL_STATE(487)] = 5736,
  [SMALL_STATE(488)] = 5741,
  [SMALL_STATE(489)] = 5746,
  [SMALL_STATE(490)] = 5751,
  [SMALL_STATE(491)] = 5756,
  [SMALL_STATE(492)] = 5761,
  [SMALL_STATE(493)] = 5766,
  [SMALL_STATE(494)] = 5771,
  [SMALL_STATE(495)] = 5776,
  [SMALL_STATE(496)] = 5783,
  [SMALL_STATE(497)] = 5788,
  [SMALL_STATE(498)] = 5793,
  [SMALL_STATE(499)] = 5798,
  [SMALL_STATE(500)] = 5803,
  [SMALL_STATE(501)] = 5808,
  [SMALL_STATE(502)] = 5813,
  [SMALL_STATE(503)] = 5818,
  [SMALL_STATE(504)] = 5823,
  [SMALL_STATE(505)] = 5828,
  [SMALL_STATE(506)] = 5833,
  [SMALL_STATE(507)] = 5838,
  [SMALL_STATE(508)] = 5843,
  [SMALL_STATE(509)] = 5848,
  [SMALL_STATE(510)] = 5855,
  [SMALL_STATE(511)] = 5862,
  [SMALL_STATE(512)] = 5867,
  [SMALL_STATE(513)] = 5874,
  [SMALL_STATE(514)] = 5879,
  [SMALL_STATE(515)] = 5884,
  [SMALL_STATE(516)] = 5889,
  [SMALL_STATE(517)] = 5894,
  [SMALL_STATE(518)] = 5901,
  [SMALL_STATE(519)] = 5906,
  [SMALL_STATE(520)] = 5911,
  [SMALL_STATE(521)] = 5918,
  [SMALL_STATE(522)] = 5923,
  [SMALL_STATE(523)] = 5928,
  [SMALL_STATE(524)] = 5933,
  [SMALL_STATE(525)] = 5938,
  [SMALL_STATE(526)] = 5943,
  [SMALL_STATE(527)] = 5950,
  [SMALL_STATE(528)] = 5955,
  [SMALL_STATE(529)] = 5960,
  [SMALL_STATE(530)] = 5967,
  [SMALL_STATE(531)] = 5972,
  [SMALL_STATE(532)] = 5977,
  [SMALL_STATE(533)] = 5984,
  [SMALL_STATE(534)] = 5989,
  [SMALL_STATE(535)] = 5996,
  [SMALL_STATE(536)] = 6003,
  [SMALL_STATE(537)] = 6008,
  [SMALL_STATE(538)] = 6013,
  [SMALL_STATE(539)] = 6018,
  [SMALL_STATE(540)] = 6023,
  [SMALL_STATE(541)] = 6028,
  [SMALL_STATE(542)] = 6033,
  [SMALL_STATE(543)] = 6040,
  [SMALL_STATE(544)] = 6045,
  [SMALL_STATE(545)] = 6050,
  [SMALL_STATE(546)] = 6055,
  [SMALL_STATE(547)] = 6062,
  [SMALL_STATE(548)] = 6067,
  [SMALL_STATE(549)] = 6072,
  [SMALL_STATE(550)] = 6077,
  [SMALL_STATE(551)] = 6082,
  [SMALL_STATE(552)] = 6087,
  [SMALL_STATE(553)] = 6092,
  [SMALL_STATE(554)] = 6097,
  [SMALL_STATE(555)] = 6102,
  [SMALL_STATE(556)] = 6107,
  [SMALL_STATE(557)] = 6112,
  [SMALL_STATE(558)] = 6117,
  [SMALL_STATE(559)] = 6122,
  [SMALL_STATE(560)] = 6127,
  [SMALL_STATE(561)] = 6132,
  [SMALL_STATE(562)] = 6137,
  [SMALL_STATE(563)] = 6144,
  [SMALL_STATE(564)] = 6149,
  [SMALL_STATE(565)] = 6154,
  [SMALL_STATE(566)] = 6159,
  [SMALL_STATE(567)] = 6164,
  [SMALL_STATE(568)] = 6169,
  [SMALL_STATE(569)] = 6174,
  [SMALL_STATE(570)] = 6179,
  [SMALL_STATE(571)] = 6186,
  [SMALL_STATE(572)] = 6191,
  [SMALL_STATE(573)] = 6198,
  [SMALL_STATE(574)] = 6203,
  [SMALL_STATE(575)] = 6208,
  [SMALL_STATE(576)] = 6213,
  [SMALL_STATE(577)] = 6218,
  [SMALL_STATE(578)] = 6223,
  [SMALL_STATE(579)] = 6228,
  [SMALL_STATE(580)] = 6235,
  [SMALL_STATE(581)] = 6240,
  [SMALL_STATE(582)] = 6245,
  [SMALL_STATE(583)] = 6250,
  [SMALL_STATE(584)] = 6255,
  [SMALL_STATE(585)] = 6262,
  [SMALL_STATE(586)] = 6269,
  [SMALL_STATE(587)] = 6276,
  [SMALL_STATE(588)] = 6281,
  [SMALL_STATE(589)] = 6286,
  [SMALL_STATE(590)] = 6291,
  [SMALL_STATE(591)] = 6296,
  [SMALL_STATE(592)] = 6301,
  [SMALL_STATE(593)] = 6308,
  [SMALL_STATE(594)] = 6313,
  [SMALL_STATE(595)] = 6318,
  [SMALL_STATE(596)] = 6323,
  [SMALL_STATE(597)] = 6328,
  [SMALL_STATE(598)] = 6335,
  [SMALL_STATE(599)] = 6340,
  [SMALL_STATE(600)] = 6345,
  [SMALL_STATE(601)] = 6350,
  [SMALL_STATE(602)] = 6355,
  [SMALL_STATE(603)] = 6360,
  [SMALL_STATE(604)] = 6365,
  [SMALL_STATE(605)] = 6370,
  [SMALL_STATE(606)] = 6375,
  [SMALL_STATE(607)] = 6382,
  [SMALL_STATE(608)] = 6387,
  [SMALL_STATE(609)] = 6392,
  [SMALL_STATE(610)] = 6397,
  [SMALL_STATE(611)] = 6402,
  [SMALL_STATE(612)] = 6407,
  [SMALL_STATE(613)] = 6412,
  [SMALL_STATE(614)] = 6417,
  [SMALL_STATE(615)] = 6422,
  [SMALL_STATE(616)] = 6429,
  [SMALL_STATE(617)] = 6434,
  [SMALL_STATE(618)] = 6439,
  [SMALL_STATE(619)] = 6444,
  [SMALL_STATE(620)] = 6449,
  [SMALL_STATE(621)] = 6454,
  [SMALL_STATE(622)] = 6461,
  [SMALL_STATE(623)] = 6466,
  [SMALL_STATE(624)] = 6471,
  [SMALL_STATE(625)] = 6476,
  [SMALL_STATE(626)] = 6481,
  [SMALL_STATE(627)] = 6486,
  [SMALL_STATE(628)] = 6491,
  [SMALL_STATE(629)] = 6496,
  [SMALL_STATE(630)] = 6501,
  [SMALL_STATE(631)] = 6506,
  [SMALL_STATE(632)] = 6511,
  [SMALL_STATE(633)] = 6516,
  [SMALL_STATE(634)] = 6521,
  [SMALL_STATE(635)] = 6526,
  [SMALL_STATE(636)] = 6531,
  [SMALL_STATE(637)] = 6538,
  [SMALL_STATE(638)] = 6545,
  [SMALL_STATE(639)] = 6550,
  [SMALL_STATE(640)] = 6555,
  [SMALL_STATE(641)] = 6560,
  [SMALL_STATE(642)] = 6565,
  [SMALL_STATE(643)] = 6570,
  [SMALL_STATE(644)] = 6575,
  [SMALL_STATE(645)] = 6580,
  [SMALL_STATE(646)] = 6585,
  [SMALL_STATE(647)] = 6590,
  [SMALL_STATE(648)] = 6595,
  [SMALL_STATE(649)] = 6600,
  [SMALL_STATE(650)] = 6605,
  [SMALL_STATE(651)] = 6610,
  [SMALL_STATE(652)] = 6615,
  [SMALL_STATE(653)] = 6620,
  [SMALL_STATE(654)] = 6625,
  [SMALL_STATE(655)] = 6630,
  [SMALL_STATE(656)] = 6635,
  [SMALL_STATE(657)] = 6640,
  [SMALL_STATE(658)] = 6645,
  [SMALL_STATE(659)] = 6650,
  [SMALL_STATE(660)] = 6655,
  [SMALL_STATE(661)] = 6660,
  [SMALL_STATE(662)] = 6665,
  [SMALL_STATE(663)] = 6670,
  [SMALL_STATE(664)] = 6677,
  [SMALL_STATE(665)] = 6682,
  [SMALL_STATE(666)] = 6687,
  [SMALL_STATE(667)] = 6692,
  [SMALL_STATE(668)] = 6697,
  [SMALL_STATE(669)] = 6702,
  [SMALL_STATE(670)] = 6707,
  [SMALL_STATE(671)] = 6712,
  [SMALL_STATE(672)] = 6717,
  [SMALL_STATE(673)] = 6722,
  [SMALL_STATE(674)] = 6727,
  [SMALL_STATE(675)] = 6732,
  [SMALL_STATE(676)] = 6737,
  [SMALL_STATE(677)] = 6742,
  [SMALL_STATE(678)] = 6747,
  [SMALL_STATE(679)] = 6752,
  [SMALL_STATE(680)] = 6757,
  [SMALL_STATE(681)] = 6762,
  [SMALL_STATE(682)] = 6767,
  [SMALL_STATE(683)] = 6772,
  [SMALL_STATE(684)] = 6777,
  [SMALL_STATE(685)] = 6782,
  [SMALL_STATE(686)] = 6787,
  [SMALL_STATE(687)] = 6792,
  [SMALL_STATE(688)] = 6797,
  [SMALL_STATE(689)] = 6802,
  [SMALL_STATE(690)] = 6807,
  [SMALL_STATE(691)] = 6812,
  [SMALL_STATE(692)] = 6817,
  [SMALL_STATE(693)] = 6822,
  [SMALL_STATE(694)] = 6827,
  [SMALL_STATE(695)] = 6832,
  [SMALL_STATE(696)] = 6837,
  [SMALL_STATE(697)] = 6842,
  [SMALL_STATE(698)] = 6847,
  [SMALL_STATE(699)] = 6852,
  [SMALL_STATE(700)] = 6857,
  [SMALL_STATE(701)] = 6862,
  [SMALL_STATE(702)] = 6867,
  [SMALL_STATE(703)] = 6872,
  [SMALL_STATE(704)] = 6877,
  [SMALL_STATE(705)] = 6882,
  [SMALL_STATE(706)] = 6887,
  [SMALL_STATE(707)] = 6892,
  [SMALL_STATE(708)] = 6897,
  [SMALL_STATE(709)] = 6902,
  [SMALL_STATE(710)] = 6907,
  [SMALL_STATE(711)] = 6912,
  [SMALL_STATE(712)] = 6917,
  [SMALL_STATE(713)] = 6922,
  [SMALL_STATE(714)] = 6927,
  [SMALL_STATE(715)] = 6932,
  [SMALL_STATE(716)] = 6937,
  [SMALL_STATE(717)] = 6942,
  [SMALL_STATE(718)] = 6947,
  [SMALL_STATE(719)] = 6954,
  [SMALL_STATE(720)] = 6959,
  [SMALL_STATE(721)] = 6964,
  [SMALL_STATE(722)] = 6969,
  [SMALL_STATE(723)] = 6974,
  [SMALL_STATE(724)] = 6979,
  [SMALL_STATE(725)] = 6984,
  [SMALL_STATE(726)] = 6989,
  [SMALL_STATE(727)] = 6994,
  [SMALL_STATE(728)] = 6999,
  [SMALL_STATE(729)] = 7004,
  [SMALL_STATE(730)] = 7009,
  [SMALL_STATE(731)] = 7014,
  [SMALL_STATE(732)] = 7019,
  [SMALL_STATE(733)] = 7024,
  [SMALL_STATE(734)] = 7029,
  [SMALL_STATE(735)] = 7034,
  [SMALL_STATE(736)] = 7039,
  [SMALL_STATE(737)] = 7044,
  [SMALL_STATE(738)] = 7049,
  [SMALL_STATE(739)] = 7054,
  [SMALL_STATE(740)] = 7059,
  [SMALL_STATE(741)] = 7064,
  [SMALL_STATE(742)] = 7069,
  [SMALL_STATE(743)] = 7074,
  [SMALL_STATE(744)] = 7079,
  [SMALL_STATE(745)] = 7084,
  [SMALL_STATE(746)] = 7089,
  [SMALL_STATE(747)] = 7096,
  [SMALL_STATE(748)] = 7101,
  [SMALL_STATE(749)] = 7108,
  [SMALL_STATE(750)] = 7113,
  [SMALL_STATE(751)] = 7118,
  [SMALL_STATE(752)] = 7123,
  [SMALL_STATE(753)] = 7128,
  [SMALL_STATE(754)] = 7133,
  [SMALL_STATE(755)] = 7138,
  [SMALL_STATE(756)] = 7143,
  [SMALL_STATE(757)] = 7148,
  [SMALL_STATE(758)] = 7153,
  [SMALL_STATE(759)] = 7160,
  [SMALL_STATE(760)] = 7165,
  [SMALL_STATE(761)] = 7170,
  [SMALL_STATE(762)] = 7175,
  [SMALL_STATE(763)] = 7180,
  [SMALL_STATE(764)] = 7185,
  [SMALL_STATE(765)] = 7190,
  [SMALL_STATE(766)] = 7195,
  [SMALL_STATE(767)] = 7200,
  [SMALL_STATE(768)] = 7207,
  [SMALL_STATE(769)] = 7212,
  [SMALL_STATE(770)] = 7219,
  [SMALL_STATE(771)] = 7224,
  [SMALL_STATE(772)] = 7228,
  [SMALL_STATE(773)] = 7232,
  [SMALL_STATE(774)] = 7236,
  [SMALL_STATE(775)] = 7240,
  [SMALL_STATE(776)] = 7244,
  [SMALL_STATE(777)] = 7248,
  [SMALL_STATE(778)] = 7252,
  [SMALL_STATE(779)] = 7256,
  [SMALL_STATE(780)] = 7260,
  [SMALL_STATE(781)] = 7264,
  [SMALL_STATE(782)] = 7268,
  [SMALL_STATE(783)] = 7272,
  [SMALL_STATE(784)] = 7276,
  [SMALL_STATE(785)] = 7280,
  [SMALL_STATE(786)] = 7284,
  [SMALL_STATE(787)] = 7288,
  [SMALL_STATE(788)] = 7292,
  [SMALL_STATE(789)] = 7296,
  [SMALL_STATE(790)] = 7300,
  [SMALL_STATE(791)] = 7304,
  [SMALL_STATE(792)] = 7308,
  [SMALL_STATE(793)] = 7312,
  [SMALL_STATE(794)] = 7316,
  [SMALL_STATE(795)] = 7320,
  [SMALL_STATE(796)] = 7324,
  [SMALL_STATE(797)] = 7328,
  [SMALL_STATE(798)] = 7332,
  [SMALL_STATE(799)] = 7336,
  [SMALL_STATE(800)] = 7340,
  [SMALL_STATE(801)] = 7344,
  [SMALL_STATE(802)] = 7348,
  [SMALL_STATE(803)] = 7352,
  [SMALL_STATE(804)] = 7356,
  [SMALL_STATE(805)] = 7360,
  [SMALL_STATE(806)] = 7364,
  [SMALL_STATE(807)] = 7368,
  [SMALL_STATE(808)] = 7372,
  [SMALL_STATE(809)] = 7376,
  [SMALL_STATE(810)] = 7380,
  [SMALL_STATE(811)] = 7384,
  [SMALL_STATE(812)] = 7388,
  [SMALL_STATE(813)] = 7392,
  [SMALL_STATE(814)] = 7396,
  [SMALL_STATE(815)] = 7400,
  [SMALL_STATE(816)] = 7404,
  [SMALL_STATE(817)] = 7408,
  [SMALL_STATE(818)] = 7412,
  [SMALL_STATE(819)] = 7416,
  [SMALL_STATE(820)] = 7420,
  [SMALL_STATE(821)] = 7424,
  [SMALL_STATE(822)] = 7428,
  [SMALL_STATE(823)] = 7432,
  [SMALL_STATE(824)] = 7436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(368),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(289),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(293),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(320),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(321),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(330),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(333),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(334),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(335),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(338),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(350),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(356),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(357),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(359),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(360),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(361),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(363),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(364),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(366),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(367),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(451),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(382),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(386),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(398),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(414),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(415),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(416),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(417),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(423),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(424),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(425),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(426),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(427),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(428),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(431),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(432),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(433),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(437),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(442),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(444),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(450),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(446),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(455),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(458),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(464),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(465),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(476),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(481),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(474),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(472),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(483),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(482),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(477),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(299),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(412),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(411),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(407),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(397),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(351),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(348),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(332),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(306),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(302),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(457),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(297),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(265),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(283),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(272),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(271),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(269),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(268),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(394),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(404),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(405),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(453),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(454),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(456),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(285),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(273),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(275),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(279),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(284),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(286),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(287),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(804),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(9),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, .production_id = 18),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, .production_id = 18),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 4, .production_id = 18),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 4, .production_id = 18),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, .production_id = 18),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, .production_id = 18),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(293),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(320),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(321),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(325),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(330),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(333),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(334),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(335),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(336),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(338),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(349),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(350),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(352),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(356),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(357),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(358),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(359),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(360),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(361),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(363),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(364),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(366),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(367),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(451),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(382),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(386),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(396),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(398),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(414),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(415),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(416),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(417),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(423),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(424),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(425),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(426),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(427),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(428),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(431),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(432),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(433),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(437),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(442),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(444),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(450),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(446),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(455),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(458),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(464),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(465),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(476),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(481),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(474),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(472),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(483),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(482),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(477),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(299),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(412),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(411),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(407),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(397),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(362),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(351),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(348),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(347),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(332),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(306),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(302),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(457),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(297),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(265),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(283),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(272),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(271),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(269),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(268),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(354),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(394),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(404),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(420),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(405),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(453),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(454),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(456),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(285),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(378),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(273),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(275),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(278),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(279),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(284),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(286),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(287),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(291),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(606),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(18),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 32),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 32),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 69),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 69),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 17),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 17),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 34),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 34),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 34),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 34),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 32),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 32),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 17),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 17),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 69),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 69),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 7, .production_id = 18),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 7, .production_id = 18),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(82),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(82),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(777),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 11),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(96),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(96),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(823),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote_command, 3, .production_id = 27),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, .production_id = 27),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hosts_string, 1, .production_id = 16),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 16),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 16),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(143),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(143),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(822),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(142),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(142),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(821),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(149),
  [1065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(149),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(820),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, .production_id = 11),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [1097] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(173),
  [1100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(173),
  [1103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(824),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(99),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(99),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 51),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 51),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, .production_id = 40),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 11),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1), REDUCE(aux_sym__string_repeat1, 1),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2), SHIFT_REPEAT(144),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(226),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(226),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2),
  [1182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(167),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(167),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(161),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(161),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, .production_id = 40),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(202),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(202),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2),
  [1228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(209),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(209),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, .production_id = 39),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 16),
  [1250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(159),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(159),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, .production_id = 29),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, .production_id = 44),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proxy_string, 1, .production_id = 16),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 16),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token_string, 1, .production_id = 16),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 16),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(459),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(459),
  [1308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(196),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(196),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2),
  [1346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(355),
  [1349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(355),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(160),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [1357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(263),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(263),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(217),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(217),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 47),
  [1385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(809),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 34),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 34),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 34),
  [1402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(92),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 34),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 34),
  [1415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1), REDUCE(aux_sym__string_repeat2, 1),
  [1418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1), REDUCE(aux_sym__string_repeat2, 1),
  [1421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(326),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 37),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 34),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 34),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 34),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 50),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, .production_id = 40),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 17),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 17),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, .production_id = 45),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 17),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 17),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 47),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 25),
  [1484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(811),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 47),
  [1495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 17),
  [1505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(802),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 47),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 47),
  [1514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(800),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 17),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 17),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 17),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 17),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1, .production_id = 16),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, .production_id = 12),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, .production_id = 12),
  [1547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 60), SHIFT_REPEAT(163),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 60),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 47),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(819),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(796),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 47),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 11),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, .production_id = 65),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 66),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 67),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2), SHIFT_REPEAT(248),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2),
  [1605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2), SHIFT_REPEAT(779),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 72),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 33),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(572),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2),
  [1789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2), SHIFT_REPEAT(797),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2),
  [1794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2), SHIFT_REPEAT(257),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 73),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 17),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 60),
  [1863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 60), SHIFT_REPEAT(151),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 19),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [1914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 3, .production_id = 21),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 42), SHIFT_REPEAT(58),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 42),
  [1973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 42), SHIFT_REPEAT(592),
  [1976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 42),
  [1978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 42), SHIFT_REPEAT(127),
  [1981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 42),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, .production_id = 17),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 47),
  [1991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 63), SHIFT_REPEAT(112),
  [1994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 63),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 17),
  [2006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 59),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [2014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(93),
  [2021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 42), SHIFT_REPEAT(178),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 42),
  [2034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 55), SHIFT_REPEAT(55),
  [2037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 55),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value_inner, 3, .production_id = 53),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [2059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 17),
  [2065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(100),
  [2068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 49), SHIFT_REPEAT(79),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 49),
  [2073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 42), SHIFT_REPEAT(101),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 42),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [2090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2),
  [2092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2), SHIFT_REPEAT(518),
  [2095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 46),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [2105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [2107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2), SHIFT_REPEAT(39),
  [2110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [2136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 42), SHIFT_REPEAT(75),
  [2139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 42),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [2155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 26),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [2183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, .production_id = 32),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, .production_id = 32),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, .production_id = 32),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [2221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [2231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 38),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [2245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 34),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [2271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, .production_id = 17),
  [2279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 32),
  [2281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 4, .production_id = 35),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, .production_id = 17),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [2311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, .production_id = 17),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [2327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 32),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [2347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [2355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 23),
  [2357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, .production_id = 17),
  [2359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, .production_id = 17),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, .production_id = 17),
  [2363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, .production_id = 17),
  [2365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_keychain, 3, .production_id = 18),
  [2367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, .production_id = 17),
  [2369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, .production_id = 17),
  [2371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, .production_id = 17),
  [2373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [2375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, .production_id = 30),
  [2377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, .production_id = 31),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [2385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [2387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 10),
  [2389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 9),
  [2391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 1),
  [2393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 23),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, .production_id = 17),
  [2399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, .production_id = 17),
  [2401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 36),
  [2403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, .production_id = 17),
  [2405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, .production_id = 17),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [2413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, .production_id = 17),
  [2415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, .production_id = 17),
  [2417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 17),
  [2419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 17),
  [2421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 17),
  [2427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, .production_id = 17),
  [2429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [2431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [2433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, .production_id = 17),
  [2435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, .production_id = 17),
  [2437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [2439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2),
  [2441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 3, .production_id = 28),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, .production_id = 17),
  [2449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, .production_id = 17),
  [2451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [2453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 17),
  [2455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 17),
  [2457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 8),
  [2459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 17),
  [2461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 17),
  [2463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 41),
  [2465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [2471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 17),
  [2473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 17),
  [2475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 17),
  [2477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 17),
  [2479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, .production_id = 43),
  [2481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, .production_id = 12),
  [2485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, .production_id = 12),
  [2487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [2489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, .production_id = 45),
  [2493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, .production_id = 45),
  [2495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, .production_id = 45),
  [2497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, .production_id = 45),
  [2499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 17),
  [2501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 22),
  [2503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 24),
  [2505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 73),
  [2507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 20),
  [2509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 17),
  [2511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 47),
  [2513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 41),
  [2515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 17),
  [2517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 48),
  [2519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 13),
  [2521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, .production_id = 17),
  [2523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 17),
  [2525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 17),
  [2527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 40),
  [2529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include, 3, .production_id = 17),
  [2531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 17),
  [2533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, .production_id = 17),
  [2535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 3, .production_id = 52),
  [2537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 17),
  [2539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 54),
  [2541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 17),
  [2543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 41),
  [2545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 17),
  [2547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [2551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 46),
  [2553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 46),
  [2555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 17),
  [2557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 56),
  [2561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, .production_id = 52),
  [2563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 17),
  [2565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, .production_id = 20),
  [2567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 57),
  [2569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, .production_id = 24),
  [2571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 58),
  [2573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 14),
  [2575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 17),
  [2577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, .production_id = 76),
  [2579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 17),
  [2581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 17),
  [2583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 61),
  [2585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 62),
  [2587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 17),
  [2589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 17),
  [2591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 23),
  [2593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, .production_id = 56),
  [2595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, .production_id = 57),
  [2597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 41),
  [2599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, .production_id = 29),
  [2601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 41),
  [2603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 17),
  [2605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, .production_id = 47),
  [2607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 41),
  [2609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 17),
  [2611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 17),
  [2613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 17),
  [2615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 17),
  [2617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, .production_id = 22),
  [2619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 64),
  [2621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, .production_id = 20),
  [2623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 40),
  [2625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 17),
  [2631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 17),
  [2633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 17),
  [2635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 17),
  [2637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 17),
  [2639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 17),
  [2641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 17),
  [2643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 17),
  [2645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 17),
  [2647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 75),
  [2649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 18),
  [2651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 74),
  [2653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 59),
  [2655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 68),
  [2657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 17),
  [2659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 17),
  [2661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 17),
  [2663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 17),
  [2665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 17),
  [2667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 17),
  [2669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 40),
  [2671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [2673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 17),
  [2675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 17),
  [2679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, .production_id = 70),
  [2681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, .production_id = 71),
  [2683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, .production_id = 52),
  [2685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, .production_id = 15),
  [2687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [2701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [2709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [2731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [2737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2743] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [2749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
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
