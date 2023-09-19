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
#define SYMBOL_COUNT 364
#define ALIAS_COUNT 3
#define TOKEN_COUNT 179
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 73

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
  aux_sym__proxy_jump_arg_token2 = 106,
  aux_sym__proxy_use_fdpass_token1 = 107,
  aux_sym__pubkey_accepted_algorithms_token1 = 108,
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
  anon_sym_EQ = 128,
  aux_sym__stdin_null_token1 = 129,
  aux_sym__stream_local_bind_mask_token1 = 130,
  aux_sym__stream_local_bind_mask_token2 = 131,
  aux_sym__stream_local_bind_unlink_token1 = 132,
  aux_sym__strict_host_key_checking_token1 = 133,
  anon_sym_accept_DASHnew = 134,
  anon_sym_off = 135,
  aux_sym__syslog_facility_token1 = 136,
  aux_sym__tcp_keep_alive_token1 = 137,
  aux_sym__tag_token1 = 138,
  aux_sym__tunnel_token1 = 139,
  anon_sym_point_DASHto_DASHpoint = 140,
  anon_sym_ethernet = 141,
  aux_sym__tunnel_device_token1 = 142,
  aux_sym__update_host_keys_token1 = 143,
  aux_sym__user_known_hosts_file_token1 = 144,
  aux_sym__verify_host_key_dns_token1 = 145,
  aux_sym__visual_host_key_token1 = 146,
  aux_sym__xauth_location_token1 = 147,
  sym_ipqos = 148,
  sym_verbosity = 149,
  sym_facility = 150,
  sym_authentication = 151,
  sym_cipher = 152,
  sym_kex = 153,
  sym_key_sig = 154,
  sym_mac = 155,
  sym_sig = 156,
  aux_sym__file_token_token1 = 157,
  aux_sym__hosts_token_token1 = 158,
  aux_sym__hostname_token_token1 = 159,
  aux_sym__proxy_token_token1 = 160,
  sym_token = 161,
  anon_sym_DOLLAR = 162,
  sym__var_name = 163,
  anon_sym_DOLLAR_LBRACE = 164,
  anon_sym_RBRACE = 165,
  anon_sym_yes = 166,
  anon_sym_no = 167,
  sym__number = 168,
  aux_sym_bytes_token1 = 169,
  aux_sym_time_token1 = 170,
  aux_sym_time_token2 = 171,
  aux_sym_time_token3 = 172,
  aux_sym_time_token4 = 173,
  aux_sym_time_token5 = 174,
  sym_comment = 175,
  aux_sym__sep_token1 = 176,
  sym__space = 177,
  sym__eol = 178,
  sym_config = 179,
  sym_host_declaration = 180,
  sym_match_declaration = 181,
  sym_condition = 182,
  sym__all = 183,
  sym__match_canonical = 184,
  sym__match_final = 185,
  sym__match_exec = 186,
  sym__match_localnetwork = 187,
  sym__match_host = 188,
  sym__match_originalhost = 189,
  sym__match_tagged = 190,
  sym__match_user = 191,
  sym__match_localuser = 192,
  sym__match_value = 193,
  sym__declarations = 194,
  sym_parameter = 195,
  sym__add_keys_to_agent = 196,
  sym__address_family = 197,
  sym__batch_mode = 198,
  sym__bind_address = 199,
  sym__bind_interface = 200,
  sym__canonical_domains = 201,
  sym__canonicalize_fallback_local = 202,
  sym__canonicalize_hostname = 203,
  sym__canonicalize_max_dots = 204,
  sym__canonicalize_permitted_cnames = 205,
  sym__cnames_map = 206,
  sym__ca_signature_algorithms = 207,
  sym__certificate_file = 208,
  sym__check_host_ip = 209,
  sym__ciphers = 210,
  sym__clear_all_forwardings = 211,
  sym__compression = 212,
  sym__connection_attempts = 213,
  sym__connect_timeout = 214,
  sym__control_master = 215,
  sym__control_persist = 216,
  sym__control_path = 217,
  sym__dynamic_forward = 218,
  sym__forward_value_inner = 219,
  sym__dynamic_forward_value = 220,
  sym__enable_escape_command_line = 221,
  sym__enable_ssh_keysign = 222,
  sym__escape_char = 223,
  sym__exit_on_forward_failure = 224,
  sym__fingerprint_hash = 225,
  sym__fork_after_authentication = 226,
  sym__forward_agent = 227,
  sym__forward_x11 = 228,
  sym__forward_x11_timeout = 229,
  sym__forward_x11_trusted = 230,
  sym__global_known_hosts_file = 231,
  sym__gssapi_authentication = 232,
  sym__gssapi_delegate_credentials = 233,
  sym__hostbased_accepted_algorithms = 234,
  sym__hostbased_authentication = 235,
  sym__host_key_algorithms = 236,
  sym__host_key_alias = 237,
  sym__hostname = 238,
  sym__identities_only = 239,
  sym__identity_agent = 240,
  sym__identity_file = 241,
  sym__ignore_unknown = 242,
  sym__include = 243,
  sym__ipqos = 244,
  sym__kbd_interactive_authentication = 245,
  sym__kex_algorithms = 246,
  sym__known_hosts_command = 247,
  sym__local_command = 248,
  sym__local_forward = 249,
  sym__forward_value1 = 250,
  sym__forward_value2 = 251,
  sym__log_level = 252,
  sym__log_verbose = 253,
  sym__log_verbose_value = 254,
  sym__log_verbose_quoted = 255,
  sym__macs = 256,
  sym__no_host_authentication_for_localhost = 257,
  sym__number_of_password_prompts = 258,
  sym__password_authentication = 259,
  sym__permit_local_command = 260,
  sym__permit_remote_open = 261,
  sym__permit_remote_open_value = 262,
  sym__pkcs11_provider = 263,
  sym__port = 264,
  sym__preferred_authentications = 265,
  sym__proxy_command = 266,
  sym__proxy_jump = 267,
  sym__proxy_use_fdpass = 268,
  sym__pubkey_accepted_algorithms = 269,
  sym__pubkey_authentication = 270,
  sym__pubkey_authentication_arg = 271,
  sym__rekey_limit = 272,
  sym__remote_command = 273,
  sym__remote_forward = 274,
  sym__request_tty = 275,
  sym__required_rsa_size = 276,
  sym__revoked_host_keys = 277,
  sym__security_key_provider = 278,
  sym__send_env = 279,
  sym__send_env_value = 280,
  sym__server_alive_count_max = 281,
  sym__server_alive_interval = 282,
  sym__session_type = 283,
  sym__set_env = 284,
  sym__set_env_value = 285,
  sym__stdin_null = 286,
  sym__stream_local_bind_mask = 287,
  sym__stream_local_bind_unlink = 288,
  sym__strict_host_key_checking = 289,
  sym__syslog_facility = 290,
  sym__tcp_keep_alive = 291,
  sym__tag = 292,
  sym__tunnel = 293,
  sym__tunnel_device = 294,
  sym__update_host_keys = 295,
  sym__user = 296,
  sym__user_known_hosts_file = 297,
  sym__verify_host_key_dns = 298,
  sym__visual_host_key = 299,
  sym__xauth_location = 300,
  sym__file_token = 301,
  sym__hosts_token = 302,
  sym__hostname_token = 303,
  sym__proxy_token = 304,
  sym__var_value = 305,
  sym_variable = 306,
  sym__file_string = 307,
  sym__hosts_string = 308,
  sym__hostname_string = 309,
  sym__proxy_string = 310,
  sym__token_string = 311,
  sym__string = 312,
  sym__file_pattern_vars = 313,
  sym__pattern = 314,
  sym__boolean = 315,
  sym_number = 316,
  sym_bytes = 317,
  sym_time = 318,
  sym__sep = 319,
  aux_sym_config_repeat1 = 320,
  aux_sym_host_declaration_repeat1 = 321,
  aux_sym_match_declaration_repeat1 = 322,
  aux_sym__match_exec_repeat1 = 323,
  aux_sym__match_exec_repeat2 = 324,
  aux_sym__match_localnetwork_repeat1 = 325,
  aux_sym__match_localnetwork_repeat2 = 326,
  aux_sym__match_value_repeat1 = 327,
  aux_sym__match_value_repeat2 = 328,
  aux_sym__match_value_repeat3 = 329,
  aux_sym__match_value_repeat4 = 330,
  aux_sym__declarations_repeat1 = 331,
  aux_sym__canonical_domains_repeat1 = 332,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 333,
  aux_sym__cnames_map_repeat1 = 334,
  aux_sym__ca_signature_algorithms_repeat1 = 335,
  aux_sym__ciphers_repeat1 = 336,
  aux_sym__dynamic_forward_repeat1 = 337,
  aux_sym__global_known_hosts_file_repeat1 = 338,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 339,
  aux_sym__ignore_unknown_repeat1 = 340,
  aux_sym__kex_algorithms_repeat1 = 341,
  aux_sym__log_verbose_repeat1 = 342,
  aux_sym__log_verbose_repeat2 = 343,
  aux_sym__log_verbose_value_repeat1 = 344,
  aux_sym__macs_repeat1 = 345,
  aux_sym__permit_remote_open_repeat1 = 346,
  aux_sym__preferred_authentications_repeat1 = 347,
  aux_sym__remote_command_repeat1 = 348,
  aux_sym__send_env_repeat1 = 349,
  aux_sym__send_env_value_repeat1 = 350,
  aux_sym__set_env_repeat1 = 351,
  aux_sym__user_known_hosts_file_repeat1 = 352,
  aux_sym__file_string_repeat1 = 353,
  aux_sym__file_string_repeat2 = 354,
  aux_sym__hosts_string_repeat1 = 355,
  aux_sym__hostname_string_repeat1 = 356,
  aux_sym__hostname_string_repeat2 = 357,
  aux_sym__proxy_string_repeat1 = 358,
  aux_sym__token_string_repeat1 = 359,
  aux_sym__string_repeat1 = 360,
  aux_sym__string_repeat2 = 361,
  aux_sym__file_pattern_vars_repeat1 = 362,
  aux_sym__file_pattern_vars_repeat2 = 363,
  anon_alias_sym_User = 364,
  anon_alias_sym_host = 365,
  alias_sym_pattern = 366,
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
  [aux_sym__proxy_jump_arg_token1] = "string",
  [aux_sym__proxy_jump_arg_token2] = "uri",
  [aux_sym__proxy_use_fdpass_token1] = "ProxyUseFdpass",
  [aux_sym__pubkey_accepted_algorithms_token1] = "PubkeyAcceptedAlgorithms",
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
  [aux_sym__proxy_jump_arg_token1] = aux_sym__match_localnetwork_token2,
  [aux_sym__proxy_jump_arg_token2] = aux_sym__proxy_jump_arg_token2,
  [aux_sym__proxy_use_fdpass_token1] = aux_sym__proxy_use_fdpass_token1,
  [aux_sym__pubkey_accepted_algorithms_token1] = aux_sym__pubkey_accepted_algorithms_token1,
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
  [3] = {.index = 6, .length = 4},
  [4] = {.index = 10, .length = 3},
  [5] = {.index = 13, .length = 5},
  [6] = {.index = 18, .length = 4},
  [7] = {.index = 22, .length = 6},
  [8] = {.index = 28, .length = 4},
  [10] = {.index = 32, .length = 1},
  [11] = {.index = 33, .length = 1},
  [12] = {.index = 34, .length = 2},
  [13] = {.index = 36, .length = 2},
  [15] = {.index = 36, .length = 2},
  [16] = {.index = 38, .length = 1},
  [17] = {.index = 39, .length = 4},
  [18] = {.index = 43, .length = 2},
  [19] = {.index = 45, .length = 4},
  [20] = {.index = 49, .length = 1},
  [21] = {.index = 50, .length = 3},
  [22] = {.index = 53, .length = 5},
  [23] = {.index = 58, .length = 4},
  [24] = {.index = 36, .length = 2},
  [26] = {.index = 62, .length = 3},
  [27] = {.index = 65, .length = 7},
  [28] = {.index = 72, .length = 3},
  [29] = {.index = 75, .length = 7},
  [30] = {.index = 82, .length = 1},
  [31] = {.index = 83, .length = 9},
  [32] = {.index = 92, .length = 7},
  [35] = {.index = 99, .length = 1},
  [36] = {.index = 100, .length = 2},
  [37] = {.index = 102, .length = 2},
  [38] = {.index = 102, .length = 2},
  [39] = {.index = 102, .length = 2},
  [41] = {.index = 104, .length = 4},
  [42] = {.index = 108, .length = 3},
  [43] = {.index = 111, .length = 6},
  [44] = {.index = 117, .length = 2},
  [45] = {.index = 82, .length = 1},
  [46] = {.index = 119, .length = 2},
  [47] = {.index = 121, .length = 2},
  [48] = {.index = 123, .length = 3},
  [49] = {.index = 126, .length = 6},
  [50] = {.index = 132, .length = 3},
  [51] = {.index = 135, .length = 7},
  [52] = {.index = 142, .length = 7},
  [53] = {.index = 149, .length = 3},
  [54] = {.index = 152, .length = 6},
  [55] = {.index = 158, .length = 2},
  [56] = {.index = 160, .length = 2},
  [57] = {.index = 162, .length = 4},
  [58] = {.index = 166, .length = 2},
  [60] = {.index = 168, .length = 3},
  [61] = {.index = 171, .length = 3},
  [62] = {.index = 174, .length = 3},
  [63] = {.index = 177, .length = 11},
  [64] = {.index = 188, .length = 4},
  [65] = {.index = 192, .length = 4},
  [66] = {.index = 192, .length = 4},
  [67] = {.index = 196, .length = 4},
  [68] = {.index = 200, .length = 3},
  [69] = {.index = 203, .length = 2},
  [70] = {.index = 205, .length = 6},
  [72] = {.index = 211, .length = 5},
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
    {field_file, 0, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_line, 0, .inherited = true},
  [18] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [22] =
    {field_argument, 0, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_uri, 0, .inherited = true},
    {field_user, 0, .inherited = true},
  [28] =
    {field_argument, 0, .inherited = true},
    {field_keyword, 0, .inherited = true},
    {field_local_tun, 0, .inherited = true},
    {field_remote_tun, 0, .inherited = true},
  [32] =
    {field_criteria, 0},
  [33] =
    {field_criteria, 0, .inherited = true},
  [34] =
    {field_argument, 0, .inherited = true},
    {field_criteria, 0, .inherited = true},
  [36] =
    {field_argument, 2},
    {field_keyword, 0},
  [38] =
    {field_keyword, 0},
  [39] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
  [43] =
    {field_bind_address, 0, .inherited = true},
    {field_port, 0, .inherited = true},
  [45] =
    {field_argument, 2},
    {field_bind_address, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [49] =
    {field_port, 0},
  [50] =
    {field_argument, 2},
    {field_keyword, 0},
    {field_name, 2, .inherited = true},
  [53] =
    {field_argument, 2},
    {field_file, 2, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
  [58] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
  [62] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [65] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [72] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [75] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [82] =
    {field_name, 1},
  [83] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [92] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [99] =
    {field_argument, 1},
  [100] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [102] =
    {field_argument, 2},
    {field_criteria, 0},
  [104] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [108] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [111] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [117] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [119] =
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [121] =
    {field_bind_address, 0},
    {field_port, 2},
  [123] =
    {field_argument, 1},
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [126] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_bind_address, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [132] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [135] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
  [142] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [149] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [152] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [158] =
    {field_host, 0},
    {field_port, 2},
  [160] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [162] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [166] =
    {field_argument, 1},
    {field_argument, 2},
  [168] =
    {field_argument, 2},
    {field_argument, 3},
    {field_criteria, 0},
  [171] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [174] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [177] =
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
  [188] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [192] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_criteria, 0},
  [196] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [200] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [203] =
    {field_host, 1},
    {field_port, 3},
  [205] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_argument, 6},
    {field_keyword, 0},
  [211] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_criteria, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [0] = alias_sym_pattern,
  },
  [13] = {
    [0] = anon_alias_sym_User,
  },
  [14] = {
    [0] = aux_sym__match_localnetwork_token2,
  },
  [24] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [25] = {
    [0] = sym_variable,
  },
  [30] = {
    [1] = sym_variable,
  },
  [33] = {
    [1] = sym_variable,
  },
  [34] = {
    [1] = alias_sym_pattern,
  },
  [37] = {
    [0] = anon_alias_sym_host,
  },
  [38] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [40] = {
    [1] = aux_sym__match_localnetwork_token2,
  },
  [59] = {
    [0] = alias_sym_pattern,
    [1] = alias_sym_pattern,
  },
  [65] = {
    [3] = aux_sym__match_localnetwork_token2,
  },
  [71] = {
    [1] = alias_sym_pattern,
    [2] = alias_sym_pattern,
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
  [104] = 87,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 83,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 82,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 82,
  [120] = 120,
  [121] = 121,
  [122] = 83,
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
  [136] = 128,
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
  [149] = 87,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 139,
  [154] = 154,
  [155] = 125,
  [156] = 87,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 139,
  [163] = 163,
  [164] = 87,
  [165] = 125,
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
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 148,
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
  [272] = 148,
  [273] = 273,
  [274] = 87,
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
  [312] = 191,
  [313] = 313,
  [314] = 314,
  [315] = 233,
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
  [451] = 205,
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
  [604] = 320,
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
  [797] = 770,
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
  [811] = 770,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 770,
  [817] = 817,
  [818] = 770,
  [819] = 770,
  [820] = 771,
  [821] = 771,
  [822] = 771,
  [823] = 771,
  [824] = 771,
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
      if (eof) ADVANCE(1816);
      if (lookahead == '!') ADVANCE(1819);
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(2024);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '+') ADVANCE(1886);
      if (lookahead == ',') ADVANCE(1854);
      if (lookahead == '-') ADVANCE(1887);
      if (lookahead == ':') ADVANCE(1884);
      if (lookahead == '=') ADVANCE(1983);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead == '@') ADVANCE(1953);
      if (lookahead == 'S') ADVANCE(1826);
      if (lookahead == '^') ADVANCE(1891);
      if (lookahead == 's') ADVANCE(1826);
      if (lookahead == '}') ADVANCE(2044);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1837);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1837);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1826);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1826);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1826);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1826);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'g' ||
          lookahead == 'k') ADVANCE(1826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1826);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2059);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1819);
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '+') ADVANCE(1886);
      if (lookahead == '-') ADVANCE(1887);
      if (lookahead == '0') ADVANCE(2047);
      if (lookahead == ':') ADVANCE(1884);
      if (lookahead == '=') ADVANCE(2056);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead == 'A') ADVANCE(1209);
      if (lookahead == 'C') ADVANCE(779);
      if (lookahead == 'E') ADVANCE(1781);
      if (lookahead == 'F') ADVANCE(1149);
      if (lookahead == 'O') ADVANCE(1538);
      if (lookahead == 'S') ADVANCE(1941);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(559);
      if (lookahead == 'n') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(659);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 'w') ADVANCE(426);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2057);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1442);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1438);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1618);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2048);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == ':') ADVANCE(1884);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1964);
      if (lookahead == '%') ADVANCE(1967);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1965);
      if (lookahead != 0) ADVANCE(1962);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1964);
      if (lookahead == '%') ADVANCE(1968);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1965);
      if (lookahead != 0) ADVANCE(1962);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1966);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1965);
      if (lookahead != 0) ADVANCE(1962);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1832);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1969);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1965);
      if (lookahead != 0) ADVANCE(1962);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == ',') ADVANCE(1854);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '-') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1977);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(1886);
      if (lookahead == '-') ADVANCE(1887);
      if (lookahead == '0') ADVANCE(1810);
      if (lookahead == '3') ADVANCE(381);
      if (lookahead == '^') ADVANCE(1891);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2051);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2052);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2053);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2054);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2050);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1811);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead == 'D') ADVANCE(242);
      if (lookahead == 'L') ADVANCE(274);
      if (lookahead == 'S') ADVANCE(1954);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead == 'G' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(2049);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(1819);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(1819);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1837);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(1820);
      if (lookahead == '"') ADVANCE(1836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(1820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(2024);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == 'S') ADVANCE(1827);
      if (lookahead == 'n') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '0') ADVANCE(1826);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1837);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(1831);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(1838);
      if (lookahead == '%') ADVANCE(1840);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0) ADVANCE(1837);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(1838);
      if (lookahead == '%') ADVANCE(1840);
      if (lookahead != 0) ADVANCE(1837);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(2023);
      if (lookahead == 'n') ADVANCE(1829);
      if (lookahead == 'y') ADVANCE(1828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '$') ADVANCE(2023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '%') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '%') ADVANCE(1840);
      if (lookahead != 0) ADVANCE(1837);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '%') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '%') ADVANCE(1839);
      if (lookahead != 0) ADVANCE(1837);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == ',') ADVANCE(1854);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0) ADVANCE(1837);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '0') ADVANCE(1826);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead == 'n') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0) ADVANCE(1837);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1837);
      if (lookahead != 0) ADVANCE(1826);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead != 0) ADVANCE(1837);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1836);
      if (lookahead == '*') ADVANCE(1862);
      if (lookahead == 'a') ADVANCE(1848);
      if (lookahead == 'n') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(1964);
      if (lookahead == '%') ADVANCE(1967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1962);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(1964);
      if (lookahead == '%') ADVANCE(1968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1962);
      END_STATE();
    case 48:
      if (lookahead == '%') ADVANCE(1966);
      if (lookahead == 'n') ADVANCE(1963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1962);
      END_STATE();
    case 49:
      if (lookahead == '%') ADVANCE(1969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1962);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == ',') ADVANCE(1854);
      if (lookahead == ':') ADVANCE(1884);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == ':') ADVANCE(1884);
      if (lookahead == '?') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1837);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(1863);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1855);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(398);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(517);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(697);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(436);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(526);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '@') ADVANCE(571);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(702);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(445);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '@') ADVANCE(551);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(587);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(519);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(675);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(399);
      if (lookahead == '1') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(491);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(635);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '4') ADVANCE(88);
      if (lookahead == '6') ADVANCE(89);
      if (lookahead == '8') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(539);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(663);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(351);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(554);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(361);
      END_STATE();
    case 107:
      if (lookahead == '.') ADVANCE(362);
      END_STATE();
    case 108:
      if (lookahead == '.') ADVANCE(363);
      END_STATE();
    case 109:
      if (lookahead == '.') ADVANCE(364);
      END_STATE();
    case 110:
      if (lookahead == '0') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == '0') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == '0') ADVANCE(72);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(1805);
      if (lookahead == '2') ADVANCE(1805);
      if (lookahead == '3') ADVANCE(1805);
      if (lookahead == '4') ADVANCE(1805);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(2013);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(2015);
      if (lookahead == '2') ADVANCE(77);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(229);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(705);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(1914);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(2010);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(2010);
      if (lookahead == '2') ADVANCE(191);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(2017);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(147);
      if (lookahead == '2') ADVANCE(196);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(176);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(140);
      if (lookahead == '6') ADVANCE(178);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(225);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(227);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(139);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(226);
      END_STATE();
    case 130:
      if (lookahead == '1') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == '1') ADVANCE(118);
      END_STATE();
    case 132:
      if (lookahead == '1') ADVANCE(231);
      END_STATE();
    case 133:
      if (lookahead == '1') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == '1') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == '1') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == '1') ADVANCE(1486);
      END_STATE();
    case 137:
      if (lookahead == '1') ADVANCE(230);
      END_STATE();
    case 138:
      if (lookahead == '1') ADVANCE(234);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(2013);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(220);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(2010);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(2017);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(2016);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(224);
      if (lookahead == '9') ADVANCE(162);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == '3') ADVANCE(222);
      if (lookahead == '5') ADVANCE(158);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(191);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '5') ADVANCE(156);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(114);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == '3') ADVANCE(223);
      if (lookahead == '5') ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == '5') ADVANCE(135);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(121);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(70);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(201);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(202);
      END_STATE();
    case 167:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 168:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(86);
      END_STATE();
    case 170:
      if (lookahead == '2') ADVANCE(91);
      END_STATE();
    case 171:
      if (lookahead == '2') ADVANCE(94);
      END_STATE();
    case 172:
      if (lookahead == '2') ADVANCE(205);
      END_STATE();
    case 173:
      if (lookahead == '2') ADVANCE(235);
      END_STATE();
    case 174:
      if (lookahead == '2') ADVANCE(207);
      END_STATE();
    case 175:
      if (lookahead == '2') ADVANCE(100);
      END_STATE();
    case 176:
      if (lookahead == '3') ADVANCE(111);
      END_STATE();
    case 177:
      if (lookahead == '4') ADVANCE(2013);
      END_STATE();
    case 178:
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 179:
      if (lookahead == '4') ADVANCE(2010);
      END_STATE();
    case 180:
      if (lookahead == '4') ADVANCE(2017);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(1910);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(208);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(2015);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(214);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(184);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(209);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(210);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(211);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(213);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(217);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(127);
      END_STATE();
    case 195:
      if (lookahead == '5') ADVANCE(212);
      END_STATE();
    case 196:
      if (lookahead == '5') ADVANCE(216);
      END_STATE();
    case 197:
      if (lookahead == '5') ADVANCE(133);
      END_STATE();
    case 198:
      if (lookahead == '5') ADVANCE(134);
      END_STATE();
    case 199:
      if (lookahead == '5') ADVANCE(129);
      END_STATE();
    case 200:
      if (lookahead == '5') ADVANCE(132);
      END_STATE();
    case 201:
      if (lookahead == '5') ADVANCE(194);
      END_STATE();
    case 202:
      if (lookahead == '5') ADVANCE(199);
      END_STATE();
    case 203:
      if (lookahead == '5') ADVANCE(200);
      END_STATE();
    case 204:
      if (lookahead == '5') ADVANCE(137);
      END_STATE();
    case 205:
      if (lookahead == '5') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == '5') ADVANCE(237);
      END_STATE();
    case 207:
      if (lookahead == '5') ADVANCE(218);
      END_STATE();
    case 208:
      if (lookahead == '6') ADVANCE(1911);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(2013);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(2011);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(2010);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(2017);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(2016);
      END_STATE();
    case 215:
      if (lookahead == '6') ADVANCE(117);
      END_STATE();
    case 216:
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 217:
      if (lookahead == '6') ADVANCE(234);
      END_STATE();
    case 218:
      if (lookahead == '6') ADVANCE(236);
      END_STATE();
    case 219:
      if (lookahead == '7') ADVANCE(215);
      END_STATE();
    case 220:
      if (lookahead == '8') ADVANCE(69);
      END_STATE();
    case 221:
      if (lookahead == '8') ADVANCE(179);
      END_STATE();
    case 222:
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 223:
      if (lookahead == '8') ADVANCE(180);
      END_STATE();
    case 224:
      if (lookahead == '8') ADVANCE(59);
      END_STATE();
    case 225:
      if (lookahead == '9') ADVANCE(2013);
      END_STATE();
    case 226:
      if (lookahead == '9') ADVANCE(2017);
      END_STATE();
    case 227:
      if (lookahead == '9') ADVANCE(63);
      END_STATE();
    case 228:
      if (lookahead == '9') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 229:
      if (lookahead == '9') ADVANCE(81);
      END_STATE();
    case 230:
      if (lookahead == '9') ADVANCE(85);
      END_STATE();
    case 231:
      if (lookahead == '9') ADVANCE(236);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(1884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1826);
      END_STATE();
    case 233:
      if (lookahead == '@') ADVANCE(551);
      END_STATE();
    case 234:
      if (lookahead == '@') ADVANCE(571);
      END_STATE();
    case 235:
      if (lookahead == '@') ADVANCE(572);
      END_STATE();
    case 236:
      if (lookahead == '@') ADVANCE(573);
      END_STATE();
    case 237:
      if (lookahead == '@') ADVANCE(574);
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1495);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(261);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(262);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(290);
      END_STATE();
    case 242:
      if (lookahead == 'A') ADVANCE(251);
      END_STATE();
    case 243:
      if (lookahead == 'B') ADVANCE(289);
      END_STATE();
    case 244:
      if (lookahead == 'B') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1037);
      END_STATE();
    case 245:
      if (lookahead == 'C') ADVANCE(260);
      END_STATE();
    case 246:
      if (lookahead == 'C') ADVANCE(240);
      END_STATE();
    case 247:
      if (lookahead == 'E') ADVANCE(243);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1319);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(1191);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(1506);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1584);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(2005);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(263);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(285);
      END_STATE();
    case 253:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 254:
      if (lookahead == 'F') ADVANCE(269);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1227);
      END_STATE();
    case 255:
      if (lookahead == 'G') ADVANCE(2006);
      END_STATE();
    case 256:
      if (lookahead == 'H') ADVANCE(293);
      END_STATE();
    case 257:
      if (lookahead == 'H') ADVANCE(2007);
      END_STATE();
    case 258:
      if (lookahead == 'H') ADVANCE(294);
      END_STATE();
    case 259:
      if (lookahead == 'I') ADVANCE(252);
      END_STATE();
    case 260:
      if (lookahead == 'K') ADVANCE(1928);
      END_STATE();
    case 261:
      if (lookahead == 'L') ADVANCE(2005);
      END_STATE();
    case 262:
      if (lookahead == 'L') ADVANCE(1809);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(272);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(823);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(945);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1322);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1494);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(2007);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(823);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(945);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1322);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1494);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(832);
      if (lookahead == 'e') ADVANCE(2004);
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 268:
      if (lookahead == 'O') ADVANCE(1091);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1266);
      END_STATE();
    case 269:
      if (lookahead == 'O') ADVANCE(2005);
      END_STATE();
    case 270:
      if (lookahead == 'O') ADVANCE(281);
      END_STATE();
    case 271:
      if (lookahead == 'O') ADVANCE(245);
      END_STATE();
    case 272:
      if (lookahead == 'O') ADVANCE(265);
      END_STATE();
    case 273:
      if (lookahead == 'O') ADVANCE(278);
      END_STATE();
    case 274:
      if (lookahead == 'O') ADVANCE(246);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(276);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1115);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(273);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(1113);
      END_STATE();
    case 278:
      if (lookahead == 'R') ADVANCE(2005);
      END_STATE();
    case 279:
      if (lookahead == 'R') ADVANCE(2007);
      END_STATE();
    case 280:
      if (lookahead == 'S') ADVANCE(1845);
      if (lookahead == 'n') ADVANCE(1850);
      if (lookahead == 's') ADVANCE(1851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 282:
      if (lookahead == 'S') ADVANCE(271);
      END_STATE();
    case 283:
      if (lookahead == 'S') ADVANCE(253);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(2005);
      END_STATE();
    case 286:
      if (lookahead == 'T') ADVANCE(257);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 288:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 289:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 290:
      if (lookahead == 'U') ADVANCE(287);
      END_STATE();
    case 291:
      if (lookahead == 'U') ADVANCE(286);
      END_STATE();
    case 292:
      if (lookahead == '^') ADVANCE(1907);
      if (lookahead == 'n') ADVANCE(1906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1905);
      END_STATE();
    case 293:
      if (lookahead == '_') ADVANCE(241);
      END_STATE();
    case 294:
      if (lookahead == '_') ADVANCE(282);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(2013);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(2017);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 335:
      if (lookahead == 'b') ADVANCE(305);
      END_STATE();
    case 336:
      if (lookahead == 'b') ADVANCE(346);
      END_STATE();
    case 337:
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 338:
      if (lookahead == 'b') ADVANCE(567);
      END_STATE();
    case 339:
      if (lookahead == 'b') ADVANCE(312);
      END_STATE();
    case 340:
      if (lookahead == 'b') ADVANCE(555);
      END_STATE();
    case 341:
      if (lookahead == 'b') ADVANCE(508);
      END_STATE();
    case 342:
      if (lookahead == 'b') ADVANCE(569);
      END_STATE();
    case 343:
      if (lookahead == 'b') ADVANCE(631);
      END_STATE();
    case 344:
      if (lookahead == 'b') ADVANCE(333);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'f') ADVANCE(2004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1115);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(2009);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(2008);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(552);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(677);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(674);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1210);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(553);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(561);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(978);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 370:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(1958);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(1959);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(2027);
      if (lookahead == 'n') ADVANCE(2034);
      if (lookahead == 's') ADVANCE(2039);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(2008);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1808);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(623);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(657);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(658);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(662);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1881);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1972);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(2008);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1227);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 427:
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1210);
      END_STATE();
    case 428:
      if (lookahead == 'f') ADVANCE(1991);
      END_STATE();
    case 429:
      if (lookahead == 'f') ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 431:
      if (lookahead == 'f') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1120);
      END_STATE();
    case 432:
      if (lookahead == 'f') ADVANCE(481);
      END_STATE();
    case 433:
      if (lookahead == 'g') ADVANCE(2010);
      END_STATE();
    case 434:
      if (lookahead == 'g') ADVANCE(441);
      END_STATE();
    case 435:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 436:
      if (lookahead == 'g') ADVANCE(603);
      END_STATE();
    case 437:
      if (lookahead == 'g') ADVANCE(633);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'k') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(529);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(594);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1470);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1323);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(578);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead == 'k') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(670);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1582);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 446:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 449:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 450:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 451:
      if (lookahead == 'h') ADVANCE(306);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(407);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 468:
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 469:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 470:
      if (lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 471:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 472:
      if (lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 473:
      if (lookahead == 'h') ADVANCE(547);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1319);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(660);
      END_STATE();
    case 495:
      if (lookahead == 'k') ADVANCE(1866);
      END_STATE();
    case 496:
      if (lookahead == 'k') ADVANCE(1898);
      END_STATE();
    case 497:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 498:
      if (lookahead == 'k') ADVANCE(404);
      END_STATE();
    case 499:
      if (lookahead == 'k') ADVANCE(99);
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 500:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(919);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1392);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1734);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1423);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(518);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(710);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1583);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(2010);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(2014);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(2012);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(1867);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(2017);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(2009);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(891);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(943);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1418);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(668);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(2046);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(1897);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1369);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1352);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(692);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(556);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(679);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(419);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(422);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(2009);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(1806);
      if (lookahead == 'u') ADVANCE(593);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1504);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(717);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1474);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(942);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1265);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(2013);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(2045);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(2017);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(703);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(672);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(682);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(686);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(648);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 660:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(2004);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(1871);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(1997);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(1996);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 689:
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 692:
      if (lookahead == 'u') ADVANCE(664);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(577);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 695:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 696:
      if (lookahead == 'u') ADVANCE(688);
      END_STATE();
    case 697:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 698:
      if (lookahead == 'v') ADVANCE(415);
      END_STATE();
    case 699:
      if (lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 700:
      if (lookahead == 'w') ADVANCE(1990);
      END_STATE();
    case 701:
      if (lookahead == 'w') ADVANCE(378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1230);
      END_STATE();
    case 702:
      if (lookahead == 'w') ADVANCE(486);
      END_STATE();
    case 703:
      if (lookahead == 'w') ADVANCE(563);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(365);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 706:
      if (lookahead == 'y') ADVANCE(2004);
      END_STATE();
    case 707:
      if (lookahead == 'y') ADVANCE(1869);
      END_STATE();
    case 708:
      if (lookahead == 'y') ADVANCE(2008);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 710:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 711:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1504);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(717);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1474);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(942);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1265);
      END_STATE();
    case 712:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 713:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1470);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1323);
      END_STATE();
    case 714:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1651);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1320);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1736);
      END_STATE();
    case 716:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(836);
      END_STATE();
    case 717:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1225);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 719:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1268);
      END_STATE();
    case 720:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1780);
      END_STATE();
    case 721:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1477);
      END_STATE();
    case 722:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1299);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1777);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1047);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1476);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1589);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1503);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(833);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1508);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(918);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(816);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1211);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1517);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1274);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1366);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1226);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1259);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1062);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1224);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1511);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1601);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1215);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1334);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1216);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1335);
      END_STATE();
    case 743:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1678);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1228);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1257);
      END_STATE();
    case 747:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1138);
      END_STATE();
    case 748:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1562);
      END_STATE();
    case 749:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1497);
      END_STATE();
    case 750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1598);
      END_STATE();
    case 751:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1654);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1519);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1523);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1218);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1524);
      END_STATE();
    case 756:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1592);
      END_STATE();
    case 757:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1242);
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1219);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1526);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1689);
      END_STATE();
    case 761:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1535);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 763:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1221);
      END_STATE();
    case 764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1222);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1585);
      END_STATE();
    case 766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1741);
      END_STATE();
    case 767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1235);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1066);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1290);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1232);
      END_STATE();
    case 771:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1662);
      END_STATE();
    case 772:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1337);
      END_STATE();
    case 773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1703);
      END_STATE();
    case 774:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1482);
      END_STATE();
    case 775:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1285);
      END_STATE();
    case 776:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1668);
      END_STATE();
    case 777:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 778:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1240);
      END_STATE();
    case 779:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1369);
      END_STATE();
    case 780:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1128);
      END_STATE();
    case 781:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1286);
      END_STATE();
    case 782:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1342);
      END_STATE();
    case 783:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1603);
      END_STATE();
    case 784:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1344);
      END_STATE();
    case 785:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1346);
      END_STATE();
    case 786:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1673);
      END_STATE();
    case 787:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1627);
      END_STATE();
    case 788:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1252);
      END_STATE();
    case 789:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1624);
      END_STATE();
    case 790:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1068);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1152);
      END_STATE();
    case 791:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1706);
      END_STATE();
    case 792:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1070);
      END_STATE();
    case 793:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1707);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1708);
      END_STATE();
    case 795:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1709);
      END_STATE();
    case 796:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1710);
      END_STATE();
    case 797:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1711);
      END_STATE();
    case 798:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1712);
      END_STATE();
    case 799:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1713);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1714);
      END_STATE();
    case 801:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1262);
      END_STATE();
    case 802:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1260);
      END_STATE();
    case 803:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1263);
      END_STATE();
    case 804:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1261);
      END_STATE();
    case 805:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1264);
      END_STATE();
    case 806:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(960);
      END_STATE();
    case 807:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1749);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1006);
      END_STATE();
    case 808:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1750);
      END_STATE();
    case 809:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1751);
      END_STATE();
    case 810:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1752);
      END_STATE();
    case 811:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1753);
      END_STATE();
    case 812:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1754);
      END_STATE();
    case 813:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(900);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1779);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1387);
      END_STATE();
    case 814:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(735);
      END_STATE();
    case 815:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(743);
      END_STATE();
    case 816:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1195);
      END_STATE();
    case 817:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1237);
      END_STATE();
    case 818:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1425);
      END_STATE();
    case 819:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1148);
      END_STATE();
    case 820:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1003);
      END_STATE();
    case 821:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1825);
      END_STATE();
    case 822:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1207);
      END_STATE();
    case 823:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1227);
      END_STATE();
    case 824:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1075);
      END_STATE();
    case 825:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1738);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1763);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1586);
      END_STATE();
    case 826:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1078);
      END_STATE();
    case 827:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1205);
      END_STATE();
    case 828:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(721);
      END_STATE();
    case 829:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(824);
      END_STATE();
    case 830:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1086);
      END_STATE();
    case 831:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1206);
      END_STATE();
    case 832:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1230);
      END_STATE();
    case 833:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1558);
      END_STATE();
    case 834:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1715);
      END_STATE();
    case 835:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1390);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1402);
      END_STATE();
    case 836:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(844);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1727);
      END_STATE();
    case 837:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1637);
      END_STATE();
    case 838:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1126);
      END_STATE();
    case 839:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1397);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1368);
      END_STATE();
    case 840:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 841:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 842:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 843:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(746);
      END_STATE();
    case 844:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(954);
      END_STATE();
    case 845:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 846:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 847:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 848:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(930);
      END_STATE();
    case 849:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(931);
      END_STATE();
    case 850:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(774);
      END_STATE();
    case 851:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1081);
      END_STATE();
    case 852:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1705);
      END_STATE();
    case 853:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1532);
      END_STATE();
    case 854:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(776);
      END_STATE();
    case 855:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1444);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1737);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1604);
      END_STATE();
    case 856:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1365);
      END_STATE();
    case 857:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1453);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1455);
      END_STATE();
    case 858:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1457);
      END_STATE();
    case 859:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1461);
      END_STATE();
    case 860:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1465);
      END_STATE();
    case 861:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1053);
      END_STATE();
    case 862:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(802);
      END_STATE();
    case 863:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 864:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      END_STATE();
    case 865:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(794);
      END_STATE();
    case 866:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      END_STATE();
    case 867:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      END_STATE();
    case 868:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(797);
      END_STATE();
    case 869:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(798);
      END_STATE();
    case 870:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 871:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      END_STATE();
    case 872:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1025);
      END_STATE();
    case 873:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1730);
      END_STATE();
    case 874:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1210);
      END_STATE();
    case 875:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1192);
      END_STATE();
    case 876:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(768);
      END_STATE();
    case 877:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(806);
      END_STATE();
    case 878:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1937);
      END_STATE();
    case 879:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1938);
      END_STATE();
    case 880:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1951);
      END_STATE();
    case 881:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1961);
      END_STATE();
    case 882:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1970);
      END_STATE();
    case 883:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1901);
      END_STATE();
    case 884:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1280);
      END_STATE();
    case 885:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1916);
      END_STATE();
    case 886:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1936);
      END_STATE();
    case 887:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1946);
      END_STATE();
    case 888:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1857);
      END_STATE();
    case 889:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 890:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 891:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(771);
      END_STATE();
    case 892:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 893:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1430);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1803);
      END_STATE();
    case 894:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(856);
      END_STATE();
    case 895:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1536);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1137);
      END_STATE();
    case 897:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(921);
      END_STATE();
    case 898:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(923);
      END_STATE();
    case 899:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(958);
      END_STATE();
    case 900:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1140);
      END_STATE();
    case 901:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1417);
      END_STATE();
    case 902:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1348);
      END_STATE();
    case 903:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1041);
      END_STATE();
    case 904:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1485);
      END_STATE();
    case 905:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(985);
      END_STATE();
    case 906:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(989);
      END_STATE();
    case 907:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1250);
      END_STATE();
    case 908:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1488);
      END_STATE();
    case 909:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1017);
      END_STATE();
    case 910:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1548);
      END_STATE();
    case 911:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1098);
      END_STATE();
    case 912:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(803);
      END_STATE();
    case 913:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(805);
      END_STATE();
    case 914:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      END_STATE();
    case 915:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1582);
      END_STATE();
    case 918:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1045);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1778);
      END_STATE();
    case 919:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1788);
      END_STATE();
    case 920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 921:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1931);
      END_STATE();
    case 922:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1925);
      END_STATE();
    case 923:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1873);
      END_STATE();
    case 924:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1940);
      END_STATE();
    case 925:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 926:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1980);
      END_STATE();
    case 927:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 928:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1929);
      END_STATE();
    case 929:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1993);
      END_STATE();
    case 930:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1998);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1875);
      END_STATE();
    case 932:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1888);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1973);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2000);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1878);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1908);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1917);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1902);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1506);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1584);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1756);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1797);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 943:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 944:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1790);
      END_STATE();
    case 945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1325);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1740);
      END_STATE();
    case 948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 953:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1802);
      END_STATE();
    case 954:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1793);
      END_STATE();
    case 956:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 957:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1516);
      END_STATE();
    case 958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1317);
      END_STATE();
    case 959:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1271);
      END_STATE();
    case 960:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1800);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1510);
      END_STATE();
    case 963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 964:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1789);
      END_STATE();
    case 965:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1214);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1620);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1587);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1792);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1539);
      END_STATE();
    case 970:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 971:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1785);
      END_STATE();
    case 972:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 973:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1616);
      END_STATE();
    case 974:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1556);
      END_STATE();
    case 975:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1360);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1422);
      END_STATE();
    case 977:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(948);
      END_STATE();
    case 978:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1537);
      END_STATE();
    case 980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1593);
      END_STATE();
    case 981:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 982:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 983:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 984:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 985:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 986:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 987:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 988:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 989:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1500);
      END_STATE();
    case 990:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 991:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1501);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 993:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1579);
      END_STATE();
    case 994:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1702);
      END_STATE();
    case 995:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1758);
      END_STATE();
    case 996:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 997:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 998:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1594);
      END_STATE();
    case 999:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1297);
      END_STATE();
    case 1000:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1791);
      END_STATE();
    case 1001:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1521);
      END_STATE();
    case 1002:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 1003:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1514);
      END_STATE();
    case 1004:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1794);
      END_STATE();
    case 1005:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1596);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1527);
      END_STATE();
    case 1006:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1241);
      END_STATE();
    case 1007:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1008:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 1009:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1795);
      END_STATE();
    case 1010:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1599);
      END_STATE();
    case 1011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1531);
      END_STATE();
    case 1012:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1343);
      END_STATE();
    case 1013:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1345);
      END_STATE();
    case 1014:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 1015:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 1016:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 1017:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1361);
      END_STATE();
    case 1018:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 1019:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 1020:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 1021:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 1022:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      END_STATE();
    case 1023:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 1024:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 1025:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1493);
      END_STATE();
    case 1026:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1376);
      END_STATE();
    case 1027:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 1028:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1378);
      END_STATE();
    case 1029:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 1030:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1380);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 1032:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 1033:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 1034:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 1035:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 1036:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      END_STATE();
    case 1037:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1801);
      END_STATE();
    case 1038:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(904);
      END_STATE();
    case 1039:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(733);
      END_STATE();
    case 1040:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(777);
      END_STATE();
    case 1041:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(747);
      END_STATE();
    case 1042:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(769);
      END_STATE();
    case 1043:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1478);
      END_STATE();
    case 1044:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1415);
      END_STATE();
    case 1045:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(969);
      END_STATE();
    case 1046:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1144);
      END_STATE();
    case 1047:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1695);
      END_STATE();
    case 1048:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1156);
      END_STATE();
    case 1049:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(778);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1440);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(720);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1016);
      END_STATE();
    case 1050:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1449);
      END_STATE();
    case 1051:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1158);
      END_STATE();
    case 1052:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1159);
      END_STATE();
    case 1053:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1459);
      END_STATE();
    case 1054:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1463);
      END_STATE();
    case 1055:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1994);
      END_STATE();
    case 1056:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1989);
      END_STATE();
    case 1057:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1039);
      END_STATE();
    case 1058:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1307);
      END_STATE();
    case 1059:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1573);
      END_STATE();
    case 1060:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(988);
      END_STATE();
    case 1061:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1356);
      END_STATE();
    case 1062:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1060);
      END_STATE();
    case 1063:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(962);
      END_STATE();
    case 1064:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1446);
      END_STATE();
    case 1065:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1011);
      END_STATE();
    case 1066:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1012);
      END_STATE();
    case 1067:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1154);
      END_STATE();
    case 1068:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1013);
      END_STATE();
    case 1069:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(786);
      END_STATE();
    case 1070:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1014);
      END_STATE();
    case 1071:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1454);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 1072:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1458);
      END_STATE();
    case 1073:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1462);
      END_STATE();
    case 1074:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1466);
      END_STATE();
    case 1075:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1821);
      END_STATE();
    case 1076:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1900);
      END_STATE();
    case 1077:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1909);
      END_STATE();
    case 1078:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1270);
      END_STATE();
    case 1079:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1273);
      END_STATE();
    case 1080:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(756);
      END_STATE();
    case 1081:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(972);
      END_STATE();
    case 1082:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(957);
      END_STATE();
    case 1083:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1236);
      END_STATE();
    case 1084:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1277);
      END_STATE();
    case 1085:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(975);
      END_STATE();
    case 1086:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(749);
      END_STATE();
    case 1087:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1279);
      END_STATE();
    case 1088:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1283);
      END_STATE();
    case 1089:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1198);
      END_STATE();
    case 1090:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1284);
      END_STATE();
    case 1091:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1418);
      END_STATE();
    case 1092:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1432);
      END_STATE();
    case 1093:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1434);
      END_STATE();
    case 1094:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1436);
      END_STATE();
    case 1095:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1452);
      END_STATE();
    case 1096:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1456);
      END_STATE();
    case 1097:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1460);
      END_STATE();
    case 1098:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1464);
      END_STATE();
    case 1099:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1439);
      END_STATE();
    case 1100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1441);
      END_STATE();
    case 1101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1443);
      END_STATE();
    case 1102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1467);
      END_STATE();
    case 1103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1026);
      END_STATE();
    case 1104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1027);
      END_STATE();
    case 1105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1028);
      END_STATE();
    case 1106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1029);
      END_STATE();
    case 1107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1030);
      END_STATE();
    case 1108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1031);
      END_STATE();
    case 1109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1032);
      END_STATE();
    case 1110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1033);
      END_STATE();
    case 1111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      END_STATE();
    case 1112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1495);
      END_STATE();
    case 1113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1037);
      END_STATE();
    case 1114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1061);
      END_STATE();
    case 1115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1680);
      END_STATE();
    case 1116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 1117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1058);
      END_STATE();
    case 1118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 1119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1472);
      END_STATE();
    case 1120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1067);
      END_STATE();
    case 1121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1636);
      END_STATE();
    case 1122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1638);
      END_STATE();
    case 1123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1450);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 1124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1652);
      END_STATE();
    case 1125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 1126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1251);
      END_STATE();
    case 1127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1233);
      END_STATE();
    case 1128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1347);
      END_STATE();
    case 1129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1639);
      END_STATE();
    case 1130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1327);
      END_STATE();
    case 1131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1679);
      END_STATE();
    case 1132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(973);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(790);
      END_STATE();
    case 1134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 1135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      END_STATE();
    case 1136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1804);
      END_STATE();
    case 1137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1329);
      END_STATE();
    case 1138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 1139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1333);
      END_STATE();
    case 1140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1332);
      END_STATE();
    case 1141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1281);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1353);
      END_STATE();
    case 1143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 1144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1760);
      END_STATE();
    case 1146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1330);
      END_STATE();
    case 1147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1424);
      END_STATE();
    case 1148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1339);
      END_STATE();
    case 1149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1352);
      END_STATE();
    case 1150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1761);
      END_STATE();
    case 1151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1400);
      END_STATE();
    case 1152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1243);
      END_STATE();
    case 1153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1341);
      END_STATE();
    case 1154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1373);
      END_STATE();
    case 1155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1762);
      END_STATE();
    case 1156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1244);
      END_STATE();
    case 1157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 1158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1245);
      END_STATE();
    case 1159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1246);
      END_STATE();
    case 1160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 1161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1408);
      END_STATE();
    case 1162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      END_STATE();
    case 1163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1608);
      END_STATE();
    case 1164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1409);
      END_STATE();
    case 1165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1410);
      END_STATE();
    case 1166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1412);
      END_STATE();
    case 1167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1426);
      END_STATE();
    case 1168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1413);
      END_STATE();
    case 1169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1414);
      END_STATE();
    case 1170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1294);
      END_STATE();
    case 1171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(906);
      END_STATE();
    case 1172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1684);
      END_STATE();
    case 1173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1696);
      END_STATE();
    case 1174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1447);
      END_STATE();
    case 1175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1748);
      END_STATE();
    case 1176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1685);
      END_STATE();
    case 1177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1686);
      END_STATE();
    case 1178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1688);
      END_STATE();
    case 1179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(863);
      END_STATE();
    case 1180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(864);
      END_STATE();
    case 1181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      END_STATE();
    case 1182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(866);
      END_STATE();
    case 1183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 1184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      END_STATE();
    case 1185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      END_STATE();
    case 1186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 1187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 1188:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1985);
      END_STATE();
    case 1189:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1988);
      END_STATE();
    case 1190:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1841);
      END_STATE();
    case 1191:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(919);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1392);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1734);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1423);
      END_STATE();
    case 1192:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(941);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1193:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(977);
      END_STATE();
    case 1194:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(724);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(737);
      END_STATE();
    case 1195:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(944);
      END_STATE();
    case 1196:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(949);
      END_STATE();
    case 1197:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(953);
      END_STATE();
    case 1198:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(955);
      END_STATE();
    case 1199:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(964);
      END_STATE();
    case 1200:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(968);
      END_STATE();
    case 1201:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(971);
      END_STATE();
    case 1202:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1004);
      END_STATE();
    case 1203:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1355);
      END_STATE();
    case 1204:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1009);
      END_STATE();
    case 1205:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1146);
      END_STATE();
    case 1206:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1255);
      END_STATE();
    case 1207:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1092);
      END_STATE();
    case 1208:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1375);
      END_STATE();
    case 1209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1210);
      END_STATE();
    case 1210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1822);
      END_STATE();
    case 1211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(835);
      END_STATE();
    case 1212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1995);
      END_STATE();
    case 1213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1272);
      END_STATE();
    case 1214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1939);
      END_STATE();
    case 1215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 1216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1071);
      END_STATE();
    case 1217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1984);
      END_STATE();
    case 1218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1979);
      END_STATE();
    case 1219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1877);
      END_STATE();
    case 1220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1824);
      END_STATE();
    case 1221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1354);
      END_STATE();
    case 1222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1823);
      END_STATE();
    case 1223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1389);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1590);
      END_STATE();
    case 1224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1208);
      END_STATE();
    case 1225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1234);
      END_STATE();
    case 1226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1064);
      END_STATE();
    case 1227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1735);
      END_STATE();
    case 1228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 1229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1388);
      END_STATE();
    case 1230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(995);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(966);
      END_STATE();
    case 1231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1170);
      END_STATE();
    case 1232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 1233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1784);
      END_STATE();
    case 1234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1020);
      END_STATE();
    case 1235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1258);
      END_STATE();
    case 1236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1427);
      END_STATE();
    case 1237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(920);
      END_STATE();
    case 1238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1786);
      END_STATE();
    case 1239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 1240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1247);
      END_STATE();
    case 1241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(946);
      END_STATE();
    case 1242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1578);
      END_STATE();
    case 1243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 1244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 1245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 1246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(937);
      END_STATE();
    case 1247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 1248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1746);
      END_STATE();
    case 1249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1130);
      END_STATE();
    case 1250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1142);
      END_STATE();
    case 1251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1132);
      END_STATE();
    case 1252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1150);
      END_STATE();
    case 1253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1431);
      END_STATE();
    case 1254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1433);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(999);
      END_STATE();
    case 1255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1435);
      END_STATE();
    case 1256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1437);
      END_STATE();
    case 1257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(859);
      END_STATE();
    case 1258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1054);
      END_STATE();
    case 1259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1097);
      END_STATE();
    case 1260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1100);
      END_STATE();
    case 1261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1101);
      END_STATE();
    case 1262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1072);
      END_STATE();
    case 1263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1073);
      END_STATE();
    case 1264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1074);
      END_STATE();
    case 1265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1328);
      END_STATE();
    case 1266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(820);
      END_STATE();
    case 1267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1471);
      END_STATE();
    case 1268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1118);
      END_STATE();
    case 1269:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1275);
      END_STATE();
    case 1270:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1421);
      END_STATE();
    case 1271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1479);
      END_STATE();
    case 1272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(751);
      END_STATE();
    case 1273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1563);
      END_STATE();
    case 1274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(922);
      END_STATE();
    case 1275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(740);
      END_STATE();
    case 1276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(742);
      END_STATE();
    case 1277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1570);
      END_STATE();
    case 1278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(780);
      END_STATE();
    case 1279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1574);
      END_STATE();
    case 1280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(765);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1340);
      END_STATE();
    case 1281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(976);
      END_STATE();
    case 1282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 1283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1577);
      END_STATE();
    case 1284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1580);
      END_STATE();
    case 1285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(935);
      END_STATE();
    case 1286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(993);
      END_STATE();
    case 1287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1121);
      END_STATE();
    case 1288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1276);
      END_STATE();
    case 1289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1480);
      END_STATE();
    case 1290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1127);
      END_STATE();
    case 1291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(772);
      END_STATE();
    case 1292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1291);
      END_STATE();
    case 1293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(782);
      END_STATE();
    case 1294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1129);
      END_STATE();
    case 1295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1293);
      END_STATE();
    case 1296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1173);
      END_STATE();
    case 1297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1429);
      END_STATE();
    case 1298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1018);
      END_STATE();
    case 1299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1253);
      END_STATE();
    case 1300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(784);
      END_STATE();
    case 1301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1300);
      END_STATE();
    case 1302:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(785);
      END_STATE();
    case 1303:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1302);
      END_STATE();
    case 1304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1893);
      END_STATE();
    case 1305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1930);
      END_STATE();
    case 1306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2003);
      END_STATE();
    case 1307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1903);
      END_STATE();
    case 1308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1947);
      END_STATE();
    case 1309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1918);
      END_STATE();
    case 1310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1957);
      END_STATE();
    case 1311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1945);
      END_STATE();
    case 1312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1912);
      END_STATE();
    case 1313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1922);
      END_STATE();
    case 1314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1933);
      END_STATE();
    case 1315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1934);
      END_STATE();
    case 1316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1063);
      END_STATE();
    case 1317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1755);
      END_STATE();
    case 1318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1114);
      END_STATE();
    case 1319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 1320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 1321:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1050);
      END_STATE();
    case 1322:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1394);
      END_STATE();
    case 1323:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1331);
      END_STATE();
    case 1324:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1135);
      END_STATE();
    case 1325:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1683);
      END_STATE();
    case 1326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1745);
      END_STATE();
    case 1327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1189);
      END_STATE();
    case 1328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1002);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1513);
      END_STATE();
    case 1329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1059);
      END_STATE();
    case 1330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1056);
      END_STATE();
    case 1331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 1332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1693);
      END_STATE();
    case 1333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1326);
      END_STATE();
    case 1334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(878);
      END_STATE();
    case 1335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1653);
      END_STATE();
    case 1337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 1338:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1238);
      END_STATE();
    case 1339:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 1340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1249);
      END_STATE();
    case 1341:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1656);
      END_STATE();
    case 1342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 1343:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1640);
      END_STATE();
    case 1344:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 1345:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1641);
      END_STATE();
    case 1346:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      END_STATE();
    case 1347:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1567);
      END_STATE();
    case 1348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1568);
      END_STATE();
    case 1349:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1642);
      END_STATE();
    case 1350:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1690);
      END_STATE();
    case 1351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1576);
      END_STATE();
    case 1352:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      END_STATE();
    case 1353:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(938);
      END_STATE();
    case 1354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(994);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1619);
      END_STATE();
    case 1355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1419);
      END_STATE();
    case 1356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 1357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 1358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 1359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1633);
      END_STATE();
    case 1360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1704);
      END_STATE();
    case 1361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1664);
      END_STATE();
    case 1362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 1363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 1364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1044);
      END_STATE();
    case 1365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      END_STATE();
    case 1366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1698);
      END_STATE();
    case 1367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 1368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1700);
      END_STATE();
    case 1369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1445);
      END_STATE();
    case 1370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1093);
      END_STATE();
    case 1371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1099);
      END_STATE();
    case 1372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 1373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 1374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1468);
      END_STATE();
    case 1375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1469);
      END_STATE();
    case 1376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1717);
      END_STATE();
    case 1377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1718);
      END_STATE();
    case 1378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1719);
      END_STATE();
    case 1379:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1720);
      END_STATE();
    case 1380:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1721);
      END_STATE();
    case 1381:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1722);
      END_STATE();
    case 1382:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1723);
      END_STATE();
    case 1383:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1724);
      END_STATE();
    case 1384:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1583);
      END_STATE();
    case 1385:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 1386:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1091);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1266);
      END_STATE();
    case 1387:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1765);
      END_STATE();
    case 1388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1057);
      END_STATE();
    case 1389:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(814);
      END_STATE();
    case 1390:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1269);
      END_STATE();
    case 1391:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 1392:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1659);
      END_STATE();
    case 1393:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 1394:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 1395:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1321);
      END_STATE();
    case 1396:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1559);
      END_STATE();
    case 1397:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1747);
      END_STATE();
    case 1398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1213);
      END_STATE();
    case 1399:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1487);
      END_STATE();
    case 1400:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1304);
      END_STATE();
    case 1401:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1515);
      END_STATE();
    case 1402:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1505);
      END_STATE();
    case 1403:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 1404:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1306);
      END_STATE();
    case 1405:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1359);
      END_STATE();
    case 1406:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 1407:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1309);
      END_STATE();
    case 1408:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1310);
      END_STATE();
    case 1409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1311);
      END_STATE();
    case 1410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1312);
      END_STATE();
    case 1411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1529);
      END_STATE();
    case 1412:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1313);
      END_STATE();
    case 1413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1314);
      END_STATE();
    case 1414:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1315);
      END_STATE();
    case 1415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 1416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1512);
      END_STATE();
    case 1417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1667);
      END_STATE();
    case 1418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1591);
      END_STATE();
    case 1419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1766);
      END_STATE();
    case 1420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1757);
      END_STATE();
    case 1421:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 1422:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1743);
      END_STATE();
    case 1423:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1196);
      END_STATE();
    case 1424:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 1425:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1607);
      END_STATE();
    case 1426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1351);
      END_STATE();
    case 1427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(841);
      END_STATE();
    case 1428:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1744);
      END_STATE();
    case 1429:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1670);
      END_STATE();
    case 1430:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1278);
      END_STATE();
    case 1431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 1432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1614);
      END_STATE();
    case 1433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(843);
      END_STATE();
    case 1434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1600);
      END_STATE();
    case 1435:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 1436:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1602);
      END_STATE();
    case 1437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(862);
      END_STATE();
    case 1438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 1439:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1605);
      END_STATE();
    case 1440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1609);
      END_STATE();
    case 1441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1610);
      END_STATE();
    case 1442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1611);
      END_STATE();
    case 1443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1612);
      END_STATE();
    case 1444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1288);
      END_STATE();
    case 1445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 1446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1541);
      END_STATE();
    case 1447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1364);
      END_STATE();
    case 1448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 1449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1542);
      END_STATE();
    case 1450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1358);
      END_STATE();
    case 1451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1764);
      END_STATE();
    case 1452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1625);
      END_STATE();
    case 1453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1292);
      END_STATE();
    case 1454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1545);
      END_STATE();
    case 1455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1547);
      END_STATE();
    case 1456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1626);
      END_STATE();
    case 1457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1295);
      END_STATE();
    case 1458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1549);
      END_STATE();
    case 1459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1550);
      END_STATE();
    case 1460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1628);
      END_STATE();
    case 1461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1301);
      END_STATE();
    case 1462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1551);
      END_STATE();
    case 1463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1552);
      END_STATE();
    case 1464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1629);
      END_STATE();
    case 1465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1303);
      END_STATE();
    case 1466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1553);
      END_STATE();
    case 1467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1632);
      END_STATE();
    case 1468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1775);
      END_STATE();
    case 1469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1776);
      END_STATE();
    case 1470:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1193);
      END_STATE();
    case 1471:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1952);
      END_STATE();
    case 1472:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1889);
      END_STATE();
    case 1473:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(891);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(943);
      END_STATE();
    case 1474:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1082);
      END_STATE();
    case 1475:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1543);
      END_STATE();
    case 1476:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1111);
      END_STATE();
    case 1477:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(951);
      END_STATE();
    case 1478:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(789);
      END_STATE();
    case 1479:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1666);
      END_STATE();
    case 1480:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1669);
      END_STATE();
    case 1481:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(926);
      END_STATE();
    case 1482:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 1483:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(990);
      END_STATE();
    case 1484:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1544);
      END_STATE();
    case 1485:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(783);
      END_STATE();
    case 1486:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1520);
      END_STATE();
    case 1487:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(982);
      END_STATE();
    case 1488:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1525);
      END_STATE();
    case 1489:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1671);
      END_STATE();
    case 1490:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1405);
      END_STATE();
    case 1491:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(788);
      END_STATE();
    case 1492:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1554);
      END_STATE();
    case 1493:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1725);
      END_STATE();
    case 1494:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1396);
      END_STATE();
    case 1495:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1194);
      END_STATE();
    case 1496:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 1497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1904);
      END_STATE();
    case 1498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1896);
      END_STATE();
    case 1499:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1948);
      END_STATE();
    case 1500:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1975);
      END_STATE();
    case 1501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1858);
      END_STATE();
    case 1502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1860);
      END_STATE();
    case 1503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1287);
      END_STATE();
    case 1504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1649);
      END_STATE();
    case 1505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1768);
      END_STATE();
    case 1506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1113);
      END_STATE();
    case 1507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1759);
      END_STATE();
    case 1508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1635);
      END_STATE();
    case 1509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 1510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1484);
      END_STATE();
    case 1511:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 1512:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1190);
      END_STATE();
    case 1513:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1398);
      END_STATE();
    case 1514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 1515:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 1516:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1560);
      END_STATE();
    case 1517:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 1518:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 1519:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 1520:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1420);
      END_STATE();
    case 1521:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 1522:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1597);
      END_STATE();
    case 1523:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 1524:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 1525:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1448);
      END_STATE();
    case 1526:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 1527:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 1528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 1529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 1530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1036);
      END_STATE();
    case 1531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(980);
      END_STATE();
    case 1532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 1533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(936);
      END_STATE();
    case 1534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1023);
      END_STATE();
    case 1535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 1536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1606);
      END_STATE();
    case 1537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1040);
      END_STATE();
    case 1538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1120);
      END_STATE();
    case 1539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1530);
      END_STATE();
    case 1540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1124);
      END_STATE();
    case 1541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1131);
      END_STATE();
    case 1542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1769);
      END_STATE();
    case 1543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1007);
      END_STATE();
    case 1544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1153);
      END_STATE();
    case 1545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 1546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1296);
      END_STATE();
    case 1547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1771);
      END_STATE();
    case 1548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 1549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 1550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1772);
      END_STATE();
    case 1551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1177);
      END_STATE();
    case 1552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1774);
      END_STATE();
    case 1553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1178);
      END_STATE();
    case 1554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 1555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1256);
      END_STATE();
    case 1556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(809);
      END_STATE();
    case 1557:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1942);
      END_STATE();
    case 1558:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 1559:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1932);
      END_STATE();
    case 1560:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1890);
      END_STATE();
    case 1561:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1874);
      END_STATE();
    case 1562:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1924);
      END_STATE();
    case 1563:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1935);
      END_STATE();
    case 1564:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1999);
      END_STATE();
    case 1565:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1955);
      END_STATE();
    case 1566:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1974);
      END_STATE();
    case 1567:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1876);
      END_STATE();
    case 1568:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2001);
      END_STATE();
    case 1569:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1921);
      END_STATE();
    case 1570:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1923);
      END_STATE();
    case 1571:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1894);
      END_STATE();
    case 1572:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1879);
      END_STATE();
    case 1573:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1892);
      END_STATE();
    case 1574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1885);
      END_STATE();
    case 1575:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1944);
      END_STATE();
    case 1576:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1950);
      END_STATE();
    case 1577:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1956);
      END_STATE();
    case 1578:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 1579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1880);
      END_STATE();
    case 1580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1920);
      END_STATE();
    case 1581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1767);
      END_STATE();
    case 1582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1229);
      END_STATE();
    case 1583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1634);
      END_STATE();
    case 1584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1739);
      END_STATE();
    case 1585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 1586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1147);
      END_STATE();
    case 1587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1089);
      END_STATE();
    case 1588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1042);
      END_STATE();
    case 1589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1581);
      END_STATE();
    case 1590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(725);
      END_STATE();
    case 1591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1676);
      END_STATE();
    case 1592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1077);
      END_STATE();
    case 1593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1490);
      END_STATE();
    case 1594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1588);
      END_STATE();
    case 1595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(858);
      END_STATE();
    case 1596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1681);
      END_STATE();
    case 1597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1163);
      END_STATE();
    case 1598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1136);
      END_STATE();
    case 1599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1561);
      END_STATE();
    case 1600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1660);
      END_STATE();
    case 1601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      END_STATE();
    case 1602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1687);
      END_STATE();
    case 1603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1565);
      END_STATE();
    case 1604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(952);
      END_STATE();
    case 1605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1665);
      END_STATE();
    case 1606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      END_STATE();
    case 1607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(924);
      END_STATE();
    case 1608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1644);
      END_STATE();
    case 1609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1682);
      END_STATE();
    case 1610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1646);
      END_STATE();
    case 1611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1647);
      END_STATE();
    case 1612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1648);
      END_STATE();
    case 1613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1117);
      END_STATE();
    case 1614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1658);
      END_STATE();
    case 1616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1403);
      END_STATE();
    case 1617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1674);
      END_STATE();
    case 1618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(991);
      END_STATE();
    case 1619:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(992);
      END_STATE();
    case 1620:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(850);
      END_STATE();
    case 1621:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1770);
      END_STATE();
    case 1622:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1151);
      END_STATE();
    case 1623:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1622);
      END_STATE();
    case 1624:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1621);
      END_STATE();
    case 1625:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1691);
      END_STATE();
    case 1626:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1692);
      END_STATE();
    case 1627:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1699);
      END_STATE();
    case 1628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1694);
      END_STATE();
    case 1629:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1697);
      END_STATE();
    case 1630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1051);
      END_STATE();
    case 1631:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 1632:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1716);
      END_STATE();
    case 1633:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1035);
      END_STATE();
    case 1634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1818);
      END_STATE();
    case 1635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1949);
      END_STATE();
    case 1636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1254);
      END_STATE();
    case 1637:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1123);
      END_STATE();
    case 1638:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1960);
      END_STATE();
    case 1640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1913);
      END_STATE();
    case 1641:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1927);
      END_STATE();
    case 1642:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1865);
      END_STATE();
    case 1643:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1895);
      END_STATE();
    case 1644:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1899);
      END_STATE();
    case 1645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1915);
      END_STATE();
    case 1646:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1943);
      END_STATE();
    case 1647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1817);
      END_STATE();
    case 1648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1856);
      END_STATE();
    case 1649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 1650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 1651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(826);
      END_STATE();
    case 1652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1798);
      END_STATE();
    case 1653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1796);
      END_STATE();
    case 1654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1076);
      END_STATE();
    case 1655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 1656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 1657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      END_STATE();
    case 1658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1406);
      END_STATE();
    case 1659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 1660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1595);
      END_STATE();
    case 1661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1787);
      END_STATE();
    case 1662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 1663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1655);
      END_STATE();
    case 1664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1134);
      END_STATE();
    case 1665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1630);
      END_STATE();
    case 1666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1571);
      END_STATE();
    case 1667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1572);
      END_STATE();
    case 1668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(997);
      END_STATE();
    case 1669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1575);
      END_STATE();
    case 1670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(981);
      END_STATE();
    case 1671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(996);
      END_STATE();
    case 1672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(959);
      END_STATE();
    case 1673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(970);
      END_STATE();
    case 1674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(984);
      END_STATE();
    case 1675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(986);
      END_STATE();
    case 1676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      END_STATE();
    case 1677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1085);
      END_STATE();
    case 1678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1742);
      END_STATE();
    case 1679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1079);
      END_STATE();
    case 1680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1395);
      END_STATE();
    case 1681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1663);
      END_STATE();
    case 1682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1357);
      END_STATE();
    case 1683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1122);
      END_STATE();
    case 1684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1084);
      END_STATE();
    case 1685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      END_STATE();
    case 1686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1088);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1090);
      END_STATE();
    case 1689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1672);
      END_STATE();
    case 1690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1282);
      END_STATE();
    case 1691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 1692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1200);
      END_STATE();
    case 1693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1008);
      END_STATE();
    case 1694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1201);
      END_STATE();
    case 1695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(974);
      END_STATE();
    case 1696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1675);
      END_STATE();
    case 1697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(979);
      END_STATE();
    case 1699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(983);
      END_STATE();
    case 1700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(987);
      END_STATE();
    case 1701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1799);
      END_STATE();
    case 1702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1773);
      END_STATE();
    case 1703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1157);
      END_STATE();
    case 1704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1179);
      END_STATE();
    case 1705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1174);
      END_STATE();
    case 1707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1160);
      END_STATE();
    case 1708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1161);
      END_STATE();
    case 1709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1164);
      END_STATE();
    case 1710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1168);
      END_STATE();
    case 1714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 1715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 1716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1631);
      END_STATE();
    case 1717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 1718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1181);
      END_STATE();
    case 1719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 1720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1183);
      END_STATE();
    case 1721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1184);
      END_STATE();
    case 1722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 1723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 1724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 1726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 1727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 1728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      END_STATE();
    case 1729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1106);
      END_STATE();
    case 1730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 1731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 1732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1109);
      END_STATE();
    case 1733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 1734:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1005);
      END_STATE();
    case 1735:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(897);
      END_STATE();
    case 1736:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1650);
      END_STATE();
    case 1737:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1267);
      END_STATE();
    case 1738:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1540);
      END_STATE();
    case 1739:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(732);
      END_STATE();
    case 1740:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1363);
      END_STATE();
    case 1741:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1677);
      END_STATE();
    case 1742:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1534);
      END_STATE();
    case 1743:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1643);
      END_STATE();
    case 1744:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1645);
      END_STATE();
    case 1745:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1239);
      END_STATE();
    case 1746:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1533);
      END_STATE();
    case 1747:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1350);
      END_STATE();
    case 1748:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1617);
      END_STATE();
    case 1749:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1726);
      END_STATE();
    case 1750:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1728);
      END_STATE();
    case 1751:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1729);
      END_STATE();
    case 1752:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1731);
      END_STATE();
    case 1753:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1732);
      END_STATE();
    case 1754:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1733);
      END_STATE();
    case 1755:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1976);
      END_STATE();
    case 1756:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1143);
      END_STATE();
    case 1757:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1125);
      END_STATE();
    case 1758:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(965);
      END_STATE();
    case 1759:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(754);
      END_STATE();
    case 1760:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(925);
      END_STATE();
    case 1761:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(929);
      END_STATE();
    case 1762:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1034);
      END_STATE();
    case 1763:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1001);
      END_STATE();
    case 1764:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1171);
      END_STATE();
    case 1765:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1370);
      END_STATE();
    case 1766:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1305);
      END_STATE();
    case 1767:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1401);
      END_STATE();
    case 1768:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(752);
      END_STATE();
    case 1769:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(753);
      END_STATE();
    case 1770:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1411);
      END_STATE();
    case 1771:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(755);
      END_STATE();
    case 1772:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(759);
      END_STATE();
    case 1773:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1416);
      END_STATE();
    case 1774:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(761);
      END_STATE();
    case 1775:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1371);
      END_STATE();
    case 1776:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1372);
      END_STATE();
    case 1777:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1978);
      END_STATE();
    case 1778:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1782);
      END_STATE();
    case 1779:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(731);
      END_STATE();
    case 1780:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(901);
      END_STATE();
    case 1781:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(978);
      END_STATE();
    case 1782:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(855);
      END_STATE();
    case 1783:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1971);
      END_STATE();
    case 1784:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1868);
      END_STATE();
    case 1785:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2002);
      END_STATE();
    case 1786:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1926);
      END_STATE();
    case 1787:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1992);
      END_STATE();
    case 1788:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1231);
      END_STATE();
    case 1789:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(851);
      END_STATE();
    case 1790:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(716);
      END_STATE();
    case 1791:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(741);
      END_STATE();
    case 1792:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(902);
      END_STATE();
    case 1793:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1613);
      END_STATE();
    case 1794:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1564);
      END_STATE();
    case 1795:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1566);
      END_STATE();
    case 1796:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1481);
      END_STATE();
    case 1797:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1615);
      END_STATE();
    case 1798:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1197);
      END_STATE();
    case 1799:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1483);
      END_STATE();
    case 1800:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1701);
      END_STATE();
    case 1801:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1096);
      END_STATE();
    case 1802:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1492);
      END_STATE();
    case 1803:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(927);
      END_STATE();
    case 1804:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(933);
      END_STATE();
    case 1805:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2004);
      END_STATE();
    case 1806:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2004);
      END_STATE();
    case 1807:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1987);
      END_STATE();
    case 1808:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1986);
      END_STATE();
    case 1809:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2007);
      END_STATE();
    case 1810:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1807);
      END_STATE();
    case 1811:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1808);
      END_STATE();
    case 1812:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 1813:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1814:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1855);
      END_STATE();
    case 1815:
      if (eof) ADVANCE(1816);
      if (lookahead == '\n') ADVANCE(2059);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1835);
      if (lookahead == '#') ADVANCE(2055);
      if (lookahead == '*') ADVANCE(1861);
      if (lookahead == '+') ADVANCE(1886);
      if (lookahead == ',') ADVANCE(1854);
      if (lookahead == '-') ADVANCE(1887);
      if (lookahead == '0') ADVANCE(2047);
      if (lookahead == ':') ADVANCE(1884);
      if (lookahead == '=') ADVANCE(1983);
      if (lookahead == '@') ADVANCE(1953);
      if (lookahead == 'A') ADVANCE(874);
      if (lookahead == 'C') ADVANCE(711);
      if (lookahead == 'D') ADVANCE(247);
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == 'F') ADVANCE(238);
      if (lookahead == 'H') ADVANCE(1384);
      if (lookahead == 'I') ADVANCE(264);
      if (lookahead == 'L') ADVANCE(1385);
      if (lookahead == 'M') ADVANCE(712);
      if (lookahead == 'N') ADVANCE(1386);
      if (lookahead == 'Q') ADVANCE(288);
      if (lookahead == 'R') ADVANCE(916);
      if (lookahead == 'S') ADVANCE(917);
      if (lookahead == 'T') ADVANCE(713);
      if (lookahead == 'U') ADVANCE(1473);
      if (lookahead == 'V') ADVANCE(249);
      if (lookahead == '^') ADVANCE(1891);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(1112);
      if (lookahead == 'h') ADVANCE(509);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(371);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead == 'v') ADVANCE(939);
      if (lookahead == 'w') ADVANCE(391);
      if (lookahead == '}') ADVANCE(2044);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(714);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1223);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(813);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(726);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(715);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2048);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(738);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1000);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym_match_declaration_token1);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__all_token1);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__match_canonical_token1);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__match_final_token1);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__match_exec_token1);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'S') ADVANCE(256);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(2046);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2043);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2020);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2048);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2018);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2043);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2020);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2018);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token1);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == ':') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'S') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'h') ADVANCE(1844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 's') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'y') ADVANCE(1870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1855);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym__match_originalhost_token1);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym__match_tagged_token1);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1374);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__match_localuser_token1);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1855);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1872);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1853);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym__dynamic_forward_token1);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1905);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1175);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym__include_token1);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym__proxy_jump_arg_token1);
      if (lookahead == 'S') ADVANCE(1954);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '{') ADVANCE(2043);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2021);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2018);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(2019);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (sym_token_character_set_1(lookahead)) ADVANCE(2022);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_subsystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1986);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__syslog_facility_token1);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(940);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2005);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_facility);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(507);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(2043);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'a') ADVANCE(2040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'b') ADVANCE(2035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'f') ADVANCE(2025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'l') ADVANCE(2037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'm') ADVANCE(1981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'n') ADVANCE(2028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'o') ADVANCE(2033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'y') ADVANCE(2036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2042);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2048);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2055);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2056);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(2056);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2057);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2058);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1815},
  [2] = {.lex_state = 1815},
  [3] = {.lex_state = 1815},
  [4] = {.lex_state = 1815},
  [5] = {.lex_state = 1815},
  [6] = {.lex_state = 1815},
  [7] = {.lex_state = 1815},
  [8] = {.lex_state = 1815},
  [9] = {.lex_state = 1815},
  [10] = {.lex_state = 1815},
  [11] = {.lex_state = 1815},
  [12] = {.lex_state = 1815},
  [13] = {.lex_state = 1815},
  [14] = {.lex_state = 1815},
  [15] = {.lex_state = 1815},
  [16] = {.lex_state = 1815},
  [17] = {.lex_state = 1815},
  [18] = {.lex_state = 1815},
  [19] = {.lex_state = 1815},
  [20] = {.lex_state = 1815},
  [21] = {.lex_state = 1815},
  [22] = {.lex_state = 1815},
  [23] = {.lex_state = 1815},
  [24] = {.lex_state = 1815},
  [25] = {.lex_state = 1815},
  [26] = {.lex_state = 1815},
  [27] = {.lex_state = 1815},
  [28] = {.lex_state = 1815},
  [29] = {.lex_state = 1815},
  [30] = {.lex_state = 1815},
  [31] = {.lex_state = 1815},
  [32] = {.lex_state = 1815},
  [33] = {.lex_state = 1815},
  [34] = {.lex_state = 1815},
  [35] = {.lex_state = 1815},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 42},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 47},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 32},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 48},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 50},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 40},
  [122] = {.lex_state = 50},
  [123] = {.lex_state = 40},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 45},
  [127] = {.lex_state = 40},
  [128] = {.lex_state = 40},
  [129] = {.lex_state = 40},
  [130] = {.lex_state = 40},
  [131] = {.lex_state = 40},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 40},
  [136] = {.lex_state = 40},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 40},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 40},
  [141] = {.lex_state = 40},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 37},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 51},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 15},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 51},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 1815},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 51},
  [161] = {.lex_state = 33},
  [162] = {.lex_state = 50},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 41},
  [167] = {.lex_state = 375},
  [168] = {.lex_state = 20},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 34},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 41},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 1815},
  [179] = {.lex_state = 1815},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 1815},
  [182] = {.lex_state = 43},
  [183] = {.lex_state = 1815},
  [184] = {.lex_state = 1815},
  [185] = {.lex_state = 1815},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 1815},
  [188] = {.lex_state = 1815},
  [189] = {.lex_state = 1815},
  [190] = {.lex_state = 1815},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 1815},
  [193] = {.lex_state = 1815},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 1815},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 30},
  [198] = {.lex_state = 43},
  [199] = {.lex_state = 1815},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 1815},
  [202] = {.lex_state = 1815},
  [203] = {.lex_state = 30},
  [204] = {.lex_state = 1815},
  [205] = {.lex_state = 1815},
  [206] = {.lex_state = 1815},
  [207] = {.lex_state = 1815},
  [208] = {.lex_state = 1815},
  [209] = {.lex_state = 1815},
  [210] = {.lex_state = 1815},
  [211] = {.lex_state = 1815},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 43},
  [214] = {.lex_state = 1815},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 34},
  [220] = {.lex_state = 1815},
  [221] = {.lex_state = 1815},
  [222] = {.lex_state = 1815},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 1815},
  [225] = {.lex_state = 1815},
  [226] = {.lex_state = 1815},
  [227] = {.lex_state = 1815},
  [228] = {.lex_state = 1815},
  [229] = {.lex_state = 1815},
  [230] = {.lex_state = 1815},
  [231] = {.lex_state = 43},
  [232] = {.lex_state = 1815},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 1815},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 1815},
  [237] = {.lex_state = 43},
  [238] = {.lex_state = 1815},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 1815},
  [241] = {.lex_state = 1815},
  [242] = {.lex_state = 1815},
  [243] = {.lex_state = 1815},
  [244] = {.lex_state = 1815},
  [245] = {.lex_state = 41},
  [246] = {.lex_state = 1815},
  [247] = {.lex_state = 1815},
  [248] = {.lex_state = 49},
  [249] = {.lex_state = 1815},
  [250] = {.lex_state = 41},
  [251] = {.lex_state = 43},
  [252] = {.lex_state = 1815},
  [253] = {.lex_state = 1815},
  [254] = {.lex_state = 1815},
  [255] = {.lex_state = 41},
  [256] = {.lex_state = 1815},
  [257] = {.lex_state = 1815},
  [258] = {.lex_state = 43},
  [259] = {.lex_state = 1815},
  [260] = {.lex_state = 280},
  [261] = {.lex_state = 1815},
  [262] = {.lex_state = 1815},
  [263] = {.lex_state = 1815},
  [264] = {.lex_state = 1815},
  [265] = {.lex_state = 15},
  [266] = {.lex_state = 1815},
  [267] = {.lex_state = 1815},
  [268] = {.lex_state = 1815},
  [269] = {.lex_state = 1815},
  [270] = {.lex_state = 41},
  [271] = {.lex_state = 43},
  [272] = {.lex_state = 51},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 30},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 1815},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 1815},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 1815},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 3},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 1815},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 3},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 3},
  [309] = {.lex_state = 1815},
  [310] = {.lex_state = 3},
  [311] = {.lex_state = 3},
  [312] = {.lex_state = 232},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 3},
  [315] = {.lex_state = 232},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 1815},
  [319] = {.lex_state = 3},
  [320] = {.lex_state = 18},
  [321] = {.lex_state = 1815},
  [322] = {.lex_state = 1815},
  [323] = {.lex_state = 1815},
  [324] = {.lex_state = 1815},
  [325] = {.lex_state = 3},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 1815},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 1815},
  [331] = {.lex_state = 1815},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 3},
  [334] = {.lex_state = 3},
  [335] = {.lex_state = 1815},
  [336] = {.lex_state = 1815},
  [337] = {.lex_state = 1815},
  [338] = {.lex_state = 1815},
  [339] = {.lex_state = 3},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 3},
  [343] = {.lex_state = 3},
  [344] = {.lex_state = 3},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 1815},
  [347] = {.lex_state = 1815},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 3},
  [350] = {.lex_state = 3},
  [351] = {.lex_state = 3},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 1815},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 3},
  [356] = {.lex_state = 3},
  [357] = {.lex_state = 3},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 1815},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 3},
  [362] = {.lex_state = 3},
  [363] = {.lex_state = 3},
  [364] = {.lex_state = 1815},
  [365] = {.lex_state = 3},
  [366] = {.lex_state = 1815},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 3},
  [369] = {.lex_state = 1815},
  [370] = {.lex_state = 1815},
  [371] = {.lex_state = 1815},
  [372] = {.lex_state = 3},
  [373] = {.lex_state = 1815},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 1815},
  [378] = {.lex_state = 3},
  [379] = {.lex_state = 3},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 3},
  [382] = {.lex_state = 3},
  [383] = {.lex_state = 34},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 3},
  [388] = {.lex_state = 3},
  [389] = {.lex_state = 3},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 3},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 1815},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 3},
  [398] = {.lex_state = 3},
  [399] = {.lex_state = 3},
  [400] = {.lex_state = 3},
  [401] = {.lex_state = 3},
  [402] = {.lex_state = 3},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 1815},
  [405] = {.lex_state = 3},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 1815},
  [408] = {.lex_state = 1815},
  [409] = {.lex_state = 1815},
  [410] = {.lex_state = 3},
  [411] = {.lex_state = 1815},
  [412] = {.lex_state = 3},
  [413] = {.lex_state = 1815},
  [414] = {.lex_state = 1815},
  [415] = {.lex_state = 1815},
  [416] = {.lex_state = 3},
  [417] = {.lex_state = 1815},
  [418] = {.lex_state = 3},
  [419] = {.lex_state = 3},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 1815},
  [422] = {.lex_state = 1815},
  [423] = {.lex_state = 3},
  [424] = {.lex_state = 1815},
  [425] = {.lex_state = 3},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 3},
  [428] = {.lex_state = 1815},
  [429] = {.lex_state = 3},
  [430] = {.lex_state = 1815},
  [431] = {.lex_state = 1815},
  [432] = {.lex_state = 3},
  [433] = {.lex_state = 3},
  [434] = {.lex_state = 3},
  [435] = {.lex_state = 3},
  [436] = {.lex_state = 1815},
  [437] = {.lex_state = 17},
  [438] = {.lex_state = 3},
  [439] = {.lex_state = 1815},
  [440] = {.lex_state = 1815},
  [441] = {.lex_state = 1815},
  [442] = {.lex_state = 3},
  [443] = {.lex_state = 1815},
  [444] = {.lex_state = 3},
  [445] = {.lex_state = 3},
  [446] = {.lex_state = 3},
  [447] = {.lex_state = 3},
  [448] = {.lex_state = 1815},
  [449] = {.lex_state = 1815},
  [450] = {.lex_state = 3},
  [451] = {.lex_state = 1815},
  [452] = {.lex_state = 3},
  [453] = {.lex_state = 3},
  [454] = {.lex_state = 3},
  [455] = {.lex_state = 1815},
  [456] = {.lex_state = 1815},
  [457] = {.lex_state = 1815},
  [458] = {.lex_state = 16},
  [459] = {.lex_state = 3},
  [460] = {.lex_state = 44},
  [461] = {.lex_state = 1815},
  [462] = {.lex_state = 1815},
  [463] = {.lex_state = 3},
  [464] = {.lex_state = 1815},
  [465] = {.lex_state = 3},
  [466] = {.lex_state = 1815},
  [467] = {.lex_state = 3},
  [468] = {.lex_state = 3},
  [469] = {.lex_state = 1815},
  [470] = {.lex_state = 1815},
  [471] = {.lex_state = 1815},
  [472] = {.lex_state = 1815},
  [473] = {.lex_state = 1815},
  [474] = {.lex_state = 1815},
  [475] = {.lex_state = 1815},
  [476] = {.lex_state = 3},
  [477] = {.lex_state = 1815},
  [478] = {.lex_state = 1815},
  [479] = {.lex_state = 1815},
  [480] = {.lex_state = 3},
  [481] = {.lex_state = 1815},
  [482] = {.lex_state = 1815},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 1815},
  [485] = {.lex_state = 1815},
  [486] = {.lex_state = 1815},
  [487] = {.lex_state = 1815},
  [488] = {.lex_state = 1815},
  [489] = {.lex_state = 1815},
  [490] = {.lex_state = 1815},
  [491] = {.lex_state = 1815},
  [492] = {.lex_state = 36},
  [493] = {.lex_state = 44},
  [494] = {.lex_state = 1815},
  [495] = {.lex_state = 1815},
  [496] = {.lex_state = 1815},
  [497] = {.lex_state = 1815},
  [498] = {.lex_state = 1815},
  [499] = {.lex_state = 1815},
  [500] = {.lex_state = 1815},
  [501] = {.lex_state = 1815},
  [502] = {.lex_state = 1815},
  [503] = {.lex_state = 44},
  [504] = {.lex_state = 1815},
  [505] = {.lex_state = 1815},
  [506] = {.lex_state = 1815},
  [507] = {.lex_state = 1815},
  [508] = {.lex_state = 1815},
  [509] = {.lex_state = 1815},
  [510] = {.lex_state = 1815},
  [511] = {.lex_state = 1815},
  [512] = {.lex_state = 1815},
  [513] = {.lex_state = 1815},
  [514] = {.lex_state = 1815},
  [515] = {.lex_state = 1815},
  [516] = {.lex_state = 1815},
  [517] = {.lex_state = 1815},
  [518] = {.lex_state = 1815},
  [519] = {.lex_state = 1815},
  [520] = {.lex_state = 1815},
  [521] = {.lex_state = 1815},
  [522] = {.lex_state = 1815},
  [523] = {.lex_state = 1815},
  [524] = {.lex_state = 1815},
  [525] = {.lex_state = 1815},
  [526] = {.lex_state = 1815},
  [527] = {.lex_state = 1815},
  [528] = {.lex_state = 1815},
  [529] = {.lex_state = 1815},
  [530] = {.lex_state = 1815},
  [531] = {.lex_state = 1815},
  [532] = {.lex_state = 1815},
  [533] = {.lex_state = 1815},
  [534] = {.lex_state = 1815},
  [535] = {.lex_state = 1815},
  [536] = {.lex_state = 1815},
  [537] = {.lex_state = 1815},
  [538] = {.lex_state = 1815},
  [539] = {.lex_state = 1815},
  [540] = {.lex_state = 1815},
  [541] = {.lex_state = 1815},
  [542] = {.lex_state = 1815},
  [543] = {.lex_state = 1815},
  [544] = {.lex_state = 1815},
  [545] = {.lex_state = 1815},
  [546] = {.lex_state = 1815},
  [547] = {.lex_state = 1815},
  [548] = {.lex_state = 1815},
  [549] = {.lex_state = 1815},
  [550] = {.lex_state = 1815},
  [551] = {.lex_state = 1815},
  [552] = {.lex_state = 1815},
  [553] = {.lex_state = 1815},
  [554] = {.lex_state = 1815},
  [555] = {.lex_state = 1815},
  [556] = {.lex_state = 1815},
  [557] = {.lex_state = 1815},
  [558] = {.lex_state = 1815},
  [559] = {.lex_state = 1815},
  [560] = {.lex_state = 1815},
  [561] = {.lex_state = 1815},
  [562] = {.lex_state = 1815},
  [563] = {.lex_state = 1815},
  [564] = {.lex_state = 1815},
  [565] = {.lex_state = 1815},
  [566] = {.lex_state = 1815},
  [567] = {.lex_state = 1815},
  [568] = {.lex_state = 1815},
  [569] = {.lex_state = 1815},
  [570] = {.lex_state = 1815},
  [571] = {.lex_state = 1815},
  [572] = {.lex_state = 1815},
  [573] = {.lex_state = 1815},
  [574] = {.lex_state = 1815},
  [575] = {.lex_state = 1815},
  [576] = {.lex_state = 1812},
  [577] = {.lex_state = 1815},
  [578] = {.lex_state = 1815},
  [579] = {.lex_state = 1815},
  [580] = {.lex_state = 1815},
  [581] = {.lex_state = 1815},
  [582] = {.lex_state = 1815},
  [583] = {.lex_state = 1815},
  [584] = {.lex_state = 1815},
  [585] = {.lex_state = 1815},
  [586] = {.lex_state = 1815},
  [587] = {.lex_state = 1815},
  [588] = {.lex_state = 1815},
  [589] = {.lex_state = 1815},
  [590] = {.lex_state = 1815},
  [591] = {.lex_state = 1815},
  [592] = {.lex_state = 1815},
  [593] = {.lex_state = 1815},
  [594] = {.lex_state = 1815},
  [595] = {.lex_state = 1815},
  [596] = {.lex_state = 1815},
  [597] = {.lex_state = 1815},
  [598] = {.lex_state = 1815},
  [599] = {.lex_state = 1815},
  [600] = {.lex_state = 1815},
  [601] = {.lex_state = 1815},
  [602] = {.lex_state = 1815},
  [603] = {.lex_state = 1815},
  [604] = {.lex_state = 232},
  [605] = {.lex_state = 1815},
  [606] = {.lex_state = 1815},
  [607] = {.lex_state = 1815},
  [608] = {.lex_state = 1815},
  [609] = {.lex_state = 1815},
  [610] = {.lex_state = 1815},
  [611] = {.lex_state = 1815},
  [612] = {.lex_state = 1815},
  [613] = {.lex_state = 1815},
  [614] = {.lex_state = 1815},
  [615] = {.lex_state = 1815},
  [616] = {.lex_state = 1815},
  [617] = {.lex_state = 1815},
  [618] = {.lex_state = 1815},
  [619] = {.lex_state = 1815},
  [620] = {.lex_state = 1815},
  [621] = {.lex_state = 1815},
  [622] = {.lex_state = 1815},
  [623] = {.lex_state = 16},
  [624] = {.lex_state = 1815},
  [625] = {.lex_state = 1815},
  [626] = {.lex_state = 1815},
  [627] = {.lex_state = 1815},
  [628] = {.lex_state = 1815},
  [629] = {.lex_state = 1815},
  [630] = {.lex_state = 1815},
  [631] = {.lex_state = 1815},
  [632] = {.lex_state = 1815},
  [633] = {.lex_state = 1815},
  [634] = {.lex_state = 1815},
  [635] = {.lex_state = 1815},
  [636] = {.lex_state = 1815},
  [637] = {.lex_state = 1815},
  [638] = {.lex_state = 1815},
  [639] = {.lex_state = 1815},
  [640] = {.lex_state = 1815},
  [641] = {.lex_state = 1815},
  [642] = {.lex_state = 1815},
  [643] = {.lex_state = 1815},
  [644] = {.lex_state = 1815},
  [645] = {.lex_state = 1815},
  [646] = {.lex_state = 1815},
  [647] = {.lex_state = 1815},
  [648] = {.lex_state = 1815},
  [649] = {.lex_state = 1815},
  [650] = {.lex_state = 1815},
  [651] = {.lex_state = 1815},
  [652] = {.lex_state = 1815},
  [653] = {.lex_state = 1815},
  [654] = {.lex_state = 1815},
  [655] = {.lex_state = 16},
  [656] = {.lex_state = 1815},
  [657] = {.lex_state = 1815},
  [658] = {.lex_state = 1815},
  [659] = {.lex_state = 1815},
  [660] = {.lex_state = 44},
  [661] = {.lex_state = 1815},
  [662] = {.lex_state = 1815},
  [663] = {.lex_state = 1815},
  [664] = {.lex_state = 1815},
  [665] = {.lex_state = 1815},
  [666] = {.lex_state = 1815},
  [667] = {.lex_state = 1815},
  [668] = {.lex_state = 1815},
  [669] = {.lex_state = 1815},
  [670] = {.lex_state = 1815},
  [671] = {.lex_state = 1815},
  [672] = {.lex_state = 52},
  [673] = {.lex_state = 1815},
  [674] = {.lex_state = 1815},
  [675] = {.lex_state = 1815},
  [676] = {.lex_state = 1815},
  [677] = {.lex_state = 1815},
  [678] = {.lex_state = 1815},
  [679] = {.lex_state = 1815},
  [680] = {.lex_state = 1815},
  [681] = {.lex_state = 1815},
  [682] = {.lex_state = 1815},
  [683] = {.lex_state = 1815},
  [684] = {.lex_state = 1815},
  [685] = {.lex_state = 1815},
  [686] = {.lex_state = 1815},
  [687] = {.lex_state = 1815},
  [688] = {.lex_state = 1815},
  [689] = {.lex_state = 1815},
  [690] = {.lex_state = 1815},
  [691] = {.lex_state = 1815},
  [692] = {.lex_state = 1815},
  [693] = {.lex_state = 1815},
  [694] = {.lex_state = 1815},
  [695] = {.lex_state = 1815},
  [696] = {.lex_state = 1815},
  [697] = {.lex_state = 1815},
  [698] = {.lex_state = 1815},
  [699] = {.lex_state = 1815},
  [700] = {.lex_state = 1815},
  [701] = {.lex_state = 1815},
  [702] = {.lex_state = 1815},
  [703] = {.lex_state = 1815},
  [704] = {.lex_state = 1815},
  [705] = {.lex_state = 1815},
  [706] = {.lex_state = 1815},
  [707] = {.lex_state = 1815},
  [708] = {.lex_state = 1815},
  [709] = {.lex_state = 1815},
  [710] = {.lex_state = 1815},
  [711] = {.lex_state = 1815},
  [712] = {.lex_state = 1815},
  [713] = {.lex_state = 1815},
  [714] = {.lex_state = 1815},
  [715] = {.lex_state = 1815},
  [716] = {.lex_state = 1815},
  [717] = {.lex_state = 1815},
  [718] = {.lex_state = 22},
  [719] = {.lex_state = 292},
  [720] = {.lex_state = 1815},
  [721] = {.lex_state = 1815},
  [722] = {.lex_state = 1815},
  [723] = {.lex_state = 1815},
  [724] = {.lex_state = 1815},
  [725] = {.lex_state = 1815},
  [726] = {.lex_state = 1815},
  [727] = {.lex_state = 1815},
  [728] = {.lex_state = 1815},
  [729] = {.lex_state = 1815},
  [730] = {.lex_state = 1815},
  [731] = {.lex_state = 1815},
  [732] = {.lex_state = 1815},
  [733] = {.lex_state = 1815},
  [734] = {.lex_state = 1815},
  [735] = {.lex_state = 1815},
  [736] = {.lex_state = 1815},
  [737] = {.lex_state = 1815},
  [738] = {.lex_state = 1815},
  [739] = {.lex_state = 1815},
  [740] = {.lex_state = 1815},
  [741] = {.lex_state = 1815},
  [742] = {.lex_state = 1815},
  [743] = {.lex_state = 1815},
  [744] = {.lex_state = 1815},
  [745] = {.lex_state = 1815},
  [746] = {.lex_state = 1815},
  [747] = {.lex_state = 1815},
  [748] = {.lex_state = 1815},
  [749] = {.lex_state = 1815},
  [750] = {.lex_state = 1815},
  [751] = {.lex_state = 1815},
  [752] = {.lex_state = 1815},
  [753] = {.lex_state = 1815},
  [754] = {.lex_state = 1815},
  [755] = {.lex_state = 1815},
  [756] = {.lex_state = 1815},
  [757] = {.lex_state = 1815},
  [758] = {.lex_state = 1815},
  [759] = {.lex_state = 1815},
  [760] = {.lex_state = 1815},
  [761] = {.lex_state = 1815},
  [762] = {.lex_state = 16},
  [763] = {.lex_state = 1815},
  [764] = {.lex_state = 1815},
  [765] = {.lex_state = 1815},
  [766] = {.lex_state = 1815},
  [767] = {.lex_state = 1815},
  [768] = {.lex_state = 1815},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 1815},
  [771] = {.lex_state = 1812},
  [772] = {.lex_state = 16},
  [773] = {.lex_state = 1813},
  [774] = {.lex_state = 1814},
  [775] = {.lex_state = 1815},
  [776] = {.lex_state = 1815},
  [777] = {.lex_state = 1815},
  [778] = {.lex_state = 1812},
  [779] = {.lex_state = 1815},
  [780] = {.lex_state = 1815},
  [781] = {.lex_state = 1815},
  [782] = {.lex_state = 1815},
  [783] = {.lex_state = 1815},
  [784] = {.lex_state = 16},
  [785] = {.lex_state = 1815},
  [786] = {.lex_state = 1815},
  [787] = {.lex_state = 1815},
  [788] = {.lex_state = 1815},
  [789] = {.lex_state = 1815},
  [790] = {.lex_state = 16},
  [791] = {.lex_state = 1815},
  [792] = {.lex_state = 16},
  [793] = {.lex_state = 16},
  [794] = {.lex_state = 1814},
  [795] = {.lex_state = 16},
  [796] = {.lex_state = 1813},
  [797] = {.lex_state = 1815},
  [798] = {.lex_state = 1815},
  [799] = {.lex_state = 17},
  [800] = {.lex_state = 437},
  [801] = {.lex_state = 1815},
  [802] = {.lex_state = 1815},
  [803] = {.lex_state = 1815},
  [804] = {.lex_state = 1815},
  [805] = {.lex_state = 1815},
  [806] = {.lex_state = 1815},
  [807] = {.lex_state = 1815},
  [808] = {.lex_state = 1815},
  [809] = {.lex_state = 437},
  [810] = {.lex_state = 16},
  [811] = {.lex_state = 1815},
  [812] = {.lex_state = 3},
  [813] = {.lex_state = 17},
  [814] = {.lex_state = 1815},
  [815] = {.lex_state = 1815},
  [816] = {.lex_state = 1815},
  [817] = {.lex_state = 3},
  [818] = {.lex_state = 1815},
  [819] = {.lex_state = 1815},
  [820] = {.lex_state = 1812},
  [821] = {.lex_state = 1812},
  [822] = {.lex_state = 1812},
  [823] = {.lex_state = 1812},
  [824] = {.lex_state = 1812},
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
    [sym_config] = STATE(769),
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(603),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(195),
    [sym__space] = ACTIONS(197),
    [sym__eol] = ACTIONS(199),
  },
  [2] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(603),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(201),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(195),
    [sym__space] = ACTIONS(197),
    [sym__eol] = ACTIONS(203),
  },
  [3] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(603),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_host_declaration_token1] = ACTIONS(207),
    [aux_sym_match_declaration_token1] = ACTIONS(210),
    [aux_sym__match_user_token1] = ACTIONS(213),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(216),
    [aux_sym__address_family_token1] = ACTIONS(219),
    [aux_sym__batch_mode_token1] = ACTIONS(222),
    [aux_sym__bind_address_token1] = ACTIONS(225),
    [aux_sym__bind_interface_token1] = ACTIONS(228),
    [aux_sym__canonical_domains_token1] = ACTIONS(231),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(234),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(237),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(240),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(243),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(246),
    [aux_sym__certificate_file_token1] = ACTIONS(249),
    [aux_sym__check_host_ip_token1] = ACTIONS(252),
    [aux_sym__ciphers_token1] = ACTIONS(255),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(258),
    [aux_sym__compression_token1] = ACTIONS(261),
    [aux_sym__connection_attempts_token1] = ACTIONS(264),
    [aux_sym__connect_timeout_token1] = ACTIONS(267),
    [aux_sym__control_master_token1] = ACTIONS(270),
    [aux_sym__control_persist_token1] = ACTIONS(273),
    [aux_sym__control_path_token1] = ACTIONS(276),
    [aux_sym__dynamic_forward_token1] = ACTIONS(279),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(282),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(285),
    [aux_sym__escape_char_token1] = ACTIONS(288),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(291),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(294),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(297),
    [aux_sym__forward_agent_token1] = ACTIONS(300),
    [aux_sym__forward_x11_token1] = ACTIONS(303),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(306),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(309),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(312),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(315),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(318),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(321),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(321),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(324),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(327),
    [aux_sym__host_key_alias_token1] = ACTIONS(330),
    [aux_sym__hostname_token1] = ACTIONS(333),
    [aux_sym__identities_only_token1] = ACTIONS(336),
    [aux_sym__identity_agent_token1] = ACTIONS(339),
    [aux_sym__identity_file_token1] = ACTIONS(342),
    [aux_sym__ignore_unknown_token1] = ACTIONS(345),
    [aux_sym__include_token1] = ACTIONS(348),
    [aux_sym__ipqos_token1] = ACTIONS(351),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(354),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(354),
    [aux_sym__kex_algorithms_token1] = ACTIONS(357),
    [aux_sym__known_hosts_command_token1] = ACTIONS(360),
    [aux_sym__local_command_token1] = ACTIONS(363),
    [aux_sym__local_forward_token1] = ACTIONS(366),
    [aux_sym__log_level_token1] = ACTIONS(369),
    [aux_sym__log_verbose_token1] = ACTIONS(372),
    [aux_sym__macs_token1] = ACTIONS(375),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(378),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(381),
    [aux_sym__password_authentication_token1] = ACTIONS(384),
    [aux_sym__permit_local_command_token1] = ACTIONS(387),
    [aux_sym__permit_remote_open_token1] = ACTIONS(390),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(393),
    [aux_sym__port_token1] = ACTIONS(396),
    [aux_sym__preferred_authentications_token1] = ACTIONS(399),
    [aux_sym__proxy_command_token1] = ACTIONS(402),
    [aux_sym__proxy_jump_token1] = ACTIONS(405),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(408),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(411),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(414),
    [aux_sym__rekey_limit_token1] = ACTIONS(417),
    [aux_sym__remote_command_token1] = ACTIONS(420),
    [aux_sym__remote_forward_token1] = ACTIONS(423),
    [aux_sym__request_tty_token1] = ACTIONS(426),
    [aux_sym__required_rsa_size_token1] = ACTIONS(429),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(432),
    [aux_sym__security_key_provider_token1] = ACTIONS(435),
    [aux_sym__send_env_token1] = ACTIONS(438),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(441),
    [aux_sym__server_alive_interval_token1] = ACTIONS(444),
    [aux_sym__session_type_token1] = ACTIONS(447),
    [aux_sym__stdin_null_token1] = ACTIONS(450),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(453),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(456),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(459),
    [aux_sym__syslog_facility_token1] = ACTIONS(462),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(465),
    [aux_sym__tag_token1] = ACTIONS(468),
    [aux_sym__tunnel_token1] = ACTIONS(471),
    [aux_sym__tunnel_device_token1] = ACTIONS(474),
    [aux_sym__update_host_keys_token1] = ACTIONS(477),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(480),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(483),
    [aux_sym__visual_host_key_token1] = ACTIONS(486),
    [aux_sym__xauth_location_token1] = ACTIONS(489),
    [sym_comment] = ACTIONS(492),
    [sym__space] = ACTIONS(495),
    [sym__eol] = ACTIONS(498),
  },
  [4] = {
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(501),
    [aux_sym_host_declaration_token1] = ACTIONS(503),
    [aux_sym_match_declaration_token1] = ACTIONS(501),
    [aux_sym__match_user_token1] = ACTIONS(505),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(508),
    [aux_sym__address_family_token1] = ACTIONS(511),
    [aux_sym__batch_mode_token1] = ACTIONS(514),
    [aux_sym__bind_address_token1] = ACTIONS(517),
    [aux_sym__bind_interface_token1] = ACTIONS(520),
    [aux_sym__canonical_domains_token1] = ACTIONS(523),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(526),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(529),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(532),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(535),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(538),
    [aux_sym__certificate_file_token1] = ACTIONS(541),
    [aux_sym__check_host_ip_token1] = ACTIONS(544),
    [aux_sym__ciphers_token1] = ACTIONS(547),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(550),
    [aux_sym__compression_token1] = ACTIONS(553),
    [aux_sym__connection_attempts_token1] = ACTIONS(556),
    [aux_sym__connect_timeout_token1] = ACTIONS(559),
    [aux_sym__control_master_token1] = ACTIONS(562),
    [aux_sym__control_persist_token1] = ACTIONS(565),
    [aux_sym__control_path_token1] = ACTIONS(568),
    [aux_sym__dynamic_forward_token1] = ACTIONS(571),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(574),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(577),
    [aux_sym__escape_char_token1] = ACTIONS(580),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(583),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(586),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(589),
    [aux_sym__forward_agent_token1] = ACTIONS(592),
    [aux_sym__forward_x11_token1] = ACTIONS(595),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(598),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(601),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(604),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(607),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(610),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(613),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(613),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(616),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(619),
    [aux_sym__host_key_alias_token1] = ACTIONS(622),
    [aux_sym__hostname_token1] = ACTIONS(625),
    [aux_sym__identities_only_token1] = ACTIONS(628),
    [aux_sym__identity_agent_token1] = ACTIONS(631),
    [aux_sym__identity_file_token1] = ACTIONS(634),
    [aux_sym__ignore_unknown_token1] = ACTIONS(637),
    [aux_sym__include_token1] = ACTIONS(640),
    [aux_sym__ipqos_token1] = ACTIONS(643),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(646),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(646),
    [aux_sym__kex_algorithms_token1] = ACTIONS(649),
    [aux_sym__known_hosts_command_token1] = ACTIONS(652),
    [aux_sym__local_command_token1] = ACTIONS(655),
    [aux_sym__local_forward_token1] = ACTIONS(658),
    [aux_sym__log_level_token1] = ACTIONS(661),
    [aux_sym__log_verbose_token1] = ACTIONS(664),
    [aux_sym__macs_token1] = ACTIONS(667),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(670),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(673),
    [aux_sym__password_authentication_token1] = ACTIONS(676),
    [aux_sym__permit_local_command_token1] = ACTIONS(679),
    [aux_sym__permit_remote_open_token1] = ACTIONS(682),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(685),
    [aux_sym__port_token1] = ACTIONS(688),
    [aux_sym__preferred_authentications_token1] = ACTIONS(691),
    [aux_sym__proxy_command_token1] = ACTIONS(694),
    [aux_sym__proxy_jump_token1] = ACTIONS(697),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(700),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(703),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(706),
    [aux_sym__rekey_limit_token1] = ACTIONS(709),
    [aux_sym__remote_command_token1] = ACTIONS(712),
    [aux_sym__remote_forward_token1] = ACTIONS(715),
    [aux_sym__request_tty_token1] = ACTIONS(718),
    [aux_sym__required_rsa_size_token1] = ACTIONS(721),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(724),
    [aux_sym__security_key_provider_token1] = ACTIONS(727),
    [aux_sym__send_env_token1] = ACTIONS(730),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(733),
    [aux_sym__server_alive_interval_token1] = ACTIONS(736),
    [aux_sym__session_type_token1] = ACTIONS(739),
    [aux_sym__stdin_null_token1] = ACTIONS(742),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(745),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(748),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(751),
    [aux_sym__syslog_facility_token1] = ACTIONS(754),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(757),
    [aux_sym__tag_token1] = ACTIONS(760),
    [aux_sym__tunnel_token1] = ACTIONS(763),
    [aux_sym__tunnel_device_token1] = ACTIONS(766),
    [aux_sym__update_host_keys_token1] = ACTIONS(769),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(772),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(775),
    [aux_sym__visual_host_key_token1] = ACTIONS(778),
    [aux_sym__xauth_location_token1] = ACTIONS(781),
    [sym_comment] = ACTIONS(784),
    [sym__space] = ACTIONS(787),
    [sym__eol] = ACTIONS(501),
  },
  [5] = {
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
    [aux_sym__declarations_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(790),
    [aux_sym_host_declaration_token1] = ACTIONS(792),
    [aux_sym_match_declaration_token1] = ACTIONS(790),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
    [sym__eol] = ACTIONS(790),
  },
  [6] = {
    [sym_host_declaration] = STATE(28),
    [sym_match_declaration] = STATE(28),
    [sym_parameter] = STATE(521),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(798),
    [sym__eol] = ACTIONS(800),
  },
  [7] = {
    [sym__declarations] = STATE(31),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [8] = {
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [9] = {
    [sym__declarations] = STATE(23),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [10] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [11] = {
    [sym__declarations] = STATE(30),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [12] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [13] = {
    [sym__declarations] = STATE(35),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [14] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [15] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [16] = {
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [17] = {
    [sym__declarations] = STATE(27),
    [sym_parameter] = STATE(590),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(794),
    [sym__space] = ACTIONS(796),
  },
  [18] = {
    [sym_parameter] = STATE(703),
    [sym__add_keys_to_agent] = STATE(600),
    [sym__address_family] = STATE(598),
    [sym__batch_mode] = STATE(597),
    [sym__bind_address] = STATE(595),
    [sym__bind_interface] = STATE(594),
    [sym__canonical_domains] = STATE(593),
    [sym__canonicalize_fallback_local] = STATE(592),
    [sym__canonicalize_hostname] = STATE(591),
    [sym__canonicalize_max_dots] = STATE(588),
    [sym__canonicalize_permitted_cnames] = STATE(587),
    [sym__ca_signature_algorithms] = STATE(586),
    [sym__certificate_file] = STATE(585),
    [sym__check_host_ip] = STATE(583),
    [sym__ciphers] = STATE(582),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(579),
    [sym__connection_attempts] = STATE(575),
    [sym__connect_timeout] = STATE(574),
    [sym__control_master] = STATE(572),
    [sym__control_persist] = STATE(571),
    [sym__control_path] = STATE(570),
    [sym__dynamic_forward] = STATE(569),
    [sym__enable_escape_command_line] = STATE(566),
    [sym__enable_ssh_keysign] = STATE(565),
    [sym__escape_char] = STATE(562),
    [sym__exit_on_forward_failure] = STATE(552),
    [sym__fingerprint_hash] = STATE(558),
    [sym__fork_after_authentication] = STATE(555),
    [sym__forward_agent] = STATE(553),
    [sym__forward_x11] = STATE(653),
    [sym__forward_x11_timeout] = STATE(495),
    [sym__forward_x11_trusted] = STATE(550),
    [sym__global_known_hosts_file] = STATE(549),
    [sym__gssapi_authentication] = STATE(548),
    [sym__gssapi_delegate_credentials] = STATE(546),
    [sym__hostbased_accepted_algorithms] = STATE(544),
    [sym__hostbased_authentication] = STATE(543),
    [sym__host_key_algorithms] = STATE(542),
    [sym__host_key_alias] = STATE(541),
    [sym__hostname] = STATE(539),
    [sym__identities_only] = STATE(538),
    [sym__identity_agent] = STATE(536),
    [sym__identity_file] = STATE(535),
    [sym__ignore_unknown] = STATE(534),
    [sym__include] = STATE(533),
    [sym__ipqos] = STATE(532),
    [sym__kbd_interactive_authentication] = STATE(531),
    [sym__kex_algorithms] = STATE(530),
    [sym__known_hosts_command] = STATE(529),
    [sym__local_command] = STATE(528),
    [sym__local_forward] = STATE(526),
    [sym__log_level] = STATE(525),
    [sym__log_verbose] = STATE(523),
    [sym__macs] = STATE(520),
    [sym__no_host_authentication_for_localhost] = STATE(518),
    [sym__number_of_password_prompts] = STATE(517),
    [sym__password_authentication] = STATE(515),
    [sym__permit_local_command] = STATE(514),
    [sym__permit_remote_open] = STATE(513),
    [sym__pkcs11_provider] = STATE(511),
    [sym__port] = STATE(510),
    [sym__preferred_authentications] = STATE(509),
    [sym__proxy_command] = STATE(508),
    [sym__proxy_jump] = STATE(507),
    [sym__proxy_use_fdpass] = STATE(504),
    [sym__pubkey_accepted_algorithms] = STATE(501),
    [sym__pubkey_authentication] = STATE(500),
    [sym__rekey_limit] = STATE(499),
    [sym__remote_command] = STATE(498),
    [sym__remote_forward] = STATE(497),
    [sym__request_tty] = STATE(661),
    [sym__required_rsa_size] = STATE(547),
    [sym__revoked_host_keys] = STATE(559),
    [sym__security_key_provider] = STATE(537),
    [sym__send_env] = STATE(573),
    [sym__server_alive_count_max] = STATE(577),
    [sym__server_alive_interval] = STATE(578),
    [sym__session_type] = STATE(580),
    [sym__set_env] = STATE(596),
    [sym__stdin_null] = STATE(634),
    [sym__stream_local_bind_mask] = STATE(635),
    [sym__stream_local_bind_unlink] = STATE(637),
    [sym__strict_host_key_checking] = STATE(647),
    [sym__syslog_facility] = STATE(648),
    [sym__tcp_keep_alive] = STATE(701),
    [sym__tag] = STATE(496),
    [sym__tunnel] = STATE(663),
    [sym__tunnel_device] = STATE(668),
    [sym__update_host_keys] = STATE(679),
    [sym__user] = STATE(681),
    [sym__user_known_hosts_file] = STATE(682),
    [sym__verify_host_key_dns] = STATE(684),
    [sym__visual_host_key] = STATE(688),
    [sym__xauth_location] = STATE(697),
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
    [aux_sym__stdin_null_token1] = ACTIONS(167),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(169),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(171),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(173),
    [aux_sym__syslog_facility_token1] = ACTIONS(175),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(177),
    [aux_sym__tag_token1] = ACTIONS(179),
    [aux_sym__tunnel_token1] = ACTIONS(181),
    [aux_sym__tunnel_device_token1] = ACTIONS(183),
    [aux_sym__update_host_keys_token1] = ACTIONS(185),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(187),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(189),
    [aux_sym__visual_host_key_token1] = ACTIONS(191),
    [aux_sym__xauth_location_token1] = ACTIONS(193),
    [sym_comment] = ACTIONS(802),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [aux_sym_host_declaration_token1] = ACTIONS(503),
    [aux_sym_match_declaration_token1] = ACTIONS(501),
    [aux_sym__match_user_token1] = ACTIONS(503),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(501),
    [aux_sym__address_family_token1] = ACTIONS(501),
    [aux_sym__batch_mode_token1] = ACTIONS(501),
    [aux_sym__bind_address_token1] = ACTIONS(501),
    [aux_sym__bind_interface_token1] = ACTIONS(501),
    [aux_sym__canonical_domains_token1] = ACTIONS(501),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(501),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(501),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(501),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(501),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(501),
    [aux_sym__certificate_file_token1] = ACTIONS(501),
    [aux_sym__check_host_ip_token1] = ACTIONS(501),
    [aux_sym__ciphers_token1] = ACTIONS(501),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(501),
    [aux_sym__compression_token1] = ACTIONS(501),
    [aux_sym__connection_attempts_token1] = ACTIONS(501),
    [aux_sym__connect_timeout_token1] = ACTIONS(501),
    [aux_sym__control_master_token1] = ACTIONS(501),
    [aux_sym__control_persist_token1] = ACTIONS(501),
    [aux_sym__control_path_token1] = ACTIONS(501),
    [aux_sym__dynamic_forward_token1] = ACTIONS(501),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(501),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(501),
    [aux_sym__escape_char_token1] = ACTIONS(501),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(501),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(501),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(501),
    [aux_sym__forward_agent_token1] = ACTIONS(501),
    [aux_sym__forward_x11_token1] = ACTIONS(503),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(501),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(501),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(501),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(501),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(501),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(501),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(501),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(501),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(501),
    [aux_sym__host_key_alias_token1] = ACTIONS(501),
    [aux_sym__hostname_token1] = ACTIONS(501),
    [aux_sym__identities_only_token1] = ACTIONS(501),
    [aux_sym__identity_agent_token1] = ACTIONS(501),
    [aux_sym__identity_file_token1] = ACTIONS(501),
    [aux_sym__ignore_unknown_token1] = ACTIONS(501),
    [aux_sym__include_token1] = ACTIONS(501),
    [aux_sym__ipqos_token1] = ACTIONS(501),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(501),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(501),
    [aux_sym__kex_algorithms_token1] = ACTIONS(501),
    [aux_sym__known_hosts_command_token1] = ACTIONS(501),
    [aux_sym__local_command_token1] = ACTIONS(501),
    [aux_sym__local_forward_token1] = ACTIONS(501),
    [aux_sym__log_level_token1] = ACTIONS(501),
    [aux_sym__log_verbose_token1] = ACTIONS(501),
    [aux_sym__macs_token1] = ACTIONS(501),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(501),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(501),
    [aux_sym__password_authentication_token1] = ACTIONS(501),
    [aux_sym__permit_local_command_token1] = ACTIONS(501),
    [aux_sym__permit_remote_open_token1] = ACTIONS(501),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(501),
    [aux_sym__port_token1] = ACTIONS(501),
    [aux_sym__preferred_authentications_token1] = ACTIONS(501),
    [aux_sym__proxy_command_token1] = ACTIONS(501),
    [aux_sym__proxy_jump_token1] = ACTIONS(501),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(501),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(501),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(501),
    [aux_sym__rekey_limit_token1] = ACTIONS(501),
    [aux_sym__remote_command_token1] = ACTIONS(501),
    [aux_sym__remote_forward_token1] = ACTIONS(501),
    [aux_sym__request_tty_token1] = ACTIONS(501),
    [aux_sym__required_rsa_size_token1] = ACTIONS(501),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(501),
    [aux_sym__security_key_provider_token1] = ACTIONS(501),
    [aux_sym__send_env_token1] = ACTIONS(501),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(501),
    [aux_sym__server_alive_interval_token1] = ACTIONS(501),
    [aux_sym__session_type_token1] = ACTIONS(501),
    [aux_sym__stdin_null_token1] = ACTIONS(501),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(501),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(501),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(501),
    [aux_sym__syslog_facility_token1] = ACTIONS(501),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(501),
    [aux_sym__tag_token1] = ACTIONS(501),
    [aux_sym__tunnel_token1] = ACTIONS(503),
    [aux_sym__tunnel_device_token1] = ACTIONS(501),
    [aux_sym__update_host_keys_token1] = ACTIONS(501),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(501),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(501),
    [aux_sym__visual_host_key_token1] = ACTIONS(501),
    [aux_sym__xauth_location_token1] = ACTIONS(501),
    [sym_comment] = ACTIONS(501),
    [sym__space] = ACTIONS(501),
    [sym__eol] = ACTIONS(501),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(804),
    [aux_sym_host_declaration_token1] = ACTIONS(806),
    [aux_sym_match_declaration_token1] = ACTIONS(804),
    [aux_sym__match_user_token1] = ACTIONS(806),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(804),
    [aux_sym__address_family_token1] = ACTIONS(804),
    [aux_sym__batch_mode_token1] = ACTIONS(804),
    [aux_sym__bind_address_token1] = ACTIONS(804),
    [aux_sym__bind_interface_token1] = ACTIONS(804),
    [aux_sym__canonical_domains_token1] = ACTIONS(804),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(804),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(804),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(804),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(804),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(804),
    [aux_sym__certificate_file_token1] = ACTIONS(804),
    [aux_sym__check_host_ip_token1] = ACTIONS(804),
    [aux_sym__ciphers_token1] = ACTIONS(804),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(804),
    [aux_sym__compression_token1] = ACTIONS(804),
    [aux_sym__connection_attempts_token1] = ACTIONS(804),
    [aux_sym__connect_timeout_token1] = ACTIONS(804),
    [aux_sym__control_master_token1] = ACTIONS(804),
    [aux_sym__control_persist_token1] = ACTIONS(804),
    [aux_sym__control_path_token1] = ACTIONS(804),
    [aux_sym__dynamic_forward_token1] = ACTIONS(804),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(804),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(804),
    [aux_sym__escape_char_token1] = ACTIONS(804),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(804),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(804),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(804),
    [aux_sym__forward_agent_token1] = ACTIONS(804),
    [aux_sym__forward_x11_token1] = ACTIONS(806),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(804),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(804),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(804),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(804),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(804),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(804),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(804),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(804),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(804),
    [aux_sym__host_key_alias_token1] = ACTIONS(804),
    [aux_sym__hostname_token1] = ACTIONS(804),
    [aux_sym__identities_only_token1] = ACTIONS(804),
    [aux_sym__identity_agent_token1] = ACTIONS(804),
    [aux_sym__identity_file_token1] = ACTIONS(804),
    [aux_sym__ignore_unknown_token1] = ACTIONS(804),
    [aux_sym__include_token1] = ACTIONS(804),
    [aux_sym__ipqos_token1] = ACTIONS(804),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(804),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(804),
    [aux_sym__kex_algorithms_token1] = ACTIONS(804),
    [aux_sym__known_hosts_command_token1] = ACTIONS(804),
    [aux_sym__local_command_token1] = ACTIONS(804),
    [aux_sym__local_forward_token1] = ACTIONS(804),
    [aux_sym__log_level_token1] = ACTIONS(804),
    [aux_sym__log_verbose_token1] = ACTIONS(804),
    [aux_sym__macs_token1] = ACTIONS(804),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(804),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(804),
    [aux_sym__password_authentication_token1] = ACTIONS(804),
    [aux_sym__permit_local_command_token1] = ACTIONS(804),
    [aux_sym__permit_remote_open_token1] = ACTIONS(804),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(804),
    [aux_sym__port_token1] = ACTIONS(804),
    [aux_sym__preferred_authentications_token1] = ACTIONS(804),
    [aux_sym__proxy_command_token1] = ACTIONS(804),
    [aux_sym__proxy_jump_token1] = ACTIONS(804),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(804),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(804),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(804),
    [aux_sym__rekey_limit_token1] = ACTIONS(804),
    [aux_sym__remote_command_token1] = ACTIONS(804),
    [aux_sym__remote_forward_token1] = ACTIONS(804),
    [aux_sym__request_tty_token1] = ACTIONS(804),
    [aux_sym__required_rsa_size_token1] = ACTIONS(804),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(804),
    [aux_sym__security_key_provider_token1] = ACTIONS(804),
    [aux_sym__send_env_token1] = ACTIONS(804),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(804),
    [aux_sym__server_alive_interval_token1] = ACTIONS(804),
    [aux_sym__session_type_token1] = ACTIONS(804),
    [aux_sym__stdin_null_token1] = ACTIONS(804),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(804),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(804),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(804),
    [aux_sym__syslog_facility_token1] = ACTIONS(804),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(804),
    [aux_sym__tag_token1] = ACTIONS(804),
    [aux_sym__tunnel_token1] = ACTIONS(806),
    [aux_sym__tunnel_device_token1] = ACTIONS(804),
    [aux_sym__update_host_keys_token1] = ACTIONS(804),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(804),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(804),
    [aux_sym__visual_host_key_token1] = ACTIONS(804),
    [aux_sym__xauth_location_token1] = ACTIONS(804),
    [sym_comment] = ACTIONS(804),
    [sym__space] = ACTIONS(804),
    [sym__eol] = ACTIONS(804),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(808),
    [aux_sym_host_declaration_token1] = ACTIONS(810),
    [aux_sym_match_declaration_token1] = ACTIONS(808),
    [aux_sym__match_user_token1] = ACTIONS(810),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(808),
    [aux_sym__address_family_token1] = ACTIONS(808),
    [aux_sym__batch_mode_token1] = ACTIONS(808),
    [aux_sym__bind_address_token1] = ACTIONS(808),
    [aux_sym__bind_interface_token1] = ACTIONS(808),
    [aux_sym__canonical_domains_token1] = ACTIONS(808),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(808),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(808),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(808),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(808),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(808),
    [aux_sym__certificate_file_token1] = ACTIONS(808),
    [aux_sym__check_host_ip_token1] = ACTIONS(808),
    [aux_sym__ciphers_token1] = ACTIONS(808),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(808),
    [aux_sym__compression_token1] = ACTIONS(808),
    [aux_sym__connection_attempts_token1] = ACTIONS(808),
    [aux_sym__connect_timeout_token1] = ACTIONS(808),
    [aux_sym__control_master_token1] = ACTIONS(808),
    [aux_sym__control_persist_token1] = ACTIONS(808),
    [aux_sym__control_path_token1] = ACTIONS(808),
    [aux_sym__dynamic_forward_token1] = ACTIONS(808),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(808),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(808),
    [aux_sym__escape_char_token1] = ACTIONS(808),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(808),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(808),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(808),
    [aux_sym__forward_agent_token1] = ACTIONS(808),
    [aux_sym__forward_x11_token1] = ACTIONS(810),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(808),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(808),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(808),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(808),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(808),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(808),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(808),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(808),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(808),
    [aux_sym__host_key_alias_token1] = ACTIONS(808),
    [aux_sym__hostname_token1] = ACTIONS(808),
    [aux_sym__identities_only_token1] = ACTIONS(808),
    [aux_sym__identity_agent_token1] = ACTIONS(808),
    [aux_sym__identity_file_token1] = ACTIONS(808),
    [aux_sym__ignore_unknown_token1] = ACTIONS(808),
    [aux_sym__include_token1] = ACTIONS(808),
    [aux_sym__ipqos_token1] = ACTIONS(808),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(808),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(808),
    [aux_sym__kex_algorithms_token1] = ACTIONS(808),
    [aux_sym__known_hosts_command_token1] = ACTIONS(808),
    [aux_sym__local_command_token1] = ACTIONS(808),
    [aux_sym__local_forward_token1] = ACTIONS(808),
    [aux_sym__log_level_token1] = ACTIONS(808),
    [aux_sym__log_verbose_token1] = ACTIONS(808),
    [aux_sym__macs_token1] = ACTIONS(808),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(808),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(808),
    [aux_sym__password_authentication_token1] = ACTIONS(808),
    [aux_sym__permit_local_command_token1] = ACTIONS(808),
    [aux_sym__permit_remote_open_token1] = ACTIONS(808),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(808),
    [aux_sym__port_token1] = ACTIONS(808),
    [aux_sym__preferred_authentications_token1] = ACTIONS(808),
    [aux_sym__proxy_command_token1] = ACTIONS(808),
    [aux_sym__proxy_jump_token1] = ACTIONS(808),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(808),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(808),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(808),
    [aux_sym__rekey_limit_token1] = ACTIONS(808),
    [aux_sym__remote_command_token1] = ACTIONS(808),
    [aux_sym__remote_forward_token1] = ACTIONS(808),
    [aux_sym__request_tty_token1] = ACTIONS(808),
    [aux_sym__required_rsa_size_token1] = ACTIONS(808),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(808),
    [aux_sym__security_key_provider_token1] = ACTIONS(808),
    [aux_sym__send_env_token1] = ACTIONS(808),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(808),
    [aux_sym__server_alive_interval_token1] = ACTIONS(808),
    [aux_sym__session_type_token1] = ACTIONS(808),
    [aux_sym__stdin_null_token1] = ACTIONS(808),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(808),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(808),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(808),
    [aux_sym__syslog_facility_token1] = ACTIONS(808),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(808),
    [aux_sym__tag_token1] = ACTIONS(808),
    [aux_sym__tunnel_token1] = ACTIONS(810),
    [aux_sym__tunnel_device_token1] = ACTIONS(808),
    [aux_sym__update_host_keys_token1] = ACTIONS(808),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(808),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(808),
    [aux_sym__visual_host_key_token1] = ACTIONS(808),
    [aux_sym__xauth_location_token1] = ACTIONS(808),
    [sym_comment] = ACTIONS(808),
    [sym__space] = ACTIONS(808),
    [sym__eol] = ACTIONS(808),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(812),
    [aux_sym_host_declaration_token1] = ACTIONS(814),
    [aux_sym_match_declaration_token1] = ACTIONS(812),
    [aux_sym__match_user_token1] = ACTIONS(814),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(812),
    [aux_sym__address_family_token1] = ACTIONS(812),
    [aux_sym__batch_mode_token1] = ACTIONS(812),
    [aux_sym__bind_address_token1] = ACTIONS(812),
    [aux_sym__bind_interface_token1] = ACTIONS(812),
    [aux_sym__canonical_domains_token1] = ACTIONS(812),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(812),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(812),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(812),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(812),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(812),
    [aux_sym__certificate_file_token1] = ACTIONS(812),
    [aux_sym__check_host_ip_token1] = ACTIONS(812),
    [aux_sym__ciphers_token1] = ACTIONS(812),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(812),
    [aux_sym__compression_token1] = ACTIONS(812),
    [aux_sym__connection_attempts_token1] = ACTIONS(812),
    [aux_sym__connect_timeout_token1] = ACTIONS(812),
    [aux_sym__control_master_token1] = ACTIONS(812),
    [aux_sym__control_persist_token1] = ACTIONS(812),
    [aux_sym__control_path_token1] = ACTIONS(812),
    [aux_sym__dynamic_forward_token1] = ACTIONS(812),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(812),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(812),
    [aux_sym__escape_char_token1] = ACTIONS(812),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(812),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(812),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(812),
    [aux_sym__forward_agent_token1] = ACTIONS(812),
    [aux_sym__forward_x11_token1] = ACTIONS(814),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(812),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(812),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(812),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(812),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(812),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(812),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(812),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(812),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(812),
    [aux_sym__host_key_alias_token1] = ACTIONS(812),
    [aux_sym__hostname_token1] = ACTIONS(812),
    [aux_sym__identities_only_token1] = ACTIONS(812),
    [aux_sym__identity_agent_token1] = ACTIONS(812),
    [aux_sym__identity_file_token1] = ACTIONS(812),
    [aux_sym__ignore_unknown_token1] = ACTIONS(812),
    [aux_sym__include_token1] = ACTIONS(812),
    [aux_sym__ipqos_token1] = ACTIONS(812),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(812),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(812),
    [aux_sym__kex_algorithms_token1] = ACTIONS(812),
    [aux_sym__known_hosts_command_token1] = ACTIONS(812),
    [aux_sym__local_command_token1] = ACTIONS(812),
    [aux_sym__local_forward_token1] = ACTIONS(812),
    [aux_sym__log_level_token1] = ACTIONS(812),
    [aux_sym__log_verbose_token1] = ACTIONS(812),
    [aux_sym__macs_token1] = ACTIONS(812),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(812),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(812),
    [aux_sym__password_authentication_token1] = ACTIONS(812),
    [aux_sym__permit_local_command_token1] = ACTIONS(812),
    [aux_sym__permit_remote_open_token1] = ACTIONS(812),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(812),
    [aux_sym__port_token1] = ACTIONS(812),
    [aux_sym__preferred_authentications_token1] = ACTIONS(812),
    [aux_sym__proxy_command_token1] = ACTIONS(812),
    [aux_sym__proxy_jump_token1] = ACTIONS(812),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(812),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(812),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(812),
    [aux_sym__rekey_limit_token1] = ACTIONS(812),
    [aux_sym__remote_command_token1] = ACTIONS(812),
    [aux_sym__remote_forward_token1] = ACTIONS(812),
    [aux_sym__request_tty_token1] = ACTIONS(812),
    [aux_sym__required_rsa_size_token1] = ACTIONS(812),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(812),
    [aux_sym__security_key_provider_token1] = ACTIONS(812),
    [aux_sym__send_env_token1] = ACTIONS(812),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(812),
    [aux_sym__server_alive_interval_token1] = ACTIONS(812),
    [aux_sym__session_type_token1] = ACTIONS(812),
    [aux_sym__stdin_null_token1] = ACTIONS(812),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(812),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(812),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(812),
    [aux_sym__syslog_facility_token1] = ACTIONS(812),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(812),
    [aux_sym__tag_token1] = ACTIONS(812),
    [aux_sym__tunnel_token1] = ACTIONS(814),
    [aux_sym__tunnel_device_token1] = ACTIONS(812),
    [aux_sym__update_host_keys_token1] = ACTIONS(812),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(812),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(812),
    [aux_sym__visual_host_key_token1] = ACTIONS(812),
    [aux_sym__xauth_location_token1] = ACTIONS(812),
    [sym_comment] = ACTIONS(812),
    [sym__space] = ACTIONS(812),
    [sym__eol] = ACTIONS(812),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(816),
    [aux_sym_host_declaration_token1] = ACTIONS(818),
    [aux_sym_match_declaration_token1] = ACTIONS(816),
    [aux_sym__match_user_token1] = ACTIONS(818),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(816),
    [aux_sym__address_family_token1] = ACTIONS(816),
    [aux_sym__batch_mode_token1] = ACTIONS(816),
    [aux_sym__bind_address_token1] = ACTIONS(816),
    [aux_sym__bind_interface_token1] = ACTIONS(816),
    [aux_sym__canonical_domains_token1] = ACTIONS(816),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(816),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(816),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(816),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(816),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(816),
    [aux_sym__certificate_file_token1] = ACTIONS(816),
    [aux_sym__check_host_ip_token1] = ACTIONS(816),
    [aux_sym__ciphers_token1] = ACTIONS(816),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(816),
    [aux_sym__compression_token1] = ACTIONS(816),
    [aux_sym__connection_attempts_token1] = ACTIONS(816),
    [aux_sym__connect_timeout_token1] = ACTIONS(816),
    [aux_sym__control_master_token1] = ACTIONS(816),
    [aux_sym__control_persist_token1] = ACTIONS(816),
    [aux_sym__control_path_token1] = ACTIONS(816),
    [aux_sym__dynamic_forward_token1] = ACTIONS(816),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(816),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(816),
    [aux_sym__escape_char_token1] = ACTIONS(816),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(816),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(816),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(816),
    [aux_sym__forward_agent_token1] = ACTIONS(816),
    [aux_sym__forward_x11_token1] = ACTIONS(818),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(816),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(816),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(816),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(816),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(816),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(816),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(816),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(816),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(816),
    [aux_sym__host_key_alias_token1] = ACTIONS(816),
    [aux_sym__hostname_token1] = ACTIONS(816),
    [aux_sym__identities_only_token1] = ACTIONS(816),
    [aux_sym__identity_agent_token1] = ACTIONS(816),
    [aux_sym__identity_file_token1] = ACTIONS(816),
    [aux_sym__ignore_unknown_token1] = ACTIONS(816),
    [aux_sym__include_token1] = ACTIONS(816),
    [aux_sym__ipqos_token1] = ACTIONS(816),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(816),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(816),
    [aux_sym__kex_algorithms_token1] = ACTIONS(816),
    [aux_sym__known_hosts_command_token1] = ACTIONS(816),
    [aux_sym__local_command_token1] = ACTIONS(816),
    [aux_sym__local_forward_token1] = ACTIONS(816),
    [aux_sym__log_level_token1] = ACTIONS(816),
    [aux_sym__log_verbose_token1] = ACTIONS(816),
    [aux_sym__macs_token1] = ACTIONS(816),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(816),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(816),
    [aux_sym__password_authentication_token1] = ACTIONS(816),
    [aux_sym__permit_local_command_token1] = ACTIONS(816),
    [aux_sym__permit_remote_open_token1] = ACTIONS(816),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(816),
    [aux_sym__port_token1] = ACTIONS(816),
    [aux_sym__preferred_authentications_token1] = ACTIONS(816),
    [aux_sym__proxy_command_token1] = ACTIONS(816),
    [aux_sym__proxy_jump_token1] = ACTIONS(816),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(816),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(816),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(816),
    [aux_sym__rekey_limit_token1] = ACTIONS(816),
    [aux_sym__remote_command_token1] = ACTIONS(816),
    [aux_sym__remote_forward_token1] = ACTIONS(816),
    [aux_sym__request_tty_token1] = ACTIONS(816),
    [aux_sym__required_rsa_size_token1] = ACTIONS(816),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(816),
    [aux_sym__security_key_provider_token1] = ACTIONS(816),
    [aux_sym__send_env_token1] = ACTIONS(816),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(816),
    [aux_sym__server_alive_interval_token1] = ACTIONS(816),
    [aux_sym__session_type_token1] = ACTIONS(816),
    [aux_sym__stdin_null_token1] = ACTIONS(816),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(816),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(816),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(816),
    [aux_sym__syslog_facility_token1] = ACTIONS(816),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(816),
    [aux_sym__tag_token1] = ACTIONS(816),
    [aux_sym__tunnel_token1] = ACTIONS(818),
    [aux_sym__tunnel_device_token1] = ACTIONS(816),
    [aux_sym__update_host_keys_token1] = ACTIONS(816),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(816),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(816),
    [aux_sym__visual_host_key_token1] = ACTIONS(816),
    [aux_sym__xauth_location_token1] = ACTIONS(816),
    [sym_comment] = ACTIONS(816),
    [sym__space] = ACTIONS(816),
    [sym__eol] = ACTIONS(816),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(820),
    [aux_sym_host_declaration_token1] = ACTIONS(822),
    [aux_sym_match_declaration_token1] = ACTIONS(820),
    [aux_sym__match_user_token1] = ACTIONS(822),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(820),
    [aux_sym__address_family_token1] = ACTIONS(820),
    [aux_sym__batch_mode_token1] = ACTIONS(820),
    [aux_sym__bind_address_token1] = ACTIONS(820),
    [aux_sym__bind_interface_token1] = ACTIONS(820),
    [aux_sym__canonical_domains_token1] = ACTIONS(820),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(820),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(820),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(820),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(820),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(820),
    [aux_sym__certificate_file_token1] = ACTIONS(820),
    [aux_sym__check_host_ip_token1] = ACTIONS(820),
    [aux_sym__ciphers_token1] = ACTIONS(820),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(820),
    [aux_sym__compression_token1] = ACTIONS(820),
    [aux_sym__connection_attempts_token1] = ACTIONS(820),
    [aux_sym__connect_timeout_token1] = ACTIONS(820),
    [aux_sym__control_master_token1] = ACTIONS(820),
    [aux_sym__control_persist_token1] = ACTIONS(820),
    [aux_sym__control_path_token1] = ACTIONS(820),
    [aux_sym__dynamic_forward_token1] = ACTIONS(820),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(820),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(820),
    [aux_sym__escape_char_token1] = ACTIONS(820),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(820),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(820),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(820),
    [aux_sym__forward_agent_token1] = ACTIONS(820),
    [aux_sym__forward_x11_token1] = ACTIONS(822),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(820),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(820),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(820),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(820),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(820),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(820),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(820),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(820),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(820),
    [aux_sym__host_key_alias_token1] = ACTIONS(820),
    [aux_sym__hostname_token1] = ACTIONS(820),
    [aux_sym__identities_only_token1] = ACTIONS(820),
    [aux_sym__identity_agent_token1] = ACTIONS(820),
    [aux_sym__identity_file_token1] = ACTIONS(820),
    [aux_sym__ignore_unknown_token1] = ACTIONS(820),
    [aux_sym__include_token1] = ACTIONS(820),
    [aux_sym__ipqos_token1] = ACTIONS(820),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(820),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(820),
    [aux_sym__kex_algorithms_token1] = ACTIONS(820),
    [aux_sym__known_hosts_command_token1] = ACTIONS(820),
    [aux_sym__local_command_token1] = ACTIONS(820),
    [aux_sym__local_forward_token1] = ACTIONS(820),
    [aux_sym__log_level_token1] = ACTIONS(820),
    [aux_sym__log_verbose_token1] = ACTIONS(820),
    [aux_sym__macs_token1] = ACTIONS(820),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(820),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(820),
    [aux_sym__password_authentication_token1] = ACTIONS(820),
    [aux_sym__permit_local_command_token1] = ACTIONS(820),
    [aux_sym__permit_remote_open_token1] = ACTIONS(820),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(820),
    [aux_sym__port_token1] = ACTIONS(820),
    [aux_sym__preferred_authentications_token1] = ACTIONS(820),
    [aux_sym__proxy_command_token1] = ACTIONS(820),
    [aux_sym__proxy_jump_token1] = ACTIONS(820),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(820),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(820),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(820),
    [aux_sym__rekey_limit_token1] = ACTIONS(820),
    [aux_sym__remote_command_token1] = ACTIONS(820),
    [aux_sym__remote_forward_token1] = ACTIONS(820),
    [aux_sym__request_tty_token1] = ACTIONS(820),
    [aux_sym__required_rsa_size_token1] = ACTIONS(820),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(820),
    [aux_sym__security_key_provider_token1] = ACTIONS(820),
    [aux_sym__send_env_token1] = ACTIONS(820),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(820),
    [aux_sym__server_alive_interval_token1] = ACTIONS(820),
    [aux_sym__session_type_token1] = ACTIONS(820),
    [aux_sym__stdin_null_token1] = ACTIONS(820),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(820),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(820),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(820),
    [aux_sym__syslog_facility_token1] = ACTIONS(820),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(820),
    [aux_sym__tag_token1] = ACTIONS(820),
    [aux_sym__tunnel_token1] = ACTIONS(822),
    [aux_sym__tunnel_device_token1] = ACTIONS(820),
    [aux_sym__update_host_keys_token1] = ACTIONS(820),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(820),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(820),
    [aux_sym__visual_host_key_token1] = ACTIONS(820),
    [aux_sym__xauth_location_token1] = ACTIONS(820),
    [sym_comment] = ACTIONS(820),
    [sym__space] = ACTIONS(820),
    [sym__eol] = ACTIONS(820),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(824),
    [aux_sym_host_declaration_token1] = ACTIONS(826),
    [aux_sym_match_declaration_token1] = ACTIONS(824),
    [aux_sym__match_user_token1] = ACTIONS(826),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(824),
    [aux_sym__address_family_token1] = ACTIONS(824),
    [aux_sym__batch_mode_token1] = ACTIONS(824),
    [aux_sym__bind_address_token1] = ACTIONS(824),
    [aux_sym__bind_interface_token1] = ACTIONS(824),
    [aux_sym__canonical_domains_token1] = ACTIONS(824),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(824),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(824),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(824),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(824),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(824),
    [aux_sym__certificate_file_token1] = ACTIONS(824),
    [aux_sym__check_host_ip_token1] = ACTIONS(824),
    [aux_sym__ciphers_token1] = ACTIONS(824),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(824),
    [aux_sym__compression_token1] = ACTIONS(824),
    [aux_sym__connection_attempts_token1] = ACTIONS(824),
    [aux_sym__connect_timeout_token1] = ACTIONS(824),
    [aux_sym__control_master_token1] = ACTIONS(824),
    [aux_sym__control_persist_token1] = ACTIONS(824),
    [aux_sym__control_path_token1] = ACTIONS(824),
    [aux_sym__dynamic_forward_token1] = ACTIONS(824),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(824),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(824),
    [aux_sym__escape_char_token1] = ACTIONS(824),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(824),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(824),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(824),
    [aux_sym__forward_agent_token1] = ACTIONS(824),
    [aux_sym__forward_x11_token1] = ACTIONS(826),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(824),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(824),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(824),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(824),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(824),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(824),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(824),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(824),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(824),
    [aux_sym__host_key_alias_token1] = ACTIONS(824),
    [aux_sym__hostname_token1] = ACTIONS(824),
    [aux_sym__identities_only_token1] = ACTIONS(824),
    [aux_sym__identity_agent_token1] = ACTIONS(824),
    [aux_sym__identity_file_token1] = ACTIONS(824),
    [aux_sym__ignore_unknown_token1] = ACTIONS(824),
    [aux_sym__include_token1] = ACTIONS(824),
    [aux_sym__ipqos_token1] = ACTIONS(824),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(824),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(824),
    [aux_sym__kex_algorithms_token1] = ACTIONS(824),
    [aux_sym__known_hosts_command_token1] = ACTIONS(824),
    [aux_sym__local_command_token1] = ACTIONS(824),
    [aux_sym__local_forward_token1] = ACTIONS(824),
    [aux_sym__log_level_token1] = ACTIONS(824),
    [aux_sym__log_verbose_token1] = ACTIONS(824),
    [aux_sym__macs_token1] = ACTIONS(824),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(824),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(824),
    [aux_sym__password_authentication_token1] = ACTIONS(824),
    [aux_sym__permit_local_command_token1] = ACTIONS(824),
    [aux_sym__permit_remote_open_token1] = ACTIONS(824),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(824),
    [aux_sym__port_token1] = ACTIONS(824),
    [aux_sym__preferred_authentications_token1] = ACTIONS(824),
    [aux_sym__proxy_command_token1] = ACTIONS(824),
    [aux_sym__proxy_jump_token1] = ACTIONS(824),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(824),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(824),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(824),
    [aux_sym__rekey_limit_token1] = ACTIONS(824),
    [aux_sym__remote_command_token1] = ACTIONS(824),
    [aux_sym__remote_forward_token1] = ACTIONS(824),
    [aux_sym__request_tty_token1] = ACTIONS(824),
    [aux_sym__required_rsa_size_token1] = ACTIONS(824),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(824),
    [aux_sym__security_key_provider_token1] = ACTIONS(824),
    [aux_sym__send_env_token1] = ACTIONS(824),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(824),
    [aux_sym__server_alive_interval_token1] = ACTIONS(824),
    [aux_sym__session_type_token1] = ACTIONS(824),
    [aux_sym__stdin_null_token1] = ACTIONS(824),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(824),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(824),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(824),
    [aux_sym__syslog_facility_token1] = ACTIONS(824),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(824),
    [aux_sym__tag_token1] = ACTIONS(824),
    [aux_sym__tunnel_token1] = ACTIONS(826),
    [aux_sym__tunnel_device_token1] = ACTIONS(824),
    [aux_sym__update_host_keys_token1] = ACTIONS(824),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(824),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(824),
    [aux_sym__visual_host_key_token1] = ACTIONS(824),
    [aux_sym__xauth_location_token1] = ACTIONS(824),
    [sym_comment] = ACTIONS(824),
    [sym__space] = ACTIONS(824),
    [sym__eol] = ACTIONS(824),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(828),
    [aux_sym_host_declaration_token1] = ACTIONS(830),
    [aux_sym_match_declaration_token1] = ACTIONS(828),
    [aux_sym__match_user_token1] = ACTIONS(830),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(828),
    [aux_sym__address_family_token1] = ACTIONS(828),
    [aux_sym__batch_mode_token1] = ACTIONS(828),
    [aux_sym__bind_address_token1] = ACTIONS(828),
    [aux_sym__bind_interface_token1] = ACTIONS(828),
    [aux_sym__canonical_domains_token1] = ACTIONS(828),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(828),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(828),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(828),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(828),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(828),
    [aux_sym__certificate_file_token1] = ACTIONS(828),
    [aux_sym__check_host_ip_token1] = ACTIONS(828),
    [aux_sym__ciphers_token1] = ACTIONS(828),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(828),
    [aux_sym__compression_token1] = ACTIONS(828),
    [aux_sym__connection_attempts_token1] = ACTIONS(828),
    [aux_sym__connect_timeout_token1] = ACTIONS(828),
    [aux_sym__control_master_token1] = ACTIONS(828),
    [aux_sym__control_persist_token1] = ACTIONS(828),
    [aux_sym__control_path_token1] = ACTIONS(828),
    [aux_sym__dynamic_forward_token1] = ACTIONS(828),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(828),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(828),
    [aux_sym__escape_char_token1] = ACTIONS(828),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(828),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(828),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(828),
    [aux_sym__forward_agent_token1] = ACTIONS(828),
    [aux_sym__forward_x11_token1] = ACTIONS(830),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(828),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(828),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(828),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(828),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(828),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(828),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(828),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(828),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(828),
    [aux_sym__host_key_alias_token1] = ACTIONS(828),
    [aux_sym__hostname_token1] = ACTIONS(828),
    [aux_sym__identities_only_token1] = ACTIONS(828),
    [aux_sym__identity_agent_token1] = ACTIONS(828),
    [aux_sym__identity_file_token1] = ACTIONS(828),
    [aux_sym__ignore_unknown_token1] = ACTIONS(828),
    [aux_sym__include_token1] = ACTIONS(828),
    [aux_sym__ipqos_token1] = ACTIONS(828),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(828),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(828),
    [aux_sym__kex_algorithms_token1] = ACTIONS(828),
    [aux_sym__known_hosts_command_token1] = ACTIONS(828),
    [aux_sym__local_command_token1] = ACTIONS(828),
    [aux_sym__local_forward_token1] = ACTIONS(828),
    [aux_sym__log_level_token1] = ACTIONS(828),
    [aux_sym__log_verbose_token1] = ACTIONS(828),
    [aux_sym__macs_token1] = ACTIONS(828),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(828),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(828),
    [aux_sym__password_authentication_token1] = ACTIONS(828),
    [aux_sym__permit_local_command_token1] = ACTIONS(828),
    [aux_sym__permit_remote_open_token1] = ACTIONS(828),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(828),
    [aux_sym__port_token1] = ACTIONS(828),
    [aux_sym__preferred_authentications_token1] = ACTIONS(828),
    [aux_sym__proxy_command_token1] = ACTIONS(828),
    [aux_sym__proxy_jump_token1] = ACTIONS(828),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(828),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(828),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(828),
    [aux_sym__rekey_limit_token1] = ACTIONS(828),
    [aux_sym__remote_command_token1] = ACTIONS(828),
    [aux_sym__remote_forward_token1] = ACTIONS(828),
    [aux_sym__request_tty_token1] = ACTIONS(828),
    [aux_sym__required_rsa_size_token1] = ACTIONS(828),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(828),
    [aux_sym__security_key_provider_token1] = ACTIONS(828),
    [aux_sym__send_env_token1] = ACTIONS(828),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(828),
    [aux_sym__server_alive_interval_token1] = ACTIONS(828),
    [aux_sym__session_type_token1] = ACTIONS(828),
    [aux_sym__stdin_null_token1] = ACTIONS(828),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(828),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(828),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(828),
    [aux_sym__syslog_facility_token1] = ACTIONS(828),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(828),
    [aux_sym__tag_token1] = ACTIONS(828),
    [aux_sym__tunnel_token1] = ACTIONS(830),
    [aux_sym__tunnel_device_token1] = ACTIONS(828),
    [aux_sym__update_host_keys_token1] = ACTIONS(828),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(828),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(828),
    [aux_sym__visual_host_key_token1] = ACTIONS(828),
    [aux_sym__xauth_location_token1] = ACTIONS(828),
    [sym_comment] = ACTIONS(828),
    [sym__space] = ACTIONS(828),
    [sym__eol] = ACTIONS(828),
  },
  [27] = {
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
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(832),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(832),
    [aux_sym__visual_host_key_token1] = ACTIONS(832),
    [aux_sym__xauth_location_token1] = ACTIONS(832),
    [sym_comment] = ACTIONS(832),
    [sym__space] = ACTIONS(832),
    [sym__eol] = ACTIONS(832),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_host_declaration_token1] = ACTIONS(836),
    [aux_sym_match_declaration_token1] = ACTIONS(205),
    [aux_sym__match_user_token1] = ACTIONS(836),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(205),
    [aux_sym__address_family_token1] = ACTIONS(205),
    [aux_sym__batch_mode_token1] = ACTIONS(205),
    [aux_sym__bind_address_token1] = ACTIONS(205),
    [aux_sym__bind_interface_token1] = ACTIONS(205),
    [aux_sym__canonical_domains_token1] = ACTIONS(205),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(205),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(205),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(205),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(205),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(205),
    [aux_sym__certificate_file_token1] = ACTIONS(205),
    [aux_sym__check_host_ip_token1] = ACTIONS(205),
    [aux_sym__ciphers_token1] = ACTIONS(205),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(205),
    [aux_sym__compression_token1] = ACTIONS(205),
    [aux_sym__connection_attempts_token1] = ACTIONS(205),
    [aux_sym__connect_timeout_token1] = ACTIONS(205),
    [aux_sym__control_master_token1] = ACTIONS(205),
    [aux_sym__control_persist_token1] = ACTIONS(205),
    [aux_sym__control_path_token1] = ACTIONS(205),
    [aux_sym__dynamic_forward_token1] = ACTIONS(205),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(205),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(205),
    [aux_sym__escape_char_token1] = ACTIONS(205),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(205),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(205),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(205),
    [aux_sym__forward_agent_token1] = ACTIONS(205),
    [aux_sym__forward_x11_token1] = ACTIONS(836),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(205),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(205),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(205),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(205),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(205),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(205),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(205),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(205),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(205),
    [aux_sym__host_key_alias_token1] = ACTIONS(205),
    [aux_sym__hostname_token1] = ACTIONS(205),
    [aux_sym__identities_only_token1] = ACTIONS(205),
    [aux_sym__identity_agent_token1] = ACTIONS(205),
    [aux_sym__identity_file_token1] = ACTIONS(205),
    [aux_sym__ignore_unknown_token1] = ACTIONS(205),
    [aux_sym__include_token1] = ACTIONS(205),
    [aux_sym__ipqos_token1] = ACTIONS(205),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(205),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(205),
    [aux_sym__kex_algorithms_token1] = ACTIONS(205),
    [aux_sym__known_hosts_command_token1] = ACTIONS(205),
    [aux_sym__local_command_token1] = ACTIONS(205),
    [aux_sym__local_forward_token1] = ACTIONS(205),
    [aux_sym__log_level_token1] = ACTIONS(205),
    [aux_sym__log_verbose_token1] = ACTIONS(205),
    [aux_sym__macs_token1] = ACTIONS(205),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(205),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(205),
    [aux_sym__password_authentication_token1] = ACTIONS(205),
    [aux_sym__permit_local_command_token1] = ACTIONS(205),
    [aux_sym__permit_remote_open_token1] = ACTIONS(205),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(205),
    [aux_sym__port_token1] = ACTIONS(205),
    [aux_sym__preferred_authentications_token1] = ACTIONS(205),
    [aux_sym__proxy_command_token1] = ACTIONS(205),
    [aux_sym__proxy_jump_token1] = ACTIONS(205),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(205),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(205),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(205),
    [aux_sym__rekey_limit_token1] = ACTIONS(205),
    [aux_sym__remote_command_token1] = ACTIONS(205),
    [aux_sym__remote_forward_token1] = ACTIONS(205),
    [aux_sym__request_tty_token1] = ACTIONS(205),
    [aux_sym__required_rsa_size_token1] = ACTIONS(205),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(205),
    [aux_sym__security_key_provider_token1] = ACTIONS(205),
    [aux_sym__send_env_token1] = ACTIONS(205),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(205),
    [aux_sym__server_alive_interval_token1] = ACTIONS(205),
    [aux_sym__session_type_token1] = ACTIONS(205),
    [aux_sym__stdin_null_token1] = ACTIONS(205),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(205),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(205),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(205),
    [aux_sym__syslog_facility_token1] = ACTIONS(205),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(205),
    [aux_sym__tag_token1] = ACTIONS(205),
    [aux_sym__tunnel_token1] = ACTIONS(836),
    [aux_sym__tunnel_device_token1] = ACTIONS(205),
    [aux_sym__update_host_keys_token1] = ACTIONS(205),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(205),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(205),
    [aux_sym__visual_host_key_token1] = ACTIONS(205),
    [aux_sym__xauth_location_token1] = ACTIONS(205),
    [sym_comment] = ACTIONS(205),
    [sym__space] = ACTIONS(205),
    [sym__eol] = ACTIONS(205),
  },
  [29] = {
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
    [aux_sym__dynamic_forward_token1] = ACTIONS(838),
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
    [aux_sym__include_token1] = ACTIONS(838),
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
  [30] = {
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
  [31] = {
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
  [32] = {
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
  [33] = {
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
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(854),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(854),
    [aux_sym__visual_host_key_token1] = ACTIONS(854),
    [aux_sym__xauth_location_token1] = ACTIONS(854),
    [sym_comment] = ACTIONS(854),
    [sym__space] = ACTIONS(854),
    [sym__eol] = ACTIONS(854),
  },
  [34] = {
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
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(858),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(858),
    [aux_sym__visual_host_key_token1] = ACTIONS(858),
    [aux_sym__xauth_location_token1] = ACTIONS(858),
    [sym_comment] = ACTIONS(858),
    [sym__space] = ACTIONS(858),
    [sym__eol] = ACTIONS(858),
  },
  [35] = {
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
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(862),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(862),
    [aux_sym__visual_host_key_token1] = ACTIONS(862),
    [aux_sym__xauth_location_token1] = ACTIONS(862),
    [sym_comment] = ACTIONS(862),
    [sym__space] = ACTIONS(862),
    [sym__eol] = ACTIONS(862),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(866), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(868), 1,
      aux_sym__all_token1,
    ACTIONS(870), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(872), 1,
      aux_sym__match_final_token1,
    ACTIONS(874), 1,
      aux_sym__match_exec_token1,
    ACTIONS(876), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(878), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(880), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(882), 1,
      aux_sym__match_user_token1,
    ACTIONS(884), 1,
      aux_sym__match_localuser_token1,
    STATE(309), 1,
      sym_condition,
    STATE(540), 1,
      sym__all,
    STATE(545), 1,
      sym__match_canonical,
    STATE(554), 1,
      sym__match_final,
    STATE(556), 1,
      sym__match_exec,
    STATE(560), 1,
      sym__match_localnetwork,
    STATE(563), 1,
      sym__match_host,
    STATE(584), 1,
      sym__match_originalhost,
    STATE(605), 1,
      sym__match_tagged,
    STATE(606), 1,
      sym__match_user,
    STATE(630), 1,
      sym__match_localuser,
  [64] = 20,
    ACTIONS(866), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(870), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(872), 1,
      aux_sym__match_final_token1,
    ACTIONS(874), 1,
      aux_sym__match_exec_token1,
    ACTIONS(876), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(878), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(880), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(882), 1,
      aux_sym__match_user_token1,
    ACTIONS(884), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(886), 1,
      sym__eol,
    STATE(545), 1,
      sym__match_canonical,
    STATE(554), 1,
      sym__match_final,
    STATE(556), 1,
      sym__match_exec,
    STATE(560), 1,
      sym__match_localnetwork,
    STATE(563), 1,
      sym__match_host,
    STATE(584), 1,
      sym__match_originalhost,
    STATE(605), 1,
      sym__match_tagged,
    STATE(606), 1,
      sym__match_user,
    STATE(614), 1,
      sym_condition,
    STATE(630), 1,
      sym__match_localuser,
  [125] = 20,
    ACTIONS(866), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(870), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(872), 1,
      aux_sym__match_final_token1,
    ACTIONS(874), 1,
      aux_sym__match_exec_token1,
    ACTIONS(876), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(878), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(880), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(882), 1,
      aux_sym__match_user_token1,
    ACTIONS(884), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(888), 1,
      sym__eol,
    STATE(545), 1,
      sym__match_canonical,
    STATE(554), 1,
      sym__match_final,
    STATE(556), 1,
      sym__match_exec,
    STATE(560), 1,
      sym__match_localnetwork,
    STATE(563), 1,
      sym__match_host,
    STATE(584), 1,
      sym__match_originalhost,
    STATE(605), 1,
      sym__match_tagged,
    STATE(606), 1,
      sym__match_user,
    STATE(614), 1,
      sym_condition,
    STATE(630), 1,
      sym__match_localuser,
  [186] = 19,
    ACTIONS(866), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(870), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(872), 1,
      aux_sym__match_final_token1,
    ACTIONS(874), 1,
      aux_sym__match_exec_token1,
    ACTIONS(876), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(878), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(880), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(882), 1,
      aux_sym__match_user_token1,
    ACTIONS(884), 1,
      aux_sym__match_localuser_token1,
    STATE(545), 1,
      sym__match_canonical,
    STATE(554), 1,
      sym__match_final,
    STATE(556), 1,
      sym__match_exec,
    STATE(560), 1,
      sym__match_localnetwork,
    STATE(563), 1,
      sym__match_host,
    STATE(584), 1,
      sym__match_originalhost,
    STATE(605), 1,
      sym__match_tagged,
    STATE(606), 1,
      sym__match_user,
    STATE(614), 1,
      sym_condition,
    STATE(630), 1,
      sym__match_localuser,
  [244] = 13,
    ACTIONS(890), 1,
      aux_sym__match_exec_token2,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(900), 1,
      sym__number,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(691), 1,
      sym_number,
    STATE(695), 1,
      sym__forward_value_inner,
    STATE(775), 1,
      sym__string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
    STATE(785), 2,
      sym__forward_value1,
      sym__file_string,
  [286] = 13,
    ACTIONS(890), 1,
      aux_sym__match_exec_token2,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(900), 1,
      sym__number,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(691), 1,
      sym_number,
    STATE(695), 1,
      sym__forward_value_inner,
    STATE(775), 1,
      sym__string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
    STATE(645), 2,
      sym__forward_value1,
      sym__file_string,
  [328] = 11,
    ACTIONS(890), 1,
      aux_sym__match_exec_token2,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(664), 1,
      sym__forward_value_inner,
    STATE(775), 1,
      sym__string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
    STATE(665), 2,
      sym__forward_value2,
      sym__file_string,
  [364] = 12,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(904), 1,
      aux_sym__match_exec_token2,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(908), 1,
      aux_sym__match_exec_token3,
    ACTIONS(910), 1,
      aux_sym__file_token_token1,
    ACTIONS(912), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(77), 1,
      aux_sym__file_string_repeat2,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(493), 1,
      aux_sym__string_repeat2,
    STATE(775), 1,
      sym__string,
    STATE(803), 1,
      sym__forward_value_inner,
    STATE(197), 2,
      sym__file_token,
      sym_variable,
  [402] = 11,
    ACTIONS(890), 1,
      aux_sym__match_exec_token2,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(664), 1,
      sym__forward_value_inner,
    STATE(775), 1,
      sym__string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
    STATE(686), 2,
      sym__forward_value2,
      sym__file_string,
  [438] = 12,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(904), 1,
      aux_sym__match_exec_token2,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(908), 1,
      aux_sym__match_exec_token3,
    ACTIONS(910), 1,
      aux_sym__file_token_token1,
    ACTIONS(912), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(77), 1,
      aux_sym__file_string_repeat2,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(493), 1,
      aux_sym__string_repeat2,
    STATE(775), 1,
      sym__string,
    STATE(779), 1,
      sym__forward_value_inner,
    STATE(197), 2,
      sym__file_token,
      sym_variable,
  [476] = 10,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(914), 1,
      aux_sym__match_exec_token2,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
    ACTIONS(920), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(709), 1,
      sym__var_value,
    STATE(710), 1,
      sym__file_string,
    ACTIONS(918), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
  [509] = 7,
    ACTIONS(922), 1,
      aux_sym__match_exec_token2,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(760), 1,
      sym__file_pattern_vars,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(926), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [534] = 6,
    ACTIONS(930), 1,
      aux_sym__match_exec_token2,
    ACTIONS(936), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(48), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(939), 2,
      sym__space,
      sym__eol,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(933), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [557] = 6,
    ACTIONS(922), 1,
      aux_sym__match_exec_token2,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(48), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(941), 2,
      sym__space,
      sym__eol,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(926), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [580] = 7,
    ACTIONS(922), 1,
      aux_sym__match_exec_token2,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(746), 1,
      sym__file_pattern_vars,
    STATE(86), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(926), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [605] = 9,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(900), 1,
      sym__number,
    ACTIONS(904), 1,
      aux_sym__match_exec_token2,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(644), 1,
      sym__dynamic_forward_value,
    STATE(742), 1,
      sym_number,
    STATE(743), 1,
      sym__forward_value_inner,
    STATE(775), 1,
      sym__string,
  [633] = 6,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      aux_sym__match_exec_token3,
    ACTIONS(951), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(55), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(132), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(949), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [655] = 7,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    ACTIONS(955), 1,
      anon_sym_DOLLAR,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(728), 1,
      sym__var_value,
    ACTIONS(957), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(727), 2,
      sym__string,
      sym__boolean,
  [679] = 8,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(914), 1,
      aux_sym__match_exec_token2,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      anon_sym_none,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(693), 1,
      sym__file_string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
  [705] = 6,
    ACTIONS(961), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      aux_sym__match_exec_token3,
    ACTIONS(969), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(55), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(132), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(966), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [727] = 9,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(900), 1,
      sym__number,
    ACTIONS(904), 1,
      aux_sym__match_exec_token2,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(359), 1,
      sym__dynamic_forward_value,
    STATE(742), 1,
      sym_number,
    STATE(743), 1,
      sym__forward_value_inner,
    STATE(775), 1,
      sym__string,
  [755] = 8,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(914), 1,
      aux_sym__match_exec_token2,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
    ACTIONS(972), 1,
      anon_sym_none,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(466), 1,
      sym__file_string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
  [781] = 5,
    ACTIONS(947), 1,
      aux_sym__match_exec_token3,
    ACTIONS(951), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(52), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(132), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(949), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [800] = 6,
    ACTIONS(974), 1,
      aux_sym__match_exec_token2,
    ACTIONS(977), 1,
      aux_sym__file_token_token1,
    ACTIONS(980), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(59), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(983), 2,
      sym__space,
      sym__eol,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
  [821] = 7,
    ACTIONS(985), 1,
      aux_sym__remote_command_token2,
    ACTIONS(987), 1,
      aux_sym__file_token_token1,
    ACTIONS(989), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(991), 1,
      sym__space,
    ACTIONS(993), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym__remote_command_repeat1,
    STATE(171), 2,
      sym__file_token,
      sym_variable,
  [844] = 7,
    ACTIONS(995), 1,
      anon_sym_BANG,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1003), 1,
      sym__eol,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(589), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [867] = 6,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    STATE(256), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1011), 2,
      sym__space,
      sym__eol,
  [888] = 7,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(914), 1,
      aux_sym__match_exec_token2,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(640), 1,
      sym__file_string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
  [911] = 8,
    ACTIONS(894), 1,
      anon_sym_STAR,
    ACTIONS(904), 1,
      aux_sym__match_exec_token2,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(1013), 1,
      aux_sym__match_exec_token3,
    STATE(315), 1,
      aux_sym__string_repeat1,
    STATE(493), 1,
      aux_sym__string_repeat2,
    STATE(775), 1,
      sym__string,
    STATE(807), 1,
      sym__forward_value_inner,
  [936] = 7,
    ACTIONS(995), 1,
      anon_sym_BANG,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1015), 1,
      sym__eol,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(589), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [959] = 7,
    ACTIONS(1017), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1020), 1,
      aux_sym__file_token_token1,
    ACTIONS(1023), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1026), 1,
      sym__space,
    ACTIONS(1028), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym__remote_command_repeat1,
    STATE(171), 2,
      sym__file_token,
      sym_variable,
  [982] = 6,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(914), 1,
      aux_sym__match_exec_token2,
    STATE(59), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1030), 2,
      sym__space,
      sym__eol,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
  [1003] = 7,
    ACTIONS(995), 1,
      anon_sym_BANG,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1032), 1,
      sym__eol,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(589), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1026] = 6,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    STATE(264), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1034), 2,
      sym__space,
      sym__eol,
  [1047] = 7,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1036), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1040), 1,
      anon_sym_none,
    STATE(115), 1,
      aux_sym__match_value_repeat1,
    STATE(337), 1,
      sym__cnames_map,
    STATE(338), 1,
      sym__pattern,
    ACTIONS(1038), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1070] = 7,
    ACTIONS(995), 1,
      anon_sym_BANG,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      sym__eol,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(589), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1093] = 7,
    ACTIONS(1044), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1047), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1050), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1053), 1,
      sym__space,
    ACTIONS(1055), 1,
      sym__eol,
    STATE(72), 1,
      aux_sym__hosts_string_repeat1,
    STATE(154), 2,
      sym__hosts_token,
      sym_variable,
  [1116] = 7,
    ACTIONS(896), 1,
      aux_sym__file_token_token1,
    ACTIONS(898), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(914), 1,
      aux_sym__match_exec_token2,
    ACTIONS(916), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__file_string_repeat1,
    STATE(708), 1,
      sym__file_string,
    STATE(163), 2,
      sym__file_token,
      sym_variable,
  [1139] = 7,
    ACTIONS(1057), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1059), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1061), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1063), 1,
      sym__space,
    ACTIONS(1065), 1,
      sym__eol,
    STATE(72), 1,
      aux_sym__hosts_string_repeat1,
    STATE(154), 2,
      sym__hosts_token,
      sym_variable,
  [1162] = 6,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1036), 1,
      aux_sym__match_exec_token2,
    STATE(115), 1,
      aux_sym__match_value_repeat1,
    STATE(338), 1,
      sym__pattern,
    STATE(627), 1,
      sym__cnames_map,
    ACTIONS(1038), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1182] = 6,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1067), 1,
      anon_sym_BANG,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(298), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1202] = 6,
    ACTIONS(910), 1,
      aux_sym__file_token_token1,
    ACTIONS(912), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1069), 1,
      anon_sym_DQUOTE,
    ACTIONS(1071), 1,
      aux_sym__match_exec_token3,
    STATE(81), 1,
      aux_sym__file_string_repeat2,
    STATE(197), 2,
      sym__file_token,
      sym_variable,
  [1222] = 4,
    ACTIONS(1075), 1,
      anon_sym_confirm,
    ACTIONS(1077), 1,
      sym__number,
    STATE(704), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1073), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1238] = 6,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1079), 1,
      anon_sym_BANG,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__match_value_repeat1,
    STATE(599), 1,
      sym__match_value,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1258] = 6,
    ACTIONS(1057), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1059), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1061), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(74), 1,
      aux_sym__hosts_string_repeat1,
    STATE(700), 1,
      sym__hosts_string,
    STATE(154), 2,
      sym__hosts_token,
      sym_variable,
  [1278] = 6,
    ACTIONS(1083), 1,
      anon_sym_DQUOTE,
    ACTIONS(1085), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1088), 1,
      aux_sym__file_token_token1,
    ACTIONS(1091), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(81), 1,
      aux_sym__file_string_repeat2,
    STATE(197), 2,
      sym__file_token,
      sym_variable,
  [1298] = 4,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1094), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1314] = 4,
    ACTIONS(1096), 1,
      aux_sym__match_exec_token2,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1101), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1099), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1330] = 6,
    ACTIONS(1104), 1,
      aux_sym_time_token1,
    ACTIONS(1106), 1,
      aux_sym_time_token2,
    ACTIONS(1108), 1,
      aux_sym_time_token3,
    ACTIONS(1110), 1,
      aux_sym_time_token4,
    ACTIONS(1112), 1,
      aux_sym_time_token5,
    ACTIONS(1114), 2,
      sym__space,
      sym__eol,
  [1350] = 6,
    ACTIONS(995), 1,
      anon_sym_BANG,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(589), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1370] = 2,
    ACTIONS(1116), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1118), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1382] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1122), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1394] = 6,
    ACTIONS(1124), 1,
      anon_sym_DQUOTE,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__match_value_repeat3,
    STATE(353), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1414] = 6,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1079), 1,
      anon_sym_BANG,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__match_value_repeat1,
    STATE(612), 1,
      sym__match_value,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1434] = 6,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1079), 1,
      anon_sym_BANG,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__match_value_repeat1,
    STATE(611), 1,
      sym__match_value,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1454] = 6,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1132), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym__match_value_repeat3,
    STATE(330), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1474] = 6,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1079), 1,
      anon_sym_BANG,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__match_value_repeat1,
    STATE(610), 1,
      sym__match_value,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1494] = 4,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1134), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1510] = 4,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(83), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1136), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1526] = 6,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1079), 1,
      anon_sym_BANG,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__match_value_repeat1,
    STATE(609), 1,
      sym__match_value,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1546] = 3,
    STATE(96), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1141), 2,
      sym__space,
      sym__eol,
    ACTIONS(1138), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1559] = 3,
    STATE(96), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1145), 2,
      sym__space,
      sym__eol,
    ACTIONS(1143), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1572] = 3,
    ACTIONS(1147), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1150), 1,
      anon_sym_COLON,
    ACTIONS(1152), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1585] = 6,
    ACTIONS(1154), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1156), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1158), 1,
      sym__space,
    ACTIONS(1160), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__proxy_string_repeat1,
    STATE(186), 1,
      sym__proxy_token,
  [1604] = 2,
    STATE(651), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1162), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [1615] = 5,
    ACTIONS(1164), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1166), 1,
      aux_sym__file_token_token1,
    STATE(114), 1,
      aux_sym__match_exec_repeat1,
    STATE(218), 1,
      sym__file_token,
    ACTIONS(1168), 2,
      sym__space,
      sym__eol,
  [1632] = 3,
    STATE(96), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1170), 2,
      sym__space,
      sym__eol,
    ACTIONS(1143), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1645] = 3,
    ACTIONS(1174), 1,
      anon_sym_auto,
    STATE(748), 1,
      sym__boolean,
    ACTIONS(1172), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1658] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1122), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1669] = 5,
    ACTIONS(1176), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1178), 1,
      aux_sym__hostname_token_token1,
    STATE(134), 1,
      aux_sym__hostname_string_repeat1,
    STATE(216), 1,
      sym__hostname_token,
    ACTIONS(1180), 2,
      sym__space,
      sym__eol,
  [1686] = 6,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    ACTIONS(955), 1,
      anon_sym_DOLLAR,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(638), 1,
      sym__string,
    STATE(639), 1,
      sym__var_value,
  [1705] = 4,
    ACTIONS(1182), 1,
      anon_sym_DASH,
    STATE(102), 1,
      aux_sym__send_env_value_repeat1,
    STATE(449), 1,
      sym__send_env_value,
    ACTIONS(1143), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1720] = 6,
    ACTIONS(1154), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1156), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1184), 1,
      anon_sym_none,
    STATE(99), 1,
      aux_sym__proxy_string_repeat1,
    STATE(186), 1,
      sym__proxy_token,
    STATE(667), 1,
      sym__proxy_string,
  [1739] = 4,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    STATE(125), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1186), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1754] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(699), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1771] = 4,
    ACTIONS(1188), 1,
      aux_sym__match_exec_token2,
    STATE(111), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1099), 2,
      sym__space,
      sym__eol,
    ACTIONS(1191), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1786] = 4,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      sym__permit_remote_open_value,
    ACTIONS(1196), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1198), 2,
      anon_sym_any,
      anon_sym_none,
  [1801] = 4,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    STATE(125), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1200), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1816] = 5,
    ACTIONS(1202), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1205), 1,
      aux_sym__file_token_token1,
    STATE(114), 1,
      aux_sym__match_exec_repeat1,
    STATE(218), 1,
      sym__file_token,
    ACTIONS(1208), 2,
      sym__space,
      sym__eol,
  [1833] = 4,
    ACTIONS(1036), 1,
      aux_sym__match_exec_token2,
    STATE(122), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1038), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1094), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1848] = 5,
    ACTIONS(910), 1,
      aux_sym__file_token_token1,
    ACTIONS(912), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1071), 1,
      aux_sym__match_exec_token3,
    STATE(77), 1,
      aux_sym__file_string_repeat2,
    STATE(197), 2,
      sym__file_token,
      sym_variable,
  [1865] = 5,
    ACTIONS(985), 1,
      aux_sym__remote_command_token2,
    ACTIONS(987), 1,
      aux_sym__file_token_token1,
    ACTIONS(989), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(60), 1,
      aux_sym__remote_command_repeat1,
    STATE(171), 2,
      sym__file_token,
      sym_variable,
  [1882] = 4,
    ACTIONS(1182), 1,
      anon_sym_DASH,
    STATE(102), 1,
      aux_sym__send_env_value_repeat1,
    STATE(687), 1,
      sym__send_env_value,
    ACTIONS(1143), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1897] = 4,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    STATE(111), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1094), 2,
      sym__space,
      sym__eol,
  [1912] = 2,
    STATE(622), 1,
      sym__boolean,
    ACTIONS(1210), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [1923] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(472), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1940] = 4,
    ACTIONS(1212), 1,
      aux_sym__match_exec_token2,
    STATE(122), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1099), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1215), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1955] = 5,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(82), 1,
      aux_sym__match_value_repeat1,
    STATE(263), 1,
      sym__pattern,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1972] = 6,
    ACTIONS(1218), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1221), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1224), 1,
      sym__space,
    ACTIONS(1226), 1,
      sym__eol,
    STATE(124), 1,
      aux_sym__proxy_string_repeat1,
    STATE(186), 1,
      sym__proxy_token,
  [1991] = 4,
    ACTIONS(1230), 1,
      aux_sym__match_exec_token3,
    STATE(125), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1228), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1233), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2006] = 4,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE,
    STATE(678), 1,
      sym__permit_remote_open_value,
    ACTIONS(1196), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1236), 2,
      anon_sym_any,
      anon_sym_none,
  [2021] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(625), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2038] = 5,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1036), 1,
      aux_sym__match_exec_token2,
    STATE(115), 1,
      aux_sym__match_value_repeat1,
    STATE(225), 1,
      sym__pattern,
    ACTIONS(1038), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2055] = 5,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(82), 1,
      aux_sym__match_value_repeat1,
    STATE(226), 1,
      sym__pattern,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2072] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(331), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2089] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(755), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2106] = 2,
    ACTIONS(1240), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1238), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2117] = 4,
    ACTIONS(1242), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(190), 1,
      sym__log_verbose_value,
    ACTIONS(1244), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2132] = 5,
    ACTIONS(1246), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1249), 1,
      aux_sym__hostname_token_token1,
    STATE(134), 1,
      aux_sym__hostname_string_repeat1,
    STATE(216), 1,
      sym__hostname_token,
    ACTIONS(1252), 2,
      sym__space,
      sym__eol,
  [2149] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(744), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2166] = 5,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(82), 1,
      aux_sym__match_value_repeat1,
    STATE(225), 1,
      sym__pattern,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2183] = 6,
    ACTIONS(1176), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1178), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(1254), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym__hostname_string_repeat1,
    STATE(216), 1,
      sym__hostname_token,
    STATE(713), 1,
      sym__hostname_string,
  [2202] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(393), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2219] = 2,
    ACTIONS(1256), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1258), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2230] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(656), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2247] = 5,
    ACTIONS(997), 1,
      aux_sym__match_exec_token2,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_value_repeat1,
    STATE(707), 1,
      sym__pattern,
    ACTIONS(1001), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2264] = 5,
    ACTIONS(1260), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1263), 1,
      sym_token,
    ACTIONS(1266), 1,
      sym__space,
    ACTIONS(1268), 1,
      sym__eol,
    STATE(142), 1,
      aux_sym__token_string_repeat1,
  [2280] = 5,
    ACTIONS(1270), 1,
      anon_sym_DQUOTE,
    ACTIONS(1272), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1275), 1,
      aux_sym__hostname_token_token1,
    STATE(143), 1,
      aux_sym__hostname_string_repeat2,
    STATE(492), 1,
      sym__hostname_token,
  [2296] = 4,
    ACTIONS(1278), 1,
      aux_sym__match_exec_token3,
    STATE(150), 1,
      aux_sym__match_value_repeat3,
    STATE(730), 1,
      sym__log_verbose_quoted,
    ACTIONS(1280), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2310] = 4,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1282), 1,
      anon_sym_BANG,
    STATE(109), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2324] = 5,
    ACTIONS(1284), 1,
      anon_sym_DQUOTE,
    ACTIONS(1286), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1288), 1,
      aux_sym__hostname_token_token1,
    STATE(143), 1,
      aux_sym__hostname_string_repeat2,
    STATE(492), 1,
      sym__hostname_token,
  [2340] = 3,
    ACTIONS(1292), 1,
      anon_sym_COLON,
    STATE(152), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1290), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2352] = 2,
    ACTIONS(1296), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1294), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2362] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1122), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2372] = 4,
    ACTIONS(1278), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1298), 1,
      anon_sym_COLON,
    STATE(155), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1280), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2386] = 3,
    STATE(173), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(421), 1,
      sym__log_verbose_value,
    ACTIONS(1244), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2398] = 3,
    ACTIONS(1303), 1,
      anon_sym_COLON,
    STATE(152), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1300), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2410] = 2,
    ACTIONS(1256), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1258), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2420] = 2,
    ACTIONS(1305), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1307), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2430] = 4,
    ACTIONS(1228), 1,
      anon_sym_COLON,
    ACTIONS(1309), 1,
      aux_sym__match_exec_token3,
    STATE(155), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1312), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2444] = 2,
    ACTIONS(1120), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1122), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2454] = 1,
    ACTIONS(1315), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2462] = 4,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1317), 1,
      anon_sym_BANG,
    STATE(93), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2476] = 5,
    ACTIONS(1319), 1,
      anon_sym_DQUOTE,
    ACTIONS(1321), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1323), 1,
      aux_sym__file_token_token1,
    STATE(172), 1,
      aux_sym__match_exec_repeat2,
    STATE(383), 1,
      sym__file_token,
  [2492] = 4,
    ACTIONS(1278), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1325), 1,
      anon_sym_COLON,
    STATE(155), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1280), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2506] = 5,
    ACTIONS(1164), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1166), 1,
      aux_sym__file_token_token1,
    ACTIONS(1327), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym__match_exec_repeat1,
    STATE(218), 1,
      sym__file_token,
  [2522] = 2,
    ACTIONS(1256), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1258), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2532] = 2,
    ACTIONS(1329), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1152), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2542] = 2,
    ACTIONS(1120), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1122), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2552] = 4,
    ACTIONS(1228), 1,
      anon_sym_DQUOTE,
    ACTIONS(1331), 1,
      aux_sym__match_exec_token3,
    STATE(165), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1334), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2566] = 4,
    ACTIONS(1337), 1,
      anon_sym_DQUOTE,
    ACTIONS(1339), 1,
      aux_sym__match_exec_token3,
    STATE(165), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1341), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2580] = 3,
    ACTIONS(1345), 1,
      sym__var_name,
    STATE(455), 1,
      sym__set_env_value,
    ACTIONS(1343), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [2592] = 4,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1347), 1,
      anon_sym_BANG,
    STATE(88), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2606] = 1,
    ACTIONS(1349), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [2614] = 3,
    ACTIONS(1077), 1,
      sym__number,
    ACTIONS(1351), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(747), 2,
      sym__boolean,
      sym_time,
  [2626] = 2,
    ACTIONS(1353), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1355), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2636] = 5,
    ACTIONS(1357), 1,
      anon_sym_DQUOTE,
    ACTIONS(1359), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1362), 1,
      aux_sym__file_token_token1,
    STATE(172), 1,
      aux_sym__match_exec_repeat2,
    STATE(383), 1,
      sym__file_token,
  [2652] = 3,
    ACTIONS(1365), 1,
      anon_sym_COLON,
    STATE(152), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1290), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2664] = 4,
    ACTIONS(1278), 1,
      aux_sym__match_exec_token3,
    STATE(150), 1,
      aux_sym__match_value_repeat3,
    STATE(481), 1,
      sym__log_verbose_quoted,
    ACTIONS(1280), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2678] = 2,
    STATE(617), 1,
      sym__boolean,
    ACTIONS(1367), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2688] = 2,
    STATE(643), 1,
      sym__boolean,
    ACTIONS(1369), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2698] = 5,
    ACTIONS(1371), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1373), 1,
      sym_token,
    ACTIONS(1375), 1,
      sym__space,
    ACTIONS(1377), 1,
      sym__eol,
    STATE(142), 1,
      aux_sym__token_string_repeat1,
  [2714] = 3,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1382), 2,
      sym__space,
      sym__eol,
  [2725] = 3,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1386), 2,
      sym__space,
      sym__eol,
  [2736] = 2,
    STATE(97), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1143), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2745] = 3,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1386), 2,
      sym__space,
      sym__eol,
  [2756] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(646), 1,
      sym__string,
  [2769] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1390), 2,
      sym__space,
      sym__eol,
  [2780] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1392), 2,
      sym__space,
      sym__eol,
  [2791] = 3,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1396), 2,
      sym__space,
      sym__eol,
  [2802] = 2,
    ACTIONS(1398), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1400), 2,
      aux_sym__proxy_token_token1,
      sym__eol,
  [2811] = 3,
    ACTIONS(1402), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1404), 2,
      sym__space,
      sym__eol,
  [2822] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1408), 2,
      sym__space,
      sym__eol,
  [2833] = 3,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1396), 2,
      sym__space,
      sym__eol,
  [2844] = 3,
    ACTIONS(1410), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1412), 2,
      sym__space,
      sym__eol,
  [2855] = 3,
    ACTIONS(1414), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    ACTIONS(1417), 2,
      sym__space,
      sym__eol,
  [2866] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1390), 2,
      sym__space,
      sym__eol,
  [2877] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1419), 2,
      sym__space,
      sym__eol,
  [2888] = 2,
    ACTIONS(1296), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1294), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2897] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1419), 2,
      sym__space,
      sym__eol,
  [2908] = 2,
    STATE(147), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1421), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2917] = 2,
    ACTIONS(1425), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1423), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2926] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(696), 1,
      sym__string,
  [2939] = 3,
    ACTIONS(1429), 1,
      sym__number,
    STATE(658), 1,
      sym_number,
    ACTIONS(1427), 2,
      anon_sym_none,
      sym_ipqos,
  [2950] = 2,
    ACTIONS(1431), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1433), 2,
      sym_token,
      sym__eol,
  [2959] = 3,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1437), 2,
      sym__space,
      sym__eol,
  [2970] = 3,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1437), 2,
      sym__space,
      sym__eol,
  [2981] = 3,
    ACTIONS(1439), 1,
      anon_sym_DQUOTE,
    ACTIONS(1442), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1423), 2,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2992] = 3,
    ACTIONS(1410), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1445), 2,
      sym__space,
      sym__eol,
  [3003] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1450), 2,
      sym__space,
      sym__eol,
  [3014] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1452), 2,
      sym__space,
      sym__eol,
  [3025] = 3,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1454), 2,
      sym__space,
      sym__eol,
  [3036] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1452), 2,
      sym__space,
      sym__eol,
  [3047] = 3,
    ACTIONS(1402), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1456), 2,
      sym__space,
      sym__eol,
  [3058] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1458), 2,
      sym__space,
      sym__eol,
  [3069] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1458), 2,
      sym__space,
      sym__eol,
  [3080] = 2,
    ACTIONS(1462), 1,
      sym_cipher,
    ACTIONS(1460), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3089] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(689), 1,
      sym__string,
  [3102] = 1,
    ACTIONS(1464), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3109] = 4,
    ACTIONS(1286), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1288), 1,
      aux_sym__hostname_token_token1,
    STATE(146), 1,
      aux_sym__hostname_string_repeat2,
    STATE(492), 1,
      sym__hostname_token,
  [3122] = 2,
    ACTIONS(1466), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1468), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [3131] = 3,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(69), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3142] = 2,
    ACTIONS(1470), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1472), 3,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [3151] = 4,
    ACTIONS(1321), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1323), 1,
      aux_sym__file_token_token1,
    STATE(159), 1,
      aux_sym__match_exec_repeat2,
    STATE(383), 1,
      sym__file_token,
  [3164] = 3,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1476), 2,
      sym__space,
      sym__eol,
  [3175] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1478), 2,
      sym__space,
      sym__eol,
  [3186] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1480), 2,
      sym__space,
      sym__eol,
  [3197] = 4,
    ACTIONS(1482), 1,
      aux_sym_time_token2,
    ACTIONS(1484), 1,
      aux_sym_time_token3,
    ACTIONS(1486), 1,
      aux_sym_time_token4,
    ACTIONS(1488), 1,
      aux_sym_time_token5,
  [3210] = 3,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1490), 2,
      sym__space,
      sym__eol,
  [3221] = 1,
    ACTIONS(1450), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3228] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1494), 2,
      sym__space,
      sym__eol,
  [3239] = 3,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1496), 2,
      sym__space,
      sym__eol,
  [3250] = 3,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1501), 2,
      sym__space,
      sym__eol,
  [3261] = 3,
    ACTIONS(1384), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1503), 2,
      sym__space,
      sym__eol,
  [3272] = 3,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1505), 2,
      sym__space,
      sym__eol,
  [3283] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(373), 1,
      sym__string,
  [3296] = 3,
    ACTIONS(1507), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1510), 2,
      sym__space,
      sym__eol,
  [3307] = 3,
    ACTIONS(1512), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    ACTIONS(1514), 2,
      sym__space,
      sym__eol,
  [3318] = 2,
    ACTIONS(1518), 1,
      sym_key_sig,
    ACTIONS(1516), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3327] = 4,
    ACTIONS(1520), 1,
      aux_sym__sep_token1,
    ACTIONS(1522), 1,
      sym__space,
    ACTIONS(1524), 1,
      sym__eol,
    STATE(551), 1,
      sym__sep,
  [3340] = 2,
    ACTIONS(1528), 1,
      sym_key_sig,
    ACTIONS(1526), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3349] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(715), 1,
      sym__string,
  [3362] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1530), 2,
      sym__space,
      sym__eol,
  [3373] = 4,
    ACTIONS(1532), 1,
      aux_sym__sep_token1,
    ACTIONS(1534), 1,
      sym__space,
    ACTIONS(1536), 1,
      sym__eol,
    STATE(557), 1,
      sym__sep,
  [3386] = 3,
    ACTIONS(1538), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1541), 2,
      sym__space,
      sym__eol,
  [3397] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1543), 2,
      sym__space,
      sym__eol,
  [3408] = 3,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1545), 2,
      sym__space,
      sym__eol,
  [3419] = 3,
    ACTIONS(1547), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1550), 2,
      sym__space,
      sym__eol,
  [3430] = 3,
    ACTIONS(1429), 1,
      sym__number,
    STATE(706), 1,
      sym_number,
    ACTIONS(1552), 2,
      anon_sym_none,
      sym_ipqos,
  [3441] = 3,
    ACTIONS(1278), 1,
      aux_sym__match_exec_token3,
    STATE(160), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1280), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3452] = 2,
    ACTIONS(1556), 1,
      sym_kex,
    ACTIONS(1554), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3461] = 3,
    ACTIONS(1558), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1561), 2,
      sym__space,
      sym__eol,
  [3472] = 4,
    ACTIONS(1371), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1373), 1,
      sym_token,
    STATE(177), 1,
      aux_sym__token_string_repeat1,
    STATE(698), 1,
      sym__token_string,
  [3485] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1563), 2,
      sym__space,
      sym__eol,
  [3496] = 3,
    ACTIONS(1339), 1,
      aux_sym__match_exec_token3,
    STATE(166), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1341), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3507] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(608), 1,
      sym__string,
  [3520] = 2,
    ACTIONS(1567), 1,
      sym_mac,
    ACTIONS(1565), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3529] = 3,
    ACTIONS(1569), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1572), 2,
      sym__space,
      sym__eol,
  [3540] = 3,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1574), 2,
      sym__space,
      sym__eol,
  [3551] = 3,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    STATE(91), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3562] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1576), 2,
      sym__space,
      sym__eol,
  [3573] = 3,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1578), 2,
      sym__space,
      sym__eol,
  [3584] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(670), 1,
      sym__string,
  [3597] = 3,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1578), 2,
      sym__space,
      sym__eol,
  [3608] = 3,
    ACTIONS(1580), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1584), 1,
      aux_sym__proxy_jump_arg_token1,
    ACTIONS(1582), 2,
      anon_sym_none,
      aux_sym__proxy_jump_arg_token2,
  [3619] = 2,
    ACTIONS(1588), 1,
      sym_key_sig,
    ACTIONS(1586), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3628] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1590), 2,
      sym__space,
      sym__eol,
  [3639] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1592), 2,
      sym__space,
      sym__eol,
  [3650] = 3,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1594), 2,
      sym__space,
      sym__eol,
  [3661] = 3,
    ACTIONS(1005), 1,
      aux_sym__match_exec_token2,
    STATE(94), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1009), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3672] = 3,
    ACTIONS(1596), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1599), 2,
      sym__space,
      sym__eol,
  [3683] = 3,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1601), 2,
      sym__space,
      sym__eol,
  [3694] = 3,
    ACTIONS(1603), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1606), 2,
      sym__space,
      sym__eol,
  [3705] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1608), 2,
      sym__space,
      sym__eol,
  [3716] = 3,
    ACTIONS(1126), 1,
      aux_sym__match_exec_token3,
    STATE(113), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1130), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3727] = 4,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      aux_sym__match_exec_token2,
    STATE(233), 1,
      aux_sym__string_repeat1,
    STATE(618), 1,
      sym__string,
  [3740] = 2,
    ACTIONS(1296), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1294), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3749] = 2,
    STATE(616), 1,
      sym__boolean,
    ACTIONS(1610), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3758] = 2,
    ACTIONS(1120), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1122), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3767] = 2,
    STATE(615), 1,
      sym__boolean,
    ACTIONS(1612), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3776] = 2,
    STATE(761), 1,
      sym__boolean,
    ACTIONS(1614), 2,
      anon_sym_yes,
      anon_sym_no,
  [3784] = 3,
    ACTIONS(1616), 1,
      sym__space,
    ACTIONS(1618), 1,
      sym__eol,
    STATE(440), 1,
      aux_sym__dynamic_forward_repeat1,
  [3794] = 3,
    ACTIONS(1620), 1,
      aux_sym__sep_token1,
    ACTIONS(1622), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [3804] = 2,
    STATE(626), 1,
      sym__boolean,
    ACTIONS(1624), 2,
      anon_sym_yes,
      anon_sym_no,
  [3812] = 3,
    ACTIONS(1626), 1,
      aux_sym__sep_token1,
    ACTIONS(1628), 1,
      sym__space,
    STATE(198), 1,
      sym__sep,
  [3822] = 3,
    ACTIONS(1630), 1,
      aux_sym__sep_token1,
    ACTIONS(1632), 1,
      sym__space,
    STATE(78), 1,
      sym__sep,
  [3832] = 2,
    STATE(619), 1,
      sym__boolean,
    ACTIONS(1634), 2,
      anon_sym_yes,
      anon_sym_no,
  [3840] = 3,
    ACTIONS(1636), 1,
      anon_sym_none,
    ACTIONS(1638), 1,
      sym__number,
    STATE(649), 1,
      sym_bytes,
  [3850] = 2,
    STATE(657), 1,
      sym__boolean,
    ACTIONS(1640), 2,
      anon_sym_yes,
      anon_sym_no,
  [3858] = 3,
    ACTIONS(1429), 1,
      sym__number,
    ACTIONS(1642), 1,
      anon_sym_any,
    STATE(464), 1,
      sym_number,
  [3868] = 3,
    ACTIONS(1644), 1,
      aux_sym__sep_token1,
    ACTIONS(1646), 1,
      sym__space,
    STATE(404), 1,
      sym__sep,
  [3878] = 3,
    ACTIONS(1648), 1,
      aux_sym__sep_token1,
    ACTIONS(1650), 1,
      sym__space,
    STATE(402), 1,
      sym__sep,
  [3888] = 3,
    ACTIONS(1652), 1,
      aux_sym__sep_token1,
    ACTIONS(1654), 1,
      sym__space,
    STATE(135), 1,
      sym__sep,
  [3898] = 2,
    STATE(613), 1,
      sym__boolean,
    ACTIONS(1656), 2,
      anon_sym_yes,
      anon_sym_no,
  [3906] = 3,
    ACTIONS(1658), 1,
      aux_sym__sep_token1,
    ACTIONS(1660), 1,
      sym__space,
    STATE(131), 1,
      sym__sep,
  [3916] = 2,
    STATE(717), 1,
      sym__boolean,
    ACTIONS(1662), 2,
      anon_sym_yes,
      anon_sym_no,
  [3924] = 3,
    ACTIONS(1664), 1,
      aux_sym__sep_token1,
    ACTIONS(1666), 1,
      sym__space,
    STATE(130), 1,
      sym__sep,
  [3934] = 3,
    ACTIONS(1668), 1,
      aux_sym__sep_token1,
    ACTIONS(1670), 1,
      sym__space,
    STATE(401), 1,
      sym__sep,
  [3944] = 2,
    STATE(673), 1,
      sym__boolean,
    ACTIONS(1672), 2,
      anon_sym_yes,
      anon_sym_no,
  [3952] = 2,
    STATE(674), 1,
      sym__boolean,
    ACTIONS(1674), 2,
      anon_sym_yes,
      anon_sym_no,
  [3960] = 3,
    ACTIONS(1676), 1,
      aux_sym__sep_token1,
    ACTIONS(1678), 1,
      sym__space,
    STATE(276), 1,
      sym__sep,
  [3970] = 2,
    STATE(676), 1,
      sym__boolean,
    ACTIONS(1680), 2,
      anon_sym_yes,
      anon_sym_no,
  [3978] = 3,
    ACTIONS(1682), 1,
      sym__space,
    ACTIONS(1684), 1,
      sym__eol,
    STATE(477), 1,
      aux_sym_host_declaration_repeat1,
  [3988] = 3,
    ACTIONS(1686), 1,
      aux_sym__sep_token1,
    ACTIONS(1688), 1,
      sym__space,
    STATE(702), 1,
      sym__sep,
  [3998] = 3,
    ACTIONS(1690), 1,
      aux_sym__sep_token1,
    ACTIONS(1692), 1,
      sym__space,
    STATE(79), 1,
      sym__sep,
  [4008] = 2,
    STATE(705), 1,
      sym__boolean,
    ACTIONS(1694), 2,
      anon_sym_yes,
      anon_sym_no,
  [4016] = 2,
    STATE(711), 1,
      sym__boolean,
    ACTIONS(1696), 2,
      anon_sym_yes,
      anon_sym_no,
  [4024] = 3,
    ACTIONS(1698), 1,
      aux_sym__sep_token1,
    ACTIONS(1700), 1,
      sym__space,
    STATE(161), 1,
      sym__sep,
  [4034] = 3,
    ACTIONS(1702), 1,
      aux_sym__sep_token1,
    ACTIONS(1704), 1,
      sym__space,
    STATE(483), 1,
      sym__sep,
  [4044] = 3,
    ACTIONS(1706), 1,
      aux_sym__sep_token1,
    ACTIONS(1708), 1,
      sym__space,
    STATE(95), 1,
      sym__sep,
  [4054] = 3,
    ACTIONS(1710), 1,
      aux_sym__sep_token1,
    ACTIONS(1712), 1,
      sym__space,
    STATE(92), 1,
      sym__sep,
  [4064] = 3,
    ACTIONS(1714), 1,
      aux_sym__sep_token1,
    ACTIONS(1716), 1,
      sym__space,
    STATE(90), 1,
      sym__sep,
  [4074] = 3,
    ACTIONS(1718), 1,
      aux_sym__sep_token1,
    ACTIONS(1720), 1,
      sym__space,
    STATE(89), 1,
      sym__sep,
  [4084] = 3,
    ACTIONS(1722), 1,
      sym__space,
    ACTIONS(1724), 1,
      sym__eol,
    STATE(490), 1,
      aux_sym_match_declaration_repeat1,
  [4094] = 3,
    ACTIONS(1726), 1,
      aux_sym__sep_token1,
    ACTIONS(1728), 1,
      sym__space,
    STATE(70), 1,
      sym__sep,
  [4104] = 3,
    ACTIONS(1730), 1,
      aux_sym__sep_token1,
    ACTIONS(1732), 1,
      sym__space,
    STATE(398), 1,
      sym__sep,
  [4114] = 3,
    ACTIONS(1417), 1,
      anon_sym_COLON,
    ACTIONS(1734), 1,
      aux_sym__match_exec_token2,
    STATE(312), 1,
      aux_sym__string_repeat1,
  [4124] = 3,
    ACTIONS(1737), 1,
      aux_sym__sep_token1,
    ACTIONS(1739), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [4134] = 3,
    ACTIONS(1741), 1,
      aux_sym__sep_token1,
    ACTIONS(1743), 1,
      sym__space,
    STATE(391), 1,
      sym__sep,
  [4144] = 3,
    ACTIONS(904), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1514), 1,
      anon_sym_COLON,
    STATE(312), 1,
      aux_sym__string_repeat1,
  [4154] = 3,
    ACTIONS(1745), 1,
      aux_sym__sep_token1,
    ACTIONS(1747), 1,
      sym__space,
    STATE(212), 1,
      sym__sep,
  [4164] = 3,
    ACTIONS(1749), 1,
      aux_sym__sep_token1,
    ACTIONS(1751), 1,
      sym__space,
    STATE(388), 1,
      sym__sep,
  [4174] = 2,
    ACTIONS(1753), 1,
      sym__number,
    ACTIONS(1755), 2,
      sym__space,
      sym__eol,
  [4182] = 3,
    ACTIONS(1757), 1,
      aux_sym__sep_token1,
    ACTIONS(1759), 1,
      sym__space,
    STATE(387), 1,
      sym__sep,
  [4192] = 1,
    ACTIONS(1150), 3,
      aux_sym__match_exec_token2,
      sym__space,
      sym__eol,
  [4198] = 2,
    ACTIONS(1761), 1,
      sym__number,
    ACTIONS(1763), 2,
      sym__space,
      sym__eol,
  [4206] = 2,
    ACTIONS(1765), 1,
      sym__number,
    ACTIONS(1763), 2,
      sym__space,
      sym__eol,
  [4214] = 1,
    ACTIONS(1767), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4220] = 3,
    ACTIONS(1769), 1,
      anon_sym_DQUOTE,
    ACTIONS(1771), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym__match_localnetwork_repeat2,
  [4230] = 3,
    ACTIONS(1774), 1,
      aux_sym__sep_token1,
    ACTIONS(1776), 1,
      sym__space,
    STATE(712), 1,
      sym__sep,
  [4240] = 2,
    STATE(721), 1,
      sym__boolean,
    ACTIONS(1778), 2,
      anon_sym_yes,
      anon_sym_no,
  [4248] = 3,
    ACTIONS(1780), 1,
      anon_sym_DQUOTE,
    ACTIONS(1782), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym__match_value_repeat4,
  [4258] = 3,
    ACTIONS(1785), 1,
      aux_sym__sep_token1,
    ACTIONS(1787), 1,
      sym__space,
    STATE(714), 1,
      sym__sep,
  [4268] = 3,
    ACTIONS(1789), 1,
      aux_sym__sep_token1,
    ACTIONS(1791), 1,
      sym__space,
    STATE(103), 1,
      sym__sep,
  [4278] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1793), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym__match_value_repeat4,
  [4288] = 3,
    ACTIONS(1795), 1,
      sym__space,
    ACTIONS(1797), 1,
      sym__eol,
    STATE(491), 1,
      aux_sym__canonical_domains_repeat1,
  [4298] = 3,
    ACTIONS(1799), 1,
      aux_sym__sep_token1,
    ACTIONS(1801), 1,
      sym__space,
    STATE(170), 1,
      sym__sep,
  [4308] = 3,
    ACTIONS(1803), 1,
      aux_sym__sep_token1,
    ACTIONS(1805), 1,
      sym__space,
    STATE(50), 1,
      sym__sep,
  [4318] = 2,
    STATE(722), 1,
      sym__boolean,
    ACTIONS(1807), 2,
      anon_sym_yes,
      anon_sym_no,
  [4326] = 1,
    ACTIONS(1809), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4332] = 3,
    ACTIONS(1429), 1,
      sym__number,
    ACTIONS(1811), 1,
      anon_sym_STAR,
    STATE(680), 1,
      sym_number,
  [4342] = 3,
    ACTIONS(1813), 1,
      sym__space,
    ACTIONS(1815), 1,
      sym__eol,
    STATE(494), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4352] = 3,
    ACTIONS(1817), 1,
      anon_sym_COMMA,
    ACTIONS(1819), 1,
      anon_sym_COLON,
    STATE(489), 1,
      aux_sym__cnames_map_repeat1,
  [4362] = 3,
    ACTIONS(1821), 1,
      aux_sym__sep_token1,
    ACTIONS(1823), 1,
      sym__space,
    STATE(56), 1,
      sym__sep,
  [4372] = 2,
    STATE(723), 1,
      sym__boolean,
    ACTIONS(1825), 2,
      anon_sym_yes,
      anon_sym_no,
  [4380] = 3,
    ACTIONS(1827), 1,
      aux_sym_time_token3,
    ACTIONS(1829), 1,
      aux_sym_time_token4,
    ACTIONS(1831), 1,
      aux_sym_time_token5,
  [4390] = 2,
    STATE(725), 1,
      sym__boolean,
    ACTIONS(1833), 2,
      anon_sym_yes,
      anon_sym_no,
  [4398] = 3,
    ACTIONS(1835), 1,
      aux_sym__sep_token1,
    ACTIONS(1837), 1,
      sym__space,
    STATE(382), 1,
      sym__sep,
  [4408] = 3,
    ACTIONS(1839), 1,
      aux_sym__sep_token1,
    ACTIONS(1841), 1,
      sym__space,
    STATE(380), 1,
      sym__sep,
  [4418] = 2,
    STATE(733), 1,
      sym__boolean,
    ACTIONS(1843), 2,
      anon_sym_yes,
      anon_sym_no,
  [4426] = 1,
    ACTIONS(1606), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4432] = 3,
    ACTIONS(1845), 1,
      anon_sym_DQUOTE,
    ACTIONS(1847), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym__match_localnetwork_repeat2,
  [4442] = 3,
    ACTIONS(1849), 1,
      aux_sym__sep_token1,
    ACTIONS(1851), 1,
      sym__space,
    STATE(719), 1,
      sym__sep,
  [4452] = 3,
    ACTIONS(1853), 1,
      aux_sym__sep_token1,
    ACTIONS(1855), 1,
      sym__space,
    STATE(356), 1,
      sym__sep,
  [4462] = 3,
    ACTIONS(1857), 1,
      aux_sym__sep_token1,
    ACTIONS(1859), 1,
      sym__space,
    STATE(756), 1,
      sym__sep,
  [4472] = 3,
    ACTIONS(1861), 1,
      aux_sym__sep_token1,
    ACTIONS(1863), 1,
      sym__space,
    STATE(345), 1,
      sym__sep,
  [4482] = 3,
    ACTIONS(1865), 1,
      aux_sym__sep_token1,
    ACTIONS(1867), 1,
      sym__space,
    STATE(53), 1,
      sym__sep,
  [4492] = 3,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    ACTIONS(1869), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym__match_value_repeat4,
  [4502] = 3,
    ACTIONS(1871), 1,
      aux_sym__sep_token1,
    ACTIONS(1873), 1,
      sym__space,
    STATE(342), 1,
      sym__sep,
  [4512] = 3,
    ACTIONS(1875), 1,
      aux_sym__sep_token1,
    ACTIONS(1877), 1,
      sym__space,
    STATE(764), 1,
      sym__sep,
  [4522] = 2,
    STATE(737), 1,
      sym__boolean,
    ACTIONS(1879), 2,
      anon_sym_yes,
      anon_sym_no,
  [4530] = 3,
    ACTIONS(1881), 1,
      aux_sym__sep_token1,
    ACTIONS(1883), 1,
      sym__space,
    STATE(340), 1,
      sym__sep,
  [4540] = 3,
    ACTIONS(1885), 1,
      aux_sym__sep_token1,
    ACTIONS(1887), 1,
      sym__space,
    STATE(231), 1,
      sym__sep,
  [4550] = 3,
    ACTIONS(1616), 1,
      sym__space,
    ACTIONS(1889), 1,
      sym__eol,
    STATE(277), 1,
      aux_sym__dynamic_forward_repeat1,
  [4560] = 3,
    ACTIONS(1891), 1,
      aux_sym__sep_token1,
    ACTIONS(1893), 1,
      sym__space,
    STATE(334), 1,
      sym__sep,
  [4570] = 3,
    ACTIONS(1895), 1,
      aux_sym__sep_token1,
    ACTIONS(1897), 1,
      sym__space,
    STATE(326), 1,
      sym__sep,
  [4580] = 3,
    ACTIONS(1899), 1,
      aux_sym__sep_token1,
    ACTIONS(1901), 1,
      sym__space,
    STATE(234), 1,
      sym__sep,
  [4590] = 3,
    ACTIONS(1903), 1,
      aux_sym__sep_token1,
    ACTIONS(1905), 1,
      sym__space,
    STATE(291), 1,
      sym__sep,
  [4600] = 3,
    ACTIONS(1429), 1,
      sym__number,
    ACTIONS(1907), 1,
      anon_sym_STAR,
    STATE(335), 1,
      sym_number,
  [4610] = 3,
    ACTIONS(1909), 1,
      aux_sym__sep_token1,
    ACTIONS(1911), 1,
      sym__space,
    STATE(236), 1,
      sym__sep,
  [4620] = 3,
    ACTIONS(1913), 1,
      anon_sym_DQUOTE,
    ACTIONS(1915), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym__log_verbose_repeat2,
  [4630] = 3,
    ACTIONS(1918), 1,
      aux_sym__sep_token1,
    ACTIONS(1920), 1,
      sym__space,
    STATE(237), 1,
      sym__sep,
  [4640] = 3,
    ACTIONS(1922), 1,
      aux_sym__sep_token1,
    ACTIONS(1924), 1,
      sym__space,
    STATE(137), 1,
      sym__sep,
  [4650] = 2,
    ACTIONS(1926), 1,
      sym__number,
    ACTIONS(1928), 2,
      sym__space,
      sym__eol,
  [4658] = 2,
    ACTIONS(1930), 1,
      sym__number,
    ACTIONS(1928), 2,
      sym__space,
      sym__eol,
  [4666] = 2,
    ACTIONS(1932), 1,
      sym__number,
    ACTIONS(1928), 2,
      sym__space,
      sym__eol,
  [4674] = 3,
    ACTIONS(1934), 1,
      aux_sym__sep_token1,
    ACTIONS(1936), 1,
      sym__space,
    STATE(302), 1,
      sym__sep,
  [4684] = 3,
    ACTIONS(1938), 1,
      sym__space,
    ACTIONS(1940), 1,
      sym__eol,
    STATE(488), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4694] = 3,
    ACTIONS(1942), 1,
      aux_sym__sep_token1,
    ACTIONS(1944), 1,
      sym__space,
    STATE(46), 1,
      sym__sep,
  [4704] = 3,
    ACTIONS(1946), 1,
      aux_sym__sep_token1,
    ACTIONS(1948), 1,
      sym__space,
    STATE(73), 1,
      sym__sep,
  [4714] = 3,
    ACTIONS(1950), 1,
      aux_sym__sep_token1,
    ACTIONS(1952), 1,
      sym__space,
    STATE(138), 1,
      sym__sep,
  [4724] = 3,
    ACTIONS(1847), 1,
      anon_sym_COMMA,
    ACTIONS(1954), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym__match_localnetwork_repeat2,
  [4734] = 3,
    ACTIONS(1956), 1,
      aux_sym__sep_token1,
    ACTIONS(1958), 1,
      sym__space,
    STATE(141), 1,
      sym__sep,
  [4744] = 3,
    ACTIONS(1960), 1,
      aux_sym__sep_token1,
    ACTIONS(1962), 1,
      sym__space,
    STATE(244), 1,
      sym__sep,
  [4754] = 2,
    STATE(739), 1,
      sym__boolean,
    ACTIONS(1964), 2,
      anon_sym_yes,
      anon_sym_no,
  [4762] = 3,
    ACTIONS(1966), 1,
      aux_sym__sep_token1,
    ACTIONS(1968), 1,
      sym__space,
    STATE(301), 1,
      sym__sep,
  [4772] = 2,
    STATE(740), 1,
      sym__boolean,
    ACTIONS(1970), 2,
      anon_sym_yes,
      anon_sym_no,
  [4780] = 2,
    ACTIONS(1974), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1972), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [4788] = 3,
    ACTIONS(1976), 1,
      aux_sym__sep_token1,
    ACTIONS(1978), 1,
      sym__space,
    STATE(246), 1,
      sym__sep,
  [4798] = 3,
    ACTIONS(1980), 1,
      aux_sym__sep_token1,
    ACTIONS(1982), 1,
      sym__space,
    STATE(80), 1,
      sym__sep,
  [4808] = 3,
    ACTIONS(1984), 1,
      aux_sym__sep_token1,
    ACTIONS(1986), 1,
      sym__space,
    STATE(248), 1,
      sym__sep,
  [4818] = 2,
    STATE(752), 1,
      sym__boolean,
    ACTIONS(1988), 2,
      anon_sym_yes,
      anon_sym_no,
  [4826] = 2,
    STATE(753), 1,
      sym__boolean,
    ACTIONS(1990), 2,
      anon_sym_yes,
      anon_sym_no,
  [4834] = 3,
    ACTIONS(1992), 1,
      aux_sym__sep_token1,
    ACTIONS(1994), 1,
      sym__space,
    STATE(40), 1,
      sym__sep,
  [4844] = 3,
    ACTIONS(1996), 1,
      aux_sym__sep_token1,
    ACTIONS(1998), 1,
      sym__space,
    STATE(805), 1,
      sym__sep,
  [4854] = 2,
    STATE(759), 1,
      sym__boolean,
    ACTIONS(2000), 2,
      anon_sym_yes,
      anon_sym_no,
  [4862] = 3,
    ACTIONS(2002), 1,
      aux_sym__sep_token1,
    ACTIONS(2004), 1,
      sym__space,
    STATE(133), 1,
      sym__sep,
  [4872] = 3,
    ACTIONS(2006), 1,
      sym__space,
    ACTIONS(2008), 1,
      sym__eol,
    STATE(482), 1,
      aux_sym__ignore_unknown_repeat1,
  [4882] = 3,
    ACTIONS(2010), 1,
      aux_sym__sep_token1,
    ACTIONS(2012), 1,
      sym__space,
    STATE(252), 1,
      sym__sep,
  [4892] = 3,
    ACTIONS(2014), 1,
      aux_sym__sep_token1,
    ACTIONS(2016), 1,
      sym__space,
    STATE(297), 1,
      sym__sep,
  [4902] = 3,
    ACTIONS(2018), 1,
      aux_sym__sep_token1,
    ACTIONS(2020), 1,
      sym__space,
    STATE(527), 1,
      sym__sep,
  [4912] = 3,
    ACTIONS(2022), 1,
      aux_sym__sep_token1,
    ACTIONS(2024), 1,
      sym__space,
    STATE(295), 1,
      sym__sep,
  [4922] = 2,
    ACTIONS(2028), 1,
      sym_sig,
    ACTIONS(2026), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4930] = 3,
    ACTIONS(2030), 1,
      aux_sym__sep_token1,
    ACTIONS(2032), 1,
      sym__space,
    STATE(294), 1,
      sym__sep,
  [4940] = 3,
    ACTIONS(2034), 1,
      aux_sym__sep_token1,
    ACTIONS(2036), 1,
      sym__space,
    STATE(112), 1,
      sym__sep,
  [4950] = 2,
    STATE(757), 1,
      sym__boolean,
    ACTIONS(2038), 2,
      anon_sym_yes,
      anon_sym_no,
  [4958] = 2,
    STATE(735), 1,
      sym__boolean,
    ACTIONS(2040), 2,
      anon_sym_yes,
      anon_sym_no,
  [4966] = 3,
    ACTIONS(2042), 1,
      aux_sym__sep_token1,
    ACTIONS(2044), 1,
      sym__space,
    STATE(258), 1,
      sym__sep,
  [4976] = 2,
    ACTIONS(2048), 1,
      anon_sym_inet,
    ACTIONS(2046), 2,
      anon_sym_any,
      anon_sym_inet6,
  [4984] = 3,
    ACTIONS(2050), 1,
      aux_sym__sep_token1,
    ACTIONS(2052), 1,
      sym__space,
    STATE(512), 1,
      sym__sep,
  [4994] = 3,
    ACTIONS(2054), 1,
      aux_sym__sep_token1,
    ACTIONS(2056), 1,
      sym__space,
    STATE(76), 1,
      sym__sep,
  [5004] = 3,
    ACTIONS(2058), 1,
      sym__space,
    ACTIONS(2061), 1,
      sym__eol,
    STATE(407), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5014] = 3,
    ACTIONS(2063), 1,
      sym__space,
    ACTIONS(2066), 1,
      sym__eol,
    STATE(408), 1,
      aux_sym__set_env_repeat1,
  [5024] = 3,
    ACTIONS(2068), 1,
      sym__space,
    ACTIONS(2071), 1,
      sym__eol,
    STATE(409), 1,
      aux_sym__send_env_repeat1,
  [5034] = 3,
    ACTIONS(2073), 1,
      aux_sym__sep_token1,
    ACTIONS(2075), 1,
      sym__space,
    STATE(108), 1,
      sym__sep,
  [5044] = 2,
    ACTIONS(2077), 1,
      anon_sym_COLON,
    ACTIONS(2079), 2,
      sym__space,
      sym__eol,
  [5052] = 3,
    ACTIONS(2081), 1,
      aux_sym__sep_token1,
    ACTIONS(2083), 1,
      sym__space,
    STATE(260), 1,
      sym__sep,
  [5062] = 1,
    ACTIONS(1572), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5068] = 3,
    ACTIONS(2085), 1,
      sym__space,
    ACTIONS(2088), 1,
      sym__eol,
    STATE(414), 1,
      aux_sym__permit_remote_open_repeat1,
  [5078] = 3,
    ACTIONS(1429), 1,
      sym__number,
    ACTIONS(2090), 1,
      anon_sym_STAR,
    STATE(777), 1,
      sym_number,
  [5088] = 3,
    ACTIONS(2092), 1,
      aux_sym__sep_token1,
    ACTIONS(2094), 1,
      sym__space,
    STATE(284), 1,
      sym__sep,
  [5098] = 1,
    ACTIONS(1382), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5104] = 3,
    ACTIONS(2096), 1,
      aux_sym__sep_token1,
    ACTIONS(2098), 1,
      sym__space,
    STATE(261), 1,
      sym__sep,
  [5114] = 3,
    ACTIONS(2100), 1,
      aux_sym__sep_token1,
    ACTIONS(2102), 1,
      sym__space,
    STATE(100), 1,
      sym__sep,
  [5124] = 3,
    ACTIONS(2104), 1,
      aux_sym__sep_token1,
    ACTIONS(2106), 1,
      sym__space,
    STATE(283), 1,
      sym__sep,
  [5134] = 1,
    ACTIONS(2108), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5140] = 3,
    ACTIONS(2110), 1,
      sym__space,
    ACTIONS(2112), 1,
      sym__eol,
    STATE(478), 1,
      aux_sym__permit_remote_open_repeat1,
  [5150] = 3,
    ACTIONS(2114), 1,
      aux_sym__sep_token1,
    ACTIONS(2116), 1,
      sym__space,
    STATE(117), 1,
      sym__sep,
  [5160] = 3,
    ACTIONS(2118), 1,
      anon_sym_DQUOTE,
    ACTIONS(2120), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym__log_verbose_repeat2,
  [5170] = 3,
    ACTIONS(2122), 1,
      aux_sym__sep_token1,
    ACTIONS(2124), 1,
      sym__space,
    STATE(41), 1,
      sym__sep,
  [5180] = 3,
    ACTIONS(2126), 1,
      aux_sym__sep_token1,
    ACTIONS(2128), 1,
      sym__space,
    STATE(176), 1,
      sym__sep,
  [5190] = 3,
    ACTIONS(2130), 1,
      aux_sym__sep_token1,
    ACTIONS(2132), 1,
      sym__space,
    STATE(502), 1,
      sym__sep,
  [5200] = 1,
    ACTIONS(1550), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5206] = 3,
    ACTIONS(2134), 1,
      aux_sym__sep_token1,
    ACTIONS(2136), 1,
      sym__space,
    STATE(63), 1,
      sym__sep,
  [5216] = 3,
    ACTIONS(2138), 1,
      sym__space,
    ACTIONS(2141), 1,
      sym__eol,
    STATE(430), 1,
      aux_sym__ignore_unknown_repeat1,
  [5226] = 2,
    ACTIONS(2143), 1,
      anon_sym_COLON,
    ACTIONS(2145), 2,
      sym__space,
      sym__eol,
  [5234] = 3,
    ACTIONS(2147), 1,
      aux_sym__sep_token1,
    ACTIONS(2149), 1,
      sym__space,
    STATE(106), 1,
      sym__sep,
  [5244] = 3,
    ACTIONS(2151), 1,
      aux_sym__sep_token1,
    ACTIONS(2153), 1,
      sym__space,
    STATE(107), 1,
      sym__sep,
  [5254] = 3,
    ACTIONS(2155), 1,
      aux_sym__sep_token1,
    ACTIONS(2157), 1,
      sym__space,
    STATE(516), 1,
      sym__sep,
  [5264] = 3,
    ACTIONS(2159), 1,
      aux_sym__sep_token1,
    ACTIONS(2161), 1,
      sym__space,
    STATE(519), 1,
      sym__sep,
  [5274] = 1,
    ACTIONS(1541), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5280] = 2,
    ACTIONS(2163), 1,
      aux_sym_bytes_token1,
    ACTIONS(2165), 2,
      sym__space,
      sym__eol,
  [5288] = 3,
    ACTIONS(2167), 1,
      aux_sym__sep_token1,
    ACTIONS(2169), 1,
      sym__space,
    STATE(167), 1,
      sym__sep,
  [5298] = 3,
    ACTIONS(2171), 1,
      sym__space,
    ACTIONS(2174), 1,
      sym__eol,
    STATE(439), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5308] = 3,
    ACTIONS(2176), 1,
      sym__space,
    ACTIONS(2179), 1,
      sym__eol,
    STATE(440), 1,
      aux_sym__dynamic_forward_repeat1,
  [5318] = 1,
    ACTIONS(2181), 3,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [5324] = 3,
    ACTIONS(2183), 1,
      aux_sym__sep_token1,
    ACTIONS(2185), 1,
      sym__space,
    STATE(480), 1,
      sym__sep,
  [5334] = 1,
    ACTIONS(1510), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5340] = 3,
    ACTIONS(2187), 1,
      aux_sym__sep_token1,
    ACTIONS(2189), 1,
      sym__space,
    STATE(784), 1,
      sym__sep,
  [5350] = 3,
    ACTIONS(2191), 1,
      aux_sym__sep_token1,
    ACTIONS(2193), 1,
      sym__space,
    STATE(279), 1,
      sym__sep,
  [5360] = 3,
    ACTIONS(2195), 1,
      aux_sym__sep_token1,
    ACTIONS(2197), 1,
      sym__space,
    STATE(120), 1,
      sym__sep,
  [5370] = 3,
    ACTIONS(2199), 1,
      aux_sym__sep_token1,
    ACTIONS(2201), 1,
      sym__space,
    STATE(813), 1,
      sym__sep,
  [5380] = 1,
    ACTIONS(1501), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5386] = 3,
    ACTIONS(2203), 1,
      sym__space,
    ACTIONS(2205), 1,
      sym__eol,
    STATE(475), 1,
      aux_sym__send_env_repeat1,
  [5396] = 3,
    ACTIONS(2207), 1,
      aux_sym__sep_token1,
    ACTIONS(2209), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [5406] = 3,
    ACTIONS(1450), 1,
      anon_sym_COLON,
    ACTIONS(2211), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym__cnames_map_repeat1,
  [5416] = 3,
    ACTIONS(2214), 1,
      aux_sym__sep_token1,
    ACTIONS(2216), 1,
      sym__space,
    STATE(271), 1,
      sym__sep,
  [5426] = 3,
    ACTIONS(2218), 1,
      aux_sym__sep_token1,
    ACTIONS(2220), 1,
      sym__space,
    STATE(175), 1,
      sym__sep,
  [5436] = 3,
    ACTIONS(2222), 1,
      aux_sym__sep_token1,
    ACTIONS(2224), 1,
      sym__space,
    STATE(285), 1,
      sym__sep,
  [5446] = 3,
    ACTIONS(2226), 1,
      sym__space,
    ACTIONS(2228), 1,
      sym__eol,
    STATE(474), 1,
      aux_sym__set_env_repeat1,
  [5456] = 3,
    ACTIONS(2230), 1,
      sym__space,
    ACTIONS(2233), 1,
      sym__eol,
    STATE(456), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5466] = 3,
    ACTIONS(2235), 1,
      sym__space,
    ACTIONS(2238), 1,
      sym__eol,
    STATE(457), 1,
      aux_sym__canonical_domains_repeat1,
  [5476] = 3,
    ACTIONS(1484), 1,
      aux_sym_time_token3,
    ACTIONS(1486), 1,
      aux_sym_time_token4,
    ACTIONS(1488), 1,
      aux_sym_time_token5,
  [5486] = 3,
    ACTIONS(2240), 1,
      aux_sym__sep_token1,
    ACTIONS(2242), 1,
      sym__space,
    STATE(273), 1,
      sym__sep,
  [5496] = 3,
    ACTIONS(2244), 1,
      anon_sym_DQUOTE,
    ACTIONS(2246), 1,
      aux_sym__match_exec_token3,
    STATE(460), 1,
      aux_sym__string_repeat2,
  [5506] = 1,
    ACTIONS(2249), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [5512] = 3,
    ACTIONS(2251), 1,
      sym__space,
    ACTIONS(2254), 1,
      sym__eol,
    STATE(462), 1,
      aux_sym_match_declaration_repeat1,
  [5522] = 3,
    ACTIONS(2256), 1,
      aux_sym__sep_token1,
    ACTIONS(2258), 1,
      sym__space,
    STATE(57), 1,
      sym__sep,
  [5532] = 2,
    ACTIONS(2260), 1,
      anon_sym_COLON,
    ACTIONS(2262), 2,
      sym__space,
      sym__eol,
  [5540] = 3,
    ACTIONS(2264), 1,
      aux_sym__sep_token1,
    ACTIONS(2266), 1,
      sym__space,
    STATE(275), 1,
      sym__sep,
  [5550] = 3,
    ACTIONS(2268), 1,
      sym__space,
    ACTIONS(2270), 1,
      sym__eol,
    STATE(471), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5560] = 3,
    ACTIONS(2272), 1,
      aux_sym__sep_token1,
    ACTIONS(2274), 1,
      sym__space,
    STATE(289), 1,
      sym__sep,
  [5570] = 3,
    ACTIONS(2276), 1,
      aux_sym__sep_token1,
    ACTIONS(2278), 1,
      sym__space,
    STATE(251), 1,
      sym__sep,
  [5580] = 3,
    ACTIONS(2280), 1,
      sym__space,
    ACTIONS(2283), 1,
      sym__eol,
    STATE(469), 1,
      aux_sym_host_declaration_repeat1,
  [5590] = 3,
    ACTIONS(2285), 1,
      sym__space,
    ACTIONS(2287), 1,
      sym__eol,
    STATE(469), 1,
      aux_sym_host_declaration_repeat1,
  [5600] = 3,
    ACTIONS(2268), 1,
      sym__space,
    ACTIONS(2289), 1,
      sym__eol,
    STATE(407), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5610] = 3,
    ACTIONS(2291), 1,
      sym__space,
    ACTIONS(2293), 1,
      sym__eol,
    STATE(470), 1,
      aux_sym_host_declaration_repeat1,
  [5620] = 3,
    ACTIONS(1429), 1,
      sym__number,
    ACTIONS(2295), 1,
      anon_sym_any,
    STATE(692), 1,
      sym_number,
  [5630] = 3,
    ACTIONS(2226), 1,
      sym__space,
    ACTIONS(2297), 1,
      sym__eol,
    STATE(408), 1,
      aux_sym__set_env_repeat1,
  [5640] = 3,
    ACTIONS(2203), 1,
      sym__space,
    ACTIONS(2299), 1,
      sym__eol,
    STATE(409), 1,
      aux_sym__send_env_repeat1,
  [5650] = 3,
    ACTIONS(2301), 1,
      aux_sym__sep_token1,
    ACTIONS(2303), 1,
      sym__space,
    STATE(809), 1,
      sym__sep,
  [5660] = 3,
    ACTIONS(2305), 1,
      sym__space,
    ACTIONS(2307), 1,
      sym__eol,
    STATE(469), 1,
      aux_sym_host_declaration_repeat1,
  [5670] = 3,
    ACTIONS(2110), 1,
      sym__space,
    ACTIONS(2309), 1,
      sym__eol,
    STATE(414), 1,
      aux_sym__permit_remote_open_repeat1,
  [5680] = 3,
    ACTIONS(1429), 1,
      sym__number,
    ACTIONS(2311), 1,
      anon_sym_STAR,
    STATE(677), 1,
      sym_number,
  [5690] = 2,
    STATE(629), 1,
      sym__boolean,
    ACTIONS(2313), 2,
      anon_sym_yes,
      anon_sym_no,
  [5698] = 3,
    ACTIONS(2120), 1,
      anon_sym_COMMA,
    ACTIONS(2315), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      aux_sym__log_verbose_repeat2,
  [5708] = 3,
    ACTIONS(2006), 1,
      sym__space,
    ACTIONS(2317), 1,
      sym__eol,
    STATE(430), 1,
      aux_sym__ignore_unknown_repeat1,
  [5718] = 3,
    ACTIONS(2319), 1,
      anon_sym_BANG,
    ACTIONS(2321), 1,
      anon_sym_DQUOTE,
    ACTIONS(2323), 1,
      aux_sym__match_localnetwork_token2,
  [5728] = 2,
    ACTIONS(2325), 1,
      sym__number,
    ACTIONS(2327), 2,
      sym__space,
      sym__eol,
  [5736] = 2,
    ACTIONS(2329), 1,
      sym__number,
    ACTIONS(2327), 2,
      sym__space,
      sym__eol,
  [5744] = 2,
    ACTIONS(2331), 1,
      sym__number,
    ACTIONS(2327), 2,
      sym__space,
      sym__eol,
  [5752] = 2,
    ACTIONS(2333), 1,
      sym__number,
    ACTIONS(2327), 2,
      sym__space,
      sym__eol,
  [5760] = 3,
    ACTIONS(1938), 1,
      sym__space,
    ACTIONS(2335), 1,
      sym__eol,
    STATE(439), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5770] = 3,
    ACTIONS(1817), 1,
      anon_sym_COMMA,
    ACTIONS(2337), 1,
      anon_sym_COLON,
    STATE(451), 1,
      aux_sym__cnames_map_repeat1,
  [5780] = 3,
    ACTIONS(888), 1,
      sym__eol,
    ACTIONS(2339), 1,
      sym__space,
    STATE(462), 1,
      aux_sym_match_declaration_repeat1,
  [5790] = 3,
    ACTIONS(1795), 1,
      sym__space,
    ACTIONS(2341), 1,
      sym__eol,
    STATE(457), 1,
      aux_sym__canonical_domains_repeat1,
  [5800] = 2,
    ACTIONS(2345), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2343), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [5808] = 3,
    ACTIONS(2347), 1,
      anon_sym_DQUOTE,
    ACTIONS(2349), 1,
      aux_sym__match_exec_token3,
    STATE(460), 1,
      aux_sym__string_repeat2,
  [5818] = 3,
    ACTIONS(1813), 1,
      sym__space,
    ACTIONS(2351), 1,
      sym__eol,
    STATE(456), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5828] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5833] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5838] = 1,
    ACTIONS(2355), 2,
      sym__space,
      sym__eol,
  [5843] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5848] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5853] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5858] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5863] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(641), 1,
      sym_number,
  [5870] = 1,
    ACTIONS(2357), 2,
      anon_sym_DQUOTE,
      aux_sym__match_exec_token3,
  [5875] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5880] = 2,
    ACTIONS(1077), 1,
      sym__number,
    STATE(620), 1,
      sym_time,
  [5887] = 1,
    ACTIONS(2327), 2,
      sym__space,
      sym__eol,
  [5892] = 1,
    ACTIONS(2359), 2,
      sym__space,
      sym__eol,
  [5897] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5902] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5907] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5912] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5917] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(669), 1,
      sym_number,
  [5924] = 1,
    ACTIONS(2361), 2,
      sym__space,
      sym__eol,
  [5929] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5934] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5939] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(633), 1,
      sym_number,
  [5946] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5951] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5956] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(632), 1,
      sym_number,
  [5963] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5968] = 2,
    ACTIONS(2363), 1,
      sym__space,
    ACTIONS(2365), 1,
      sym__eol,
  [5975] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(441), 1,
      sym_number,
  [5982] = 1,
    ACTIONS(2367), 2,
      sym__space,
      sym__eol,
  [5987] = 1,
    ACTIONS(2369), 2,
      sym__space,
      sym__eol,
  [5992] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [5997] = 1,
    ACTIONS(2355), 2,
      sym__space,
      sym__eol,
  [6002] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(675), 1,
      sym_number,
  [6009] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6014] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6019] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6024] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6029] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6034] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6039] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6044] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6049] = 1,
    ACTIONS(2371), 2,
      sym__space,
      sym__eol,
  [6054] = 1,
    ACTIONS(2371), 2,
      sym__space,
      sym__eol,
  [6059] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6064] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6069] = 2,
    ACTIONS(1724), 1,
      sym__eol,
    ACTIONS(2373), 1,
      sym__space,
  [6076] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6081] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6086] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6091] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6096] = 1,
    ACTIONS(2375), 2,
      sym__space,
      sym__eol,
  [6101] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6106] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6111] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6116] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6121] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6126] = 2,
    ACTIONS(2377), 1,
      aux_sym__all_token1,
    STATE(602), 1,
      sym__all,
  [6133] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6138] = 1,
    ACTIONS(2371), 2,
      sym__space,
      sym__eol,
  [6143] = 1,
    ACTIONS(2375), 2,
      sym__space,
      sym__eol,
  [6148] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6153] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6158] = 2,
    ACTIONS(2381), 1,
      aux_sym__all_token1,
    STATE(601), 1,
      sym__all,
  [6165] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6170] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6175] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6180] = 1,
    ACTIONS(2383), 2,
      sym__space,
      sym__eol,
  [6185] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6190] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6195] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(683), 1,
      sym_number,
  [6202] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6207] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6212] = 1,
    ACTIONS(2385), 2,
      sym__space,
      sym__eol,
  [6217] = 2,
    ACTIONS(1077), 1,
      sym__number,
    STATE(685), 1,
      sym_time,
  [6224] = 1,
    ACTIONS(2355), 2,
      sym__space,
      sym__eol,
  [6229] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6234] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6239] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6244] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6249] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6254] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6259] = 2,
    ACTIONS(2387), 1,
      sym__var_name,
    STATE(690), 1,
      sym__set_env_value,
  [6266] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6271] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6276] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6281] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6286] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6291] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6296] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6301] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6306] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6311] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6316] = 1,
    ACTIONS(2389), 2,
      sym__space,
      sym__eol,
  [6321] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6326] = 1,
    ACTIONS(2391), 2,
      sym__space,
      sym__eol,
  [6331] = 2,
    ACTIONS(2393), 1,
      sym__space,
    ACTIONS(2395), 1,
      sym__eol,
  [6338] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6343] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6348] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6353] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6358] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6363] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6368] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6373] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6378] = 1,
    ACTIONS(2397), 2,
      sym__space,
      sym__eol,
  [6383] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6388] = 1,
    ACTIONS(2399), 2,
      sym__space,
      sym__eol,
  [6393] = 1,
    ACTIONS(2401), 2,
      sym__space,
      sym__eol,
  [6398] = 2,
    ACTIONS(798), 1,
      sym__space,
    ACTIONS(800), 1,
      sym__eol,
  [6405] = 2,
    ACTIONS(1150), 1,
      anon_sym_COLON,
    ACTIONS(2403), 1,
      aux_sym__match_exec_token2,
  [6412] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6417] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6422] = 1,
    ACTIONS(2405), 2,
      sym__space,
      sym__eol,
  [6427] = 1,
    ACTIONS(2407), 2,
      sym__space,
      sym__eol,
  [6432] = 1,
    ACTIONS(2409), 2,
      sym__space,
      sym__eol,
  [6437] = 1,
    ACTIONS(2411), 2,
      sym__space,
      sym__eol,
  [6442] = 1,
    ACTIONS(2413), 2,
      sym__space,
      sym__eol,
  [6447] = 1,
    ACTIONS(2415), 2,
      sym__space,
      sym__eol,
  [6452] = 1,
    ACTIONS(2417), 2,
      sym__space,
      sym__eol,
  [6457] = 1,
    ACTIONS(2254), 2,
      sym__space,
      sym__eol,
  [6462] = 1,
    ACTIONS(2419), 2,
      sym__space,
      sym__eol,
  [6467] = 1,
    ACTIONS(2421), 2,
      sym__space,
      sym__eol,
  [6472] = 1,
    ACTIONS(2423), 2,
      sym__space,
      sym__eol,
  [6477] = 1,
    ACTIONS(2425), 2,
      sym__space,
      sym__eol,
  [6482] = 1,
    ACTIONS(2427), 2,
      sym__space,
      sym__eol,
  [6487] = 1,
    ACTIONS(2429), 2,
      sym__space,
      sym__eol,
  [6492] = 1,
    ACTIONS(2431), 2,
      sym__space,
      sym__eol,
  [6497] = 1,
    ACTIONS(2433), 2,
      sym__space,
      sym__eol,
  [6502] = 2,
    ACTIONS(1486), 1,
      aux_sym_time_token4,
    ACTIONS(1488), 1,
      aux_sym_time_token5,
  [6509] = 1,
    ACTIONS(1755), 2,
      sym__space,
      sym__eol,
  [6514] = 1,
    ACTIONS(2435), 2,
      sym__space,
      sym__eol,
  [6519] = 1,
    ACTIONS(2437), 2,
      sym__space,
      sym__eol,
  [6524] = 1,
    ACTIONS(2439), 2,
      sym__space,
      sym__eol,
  [6529] = 1,
    ACTIONS(2441), 2,
      sym__space,
      sym__eol,
  [6534] = 1,
    ACTIONS(2443), 2,
      sym__space,
      sym__eol,
  [6539] = 1,
    ACTIONS(2379), 2,
      sym__space,
      sym__eol,
  [6544] = 1,
    ACTIONS(2445), 2,
      sym__space,
      sym__eol,
  [6549] = 1,
    ACTIONS(2447), 2,
      sym__space,
      sym__eol,
  [6554] = 1,
    ACTIONS(2449), 2,
      sym__space,
      sym__eol,
  [6559] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6564] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6569] = 1,
    ACTIONS(2451), 2,
      sym__space,
      sym__eol,
  [6574] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6579] = 1,
    ACTIONS(2453), 2,
      sym__space,
      sym__eol,
  [6584] = 1,
    ACTIONS(2455), 2,
      sym__space,
      sym__eol,
  [6589] = 1,
    ACTIONS(2457), 2,
      sym__space,
      sym__eol,
  [6594] = 1,
    ACTIONS(2459), 2,
      sym__space,
      sym__eol,
  [6599] = 1,
    ACTIONS(2461), 2,
      sym__space,
      sym__eol,
  [6604] = 1,
    ACTIONS(2463), 2,
      sym__space,
      sym__eol,
  [6609] = 1,
    ACTIONS(2465), 2,
      sym__space,
      sym__eol,
  [6614] = 2,
    ACTIONS(2467), 1,
      sym__space,
    ACTIONS(2469), 1,
      sym__eol,
  [6621] = 1,
    ACTIONS(2471), 2,
      sym__space,
      sym__eol,
  [6626] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6631] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6636] = 2,
    ACTIONS(2473), 1,
      sym__space,
    ACTIONS(2475), 1,
      sym__eol,
  [6643] = 1,
    ACTIONS(2475), 2,
      sym__space,
      sym__eol,
  [6648] = 1,
    ACTIONS(2477), 2,
      sym__space,
      sym__eol,
  [6653] = 1,
    ACTIONS(2479), 2,
      sym__space,
      sym__eol,
  [6658] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6663] = 1,
    ACTIONS(2481), 2,
      sym__space,
      sym__eol,
  [6668] = 2,
    ACTIONS(2483), 1,
      aux_sym_time_token4,
    ACTIONS(2485), 1,
      aux_sym_time_token5,
  [6675] = 1,
    ACTIONS(2141), 2,
      sym__space,
      sym__eol,
  [6680] = 1,
    ACTIONS(2487), 2,
      sym__space,
      sym__eol,
  [6685] = 1,
    ACTIONS(2489), 2,
      sym__space,
      sym__eol,
  [6690] = 1,
    ACTIONS(2145), 2,
      sym__space,
      sym__eol,
  [6695] = 2,
    ACTIONS(2349), 1,
      aux_sym__match_exec_token3,
    STATE(493), 1,
      aux_sym__string_repeat2,
  [6702] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6707] = 1,
    ACTIONS(2491), 2,
      sym__space,
      sym__eol,
  [6712] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6717] = 1,
    ACTIONS(2493), 2,
      sym__space,
      sym__eol,
  [6722] = 1,
    ACTIONS(2495), 2,
      sym__space,
      sym__eol,
  [6727] = 1,
    ACTIONS(2497), 2,
      sym__space,
      sym__eol,
  [6732] = 1,
    ACTIONS(2499), 2,
      sym__space,
      sym__eol,
  [6737] = 1,
    ACTIONS(2501), 2,
      sym__space,
      sym__eol,
  [6742] = 1,
    ACTIONS(2503), 2,
      sym__space,
      sym__eol,
  [6747] = 1,
    ACTIONS(2505), 2,
      sym__space,
      sym__eol,
  [6752] = 1,
    ACTIONS(2507), 2,
      sym__space,
      sym__eol,
  [6757] = 1,
    ACTIONS(2509), 2,
      aux_sym__match_localnetwork_token3,
      anon_sym_STAR,
  [6762] = 1,
    ACTIONS(2511), 2,
      sym__space,
      sym__eol,
  [6767] = 1,
    ACTIONS(2513), 2,
      sym__space,
      sym__eol,
  [6772] = 1,
    ACTIONS(2515), 2,
      sym__space,
      sym__eol,
  [6777] = 1,
    ACTIONS(2517), 2,
      sym__space,
      sym__eol,
  [6782] = 1,
    ACTIONS(2519), 2,
      sym__space,
      sym__eol,
  [6787] = 1,
    ACTIONS(2521), 2,
      sym__space,
      sym__eol,
  [6792] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6797] = 1,
    ACTIONS(2523), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6802] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6807] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6812] = 1,
    ACTIONS(2079), 2,
      sym__space,
      sym__eol,
  [6817] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6822] = 1,
    ACTIONS(2525), 2,
      sym__space,
      sym__eol,
  [6827] = 1,
    ACTIONS(2527), 2,
      sym__space,
      sym__eol,
  [6832] = 1,
    ACTIONS(2529), 2,
      sym__space,
      sym__eol,
  [6837] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6842] = 1,
    ACTIONS(2531), 2,
      sym__space,
      sym__eol,
  [6847] = 1,
    ACTIONS(2533), 2,
      sym__space,
      sym__eol,
  [6852] = 1,
    ACTIONS(2535), 2,
      sym__space,
      sym__eol,
  [6857] = 1,
    ACTIONS(2537), 2,
      sym__space,
      sym__eol,
  [6862] = 1,
    ACTIONS(2539), 2,
      sym__space,
      sym__eol,
  [6867] = 1,
    ACTIONS(1763), 2,
      sym__space,
      sym__eol,
  [6872] = 1,
    ACTIONS(2541), 2,
      sym__space,
      sym__eol,
  [6877] = 1,
    ACTIONS(2543), 2,
      sym__space,
      sym__eol,
  [6882] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6887] = 1,
    ACTIONS(2545), 2,
      sym__space,
      sym__eol,
  [6892] = 1,
    ACTIONS(2547), 2,
      sym__space,
      sym__eol,
  [6897] = 1,
    ACTIONS(2549), 2,
      sym__space,
      sym__eol,
  [6902] = 1,
    ACTIONS(2353), 2,
      sym__space,
      sym__eol,
  [6907] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(763), 1,
      sym_number,
  [6914] = 2,
    ACTIONS(2551), 1,
      sym__space,
    ACTIONS(2553), 1,
      sym__eol,
  [6921] = 1,
    ACTIONS(2555), 2,
      sym__space,
      sym__eol,
  [6926] = 1,
    ACTIONS(2557), 2,
      sym__space,
      sym__eol,
  [6931] = 2,
    ACTIONS(2559), 1,
      sym__space,
    ACTIONS(2561), 1,
      sym__eol,
  [6938] = 1,
    ACTIONS(2563), 2,
      sym__space,
      sym__eol,
  [6943] = 1,
    ACTIONS(2565), 2,
      sym__space,
      sym__eol,
  [6948] = 1,
    ACTIONS(2567), 2,
      sym__space,
      sym__eol,
  [6953] = 1,
    ACTIONS(2569), 2,
      sym__space,
      sym__eol,
  [6958] = 1,
    ACTIONS(2571), 2,
      sym__space,
      sym__eol,
  [6963] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(750), 1,
      sym_number,
  [6970] = 1,
    ACTIONS(2573), 2,
      sym__space,
      sym__eol,
  [6975] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(749), 1,
      sym_number,
  [6982] = 1,
    ACTIONS(2575), 2,
      sym__space,
      sym__eol,
  [6987] = 2,
    ACTIONS(2555), 1,
      sym__eol,
    ACTIONS(2577), 1,
      sym__space,
  [6994] = 1,
    ACTIONS(2579), 2,
      sym__space,
      sym__eol,
  [6999] = 2,
    ACTIONS(2581), 1,
      anon_sym_BANG,
    ACTIONS(2583), 1,
      aux_sym__match_localnetwork_token2,
  [7006] = 2,
    ACTIONS(2585), 1,
      anon_sym_none,
    ACTIONS(2587), 1,
      aux_sym__escape_char_token2,
  [7013] = 1,
    ACTIONS(2589), 2,
      sym__space,
      sym__eol,
  [7018] = 1,
    ACTIONS(2591), 2,
      sym__space,
      sym__eol,
  [7023] = 1,
    ACTIONS(2593), 2,
      sym__space,
      sym__eol,
  [7028] = 1,
    ACTIONS(2595), 2,
      sym__space,
      sym__eol,
  [7033] = 1,
    ACTIONS(2597), 2,
      sym__space,
      sym__eol,
  [7038] = 1,
    ACTIONS(2599), 2,
      sym__space,
      sym__eol,
  [7043] = 1,
    ACTIONS(1928), 2,
      sym__space,
      sym__eol,
  [7048] = 1,
    ACTIONS(2601), 2,
      sym__space,
      sym__eol,
  [7053] = 1,
    ACTIONS(2603), 2,
      sym__space,
      sym__eol,
  [7058] = 1,
    ACTIONS(1769), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7063] = 1,
    ACTIONS(2605), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7068] = 1,
    ACTIONS(2607), 2,
      sym__space,
      sym__eol,
  [7073] = 1,
    ACTIONS(2609), 2,
      sym__space,
      sym__eol,
  [7078] = 1,
    ACTIONS(2611), 2,
      sym__space,
      sym__eol,
  [7083] = 1,
    ACTIONS(2613), 2,
      sym__space,
      sym__eol,
  [7088] = 1,
    ACTIONS(2615), 2,
      sym__space,
      sym__eol,
  [7093] = 2,
    ACTIONS(1429), 1,
      sym__number,
    STATE(766), 1,
      sym_number,
  [7100] = 1,
    ACTIONS(2617), 2,
      sym__space,
      sym__eol,
  [7105] = 1,
    ACTIONS(2619), 2,
      sym__space,
      sym__eol,
  [7110] = 1,
    ACTIONS(2621), 2,
      sym__space,
      sym__eol,
  [7115] = 1,
    ACTIONS(2623), 2,
      sym__space,
      sym__eol,
  [7120] = 1,
    ACTIONS(2625), 2,
      sym__space,
      sym__eol,
  [7125] = 1,
    ACTIONS(2627), 2,
      sym__space,
      sym__eol,
  [7130] = 1,
    ACTIONS(2629), 2,
      sym__space,
      sym__eol,
  [7135] = 1,
    ACTIONS(2631), 2,
      sym__space,
      sym__eol,
  [7140] = 1,
    ACTIONS(2633), 2,
      sym__space,
      sym__eol,
  [7145] = 1,
    ACTIONS(2635), 2,
      sym__space,
      sym__eol,
  [7150] = 1,
    ACTIONS(2637), 2,
      sym__space,
      sym__eol,
  [7155] = 1,
    ACTIONS(2639), 2,
      sym__space,
      sym__eol,
  [7160] = 1,
    ACTIONS(2641), 2,
      sym__space,
      sym__eol,
  [7165] = 1,
    ACTIONS(2643), 2,
      sym__space,
      sym__eol,
  [7170] = 1,
    ACTIONS(2645), 2,
      sym__space,
      sym__eol,
  [7175] = 1,
    ACTIONS(2647), 2,
      sym__space,
      sym__eol,
  [7180] = 1,
    ACTIONS(2649), 2,
      sym__space,
      sym__eol,
  [7185] = 1,
    ACTIONS(1601), 2,
      sym__space,
      sym__eol,
  [7190] = 1,
    ACTIONS(2651), 2,
      sym__space,
      sym__eol,
  [7195] = 1,
    ACTIONS(2653), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [7200] = 1,
    ACTIONS(2655), 2,
      sym__space,
      sym__eol,
  [7205] = 1,
    ACTIONS(2657), 2,
      sym__space,
      sym__eol,
  [7210] = 1,
    ACTIONS(2659), 2,
      sym__space,
      sym__eol,
  [7215] = 1,
    ACTIONS(2661), 2,
      sym__space,
      sym__eol,
  [7220] = 1,
    ACTIONS(2663), 2,
      sym__space,
      sym__eol,
  [7225] = 2,
    ACTIONS(1829), 1,
      aux_sym_time_token4,
    ACTIONS(1831), 1,
      aux_sym_time_token5,
  [7232] = 1,
    ACTIONS(2665), 2,
      sym__space,
      sym__eol,
  [7237] = 2,
    ACTIONS(1077), 1,
      sym__number,
    STATE(724), 1,
      sym_time,
  [7244] = 1,
    ACTIONS(2667), 2,
      sym__space,
      sym__eol,
  [7249] = 1,
    ACTIONS(2669), 2,
      sym__space,
      sym__eol,
  [7254] = 1,
    ACTIONS(2671), 2,
      sym__space,
      sym__eol,
  [7259] = 1,
    ACTIONS(2673), 2,
      sym__space,
      sym__eol,
  [7264] = 1,
    ACTIONS(2675), 1,
      ts_builtin_sym_end,
  [7268] = 1,
    ACTIONS(2677), 1,
      anon_sym_RBRACE,
  [7272] = 1,
    ACTIONS(2679), 1,
      sym__var_name,
  [7276] = 1,
    ACTIONS(2681), 1,
      sym_cipher,
  [7280] = 1,
    ACTIONS(2683), 1,
      aux_sym__match_localnetwork_token2,
  [7284] = 1,
    ACTIONS(2685), 1,
      aux_sym__match_localnetwork_token3,
  [7288] = 1,
    ACTIONS(2687), 1,
      anon_sym_COLON,
  [7292] = 1,
    ACTIONS(2689), 1,
      sym__eol,
  [7296] = 1,
    ACTIONS(2691), 1,
      anon_sym_DQUOTE,
  [7300] = 1,
    ACTIONS(2693), 1,
      sym__var_name,
  [7304] = 1,
    ACTIONS(2695), 1,
      anon_sym_DQUOTE,
  [7308] = 1,
    ACTIONS(2697), 1,
      sym_key_sig,
  [7312] = 1,
    ACTIONS(2699), 1,
      sym_key_sig,
  [7316] = 1,
    ACTIONS(2701), 1,
      sym_kex,
  [7320] = 1,
    ACTIONS(2553), 1,
      sym__eol,
  [7324] = 1,
    ACTIONS(2703), 1,
      aux_sym__stream_local_bind_mask_token2,
  [7328] = 1,
    ACTIONS(2705), 1,
      sym__space,
  [7332] = 1,
    ACTIONS(2707), 1,
      sym_mac,
  [7336] = 1,
    ACTIONS(2709), 1,
      anon_sym_COLON,
  [7340] = 1,
    ACTIONS(2711), 1,
      anon_sym_AT,
  [7344] = 1,
    ACTIONS(2713), 1,
      sym_key_sig,
  [7348] = 1,
    ACTIONS(2485), 1,
      aux_sym_time_token5,
  [7352] = 1,
    ACTIONS(2715), 1,
      anon_sym_EQ,
  [7356] = 1,
    ACTIONS(1488), 1,
      aux_sym_time_token5,
  [7360] = 1,
    ACTIONS(2717), 1,
      aux_sym_time_token5,
  [7364] = 1,
    ACTIONS(2719), 1,
      aux_sym__match_localnetwork_token3,
  [7368] = 1,
    ACTIONS(1831), 1,
      aux_sym_time_token5,
  [7372] = 1,
    ACTIONS(2721), 1,
      aux_sym__match_localnetwork_token2,
  [7376] = 1,
    ACTIONS(2723), 1,
      anon_sym_RBRACE,
  [7380] = 1,
    ACTIONS(2725), 1,
      sym__eol,
  [7384] = 1,
    ACTIONS(2727), 1,
      aux_sym__proxy_jump_arg_token1,
  [7388] = 1,
    ACTIONS(2729), 1,
      sym_authentication,
  [7392] = 1,
    ACTIONS(2731), 1,
      anon_sym_COLON,
  [7396] = 1,
    ACTIONS(2733), 1,
      sym_mac,
  [7400] = 1,
    ACTIONS(2735), 1,
      anon_sym_DQUOTE,
  [7404] = 1,
    ACTIONS(2737), 1,
      sym_kex,
  [7408] = 1,
    ACTIONS(2739), 1,
      sym_verbosity,
  [7412] = 1,
    ACTIONS(2741), 1,
      sym_key_sig,
  [7416] = 1,
    ACTIONS(2743), 1,
      anon_sym_DQUOTE,
  [7420] = 1,
    ACTIONS(2365), 1,
      sym__eol,
  [7424] = 1,
    ACTIONS(2745), 1,
      sym_authentication,
  [7428] = 1,
    ACTIONS(2747), 1,
      sym_cipher,
  [7432] = 1,
    ACTIONS(2749), 1,
      anon_sym_RBRACE,
  [7436] = 1,
    ACTIONS(2751), 1,
      sym_sig,
  [7440] = 1,
    ACTIONS(2753), 1,
      sym_facility,
  [7444] = 1,
    ACTIONS(800), 1,
      sym__eol,
  [7448] = 1,
    ACTIONS(888), 1,
      sym__eol,
  [7452] = 1,
    ACTIONS(2755), 1,
      anon_sym_RBRACE,
  [7456] = 1,
    ACTIONS(2757), 1,
      sym_sig,
  [7460] = 1,
    ACTIONS(2759), 1,
      anon_sym_RBRACE,
  [7464] = 1,
    ACTIONS(2761), 1,
      anon_sym_RBRACE,
  [7468] = 1,
    ACTIONS(2763), 1,
      sym__var_name,
  [7472] = 1,
    ACTIONS(2765), 1,
      sym__var_name,
  [7476] = 1,
    ACTIONS(2767), 1,
      sym__var_name,
  [7480] = 1,
    ACTIONS(2769), 1,
      sym__var_name,
  [7484] = 1,
    ACTIONS(2771), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 64,
  [SMALL_STATE(38)] = 125,
  [SMALL_STATE(39)] = 186,
  [SMALL_STATE(40)] = 244,
  [SMALL_STATE(41)] = 286,
  [SMALL_STATE(42)] = 328,
  [SMALL_STATE(43)] = 364,
  [SMALL_STATE(44)] = 402,
  [SMALL_STATE(45)] = 438,
  [SMALL_STATE(46)] = 476,
  [SMALL_STATE(47)] = 509,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 557,
  [SMALL_STATE(50)] = 580,
  [SMALL_STATE(51)] = 605,
  [SMALL_STATE(52)] = 633,
  [SMALL_STATE(53)] = 655,
  [SMALL_STATE(54)] = 679,
  [SMALL_STATE(55)] = 705,
  [SMALL_STATE(56)] = 727,
  [SMALL_STATE(57)] = 755,
  [SMALL_STATE(58)] = 781,
  [SMALL_STATE(59)] = 800,
  [SMALL_STATE(60)] = 821,
  [SMALL_STATE(61)] = 844,
  [SMALL_STATE(62)] = 867,
  [SMALL_STATE(63)] = 888,
  [SMALL_STATE(64)] = 911,
  [SMALL_STATE(65)] = 936,
  [SMALL_STATE(66)] = 959,
  [SMALL_STATE(67)] = 982,
  [SMALL_STATE(68)] = 1003,
  [SMALL_STATE(69)] = 1026,
  [SMALL_STATE(70)] = 1047,
  [SMALL_STATE(71)] = 1070,
  [SMALL_STATE(72)] = 1093,
  [SMALL_STATE(73)] = 1116,
  [SMALL_STATE(74)] = 1139,
  [SMALL_STATE(75)] = 1162,
  [SMALL_STATE(76)] = 1182,
  [SMALL_STATE(77)] = 1202,
  [SMALL_STATE(78)] = 1222,
  [SMALL_STATE(79)] = 1238,
  [SMALL_STATE(80)] = 1258,
  [SMALL_STATE(81)] = 1278,
  [SMALL_STATE(82)] = 1298,
  [SMALL_STATE(83)] = 1314,
  [SMALL_STATE(84)] = 1330,
  [SMALL_STATE(85)] = 1350,
  [SMALL_STATE(86)] = 1370,
  [SMALL_STATE(87)] = 1382,
  [SMALL_STATE(88)] = 1394,
  [SMALL_STATE(89)] = 1414,
  [SMALL_STATE(90)] = 1434,
  [SMALL_STATE(91)] = 1454,
  [SMALL_STATE(92)] = 1474,
  [SMALL_STATE(93)] = 1494,
  [SMALL_STATE(94)] = 1510,
  [SMALL_STATE(95)] = 1526,
  [SMALL_STATE(96)] = 1546,
  [SMALL_STATE(97)] = 1559,
  [SMALL_STATE(98)] = 1572,
  [SMALL_STATE(99)] = 1585,
  [SMALL_STATE(100)] = 1604,
  [SMALL_STATE(101)] = 1615,
  [SMALL_STATE(102)] = 1632,
  [SMALL_STATE(103)] = 1645,
  [SMALL_STATE(104)] = 1658,
  [SMALL_STATE(105)] = 1669,
  [SMALL_STATE(106)] = 1686,
  [SMALL_STATE(107)] = 1705,
  [SMALL_STATE(108)] = 1720,
  [SMALL_STATE(109)] = 1739,
  [SMALL_STATE(110)] = 1754,
  [SMALL_STATE(111)] = 1771,
  [SMALL_STATE(112)] = 1786,
  [SMALL_STATE(113)] = 1801,
  [SMALL_STATE(114)] = 1816,
  [SMALL_STATE(115)] = 1833,
  [SMALL_STATE(116)] = 1848,
  [SMALL_STATE(117)] = 1865,
  [SMALL_STATE(118)] = 1882,
  [SMALL_STATE(119)] = 1897,
  [SMALL_STATE(120)] = 1912,
  [SMALL_STATE(121)] = 1923,
  [SMALL_STATE(122)] = 1940,
  [SMALL_STATE(123)] = 1955,
  [SMALL_STATE(124)] = 1972,
  [SMALL_STATE(125)] = 1991,
  [SMALL_STATE(126)] = 2006,
  [SMALL_STATE(127)] = 2021,
  [SMALL_STATE(128)] = 2038,
  [SMALL_STATE(129)] = 2055,
  [SMALL_STATE(130)] = 2072,
  [SMALL_STATE(131)] = 2089,
  [SMALL_STATE(132)] = 2106,
  [SMALL_STATE(133)] = 2117,
  [SMALL_STATE(134)] = 2132,
  [SMALL_STATE(135)] = 2149,
  [SMALL_STATE(136)] = 2166,
  [SMALL_STATE(137)] = 2183,
  [SMALL_STATE(138)] = 2202,
  [SMALL_STATE(139)] = 2219,
  [SMALL_STATE(140)] = 2230,
  [SMALL_STATE(141)] = 2247,
  [SMALL_STATE(142)] = 2264,
  [SMALL_STATE(143)] = 2280,
  [SMALL_STATE(144)] = 2296,
  [SMALL_STATE(145)] = 2310,
  [SMALL_STATE(146)] = 2324,
  [SMALL_STATE(147)] = 2340,
  [SMALL_STATE(148)] = 2352,
  [SMALL_STATE(149)] = 2362,
  [SMALL_STATE(150)] = 2372,
  [SMALL_STATE(151)] = 2386,
  [SMALL_STATE(152)] = 2398,
  [SMALL_STATE(153)] = 2410,
  [SMALL_STATE(154)] = 2420,
  [SMALL_STATE(155)] = 2430,
  [SMALL_STATE(156)] = 2444,
  [SMALL_STATE(157)] = 2454,
  [SMALL_STATE(158)] = 2462,
  [SMALL_STATE(159)] = 2476,
  [SMALL_STATE(160)] = 2492,
  [SMALL_STATE(161)] = 2506,
  [SMALL_STATE(162)] = 2522,
  [SMALL_STATE(163)] = 2532,
  [SMALL_STATE(164)] = 2542,
  [SMALL_STATE(165)] = 2552,
  [SMALL_STATE(166)] = 2566,
  [SMALL_STATE(167)] = 2580,
  [SMALL_STATE(168)] = 2592,
  [SMALL_STATE(169)] = 2606,
  [SMALL_STATE(170)] = 2614,
  [SMALL_STATE(171)] = 2626,
  [SMALL_STATE(172)] = 2636,
  [SMALL_STATE(173)] = 2652,
  [SMALL_STATE(174)] = 2664,
  [SMALL_STATE(175)] = 2678,
  [SMALL_STATE(176)] = 2688,
  [SMALL_STATE(177)] = 2698,
  [SMALL_STATE(178)] = 2714,
  [SMALL_STATE(179)] = 2725,
  [SMALL_STATE(180)] = 2736,
  [SMALL_STATE(181)] = 2745,
  [SMALL_STATE(182)] = 2756,
  [SMALL_STATE(183)] = 2769,
  [SMALL_STATE(184)] = 2780,
  [SMALL_STATE(185)] = 2791,
  [SMALL_STATE(186)] = 2802,
  [SMALL_STATE(187)] = 2811,
  [SMALL_STATE(188)] = 2822,
  [SMALL_STATE(189)] = 2833,
  [SMALL_STATE(190)] = 2844,
  [SMALL_STATE(191)] = 2855,
  [SMALL_STATE(192)] = 2866,
  [SMALL_STATE(193)] = 2877,
  [SMALL_STATE(194)] = 2888,
  [SMALL_STATE(195)] = 2897,
  [SMALL_STATE(196)] = 2908,
  [SMALL_STATE(197)] = 2917,
  [SMALL_STATE(198)] = 2926,
  [SMALL_STATE(199)] = 2939,
  [SMALL_STATE(200)] = 2950,
  [SMALL_STATE(201)] = 2959,
  [SMALL_STATE(202)] = 2970,
  [SMALL_STATE(203)] = 2981,
  [SMALL_STATE(204)] = 2992,
  [SMALL_STATE(205)] = 3003,
  [SMALL_STATE(206)] = 3014,
  [SMALL_STATE(207)] = 3025,
  [SMALL_STATE(208)] = 3036,
  [SMALL_STATE(209)] = 3047,
  [SMALL_STATE(210)] = 3058,
  [SMALL_STATE(211)] = 3069,
  [SMALL_STATE(212)] = 3080,
  [SMALL_STATE(213)] = 3089,
  [SMALL_STATE(214)] = 3102,
  [SMALL_STATE(215)] = 3109,
  [SMALL_STATE(216)] = 3122,
  [SMALL_STATE(217)] = 3131,
  [SMALL_STATE(218)] = 3142,
  [SMALL_STATE(219)] = 3151,
  [SMALL_STATE(220)] = 3164,
  [SMALL_STATE(221)] = 3175,
  [SMALL_STATE(222)] = 3186,
  [SMALL_STATE(223)] = 3197,
  [SMALL_STATE(224)] = 3210,
  [SMALL_STATE(225)] = 3221,
  [SMALL_STATE(226)] = 3228,
  [SMALL_STATE(227)] = 3239,
  [SMALL_STATE(228)] = 3250,
  [SMALL_STATE(229)] = 3261,
  [SMALL_STATE(230)] = 3272,
  [SMALL_STATE(231)] = 3283,
  [SMALL_STATE(232)] = 3296,
  [SMALL_STATE(233)] = 3307,
  [SMALL_STATE(234)] = 3318,
  [SMALL_STATE(235)] = 3327,
  [SMALL_STATE(236)] = 3340,
  [SMALL_STATE(237)] = 3349,
  [SMALL_STATE(238)] = 3362,
  [SMALL_STATE(239)] = 3373,
  [SMALL_STATE(240)] = 3386,
  [SMALL_STATE(241)] = 3397,
  [SMALL_STATE(242)] = 3408,
  [SMALL_STATE(243)] = 3419,
  [SMALL_STATE(244)] = 3430,
  [SMALL_STATE(245)] = 3441,
  [SMALL_STATE(246)] = 3452,
  [SMALL_STATE(247)] = 3461,
  [SMALL_STATE(248)] = 3472,
  [SMALL_STATE(249)] = 3485,
  [SMALL_STATE(250)] = 3496,
  [SMALL_STATE(251)] = 3507,
  [SMALL_STATE(252)] = 3520,
  [SMALL_STATE(253)] = 3529,
  [SMALL_STATE(254)] = 3540,
  [SMALL_STATE(255)] = 3551,
  [SMALL_STATE(256)] = 3562,
  [SMALL_STATE(257)] = 3573,
  [SMALL_STATE(258)] = 3584,
  [SMALL_STATE(259)] = 3597,
  [SMALL_STATE(260)] = 3608,
  [SMALL_STATE(261)] = 3619,
  [SMALL_STATE(262)] = 3628,
  [SMALL_STATE(263)] = 3639,
  [SMALL_STATE(264)] = 3650,
  [SMALL_STATE(265)] = 3661,
  [SMALL_STATE(266)] = 3672,
  [SMALL_STATE(267)] = 3683,
  [SMALL_STATE(268)] = 3694,
  [SMALL_STATE(269)] = 3705,
  [SMALL_STATE(270)] = 3716,
  [SMALL_STATE(271)] = 3727,
  [SMALL_STATE(272)] = 3740,
  [SMALL_STATE(273)] = 3749,
  [SMALL_STATE(274)] = 3758,
  [SMALL_STATE(275)] = 3767,
  [SMALL_STATE(276)] = 3776,
  [SMALL_STATE(277)] = 3784,
  [SMALL_STATE(278)] = 3794,
  [SMALL_STATE(279)] = 3804,
  [SMALL_STATE(280)] = 3812,
  [SMALL_STATE(281)] = 3822,
  [SMALL_STATE(282)] = 3832,
  [SMALL_STATE(283)] = 3840,
  [SMALL_STATE(284)] = 3850,
  [SMALL_STATE(285)] = 3858,
  [SMALL_STATE(286)] = 3868,
  [SMALL_STATE(287)] = 3878,
  [SMALL_STATE(288)] = 3888,
  [SMALL_STATE(289)] = 3898,
  [SMALL_STATE(290)] = 3906,
  [SMALL_STATE(291)] = 3916,
  [SMALL_STATE(292)] = 3924,
  [SMALL_STATE(293)] = 3934,
  [SMALL_STATE(294)] = 3944,
  [SMALL_STATE(295)] = 3952,
  [SMALL_STATE(296)] = 3960,
  [SMALL_STATE(297)] = 3970,
  [SMALL_STATE(298)] = 3978,
  [SMALL_STATE(299)] = 3988,
  [SMALL_STATE(300)] = 3998,
  [SMALL_STATE(301)] = 4008,
  [SMALL_STATE(302)] = 4016,
  [SMALL_STATE(303)] = 4024,
  [SMALL_STATE(304)] = 4034,
  [SMALL_STATE(305)] = 4044,
  [SMALL_STATE(306)] = 4054,
  [SMALL_STATE(307)] = 4064,
  [SMALL_STATE(308)] = 4074,
  [SMALL_STATE(309)] = 4084,
  [SMALL_STATE(310)] = 4094,
  [SMALL_STATE(311)] = 4104,
  [SMALL_STATE(312)] = 4114,
  [SMALL_STATE(313)] = 4124,
  [SMALL_STATE(314)] = 4134,
  [SMALL_STATE(315)] = 4144,
  [SMALL_STATE(316)] = 4154,
  [SMALL_STATE(317)] = 4164,
  [SMALL_STATE(318)] = 4174,
  [SMALL_STATE(319)] = 4182,
  [SMALL_STATE(320)] = 4192,
  [SMALL_STATE(321)] = 4198,
  [SMALL_STATE(322)] = 4206,
  [SMALL_STATE(323)] = 4214,
  [SMALL_STATE(324)] = 4220,
  [SMALL_STATE(325)] = 4230,
  [SMALL_STATE(326)] = 4240,
  [SMALL_STATE(327)] = 4248,
  [SMALL_STATE(328)] = 4258,
  [SMALL_STATE(329)] = 4268,
  [SMALL_STATE(330)] = 4278,
  [SMALL_STATE(331)] = 4288,
  [SMALL_STATE(332)] = 4298,
  [SMALL_STATE(333)] = 4308,
  [SMALL_STATE(334)] = 4318,
  [SMALL_STATE(335)] = 4326,
  [SMALL_STATE(336)] = 4332,
  [SMALL_STATE(337)] = 4342,
  [SMALL_STATE(338)] = 4352,
  [SMALL_STATE(339)] = 4362,
  [SMALL_STATE(340)] = 4372,
  [SMALL_STATE(341)] = 4380,
  [SMALL_STATE(342)] = 4390,
  [SMALL_STATE(343)] = 4398,
  [SMALL_STATE(344)] = 4408,
  [SMALL_STATE(345)] = 4418,
  [SMALL_STATE(346)] = 4426,
  [SMALL_STATE(347)] = 4432,
  [SMALL_STATE(348)] = 4442,
  [SMALL_STATE(349)] = 4452,
  [SMALL_STATE(350)] = 4462,
  [SMALL_STATE(351)] = 4472,
  [SMALL_STATE(352)] = 4482,
  [SMALL_STATE(353)] = 4492,
  [SMALL_STATE(354)] = 4502,
  [SMALL_STATE(355)] = 4512,
  [SMALL_STATE(356)] = 4522,
  [SMALL_STATE(357)] = 4530,
  [SMALL_STATE(358)] = 4540,
  [SMALL_STATE(359)] = 4550,
  [SMALL_STATE(360)] = 4560,
  [SMALL_STATE(361)] = 4570,
  [SMALL_STATE(362)] = 4580,
  [SMALL_STATE(363)] = 4590,
  [SMALL_STATE(364)] = 4600,
  [SMALL_STATE(365)] = 4610,
  [SMALL_STATE(366)] = 4620,
  [SMALL_STATE(367)] = 4630,
  [SMALL_STATE(368)] = 4640,
  [SMALL_STATE(369)] = 4650,
  [SMALL_STATE(370)] = 4658,
  [SMALL_STATE(371)] = 4666,
  [SMALL_STATE(372)] = 4674,
  [SMALL_STATE(373)] = 4684,
  [SMALL_STATE(374)] = 4694,
  [SMALL_STATE(375)] = 4704,
  [SMALL_STATE(376)] = 4714,
  [SMALL_STATE(377)] = 4724,
  [SMALL_STATE(378)] = 4734,
  [SMALL_STATE(379)] = 4744,
  [SMALL_STATE(380)] = 4754,
  [SMALL_STATE(381)] = 4762,
  [SMALL_STATE(382)] = 4772,
  [SMALL_STATE(383)] = 4780,
  [SMALL_STATE(384)] = 4788,
  [SMALL_STATE(385)] = 4798,
  [SMALL_STATE(386)] = 4808,
  [SMALL_STATE(387)] = 4818,
  [SMALL_STATE(388)] = 4826,
  [SMALL_STATE(389)] = 4834,
  [SMALL_STATE(390)] = 4844,
  [SMALL_STATE(391)] = 4854,
  [SMALL_STATE(392)] = 4862,
  [SMALL_STATE(393)] = 4872,
  [SMALL_STATE(394)] = 4882,
  [SMALL_STATE(395)] = 4892,
  [SMALL_STATE(396)] = 4902,
  [SMALL_STATE(397)] = 4912,
  [SMALL_STATE(398)] = 4922,
  [SMALL_STATE(399)] = 4930,
  [SMALL_STATE(400)] = 4940,
  [SMALL_STATE(401)] = 4950,
  [SMALL_STATE(402)] = 4958,
  [SMALL_STATE(403)] = 4966,
  [SMALL_STATE(404)] = 4976,
  [SMALL_STATE(405)] = 4984,
  [SMALL_STATE(406)] = 4994,
  [SMALL_STATE(407)] = 5004,
  [SMALL_STATE(408)] = 5014,
  [SMALL_STATE(409)] = 5024,
  [SMALL_STATE(410)] = 5034,
  [SMALL_STATE(411)] = 5044,
  [SMALL_STATE(412)] = 5052,
  [SMALL_STATE(413)] = 5062,
  [SMALL_STATE(414)] = 5068,
  [SMALL_STATE(415)] = 5078,
  [SMALL_STATE(416)] = 5088,
  [SMALL_STATE(417)] = 5098,
  [SMALL_STATE(418)] = 5104,
  [SMALL_STATE(419)] = 5114,
  [SMALL_STATE(420)] = 5124,
  [SMALL_STATE(421)] = 5134,
  [SMALL_STATE(422)] = 5140,
  [SMALL_STATE(423)] = 5150,
  [SMALL_STATE(424)] = 5160,
  [SMALL_STATE(425)] = 5170,
  [SMALL_STATE(426)] = 5180,
  [SMALL_STATE(427)] = 5190,
  [SMALL_STATE(428)] = 5200,
  [SMALL_STATE(429)] = 5206,
  [SMALL_STATE(430)] = 5216,
  [SMALL_STATE(431)] = 5226,
  [SMALL_STATE(432)] = 5234,
  [SMALL_STATE(433)] = 5244,
  [SMALL_STATE(434)] = 5254,
  [SMALL_STATE(435)] = 5264,
  [SMALL_STATE(436)] = 5274,
  [SMALL_STATE(437)] = 5280,
  [SMALL_STATE(438)] = 5288,
  [SMALL_STATE(439)] = 5298,
  [SMALL_STATE(440)] = 5308,
  [SMALL_STATE(441)] = 5318,
  [SMALL_STATE(442)] = 5324,
  [SMALL_STATE(443)] = 5334,
  [SMALL_STATE(444)] = 5340,
  [SMALL_STATE(445)] = 5350,
  [SMALL_STATE(446)] = 5360,
  [SMALL_STATE(447)] = 5370,
  [SMALL_STATE(448)] = 5380,
  [SMALL_STATE(449)] = 5386,
  [SMALL_STATE(450)] = 5396,
  [SMALL_STATE(451)] = 5406,
  [SMALL_STATE(452)] = 5416,
  [SMALL_STATE(453)] = 5426,
  [SMALL_STATE(454)] = 5436,
  [SMALL_STATE(455)] = 5446,
  [SMALL_STATE(456)] = 5456,
  [SMALL_STATE(457)] = 5466,
  [SMALL_STATE(458)] = 5476,
  [SMALL_STATE(459)] = 5486,
  [SMALL_STATE(460)] = 5496,
  [SMALL_STATE(461)] = 5506,
  [SMALL_STATE(462)] = 5512,
  [SMALL_STATE(463)] = 5522,
  [SMALL_STATE(464)] = 5532,
  [SMALL_STATE(465)] = 5540,
  [SMALL_STATE(466)] = 5550,
  [SMALL_STATE(467)] = 5560,
  [SMALL_STATE(468)] = 5570,
  [SMALL_STATE(469)] = 5580,
  [SMALL_STATE(470)] = 5590,
  [SMALL_STATE(471)] = 5600,
  [SMALL_STATE(472)] = 5610,
  [SMALL_STATE(473)] = 5620,
  [SMALL_STATE(474)] = 5630,
  [SMALL_STATE(475)] = 5640,
  [SMALL_STATE(476)] = 5650,
  [SMALL_STATE(477)] = 5660,
  [SMALL_STATE(478)] = 5670,
  [SMALL_STATE(479)] = 5680,
  [SMALL_STATE(480)] = 5690,
  [SMALL_STATE(481)] = 5698,
  [SMALL_STATE(482)] = 5708,
  [SMALL_STATE(483)] = 5718,
  [SMALL_STATE(484)] = 5728,
  [SMALL_STATE(485)] = 5736,
  [SMALL_STATE(486)] = 5744,
  [SMALL_STATE(487)] = 5752,
  [SMALL_STATE(488)] = 5760,
  [SMALL_STATE(489)] = 5770,
  [SMALL_STATE(490)] = 5780,
  [SMALL_STATE(491)] = 5790,
  [SMALL_STATE(492)] = 5800,
  [SMALL_STATE(493)] = 5808,
  [SMALL_STATE(494)] = 5818,
  [SMALL_STATE(495)] = 5828,
  [SMALL_STATE(496)] = 5833,
  [SMALL_STATE(497)] = 5838,
  [SMALL_STATE(498)] = 5843,
  [SMALL_STATE(499)] = 5848,
  [SMALL_STATE(500)] = 5853,
  [SMALL_STATE(501)] = 5858,
  [SMALL_STATE(502)] = 5863,
  [SMALL_STATE(503)] = 5870,
  [SMALL_STATE(504)] = 5875,
  [SMALL_STATE(505)] = 5880,
  [SMALL_STATE(506)] = 5887,
  [SMALL_STATE(507)] = 5892,
  [SMALL_STATE(508)] = 5897,
  [SMALL_STATE(509)] = 5902,
  [SMALL_STATE(510)] = 5907,
  [SMALL_STATE(511)] = 5912,
  [SMALL_STATE(512)] = 5917,
  [SMALL_STATE(513)] = 5924,
  [SMALL_STATE(514)] = 5929,
  [SMALL_STATE(515)] = 5934,
  [SMALL_STATE(516)] = 5939,
  [SMALL_STATE(517)] = 5946,
  [SMALL_STATE(518)] = 5951,
  [SMALL_STATE(519)] = 5956,
  [SMALL_STATE(520)] = 5963,
  [SMALL_STATE(521)] = 5968,
  [SMALL_STATE(522)] = 5975,
  [SMALL_STATE(523)] = 5982,
  [SMALL_STATE(524)] = 5987,
  [SMALL_STATE(525)] = 5992,
  [SMALL_STATE(526)] = 5997,
  [SMALL_STATE(527)] = 6002,
  [SMALL_STATE(528)] = 6009,
  [SMALL_STATE(529)] = 6014,
  [SMALL_STATE(530)] = 6019,
  [SMALL_STATE(531)] = 6024,
  [SMALL_STATE(532)] = 6029,
  [SMALL_STATE(533)] = 6034,
  [SMALL_STATE(534)] = 6039,
  [SMALL_STATE(535)] = 6044,
  [SMALL_STATE(536)] = 6049,
  [SMALL_STATE(537)] = 6054,
  [SMALL_STATE(538)] = 6059,
  [SMALL_STATE(539)] = 6064,
  [SMALL_STATE(540)] = 6069,
  [SMALL_STATE(541)] = 6076,
  [SMALL_STATE(542)] = 6081,
  [SMALL_STATE(543)] = 6086,
  [SMALL_STATE(544)] = 6091,
  [SMALL_STATE(545)] = 6096,
  [SMALL_STATE(546)] = 6101,
  [SMALL_STATE(547)] = 6106,
  [SMALL_STATE(548)] = 6111,
  [SMALL_STATE(549)] = 6116,
  [SMALL_STATE(550)] = 6121,
  [SMALL_STATE(551)] = 6126,
  [SMALL_STATE(552)] = 6133,
  [SMALL_STATE(553)] = 6138,
  [SMALL_STATE(554)] = 6143,
  [SMALL_STATE(555)] = 6148,
  [SMALL_STATE(556)] = 6153,
  [SMALL_STATE(557)] = 6158,
  [SMALL_STATE(558)] = 6165,
  [SMALL_STATE(559)] = 6170,
  [SMALL_STATE(560)] = 6175,
  [SMALL_STATE(561)] = 6180,
  [SMALL_STATE(562)] = 6185,
  [SMALL_STATE(563)] = 6190,
  [SMALL_STATE(564)] = 6195,
  [SMALL_STATE(565)] = 6202,
  [SMALL_STATE(566)] = 6207,
  [SMALL_STATE(567)] = 6212,
  [SMALL_STATE(568)] = 6217,
  [SMALL_STATE(569)] = 6224,
  [SMALL_STATE(570)] = 6229,
  [SMALL_STATE(571)] = 6234,
  [SMALL_STATE(572)] = 6239,
  [SMALL_STATE(573)] = 6244,
  [SMALL_STATE(574)] = 6249,
  [SMALL_STATE(575)] = 6254,
  [SMALL_STATE(576)] = 6259,
  [SMALL_STATE(577)] = 6266,
  [SMALL_STATE(578)] = 6271,
  [SMALL_STATE(579)] = 6276,
  [SMALL_STATE(580)] = 6281,
  [SMALL_STATE(581)] = 6286,
  [SMALL_STATE(582)] = 6291,
  [SMALL_STATE(583)] = 6296,
  [SMALL_STATE(584)] = 6301,
  [SMALL_STATE(585)] = 6306,
  [SMALL_STATE(586)] = 6311,
  [SMALL_STATE(587)] = 6316,
  [SMALL_STATE(588)] = 6321,
  [SMALL_STATE(589)] = 6326,
  [SMALL_STATE(590)] = 6331,
  [SMALL_STATE(591)] = 6338,
  [SMALL_STATE(592)] = 6343,
  [SMALL_STATE(593)] = 6348,
  [SMALL_STATE(594)] = 6353,
  [SMALL_STATE(595)] = 6358,
  [SMALL_STATE(596)] = 6363,
  [SMALL_STATE(597)] = 6368,
  [SMALL_STATE(598)] = 6373,
  [SMALL_STATE(599)] = 6378,
  [SMALL_STATE(600)] = 6383,
  [SMALL_STATE(601)] = 6388,
  [SMALL_STATE(602)] = 6393,
  [SMALL_STATE(603)] = 6398,
  [SMALL_STATE(604)] = 6405,
  [SMALL_STATE(605)] = 6412,
  [SMALL_STATE(606)] = 6417,
  [SMALL_STATE(607)] = 6422,
  [SMALL_STATE(608)] = 6427,
  [SMALL_STATE(609)] = 6432,
  [SMALL_STATE(610)] = 6437,
  [SMALL_STATE(611)] = 6442,
  [SMALL_STATE(612)] = 6447,
  [SMALL_STATE(613)] = 6452,
  [SMALL_STATE(614)] = 6457,
  [SMALL_STATE(615)] = 6462,
  [SMALL_STATE(616)] = 6467,
  [SMALL_STATE(617)] = 6472,
  [SMALL_STATE(618)] = 6477,
  [SMALL_STATE(619)] = 6482,
  [SMALL_STATE(620)] = 6487,
  [SMALL_STATE(621)] = 6492,
  [SMALL_STATE(622)] = 6497,
  [SMALL_STATE(623)] = 6502,
  [SMALL_STATE(624)] = 6509,
  [SMALL_STATE(625)] = 6514,
  [SMALL_STATE(626)] = 6519,
  [SMALL_STATE(627)] = 6524,
  [SMALL_STATE(628)] = 6529,
  [SMALL_STATE(629)] = 6534,
  [SMALL_STATE(630)] = 6539,
  [SMALL_STATE(631)] = 6544,
  [SMALL_STATE(632)] = 6549,
  [SMALL_STATE(633)] = 6554,
  [SMALL_STATE(634)] = 6559,
  [SMALL_STATE(635)] = 6564,
  [SMALL_STATE(636)] = 6569,
  [SMALL_STATE(637)] = 6574,
  [SMALL_STATE(638)] = 6579,
  [SMALL_STATE(639)] = 6584,
  [SMALL_STATE(640)] = 6589,
  [SMALL_STATE(641)] = 6594,
  [SMALL_STATE(642)] = 6599,
  [SMALL_STATE(643)] = 6604,
  [SMALL_STATE(644)] = 6609,
  [SMALL_STATE(645)] = 6614,
  [SMALL_STATE(646)] = 6621,
  [SMALL_STATE(647)] = 6626,
  [SMALL_STATE(648)] = 6631,
  [SMALL_STATE(649)] = 6636,
  [SMALL_STATE(650)] = 6643,
  [SMALL_STATE(651)] = 6648,
  [SMALL_STATE(652)] = 6653,
  [SMALL_STATE(653)] = 6658,
  [SMALL_STATE(654)] = 6663,
  [SMALL_STATE(655)] = 6668,
  [SMALL_STATE(656)] = 6675,
  [SMALL_STATE(657)] = 6680,
  [SMALL_STATE(658)] = 6685,
  [SMALL_STATE(659)] = 6690,
  [SMALL_STATE(660)] = 6695,
  [SMALL_STATE(661)] = 6702,
  [SMALL_STATE(662)] = 6707,
  [SMALL_STATE(663)] = 6712,
  [SMALL_STATE(664)] = 6717,
  [SMALL_STATE(665)] = 6722,
  [SMALL_STATE(666)] = 6727,
  [SMALL_STATE(667)] = 6732,
  [SMALL_STATE(668)] = 6737,
  [SMALL_STATE(669)] = 6742,
  [SMALL_STATE(670)] = 6747,
  [SMALL_STATE(671)] = 6752,
  [SMALL_STATE(672)] = 6757,
  [SMALL_STATE(673)] = 6762,
  [SMALL_STATE(674)] = 6767,
  [SMALL_STATE(675)] = 6772,
  [SMALL_STATE(676)] = 6777,
  [SMALL_STATE(677)] = 6782,
  [SMALL_STATE(678)] = 6787,
  [SMALL_STATE(679)] = 6792,
  [SMALL_STATE(680)] = 6797,
  [SMALL_STATE(681)] = 6802,
  [SMALL_STATE(682)] = 6807,
  [SMALL_STATE(683)] = 6812,
  [SMALL_STATE(684)] = 6817,
  [SMALL_STATE(685)] = 6822,
  [SMALL_STATE(686)] = 6827,
  [SMALL_STATE(687)] = 6832,
  [SMALL_STATE(688)] = 6837,
  [SMALL_STATE(689)] = 6842,
  [SMALL_STATE(690)] = 6847,
  [SMALL_STATE(691)] = 6852,
  [SMALL_STATE(692)] = 6857,
  [SMALL_STATE(693)] = 6862,
  [SMALL_STATE(694)] = 6867,
  [SMALL_STATE(695)] = 6872,
  [SMALL_STATE(696)] = 6877,
  [SMALL_STATE(697)] = 6882,
  [SMALL_STATE(698)] = 6887,
  [SMALL_STATE(699)] = 6892,
  [SMALL_STATE(700)] = 6897,
  [SMALL_STATE(701)] = 6902,
  [SMALL_STATE(702)] = 6907,
  [SMALL_STATE(703)] = 6914,
  [SMALL_STATE(704)] = 6921,
  [SMALL_STATE(705)] = 6926,
  [SMALL_STATE(706)] = 6931,
  [SMALL_STATE(707)] = 6938,
  [SMALL_STATE(708)] = 6943,
  [SMALL_STATE(709)] = 6948,
  [SMALL_STATE(710)] = 6953,
  [SMALL_STATE(711)] = 6958,
  [SMALL_STATE(712)] = 6963,
  [SMALL_STATE(713)] = 6970,
  [SMALL_STATE(714)] = 6975,
  [SMALL_STATE(715)] = 6982,
  [SMALL_STATE(716)] = 6987,
  [SMALL_STATE(717)] = 6994,
  [SMALL_STATE(718)] = 6999,
  [SMALL_STATE(719)] = 7006,
  [SMALL_STATE(720)] = 7013,
  [SMALL_STATE(721)] = 7018,
  [SMALL_STATE(722)] = 7023,
  [SMALL_STATE(723)] = 7028,
  [SMALL_STATE(724)] = 7033,
  [SMALL_STATE(725)] = 7038,
  [SMALL_STATE(726)] = 7043,
  [SMALL_STATE(727)] = 7048,
  [SMALL_STATE(728)] = 7053,
  [SMALL_STATE(729)] = 7058,
  [SMALL_STATE(730)] = 7063,
  [SMALL_STATE(731)] = 7068,
  [SMALL_STATE(732)] = 7073,
  [SMALL_STATE(733)] = 7078,
  [SMALL_STATE(734)] = 7083,
  [SMALL_STATE(735)] = 7088,
  [SMALL_STATE(736)] = 7093,
  [SMALL_STATE(737)] = 7100,
  [SMALL_STATE(738)] = 7105,
  [SMALL_STATE(739)] = 7110,
  [SMALL_STATE(740)] = 7115,
  [SMALL_STATE(741)] = 7120,
  [SMALL_STATE(742)] = 7125,
  [SMALL_STATE(743)] = 7130,
  [SMALL_STATE(744)] = 7135,
  [SMALL_STATE(745)] = 7140,
  [SMALL_STATE(746)] = 7145,
  [SMALL_STATE(747)] = 7150,
  [SMALL_STATE(748)] = 7155,
  [SMALL_STATE(749)] = 7160,
  [SMALL_STATE(750)] = 7165,
  [SMALL_STATE(751)] = 7170,
  [SMALL_STATE(752)] = 7175,
  [SMALL_STATE(753)] = 7180,
  [SMALL_STATE(754)] = 7185,
  [SMALL_STATE(755)] = 7190,
  [SMALL_STATE(756)] = 7195,
  [SMALL_STATE(757)] = 7200,
  [SMALL_STATE(758)] = 7205,
  [SMALL_STATE(759)] = 7210,
  [SMALL_STATE(760)] = 7215,
  [SMALL_STATE(761)] = 7220,
  [SMALL_STATE(762)] = 7225,
  [SMALL_STATE(763)] = 7232,
  [SMALL_STATE(764)] = 7237,
  [SMALL_STATE(765)] = 7244,
  [SMALL_STATE(766)] = 7249,
  [SMALL_STATE(767)] = 7254,
  [SMALL_STATE(768)] = 7259,
  [SMALL_STATE(769)] = 7264,
  [SMALL_STATE(770)] = 7268,
  [SMALL_STATE(771)] = 7272,
  [SMALL_STATE(772)] = 7276,
  [SMALL_STATE(773)] = 7280,
  [SMALL_STATE(774)] = 7284,
  [SMALL_STATE(775)] = 7288,
  [SMALL_STATE(776)] = 7292,
  [SMALL_STATE(777)] = 7296,
  [SMALL_STATE(778)] = 7300,
  [SMALL_STATE(779)] = 7304,
  [SMALL_STATE(780)] = 7308,
  [SMALL_STATE(781)] = 7312,
  [SMALL_STATE(782)] = 7316,
  [SMALL_STATE(783)] = 7320,
  [SMALL_STATE(784)] = 7324,
  [SMALL_STATE(785)] = 7328,
  [SMALL_STATE(786)] = 7332,
  [SMALL_STATE(787)] = 7336,
  [SMALL_STATE(788)] = 7340,
  [SMALL_STATE(789)] = 7344,
  [SMALL_STATE(790)] = 7348,
  [SMALL_STATE(791)] = 7352,
  [SMALL_STATE(792)] = 7356,
  [SMALL_STATE(793)] = 7360,
  [SMALL_STATE(794)] = 7364,
  [SMALL_STATE(795)] = 7368,
  [SMALL_STATE(796)] = 7372,
  [SMALL_STATE(797)] = 7376,
  [SMALL_STATE(798)] = 7380,
  [SMALL_STATE(799)] = 7384,
  [SMALL_STATE(800)] = 7388,
  [SMALL_STATE(801)] = 7392,
  [SMALL_STATE(802)] = 7396,
  [SMALL_STATE(803)] = 7400,
  [SMALL_STATE(804)] = 7404,
  [SMALL_STATE(805)] = 7408,
  [SMALL_STATE(806)] = 7412,
  [SMALL_STATE(807)] = 7416,
  [SMALL_STATE(808)] = 7420,
  [SMALL_STATE(809)] = 7424,
  [SMALL_STATE(810)] = 7428,
  [SMALL_STATE(811)] = 7432,
  [SMALL_STATE(812)] = 7436,
  [SMALL_STATE(813)] = 7440,
  [SMALL_STATE(814)] = 7444,
  [SMALL_STATE(815)] = 7448,
  [SMALL_STATE(816)] = 7452,
  [SMALL_STATE(817)] = 7456,
  [SMALL_STATE(818)] = 7460,
  [SMALL_STATE(819)] = 7464,
  [SMALL_STATE(820)] = 7468,
  [SMALL_STATE(821)] = 7472,
  [SMALL_STATE(822)] = 7476,
  [SMALL_STATE(823)] = 7480,
  [SMALL_STATE(824)] = 7484,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(406),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(280),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(281),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(286),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(287),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(288),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(292),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(293),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(299),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(310),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(311),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(313),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(314),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(316),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(317),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(319),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(328),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(329),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(332),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(333),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(339),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(343),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(344),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(348),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(350),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(351),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(355),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(357),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(360),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(361),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(363),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(365),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(367),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(368),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(372),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(374),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(375),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(376),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(379),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(381),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(384),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(385),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(386),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(389),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(390),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(392),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(394),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(395),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(397),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(399),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(400),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(403),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(405),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(476),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(410),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(412),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(416),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(418),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(419),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(423),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(425),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(426),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(427),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(429),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(432),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(433),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(434),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(435),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(438),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(442),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(444),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(445),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(446),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(447),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(450),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(452),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(453),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(454),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(459),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(463),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(465),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(467),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(468),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(814),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(6),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(280),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(281),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(286),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(287),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(288),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(290),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(292),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(293),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(296),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(299),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(310),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(311),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(313),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(314),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(316),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(317),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(319),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(325),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(328),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(329),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(332),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(333),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(339),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(343),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(344),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(348),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(349),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(350),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(351),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(352),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(354),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(355),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(357),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(358),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(360),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(361),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(362),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(363),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(365),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(367),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(368),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(372),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(374),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(375),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(376),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(378),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(379),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(381),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(384),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(385),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(386),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(389),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(390),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(392),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(394),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(395),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(396),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(397),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(399),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(400),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(403),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(405),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(476),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(410),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(412),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(416),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(418),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(419),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(420),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(423),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(425),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(426),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(427),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(429),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(432),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(433),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(434),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(435),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(438),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(442),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(444),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(445),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(446),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(447),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(450),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(452),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(453),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(454),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(459),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(463),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(465),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(467),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(468),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(590),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(18),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 64),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 64),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 26),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 26),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 15),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 15),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 64),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 64),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 7, .production_id = 16),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 7, .production_id = 16),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 28),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 28),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, .production_id = 16),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, .production_id = 16),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, .production_id = 16),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, .production_id = 16),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 15),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 28),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 28),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 26),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 26),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(86),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(86),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(771),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 9),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(132),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(132),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(823),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(163),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(163),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(820),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote_command, 3, .production_id = 24),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, .production_id = 24),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, .production_id = 9),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(171),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(171),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(822),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 14),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 59),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(154),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(154),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(821),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hosts_string, 1, .production_id = 14),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 14),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [1085] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(197),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(197),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(824),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 9),
  [1096] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(139),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(139),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 45),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 45),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, .production_id = 34),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 3, .production_id = 71),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2), SHIFT_REPEAT(169),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, .production_id = 33),
  [1147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1), REDUCE(aux_sym__string_repeat1, 1),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proxy_string, 1, .production_id = 14),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 14),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, .production_id = 38),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, .production_id = 25),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 14),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, .production_id = 34),
  [1188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(153),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(153),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 3, .production_id = 71),
  [1202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(218),
  [1205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(218),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(162),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(162),
  [1218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(186),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(186),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2),
  [1230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(148),
  [1233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(148),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(216),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(216),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(200),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(200),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(492),
  [1275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(492),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(152),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(272),
  [1312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(272),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(194),
  [1334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(194),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2),
  [1359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(383),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(383),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token_string, 1, .production_id = 14),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 14),
  [1379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(802),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 28),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 28),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 15),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 28),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 15),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 15),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 22),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(320),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 28),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 28),
  [1439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1), REDUCE(aux_sym__string_repeat2, 1),
  [1442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1), REDUCE(aux_sym__string_repeat2, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 31),
  [1447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(136),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 28),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 15),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 28),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 28),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, .production_id = 34),
  [1466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, .production_id = 39),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 15),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 15),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 15),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 44),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 41),
  [1498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(812),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 15),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 41),
  [1507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(810),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1, .production_id = 14),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, .production_id = 10),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 41),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, .production_id = 10),
  [1538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(806),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 41),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 41),
  [1547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(804),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 54), SHIFT_REPEAT(151),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 54),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 41),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(800),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 41),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 9),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, .production_id = 60),
  [1580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 61),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 62),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 59),
  [1596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2), SHIFT_REPEAT(158),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, .production_id = 66),
  [1603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2), SHIFT_REPEAT(718),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 67),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 4, .production_id = 29),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(604),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 3),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2),
  [1771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2), SHIFT_REPEAT(774),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2),
  [1782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2), SHIFT_REPEAT(145),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 15),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 68),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 17),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 3, .production_id = 19),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 54),
  [1915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 54), SHIFT_REPEAT(144),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 15),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [1974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 15),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [2020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [2032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [2056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [2058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 36), SHIFT_REPEAT(54),
  [2061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 36),
  [2063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 36), SHIFT_REPEAT(576),
  [2066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 36),
  [2068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 36), SHIFT_REPEAT(118),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 36),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [2075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 41),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [2085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 57), SHIFT_REPEAT(126),
  [2088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 57),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 53),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 23),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [2138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(140),
  [2141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [2145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 15),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [2153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [2171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 36), SHIFT_REPEAT(182),
  [2174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 36),
  [2176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 49), SHIFT_REPEAT(51),
  [2179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 49),
  [2181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value_inner, 3, .production_id = 47),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [2201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, .production_id = 15),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [2211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(128),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, .production_id = 15),
  [2230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 43), SHIFT_REPEAT(75),
  [2233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 43),
  [2235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 36), SHIFT_REPEAT(127),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 36),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [2244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2),
  [2246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2), SHIFT_REPEAT(503),
  [2249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, .production_id = 40),
  [2251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2), SHIFT_REPEAT(39),
  [2254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [2262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, .production_id = 15),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [2266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, .production_id = 15),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [2280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 36), SHIFT_REPEAT(85),
  [2283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 36),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, .production_id = 26),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, .production_id = 26),
  [2299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, .production_id = 26),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 32),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 28),
  [2319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [2321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [2323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 26),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 26),
  [2343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 27),
  [2353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [2355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [2357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 1),
  [2359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [2361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [2369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 30),
  [2371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 11),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 12),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 15),
  [2385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [2391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 35),
  [2393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, .production_id = 37),
  [2399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, .production_id = 10),
  [2401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, .production_id = 10),
  [2403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [2405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [2407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, .production_id = 15),
  [2409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, .production_id = 39),
  [2411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, .production_id = 39),
  [2413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, .production_id = 39),
  [2415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, .production_id = 39),
  [2417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, .production_id = 15),
  [2419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, .production_id = 15),
  [2421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, .production_id = 15),
  [2423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, .production_id = 15),
  [2425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, .production_id = 15),
  [2427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, .production_id = 15),
  [2429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 41),
  [2431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, .production_id = 15),
  [2433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, .production_id = 15),
  [2435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 35),
  [2437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, .production_id = 15),
  [2439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 42),
  [2441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, .production_id = 15),
  [2443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, .production_id = 15),
  [2445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, .production_id = 15),
  [2447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, .production_id = 15),
  [2449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, .production_id = 15),
  [2451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 34),
  [2453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 15),
  [2455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 21),
  [2457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, .production_id = 15),
  [2459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, .production_id = 15),
  [2461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 3, .production_id = 46),
  [2463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, .production_id = 15),
  [2465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, .production_id = 48),
  [2467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 3, .production_id = 19),
  [2471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 35),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, .production_id = 15),
  [2477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, .production_id = 15),
  [2479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 40),
  [2481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 40),
  [2483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [2487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 15),
  [2489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 50),
  [2491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, .production_id = 46),
  [2493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, .production_id = 18),
  [2495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 51),
  [2497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 52),
  [2499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 15),
  [2501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 8),
  [2503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 15),
  [2505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 15),
  [2507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 5, .production_id = 71),
  [2509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [2511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 15),
  [2513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 15),
  [2515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 15),
  [2517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 15),
  [2519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 55),
  [2521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 56),
  [2523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 68),
  [2525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, .production_id = 50),
  [2527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, .production_id = 51),
  [2529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 35),
  [2531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, .production_id = 25),
  [2533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 35),
  [2535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 20),
  [2537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, .production_id = 41),
  [2539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 35),
  [2541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 18),
  [2543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, .production_id = 13),
  [2545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 15),
  [2547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 58),
  [2549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 15),
  [2551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 15),
  [2557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 15),
  [2559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 15),
  [2563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include, 3, .production_id = 15),
  [2565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 15),
  [2567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 21),
  [2569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 15),
  [2571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 15),
  [2573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 15),
  [2575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 15),
  [2577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [2579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 15),
  [2581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [2583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [2585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [2589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, .production_id = 72),
  [2591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 15),
  [2593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 15),
  [2595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 15),
  [2597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 15),
  [2599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 15),
  [2601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 15),
  [2603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 21),
  [2605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 53),
  [2607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 63),
  [2609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 15),
  [2611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 15),
  [2613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 15),
  [2615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 15),
  [2617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 15),
  [2619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 15),
  [2621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 15),
  [2623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 15),
  [2625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 34),
  [2627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, .production_id = 20),
  [2629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, .production_id = 18),
  [2631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 15),
  [2633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 34),
  [2635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 15),
  [2637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 15),
  [2639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 15),
  [2641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 15),
  [2643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 15),
  [2645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, .production_id = 65),
  [2647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 15),
  [2649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 15),
  [2651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 15),
  [2653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 15),
  [2657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 71),
  [2659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 15),
  [2661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 15),
  [2663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 15),
  [2665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 15),
  [2667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, .production_id = 46),
  [2669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 70),
  [2671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 16),
  [2673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 69),
  [2675] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [2695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [2713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [2733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [2735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [2759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [2763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
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
