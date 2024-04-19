#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 835
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 375
#define ALIAS_COUNT 1
#define TOKEN_COUNT 186
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 82

enum ts_symbol_identifiers {
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
  aux_sym__match_host_token1 = 15,
  aux_sym__match_originalhost_token1 = 16,
  aux_sym__match_tagged_token1 = 17,
  aux_sym__match_user_token1 = 18,
  aux_sym__match_localuser_token1 = 19,
  anon_sym_STAR = 20,
  anon_sym_QMARK = 21,
  aux_sym__add_keys_to_agent_token1 = 22,
  anon_sym_ask = 23,
  anon_sym_confirm = 24,
  aux_sym__address_family_token1 = 25,
  anon_sym_any = 26,
  anon_sym_inet = 27,
  anon_sym_inet6 = 28,
  aux_sym__batch_mode_token1 = 29,
  aux_sym__bind_address_token1 = 30,
  aux_sym__bind_interface_token1 = 31,
  aux_sym__canonical_domains_token1 = 32,
  aux_sym__canonicalize_fallback_local_token1 = 33,
  aux_sym__canonicalize_hostname_token1 = 34,
  aux_sym__canonicalize_max_dots_token1 = 35,
  aux_sym__canonicalize_permitted_cnames_token1 = 36,
  anon_sym_none = 37,
  anon_sym_COLON = 38,
  aux_sym__ca_signature_algorithms_token1 = 39,
  anon_sym_PLUS = 40,
  anon_sym_DASH = 41,
  aux_sym__certificate_file_token1 = 42,
  aux_sym__check_host_ip_token1 = 43,
  aux_sym__ciphers_token1 = 44,
  anon_sym_CARET = 45,
  aux_sym__clear_all_forwardings_token1 = 46,
  aux_sym__compression_token1 = 47,
  aux_sym__connection_attempts_token1 = 48,
  aux_sym__connect_timeout_token1 = 49,
  aux_sym__control_master_token1 = 50,
  anon_sym_auto = 51,
  anon_sym_autoask = 52,
  aux_sym__control_persist_token1 = 53,
  aux_sym__control_path_token1 = 54,
  aux_sym__dynamic_forward_token1 = 55,
  aux_sym__enable_escape_command_line_token1 = 56,
  aux_sym__enable_ssh_keysign_token1 = 57,
  aux_sym__escape_char_token1 = 58,
  aux_sym__escape_char_token2 = 59,
  aux_sym__exit_on_forward_failure_token1 = 60,
  aux_sym__fingerprint_hash_token1 = 61,
  anon_sym_md5 = 62,
  anon_sym_sha256 = 63,
  aux_sym__fork_after_authentication_token1 = 64,
  aux_sym__forward_agent_token1 = 65,
  aux_sym__forward_x11_token1 = 66,
  aux_sym__forward_x11_timeout_token1 = 67,
  aux_sym__forward_x11_trusted_token1 = 68,
  aux_sym__global_known_hosts_file_token1 = 69,
  aux_sym__gssapi_authentication_token1 = 70,
  aux_sym__gssapi_delegate_credentials_token1 = 71,
  aux_sym__hash_known_hosts_token1 = 72,
  aux_sym__hostbased_accepted_algorithms_token1 = 73,
  aux_sym__hostbased_accepted_algorithms_token2 = 74,
  aux_sym__hostbased_authentication_token1 = 75,
  aux_sym__host_key_algorithms_token1 = 76,
  aux_sym__host_key_alias_token1 = 77,
  aux_sym__hostname_token1 = 78,
  aux_sym__identities_only_token1 = 79,
  aux_sym__identity_agent_token1 = 80,
  anon_sym_SSH_AUTH_SOCK = 81,
  aux_sym__identity_file_token1 = 82,
  aux_sym__ignore_unknown_token1 = 83,
  aux_sym__include_token1 = 84,
  aux_sym__ipqos_token1 = 85,
  aux_sym__kbd_interactive_authentication_token1 = 86,
  aux_sym__kbd_interactive_authentication_token2 = 87,
  aux_sym__kex_algorithms_token1 = 88,
  aux_sym__known_hosts_command_token1 = 89,
  aux_sym__local_command_token1 = 90,
  aux_sym__local_forward_token1 = 91,
  aux_sym__log_level_token1 = 92,
  aux_sym__log_verbose_token1 = 93,
  aux_sym__log_verbose_value_token1 = 94,
  aux_sym__macs_token1 = 95,
  aux_sym__no_host_authentication_for_localhost_token1 = 96,
  aux_sym__number_of_password_prompts_token1 = 97,
  aux_sym__password_authentication_token1 = 98,
  aux_sym__permit_local_command_token1 = 99,
  aux_sym__permit_remote_open_token1 = 100,
  aux_sym__pkcs11_provider_token1 = 101,
  aux_sym__port_token1 = 102,
  aux_sym__preferred_authentications_token1 = 103,
  aux_sym__proxy_command_token1 = 104,
  aux_sym__proxy_jump_token1 = 105,
  aux_sym__proxy_jump_value_token1 = 106,
  anon_sym_AT = 107,
  aux_sym__proxy_jump_value_token2 = 108,
  aux_sym__proxy_jump_value_token3 = 109,
  aux_sym__proxy_use_fdpass_token1 = 110,
  aux_sym__pubkey_accepted_algorithms_token1 = 111,
  aux_sym__pubkey_accepted_algorithms_token2 = 112,
  aux_sym__pubkey_authentication_token1 = 113,
  anon_sym_unbound = 114,
  anon_sym_host_DASHbound = 115,
  aux_sym__rekey_limit_token1 = 116,
  aux_sym__remote_command_token1 = 117,
  aux_sym__remote_command_token2 = 118,
  aux_sym__remote_forward_token1 = 119,
  aux_sym__request_tty_token1 = 120,
  anon_sym_force = 121,
  aux_sym__required_rsa_size_token1 = 122,
  aux_sym__revoked_host_keys_token1 = 123,
  aux_sym__security_key_provider_token1 = 124,
  aux_sym__send_env_token1 = 125,
  aux_sym__send_env_value_token1 = 126,
  aux_sym__server_alive_count_max_token1 = 127,
  aux_sym__server_alive_interval_token1 = 128,
  aux_sym__session_type_token1 = 129,
  anon_sym_subsystem = 130,
  anon_sym_default = 131,
  aux_sym__set_env_token1 = 132,
  anon_sym_EQ = 133,
  aux_sym__stdin_null_token1 = 134,
  aux_sym__stream_local_bind_mask_token1 = 135,
  aux_sym__stream_local_bind_mask_token2 = 136,
  aux_sym__stream_local_bind_unlink_token1 = 137,
  aux_sym__strict_host_key_checking_token1 = 138,
  anon_sym_accept_DASHnew = 139,
  anon_sym_off = 140,
  aux_sym__syslog_facility_token1 = 141,
  aux_sym__tcp_keep_alive_token1 = 142,
  aux_sym__tag_token1 = 143,
  aux_sym__tunnel_token1 = 144,
  anon_sym_point_DASHto_DASHpoint = 145,
  anon_sym_ethernet = 146,
  aux_sym__tunnel_device_token1 = 147,
  aux_sym__update_host_keys_token1 = 148,
  aux_sym__use_keychain_token1 = 149,
  aux_sym__user_token1 = 150,
  aux_sym__user_known_hosts_file_token1 = 151,
  aux_sym__verify_host_key_dns_token1 = 152,
  aux_sym__visual_host_key_token1 = 153,
  aux_sym__xauth_location_token1 = 154,
  sym_ipqos = 155,
  sym_verbosity = 156,
  sym_facility = 157,
  sym_authentication = 158,
  sym_cipher = 159,
  sym_kex = 160,
  sym_key_sig = 161,
  sym_mac = 162,
  sym_sig = 163,
  aux_sym__file_token_token1 = 164,
  aux_sym__hosts_token_token1 = 165,
  aux_sym__hostname_token_token1 = 166,
  aux_sym__proxy_token_token1 = 167,
  sym_token = 168,
  anon_sym_DOLLAR = 169,
  sym__var_name = 170,
  anon_sym_DOLLAR_LBRACE = 171,
  anon_sym_RBRACE = 172,
  anon_sym_yes = 173,
  anon_sym_no = 174,
  sym__number = 175,
  aux_sym_bytes_token1 = 176,
  aux_sym_time_token1 = 177,
  aux_sym_time_token2 = 178,
  aux_sym_time_token3 = 179,
  aux_sym_time_token4 = 180,
  aux_sym_time_token5 = 181,
  sym_comment = 182,
  aux_sym__sep_token1 = 183,
  sym__space = 184,
  sym__eol = 185,
  sym_config = 186,
  sym_host_declaration = 187,
  sym_match_declaration = 188,
  sym_condition = 189,
  sym__all = 190,
  sym__match_canonical = 191,
  sym__match_final = 192,
  sym__match_exec = 193,
  sym__match_localnetwork = 194,
  sym__match_host = 195,
  sym__match_originalhost = 196,
  sym__match_tagged = 197,
  sym__match_user = 198,
  sym__match_localuser = 199,
  sym__match_value = 200,
  sym__declarations = 201,
  sym_parameter = 202,
  sym__add_keys_to_agent = 203,
  sym__address_family = 204,
  sym__batch_mode = 205,
  sym__bind_address = 206,
  sym__bind_interface = 207,
  sym__canonical_domains = 208,
  sym__canonicalize_fallback_local = 209,
  sym__canonicalize_hostname = 210,
  sym__canonicalize_max_dots = 211,
  sym__canonicalize_permitted_cnames = 212,
  sym__cnames_map = 213,
  sym__ca_signature_algorithms = 214,
  sym__certificate_file = 215,
  sym__check_host_ip = 216,
  sym__ciphers = 217,
  sym__clear_all_forwardings = 218,
  sym__compression = 219,
  sym__connection_attempts = 220,
  sym__connect_timeout = 221,
  sym__control_master = 222,
  sym__control_persist = 223,
  sym__control_path = 224,
  sym__dynamic_forward = 225,
  sym__forward_value_inner = 226,
  sym__dynamic_forward_value = 227,
  sym__enable_escape_command_line = 228,
  sym__enable_ssh_keysign = 229,
  sym__escape_char = 230,
  sym__exit_on_forward_failure = 231,
  sym__fingerprint_hash = 232,
  sym__fork_after_authentication = 233,
  sym__forward_agent = 234,
  sym__forward_x11 = 235,
  sym__forward_x11_timeout = 236,
  sym__forward_x11_trusted = 237,
  sym__global_known_hosts_file = 238,
  sym__gssapi_authentication = 239,
  sym__gssapi_delegate_credentials = 240,
  sym__hash_known_hosts = 241,
  sym__hostbased_accepted_algorithms = 242,
  sym__hostbased_authentication = 243,
  sym__host_key_algorithms = 244,
  sym__host_key_alias = 245,
  sym__hostname = 246,
  sym__identities_only = 247,
  sym__identity_agent = 248,
  sym__identity_file = 249,
  sym__ignore_unknown = 250,
  sym__include = 251,
  sym__ipqos = 252,
  sym__kbd_interactive_authentication = 253,
  sym__kex_algorithms = 254,
  sym__known_hosts_command = 255,
  sym__local_command = 256,
  sym__local_forward = 257,
  sym__forward_value1 = 258,
  sym__forward_value2 = 259,
  sym__log_level = 260,
  sym__log_verbose = 261,
  sym__log_verbose_value = 262,
  sym__log_verbose_quoted = 263,
  sym__macs = 264,
  sym__no_host_authentication_for_localhost = 265,
  sym__number_of_password_prompts = 266,
  sym__password_authentication = 267,
  sym__permit_local_command = 268,
  sym__permit_remote_open = 269,
  sym__permit_remote_open_value = 270,
  sym__pkcs11_provider = 271,
  sym__port = 272,
  sym__preferred_authentications = 273,
  sym__proxy_command = 274,
  sym__proxy_jump = 275,
  sym__proxy_jump_value = 276,
  sym__proxy_use_fdpass = 277,
  sym__pubkey_accepted_algorithms = 278,
  sym__pubkey_authentication = 279,
  sym__pubkey_authentication_arg = 280,
  sym__rekey_limit = 281,
  sym__remote_command = 282,
  sym__remote_forward = 283,
  sym__request_tty = 284,
  sym__required_rsa_size = 285,
  sym__revoked_host_keys = 286,
  sym__security_key_provider = 287,
  sym__send_env = 288,
  sym__send_env_value = 289,
  sym__server_alive_count_max = 290,
  sym__server_alive_interval = 291,
  sym__session_type = 292,
  sym__set_env = 293,
  sym__set_env_value = 294,
  sym__stdin_null = 295,
  sym__stream_local_bind_mask = 296,
  sym__stream_local_bind_unlink = 297,
  sym__strict_host_key_checking = 298,
  sym__syslog_facility = 299,
  sym__tcp_keep_alive = 300,
  sym__tag = 301,
  sym__tunnel = 302,
  sym__tunnel_device = 303,
  sym__update_host_keys = 304,
  sym__use_keychain = 305,
  sym__user = 306,
  sym__user_known_hosts_file = 307,
  sym__verify_host_key_dns = 308,
  sym__visual_host_key = 309,
  sym__xauth_location = 310,
  sym__file_token = 311,
  sym__hosts_token = 312,
  sym__hostname_token = 313,
  sym__proxy_token = 314,
  sym__var_value = 315,
  sym_variable = 316,
  sym__file_string = 317,
  sym__hosts_string = 318,
  sym__hostname_string = 319,
  sym__proxy_string = 320,
  sym__token_string = 321,
  sym__string = 322,
  sym__file_pattern_vars = 323,
  sym__pattern = 324,
  sym__boolean = 325,
  sym_number = 326,
  sym_bytes = 327,
  sym_time = 328,
  sym__sep = 329,
  aux_sym_config_repeat1 = 330,
  aux_sym_host_declaration_repeat1 = 331,
  aux_sym_match_declaration_repeat1 = 332,
  aux_sym__match_exec_repeat1 = 333,
  aux_sym__match_exec_repeat2 = 334,
  aux_sym__match_localnetwork_repeat1 = 335,
  aux_sym__match_localnetwork_repeat2 = 336,
  aux_sym__match_value_repeat1 = 337,
  aux_sym__match_value_repeat2 = 338,
  aux_sym__match_value_repeat3 = 339,
  aux_sym__match_value_repeat4 = 340,
  aux_sym__declarations_repeat1 = 341,
  aux_sym__canonical_domains_repeat1 = 342,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 343,
  aux_sym__cnames_map_repeat1 = 344,
  aux_sym__ca_signature_algorithms_repeat1 = 345,
  aux_sym__ciphers_repeat1 = 346,
  aux_sym__dynamic_forward_repeat1 = 347,
  aux_sym__global_known_hosts_file_repeat1 = 348,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 349,
  aux_sym__ignore_unknown_repeat1 = 350,
  aux_sym__kex_algorithms_repeat1 = 351,
  aux_sym__log_verbose_repeat1 = 352,
  aux_sym__log_verbose_repeat2 = 353,
  aux_sym__log_verbose_value_repeat1 = 354,
  aux_sym__macs_repeat1 = 355,
  aux_sym__permit_remote_open_repeat1 = 356,
  aux_sym__preferred_authentications_repeat1 = 357,
  aux_sym__proxy_jump_repeat1 = 358,
  aux_sym__remote_command_repeat1 = 359,
  aux_sym__send_env_repeat1 = 360,
  aux_sym__send_env_value_repeat1 = 361,
  aux_sym__set_env_repeat1 = 362,
  aux_sym__user_known_hosts_file_repeat1 = 363,
  aux_sym__file_string_repeat1 = 364,
  aux_sym__file_string_repeat2 = 365,
  aux_sym__hosts_string_repeat1 = 366,
  aux_sym__hostname_string_repeat1 = 367,
  aux_sym__hostname_string_repeat2 = 368,
  aux_sym__proxy_string_repeat1 = 369,
  aux_sym__token_string_repeat1 = 370,
  aux_sym__string_repeat1 = 371,
  aux_sym__string_repeat2 = 372,
  aux_sym__file_pattern_vars_repeat1 = 373,
  aux_sym__file_pattern_vars_repeat2 = 374,
  alias_sym_pattern = 375,
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
  [aux_sym__match_host_token1] = "host",
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
  [aux_sym__hash_known_hosts_token1] = "HashKnownHosts",
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
  [aux_sym__proxy_jump_value_token1] = "string",
  [anon_sym_AT] = "@",
  [aux_sym__proxy_jump_value_token2] = "string",
  [aux_sym__proxy_jump_value_token3] = "uri",
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
  [aux_sym__user_token1] = "User",
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
  [sym__hash_known_hosts] = "_hash_known_hosts",
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
  [sym__proxy_jump_value] = "_proxy_jump_value",
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
  [aux_sym__proxy_jump_repeat1] = "_proxy_jump_repeat1",
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
  [aux_sym__match_host_token1] = aux_sym__match_host_token1,
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
  [aux_sym__hash_known_hosts_token1] = aux_sym__hash_known_hosts_token1,
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
  [aux_sym__proxy_jump_value_token1] = aux_sym__match_localnetwork_token2,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__proxy_jump_value_token2] = aux_sym__match_localnetwork_token2,
  [aux_sym__proxy_jump_value_token3] = aux_sym__proxy_jump_value_token3,
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
  [aux_sym__user_token1] = aux_sym__user_token1,
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
  [sym__hash_known_hosts] = sym__hash_known_hosts,
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
  [sym__proxy_jump_value] = sym__proxy_jump_value,
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
  [aux_sym__proxy_jump_repeat1] = aux_sym__proxy_jump_repeat1,
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
  [aux_sym__match_host_token1] = {
    .visible = true,
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
  [aux_sym__hash_known_hosts_token1] = {
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
  [aux_sym__proxy_jump_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__proxy_jump_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__proxy_jump_value_token3] = {
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
  [sym__hash_known_hosts] = {
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
  [sym__proxy_jump_value] = {
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
  [aux_sym__proxy_jump_repeat1] = {
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
  [alias_sym_pattern] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
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
  [16] = {.index = 44, .length = 1},
  [17] = {.index = 45, .length = 4},
  [18] = {.index = 49, .length = 2},
  [19] = {.index = 51, .length = 4},
  [20] = {.index = 55, .length = 1},
  [22] = {.index = 56, .length = 3},
  [23] = {.index = 59, .length = 1},
  [24] = {.index = 60, .length = 5},
  [25] = {.index = 65, .length = 4},
  [26] = {.index = 69, .length = 1},
  [27] = {.index = 70, .length = 1},
  [28] = {.index = 71, .length = 6},
  [29] = {.index = 42, .length = 2},
  [30] = {.index = 77, .length = 5},
  [32] = {.index = 82, .length = 1},
  [33] = {.index = 83, .length = 2},
  [34] = {.index = 85, .length = 3},
  [35] = {.index = 88, .length = 7},
  [36] = {.index = 95, .length = 3},
  [37] = {.index = 98, .length = 7},
  [38] = {.index = 105, .length = 1},
  [39] = {.index = 106, .length = 9},
  [40] = {.index = 115, .length = 7},
  [41] = {.index = 122, .length = 11},
  [44] = {.index = 133, .length = 1},
  [45] = {.index = 134, .length = 2},
  [46] = {.index = 136, .length = 2},
  [47] = {.index = 136, .length = 2},
  [48] = {.index = 138, .length = 4},
  [49] = {.index = 142, .length = 3},
  [50] = {.index = 145, .length = 6},
  [51] = {.index = 151, .length = 2},
  [52] = {.index = 105, .length = 1},
  [53] = {.index = 153, .length = 2},
  [55] = {.index = 155, .length = 2},
  [56] = {.index = 157, .length = 3},
  [57] = {.index = 160, .length = 6},
  [58] = {.index = 166, .length = 3},
  [59] = {.index = 169, .length = 9},
  [60] = {.index = 178, .length = 7},
  [61] = {.index = 185, .length = 3},
  [62] = {.index = 188, .length = 6},
  [63] = {.index = 194, .length = 2},
  [64] = {.index = 196, .length = 2},
  [65] = {.index = 198, .length = 4},
  [66] = {.index = 202, .length = 2},
  [67] = {.index = 204, .length = 5},
  [68] = {.index = 209, .length = 10},
  [69] = {.index = 219, .length = 2},
  [70] = {.index = 221, .length = 3},
  [71] = {.index = 224, .length = 3},
  [72] = {.index = 227, .length = 3},
  [73] = {.index = 230, .length = 11},
  [74] = {.index = 241, .length = 4},
  [75] = {.index = 245, .length = 4},
  [76] = {.index = 245, .length = 4},
  [77] = {.index = 249, .length = 4},
  [78] = {.index = 253, .length = 3},
  [79] = {.index = 256, .length = 2},
  [80] = {.index = 258, .length = 3},
  [81] = {.index = 261, .length = 5},
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
    {field_host, 0},
  [70] =
    {field_uri, 0},
  [71] =
    {field_argument, 2},
    {field_host, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_uri, 2, .inherited = true},
    {field_user, 2, .inherited = true},
  [77] =
    {field_argument, 2},
    {field_bind_address, 2, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_socket, 2, .inherited = true},
  [82] =
    {field_criteria, 1, .inherited = true},
  [83] =
    {field_argument, 1, .inherited = true},
    {field_criteria, 1, .inherited = true},
  [85] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [88] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [95] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [98] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [105] =
    {field_name, 1},
  [106] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [115] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [122] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
    {field_uri, 2, .inherited = true},
    {field_uri, 3, .inherited = true},
    {field_user, 2, .inherited = true},
    {field_user, 3, .inherited = true},
  [133] =
    {field_argument, 1},
  [134] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [136] =
    {field_argument, 2},
    {field_criteria, 0},
  [138] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [142] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [145] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [151] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [153] =
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [155] =
    {field_bind_address, 0},
    {field_port, 2},
  [157] =
    {field_argument, 1},
    {field_bind_address, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [160] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_bind_address, 0, .inherited = true},
    {field_bind_address, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [166] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [169] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_bind_address, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
    {field_socket, 2, .inherited = true},
    {field_socket, 4, .inherited = true},
  [178] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [185] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [188] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [194] =
    {field_host, 0},
    {field_port, 2},
  [196] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [198] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [202] =
    {field_host, 2},
    {field_user, 0},
  [204] =
    {field_argument, 1},
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
    {field_uri, 1, .inherited = true},
    {field_user, 1, .inherited = true},
  [209] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
    {field_uri, 0, .inherited = true},
    {field_uri, 1, .inherited = true},
    {field_user, 0, .inherited = true},
    {field_user, 1, .inherited = true},
  [219] =
    {field_argument, 1},
    {field_argument, 2},
  [221] =
    {field_argument, 2},
    {field_argument, 3},
    {field_criteria, 0},
  [224] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [227] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [230] =
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
  [241] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [245] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_criteria, 0},
  [249] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [253] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [256] =
    {field_host, 1},
    {field_port, 3},
  [258] =
    {field_host, 2},
    {field_port, 4},
    {field_user, 0},
  [261] =
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
  [21] = {
    [0] = aux_sym__match_localnetwork_token2,
  },
  [29] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [31] = {
    [0] = sym_variable,
  },
  [38] = {
    [1] = sym_variable,
  },
  [42] = {
    [1] = sym_variable,
  },
  [43] = {
    [1] = alias_sym_pattern,
  },
  [46] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [54] = {
    [1] = aux_sym__match_localnetwork_token2,
  },
  [75] = {
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
  [91] = 87,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 95,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 85,
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
  [134] = 81,
  [135] = 135,
  [136] = 136,
  [137] = 81,
  [138] = 85,
  [139] = 139,
  [140] = 140,
  [141] = 122,
  [142] = 122,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 87,
  [147] = 147,
  [148] = 148,
  [149] = 109,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 109,
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
  [169] = 87,
  [170] = 87,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 87,
  [178] = 178,
  [179] = 179,
  [180] = 158,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 158,
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
  [361] = 175,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 191,
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
  [461] = 188,
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
  [653] = 446,
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
  [817] = 817,
  [818] = 781,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 781,
  [825] = 825,
  [826] = 826,
  [827] = 781,
  [828] = 781,
  [829] = 781,
  [830] = 793,
  [831] = 793,
  [832] = 793,
  [833] = 793,
  [834] = 793,
};

static TSCharacterRange aux_sym__file_token_token1_character_set_1[] = {
  {'%', '%'}, {'C', 'C'}, {'L', 'L'}, {'d', 'd'}, {'h', 'i'}, {'k', 'l'}, {'n', 'n'}, {'p', 'p'},
  {'r', 'r'}, {'u', 'u'},
};

static TSCharacterRange aux_sym__hosts_token_token1_character_set_1[] = {
  {'%', '%'}, {'C', 'C'}, {'H', 'I'}, {'K', 'L'}, {'d', 'd'}, {'f', 'f'}, {'h', 'i'}, {'k', 'l'},
  {'n', 'n'}, {'p', 'p'}, {'r', 'r'}, {'t', 'u'},
};

static TSCharacterRange sym_token_character_set_1[] = {
  {'%', '%'}, {'C', 'C'}, {'H', 'I'}, {'K', 'L'}, {'T', 'T'}, {'d', 'd'}, {'f', 'f'}, {'h', 'i'},
  {'k', 'l'}, {'n', 'n'}, {'p', 'p'}, {'r', 'r'}, {'t', 'u'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1857);
      ADVANCE_MAP(
        '!', 1859,
        '"', 1874,
        '$', 2070,
        '%', 1873,
        '*', 1894,
        '+', 1919,
        ',', 1887,
        '-', 1920,
        ':', 1917,
        '=', 2027,
        '?', 1897,
        '@', 1994,
        'S', 1865,
        '^', 1924,
        's', 1865,
        '}', 2073,
        '\n', 1876,
        '\r', 1876,
        'D', 1865,
        'd', 1865,
        'H', 1865,
        'h', 1865,
        'M', 1865,
        'm', 1865,
        'W', 1865,
        'w', 1865,
        '\t', 1876,
        0x0b, 1876,
        '\f', 1876,
        ' ', 1876,
        'G', 1865,
        'K', 1865,
        'g', 1865,
        'k', 1865,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1865);
      if (lookahead != 0) ADVANCE(1865);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2088);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 2088,
        '\r', 1,
        '!', 1859,
        '"', 1874,
        '*', 1894,
        '+', 1919,
        '-', 1920,
        '0', 2076,
        ':', 1917,
        '=', 2085,
        '?', 1897,
        'A', 1232,
        'C', 782,
        'E', 1817,
        'F', 1170,
        'O', 1566,
        'S', 1975,
        'a', 361,
        'c', 558,
        'e', 370,
        'f', 560,
        'n', 552,
        'o', 433,
        'p', 564,
        'r', 665,
        's', 501,
        'w', 428,
        'y', 414,
        '\t', 2086,
        ' ', 2086,
        'H', 1469,
        'h', 1469,
        'L', 1464,
        'l', 1464,
        'T', 744,
        't', 744,
        'U', 1650,
        'u', 1650,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2077);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1859);
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 2088,
        '\r', 1,
        '$', 1870,
        '%', 1873,
        '*', 1894,
        '?', 1897,
        '\t', 2087,
        ' ', 2087,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1870);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == ':') ADVANCE(1917);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1870);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(2010);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2008);
      if (lookahead != 0) ADVANCE(2005);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(2011);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2008);
      if (lookahead != 0) ADVANCE(2005);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1871);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2009);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2008);
      if (lookahead != 0) ADVANCE(2005);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2012);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2008);
      if (lookahead != 0) ADVANCE(2005);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == ',') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '-') ADVANCE(1920);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2020);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 2088,
        '\r', 1,
        '+', 1919,
        '-', 1920,
        '0', 1849,
        '3', 381,
        '^', 1924,
        'a', 415,
        'c', 459,
        '\t', 2087,
        ' ', 2087,
        'D', 2080,
        'd', 2080,
        'H', 2081,
        'h', 2081,
        'M', 2082,
        'm', 2082,
        'S', 2083,
        's', 2083,
        'W', 2079,
        'w', 2079,
      );
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1850);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 2088,
        '\r', 1,
        'A', 290,
        'D', 242,
        'L', 274,
        'U', 282,
        'h', 570,
        'n', 552,
        'u', 530,
        'y', 414,
        '\t', 2087,
        ' ', 2087,
        'G', 2078,
        'K', 2078,
        'M', 2078,
        'g', 2078,
        'k', 2078,
        'm', 2078,
      );
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(2088);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1865);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(2070);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == 'S') ADVANCE(1866);
      if (lookahead == 'n') ADVANCE(1869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(1870);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '0') ADVANCE(1865);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(1870);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(1870);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == '*') ADVANCE(1894);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1876);
      if (lookahead != 0) ADVANCE(1865);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(1870);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead == 'n') ADVANCE(1869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(1870);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(2069);
      if (lookahead == 'n') ADVANCE(1868);
      if (lookahead == 'y') ADVANCE(1867);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(2069);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(1877);
      if (lookahead == '%') ADVANCE(1879);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0) ADVANCE(1876);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '$') ADVANCE(1877);
      if (lookahead == '%') ADVANCE(1879);
      if (lookahead != 0) ADVANCE(1876);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1879);
      if (lookahead != 0) ADVANCE(1876);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1871);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '%') ADVANCE(1878);
      if (lookahead != 0) ADVANCE(1876);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == ',') ADVANCE(1887);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0) ADVANCE(1876);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '0') ADVANCE(1865);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead == 'n') ADVANCE(1869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0) ADVANCE(1876);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead == '*') ADVANCE(1894);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1876);
      if (lookahead != 0) ADVANCE(1865);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1874);
      if (lookahead != 0) ADVANCE(1876);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '*') ADVANCE(1895);
      if (lookahead == 'a') ADVANCE(1882);
      if (lookahead == 'n') ADVANCE(1884);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2005);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(2011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2005);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(2009);
      if (lookahead == 'n') ADVANCE(2006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2005);
      END_STATE();
    case 46:
      if (lookahead == '%') ADVANCE(2012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2005);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == ',') ADVANCE(1887);
      if (lookahead == ':') ADVANCE(1917);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(1894);
      if (lookahead == ':') ADVANCE(1917);
      if (lookahead == '?') ADVANCE(1897);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1876);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(1896);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1888);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(399);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(378);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(706);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(439);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '@') ADVANCE(575);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(711);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(410);
      if (lookahead == '@') ADVANCE(555);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(523);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(487);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '1') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(683);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(537);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(641);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '4') ADVANCE(88);
      if (lookahead == '6') ADVANCE(89);
      if (lookahead == '8') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(644);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(660);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(426);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(669);
      END_STATE();
    case 101:
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == 'n') ADVANCE(1991);
      if (lookahead == 's') ADVANCE(1992);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 102:
      if (lookahead == '.') ADVANCE(352);
      END_STATE();
    case 103:
      if (lookahead == '.') ADVANCE(557);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(362);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(363);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(364);
      END_STATE();
    case 107:
      if (lookahead == '.') ADVANCE(365);
      END_STATE();
    case 108:
      if (lookahead == '/') ADVANCE(1854);
      END_STATE();
    case 109:
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '0') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == '0') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == '0') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(1844);
      if (lookahead == '2') ADVANCE(1844);
      if (lookahead == '3') ADVANCE(1844);
      if (lookahead == '4') ADVANCE(1844);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(2059);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(2061);
      if (lookahead == '2') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(229);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(714);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(1947);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(2056);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(2056);
      if (lookahead == '2') ADVANCE(191);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(2063);
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
      if (lookahead == '1') ADVANCE(1515);
      END_STATE();
    case 137:
      if (lookahead == '1') ADVANCE(230);
      END_STATE();
    case 138:
      if (lookahead == '1') ADVANCE(234);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(2059);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(220);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(2056);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(2063);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(2062);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(224);
      if (lookahead == '9') ADVANCE(161);
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
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(191);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '5') ADVANCE(156);
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
      if (lookahead == '5') ADVANCE(162);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == '5') ADVANCE(135);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(121);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(201);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(78);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(202);
      END_STATE();
    case 167:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 168:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(85);
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
      if (lookahead == '2') ADVANCE(97);
      END_STATE();
    case 176:
      if (lookahead == '3') ADVANCE(111);
      END_STATE();
    case 177:
      if (lookahead == '4') ADVANCE(2059);
      END_STATE();
    case 178:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 179:
      if (lookahead == '4') ADVANCE(2056);
      END_STATE();
    case 180:
      if (lookahead == '4') ADVANCE(2063);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(1943);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(208);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(2061);
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
      if (lookahead == '6') ADVANCE(1944);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(2059);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(2057);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(2056);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(2063);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(2062);
      END_STATE();
    case 215:
      if (lookahead == '6') ADVANCE(117);
      END_STATE();
    case 216:
      if (lookahead == '6') ADVANCE(55);
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
      if (lookahead == '8') ADVANCE(67);
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
      if (lookahead == '8') ADVANCE(55);
      END_STATE();
    case 225:
      if (lookahead == '9') ADVANCE(2059);
      END_STATE();
    case 226:
      if (lookahead == '9') ADVANCE(2063);
      END_STATE();
    case 227:
      if (lookahead == '9') ADVANCE(60);
      END_STATE();
    case 228:
      if (lookahead == '9') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 229:
      if (lookahead == '9') ADVANCE(76);
      END_STATE();
    case 230:
      if (lookahead == '9') ADVANCE(83);
      END_STATE();
    case 231:
      if (lookahead == '9') ADVANCE(236);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(1917);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1865);
      END_STATE();
    case 233:
      if (lookahead == '@') ADVANCE(555);
      END_STATE();
    case 234:
      if (lookahead == '@') ADVANCE(575);
      END_STATE();
    case 235:
      if (lookahead == '@') ADVANCE(576);
      END_STATE();
    case 236:
      if (lookahead == '@') ADVANCE(577);
      END_STATE();
    case 237:
      if (lookahead == '@') ADVANCE(578);
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1524);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(261);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(262);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(289);
      END_STATE();
    case 242:
      if (lookahead == 'A') ADVANCE(251);
      END_STATE();
    case 243:
      if (lookahead == 'B') ADVANCE(288);
      END_STATE();
    case 244:
      if (lookahead == 'B') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1054);
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
          lookahead == 'y') ADVANCE(1345);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(1212);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(1534);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1615);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(2051);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(263);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(284);
      END_STATE();
    case 253:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 254:
      if (lookahead == 'F') ADVANCE(269);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1249);
      END_STATE();
    case 255:
      if (lookahead == 'G') ADVANCE(2052);
      END_STATE();
    case 256:
      if (lookahead == 'H') ADVANCE(292);
      END_STATE();
    case 257:
      if (lookahead == 'H') ADVANCE(2053);
      END_STATE();
    case 258:
      if (lookahead == 'H') ADVANCE(293);
      END_STATE();
    case 259:
      if (lookahead == 'I') ADVANCE(252);
      END_STATE();
    case 260:
      if (lookahead == 'K') ADVANCE(1962);
      END_STATE();
    case 261:
      if (lookahead == 'L') ADVANCE(2051);
      END_STATE();
    case 262:
      if (lookahead == 'L') ADVANCE(1848);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(272);
      END_STATE();
    case 264:
      ADVANCE_MAP(
        'N', 254,
        'n', 835,
        'D', 958,
        'd', 958,
        'G', 1344,
        'g', 1344,
        'P', 1523,
        'p', 1523,
      );
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(2053);
      END_STATE();
    case 266:
      ADVANCE_MAP(
        'N', 835,
        'n', 397,
        'D', 958,
        'd', 958,
        'G', 1344,
        'g', 1344,
        'P', 1523,
        'p', 1523,
      );
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(842);
      if (lookahead == 'e') ADVANCE(2050);
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 268:
      if (lookahead == 'O') ADVANCE(1097);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1289);
      END_STATE();
    case 269:
      if (lookahead == 'O') ADVANCE(2051);
      END_STATE();
    case 270:
      if (lookahead == 'O') ADVANCE(280);
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
          lookahead == 'n') ADVANCE(729);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1135);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(273);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(1133);
      END_STATE();
    case 278:
      if (lookahead == 'R') ADVANCE(2051);
      END_STATE();
    case 279:
      if (lookahead == 'R') ADVANCE(2053);
      END_STATE();
    case 280:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(271);
      END_STATE();
    case 282:
      if (lookahead == 'S') ADVANCE(253);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 284:
      if (lookahead == 'T') ADVANCE(2051);
      END_STATE();
    case 285:
      if (lookahead == 'T') ADVANCE(257);
      END_STATE();
    case 286:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 287:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 288:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 289:
      if (lookahead == 'U') ADVANCE(286);
      END_STATE();
    case 290:
      if (lookahead == 'U') ADVANCE(285);
      END_STATE();
    case 291:
      if (lookahead == '^') ADVANCE(1940);
      if (lookahead == 'n') ADVANCE(1939);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1938);
      END_STATE();
    case 292:
      if (lookahead == '_') ADVANCE(241);
      END_STATE();
    case 293:
      if (lookahead == '_') ADVANCE(281);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(2059);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(2063);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(715);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(342);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(367);
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
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(615);
      END_STATE();
    case 335:
      if (lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 336:
      if (lookahead == 'b') ADVANCE(305);
      END_STATE();
    case 337:
      if (lookahead == 'b') ADVANCE(347);
      END_STATE();
    case 338:
      if (lookahead == 'b') ADVANCE(347);
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 339:
      if (lookahead == 'b') ADVANCE(571);
      END_STATE();
    case 340:
      if (lookahead == 'b') ADVANCE(312);
      END_STATE();
    case 341:
      if (lookahead == 'b') ADVANCE(565);
      END_STATE();
    case 342:
      if (lookahead == 'b') ADVANCE(511);
      END_STATE();
    case 343:
      if (lookahead == 'b') ADVANCE(628);
      END_STATE();
    case 344:
      if (lookahead == 'b') ADVANCE(574);
      END_STATE();
    case 345:
      if (lookahead == 'b') ADVANCE(333);
      END_STATE();
    case 346:
      ADVANCE_MAP(
        'c', 373,
        'f', 2050,
        'N', 729,
        'n', 729,
        'S', 840,
        's', 840,
        'X', 1135,
        'x', 1135,
      );
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(2055);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(2054);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(685);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead == 'u') ADVANCE(682);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(567);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 370:
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(991);
      END_STATE();
    case 371:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(2001);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(2002);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(2054);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(662);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1847);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(664);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(668);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1345);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1914);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(2015);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(2054);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1249);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 429:
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(888);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(2035);
      END_STATE();
    case 431:
      if (lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 432:
      if (lookahead == 'f') ADVANCE(431);
      END_STATE();
    case 433:
      if (lookahead == 'f') ADVANCE(430);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1140);
      END_STATE();
    case 434:
      if (lookahead == 'f') ADVANCE(296);
      END_STATE();
    case 435:
      if (lookahead == 'f') ADVANCE(482);
      END_STATE();
    case 436:
      if (lookahead == 'g') ADVANCE(2056);
      END_STATE();
    case 437:
      if (lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 438:
      if (lookahead == 'g') ADVANCE(419);
      END_STATE();
    case 439:
      if (lookahead == 'g') ADVANCE(607);
      END_STATE();
    case 440:
      if (lookahead == 'g') ADVANCE(639);
      if (lookahead == 'h') ADVANCE(572);
      if (lookahead == 'k') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(538);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1498);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1348);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(582);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 446:
      ADVANCE_MAP(
        'h', 295,
        'k', 50,
        'n', 677,
        's', 447,
        'u', 334,
        'E', 836,
        'e', 836,
        'T', 904,
        't', 904,
        'Y', 1613,
        'y', 1613,
      );
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 449:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 450:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 451:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(306);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 468:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 469:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 470:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 471:
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 472:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 473:
      if (lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 474:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 475:
      if (lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 476:
      if (lookahead == 'h') ADVANCE(551);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 497:
      if (lookahead == 'k') ADVANCE(1899);
      END_STATE();
    case 498:
      if (lookahead == 'k') ADVANCE(1931);
      END_STATE();
    case 499:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 500:
      if (lookahead == 'k') ADVANCE(406);
      END_STATE();
    case 501:
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 502:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 503:
      ADVANCE_MAP(
        'l', 479,
        'K', 932,
        'k', 932,
        'M', 1418,
        'm', 1418,
        'Q', 1768,
        'q', 1768,
        'V', 1449,
        'v', 1449,
      );
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1612);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1614);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(2024);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(2056);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(2060);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(2058);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(1900);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(2063);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(2055);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(905);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(952);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1444);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(2075);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(1930);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1394);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1376);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(704);
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
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(702);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(562);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(489);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(687);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(573);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 593:
      if (lookahead == 'p') ADVANCE(422);
      END_STATE();
    case 594:
      if (lookahead == 'p') ADVANCE(423);
      END_STATE();
    case 595:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 596:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(2055);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 610:
      ADVANCE_MAP(
        's', 1845,
        'u', 597,
        'A', 1343,
        'a', 1343,
        'E', 1532,
        'e', 1532,
        'H', 728,
        'h', 728,
        'I', 1502,
        'i', 1502,
        'L', 955,
        'l', 955,
        'O', 1288,
        'o', 1288,
      );
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(2059);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(2074);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(2063);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 660:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(474);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 664:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 665:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 666:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 667:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 668:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 669:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(2050);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(1904);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(2025);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(2041);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(2040);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 697:
      if (lookahead == 'u') ADVANCE(506);
      END_STATE();
    case 698:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 699:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 700:
      if (lookahead == 'u') ADVANCE(678);
      END_STATE();
    case 701:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 702:
      if (lookahead == 'u') ADVANCE(670);
      END_STATE();
    case 703:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 704:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 705:
      if (lookahead == 'u') ADVANCE(696);
      END_STATE();
    case 706:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 707:
      if (lookahead == 'v') ADVANCE(417);
      END_STATE();
    case 708:
      if (lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 709:
      if (lookahead == 'w') ADVANCE(2034);
      END_STATE();
    case 710:
      if (lookahead == 'w') ADVANCE(377);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      END_STATE();
    case 711:
      if (lookahead == 'w') ADVANCE(488);
      END_STATE();
    case 712:
      if (lookahead == 'w') ADVANCE(568);
      END_STATE();
    case 713:
      if (lookahead == 'x') ADVANCE(366);
      END_STATE();
    case 714:
      if (lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 715:
      if (lookahead == 'y') ADVANCE(2050);
      END_STATE();
    case 716:
      if (lookahead == 'y') ADVANCE(1902);
      END_STATE();
    case 717:
      if (lookahead == 'y') ADVANCE(2054);
      END_STATE();
    case 718:
      if (lookahead == 'y') ADVANCE(620);
      END_STATE();
    case 719:
      if (lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 720:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 721:
      ADVANCE_MAP(
        'A', 1343,
        'a', 1343,
        'E', 1532,
        'e', 1532,
        'H', 728,
        'h', 728,
        'I', 1502,
        'i', 1502,
        'L', 955,
        'l', 955,
        'O', 1288,
        'o', 1288,
      );
      END_STATE();
    case 722:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1612);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1614);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1498);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1348);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1682);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1346);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1770);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1291);
      END_STATE();
    case 731:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1816);
      END_STATE();
    case 732:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1505);
      END_STATE();
    case 733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1326);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1813);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      END_STATE();
    case 736:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1545);
      END_STATE();
    case 737:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1504);
      END_STATE();
    case 738:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1234);
      END_STATE();
    case 739:
      ADVANCE_MAP(
        'A', 1620,
        'a', 1620,
        'E', 1531,
        'e', 1531,
        'K', 846,
        'k', 846,
        'O', 1535,
        'o', 1535,
        'R', 931,
        'r', 931,
        'U', 829,
        'u', 829,
      );
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1298);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(906);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1390);
      END_STATE();
    case 742:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 743:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 744:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1287);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1539);
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
          lookahead == 'a') ADVANCE(1633);
      END_STATE();
    case 750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1238);
      END_STATE();
    case 751:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1239);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1358);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1711);
      END_STATE();
    case 754:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1250);
      END_STATE();
    case 755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 756:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1359);
      END_STATE();
    case 757:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1279);
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1525);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1546);
      END_STATE();
    case 760:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1159);
      END_STATE();
    case 761:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1590);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1549);
      END_STATE();
    case 763:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1361);
      END_STATE();
    case 764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1629);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1687);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1552);
      END_STATE();
    case 767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1241);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1553);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1264);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1563);
      END_STATE();
    case 771:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1242);
      END_STATE();
    case 772:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1727);
      END_STATE();
    case 773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1243);
      END_STATE();
    case 774:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1366);
      END_STATE();
    case 775:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1244);
      END_STATE();
    case 776:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1245);
      END_STATE();
    case 777:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1368);
      END_STATE();
    case 778:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1369);
      END_STATE();
    case 779:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 780:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1776);
      END_STATE();
    case 781:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1255);
      END_STATE();
    case 782:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1394);
      END_STATE();
    case 783:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1316);
      END_STATE();
    case 784:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1254);
      END_STATE();
    case 785:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1695);
      END_STATE();
    case 786:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1624);
      END_STATE();
    case 787:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1083);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 788:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1737);
      END_STATE();
    case 789:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1145);
      END_STATE();
    case 790:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1510);
      END_STATE();
    case 791:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1311);
      END_STATE();
    case 792:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      END_STATE();
    case 793:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1262);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1312);
      END_STATE();
    case 795:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1701);
      END_STATE();
    case 796:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1151);
      END_STATE();
    case 797:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1634);
      END_STATE();
    case 798:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1658);
      END_STATE();
    case 799:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1705);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1274);
      END_STATE();
    case 801:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1656);
      END_STATE();
    case 802:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1085);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1173);
      END_STATE();
    case 803:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1741);
      END_STATE();
    case 804:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1087);
      END_STATE();
    case 805:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1742);
      END_STATE();
    case 806:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1743);
      END_STATE();
    case 807:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1744);
      END_STATE();
    case 808:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1745);
      END_STATE();
    case 809:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1746);
      END_STATE();
    case 810:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1747);
      END_STATE();
    case 811:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1748);
      END_STATE();
    case 812:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1749);
      END_STATE();
    case 813:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(977);
      END_STATE();
    case 814:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1284);
      END_STATE();
    case 815:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1282);
      END_STATE();
    case 816:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1285);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1039);
      END_STATE();
    case 817:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1283);
      END_STATE();
    case 818:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1286);
      END_STATE();
    case 819:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1783);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1023);
      END_STATE();
    case 820:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1784);
      END_STATE();
    case 821:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1785);
      END_STATE();
    case 822:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1786);
      END_STATE();
    case 823:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1787);
      END_STATE();
    case 824:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1788);
      END_STATE();
    case 825:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(913);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1815);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 826:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1019);
      END_STATE();
    case 827:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(745);
      END_STATE();
    case 828:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(755);
      END_STATE();
    case 829:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1218);
      END_STATE();
    case 830:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1261);
      END_STATE();
    case 831:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1450);
      END_STATE();
    case 832:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1149);
      END_STATE();
    case 833:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1864);
      END_STATE();
    case 834:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1230);
      END_STATE();
    case 835:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1249);
      END_STATE();
    case 836:
      ADVANCE_MAP(
        'C', 1771,
        'c', 1771,
        'N', 916,
        'n', 916,
        'R', 1791,
        'r', 1791,
        'S', 1617,
        's', 1617,
        'T', 966,
        't', 966,
      );
      END_STATE();
    case 837:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1092);
      END_STATE();
    case 838:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1228);
      END_STATE();
    case 839:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1096);
      END_STATE();
    case 840:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 841:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1229);
      END_STATE();
    case 842:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1252);
      END_STATE();
    case 843:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1585);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(837);
      END_STATE();
    case 844:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1105);
      END_STATE();
    case 845:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1100);
      END_STATE();
    case 846:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1586);
      END_STATE();
    case 847:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1750);
      END_STATE();
    case 848:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1416);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1426);
      END_STATE();
    case 849:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(857);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1761);
      END_STATE();
    case 850:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1669);
      END_STATE();
    case 851:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1146);
      END_STATE();
    case 852:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 853:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1420);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1393);
      END_STATE();
    case 854:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(788);
      END_STATE();
    case 855:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 856:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 857:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(970);
      END_STATE();
    case 858:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(771);
      END_STATE();
    case 859:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(775);
      END_STATE();
    case 860:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(776);
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
          lookahead == 'c') ADVANCE(790);
      END_STATE();
    case 864:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1102);
      END_STATE();
    case 865:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1740);
      END_STATE();
    case 866:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1560);
      END_STATE();
    case 867:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      END_STATE();
    case 868:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1471);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1772);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1637);
      END_STATE();
    case 869:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1035);
      END_STATE();
    case 870:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1391);
      END_STATE();
    case 871:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1479);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1481);
      END_STATE();
    case 872:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1483);
      END_STATE();
    case 873:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1487);
      END_STATE();
    case 874:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1491);
      END_STATE();
    case 875:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1070);
      END_STATE();
    case 876:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(869);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1764);
      END_STATE();
    case 877:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(815);
      END_STATE();
    case 878:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(803);
      END_STATE();
    case 879:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(805);
      END_STATE();
    case 880:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      END_STATE();
    case 881:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(807);
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
          lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 888:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1213);
      END_STATE();
    case 889:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      END_STATE();
    case 890:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(813);
      END_STATE();
    case 891:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1971);
      END_STATE();
    case 892:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1972);
      END_STATE();
    case 893:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1985);
      END_STATE();
    case 894:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2004);
      END_STATE();
    case 895:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2013);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1934);
      END_STATE();
    case 897:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1307);
      END_STATE();
    case 898:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1949);
      END_STATE();
    case 899:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1970);
      END_STATE();
    case 900:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1980);
      END_STATE();
    case 901:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1891);
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
          lookahead == 'd') ADVANCE(1160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 905:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(785);
      END_STATE();
    case 906:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(924);
      END_STATE();
    case 907:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1564);
      END_STATE();
    case 908:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1455);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1842);
      END_STATE();
    case 909:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(870);
      END_STATE();
    case 910:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1158);
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
          lookahead == 'd') ADVANCE(1161);
      END_STATE();
    case 914:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1442);
      END_STATE();
    case 915:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1372);
      END_STATE();
    case 916:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(980);
      END_STATE();
    case 917:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1059);
      END_STATE();
    case 918:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1514);
      END_STATE();
    case 919:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(999);
      END_STATE();
    case 920:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      END_STATE();
    case 921:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1273);
      END_STATE();
    case 922:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1516);
      END_STATE();
    case 923:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1037);
      END_STATE();
    case 924:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1576);
      END_STATE();
    case 925:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1117);
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
          lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 930:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(904);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1613);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1062);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1814);
      END_STATE();
    case 932:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1824);
      END_STATE();
    case 933:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 934:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1965);
      END_STATE();
    case 935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1959);
      END_STATE();
    case 936:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1906);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1974);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2023);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1963);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2037);
      END_STATE();
    case 943:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2042);
      END_STATE();
    case 944:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1908);
      END_STATE();
    case 945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1921);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2016);
      END_STATE();
    case 947:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2046);
      END_STATE();
    case 948:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1911);
      END_STATE();
    case 949:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1941);
      END_STATE();
    case 950:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1950);
      END_STATE();
    case 951:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1935);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 953:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1534);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1615);
      END_STATE();
    case 954:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1835);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 956:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1792);
      END_STATE();
    case 957:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1825);
      END_STATE();
    case 958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1350);
      END_STATE();
    case 959:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 960:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1521);
      END_STATE();
    case 963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 964:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1235);
      END_STATE();
    case 965:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1544);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1341);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1538);
      END_STATE();
    case 970:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 971:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 972:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 973:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1293);
      END_STATE();
    case 974:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 975:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1536);
      END_STATE();
    case 977:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1838);
      END_STATE();
    case 978:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1342);
      END_STATE();
    case 981:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 982:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1829);
      END_STATE();
    case 983:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1621);
      END_STATE();
    case 984:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1821);
      END_STATE();
    case 985:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1584);
      END_STATE();
    case 986:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 987:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1648);
      END_STATE();
    case 988:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 989:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1565);
      END_STATE();
    case 990:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1448);
      END_STATE();
    case 991:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 993:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1386);
      END_STATE();
    case 994:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1424);
      END_STATE();
    case 995:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 996:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 997:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1526);
      END_STATE();
    case 998:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 999:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 1000:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1537);
      END_STATE();
    case 1001:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 1002:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1332);
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
          lookahead == 'e') ADVANCE(1598);
      END_STATE();
    case 1006:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 1007:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 1008:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1604);
      END_STATE();
    case 1009:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1609);
      END_STATE();
    case 1010:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1736);
      END_STATE();
    case 1011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1794);
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
          lookahead == 'e') ADVANCE(1826);
      END_STATE();
    case 1015:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 1016:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 1017:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1625);
      END_STATE();
    case 1018:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 1019:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1543);
      END_STATE();
    case 1020:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 1021:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1831);
      END_STATE();
    case 1022:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1627);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1557);
      END_STATE();
    case 1023:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1263);
      END_STATE();
    case 1024:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1555);
      END_STATE();
    case 1025:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1655);
      END_STATE();
    case 1026:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 1027:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1630);
      END_STATE();
    case 1028:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1559);
      END_STATE();
    case 1029:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1367);
      END_STATE();
    case 1030:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1373);
      END_STATE();
    case 1032:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 1033:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 1034:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1574);
      END_STATE();
    case 1035:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1520);
      END_STATE();
    case 1036:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1453);
      END_STATE();
    case 1037:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1387);
      END_STATE();
    case 1038:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 1039:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1839);
      END_STATE();
    case 1040:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 1041:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1114);
      END_STATE();
    case 1042:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 1043:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 1044:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 1045:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 1046:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 1047:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 1048:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 1049:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 1050:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1410);
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
          lookahead == 'f') ADVANCE(1840);
      END_STATE();
    case 1055:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1721);
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
          lookahead == 'f') ADVANCE(792);
      END_STATE();
    case 1059:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(760);
      END_STATE();
    case 1060:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(783);
      END_STATE();
    case 1061:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1506);
      END_STATE();
    case 1062:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(979);
      END_STATE();
    case 1063:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1433);
      END_STATE();
    case 1064:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1165);
      END_STATE();
    case 1065:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1176);
      END_STATE();
    case 1066:
      ADVANCE_MAP(
        'F', 793,
        'f', 793,
        'H', 1467,
        'h', 1467,
        'M', 731,
        'm', 731,
        'P', 1034,
        'p', 1034,
      );
      END_STATE();
    case 1067:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1476);
      END_STATE();
    case 1068:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1179);
      END_STATE();
    case 1069:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1180);
      END_STATE();
    case 1070:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1485);
      END_STATE();
    case 1071:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1489);
      END_STATE();
    case 1072:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2038);
      END_STATE();
    case 1073:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2033);
      END_STATE();
    case 1074:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1057);
      END_STATE();
    case 1075:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1331);
      END_STATE();
    case 1076:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1028);
      END_STATE();
    case 1077:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1602);
      END_STATE();
    case 1078:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1004);
      END_STATE();
    case 1079:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1381);
      END_STATE();
    case 1080:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(969);
      END_STATE();
    case 1081:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1078);
      END_STATE();
    case 1082:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1472);
      END_STATE();
    case 1083:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1029);
      END_STATE();
    case 1084:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1174);
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
          lookahead == 'g') ADVANCE(1480);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 1089:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1484);
      END_STATE();
    case 1090:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1488);
      END_STATE();
    case 1091:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1492);
      END_STATE();
    case 1092:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1860);
      END_STATE();
    case 1093:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1933);
      END_STATE();
    case 1094:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1942);
      END_STATE();
    case 1095:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1215);
      END_STATE();
    case 1096:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1294);
      END_STATE();
    case 1097:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1444);
      END_STATE();
    case 1098:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(965);
      END_STATE();
    case 1099:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1296);
      END_STATE();
    case 1100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(789);
      END_STATE();
    case 1101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(786);
      END_STATE();
    case 1102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(988);
      END_STATE();
    case 1103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1257);
      END_STATE();
    case 1104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1300);
      END_STATE();
    case 1105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(758);
      END_STATE();
    case 1106:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1302);
      END_STATE();
    case 1107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(993);
      END_STATE();
    case 1108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1306);
      END_STATE();
    case 1109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1221);
      END_STATE();
    case 1110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1310);
      END_STATE();
    case 1111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1457);
      END_STATE();
    case 1112:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1460);
      END_STATE();
    case 1113:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1462);
      END_STATE();
    case 1114:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1478);
      END_STATE();
    case 1115:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1482);
      END_STATE();
    case 1116:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1486);
      END_STATE();
    case 1117:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1490);
      END_STATE();
    case 1118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1465);
      END_STATE();
    case 1119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1466);
      END_STATE();
    case 1120:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1468);
      END_STATE();
    case 1121:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1470);
      END_STATE();
    case 1122:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1494);
      END_STATE();
    case 1123:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1043);
      END_STATE();
    case 1124:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1044);
      END_STATE();
    case 1125:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1045);
      END_STATE();
    case 1126:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1046);
      END_STATE();
    case 1127:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1047);
      END_STATE();
    case 1128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1048);
      END_STATE();
    case 1129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1049);
      END_STATE();
    case 1130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1050);
      END_STATE();
    case 1131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 1132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1340);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1524);
      END_STATE();
    case 1133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1054);
      END_STATE();
    case 1134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1079);
      END_STATE();
    case 1135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1712);
      END_STATE();
    case 1136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1064);
      END_STATE();
    case 1137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1075);
      END_STATE();
    case 1138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(875);
      END_STATE();
    case 1139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1500);
      END_STATE();
    case 1140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1084);
      END_STATE();
    case 1141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1668);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1670);
      END_STATE();
    case 1143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1684);
      END_STATE();
    case 1144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1477);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1162);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1328);
      END_STATE();
    case 1146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1272);
      END_STATE();
    case 1147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1256);
      END_STATE();
    case 1148:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1671);
      END_STATE();
    case 1149:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1363);
      END_STATE();
    case 1150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1713);
      END_STATE();
    case 1151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1370);
      END_STATE();
    case 1152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1691);
      END_STATE();
    case 1153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1352);
      END_STATE();
    case 1154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(987);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(802);
      END_STATE();
    case 1155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 1156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 1157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1843);
      END_STATE();
    case 1158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1353);
      END_STATE();
    case 1159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 1160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1357);
      END_STATE();
    case 1161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1384);
      END_STATE();
    case 1162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1308);
      END_STATE();
    case 1163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1377);
      END_STATE();
    case 1164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 1165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 1166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1796);
      END_STATE();
    case 1167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1355);
      END_STATE();
    case 1168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1454);
      END_STATE();
    case 1169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 1170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1376);
      END_STATE();
    case 1171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1797);
      END_STATE();
    case 1172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1427);
      END_STATE();
    case 1173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1265);
      END_STATE();
    case 1174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1399);
      END_STATE();
    case 1175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1798);
      END_STATE();
    case 1176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1266);
      END_STATE();
    case 1177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1365);
      END_STATE();
    case 1178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1429);
      END_STATE();
    case 1179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1267);
      END_STATE();
    case 1180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1268);
      END_STATE();
    case 1181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1434);
      END_STATE();
    case 1182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1436);
      END_STATE();
    case 1183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 1184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1437);
      END_STATE();
    case 1185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1639);
      END_STATE();
    case 1186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1438);
      END_STATE();
    case 1187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1439);
      END_STATE();
    case 1188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1451);
      END_STATE();
    case 1189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1440);
      END_STATE();
    case 1190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1441);
      END_STATE();
    case 1191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1318);
      END_STATE();
    case 1192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1718);
      END_STATE();
    case 1193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1733);
      END_STATE();
    case 1194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1474);
      END_STATE();
    case 1195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1325);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1782);
      END_STATE();
    case 1196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(920);
      END_STATE();
    case 1197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1719);
      END_STATE();
    case 1198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1720);
      END_STATE();
    case 1199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1723);
      END_STATE();
    case 1200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      END_STATE();
    case 1201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(879);
      END_STATE();
    case 1202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      END_STATE();
    case 1203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(881);
      END_STATE();
    case 1204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 1205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 1206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      END_STATE();
    case 1207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 1208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 1209:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2029);
      END_STATE();
    case 1210:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2032);
      END_STATE();
    case 1211:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1880);
      END_STATE();
    case 1212:
      ADVANCE_MAP(
        'K', 932,
        'k', 932,
        'M', 1418,
        'm', 1418,
        'Q', 1768,
        'q', 1768,
        'V', 1449,
        'v', 1449,
      );
      END_STATE();
    case 1213:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(954);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 1214:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(735);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(746);
      END_STATE();
    case 1215:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1400);
      END_STATE();
    case 1216:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(995);
      END_STATE();
    case 1217:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2045);
      END_STATE();
    case 1218:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(961);
      END_STATE();
    case 1219:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(963);
      END_STATE();
    case 1220:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(971);
      END_STATE();
    case 1221:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(974);
      END_STATE();
    case 1222:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(982);
      END_STATE();
    case 1223:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(984);
      END_STATE();
    case 1224:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1380);
      END_STATE();
    case 1225:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1014);
      END_STATE();
    case 1226:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1021);
      END_STATE();
    case 1227:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1026);
      END_STATE();
    case 1228:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1167);
      END_STATE();
    case 1229:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1277);
      END_STATE();
    case 1230:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1111);
      END_STATE();
    case 1231:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1402);
      END_STATE();
    case 1232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 1233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1861);
      END_STATE();
    case 1234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 1235:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2039);
      END_STATE();
    case 1236:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1295);
      END_STATE();
    case 1237:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1973);
      END_STATE();
    case 1238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(908);
      END_STATE();
    case 1239:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      END_STATE();
    case 1240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2028);
      END_STATE();
    case 1241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2022);
      END_STATE();
    case 1242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1910);
      END_STATE();
    case 1243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1863);
      END_STATE();
    case 1244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1378);
      END_STATE();
    case 1245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1862);
      END_STATE();
    case 1246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1619);
      END_STATE();
    case 1247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1259);
      END_STATE();
    case 1248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 1249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1769);
      END_STATE();
    case 1250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 1251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1414);
      END_STATE();
    case 1252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1011);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(976);
      END_STATE();
    case 1253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1191);
      END_STATE();
    case 1254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1166);
      END_STATE();
    case 1255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1280);
      END_STATE();
    case 1256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1820);
      END_STATE();
    case 1257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1452);
      END_STATE();
    case 1258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1822);
      END_STATE();
    case 1259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1032);
      END_STATE();
    case 1260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1240);
      END_STATE();
    case 1261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(933);
      END_STATE();
    case 1262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1269);
      END_STATE();
    case 1263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(959);
      END_STATE();
    case 1264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1608);
      END_STATE();
    case 1265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(941);
      END_STATE();
    case 1266:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(945);
      END_STATE();
    case 1267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(947);
      END_STATE();
    case 1268:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(950);
      END_STATE();
    case 1269:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(828);
      END_STATE();
    case 1270:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1780);
      END_STATE();
    case 1271:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 1272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 1273:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1163);
      END_STATE();
    case 1274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1171);
      END_STATE();
    case 1275:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1456);
      END_STATE();
    case 1276:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1459);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 1277:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1461);
      END_STATE();
    case 1278:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1463);
      END_STATE();
    case 1279:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 1280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1071);
      END_STATE();
    case 1281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1116);
      END_STATE();
    case 1282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1120);
      END_STATE();
    case 1283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1121);
      END_STATE();
    case 1284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1089);
      END_STATE();
    case 1285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1090);
      END_STATE();
    case 1286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1091);
      END_STATE();
    case 1287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1231);
      END_STATE();
    case 1288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1503);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1354);
      END_STATE();
    case 1289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(826);
      END_STATE();
    case 1290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1499);
      END_STATE();
    case 1291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1138);
      END_STATE();
    case 1292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1297);
      END_STATE();
    case 1293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1507);
      END_STATE();
    case 1294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1446);
      END_STATE();
    case 1295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(798);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(765);
      END_STATE();
    case 1296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1591);
      END_STATE();
    case 1297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(752);
      END_STATE();
    case 1298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(935);
      END_STATE();
    case 1299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(756);
      END_STATE();
    case 1300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1599);
      END_STATE();
    case 1301:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(763);
      END_STATE();
    case 1302:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1603);
      END_STATE();
    case 1303:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(774);
      END_STATE();
    case 1304:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(777);
      END_STATE();
    case 1305:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(778);
      END_STATE();
    case 1306:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1607);
      END_STATE();
    case 1307:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(779);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1364);
      END_STATE();
    case 1308:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(990);
      END_STATE();
    case 1309:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(734);
      END_STATE();
    case 1310:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1610);
      END_STATE();
    case 1311:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(948);
      END_STATE();
    case 1312:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1009);
      END_STATE();
    case 1313:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1141);
      END_STATE();
    case 1314:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1299);
      END_STATE();
    case 1315:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1508);
      END_STATE();
    case 1316:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1147);
      END_STATE();
    case 1317:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1301);
      END_STATE();
    case 1318:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1148);
      END_STATE();
    case 1319:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1303);
      END_STATE();
    case 1320:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1304);
      END_STATE();
    case 1321:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1305);
      END_STATE();
    case 1322:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1193);
      END_STATE();
    case 1323:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1458);
      END_STATE();
    case 1324:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(796);
      END_STATE();
    case 1325:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1036);
      END_STATE();
    case 1326:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1275);
      END_STATE();
    case 1327:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1926);
      END_STATE();
    case 1328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2044);
      END_STATE();
    case 1329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1964);
      END_STATE();
    case 1330:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2049);
      END_STATE();
    case 1331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1936);
      END_STATE();
    case 1332:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1981);
      END_STATE();
    case 1333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1951);
      END_STATE();
    case 1334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2000);
      END_STATE();
    case 1335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1979);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1945);
      END_STATE();
    case 1337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1956);
      END_STATE();
    case 1338:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1967);
      END_STATE();
    case 1339:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1968);
      END_STATE();
    case 1340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 1341:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1789);
      END_STATE();
    case 1342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1790);
      END_STATE();
    case 1343:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1417);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1134);
      END_STATE();
    case 1344:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1447);
      END_STATE();
    case 1345:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 1346:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 1347:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 1348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1356);
      END_STATE();
    case 1349:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1156);
      END_STATE();
    case 1350:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1717);
      END_STATE();
    case 1351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1779);
      END_STATE();
    case 1352:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1210);
      END_STATE();
    case 1353:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1077);
      END_STATE();
    case 1354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1020);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1541);
      END_STATE();
    case 1355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1073);
      END_STATE();
    case 1356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(964);
      END_STATE();
    case 1357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1351);
      END_STATE();
    case 1358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 1359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 1360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1685);
      END_STATE();
    case 1361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 1362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1258);
      END_STATE();
    case 1363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 1364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1271);
      END_STATE();
    case 1365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1714);
      END_STATE();
    case 1366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      END_STATE();
    case 1367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1672);
      END_STATE();
    case 1368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      END_STATE();
    case 1369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 1370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1596);
      END_STATE();
    case 1371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1673);
      END_STATE();
    case 1372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1597);
      END_STATE();
    case 1373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1674);
      END_STATE();
    case 1374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1729);
      END_STATE();
    case 1375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1606);
      END_STATE();
    case 1376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 1377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      END_STATE();
    case 1378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1010);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1651);
      END_STATE();
    case 1379:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1076);
      END_STATE();
    case 1380:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1443);
      END_STATE();
    case 1381:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 1382:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 1383:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 1384:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1735);
      END_STATE();
    case 1385:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1665);
      END_STATE();
    case 1386:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1738);
      END_STATE();
    case 1387:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1694);
      END_STATE();
    case 1388:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1224);
      END_STATE();
    case 1389:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1063);
      END_STATE();
    case 1390:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1724);
      END_STATE();
    case 1391:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(794);
      END_STATE();
    case 1392:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1183);
      END_STATE();
    case 1393:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1731);
      END_STATE();
    case 1394:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1473);
      END_STATE();
    case 1395:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1112);
      END_STATE();
    case 1396:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1118);
      END_STATE();
    case 1397:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1119);
      END_STATE();
    case 1398:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1122);
      END_STATE();
    case 1399:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 1400:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1495);
      END_STATE();
    case 1401:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1496);
      END_STATE();
    case 1402:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1497);
      END_STATE();
    case 1403:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1752);
      END_STATE();
    case 1404:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1753);
      END_STATE();
    case 1405:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1754);
      END_STATE();
    case 1406:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1755);
      END_STATE();
    case 1407:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1756);
      END_STATE();
    case 1408:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1757);
      END_STATE();
    case 1409:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1758);
      END_STATE();
    case 1410:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1759);
      END_STATE();
    case 1411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 1412:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1097);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1289);
      END_STATE();
    case 1413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1800);
      END_STATE();
    case 1414:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 1415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(827);
      END_STATE();
    case 1416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1292);
      END_STATE();
    case 1417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1349);
      END_STATE();
    case 1418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1693);
      END_STATE();
    case 1419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1061);
      END_STATE();
    case 1420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1781);
      END_STATE();
    case 1421:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1347);
      END_STATE();
    case 1422:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1587);
      END_STATE();
    case 1423:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1236);
      END_STATE();
    case 1424:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1517);
      END_STATE();
    case 1425:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1542);
      END_STATE();
    case 1426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1533);
      END_STATE();
    case 1427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1327);
      END_STATE();
    case 1428:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 1429:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1330);
      END_STATE();
    case 1430:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 1431:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1385);
      END_STATE();
    case 1432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1556);
      END_STATE();
    case 1433:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1582);
      END_STATE();
    case 1434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1435:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1540);
      END_STATE();
    case 1436:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1334);
      END_STATE();
    case 1437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1335);
      END_STATE();
    case 1438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 1439:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1337);
      END_STATE();
    case 1440:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1338);
      END_STATE();
    case 1441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1339);
      END_STATE();
    case 1442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1699);
      END_STATE();
    case 1443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1801);
      END_STATE();
    case 1444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1622);
      END_STATE();
    case 1445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1793);
      END_STATE();
    case 1446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 1447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1551);
      END_STATE();
    case 1448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1777);
      END_STATE();
    case 1449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1219);
      END_STATE();
    case 1450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1641);
      END_STATE();
    case 1451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1375);
      END_STATE();
    case 1452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 1453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1778);
      END_STATE();
    case 1454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 1455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 1456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 1457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1646);
      END_STATE();
    case 1458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1702);
      END_STATE();
    case 1459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(856);
      END_STATE();
    case 1460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1631);
      END_STATE();
    case 1461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 1462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1632);
      END_STATE();
    case 1463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(877);
      END_STATE();
    case 1464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 1465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1635);
      END_STATE();
    case 1466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1636);
      END_STATE();
    case 1467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1640);
      END_STATE();
    case 1468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1642);
      END_STATE();
    case 1469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1643);
      END_STATE();
    case 1470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1644);
      END_STATE();
    case 1471:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1314);
      END_STATE();
    case 1472:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1569);
      END_STATE();
    case 1473:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1392);
      END_STATE();
    case 1474:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1389);
      END_STATE();
    case 1475:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1315);
      END_STATE();
    case 1476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1570);
      END_STATE();
    case 1477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1383);
      END_STATE();
    case 1478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1657);
      END_STATE();
    case 1479:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1317);
      END_STATE();
    case 1480:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1573);
      END_STATE();
    case 1481:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1575);
      END_STATE();
    case 1482:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1659);
      END_STATE();
    case 1483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1319);
      END_STATE();
    case 1484:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1577);
      END_STATE();
    case 1485:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1578);
      END_STATE();
    case 1486:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1660);
      END_STATE();
    case 1487:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1320);
      END_STATE();
    case 1488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1579);
      END_STATE();
    case 1489:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1580);
      END_STATE();
    case 1490:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1661);
      END_STATE();
    case 1491:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1321);
      END_STATE();
    case 1492:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1493:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1799);
      END_STATE();
    case 1494:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 1495:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1810);
      END_STATE();
    case 1496:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1811);
      END_STATE();
    case 1497:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1812);
      END_STATE();
    case 1498:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1216);
      END_STATE();
    case 1499:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1986);
      END_STATE();
    case 1500:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1922);
      END_STATE();
    case 1501:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(905);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(952);
      END_STATE();
    case 1502:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1098);
      END_STATE();
    case 1503:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1571);
      END_STATE();
    case 1504:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1131);
      END_STATE();
    case 1505:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(967);
      END_STATE();
    case 1506:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(801);
      END_STATE();
    case 1507:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1698);
      END_STATE();
    case 1508:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1700);
      END_STATE();
    case 1509:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 1510:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1040);
      END_STATE();
    case 1511:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1005);
      END_STATE();
    case 1512:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1008);
      END_STATE();
    case 1513:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1572);
      END_STATE();
    case 1514:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      END_STATE();
    case 1515:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1547);
      END_STATE();
    case 1516:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1554);
      END_STATE();
    case 1517:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1002);
      END_STATE();
    case 1518:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1703);
      END_STATE();
    case 1519:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1431);
      END_STATE();
    case 1520:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1707);
      END_STATE();
    case 1521:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(800);
      END_STATE();
    case 1522:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1583);
      END_STATE();
    case 1523:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1422);
      END_STATE();
    case 1524:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1214);
      END_STATE();
    case 1525:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1937);
      END_STATE();
    case 1526:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1929);
      END_STATE();
    case 1527:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1982);
      END_STATE();
    case 1528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2018);
      END_STATE();
    case 1529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1892);
      END_STATE();
    case 1530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1893);
      END_STATE();
    case 1531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1313);
      END_STATE();
    case 1532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1681);
      END_STATE();
    case 1533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 1534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1133);
      END_STATE();
    case 1535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1667);
      END_STATE();
    case 1536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 1537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1795);
      END_STATE();
    case 1538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1513);
      END_STATE();
    case 1539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(889);
      END_STATE();
    case 1540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1211);
      END_STATE();
    case 1541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1423);
      END_STATE();
    case 1542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 1543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1419);
      END_STATE();
    case 1544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1588);
      END_STATE();
    case 1545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 1546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      END_STATE();
    case 1547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1445);
      END_STATE();
    case 1548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 1549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 1550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1628);
      END_STATE();
    case 1551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 1552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 1553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 1554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1475);
      END_STATE();
    case 1555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 1556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 1557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 1558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1053);
      END_STATE();
    case 1559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(992);
      END_STATE();
    case 1560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 1561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 1562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1042);
      END_STATE();
    case 1563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 1564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1638);
      END_STATE();
    case 1565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 1566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1140);
      END_STATE();
    case 1567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1143);
      END_STATE();
    case 1568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1558);
      END_STATE();
    case 1569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1150);
      END_STATE();
    case 1570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1804);
      END_STATE();
    case 1571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1025);
      END_STATE();
    case 1572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1177);
      END_STATE();
    case 1573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1192);
      END_STATE();
    case 1574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1322);
      END_STATE();
    case 1575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1806);
      END_STATE();
    case 1576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1027);
      END_STATE();
    case 1577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1197);
      END_STATE();
    case 1578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1807);
      END_STATE();
    case 1579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1198);
      END_STATE();
    case 1580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1809);
      END_STATE();
    case 1581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1199);
      END_STATE();
    case 1582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1278);
      END_STATE();
    case 1583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1493);
      END_STATE();
    case 1584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 1585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1976);
      END_STATE();
    case 1586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 1587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1966);
      END_STATE();
    case 1588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1923);
      END_STATE();
    case 1589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1907);
      END_STATE();
    case 1590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1958);
      END_STATE();
    case 1591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1969);
      END_STATE();
    case 1592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1953);
      END_STATE();
    case 1593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2043);
      END_STATE();
    case 1594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1997);
      END_STATE();
    case 1595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2017);
      END_STATE();
    case 1596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1909);
      END_STATE();
    case 1597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2047);
      END_STATE();
    case 1598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1955);
      END_STATE();
    case 1599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1957);
      END_STATE();
    case 1600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1927);
      END_STATE();
    case 1601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1912);
      END_STATE();
    case 1602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1925);
      END_STATE();
    case 1603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1918);
      END_STATE();
    case 1604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1999);
      END_STATE();
    case 1605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1978);
      END_STATE();
    case 1606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1984);
      END_STATE();
    case 1607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1998);
      END_STATE();
    case 1608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1952);
      END_STATE();
    case 1609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1913);
      END_STATE();
    case 1610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1954);
      END_STATE();
    case 1611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1802);
      END_STATE();
    case 1612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1095);
      END_STATE();
    case 1613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1251);
      END_STATE();
    case 1614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1666);
      END_STATE();
    case 1615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1773);
      END_STATE();
    case 1616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1209);
      END_STATE();
    case 1617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1168);
      END_STATE();
    case 1618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1060);
      END_STATE();
    case 1619:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      END_STATE();
    case 1620:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1611);
      END_STATE();
    case 1621:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1109);
      END_STATE();
    case 1622:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1709);
      END_STATE();
    case 1623:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1519);
      END_STATE();
    case 1624:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1094);
      END_STATE();
    case 1625:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1618);
      END_STATE();
    case 1626:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(872);
      END_STATE();
    case 1627:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1715);
      END_STATE();
    case 1628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1185);
      END_STATE();
    case 1629:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1157);
      END_STATE();
    case 1630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1589);
      END_STATE();
    case 1631:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1690);
      END_STATE();
    case 1632:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1722);
      END_STATE();
    case 1633:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(978);
      END_STATE();
    case 1634:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1594);
      END_STATE();
    case 1635:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1696);
      END_STATE();
    case 1636:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1697);
      END_STATE();
    case 1637:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(968);
      END_STATE();
    case 1638:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(764);
      END_STATE();
    case 1639:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1676);
      END_STATE();
    case 1640:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1716);
      END_STATE();
    case 1641:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(937);
      END_STATE();
    case 1642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1678);
      END_STATE();
    case 1643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1679);
      END_STATE();
    case 1644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1680);
      END_STATE();
    case 1645:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1137);
      END_STATE();
    case 1646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1688);
      END_STATE();
    case 1647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1689);
      END_STATE();
    case 1648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1428);
      END_STATE();
    case 1649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1706);
      END_STATE();
    case 1650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1006);
      END_STATE();
    case 1651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1007);
      END_STATE();
    case 1652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      END_STATE();
    case 1653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1805);
      END_STATE();
    case 1654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1172);
      END_STATE();
    case 1655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1654);
      END_STATE();
    case 1656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1653);
      END_STATE();
    case 1657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1725);
      END_STATE();
    case 1658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1726);
      END_STATE();
    case 1659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1728);
      END_STATE();
    case 1660:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1730);
      END_STATE();
    case 1661:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1732);
      END_STATE();
    case 1662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1068);
      END_STATE();
    case 1663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1069);
      END_STATE();
    case 1664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1751);
      END_STATE();
    case 1665:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 1666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1858);
      END_STATE();
    case 1667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1983);
      END_STATE();
    case 1668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1276);
      END_STATE();
    case 1669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1144);
      END_STATE();
    case 1670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1154);
      END_STATE();
    case 1671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2003);
      END_STATE();
    case 1672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1946);
      END_STATE();
    case 1673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1961);
      END_STATE();
    case 1674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1898);
      END_STATE();
    case 1675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1928);
      END_STATE();
    case 1676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1932);
      END_STATE();
    case 1677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1948);
      END_STATE();
    case 1678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1977);
      END_STATE();
    case 1679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1889);
      END_STATE();
    case 1680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1890);
      END_STATE();
    case 1681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1136);
      END_STATE();
    case 1682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      END_STATE();
    case 1683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 1684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1834);
      END_STATE();
    case 1685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1833);
      END_STATE();
    case 1686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1819);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 1688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 1689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1430);
      END_STATE();
    case 1690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 1691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1823);
      END_STATE();
    case 1692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1686);
      END_STATE();
    case 1693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1038);
      END_STATE();
    case 1694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1695:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 1696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1592);
      END_STATE();
    case 1697:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1662);
      END_STATE();
    case 1698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1600);
      END_STATE();
    case 1699:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1601);
      END_STATE();
    case 1700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1605);
      END_STATE();
    case 1701:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1013);
      END_STATE();
    case 1702:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(994);
      END_STATE();
    case 1703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(996);
      END_STATE();
    case 1704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(986);
      END_STATE();
    case 1706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(998);
      END_STATE();
    case 1707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1012);
      END_STATE();
    case 1708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 1709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(780);
      END_STATE();
    case 1710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 1711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1775);
      END_STATE();
    case 1712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1421);
      END_STATE();
    case 1713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1099);
      END_STATE();
    case 1714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1101);
      END_STATE();
    case 1715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1692);
      END_STATE();
    case 1716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1382);
      END_STATE();
    case 1717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1142);
      END_STATE();
    case 1718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 1719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1106);
      END_STATE();
    case 1720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 1721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      END_STATE();
    case 1722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1225);
      END_STATE();
    case 1723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 1724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      END_STATE();
    case 1725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1226);
      END_STATE();
    case 1726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(997);
      END_STATE();
    case 1727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1704);
      END_STATE();
    case 1728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1222);
      END_STATE();
    case 1729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1309);
      END_STATE();
    case 1730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1223);
      END_STATE();
    case 1731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 1732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1227);
      END_STATE();
    case 1733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1708);
      END_STATE();
    case 1734:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1836);
      END_STATE();
    case 1735:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 1736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1808);
      END_STATE();
    case 1737:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1178);
      END_STATE();
    case 1738:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1200);
      END_STATE();
    case 1739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1837);
      END_STATE();
    case 1740:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1175);
      END_STATE();
    case 1741:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1194);
      END_STATE();
    case 1742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1181);
      END_STATE();
    case 1743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 1744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1184);
      END_STATE();
    case 1745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 1746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 1748:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1189);
      END_STATE();
    case 1749:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 1750:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1113);
      END_STATE();
    case 1751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1663);
      END_STATE();
    case 1752:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1201);
      END_STATE();
    case 1753:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 1754:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 1755:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1756:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1205);
      END_STATE();
    case 1757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1206);
      END_STATE();
    case 1758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1759:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 1760:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1123);
      END_STATE();
    case 1761:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1124);
      END_STATE();
    case 1762:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1125);
      END_STATE();
    case 1763:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1126);
      END_STATE();
    case 1764:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1127);
      END_STATE();
    case 1765:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1766:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1129);
      END_STATE();
    case 1767:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1130);
      END_STATE();
    case 1768:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1022);
      END_STATE();
    case 1769:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(911);
      END_STATE();
    case 1770:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1683);
      END_STATE();
    case 1771:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1567);
      END_STATE();
    case 1772:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1290);
      END_STATE();
    case 1773:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 1774:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1388);
      END_STATE();
    case 1775:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1562);
      END_STATE();
    case 1776:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1710);
      END_STATE();
    case 1777:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1675);
      END_STATE();
    case 1778:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1677);
      END_STATE();
    case 1779:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1260);
      END_STATE();
    case 1780:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1561);
      END_STATE();
    case 1781:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1374);
      END_STATE();
    case 1782:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1649);
      END_STATE();
    case 1783:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1760);
      END_STATE();
    case 1784:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1762);
      END_STATE();
    case 1785:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1763);
      END_STATE();
    case 1786:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1765);
      END_STATE();
    case 1787:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1766);
      END_STATE();
    case 1788:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1767);
      END_STATE();
    case 1789:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2026);
      END_STATE();
    case 1790:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2019);
      END_STATE();
    case 1791:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1015);
      END_STATE();
    case 1792:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1164);
      END_STATE();
    case 1793:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1169);
      END_STATE();
    case 1794:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(981);
      END_STATE();
    case 1795:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(767);
      END_STATE();
    case 1796:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(938);
      END_STATE();
    case 1797:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(942);
      END_STATE();
    case 1798:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1051);
      END_STATE();
    case 1799:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1196);
      END_STATE();
    case 1800:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1395);
      END_STATE();
    case 1801:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1329);
      END_STATE();
    case 1802:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1425);
      END_STATE();
    case 1803:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(759);
      END_STATE();
    case 1804:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(762);
      END_STATE();
    case 1805:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1432);
      END_STATE();
    case 1806:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(766);
      END_STATE();
    case 1807:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(768);
      END_STATE();
    case 1808:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1435);
      END_STATE();
    case 1809:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(770);
      END_STATE();
    case 1810:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1396);
      END_STATE();
    case 1811:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1397);
      END_STATE();
    case 1812:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1398);
      END_STATE();
    case 1813:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2021);
      END_STATE();
    case 1814:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1818);
      END_STATE();
    case 1815:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(742);
      END_STATE();
    case 1816:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(914);
      END_STATE();
    case 1817:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(991);
      END_STATE();
    case 1818:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(868);
      END_STATE();
    case 1819:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2014);
      END_STATE();
    case 1820:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1901);
      END_STATE();
    case 1821:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2048);
      END_STATE();
    case 1822:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1960);
      END_STATE();
    case 1823:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 1824:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1253);
      END_STATE();
    case 1825:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(845);
      END_STATE();
    case 1826:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(864);
      END_STATE();
    case 1827:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(727);
      END_STATE();
    case 1828:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(751);
      END_STATE();
    case 1829:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(915);
      END_STATE();
    case 1830:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1645);
      END_STATE();
    case 1831:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1593);
      END_STATE();
    case 1832:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1595);
      END_STATE();
    case 1833:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1509);
      END_STATE();
    case 1834:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1220);
      END_STATE();
    case 1835:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1647);
      END_STATE();
    case 1836:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1511);
      END_STATE();
    case 1837:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1512);
      END_STATE();
    case 1838:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1734);
      END_STATE();
    case 1839:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1739);
      END_STATE();
    case 1840:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1115);
      END_STATE();
    case 1841:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1522);
      END_STATE();
    case 1842:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(940);
      END_STATE();
    case 1843:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(946);
      END_STATE();
    case 1844:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2050);
      END_STATE();
    case 1845:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2050);
      END_STATE();
    case 1846:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2031);
      END_STATE();
    case 1847:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2030);
      END_STATE();
    case 1848:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2053);
      END_STATE();
    case 1849:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1846);
      END_STATE();
    case 1850:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1847);
      END_STATE();
    case 1851:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2071);
      END_STATE();
    case 1852:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1995);
      END_STATE();
    case 1853:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1854:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1996);
      END_STATE();
    case 1855:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1888);
      END_STATE();
    case 1856:
      if (eof) ADVANCE(1857);
      ADVANCE_MAP(
        '\n', 2088,
        '\r', 1,
        '"', 1874,
        '#', 2084,
        '*', 1894,
        '+', 1919,
        ',', 1887,
        '-', 1920,
        '0', 2076,
        ':', 1917,
        '=', 2027,
        '@', 1994,
        'A', 887,
        'C', 721,
        'D', 247,
        'E', 275,
        'F', 238,
        'H', 722,
        'I', 264,
        'L', 1411,
        'M', 723,
        'N', 1412,
        'Q', 287,
        'R', 929,
        'S', 930,
        'T', 724,
        'U', 1501,
        'V', 249,
        '^', 1924,
        'a', 429,
        'c', 610,
        'd', 391,
        'e', 346,
        'f', 1132,
        'h', 512,
        'i', 266,
        'l', 267,
        'm', 372,
        'n', 268,
        'r', 248,
        's', 446,
        't', 443,
        'u', 524,
        'v', 953,
        'w', 398,
        '}', 2073,
        '\t', 2087,
        ' ', 2087,
        'B', 725,
        'b', 725,
        'G', 1246,
        'g', 1246,
        'K', 825,
        'k', 825,
        'P', 739,
        'p', 739,
        'X', 726,
        'x', 726,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2077);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(749);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1018);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym_match_declaration_token1);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__all_token1);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym__match_canonical_token1);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym__match_final_token1);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__match_exec_token1);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'S') ADVANCE(256);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(2075);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2072);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2066);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2077);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      ADVANCE_MAP(
        '%', 2064,
        'C', 2064,
        'L', 2064,
        'd', 2064,
        'h', 2064,
        'i', 2064,
        'k', 2064,
        'l', 2064,
        'n', 2064,
        'p', 2064,
        'r', 2064,
        'u', 2064,
      );
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2072);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2066);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      ADVANCE_MAP(
        '%', 2064,
        'C', 2064,
        'L', 2064,
        'd', 2064,
        'h', 2064,
        'i', 2064,
        'k', 2064,
        'l', 2064,
        'n', 2064,
        'p', 2064,
        'r', 2064,
        'u', 2064,
      );
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token1);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1916);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1885);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(1883);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'y') ADVANCE(1903);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1888);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__match_host_token1);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__match_originalhost_token1);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__match_tagged_token1);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__match_localuser_token1);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1888);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1905);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1886);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym__dynamic_forward_token1);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1938);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1195);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym__hash_known_hosts_token1);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym__include_token1);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == 'e') ADVANCE(1915);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == 'h') ADVANCE(1987);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == 'n') ADVANCE(1988);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == 'o') ADVANCE(1990);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == 's') ADVANCE(1989);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token1);
      if (lookahead == '.') ADVANCE(1995);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1993);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token2);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1995);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym__proxy_jump_value_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1996);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token2);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '{') ADVANCE(2072);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2067);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      ADVANCE_MAP(
        '%', 2064,
        'C', 2064,
        'L', 2064,
        'd', 2064,
        'h', 2064,
        'i', 2064,
        'k', 2064,
        'l', 2064,
        'n', 2064,
        'p', 2064,
        'r', 2064,
        'u', 2064,
      );
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      ADVANCE_MAP(
        '%', 2065,
        'C', 2065,
        'H', 2065,
        'I', 2065,
        'K', 2065,
        'L', 2065,
        'd', 2065,
        'f', 2065,
        'h', 2065,
        'i', 2065,
        'k', 2065,
        'l', 2065,
        'n', 2065,
        'p', 2065,
        'r', 2065,
        't', 2065,
        'u', 2065,
      );
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      ADVANCE_MAP(
        '%', 2068,
        'C', 2068,
        'H', 2068,
        'I', 2068,
        'K', 2068,
        'L', 2068,
        'T', 2068,
        'd', 2068,
        'f', 2068,
        'h', 2068,
        'i', 2068,
        'k', 2068,
        'l', 2068,
        'n', 2068,
        'p', 2068,
        'r', 2068,
        't', 2068,
        'u', 2068,
      );
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_subsystem);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym__set_env_token1);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2030);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(aux_sym__syslog_facility_token1);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(956);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym__use_keychain_token1);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym__user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1401);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(2051);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym_facility);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(509);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(410);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(2072);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2071);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2077);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2084);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2085);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(2085);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2086);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2087);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1856},
  [2] = {.lex_state = 1856},
  [3] = {.lex_state = 1856},
  [4] = {.lex_state = 1856},
  [5] = {.lex_state = 1856},
  [6] = {.lex_state = 1856},
  [7] = {.lex_state = 1856},
  [8] = {.lex_state = 1856},
  [9] = {.lex_state = 1856},
  [10] = {.lex_state = 1856},
  [11] = {.lex_state = 1856},
  [12] = {.lex_state = 1856},
  [13] = {.lex_state = 1856},
  [14] = {.lex_state = 1856},
  [15] = {.lex_state = 1856},
  [16] = {.lex_state = 1856},
  [17] = {.lex_state = 1856},
  [18] = {.lex_state = 1856},
  [19] = {.lex_state = 1856},
  [20] = {.lex_state = 1856},
  [21] = {.lex_state = 1856},
  [22] = {.lex_state = 1856},
  [23] = {.lex_state = 1856},
  [24] = {.lex_state = 1856},
  [25] = {.lex_state = 1856},
  [26] = {.lex_state = 1856},
  [27] = {.lex_state = 1856},
  [28] = {.lex_state = 1856},
  [29] = {.lex_state = 1856},
  [30] = {.lex_state = 1856},
  [31] = {.lex_state = 1856},
  [32] = {.lex_state = 1856},
  [33] = {.lex_state = 1856},
  [34] = {.lex_state = 1856},
  [35] = {.lex_state = 1856},
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
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 38},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 28},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 36},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 36},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 45},
  [124] = {.lex_state = 28},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 41},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 43},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 47},
  [138] = {.lex_state = 47},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 101},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 1856},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 48},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 48},
  [157] = {.lex_state = 101},
  [158] = {.lex_state = 33},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 30},
  [164] = {.lex_state = 37},
  [165] = {.lex_state = 48},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 30},
  [168] = {.lex_state = 32},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 32},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 1856},
  [175] = {.lex_state = 1856},
  [176] = {.lex_state = 1856},
  [177] = {.lex_state = 28},
  [178] = {.lex_state = 1856},
  [179] = {.lex_state = 1856},
  [180] = {.lex_state = 37},
  [181] = {.lex_state = 1856},
  [182] = {.lex_state = 1856},
  [183] = {.lex_state = 1856},
  [184] = {.lex_state = 39},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 28},
  [187] = {.lex_state = 1856},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 1856},
  [190] = {.lex_state = 48},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 1856},
  [193] = {.lex_state = 1856},
  [194] = {.lex_state = 1856},
  [195] = {.lex_state = 1856},
  [196] = {.lex_state = 1856},
  [197] = {.lex_state = 1856},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 28},
  [200] = {.lex_state = 1856},
  [201] = {.lex_state = 1856},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 1856},
  [204] = {.lex_state = 1856},
  [205] = {.lex_state = 1856},
  [206] = {.lex_state = 1856},
  [207] = {.lex_state = 1856},
  [208] = {.lex_state = 1856},
  [209] = {.lex_state = 1856},
  [210] = {.lex_state = 1856},
  [211] = {.lex_state = 1856},
  [212] = {.lex_state = 37},
  [213] = {.lex_state = 1856},
  [214] = {.lex_state = 1856},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 1856},
  [217] = {.lex_state = 39},
  [218] = {.lex_state = 1856},
  [219] = {.lex_state = 32},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 1856},
  [222] = {.lex_state = 1856},
  [223] = {.lex_state = 30},
  [224] = {.lex_state = 1856},
  [225] = {.lex_state = 37},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 1856},
  [228] = {.lex_state = 1856},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 1856},
  [231] = {.lex_state = 1856},
  [232] = {.lex_state = 1856},
  [233] = {.lex_state = 1856},
  [234] = {.lex_state = 1856},
  [235] = {.lex_state = 1856},
  [236] = {.lex_state = 1856},
  [237] = {.lex_state = 1856},
  [238] = {.lex_state = 1856},
  [239] = {.lex_state = 1856},
  [240] = {.lex_state = 1856},
  [241] = {.lex_state = 1856},
  [242] = {.lex_state = 37},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 1856},
  [245] = {.lex_state = 1856},
  [246] = {.lex_state = 1856},
  [247] = {.lex_state = 1856},
  [248] = {.lex_state = 1856},
  [249] = {.lex_state = 1856},
  [250] = {.lex_state = 39},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 1856},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 1856},
  [255] = {.lex_state = 46},
  [256] = {.lex_state = 1856},
  [257] = {.lex_state = 1856},
  [258] = {.lex_state = 37},
  [259] = {.lex_state = 1856},
  [260] = {.lex_state = 1856},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 39},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 1856},
  [267] = {.lex_state = 15},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 1856},
  [270] = {.lex_state = 1856},
  [271] = {.lex_state = 1856},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 1856},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 30},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 1856},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 1856},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 1856},
  [300] = {.lex_state = 1856},
  [301] = {.lex_state = 1856},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 1856},
  [304] = {.lex_state = 1856},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 1856},
  [307] = {.lex_state = 1856},
  [308] = {.lex_state = 1856},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 1856},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 1856},
  [321] = {.lex_state = 1856},
  [322] = {.lex_state = 1856},
  [323] = {.lex_state = 2},
  [324] = {.lex_state = 1856},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 1856},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 1856},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 1856},
  [334] = {.lex_state = 1856},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 1856},
  [337] = {.lex_state = 1856},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 1856},
  [343] = {.lex_state = 1856},
  [344] = {.lex_state = 1856},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 1856},
  [348] = {.lex_state = 1856},
  [349] = {.lex_state = 1856},
  [350] = {.lex_state = 40},
  [351] = {.lex_state = 1856},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 1856},
  [354] = {.lex_state = 1856},
  [355] = {.lex_state = 2},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 1856},
  [360] = {.lex_state = 2},
  [361] = {.lex_state = 1856},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 1856},
  [366] = {.lex_state = 1856},
  [367] = {.lex_state = 232},
  [368] = {.lex_state = 1856},
  [369] = {.lex_state = 16},
  [370] = {.lex_state = 1856},
  [371] = {.lex_state = 1856},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 2},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 2},
  [381] = {.lex_state = 1856},
  [382] = {.lex_state = 1856},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 1856},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 2},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 2},
  [395] = {.lex_state = 2},
  [396] = {.lex_state = 1856},
  [397] = {.lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 1856},
  [401] = {.lex_state = 2},
  [402] = {.lex_state = 1856},
  [403] = {.lex_state = 1856},
  [404] = {.lex_state = 1856},
  [405] = {.lex_state = 2},
  [406] = {.lex_state = 2},
  [407] = {.lex_state = 2},
  [408] = {.lex_state = 1856},
  [409] = {.lex_state = 2},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 1856},
  [412] = {.lex_state = 2},
  [413] = {.lex_state = 2},
  [414] = {.lex_state = 1856},
  [415] = {.lex_state = 1856},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 2},
  [418] = {.lex_state = 2},
  [419] = {.lex_state = 2},
  [420] = {.lex_state = 1856},
  [421] = {.lex_state = 2},
  [422] = {.lex_state = 16},
  [423] = {.lex_state = 1856},
  [424] = {.lex_state = 1856},
  [425] = {.lex_state = 1856},
  [426] = {.lex_state = 1856},
  [427] = {.lex_state = 2},
  [428] = {.lex_state = 2},
  [429] = {.lex_state = 2},
  [430] = {.lex_state = 2},
  [431] = {.lex_state = 2},
  [432] = {.lex_state = 1856},
  [433] = {.lex_state = 1856},
  [434] = {.lex_state = 2},
  [435] = {.lex_state = 1856},
  [436] = {.lex_state = 2},
  [437] = {.lex_state = 1856},
  [438] = {.lex_state = 2},
  [439] = {.lex_state = 2},
  [440] = {.lex_state = 1856},
  [441] = {.lex_state = 1856},
  [442] = {.lex_state = 1856},
  [443] = {.lex_state = 1856},
  [444] = {.lex_state = 2},
  [445] = {.lex_state = 2},
  [446] = {.lex_state = 18},
  [447] = {.lex_state = 1856},
  [448] = {.lex_state = 17},
  [449] = {.lex_state = 2},
  [450] = {.lex_state = 2},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 2},
  [453] = {.lex_state = 2},
  [454] = {.lex_state = 2},
  [455] = {.lex_state = 40},
  [456] = {.lex_state = 2},
  [457] = {.lex_state = 2},
  [458] = {.lex_state = 1856},
  [459] = {.lex_state = 2},
  [460] = {.lex_state = 1856},
  [461] = {.lex_state = 232},
  [462] = {.lex_state = 2},
  [463] = {.lex_state = 2},
  [464] = {.lex_state = 1856},
  [465] = {.lex_state = 2},
  [466] = {.lex_state = 1856},
  [467] = {.lex_state = 2},
  [468] = {.lex_state = 2},
  [469] = {.lex_state = 1856},
  [470] = {.lex_state = 2},
  [471] = {.lex_state = 2},
  [472] = {.lex_state = 1856},
  [473] = {.lex_state = 1856},
  [474] = {.lex_state = 1856},
  [475] = {.lex_state = 1856},
  [476] = {.lex_state = 1856},
  [477] = {.lex_state = 2},
  [478] = {.lex_state = 2},
  [479] = {.lex_state = 1856},
  [480] = {.lex_state = 1856},
  [481] = {.lex_state = 2},
  [482] = {.lex_state = 1856},
  [483] = {.lex_state = 2},
  [484] = {.lex_state = 2},
  [485] = {.lex_state = 1856},
  [486] = {.lex_state = 2},
  [487] = {.lex_state = 1856},
  [488] = {.lex_state = 2},
  [489] = {.lex_state = 2},
  [490] = {.lex_state = 1856},
  [491] = {.lex_state = 2},
  [492] = {.lex_state = 2},
  [493] = {.lex_state = 2},
  [494] = {.lex_state = 32},
  [495] = {.lex_state = 1856},
  [496] = {.lex_state = 1856},
  [497] = {.lex_state = 1856},
  [498] = {.lex_state = 1856},
  [499] = {.lex_state = 1856},
  [500] = {.lex_state = 1856},
  [501] = {.lex_state = 1856},
  [502] = {.lex_state = 1856},
  [503] = {.lex_state = 1856},
  [504] = {.lex_state = 1856},
  [505] = {.lex_state = 1856},
  [506] = {.lex_state = 1856},
  [507] = {.lex_state = 1856},
  [508] = {.lex_state = 1856},
  [509] = {.lex_state = 1856},
  [510] = {.lex_state = 1856},
  [511] = {.lex_state = 1856},
  [512] = {.lex_state = 1856},
  [513] = {.lex_state = 1856},
  [514] = {.lex_state = 1856},
  [515] = {.lex_state = 1856},
  [516] = {.lex_state = 1856},
  [517] = {.lex_state = 1856},
  [518] = {.lex_state = 1856},
  [519] = {.lex_state = 1856},
  [520] = {.lex_state = 1856},
  [521] = {.lex_state = 1856},
  [522] = {.lex_state = 1856},
  [523] = {.lex_state = 1856},
  [524] = {.lex_state = 1856},
  [525] = {.lex_state = 1856},
  [526] = {.lex_state = 1856},
  [527] = {.lex_state = 1856},
  [528] = {.lex_state = 1856},
  [529] = {.lex_state = 1856},
  [530] = {.lex_state = 1856},
  [531] = {.lex_state = 1856},
  [532] = {.lex_state = 1856},
  [533] = {.lex_state = 1856},
  [534] = {.lex_state = 1856},
  [535] = {.lex_state = 1856},
  [536] = {.lex_state = 1856},
  [537] = {.lex_state = 1856},
  [538] = {.lex_state = 1856},
  [539] = {.lex_state = 1856},
  [540] = {.lex_state = 1856},
  [541] = {.lex_state = 1856},
  [542] = {.lex_state = 42},
  [543] = {.lex_state = 1856},
  [544] = {.lex_state = 1856},
  [545] = {.lex_state = 1856},
  [546] = {.lex_state = 1856},
  [547] = {.lex_state = 1856},
  [548] = {.lex_state = 1856},
  [549] = {.lex_state = 1856},
  [550] = {.lex_state = 1856},
  [551] = {.lex_state = 1856},
  [552] = {.lex_state = 1856},
  [553] = {.lex_state = 1856},
  [554] = {.lex_state = 40},
  [555] = {.lex_state = 1856},
  [556] = {.lex_state = 1856},
  [557] = {.lex_state = 1856},
  [558] = {.lex_state = 1856},
  [559] = {.lex_state = 1856},
  [560] = {.lex_state = 1856},
  [561] = {.lex_state = 1856},
  [562] = {.lex_state = 1856},
  [563] = {.lex_state = 1856},
  [564] = {.lex_state = 1856},
  [565] = {.lex_state = 1856},
  [566] = {.lex_state = 1856},
  [567] = {.lex_state = 1856},
  [568] = {.lex_state = 1856},
  [569] = {.lex_state = 1856},
  [570] = {.lex_state = 1856},
  [571] = {.lex_state = 1856},
  [572] = {.lex_state = 49},
  [573] = {.lex_state = 1856},
  [574] = {.lex_state = 1856},
  [575] = {.lex_state = 1856},
  [576] = {.lex_state = 1856},
  [577] = {.lex_state = 1856},
  [578] = {.lex_state = 1856},
  [579] = {.lex_state = 1856},
  [580] = {.lex_state = 1856},
  [581] = {.lex_state = 1856},
  [582] = {.lex_state = 1856},
  [583] = {.lex_state = 1856},
  [584] = {.lex_state = 1856},
  [585] = {.lex_state = 1856},
  [586] = {.lex_state = 1856},
  [587] = {.lex_state = 1856},
  [588] = {.lex_state = 1856},
  [589] = {.lex_state = 1856},
  [590] = {.lex_state = 1856},
  [591] = {.lex_state = 1856},
  [592] = {.lex_state = 1856},
  [593] = {.lex_state = 1856},
  [594] = {.lex_state = 1856},
  [595] = {.lex_state = 1856},
  [596] = {.lex_state = 1856},
  [597] = {.lex_state = 1856},
  [598] = {.lex_state = 1856},
  [599] = {.lex_state = 1856},
  [600] = {.lex_state = 1851},
  [601] = {.lex_state = 1856},
  [602] = {.lex_state = 1856},
  [603] = {.lex_state = 1856},
  [604] = {.lex_state = 1856},
  [605] = {.lex_state = 1856},
  [606] = {.lex_state = 1856},
  [607] = {.lex_state = 1856},
  [608] = {.lex_state = 1856},
  [609] = {.lex_state = 1856},
  [610] = {.lex_state = 1856},
  [611] = {.lex_state = 1856},
  [612] = {.lex_state = 1856},
  [613] = {.lex_state = 1856},
  [614] = {.lex_state = 1856},
  [615] = {.lex_state = 1856},
  [616] = {.lex_state = 1856},
  [617] = {.lex_state = 1856},
  [618] = {.lex_state = 16},
  [619] = {.lex_state = 1856},
  [620] = {.lex_state = 1856},
  [621] = {.lex_state = 1856},
  [622] = {.lex_state = 1856},
  [623] = {.lex_state = 1856},
  [624] = {.lex_state = 1856},
  [625] = {.lex_state = 1856},
  [626] = {.lex_state = 1856},
  [627] = {.lex_state = 1856},
  [628] = {.lex_state = 1856},
  [629] = {.lex_state = 1856},
  [630] = {.lex_state = 1856},
  [631] = {.lex_state = 1856},
  [632] = {.lex_state = 1856},
  [633] = {.lex_state = 1856},
  [634] = {.lex_state = 1856},
  [635] = {.lex_state = 1856},
  [636] = {.lex_state = 1856},
  [637] = {.lex_state = 40},
  [638] = {.lex_state = 1856},
  [639] = {.lex_state = 1856},
  [640] = {.lex_state = 1856},
  [641] = {.lex_state = 1856},
  [642] = {.lex_state = 1856},
  [643] = {.lex_state = 16},
  [644] = {.lex_state = 1856},
  [645] = {.lex_state = 1856},
  [646] = {.lex_state = 1856},
  [647] = {.lex_state = 1856},
  [648] = {.lex_state = 1856},
  [649] = {.lex_state = 1856},
  [650] = {.lex_state = 1856},
  [651] = {.lex_state = 1856},
  [652] = {.lex_state = 1856},
  [653] = {.lex_state = 232},
  [654] = {.lex_state = 1856},
  [655] = {.lex_state = 1856},
  [656] = {.lex_state = 1856},
  [657] = {.lex_state = 1856},
  [658] = {.lex_state = 1856},
  [659] = {.lex_state = 1856},
  [660] = {.lex_state = 1856},
  [661] = {.lex_state = 1856},
  [662] = {.lex_state = 1856},
  [663] = {.lex_state = 1856},
  [664] = {.lex_state = 1856},
  [665] = {.lex_state = 1856},
  [666] = {.lex_state = 1856},
  [667] = {.lex_state = 1856},
  [668] = {.lex_state = 1856},
  [669] = {.lex_state = 1856},
  [670] = {.lex_state = 1856},
  [671] = {.lex_state = 1856},
  [672] = {.lex_state = 1856},
  [673] = {.lex_state = 1856},
  [674] = {.lex_state = 1856},
  [675] = {.lex_state = 1856},
  [676] = {.lex_state = 1856},
  [677] = {.lex_state = 1856},
  [678] = {.lex_state = 1856},
  [679] = {.lex_state = 1856},
  [680] = {.lex_state = 1856},
  [681] = {.lex_state = 1856},
  [682] = {.lex_state = 1856},
  [683] = {.lex_state = 1856},
  [684] = {.lex_state = 1856},
  [685] = {.lex_state = 1856},
  [686] = {.lex_state = 1856},
  [687] = {.lex_state = 1856},
  [688] = {.lex_state = 1856},
  [689] = {.lex_state = 1856},
  [690] = {.lex_state = 1856},
  [691] = {.lex_state = 1856},
  [692] = {.lex_state = 1856},
  [693] = {.lex_state = 1856},
  [694] = {.lex_state = 1856},
  [695] = {.lex_state = 1856},
  [696] = {.lex_state = 1856},
  [697] = {.lex_state = 1856},
  [698] = {.lex_state = 1856},
  [699] = {.lex_state = 1856},
  [700] = {.lex_state = 1856},
  [701] = {.lex_state = 1856},
  [702] = {.lex_state = 1856},
  [703] = {.lex_state = 1856},
  [704] = {.lex_state = 1856},
  [705] = {.lex_state = 1856},
  [706] = {.lex_state = 1856},
  [707] = {.lex_state = 1856},
  [708] = {.lex_state = 1856},
  [709] = {.lex_state = 1856},
  [710] = {.lex_state = 1856},
  [711] = {.lex_state = 1856},
  [712] = {.lex_state = 1856},
  [713] = {.lex_state = 1856},
  [714] = {.lex_state = 1856},
  [715] = {.lex_state = 1856},
  [716] = {.lex_state = 1856},
  [717] = {.lex_state = 1856},
  [718] = {.lex_state = 1856},
  [719] = {.lex_state = 1856},
  [720] = {.lex_state = 1856},
  [721] = {.lex_state = 1856},
  [722] = {.lex_state = 1856},
  [723] = {.lex_state = 1856},
  [724] = {.lex_state = 1856},
  [725] = {.lex_state = 1856},
  [726] = {.lex_state = 1856},
  [727] = {.lex_state = 1856},
  [728] = {.lex_state = 1856},
  [729] = {.lex_state = 1851},
  [730] = {.lex_state = 1856},
  [731] = {.lex_state = 1856},
  [732] = {.lex_state = 1856},
  [733] = {.lex_state = 1856},
  [734] = {.lex_state = 1856},
  [735] = {.lex_state = 1856},
  [736] = {.lex_state = 1856},
  [737] = {.lex_state = 1856},
  [738] = {.lex_state = 1856},
  [739] = {.lex_state = 1856},
  [740] = {.lex_state = 1856},
  [741] = {.lex_state = 1856},
  [742] = {.lex_state = 1856},
  [743] = {.lex_state = 1856},
  [744] = {.lex_state = 1856},
  [745] = {.lex_state = 1856},
  [746] = {.lex_state = 1856},
  [747] = {.lex_state = 1856},
  [748] = {.lex_state = 1856},
  [749] = {.lex_state = 1856},
  [750] = {.lex_state = 1856},
  [751] = {.lex_state = 1856},
  [752] = {.lex_state = 1856},
  [753] = {.lex_state = 1856},
  [754] = {.lex_state = 291},
  [755] = {.lex_state = 1856},
  [756] = {.lex_state = 1856},
  [757] = {.lex_state = 1856},
  [758] = {.lex_state = 1856},
  [759] = {.lex_state = 1856},
  [760] = {.lex_state = 1856},
  [761] = {.lex_state = 1856},
  [762] = {.lex_state = 1856},
  [763] = {.lex_state = 1856},
  [764] = {.lex_state = 1856},
  [765] = {.lex_state = 1856},
  [766] = {.lex_state = 1856},
  [767] = {.lex_state = 1856},
  [768] = {.lex_state = 1856},
  [769] = {.lex_state = 1856},
  [770] = {.lex_state = 1856},
  [771] = {.lex_state = 1856},
  [772] = {.lex_state = 1856},
  [773] = {.lex_state = 1856},
  [774] = {.lex_state = 1856},
  [775] = {.lex_state = 1856},
  [776] = {.lex_state = 1856},
  [777] = {.lex_state = 1856},
  [778] = {.lex_state = 1856},
  [779] = {.lex_state = 16},
  [780] = {.lex_state = 440},
  [781] = {.lex_state = 1856},
  [782] = {.lex_state = 1856},
  [783] = {.lex_state = 1856},
  [784] = {.lex_state = 1856},
  [785] = {.lex_state = 1856},
  [786] = {.lex_state = 440},
  [787] = {.lex_state = 1856},
  [788] = {.lex_state = 16},
  [789] = {.lex_state = 1856},
  [790] = {.lex_state = 17},
  [791] = {.lex_state = 1856},
  [792] = {.lex_state = 2},
  [793] = {.lex_state = 1851},
  [794] = {.lex_state = 16},
  [795] = {.lex_state = 1856},
  [796] = {.lex_state = 16},
  [797] = {.lex_state = 1851},
  [798] = {.lex_state = 1855},
  [799] = {.lex_state = 1856},
  [800] = {.lex_state = 16},
  [801] = {.lex_state = 1856},
  [802] = {.lex_state = 1856},
  [803] = {.lex_state = 16},
  [804] = {.lex_state = 1856},
  [805] = {.lex_state = 1852},
  [806] = {.lex_state = 1855},
  [807] = {.lex_state = 16},
  [808] = {.lex_state = 1853},
  [809] = {.lex_state = 1856},
  [810] = {.lex_state = 1856},
  [811] = {.lex_state = 1856},
  [812] = {.lex_state = 1856},
  [813] = {.lex_state = 1856},
  [814] = {.lex_state = 1856},
  [815] = {.lex_state = 1856},
  [816] = {.lex_state = 1856},
  [817] = {.lex_state = 16},
  [818] = {.lex_state = 1856},
  [819] = {.lex_state = 2},
  [820] = {.lex_state = 1856},
  [821] = {.lex_state = 1856},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 1856},
  [824] = {.lex_state = 1856},
  [825] = {.lex_state = 1856},
  [826] = {.lex_state = 1856},
  [827] = {.lex_state = 1856},
  [828] = {.lex_state = 1856},
  [829] = {.lex_state = 1856},
  [830] = {.lex_state = 1851},
  [831] = {.lex_state = 1851},
  [832] = {.lex_state = 1851},
  [833] = {.lex_state = 1851},
  [834] = {.lex_state = 1851},
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
    [sym_config] = STATE(822),
    [sym_host_declaration] = STATE(2),
    [sym_match_declaration] = STATE(2),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(201),
    [sym__space] = ACTIONS(203),
    [sym__eol] = ACTIONS(205),
  },
  [2] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(201),
    [sym__space] = ACTIONS(203),
    [sym__eol] = ACTIONS(209),
  },
  [3] = {
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(545),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_host_declaration_token1] = ACTIONS(213),
    [aux_sym_match_declaration_token1] = ACTIONS(216),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(219),
    [aux_sym__address_family_token1] = ACTIONS(222),
    [aux_sym__batch_mode_token1] = ACTIONS(225),
    [aux_sym__bind_address_token1] = ACTIONS(228),
    [aux_sym__bind_interface_token1] = ACTIONS(231),
    [aux_sym__canonical_domains_token1] = ACTIONS(234),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(237),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(240),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(243),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(246),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(249),
    [aux_sym__certificate_file_token1] = ACTIONS(252),
    [aux_sym__check_host_ip_token1] = ACTIONS(255),
    [aux_sym__ciphers_token1] = ACTIONS(258),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(261),
    [aux_sym__compression_token1] = ACTIONS(264),
    [aux_sym__connection_attempts_token1] = ACTIONS(267),
    [aux_sym__connect_timeout_token1] = ACTIONS(270),
    [aux_sym__control_master_token1] = ACTIONS(273),
    [aux_sym__control_persist_token1] = ACTIONS(276),
    [aux_sym__control_path_token1] = ACTIONS(279),
    [aux_sym__dynamic_forward_token1] = ACTIONS(282),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(285),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(288),
    [aux_sym__escape_char_token1] = ACTIONS(291),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(294),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(297),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(300),
    [aux_sym__forward_agent_token1] = ACTIONS(303),
    [aux_sym__forward_x11_token1] = ACTIONS(306),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(309),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(312),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(315),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(318),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(321),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(324),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(327),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(327),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(330),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(333),
    [aux_sym__host_key_alias_token1] = ACTIONS(336),
    [aux_sym__hostname_token1] = ACTIONS(339),
    [aux_sym__identities_only_token1] = ACTIONS(342),
    [aux_sym__identity_agent_token1] = ACTIONS(345),
    [aux_sym__identity_file_token1] = ACTIONS(348),
    [aux_sym__ignore_unknown_token1] = ACTIONS(351),
    [aux_sym__include_token1] = ACTIONS(354),
    [aux_sym__ipqos_token1] = ACTIONS(357),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(360),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(360),
    [aux_sym__kex_algorithms_token1] = ACTIONS(363),
    [aux_sym__known_hosts_command_token1] = ACTIONS(366),
    [aux_sym__local_command_token1] = ACTIONS(369),
    [aux_sym__local_forward_token1] = ACTIONS(372),
    [aux_sym__log_level_token1] = ACTIONS(375),
    [aux_sym__log_verbose_token1] = ACTIONS(378),
    [aux_sym__macs_token1] = ACTIONS(381),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(384),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(387),
    [aux_sym__password_authentication_token1] = ACTIONS(390),
    [aux_sym__permit_local_command_token1] = ACTIONS(393),
    [aux_sym__permit_remote_open_token1] = ACTIONS(396),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(399),
    [aux_sym__port_token1] = ACTIONS(402),
    [aux_sym__preferred_authentications_token1] = ACTIONS(405),
    [aux_sym__proxy_command_token1] = ACTIONS(408),
    [aux_sym__proxy_jump_token1] = ACTIONS(411),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(414),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(417),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(417),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(420),
    [aux_sym__rekey_limit_token1] = ACTIONS(423),
    [aux_sym__remote_command_token1] = ACTIONS(426),
    [aux_sym__remote_forward_token1] = ACTIONS(429),
    [aux_sym__request_tty_token1] = ACTIONS(432),
    [aux_sym__required_rsa_size_token1] = ACTIONS(435),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(438),
    [aux_sym__security_key_provider_token1] = ACTIONS(441),
    [aux_sym__send_env_token1] = ACTIONS(444),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(447),
    [aux_sym__server_alive_interval_token1] = ACTIONS(450),
    [aux_sym__session_type_token1] = ACTIONS(453),
    [aux_sym__set_env_token1] = ACTIONS(456),
    [aux_sym__stdin_null_token1] = ACTIONS(459),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(462),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(465),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(468),
    [aux_sym__syslog_facility_token1] = ACTIONS(471),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(474),
    [aux_sym__tag_token1] = ACTIONS(477),
    [aux_sym__tunnel_token1] = ACTIONS(480),
    [aux_sym__tunnel_device_token1] = ACTIONS(483),
    [aux_sym__update_host_keys_token1] = ACTIONS(486),
    [aux_sym__use_keychain_token1] = ACTIONS(489),
    [aux_sym__user_token1] = ACTIONS(492),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(495),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(498),
    [aux_sym__visual_host_key_token1] = ACTIONS(501),
    [aux_sym__xauth_location_token1] = ACTIONS(504),
    [sym_comment] = ACTIONS(507),
    [sym__space] = ACTIONS(510),
    [sym__eol] = ACTIONS(513),
  },
  [4] = {
    [sym__declarations] = STATE(23),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(516),
    [aux_sym_host_declaration_token1] = ACTIONS(518),
    [aux_sym_match_declaration_token1] = ACTIONS(516),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(516),
  },
  [5] = {
    [sym__declarations] = STATE(30),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym_host_declaration_token1] = ACTIONS(526),
    [aux_sym_match_declaration_token1] = ACTIONS(524),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(524),
  },
  [6] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_host_declaration_token1] = ACTIONS(530),
    [aux_sym_match_declaration_token1] = ACTIONS(528),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(528),
  },
  [7] = {
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(532),
    [aux_sym_host_declaration_token1] = ACTIONS(534),
    [aux_sym_match_declaration_token1] = ACTIONS(532),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
    [sym__eol] = ACTIONS(532),
  },
  [8] = {
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym_host_declaration_token1] = ACTIONS(538),
    [aux_sym_match_declaration_token1] = ACTIONS(536),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(540),
    [aux_sym__address_family_token1] = ACTIONS(543),
    [aux_sym__batch_mode_token1] = ACTIONS(546),
    [aux_sym__bind_address_token1] = ACTIONS(549),
    [aux_sym__bind_interface_token1] = ACTIONS(552),
    [aux_sym__canonical_domains_token1] = ACTIONS(555),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(558),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(561),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(564),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(567),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(570),
    [aux_sym__certificate_file_token1] = ACTIONS(573),
    [aux_sym__check_host_ip_token1] = ACTIONS(576),
    [aux_sym__ciphers_token1] = ACTIONS(579),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(582),
    [aux_sym__compression_token1] = ACTIONS(585),
    [aux_sym__connection_attempts_token1] = ACTIONS(588),
    [aux_sym__connect_timeout_token1] = ACTIONS(591),
    [aux_sym__control_master_token1] = ACTIONS(594),
    [aux_sym__control_persist_token1] = ACTIONS(597),
    [aux_sym__control_path_token1] = ACTIONS(600),
    [aux_sym__dynamic_forward_token1] = ACTIONS(603),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(606),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(609),
    [aux_sym__escape_char_token1] = ACTIONS(612),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(615),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(618),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(621),
    [aux_sym__forward_agent_token1] = ACTIONS(624),
    [aux_sym__forward_x11_token1] = ACTIONS(627),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(630),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(633),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(636),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(639),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(642),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(645),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(648),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(648),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(651),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(654),
    [aux_sym__host_key_alias_token1] = ACTIONS(657),
    [aux_sym__hostname_token1] = ACTIONS(660),
    [aux_sym__identities_only_token1] = ACTIONS(663),
    [aux_sym__identity_agent_token1] = ACTIONS(666),
    [aux_sym__identity_file_token1] = ACTIONS(669),
    [aux_sym__ignore_unknown_token1] = ACTIONS(672),
    [aux_sym__include_token1] = ACTIONS(675),
    [aux_sym__ipqos_token1] = ACTIONS(678),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(681),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(681),
    [aux_sym__kex_algorithms_token1] = ACTIONS(684),
    [aux_sym__known_hosts_command_token1] = ACTIONS(687),
    [aux_sym__local_command_token1] = ACTIONS(690),
    [aux_sym__local_forward_token1] = ACTIONS(693),
    [aux_sym__log_level_token1] = ACTIONS(696),
    [aux_sym__log_verbose_token1] = ACTIONS(699),
    [aux_sym__macs_token1] = ACTIONS(702),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(705),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(708),
    [aux_sym__password_authentication_token1] = ACTIONS(711),
    [aux_sym__permit_local_command_token1] = ACTIONS(714),
    [aux_sym__permit_remote_open_token1] = ACTIONS(717),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(720),
    [aux_sym__port_token1] = ACTIONS(723),
    [aux_sym__preferred_authentications_token1] = ACTIONS(726),
    [aux_sym__proxy_command_token1] = ACTIONS(729),
    [aux_sym__proxy_jump_token1] = ACTIONS(732),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(735),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(738),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(738),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(741),
    [aux_sym__rekey_limit_token1] = ACTIONS(744),
    [aux_sym__remote_command_token1] = ACTIONS(747),
    [aux_sym__remote_forward_token1] = ACTIONS(750),
    [aux_sym__request_tty_token1] = ACTIONS(753),
    [aux_sym__required_rsa_size_token1] = ACTIONS(756),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(759),
    [aux_sym__security_key_provider_token1] = ACTIONS(762),
    [aux_sym__send_env_token1] = ACTIONS(765),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(768),
    [aux_sym__server_alive_interval_token1] = ACTIONS(771),
    [aux_sym__session_type_token1] = ACTIONS(774),
    [aux_sym__set_env_token1] = ACTIONS(777),
    [aux_sym__stdin_null_token1] = ACTIONS(780),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(783),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(786),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(789),
    [aux_sym__syslog_facility_token1] = ACTIONS(792),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(795),
    [aux_sym__tag_token1] = ACTIONS(798),
    [aux_sym__tunnel_token1] = ACTIONS(801),
    [aux_sym__tunnel_device_token1] = ACTIONS(804),
    [aux_sym__update_host_keys_token1] = ACTIONS(807),
    [aux_sym__use_keychain_token1] = ACTIONS(810),
    [aux_sym__user_token1] = ACTIONS(813),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(816),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(819),
    [aux_sym__visual_host_key_token1] = ACTIONS(822),
    [aux_sym__xauth_location_token1] = ACTIONS(825),
    [sym_comment] = ACTIONS(828),
    [sym__space] = ACTIONS(831),
    [sym__eol] = ACTIONS(536),
  },
  [9] = {
    [sym_host_declaration] = STATE(34),
    [sym_match_declaration] = STATE(34),
    [sym_parameter] = STATE(716),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym_host_declaration_token1] = ACTIONS(5),
    [aux_sym_match_declaration_token1] = ACTIONS(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(834),
    [sym__eol] = ACTIONS(836),
  },
  [10] = {
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [11] = {
    [sym__declarations] = STATE(19),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [12] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [13] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [14] = {
    [sym__declarations] = STATE(27),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [15] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [16] = {
    [sym__declarations] = STATE(31),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [17] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(614),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__declarations_repeat1] = STATE(7),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(520),
    [sym__space] = ACTIONS(522),
  },
  [18] = {
    [sym_parameter] = STATE(728),
    [sym__add_keys_to_agent] = STATE(544),
    [sym__address_family] = STATE(543),
    [sym__batch_mode] = STATE(541),
    [sym__bind_address] = STATE(529),
    [sym__bind_interface] = STATE(528),
    [sym__canonical_domains] = STATE(527),
    [sym__canonicalize_fallback_local] = STATE(526),
    [sym__canonicalize_hostname] = STATE(524),
    [sym__canonicalize_max_dots] = STATE(505),
    [sym__canonicalize_permitted_cnames] = STATE(504),
    [sym__ca_signature_algorithms] = STATE(497),
    [sym__certificate_file] = STATE(670),
    [sym__check_host_ip] = STATE(566),
    [sym__ciphers] = STATE(580),
    [sym__clear_all_forwardings] = STATE(581),
    [sym__compression] = STATE(590),
    [sym__connection_attempts] = STATE(593),
    [sym__connect_timeout] = STATE(594),
    [sym__control_master] = STATE(596),
    [sym__control_persist] = STATE(598),
    [sym__control_path] = STATE(605),
    [sym__dynamic_forward] = STATE(608),
    [sym__enable_escape_command_line] = STATE(609),
    [sym__enable_ssh_keysign] = STATE(611),
    [sym__escape_char] = STATE(652),
    [sym__exit_on_forward_failure] = STATE(496),
    [sym__fingerprint_hash] = STATE(691),
    [sym__fork_after_authentication] = STATE(671),
    [sym__forward_agent] = STATE(495),
    [sym__forward_x11] = STATE(745),
    [sym__forward_x11_timeout] = STATE(706),
    [sym__forward_x11_trusted] = STATE(707),
    [sym__global_known_hosts_file] = STATE(708),
    [sym__gssapi_authentication] = STATE(698),
    [sym__gssapi_delegate_credentials] = STATE(713),
    [sym__hash_known_hosts] = STATE(720),
    [sym__hostbased_accepted_algorithms] = STATE(721),
    [sym__hostbased_authentication] = STATE(722),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(732),
    [sym__hostname] = STATE(733),
    [sym__identities_only] = STATE(734),
    [sym__identity_agent] = STATE(736),
    [sym__identity_file] = STATE(738),
    [sym__ignore_unknown] = STATE(739),
    [sym__include] = STATE(740),
    [sym__ipqos] = STATE(741),
    [sym__kbd_interactive_authentication] = STATE(742),
    [sym__kex_algorithms] = STATE(677),
    [sym__known_hosts_command] = STATE(709),
    [sym__local_command] = STATE(509),
    [sym__local_forward] = STATE(525),
    [sym__log_level] = STATE(546),
    [sym__log_verbose] = STATE(547),
    [sym__macs] = STATE(548),
    [sym__no_host_authentication_for_localhost] = STATE(551),
    [sym__number_of_password_prompts] = STATE(552),
    [sym__password_authentication] = STATE(553),
    [sym__permit_local_command] = STATE(555),
    [sym__permit_remote_open] = STATE(558),
    [sym__pkcs11_provider] = STATE(562),
    [sym__port] = STATE(563),
    [sym__preferred_authentications] = STATE(565),
    [sym__proxy_command] = STATE(567),
    [sym__proxy_jump] = STATE(570),
    [sym__proxy_use_fdpass] = STATE(576),
    [sym__pubkey_accepted_algorithms] = STATE(578),
    [sym__pubkey_authentication] = STATE(579),
    [sym__rekey_limit] = STATE(582),
    [sym__remote_command] = STATE(585),
    [sym__remote_forward] = STATE(616),
    [sym__request_tty] = STATE(644),
    [sym__required_rsa_size] = STATE(651),
    [sym__revoked_host_keys] = STATE(663),
    [sym__security_key_provider] = STATE(672),
    [sym__send_env] = STATE(719),
    [sym__server_alive_count_max] = STATE(727),
    [sym__server_alive_interval] = STATE(737),
    [sym__session_type] = STATE(743),
    [sym__set_env] = STATE(751),
    [sym__stdin_null] = STATE(757),
    [sym__stream_local_bind_mask] = STATE(768),
    [sym__stream_local_bind_unlink] = STATE(778),
    [sym__strict_host_key_checking] = STATE(777),
    [sym__syslog_facility] = STATE(776),
    [sym__tcp_keep_alive] = STATE(775),
    [sym__tag] = STATE(774),
    [sym__tunnel] = STATE(773),
    [sym__tunnel_device] = STATE(771),
    [sym__update_host_keys] = STATE(770),
    [sym__use_keychain] = STATE(769),
    [sym__user] = STATE(766),
    [sym__user_known_hosts_file] = STATE(764),
    [sym__verify_host_key_dns] = STATE(762),
    [sym__visual_host_key] = STATE(761),
    [sym__xauth_location] = STATE(760),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(9),
    [aux_sym__address_family_token1] = ACTIONS(11),
    [aux_sym__batch_mode_token1] = ACTIONS(13),
    [aux_sym__bind_address_token1] = ACTIONS(15),
    [aux_sym__bind_interface_token1] = ACTIONS(17),
    [aux_sym__canonical_domains_token1] = ACTIONS(19),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(21),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(23),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(25),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(27),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(29),
    [aux_sym__certificate_file_token1] = ACTIONS(31),
    [aux_sym__check_host_ip_token1] = ACTIONS(33),
    [aux_sym__ciphers_token1] = ACTIONS(35),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(37),
    [aux_sym__compression_token1] = ACTIONS(39),
    [aux_sym__connection_attempts_token1] = ACTIONS(41),
    [aux_sym__connect_timeout_token1] = ACTIONS(43),
    [aux_sym__control_master_token1] = ACTIONS(45),
    [aux_sym__control_persist_token1] = ACTIONS(47),
    [aux_sym__control_path_token1] = ACTIONS(49),
    [aux_sym__dynamic_forward_token1] = ACTIONS(51),
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
    [aux_sym__hash_known_hosts_token1] = ACTIONS(79),
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
    [aux_sym__user_token1] = ACTIONS(191),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(193),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(195),
    [aux_sym__visual_host_key_token1] = ACTIONS(197),
    [aux_sym__xauth_location_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(838),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(840),
    [aux_sym_host_declaration_token1] = ACTIONS(842),
    [aux_sym_match_declaration_token1] = ACTIONS(840),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(840),
    [aux_sym__address_family_token1] = ACTIONS(840),
    [aux_sym__batch_mode_token1] = ACTIONS(840),
    [aux_sym__bind_address_token1] = ACTIONS(840),
    [aux_sym__bind_interface_token1] = ACTIONS(840),
    [aux_sym__canonical_domains_token1] = ACTIONS(840),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(840),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(840),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(840),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(840),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(840),
    [aux_sym__certificate_file_token1] = ACTIONS(840),
    [aux_sym__check_host_ip_token1] = ACTIONS(840),
    [aux_sym__ciphers_token1] = ACTIONS(840),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(840),
    [aux_sym__compression_token1] = ACTIONS(840),
    [aux_sym__connection_attempts_token1] = ACTIONS(840),
    [aux_sym__connect_timeout_token1] = ACTIONS(840),
    [aux_sym__control_master_token1] = ACTIONS(840),
    [aux_sym__control_persist_token1] = ACTIONS(840),
    [aux_sym__control_path_token1] = ACTIONS(840),
    [aux_sym__dynamic_forward_token1] = ACTIONS(840),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(840),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(840),
    [aux_sym__escape_char_token1] = ACTIONS(840),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(840),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(840),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(840),
    [aux_sym__forward_agent_token1] = ACTIONS(840),
    [aux_sym__forward_x11_token1] = ACTIONS(842),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(840),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(840),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(840),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(840),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(840),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(840),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(840),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(840),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(840),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(840),
    [aux_sym__host_key_alias_token1] = ACTIONS(840),
    [aux_sym__hostname_token1] = ACTIONS(840),
    [aux_sym__identities_only_token1] = ACTIONS(840),
    [aux_sym__identity_agent_token1] = ACTIONS(840),
    [aux_sym__identity_file_token1] = ACTIONS(840),
    [aux_sym__ignore_unknown_token1] = ACTIONS(840),
    [aux_sym__include_token1] = ACTIONS(840),
    [aux_sym__ipqos_token1] = ACTIONS(840),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(840),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(840),
    [aux_sym__kex_algorithms_token1] = ACTIONS(840),
    [aux_sym__known_hosts_command_token1] = ACTIONS(840),
    [aux_sym__local_command_token1] = ACTIONS(840),
    [aux_sym__local_forward_token1] = ACTIONS(840),
    [aux_sym__log_level_token1] = ACTIONS(840),
    [aux_sym__log_verbose_token1] = ACTIONS(840),
    [aux_sym__macs_token1] = ACTIONS(840),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(840),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(840),
    [aux_sym__password_authentication_token1] = ACTIONS(840),
    [aux_sym__permit_local_command_token1] = ACTIONS(840),
    [aux_sym__permit_remote_open_token1] = ACTIONS(840),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(840),
    [aux_sym__port_token1] = ACTIONS(840),
    [aux_sym__preferred_authentications_token1] = ACTIONS(840),
    [aux_sym__proxy_command_token1] = ACTIONS(840),
    [aux_sym__proxy_jump_token1] = ACTIONS(840),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(840),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(840),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(840),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(840),
    [aux_sym__rekey_limit_token1] = ACTIONS(840),
    [aux_sym__remote_command_token1] = ACTIONS(840),
    [aux_sym__remote_forward_token1] = ACTIONS(840),
    [aux_sym__request_tty_token1] = ACTIONS(840),
    [aux_sym__required_rsa_size_token1] = ACTIONS(840),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(840),
    [aux_sym__security_key_provider_token1] = ACTIONS(840),
    [aux_sym__send_env_token1] = ACTIONS(840),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(840),
    [aux_sym__server_alive_interval_token1] = ACTIONS(840),
    [aux_sym__session_type_token1] = ACTIONS(840),
    [aux_sym__set_env_token1] = ACTIONS(840),
    [aux_sym__stdin_null_token1] = ACTIONS(840),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(840),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(840),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(840),
    [aux_sym__syslog_facility_token1] = ACTIONS(840),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(840),
    [aux_sym__tag_token1] = ACTIONS(840),
    [aux_sym__tunnel_token1] = ACTIONS(842),
    [aux_sym__tunnel_device_token1] = ACTIONS(840),
    [aux_sym__update_host_keys_token1] = ACTIONS(840),
    [aux_sym__use_keychain_token1] = ACTIONS(840),
    [aux_sym__user_token1] = ACTIONS(842),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(840),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(840),
    [aux_sym__visual_host_key_token1] = ACTIONS(840),
    [aux_sym__xauth_location_token1] = ACTIONS(840),
    [sym_comment] = ACTIONS(840),
    [sym__space] = ACTIONS(840),
    [sym__eol] = ACTIONS(840),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(844),
    [aux_sym_host_declaration_token1] = ACTIONS(846),
    [aux_sym_match_declaration_token1] = ACTIONS(844),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(844),
    [aux_sym__address_family_token1] = ACTIONS(844),
    [aux_sym__batch_mode_token1] = ACTIONS(844),
    [aux_sym__bind_address_token1] = ACTIONS(844),
    [aux_sym__bind_interface_token1] = ACTIONS(844),
    [aux_sym__canonical_domains_token1] = ACTIONS(844),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(844),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(844),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(844),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(844),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(844),
    [aux_sym__certificate_file_token1] = ACTIONS(844),
    [aux_sym__check_host_ip_token1] = ACTIONS(844),
    [aux_sym__ciphers_token1] = ACTIONS(844),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(844),
    [aux_sym__compression_token1] = ACTIONS(844),
    [aux_sym__connection_attempts_token1] = ACTIONS(844),
    [aux_sym__connect_timeout_token1] = ACTIONS(844),
    [aux_sym__control_master_token1] = ACTIONS(844),
    [aux_sym__control_persist_token1] = ACTIONS(844),
    [aux_sym__control_path_token1] = ACTIONS(844),
    [aux_sym__dynamic_forward_token1] = ACTIONS(844),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(844),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(844),
    [aux_sym__escape_char_token1] = ACTIONS(844),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(844),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(844),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(844),
    [aux_sym__forward_agent_token1] = ACTIONS(844),
    [aux_sym__forward_x11_token1] = ACTIONS(846),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(844),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(844),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(844),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(844),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(844),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(844),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(844),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(844),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(844),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(844),
    [aux_sym__host_key_alias_token1] = ACTIONS(844),
    [aux_sym__hostname_token1] = ACTIONS(844),
    [aux_sym__identities_only_token1] = ACTIONS(844),
    [aux_sym__identity_agent_token1] = ACTIONS(844),
    [aux_sym__identity_file_token1] = ACTIONS(844),
    [aux_sym__ignore_unknown_token1] = ACTIONS(844),
    [aux_sym__include_token1] = ACTIONS(844),
    [aux_sym__ipqos_token1] = ACTIONS(844),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(844),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(844),
    [aux_sym__kex_algorithms_token1] = ACTIONS(844),
    [aux_sym__known_hosts_command_token1] = ACTIONS(844),
    [aux_sym__local_command_token1] = ACTIONS(844),
    [aux_sym__local_forward_token1] = ACTIONS(844),
    [aux_sym__log_level_token1] = ACTIONS(844),
    [aux_sym__log_verbose_token1] = ACTIONS(844),
    [aux_sym__macs_token1] = ACTIONS(844),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(844),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(844),
    [aux_sym__password_authentication_token1] = ACTIONS(844),
    [aux_sym__permit_local_command_token1] = ACTIONS(844),
    [aux_sym__permit_remote_open_token1] = ACTIONS(844),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(844),
    [aux_sym__port_token1] = ACTIONS(844),
    [aux_sym__preferred_authentications_token1] = ACTIONS(844),
    [aux_sym__proxy_command_token1] = ACTIONS(844),
    [aux_sym__proxy_jump_token1] = ACTIONS(844),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(844),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(844),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(844),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(844),
    [aux_sym__rekey_limit_token1] = ACTIONS(844),
    [aux_sym__remote_command_token1] = ACTIONS(844),
    [aux_sym__remote_forward_token1] = ACTIONS(844),
    [aux_sym__request_tty_token1] = ACTIONS(844),
    [aux_sym__required_rsa_size_token1] = ACTIONS(844),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(844),
    [aux_sym__security_key_provider_token1] = ACTIONS(844),
    [aux_sym__send_env_token1] = ACTIONS(844),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(844),
    [aux_sym__server_alive_interval_token1] = ACTIONS(844),
    [aux_sym__session_type_token1] = ACTIONS(844),
    [aux_sym__set_env_token1] = ACTIONS(844),
    [aux_sym__stdin_null_token1] = ACTIONS(844),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(844),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(844),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(844),
    [aux_sym__syslog_facility_token1] = ACTIONS(844),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(844),
    [aux_sym__tag_token1] = ACTIONS(844),
    [aux_sym__tunnel_token1] = ACTIONS(846),
    [aux_sym__tunnel_device_token1] = ACTIONS(844),
    [aux_sym__update_host_keys_token1] = ACTIONS(844),
    [aux_sym__use_keychain_token1] = ACTIONS(844),
    [aux_sym__user_token1] = ACTIONS(846),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(844),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(844),
    [aux_sym__visual_host_key_token1] = ACTIONS(844),
    [aux_sym__xauth_location_token1] = ACTIONS(844),
    [sym_comment] = ACTIONS(844),
    [sym__space] = ACTIONS(844),
    [sym__eol] = ACTIONS(844),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(848),
    [aux_sym_host_declaration_token1] = ACTIONS(850),
    [aux_sym_match_declaration_token1] = ACTIONS(848),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(848),
    [aux_sym__address_family_token1] = ACTIONS(848),
    [aux_sym__batch_mode_token1] = ACTIONS(848),
    [aux_sym__bind_address_token1] = ACTIONS(848),
    [aux_sym__bind_interface_token1] = ACTIONS(848),
    [aux_sym__canonical_domains_token1] = ACTIONS(848),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(848),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(848),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(848),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(848),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(848),
    [aux_sym__certificate_file_token1] = ACTIONS(848),
    [aux_sym__check_host_ip_token1] = ACTIONS(848),
    [aux_sym__ciphers_token1] = ACTIONS(848),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(848),
    [aux_sym__compression_token1] = ACTIONS(848),
    [aux_sym__connection_attempts_token1] = ACTIONS(848),
    [aux_sym__connect_timeout_token1] = ACTIONS(848),
    [aux_sym__control_master_token1] = ACTIONS(848),
    [aux_sym__control_persist_token1] = ACTIONS(848),
    [aux_sym__control_path_token1] = ACTIONS(848),
    [aux_sym__dynamic_forward_token1] = ACTIONS(848),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(848),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(848),
    [aux_sym__escape_char_token1] = ACTIONS(848),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(848),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(848),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(848),
    [aux_sym__forward_agent_token1] = ACTIONS(848),
    [aux_sym__forward_x11_token1] = ACTIONS(850),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(848),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(848),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(848),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(848),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(848),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(848),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(848),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(848),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(848),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(848),
    [aux_sym__host_key_alias_token1] = ACTIONS(848),
    [aux_sym__hostname_token1] = ACTIONS(848),
    [aux_sym__identities_only_token1] = ACTIONS(848),
    [aux_sym__identity_agent_token1] = ACTIONS(848),
    [aux_sym__identity_file_token1] = ACTIONS(848),
    [aux_sym__ignore_unknown_token1] = ACTIONS(848),
    [aux_sym__include_token1] = ACTIONS(848),
    [aux_sym__ipqos_token1] = ACTIONS(848),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(848),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(848),
    [aux_sym__kex_algorithms_token1] = ACTIONS(848),
    [aux_sym__known_hosts_command_token1] = ACTIONS(848),
    [aux_sym__local_command_token1] = ACTIONS(848),
    [aux_sym__local_forward_token1] = ACTIONS(848),
    [aux_sym__log_level_token1] = ACTIONS(848),
    [aux_sym__log_verbose_token1] = ACTIONS(848),
    [aux_sym__macs_token1] = ACTIONS(848),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(848),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(848),
    [aux_sym__password_authentication_token1] = ACTIONS(848),
    [aux_sym__permit_local_command_token1] = ACTIONS(848),
    [aux_sym__permit_remote_open_token1] = ACTIONS(848),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(848),
    [aux_sym__port_token1] = ACTIONS(848),
    [aux_sym__preferred_authentications_token1] = ACTIONS(848),
    [aux_sym__proxy_command_token1] = ACTIONS(848),
    [aux_sym__proxy_jump_token1] = ACTIONS(848),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(848),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(848),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(848),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(848),
    [aux_sym__rekey_limit_token1] = ACTIONS(848),
    [aux_sym__remote_command_token1] = ACTIONS(848),
    [aux_sym__remote_forward_token1] = ACTIONS(848),
    [aux_sym__request_tty_token1] = ACTIONS(848),
    [aux_sym__required_rsa_size_token1] = ACTIONS(848),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(848),
    [aux_sym__security_key_provider_token1] = ACTIONS(848),
    [aux_sym__send_env_token1] = ACTIONS(848),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(848),
    [aux_sym__server_alive_interval_token1] = ACTIONS(848),
    [aux_sym__session_type_token1] = ACTIONS(848),
    [aux_sym__set_env_token1] = ACTIONS(848),
    [aux_sym__stdin_null_token1] = ACTIONS(848),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(848),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(848),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(848),
    [aux_sym__syslog_facility_token1] = ACTIONS(848),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(848),
    [aux_sym__tag_token1] = ACTIONS(848),
    [aux_sym__tunnel_token1] = ACTIONS(850),
    [aux_sym__tunnel_device_token1] = ACTIONS(848),
    [aux_sym__update_host_keys_token1] = ACTIONS(848),
    [aux_sym__use_keychain_token1] = ACTIONS(848),
    [aux_sym__user_token1] = ACTIONS(850),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(848),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(848),
    [aux_sym__visual_host_key_token1] = ACTIONS(848),
    [aux_sym__xauth_location_token1] = ACTIONS(848),
    [sym_comment] = ACTIONS(848),
    [sym__space] = ACTIONS(848),
    [sym__eol] = ACTIONS(848),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(852),
    [aux_sym_host_declaration_token1] = ACTIONS(854),
    [aux_sym_match_declaration_token1] = ACTIONS(852),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(852),
    [aux_sym__address_family_token1] = ACTIONS(852),
    [aux_sym__batch_mode_token1] = ACTIONS(852),
    [aux_sym__bind_address_token1] = ACTIONS(852),
    [aux_sym__bind_interface_token1] = ACTIONS(852),
    [aux_sym__canonical_domains_token1] = ACTIONS(852),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(852),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(852),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(852),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(852),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(852),
    [aux_sym__certificate_file_token1] = ACTIONS(852),
    [aux_sym__check_host_ip_token1] = ACTIONS(852),
    [aux_sym__ciphers_token1] = ACTIONS(852),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(852),
    [aux_sym__compression_token1] = ACTIONS(852),
    [aux_sym__connection_attempts_token1] = ACTIONS(852),
    [aux_sym__connect_timeout_token1] = ACTIONS(852),
    [aux_sym__control_master_token1] = ACTIONS(852),
    [aux_sym__control_persist_token1] = ACTIONS(852),
    [aux_sym__control_path_token1] = ACTIONS(852),
    [aux_sym__dynamic_forward_token1] = ACTIONS(852),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(852),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(852),
    [aux_sym__escape_char_token1] = ACTIONS(852),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(852),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(852),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(852),
    [aux_sym__forward_agent_token1] = ACTIONS(852),
    [aux_sym__forward_x11_token1] = ACTIONS(854),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(852),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(852),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(852),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(852),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(852),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(852),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(852),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(852),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(852),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(852),
    [aux_sym__host_key_alias_token1] = ACTIONS(852),
    [aux_sym__hostname_token1] = ACTIONS(852),
    [aux_sym__identities_only_token1] = ACTIONS(852),
    [aux_sym__identity_agent_token1] = ACTIONS(852),
    [aux_sym__identity_file_token1] = ACTIONS(852),
    [aux_sym__ignore_unknown_token1] = ACTIONS(852),
    [aux_sym__include_token1] = ACTIONS(852),
    [aux_sym__ipqos_token1] = ACTIONS(852),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(852),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(852),
    [aux_sym__kex_algorithms_token1] = ACTIONS(852),
    [aux_sym__known_hosts_command_token1] = ACTIONS(852),
    [aux_sym__local_command_token1] = ACTIONS(852),
    [aux_sym__local_forward_token1] = ACTIONS(852),
    [aux_sym__log_level_token1] = ACTIONS(852),
    [aux_sym__log_verbose_token1] = ACTIONS(852),
    [aux_sym__macs_token1] = ACTIONS(852),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(852),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(852),
    [aux_sym__password_authentication_token1] = ACTIONS(852),
    [aux_sym__permit_local_command_token1] = ACTIONS(852),
    [aux_sym__permit_remote_open_token1] = ACTIONS(852),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(852),
    [aux_sym__port_token1] = ACTIONS(852),
    [aux_sym__preferred_authentications_token1] = ACTIONS(852),
    [aux_sym__proxy_command_token1] = ACTIONS(852),
    [aux_sym__proxy_jump_token1] = ACTIONS(852),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(852),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(852),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(852),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(852),
    [aux_sym__rekey_limit_token1] = ACTIONS(852),
    [aux_sym__remote_command_token1] = ACTIONS(852),
    [aux_sym__remote_forward_token1] = ACTIONS(852),
    [aux_sym__request_tty_token1] = ACTIONS(852),
    [aux_sym__required_rsa_size_token1] = ACTIONS(852),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(852),
    [aux_sym__security_key_provider_token1] = ACTIONS(852),
    [aux_sym__send_env_token1] = ACTIONS(852),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(852),
    [aux_sym__server_alive_interval_token1] = ACTIONS(852),
    [aux_sym__session_type_token1] = ACTIONS(852),
    [aux_sym__set_env_token1] = ACTIONS(852),
    [aux_sym__stdin_null_token1] = ACTIONS(852),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(852),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(852),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(852),
    [aux_sym__syslog_facility_token1] = ACTIONS(852),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(852),
    [aux_sym__tag_token1] = ACTIONS(852),
    [aux_sym__tunnel_token1] = ACTIONS(854),
    [aux_sym__tunnel_device_token1] = ACTIONS(852),
    [aux_sym__update_host_keys_token1] = ACTIONS(852),
    [aux_sym__use_keychain_token1] = ACTIONS(852),
    [aux_sym__user_token1] = ACTIONS(854),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(852),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(852),
    [aux_sym__visual_host_key_token1] = ACTIONS(852),
    [aux_sym__xauth_location_token1] = ACTIONS(852),
    [sym_comment] = ACTIONS(852),
    [sym__space] = ACTIONS(852),
    [sym__eol] = ACTIONS(852),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(856),
    [aux_sym_host_declaration_token1] = ACTIONS(858),
    [aux_sym_match_declaration_token1] = ACTIONS(856),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(856),
    [aux_sym__address_family_token1] = ACTIONS(856),
    [aux_sym__batch_mode_token1] = ACTIONS(856),
    [aux_sym__bind_address_token1] = ACTIONS(856),
    [aux_sym__bind_interface_token1] = ACTIONS(856),
    [aux_sym__canonical_domains_token1] = ACTIONS(856),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(856),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(856),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(856),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(856),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(856),
    [aux_sym__certificate_file_token1] = ACTIONS(856),
    [aux_sym__check_host_ip_token1] = ACTIONS(856),
    [aux_sym__ciphers_token1] = ACTIONS(856),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(856),
    [aux_sym__compression_token1] = ACTIONS(856),
    [aux_sym__connection_attempts_token1] = ACTIONS(856),
    [aux_sym__connect_timeout_token1] = ACTIONS(856),
    [aux_sym__control_master_token1] = ACTIONS(856),
    [aux_sym__control_persist_token1] = ACTIONS(856),
    [aux_sym__control_path_token1] = ACTIONS(856),
    [aux_sym__dynamic_forward_token1] = ACTIONS(856),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(856),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(856),
    [aux_sym__escape_char_token1] = ACTIONS(856),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(856),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(856),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(856),
    [aux_sym__forward_agent_token1] = ACTIONS(856),
    [aux_sym__forward_x11_token1] = ACTIONS(858),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(856),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(856),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(856),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(856),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(856),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(856),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(856),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(856),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(856),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(856),
    [aux_sym__host_key_alias_token1] = ACTIONS(856),
    [aux_sym__hostname_token1] = ACTIONS(856),
    [aux_sym__identities_only_token1] = ACTIONS(856),
    [aux_sym__identity_agent_token1] = ACTIONS(856),
    [aux_sym__identity_file_token1] = ACTIONS(856),
    [aux_sym__ignore_unknown_token1] = ACTIONS(856),
    [aux_sym__include_token1] = ACTIONS(856),
    [aux_sym__ipqos_token1] = ACTIONS(856),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(856),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(856),
    [aux_sym__kex_algorithms_token1] = ACTIONS(856),
    [aux_sym__known_hosts_command_token1] = ACTIONS(856),
    [aux_sym__local_command_token1] = ACTIONS(856),
    [aux_sym__local_forward_token1] = ACTIONS(856),
    [aux_sym__log_level_token1] = ACTIONS(856),
    [aux_sym__log_verbose_token1] = ACTIONS(856),
    [aux_sym__macs_token1] = ACTIONS(856),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(856),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(856),
    [aux_sym__password_authentication_token1] = ACTIONS(856),
    [aux_sym__permit_local_command_token1] = ACTIONS(856),
    [aux_sym__permit_remote_open_token1] = ACTIONS(856),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(856),
    [aux_sym__port_token1] = ACTIONS(856),
    [aux_sym__preferred_authentications_token1] = ACTIONS(856),
    [aux_sym__proxy_command_token1] = ACTIONS(856),
    [aux_sym__proxy_jump_token1] = ACTIONS(856),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(856),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(856),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(856),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(856),
    [aux_sym__rekey_limit_token1] = ACTIONS(856),
    [aux_sym__remote_command_token1] = ACTIONS(856),
    [aux_sym__remote_forward_token1] = ACTIONS(856),
    [aux_sym__request_tty_token1] = ACTIONS(856),
    [aux_sym__required_rsa_size_token1] = ACTIONS(856),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(856),
    [aux_sym__security_key_provider_token1] = ACTIONS(856),
    [aux_sym__send_env_token1] = ACTIONS(856),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(856),
    [aux_sym__server_alive_interval_token1] = ACTIONS(856),
    [aux_sym__session_type_token1] = ACTIONS(856),
    [aux_sym__set_env_token1] = ACTIONS(856),
    [aux_sym__stdin_null_token1] = ACTIONS(856),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(856),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(856),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(856),
    [aux_sym__syslog_facility_token1] = ACTIONS(856),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(856),
    [aux_sym__tag_token1] = ACTIONS(856),
    [aux_sym__tunnel_token1] = ACTIONS(858),
    [aux_sym__tunnel_device_token1] = ACTIONS(856),
    [aux_sym__update_host_keys_token1] = ACTIONS(856),
    [aux_sym__use_keychain_token1] = ACTIONS(856),
    [aux_sym__user_token1] = ACTIONS(858),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(856),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(856),
    [aux_sym__visual_host_key_token1] = ACTIONS(856),
    [aux_sym__xauth_location_token1] = ACTIONS(856),
    [sym_comment] = ACTIONS(856),
    [sym__space] = ACTIONS(856),
    [sym__eol] = ACTIONS(856),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [aux_sym_host_declaration_token1] = ACTIONS(862),
    [aux_sym_match_declaration_token1] = ACTIONS(860),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(860),
    [aux_sym__address_family_token1] = ACTIONS(860),
    [aux_sym__batch_mode_token1] = ACTIONS(860),
    [aux_sym__bind_address_token1] = ACTIONS(860),
    [aux_sym__bind_interface_token1] = ACTIONS(860),
    [aux_sym__canonical_domains_token1] = ACTIONS(860),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(860),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(860),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(860),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(860),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(860),
    [aux_sym__certificate_file_token1] = ACTIONS(860),
    [aux_sym__check_host_ip_token1] = ACTIONS(860),
    [aux_sym__ciphers_token1] = ACTIONS(860),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(860),
    [aux_sym__compression_token1] = ACTIONS(860),
    [aux_sym__connection_attempts_token1] = ACTIONS(860),
    [aux_sym__connect_timeout_token1] = ACTIONS(860),
    [aux_sym__control_master_token1] = ACTIONS(860),
    [aux_sym__control_persist_token1] = ACTIONS(860),
    [aux_sym__control_path_token1] = ACTIONS(860),
    [aux_sym__dynamic_forward_token1] = ACTIONS(860),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(860),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(860),
    [aux_sym__escape_char_token1] = ACTIONS(860),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(860),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(860),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(860),
    [aux_sym__forward_agent_token1] = ACTIONS(860),
    [aux_sym__forward_x11_token1] = ACTIONS(862),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(860),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(860),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(860),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(860),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(860),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(860),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(860),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(860),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(860),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(860),
    [aux_sym__host_key_alias_token1] = ACTIONS(860),
    [aux_sym__hostname_token1] = ACTIONS(860),
    [aux_sym__identities_only_token1] = ACTIONS(860),
    [aux_sym__identity_agent_token1] = ACTIONS(860),
    [aux_sym__identity_file_token1] = ACTIONS(860),
    [aux_sym__ignore_unknown_token1] = ACTIONS(860),
    [aux_sym__include_token1] = ACTIONS(860),
    [aux_sym__ipqos_token1] = ACTIONS(860),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(860),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(860),
    [aux_sym__kex_algorithms_token1] = ACTIONS(860),
    [aux_sym__known_hosts_command_token1] = ACTIONS(860),
    [aux_sym__local_command_token1] = ACTIONS(860),
    [aux_sym__local_forward_token1] = ACTIONS(860),
    [aux_sym__log_level_token1] = ACTIONS(860),
    [aux_sym__log_verbose_token1] = ACTIONS(860),
    [aux_sym__macs_token1] = ACTIONS(860),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(860),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(860),
    [aux_sym__password_authentication_token1] = ACTIONS(860),
    [aux_sym__permit_local_command_token1] = ACTIONS(860),
    [aux_sym__permit_remote_open_token1] = ACTIONS(860),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(860),
    [aux_sym__port_token1] = ACTIONS(860),
    [aux_sym__preferred_authentications_token1] = ACTIONS(860),
    [aux_sym__proxy_command_token1] = ACTIONS(860),
    [aux_sym__proxy_jump_token1] = ACTIONS(860),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(860),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(860),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(860),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(860),
    [aux_sym__rekey_limit_token1] = ACTIONS(860),
    [aux_sym__remote_command_token1] = ACTIONS(860),
    [aux_sym__remote_forward_token1] = ACTIONS(860),
    [aux_sym__request_tty_token1] = ACTIONS(860),
    [aux_sym__required_rsa_size_token1] = ACTIONS(860),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(860),
    [aux_sym__security_key_provider_token1] = ACTIONS(860),
    [aux_sym__send_env_token1] = ACTIONS(860),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(860),
    [aux_sym__server_alive_interval_token1] = ACTIONS(860),
    [aux_sym__session_type_token1] = ACTIONS(860),
    [aux_sym__set_env_token1] = ACTIONS(860),
    [aux_sym__stdin_null_token1] = ACTIONS(860),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(860),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(860),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(860),
    [aux_sym__syslog_facility_token1] = ACTIONS(860),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(860),
    [aux_sym__tag_token1] = ACTIONS(860),
    [aux_sym__tunnel_token1] = ACTIONS(862),
    [aux_sym__tunnel_device_token1] = ACTIONS(860),
    [aux_sym__update_host_keys_token1] = ACTIONS(860),
    [aux_sym__use_keychain_token1] = ACTIONS(860),
    [aux_sym__user_token1] = ACTIONS(862),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(860),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(860),
    [aux_sym__visual_host_key_token1] = ACTIONS(860),
    [aux_sym__xauth_location_token1] = ACTIONS(860),
    [sym_comment] = ACTIONS(860),
    [sym__space] = ACTIONS(860),
    [sym__eol] = ACTIONS(860),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(864),
    [aux_sym_host_declaration_token1] = ACTIONS(866),
    [aux_sym_match_declaration_token1] = ACTIONS(864),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(864),
    [aux_sym__address_family_token1] = ACTIONS(864),
    [aux_sym__batch_mode_token1] = ACTIONS(864),
    [aux_sym__bind_address_token1] = ACTIONS(864),
    [aux_sym__bind_interface_token1] = ACTIONS(864),
    [aux_sym__canonical_domains_token1] = ACTIONS(864),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(864),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(864),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(864),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(864),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(864),
    [aux_sym__certificate_file_token1] = ACTIONS(864),
    [aux_sym__check_host_ip_token1] = ACTIONS(864),
    [aux_sym__ciphers_token1] = ACTIONS(864),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(864),
    [aux_sym__compression_token1] = ACTIONS(864),
    [aux_sym__connection_attempts_token1] = ACTIONS(864),
    [aux_sym__connect_timeout_token1] = ACTIONS(864),
    [aux_sym__control_master_token1] = ACTIONS(864),
    [aux_sym__control_persist_token1] = ACTIONS(864),
    [aux_sym__control_path_token1] = ACTIONS(864),
    [aux_sym__dynamic_forward_token1] = ACTIONS(864),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(864),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(864),
    [aux_sym__escape_char_token1] = ACTIONS(864),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(864),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(864),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(864),
    [aux_sym__forward_agent_token1] = ACTIONS(864),
    [aux_sym__forward_x11_token1] = ACTIONS(866),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(864),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(864),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(864),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(864),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(864),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(864),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(864),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(864),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(864),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(864),
    [aux_sym__host_key_alias_token1] = ACTIONS(864),
    [aux_sym__hostname_token1] = ACTIONS(864),
    [aux_sym__identities_only_token1] = ACTIONS(864),
    [aux_sym__identity_agent_token1] = ACTIONS(864),
    [aux_sym__identity_file_token1] = ACTIONS(864),
    [aux_sym__ignore_unknown_token1] = ACTIONS(864),
    [aux_sym__include_token1] = ACTIONS(864),
    [aux_sym__ipqos_token1] = ACTIONS(864),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(864),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(864),
    [aux_sym__kex_algorithms_token1] = ACTIONS(864),
    [aux_sym__known_hosts_command_token1] = ACTIONS(864),
    [aux_sym__local_command_token1] = ACTIONS(864),
    [aux_sym__local_forward_token1] = ACTIONS(864),
    [aux_sym__log_level_token1] = ACTIONS(864),
    [aux_sym__log_verbose_token1] = ACTIONS(864),
    [aux_sym__macs_token1] = ACTIONS(864),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(864),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(864),
    [aux_sym__password_authentication_token1] = ACTIONS(864),
    [aux_sym__permit_local_command_token1] = ACTIONS(864),
    [aux_sym__permit_remote_open_token1] = ACTIONS(864),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(864),
    [aux_sym__port_token1] = ACTIONS(864),
    [aux_sym__preferred_authentications_token1] = ACTIONS(864),
    [aux_sym__proxy_command_token1] = ACTIONS(864),
    [aux_sym__proxy_jump_token1] = ACTIONS(864),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(864),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(864),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(864),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(864),
    [aux_sym__rekey_limit_token1] = ACTIONS(864),
    [aux_sym__remote_command_token1] = ACTIONS(864),
    [aux_sym__remote_forward_token1] = ACTIONS(864),
    [aux_sym__request_tty_token1] = ACTIONS(864),
    [aux_sym__required_rsa_size_token1] = ACTIONS(864),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(864),
    [aux_sym__security_key_provider_token1] = ACTIONS(864),
    [aux_sym__send_env_token1] = ACTIONS(864),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(864),
    [aux_sym__server_alive_interval_token1] = ACTIONS(864),
    [aux_sym__session_type_token1] = ACTIONS(864),
    [aux_sym__set_env_token1] = ACTIONS(864),
    [aux_sym__stdin_null_token1] = ACTIONS(864),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(864),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(864),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(864),
    [aux_sym__syslog_facility_token1] = ACTIONS(864),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(864),
    [aux_sym__tag_token1] = ACTIONS(864),
    [aux_sym__tunnel_token1] = ACTIONS(866),
    [aux_sym__tunnel_device_token1] = ACTIONS(864),
    [aux_sym__update_host_keys_token1] = ACTIONS(864),
    [aux_sym__use_keychain_token1] = ACTIONS(864),
    [aux_sym__user_token1] = ACTIONS(866),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(864),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(864),
    [aux_sym__visual_host_key_token1] = ACTIONS(864),
    [aux_sym__xauth_location_token1] = ACTIONS(864),
    [sym_comment] = ACTIONS(864),
    [sym__space] = ACTIONS(864),
    [sym__eol] = ACTIONS(864),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [aux_sym_host_declaration_token1] = ACTIONS(870),
    [aux_sym_match_declaration_token1] = ACTIONS(868),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(868),
    [aux_sym__address_family_token1] = ACTIONS(868),
    [aux_sym__batch_mode_token1] = ACTIONS(868),
    [aux_sym__bind_address_token1] = ACTIONS(868),
    [aux_sym__bind_interface_token1] = ACTIONS(868),
    [aux_sym__canonical_domains_token1] = ACTIONS(868),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(868),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(868),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(868),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(868),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(868),
    [aux_sym__certificate_file_token1] = ACTIONS(868),
    [aux_sym__check_host_ip_token1] = ACTIONS(868),
    [aux_sym__ciphers_token1] = ACTIONS(868),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(868),
    [aux_sym__compression_token1] = ACTIONS(868),
    [aux_sym__connection_attempts_token1] = ACTIONS(868),
    [aux_sym__connect_timeout_token1] = ACTIONS(868),
    [aux_sym__control_master_token1] = ACTIONS(868),
    [aux_sym__control_persist_token1] = ACTIONS(868),
    [aux_sym__control_path_token1] = ACTIONS(868),
    [aux_sym__dynamic_forward_token1] = ACTIONS(868),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(868),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(868),
    [aux_sym__escape_char_token1] = ACTIONS(868),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(868),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(868),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(868),
    [aux_sym__forward_agent_token1] = ACTIONS(868),
    [aux_sym__forward_x11_token1] = ACTIONS(870),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(868),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(868),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(868),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(868),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(868),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(868),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(868),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(868),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(868),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(868),
    [aux_sym__host_key_alias_token1] = ACTIONS(868),
    [aux_sym__hostname_token1] = ACTIONS(868),
    [aux_sym__identities_only_token1] = ACTIONS(868),
    [aux_sym__identity_agent_token1] = ACTIONS(868),
    [aux_sym__identity_file_token1] = ACTIONS(868),
    [aux_sym__ignore_unknown_token1] = ACTIONS(868),
    [aux_sym__include_token1] = ACTIONS(868),
    [aux_sym__ipqos_token1] = ACTIONS(868),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(868),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(868),
    [aux_sym__kex_algorithms_token1] = ACTIONS(868),
    [aux_sym__known_hosts_command_token1] = ACTIONS(868),
    [aux_sym__local_command_token1] = ACTIONS(868),
    [aux_sym__local_forward_token1] = ACTIONS(868),
    [aux_sym__log_level_token1] = ACTIONS(868),
    [aux_sym__log_verbose_token1] = ACTIONS(868),
    [aux_sym__macs_token1] = ACTIONS(868),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(868),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(868),
    [aux_sym__password_authentication_token1] = ACTIONS(868),
    [aux_sym__permit_local_command_token1] = ACTIONS(868),
    [aux_sym__permit_remote_open_token1] = ACTIONS(868),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(868),
    [aux_sym__port_token1] = ACTIONS(868),
    [aux_sym__preferred_authentications_token1] = ACTIONS(868),
    [aux_sym__proxy_command_token1] = ACTIONS(868),
    [aux_sym__proxy_jump_token1] = ACTIONS(868),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(868),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(868),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(868),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(868),
    [aux_sym__rekey_limit_token1] = ACTIONS(868),
    [aux_sym__remote_command_token1] = ACTIONS(868),
    [aux_sym__remote_forward_token1] = ACTIONS(868),
    [aux_sym__request_tty_token1] = ACTIONS(868),
    [aux_sym__required_rsa_size_token1] = ACTIONS(868),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(868),
    [aux_sym__security_key_provider_token1] = ACTIONS(868),
    [aux_sym__send_env_token1] = ACTIONS(868),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(868),
    [aux_sym__server_alive_interval_token1] = ACTIONS(868),
    [aux_sym__session_type_token1] = ACTIONS(868),
    [aux_sym__set_env_token1] = ACTIONS(868),
    [aux_sym__stdin_null_token1] = ACTIONS(868),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(868),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(868),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(868),
    [aux_sym__syslog_facility_token1] = ACTIONS(868),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(868),
    [aux_sym__tag_token1] = ACTIONS(868),
    [aux_sym__tunnel_token1] = ACTIONS(870),
    [aux_sym__tunnel_device_token1] = ACTIONS(868),
    [aux_sym__update_host_keys_token1] = ACTIONS(868),
    [aux_sym__use_keychain_token1] = ACTIONS(868),
    [aux_sym__user_token1] = ACTIONS(870),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(868),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(868),
    [aux_sym__visual_host_key_token1] = ACTIONS(868),
    [aux_sym__xauth_location_token1] = ACTIONS(868),
    [sym_comment] = ACTIONS(868),
    [sym__space] = ACTIONS(868),
    [sym__eol] = ACTIONS(868),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(872),
    [aux_sym_host_declaration_token1] = ACTIONS(874),
    [aux_sym_match_declaration_token1] = ACTIONS(872),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(872),
    [aux_sym__address_family_token1] = ACTIONS(872),
    [aux_sym__batch_mode_token1] = ACTIONS(872),
    [aux_sym__bind_address_token1] = ACTIONS(872),
    [aux_sym__bind_interface_token1] = ACTIONS(872),
    [aux_sym__canonical_domains_token1] = ACTIONS(872),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(872),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(872),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(872),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(872),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(872),
    [aux_sym__certificate_file_token1] = ACTIONS(872),
    [aux_sym__check_host_ip_token1] = ACTIONS(872),
    [aux_sym__ciphers_token1] = ACTIONS(872),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(872),
    [aux_sym__compression_token1] = ACTIONS(872),
    [aux_sym__connection_attempts_token1] = ACTIONS(872),
    [aux_sym__connect_timeout_token1] = ACTIONS(872),
    [aux_sym__control_master_token1] = ACTIONS(872),
    [aux_sym__control_persist_token1] = ACTIONS(872),
    [aux_sym__control_path_token1] = ACTIONS(872),
    [aux_sym__dynamic_forward_token1] = ACTIONS(872),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(872),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(872),
    [aux_sym__escape_char_token1] = ACTIONS(872),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(872),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(872),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(872),
    [aux_sym__forward_agent_token1] = ACTIONS(872),
    [aux_sym__forward_x11_token1] = ACTIONS(874),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(872),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(872),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(872),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(872),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(872),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(872),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(872),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(872),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(872),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(872),
    [aux_sym__host_key_alias_token1] = ACTIONS(872),
    [aux_sym__hostname_token1] = ACTIONS(872),
    [aux_sym__identities_only_token1] = ACTIONS(872),
    [aux_sym__identity_agent_token1] = ACTIONS(872),
    [aux_sym__identity_file_token1] = ACTIONS(872),
    [aux_sym__ignore_unknown_token1] = ACTIONS(872),
    [aux_sym__include_token1] = ACTIONS(872),
    [aux_sym__ipqos_token1] = ACTIONS(872),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(872),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(872),
    [aux_sym__kex_algorithms_token1] = ACTIONS(872),
    [aux_sym__known_hosts_command_token1] = ACTIONS(872),
    [aux_sym__local_command_token1] = ACTIONS(872),
    [aux_sym__local_forward_token1] = ACTIONS(872),
    [aux_sym__log_level_token1] = ACTIONS(872),
    [aux_sym__log_verbose_token1] = ACTIONS(872),
    [aux_sym__macs_token1] = ACTIONS(872),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(872),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(872),
    [aux_sym__password_authentication_token1] = ACTIONS(872),
    [aux_sym__permit_local_command_token1] = ACTIONS(872),
    [aux_sym__permit_remote_open_token1] = ACTIONS(872),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(872),
    [aux_sym__port_token1] = ACTIONS(872),
    [aux_sym__preferred_authentications_token1] = ACTIONS(872),
    [aux_sym__proxy_command_token1] = ACTIONS(872),
    [aux_sym__proxy_jump_token1] = ACTIONS(872),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(872),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(872),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(872),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(872),
    [aux_sym__rekey_limit_token1] = ACTIONS(872),
    [aux_sym__remote_command_token1] = ACTIONS(872),
    [aux_sym__remote_forward_token1] = ACTIONS(872),
    [aux_sym__request_tty_token1] = ACTIONS(872),
    [aux_sym__required_rsa_size_token1] = ACTIONS(872),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(872),
    [aux_sym__security_key_provider_token1] = ACTIONS(872),
    [aux_sym__send_env_token1] = ACTIONS(872),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(872),
    [aux_sym__server_alive_interval_token1] = ACTIONS(872),
    [aux_sym__session_type_token1] = ACTIONS(872),
    [aux_sym__set_env_token1] = ACTIONS(872),
    [aux_sym__stdin_null_token1] = ACTIONS(872),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(872),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(872),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(872),
    [aux_sym__syslog_facility_token1] = ACTIONS(872),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(872),
    [aux_sym__tag_token1] = ACTIONS(872),
    [aux_sym__tunnel_token1] = ACTIONS(874),
    [aux_sym__tunnel_device_token1] = ACTIONS(872),
    [aux_sym__update_host_keys_token1] = ACTIONS(872),
    [aux_sym__use_keychain_token1] = ACTIONS(872),
    [aux_sym__user_token1] = ACTIONS(874),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(872),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(872),
    [aux_sym__visual_host_key_token1] = ACTIONS(872),
    [aux_sym__xauth_location_token1] = ACTIONS(872),
    [sym_comment] = ACTIONS(872),
    [sym__space] = ACTIONS(872),
    [sym__eol] = ACTIONS(872),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(876),
    [aux_sym_host_declaration_token1] = ACTIONS(878),
    [aux_sym_match_declaration_token1] = ACTIONS(876),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(876),
    [aux_sym__address_family_token1] = ACTIONS(876),
    [aux_sym__batch_mode_token1] = ACTIONS(876),
    [aux_sym__bind_address_token1] = ACTIONS(876),
    [aux_sym__bind_interface_token1] = ACTIONS(876),
    [aux_sym__canonical_domains_token1] = ACTIONS(876),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(876),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(876),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(876),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(876),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(876),
    [aux_sym__certificate_file_token1] = ACTIONS(876),
    [aux_sym__check_host_ip_token1] = ACTIONS(876),
    [aux_sym__ciphers_token1] = ACTIONS(876),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(876),
    [aux_sym__compression_token1] = ACTIONS(876),
    [aux_sym__connection_attempts_token1] = ACTIONS(876),
    [aux_sym__connect_timeout_token1] = ACTIONS(876),
    [aux_sym__control_master_token1] = ACTIONS(876),
    [aux_sym__control_persist_token1] = ACTIONS(876),
    [aux_sym__control_path_token1] = ACTIONS(876),
    [aux_sym__dynamic_forward_token1] = ACTIONS(876),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(876),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(876),
    [aux_sym__escape_char_token1] = ACTIONS(876),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(876),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(876),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(876),
    [aux_sym__forward_agent_token1] = ACTIONS(876),
    [aux_sym__forward_x11_token1] = ACTIONS(878),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(876),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(876),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(876),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(876),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(876),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(876),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(876),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(876),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(876),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(876),
    [aux_sym__host_key_alias_token1] = ACTIONS(876),
    [aux_sym__hostname_token1] = ACTIONS(876),
    [aux_sym__identities_only_token1] = ACTIONS(876),
    [aux_sym__identity_agent_token1] = ACTIONS(876),
    [aux_sym__identity_file_token1] = ACTIONS(876),
    [aux_sym__ignore_unknown_token1] = ACTIONS(876),
    [aux_sym__include_token1] = ACTIONS(876),
    [aux_sym__ipqos_token1] = ACTIONS(876),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(876),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(876),
    [aux_sym__kex_algorithms_token1] = ACTIONS(876),
    [aux_sym__known_hosts_command_token1] = ACTIONS(876),
    [aux_sym__local_command_token1] = ACTIONS(876),
    [aux_sym__local_forward_token1] = ACTIONS(876),
    [aux_sym__log_level_token1] = ACTIONS(876),
    [aux_sym__log_verbose_token1] = ACTIONS(876),
    [aux_sym__macs_token1] = ACTIONS(876),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(876),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(876),
    [aux_sym__password_authentication_token1] = ACTIONS(876),
    [aux_sym__permit_local_command_token1] = ACTIONS(876),
    [aux_sym__permit_remote_open_token1] = ACTIONS(876),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(876),
    [aux_sym__port_token1] = ACTIONS(876),
    [aux_sym__preferred_authentications_token1] = ACTIONS(876),
    [aux_sym__proxy_command_token1] = ACTIONS(876),
    [aux_sym__proxy_jump_token1] = ACTIONS(876),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(876),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(876),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(876),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(876),
    [aux_sym__rekey_limit_token1] = ACTIONS(876),
    [aux_sym__remote_command_token1] = ACTIONS(876),
    [aux_sym__remote_forward_token1] = ACTIONS(876),
    [aux_sym__request_tty_token1] = ACTIONS(876),
    [aux_sym__required_rsa_size_token1] = ACTIONS(876),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(876),
    [aux_sym__security_key_provider_token1] = ACTIONS(876),
    [aux_sym__send_env_token1] = ACTIONS(876),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(876),
    [aux_sym__server_alive_interval_token1] = ACTIONS(876),
    [aux_sym__session_type_token1] = ACTIONS(876),
    [aux_sym__set_env_token1] = ACTIONS(876),
    [aux_sym__stdin_null_token1] = ACTIONS(876),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(876),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(876),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(876),
    [aux_sym__syslog_facility_token1] = ACTIONS(876),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(876),
    [aux_sym__tag_token1] = ACTIONS(876),
    [aux_sym__tunnel_token1] = ACTIONS(878),
    [aux_sym__tunnel_device_token1] = ACTIONS(876),
    [aux_sym__update_host_keys_token1] = ACTIONS(876),
    [aux_sym__use_keychain_token1] = ACTIONS(876),
    [aux_sym__user_token1] = ACTIONS(878),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(876),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(876),
    [aux_sym__visual_host_key_token1] = ACTIONS(876),
    [aux_sym__xauth_location_token1] = ACTIONS(876),
    [sym_comment] = ACTIONS(876),
    [sym__space] = ACTIONS(876),
    [sym__eol] = ACTIONS(876),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym_host_declaration_token1] = ACTIONS(526),
    [aux_sym_match_declaration_token1] = ACTIONS(524),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(524),
    [aux_sym__address_family_token1] = ACTIONS(524),
    [aux_sym__batch_mode_token1] = ACTIONS(524),
    [aux_sym__bind_address_token1] = ACTIONS(524),
    [aux_sym__bind_interface_token1] = ACTIONS(524),
    [aux_sym__canonical_domains_token1] = ACTIONS(524),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(524),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(524),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(524),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(524),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(524),
    [aux_sym__certificate_file_token1] = ACTIONS(524),
    [aux_sym__check_host_ip_token1] = ACTIONS(524),
    [aux_sym__ciphers_token1] = ACTIONS(524),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(524),
    [aux_sym__compression_token1] = ACTIONS(524),
    [aux_sym__connection_attempts_token1] = ACTIONS(524),
    [aux_sym__connect_timeout_token1] = ACTIONS(524),
    [aux_sym__control_master_token1] = ACTIONS(524),
    [aux_sym__control_persist_token1] = ACTIONS(524),
    [aux_sym__control_path_token1] = ACTIONS(524),
    [aux_sym__dynamic_forward_token1] = ACTIONS(524),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(524),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(524),
    [aux_sym__escape_char_token1] = ACTIONS(524),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(524),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(524),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(524),
    [aux_sym__forward_agent_token1] = ACTIONS(524),
    [aux_sym__forward_x11_token1] = ACTIONS(526),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(524),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(524),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(524),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(524),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(524),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(524),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(524),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(524),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(524),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(524),
    [aux_sym__host_key_alias_token1] = ACTIONS(524),
    [aux_sym__hostname_token1] = ACTIONS(524),
    [aux_sym__identities_only_token1] = ACTIONS(524),
    [aux_sym__identity_agent_token1] = ACTIONS(524),
    [aux_sym__identity_file_token1] = ACTIONS(524),
    [aux_sym__ignore_unknown_token1] = ACTIONS(524),
    [aux_sym__include_token1] = ACTIONS(524),
    [aux_sym__ipqos_token1] = ACTIONS(524),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(524),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(524),
    [aux_sym__kex_algorithms_token1] = ACTIONS(524),
    [aux_sym__known_hosts_command_token1] = ACTIONS(524),
    [aux_sym__local_command_token1] = ACTIONS(524),
    [aux_sym__local_forward_token1] = ACTIONS(524),
    [aux_sym__log_level_token1] = ACTIONS(524),
    [aux_sym__log_verbose_token1] = ACTIONS(524),
    [aux_sym__macs_token1] = ACTIONS(524),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(524),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(524),
    [aux_sym__password_authentication_token1] = ACTIONS(524),
    [aux_sym__permit_local_command_token1] = ACTIONS(524),
    [aux_sym__permit_remote_open_token1] = ACTIONS(524),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(524),
    [aux_sym__port_token1] = ACTIONS(524),
    [aux_sym__preferred_authentications_token1] = ACTIONS(524),
    [aux_sym__proxy_command_token1] = ACTIONS(524),
    [aux_sym__proxy_jump_token1] = ACTIONS(524),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(524),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(524),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(524),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(524),
    [aux_sym__rekey_limit_token1] = ACTIONS(524),
    [aux_sym__remote_command_token1] = ACTIONS(524),
    [aux_sym__remote_forward_token1] = ACTIONS(524),
    [aux_sym__request_tty_token1] = ACTIONS(524),
    [aux_sym__required_rsa_size_token1] = ACTIONS(524),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(524),
    [aux_sym__security_key_provider_token1] = ACTIONS(524),
    [aux_sym__send_env_token1] = ACTIONS(524),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(524),
    [aux_sym__server_alive_interval_token1] = ACTIONS(524),
    [aux_sym__session_type_token1] = ACTIONS(524),
    [aux_sym__set_env_token1] = ACTIONS(524),
    [aux_sym__stdin_null_token1] = ACTIONS(524),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(524),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(524),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(524),
    [aux_sym__syslog_facility_token1] = ACTIONS(524),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(524),
    [aux_sym__tag_token1] = ACTIONS(524),
    [aux_sym__tunnel_token1] = ACTIONS(526),
    [aux_sym__tunnel_device_token1] = ACTIONS(524),
    [aux_sym__update_host_keys_token1] = ACTIONS(524),
    [aux_sym__use_keychain_token1] = ACTIONS(524),
    [aux_sym__user_token1] = ACTIONS(526),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(524),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(524),
    [aux_sym__visual_host_key_token1] = ACTIONS(524),
    [aux_sym__xauth_location_token1] = ACTIONS(524),
    [sym_comment] = ACTIONS(524),
    [sym__space] = ACTIONS(524),
    [sym__eol] = ACTIONS(524),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [aux_sym_host_declaration_token1] = ACTIONS(518),
    [aux_sym_match_declaration_token1] = ACTIONS(516),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(516),
    [aux_sym__address_family_token1] = ACTIONS(516),
    [aux_sym__batch_mode_token1] = ACTIONS(516),
    [aux_sym__bind_address_token1] = ACTIONS(516),
    [aux_sym__bind_interface_token1] = ACTIONS(516),
    [aux_sym__canonical_domains_token1] = ACTIONS(516),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(516),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(516),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(516),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(516),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(516),
    [aux_sym__certificate_file_token1] = ACTIONS(516),
    [aux_sym__check_host_ip_token1] = ACTIONS(516),
    [aux_sym__ciphers_token1] = ACTIONS(516),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(516),
    [aux_sym__compression_token1] = ACTIONS(516),
    [aux_sym__connection_attempts_token1] = ACTIONS(516),
    [aux_sym__connect_timeout_token1] = ACTIONS(516),
    [aux_sym__control_master_token1] = ACTIONS(516),
    [aux_sym__control_persist_token1] = ACTIONS(516),
    [aux_sym__control_path_token1] = ACTIONS(516),
    [aux_sym__dynamic_forward_token1] = ACTIONS(516),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(516),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(516),
    [aux_sym__escape_char_token1] = ACTIONS(516),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(516),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(516),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(516),
    [aux_sym__forward_agent_token1] = ACTIONS(516),
    [aux_sym__forward_x11_token1] = ACTIONS(518),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(516),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(516),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(516),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(516),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(516),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(516),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(516),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(516),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(516),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(516),
    [aux_sym__host_key_alias_token1] = ACTIONS(516),
    [aux_sym__hostname_token1] = ACTIONS(516),
    [aux_sym__identities_only_token1] = ACTIONS(516),
    [aux_sym__identity_agent_token1] = ACTIONS(516),
    [aux_sym__identity_file_token1] = ACTIONS(516),
    [aux_sym__ignore_unknown_token1] = ACTIONS(516),
    [aux_sym__include_token1] = ACTIONS(516),
    [aux_sym__ipqos_token1] = ACTIONS(516),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(516),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(516),
    [aux_sym__kex_algorithms_token1] = ACTIONS(516),
    [aux_sym__known_hosts_command_token1] = ACTIONS(516),
    [aux_sym__local_command_token1] = ACTIONS(516),
    [aux_sym__local_forward_token1] = ACTIONS(516),
    [aux_sym__log_level_token1] = ACTIONS(516),
    [aux_sym__log_verbose_token1] = ACTIONS(516),
    [aux_sym__macs_token1] = ACTIONS(516),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(516),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(516),
    [aux_sym__password_authentication_token1] = ACTIONS(516),
    [aux_sym__permit_local_command_token1] = ACTIONS(516),
    [aux_sym__permit_remote_open_token1] = ACTIONS(516),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(516),
    [aux_sym__port_token1] = ACTIONS(516),
    [aux_sym__preferred_authentications_token1] = ACTIONS(516),
    [aux_sym__proxy_command_token1] = ACTIONS(516),
    [aux_sym__proxy_jump_token1] = ACTIONS(516),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(516),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(516),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(516),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(516),
    [aux_sym__rekey_limit_token1] = ACTIONS(516),
    [aux_sym__remote_command_token1] = ACTIONS(516),
    [aux_sym__remote_forward_token1] = ACTIONS(516),
    [aux_sym__request_tty_token1] = ACTIONS(516),
    [aux_sym__required_rsa_size_token1] = ACTIONS(516),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(516),
    [aux_sym__security_key_provider_token1] = ACTIONS(516),
    [aux_sym__send_env_token1] = ACTIONS(516),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(516),
    [aux_sym__server_alive_interval_token1] = ACTIONS(516),
    [aux_sym__session_type_token1] = ACTIONS(516),
    [aux_sym__set_env_token1] = ACTIONS(516),
    [aux_sym__stdin_null_token1] = ACTIONS(516),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(516),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(516),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(516),
    [aux_sym__syslog_facility_token1] = ACTIONS(516),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(516),
    [aux_sym__tag_token1] = ACTIONS(516),
    [aux_sym__tunnel_token1] = ACTIONS(518),
    [aux_sym__tunnel_device_token1] = ACTIONS(516),
    [aux_sym__update_host_keys_token1] = ACTIONS(516),
    [aux_sym__use_keychain_token1] = ACTIONS(516),
    [aux_sym__user_token1] = ACTIONS(518),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(516),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(516),
    [aux_sym__visual_host_key_token1] = ACTIONS(516),
    [aux_sym__xauth_location_token1] = ACTIONS(516),
    [sym_comment] = ACTIONS(516),
    [sym__space] = ACTIONS(516),
    [sym__eol] = ACTIONS(516),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(880),
    [aux_sym_host_declaration_token1] = ACTIONS(882),
    [aux_sym_match_declaration_token1] = ACTIONS(880),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(880),
    [aux_sym__address_family_token1] = ACTIONS(880),
    [aux_sym__batch_mode_token1] = ACTIONS(880),
    [aux_sym__bind_address_token1] = ACTIONS(880),
    [aux_sym__bind_interface_token1] = ACTIONS(880),
    [aux_sym__canonical_domains_token1] = ACTIONS(880),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(880),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(880),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(880),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(880),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(880),
    [aux_sym__certificate_file_token1] = ACTIONS(880),
    [aux_sym__check_host_ip_token1] = ACTIONS(880),
    [aux_sym__ciphers_token1] = ACTIONS(880),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(880),
    [aux_sym__compression_token1] = ACTIONS(880),
    [aux_sym__connection_attempts_token1] = ACTIONS(880),
    [aux_sym__connect_timeout_token1] = ACTIONS(880),
    [aux_sym__control_master_token1] = ACTIONS(880),
    [aux_sym__control_persist_token1] = ACTIONS(880),
    [aux_sym__control_path_token1] = ACTIONS(880),
    [aux_sym__dynamic_forward_token1] = ACTIONS(880),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(880),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(880),
    [aux_sym__escape_char_token1] = ACTIONS(880),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(880),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(880),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(880),
    [aux_sym__forward_agent_token1] = ACTIONS(880),
    [aux_sym__forward_x11_token1] = ACTIONS(882),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(880),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(880),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(880),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(880),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(880),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(880),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(880),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(880),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(880),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(880),
    [aux_sym__host_key_alias_token1] = ACTIONS(880),
    [aux_sym__hostname_token1] = ACTIONS(880),
    [aux_sym__identities_only_token1] = ACTIONS(880),
    [aux_sym__identity_agent_token1] = ACTIONS(880),
    [aux_sym__identity_file_token1] = ACTIONS(880),
    [aux_sym__ignore_unknown_token1] = ACTIONS(880),
    [aux_sym__include_token1] = ACTIONS(880),
    [aux_sym__ipqos_token1] = ACTIONS(880),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(880),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(880),
    [aux_sym__kex_algorithms_token1] = ACTIONS(880),
    [aux_sym__known_hosts_command_token1] = ACTIONS(880),
    [aux_sym__local_command_token1] = ACTIONS(880),
    [aux_sym__local_forward_token1] = ACTIONS(880),
    [aux_sym__log_level_token1] = ACTIONS(880),
    [aux_sym__log_verbose_token1] = ACTIONS(880),
    [aux_sym__macs_token1] = ACTIONS(880),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(880),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(880),
    [aux_sym__password_authentication_token1] = ACTIONS(880),
    [aux_sym__permit_local_command_token1] = ACTIONS(880),
    [aux_sym__permit_remote_open_token1] = ACTIONS(880),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(880),
    [aux_sym__port_token1] = ACTIONS(880),
    [aux_sym__preferred_authentications_token1] = ACTIONS(880),
    [aux_sym__proxy_command_token1] = ACTIONS(880),
    [aux_sym__proxy_jump_token1] = ACTIONS(880),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(880),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(880),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(880),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(880),
    [aux_sym__rekey_limit_token1] = ACTIONS(880),
    [aux_sym__remote_command_token1] = ACTIONS(880),
    [aux_sym__remote_forward_token1] = ACTIONS(880),
    [aux_sym__request_tty_token1] = ACTIONS(880),
    [aux_sym__required_rsa_size_token1] = ACTIONS(880),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(880),
    [aux_sym__security_key_provider_token1] = ACTIONS(880),
    [aux_sym__send_env_token1] = ACTIONS(880),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(880),
    [aux_sym__server_alive_interval_token1] = ACTIONS(880),
    [aux_sym__session_type_token1] = ACTIONS(880),
    [aux_sym__set_env_token1] = ACTIONS(880),
    [aux_sym__stdin_null_token1] = ACTIONS(880),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(880),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(880),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(880),
    [aux_sym__syslog_facility_token1] = ACTIONS(880),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(880),
    [aux_sym__tag_token1] = ACTIONS(880),
    [aux_sym__tunnel_token1] = ACTIONS(882),
    [aux_sym__tunnel_device_token1] = ACTIONS(880),
    [aux_sym__update_host_keys_token1] = ACTIONS(880),
    [aux_sym__use_keychain_token1] = ACTIONS(880),
    [aux_sym__user_token1] = ACTIONS(882),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(880),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(880),
    [aux_sym__visual_host_key_token1] = ACTIONS(880),
    [aux_sym__xauth_location_token1] = ACTIONS(880),
    [sym_comment] = ACTIONS(880),
    [sym__space] = ACTIONS(880),
    [sym__eol] = ACTIONS(880),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(884),
    [aux_sym_host_declaration_token1] = ACTIONS(886),
    [aux_sym_match_declaration_token1] = ACTIONS(884),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(884),
    [aux_sym__address_family_token1] = ACTIONS(884),
    [aux_sym__batch_mode_token1] = ACTIONS(884),
    [aux_sym__bind_address_token1] = ACTIONS(884),
    [aux_sym__bind_interface_token1] = ACTIONS(884),
    [aux_sym__canonical_domains_token1] = ACTIONS(884),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(884),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(884),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(884),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(884),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(884),
    [aux_sym__certificate_file_token1] = ACTIONS(884),
    [aux_sym__check_host_ip_token1] = ACTIONS(884),
    [aux_sym__ciphers_token1] = ACTIONS(884),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(884),
    [aux_sym__compression_token1] = ACTIONS(884),
    [aux_sym__connection_attempts_token1] = ACTIONS(884),
    [aux_sym__connect_timeout_token1] = ACTIONS(884),
    [aux_sym__control_master_token1] = ACTIONS(884),
    [aux_sym__control_persist_token1] = ACTIONS(884),
    [aux_sym__control_path_token1] = ACTIONS(884),
    [aux_sym__dynamic_forward_token1] = ACTIONS(884),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(884),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(884),
    [aux_sym__escape_char_token1] = ACTIONS(884),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(884),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(884),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(884),
    [aux_sym__forward_agent_token1] = ACTIONS(884),
    [aux_sym__forward_x11_token1] = ACTIONS(886),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(884),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(884),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(884),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(884),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(884),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(884),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(884),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(884),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(884),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(884),
    [aux_sym__host_key_alias_token1] = ACTIONS(884),
    [aux_sym__hostname_token1] = ACTIONS(884),
    [aux_sym__identities_only_token1] = ACTIONS(884),
    [aux_sym__identity_agent_token1] = ACTIONS(884),
    [aux_sym__identity_file_token1] = ACTIONS(884),
    [aux_sym__ignore_unknown_token1] = ACTIONS(884),
    [aux_sym__include_token1] = ACTIONS(884),
    [aux_sym__ipqos_token1] = ACTIONS(884),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(884),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(884),
    [aux_sym__kex_algorithms_token1] = ACTIONS(884),
    [aux_sym__known_hosts_command_token1] = ACTIONS(884),
    [aux_sym__local_command_token1] = ACTIONS(884),
    [aux_sym__local_forward_token1] = ACTIONS(884),
    [aux_sym__log_level_token1] = ACTIONS(884),
    [aux_sym__log_verbose_token1] = ACTIONS(884),
    [aux_sym__macs_token1] = ACTIONS(884),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(884),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(884),
    [aux_sym__password_authentication_token1] = ACTIONS(884),
    [aux_sym__permit_local_command_token1] = ACTIONS(884),
    [aux_sym__permit_remote_open_token1] = ACTIONS(884),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(884),
    [aux_sym__port_token1] = ACTIONS(884),
    [aux_sym__preferred_authentications_token1] = ACTIONS(884),
    [aux_sym__proxy_command_token1] = ACTIONS(884),
    [aux_sym__proxy_jump_token1] = ACTIONS(884),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(884),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(884),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(884),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(884),
    [aux_sym__rekey_limit_token1] = ACTIONS(884),
    [aux_sym__remote_command_token1] = ACTIONS(884),
    [aux_sym__remote_forward_token1] = ACTIONS(884),
    [aux_sym__request_tty_token1] = ACTIONS(884),
    [aux_sym__required_rsa_size_token1] = ACTIONS(884),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(884),
    [aux_sym__security_key_provider_token1] = ACTIONS(884),
    [aux_sym__send_env_token1] = ACTIONS(884),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(884),
    [aux_sym__server_alive_interval_token1] = ACTIONS(884),
    [aux_sym__session_type_token1] = ACTIONS(884),
    [aux_sym__set_env_token1] = ACTIONS(884),
    [aux_sym__stdin_null_token1] = ACTIONS(884),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(884),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(884),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(884),
    [aux_sym__syslog_facility_token1] = ACTIONS(884),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(884),
    [aux_sym__tag_token1] = ACTIONS(884),
    [aux_sym__tunnel_token1] = ACTIONS(886),
    [aux_sym__tunnel_device_token1] = ACTIONS(884),
    [aux_sym__update_host_keys_token1] = ACTIONS(884),
    [aux_sym__use_keychain_token1] = ACTIONS(884),
    [aux_sym__user_token1] = ACTIONS(886),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(884),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(884),
    [aux_sym__visual_host_key_token1] = ACTIONS(884),
    [aux_sym__xauth_location_token1] = ACTIONS(884),
    [sym_comment] = ACTIONS(884),
    [sym__space] = ACTIONS(884),
    [sym__eol] = ACTIONS(884),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(888),
    [aux_sym_host_declaration_token1] = ACTIONS(890),
    [aux_sym_match_declaration_token1] = ACTIONS(888),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(888),
    [aux_sym__address_family_token1] = ACTIONS(888),
    [aux_sym__batch_mode_token1] = ACTIONS(888),
    [aux_sym__bind_address_token1] = ACTIONS(888),
    [aux_sym__bind_interface_token1] = ACTIONS(888),
    [aux_sym__canonical_domains_token1] = ACTIONS(888),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(888),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(888),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(888),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(888),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(888),
    [aux_sym__certificate_file_token1] = ACTIONS(888),
    [aux_sym__check_host_ip_token1] = ACTIONS(888),
    [aux_sym__ciphers_token1] = ACTIONS(888),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(888),
    [aux_sym__compression_token1] = ACTIONS(888),
    [aux_sym__connection_attempts_token1] = ACTIONS(888),
    [aux_sym__connect_timeout_token1] = ACTIONS(888),
    [aux_sym__control_master_token1] = ACTIONS(888),
    [aux_sym__control_persist_token1] = ACTIONS(888),
    [aux_sym__control_path_token1] = ACTIONS(888),
    [aux_sym__dynamic_forward_token1] = ACTIONS(888),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(888),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(888),
    [aux_sym__escape_char_token1] = ACTIONS(888),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(888),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(888),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(888),
    [aux_sym__forward_agent_token1] = ACTIONS(888),
    [aux_sym__forward_x11_token1] = ACTIONS(890),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(888),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(888),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(888),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(888),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(888),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(888),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(888),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(888),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(888),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(888),
    [aux_sym__host_key_alias_token1] = ACTIONS(888),
    [aux_sym__hostname_token1] = ACTIONS(888),
    [aux_sym__identities_only_token1] = ACTIONS(888),
    [aux_sym__identity_agent_token1] = ACTIONS(888),
    [aux_sym__identity_file_token1] = ACTIONS(888),
    [aux_sym__ignore_unknown_token1] = ACTIONS(888),
    [aux_sym__include_token1] = ACTIONS(888),
    [aux_sym__ipqos_token1] = ACTIONS(888),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(888),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(888),
    [aux_sym__kex_algorithms_token1] = ACTIONS(888),
    [aux_sym__known_hosts_command_token1] = ACTIONS(888),
    [aux_sym__local_command_token1] = ACTIONS(888),
    [aux_sym__local_forward_token1] = ACTIONS(888),
    [aux_sym__log_level_token1] = ACTIONS(888),
    [aux_sym__log_verbose_token1] = ACTIONS(888),
    [aux_sym__macs_token1] = ACTIONS(888),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(888),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(888),
    [aux_sym__password_authentication_token1] = ACTIONS(888),
    [aux_sym__permit_local_command_token1] = ACTIONS(888),
    [aux_sym__permit_remote_open_token1] = ACTIONS(888),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(888),
    [aux_sym__port_token1] = ACTIONS(888),
    [aux_sym__preferred_authentications_token1] = ACTIONS(888),
    [aux_sym__proxy_command_token1] = ACTIONS(888),
    [aux_sym__proxy_jump_token1] = ACTIONS(888),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(888),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(888),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(888),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(888),
    [aux_sym__rekey_limit_token1] = ACTIONS(888),
    [aux_sym__remote_command_token1] = ACTIONS(888),
    [aux_sym__remote_forward_token1] = ACTIONS(888),
    [aux_sym__request_tty_token1] = ACTIONS(888),
    [aux_sym__required_rsa_size_token1] = ACTIONS(888),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(888),
    [aux_sym__security_key_provider_token1] = ACTIONS(888),
    [aux_sym__send_env_token1] = ACTIONS(888),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(888),
    [aux_sym__server_alive_interval_token1] = ACTIONS(888),
    [aux_sym__session_type_token1] = ACTIONS(888),
    [aux_sym__set_env_token1] = ACTIONS(888),
    [aux_sym__stdin_null_token1] = ACTIONS(888),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(888),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(888),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(888),
    [aux_sym__syslog_facility_token1] = ACTIONS(888),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(888),
    [aux_sym__tag_token1] = ACTIONS(888),
    [aux_sym__tunnel_token1] = ACTIONS(890),
    [aux_sym__tunnel_device_token1] = ACTIONS(888),
    [aux_sym__update_host_keys_token1] = ACTIONS(888),
    [aux_sym__use_keychain_token1] = ACTIONS(888),
    [aux_sym__user_token1] = ACTIONS(890),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(888),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(888),
    [aux_sym__visual_host_key_token1] = ACTIONS(888),
    [aux_sym__xauth_location_token1] = ACTIONS(888),
    [sym_comment] = ACTIONS(888),
    [sym__space] = ACTIONS(888),
    [sym__eol] = ACTIONS(888),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_host_declaration_token1] = ACTIONS(892),
    [aux_sym_match_declaration_token1] = ACTIONS(211),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(211),
    [aux_sym__address_family_token1] = ACTIONS(211),
    [aux_sym__batch_mode_token1] = ACTIONS(211),
    [aux_sym__bind_address_token1] = ACTIONS(211),
    [aux_sym__bind_interface_token1] = ACTIONS(211),
    [aux_sym__canonical_domains_token1] = ACTIONS(211),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(211),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(211),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(211),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(211),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(211),
    [aux_sym__certificate_file_token1] = ACTIONS(211),
    [aux_sym__check_host_ip_token1] = ACTIONS(211),
    [aux_sym__ciphers_token1] = ACTIONS(211),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(211),
    [aux_sym__compression_token1] = ACTIONS(211),
    [aux_sym__connection_attempts_token1] = ACTIONS(211),
    [aux_sym__connect_timeout_token1] = ACTIONS(211),
    [aux_sym__control_master_token1] = ACTIONS(211),
    [aux_sym__control_persist_token1] = ACTIONS(211),
    [aux_sym__control_path_token1] = ACTIONS(211),
    [aux_sym__dynamic_forward_token1] = ACTIONS(211),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(211),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(211),
    [aux_sym__escape_char_token1] = ACTIONS(211),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(211),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(211),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(211),
    [aux_sym__forward_agent_token1] = ACTIONS(211),
    [aux_sym__forward_x11_token1] = ACTIONS(892),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(211),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(211),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(211),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(211),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(211),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(211),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(211),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(211),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(211),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(211),
    [aux_sym__host_key_alias_token1] = ACTIONS(211),
    [aux_sym__hostname_token1] = ACTIONS(211),
    [aux_sym__identities_only_token1] = ACTIONS(211),
    [aux_sym__identity_agent_token1] = ACTIONS(211),
    [aux_sym__identity_file_token1] = ACTIONS(211),
    [aux_sym__ignore_unknown_token1] = ACTIONS(211),
    [aux_sym__include_token1] = ACTIONS(211),
    [aux_sym__ipqos_token1] = ACTIONS(211),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(211),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(211),
    [aux_sym__kex_algorithms_token1] = ACTIONS(211),
    [aux_sym__known_hosts_command_token1] = ACTIONS(211),
    [aux_sym__local_command_token1] = ACTIONS(211),
    [aux_sym__local_forward_token1] = ACTIONS(211),
    [aux_sym__log_level_token1] = ACTIONS(211),
    [aux_sym__log_verbose_token1] = ACTIONS(211),
    [aux_sym__macs_token1] = ACTIONS(211),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(211),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(211),
    [aux_sym__password_authentication_token1] = ACTIONS(211),
    [aux_sym__permit_local_command_token1] = ACTIONS(211),
    [aux_sym__permit_remote_open_token1] = ACTIONS(211),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(211),
    [aux_sym__port_token1] = ACTIONS(211),
    [aux_sym__preferred_authentications_token1] = ACTIONS(211),
    [aux_sym__proxy_command_token1] = ACTIONS(211),
    [aux_sym__proxy_jump_token1] = ACTIONS(211),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(211),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(211),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(211),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(211),
    [aux_sym__rekey_limit_token1] = ACTIONS(211),
    [aux_sym__remote_command_token1] = ACTIONS(211),
    [aux_sym__remote_forward_token1] = ACTIONS(211),
    [aux_sym__request_tty_token1] = ACTIONS(211),
    [aux_sym__required_rsa_size_token1] = ACTIONS(211),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(211),
    [aux_sym__security_key_provider_token1] = ACTIONS(211),
    [aux_sym__send_env_token1] = ACTIONS(211),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(211),
    [aux_sym__server_alive_interval_token1] = ACTIONS(211),
    [aux_sym__session_type_token1] = ACTIONS(211),
    [aux_sym__set_env_token1] = ACTIONS(211),
    [aux_sym__stdin_null_token1] = ACTIONS(211),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(211),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(211),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(211),
    [aux_sym__syslog_facility_token1] = ACTIONS(211),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(211),
    [aux_sym__tag_token1] = ACTIONS(211),
    [aux_sym__tunnel_token1] = ACTIONS(892),
    [aux_sym__tunnel_device_token1] = ACTIONS(211),
    [aux_sym__update_host_keys_token1] = ACTIONS(211),
    [aux_sym__use_keychain_token1] = ACTIONS(211),
    [aux_sym__user_token1] = ACTIONS(892),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(211),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(211),
    [aux_sym__visual_host_key_token1] = ACTIONS(211),
    [aux_sym__xauth_location_token1] = ACTIONS(211),
    [sym_comment] = ACTIONS(211),
    [sym__space] = ACTIONS(211),
    [sym__eol] = ACTIONS(211),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym_host_declaration_token1] = ACTIONS(538),
    [aux_sym_match_declaration_token1] = ACTIONS(536),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(536),
    [aux_sym__address_family_token1] = ACTIONS(536),
    [aux_sym__batch_mode_token1] = ACTIONS(536),
    [aux_sym__bind_address_token1] = ACTIONS(536),
    [aux_sym__bind_interface_token1] = ACTIONS(536),
    [aux_sym__canonical_domains_token1] = ACTIONS(536),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(536),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(536),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(536),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(536),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(536),
    [aux_sym__certificate_file_token1] = ACTIONS(536),
    [aux_sym__check_host_ip_token1] = ACTIONS(536),
    [aux_sym__ciphers_token1] = ACTIONS(536),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(536),
    [aux_sym__compression_token1] = ACTIONS(536),
    [aux_sym__connection_attempts_token1] = ACTIONS(536),
    [aux_sym__connect_timeout_token1] = ACTIONS(536),
    [aux_sym__control_master_token1] = ACTIONS(536),
    [aux_sym__control_persist_token1] = ACTIONS(536),
    [aux_sym__control_path_token1] = ACTIONS(536),
    [aux_sym__dynamic_forward_token1] = ACTIONS(536),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(536),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(536),
    [aux_sym__escape_char_token1] = ACTIONS(536),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(536),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(536),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(536),
    [aux_sym__forward_agent_token1] = ACTIONS(536),
    [aux_sym__forward_x11_token1] = ACTIONS(538),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(536),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(536),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(536),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(536),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(536),
    [aux_sym__hash_known_hosts_token1] = ACTIONS(536),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(536),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(536),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(536),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(536),
    [aux_sym__host_key_alias_token1] = ACTIONS(536),
    [aux_sym__hostname_token1] = ACTIONS(536),
    [aux_sym__identities_only_token1] = ACTIONS(536),
    [aux_sym__identity_agent_token1] = ACTIONS(536),
    [aux_sym__identity_file_token1] = ACTIONS(536),
    [aux_sym__ignore_unknown_token1] = ACTIONS(536),
    [aux_sym__include_token1] = ACTIONS(536),
    [aux_sym__ipqos_token1] = ACTIONS(536),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(536),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(536),
    [aux_sym__kex_algorithms_token1] = ACTIONS(536),
    [aux_sym__known_hosts_command_token1] = ACTIONS(536),
    [aux_sym__local_command_token1] = ACTIONS(536),
    [aux_sym__local_forward_token1] = ACTIONS(536),
    [aux_sym__log_level_token1] = ACTIONS(536),
    [aux_sym__log_verbose_token1] = ACTIONS(536),
    [aux_sym__macs_token1] = ACTIONS(536),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(536),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(536),
    [aux_sym__password_authentication_token1] = ACTIONS(536),
    [aux_sym__permit_local_command_token1] = ACTIONS(536),
    [aux_sym__permit_remote_open_token1] = ACTIONS(536),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(536),
    [aux_sym__port_token1] = ACTIONS(536),
    [aux_sym__preferred_authentications_token1] = ACTIONS(536),
    [aux_sym__proxy_command_token1] = ACTIONS(536),
    [aux_sym__proxy_jump_token1] = ACTIONS(536),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(536),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(536),
    [aux_sym__pubkey_accepted_algorithms_token2] = ACTIONS(536),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(536),
    [aux_sym__rekey_limit_token1] = ACTIONS(536),
    [aux_sym__remote_command_token1] = ACTIONS(536),
    [aux_sym__remote_forward_token1] = ACTIONS(536),
    [aux_sym__request_tty_token1] = ACTIONS(536),
    [aux_sym__required_rsa_size_token1] = ACTIONS(536),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(536),
    [aux_sym__security_key_provider_token1] = ACTIONS(536),
    [aux_sym__send_env_token1] = ACTIONS(536),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(536),
    [aux_sym__server_alive_interval_token1] = ACTIONS(536),
    [aux_sym__session_type_token1] = ACTIONS(536),
    [aux_sym__set_env_token1] = ACTIONS(536),
    [aux_sym__stdin_null_token1] = ACTIONS(536),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(536),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(536),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(536),
    [aux_sym__syslog_facility_token1] = ACTIONS(536),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(536),
    [aux_sym__tag_token1] = ACTIONS(536),
    [aux_sym__tunnel_token1] = ACTIONS(538),
    [aux_sym__tunnel_device_token1] = ACTIONS(536),
    [aux_sym__update_host_keys_token1] = ACTIONS(536),
    [aux_sym__use_keychain_token1] = ACTIONS(536),
    [aux_sym__user_token1] = ACTIONS(538),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(536),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(536),
    [aux_sym__visual_host_key_token1] = ACTIONS(536),
    [aux_sym__xauth_location_token1] = ACTIONS(536),
    [sym_comment] = ACTIONS(536),
    [sym__space] = ACTIONS(536),
    [sym__eol] = ACTIONS(536),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(896), 1,
      aux_sym__all_token1,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    STATE(318), 1,
      sym_condition,
    STATE(571), 1,
      sym__match_host,
    STATE(694), 1,
      sym__match_localuser,
    STATE(695), 1,
      sym__match_user,
    STATE(696), 1,
      sym__match_tagged,
    STATE(697), 1,
      sym__match_originalhost,
    STATE(699), 1,
      sym__match_localnetwork,
    STATE(702), 1,
      sym__match_exec,
    STATE(703), 1,
      sym__match_final,
    STATE(704), 1,
      sym__match_canonical,
    STATE(705), 1,
      sym__all,
  [67] = 21,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(916), 1,
      sym__eol,
    STATE(571), 1,
      sym__match_host,
    STATE(636), 1,
      sym_condition,
    STATE(694), 1,
      sym__match_localuser,
    STATE(695), 1,
      sym__match_user,
    STATE(696), 1,
      sym__match_tagged,
    STATE(697), 1,
      sym__match_originalhost,
    STATE(699), 1,
      sym__match_localnetwork,
    STATE(702), 1,
      sym__match_exec,
    STATE(703), 1,
      sym__match_final,
    STATE(704), 1,
      sym__match_canonical,
  [131] = 21,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(918), 1,
      sym__eol,
    STATE(571), 1,
      sym__match_host,
    STATE(636), 1,
      sym_condition,
    STATE(694), 1,
      sym__match_localuser,
    STATE(695), 1,
      sym__match_user,
    STATE(696), 1,
      sym__match_tagged,
    STATE(697), 1,
      sym__match_originalhost,
    STATE(699), 1,
      sym__match_localnetwork,
    STATE(702), 1,
      sym__match_exec,
    STATE(703), 1,
      sym__match_final,
    STATE(704), 1,
      sym__match_canonical,
  [195] = 20,
    ACTIONS(894), 1,
      anon_sym_BANG,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    STATE(571), 1,
      sym__match_host,
    STATE(636), 1,
      sym_condition,
    STATE(694), 1,
      sym__match_localuser,
    STATE(695), 1,
      sym__match_user,
    STATE(696), 1,
      sym__match_tagged,
    STATE(697), 1,
      sym__match_originalhost,
    STATE(699), 1,
      sym__match_localnetwork,
    STATE(702), 1,
      sym__match_exec,
    STATE(703), 1,
      sym__match_final,
    STATE(704), 1,
      sym__match_canonical,
  [256] = 18,
    ACTIONS(898), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(900), 1,
      aux_sym__match_final_token1,
    ACTIONS(902), 1,
      aux_sym__match_exec_token1,
    ACTIONS(904), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(906), 1,
      aux_sym__match_host_token1,
    ACTIONS(908), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(910), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(912), 1,
      aux_sym__match_user_token1,
    ACTIONS(914), 1,
      aux_sym__match_localuser_token1,
    STATE(530), 1,
      sym__match_canonical,
    STATE(531), 1,
      sym__match_final,
    STATE(532), 1,
      sym__match_exec,
    STATE(533), 1,
      sym__match_localnetwork,
    STATE(534), 1,
      sym__match_host,
    STATE(535), 1,
      sym__match_originalhost,
    STATE(536), 1,
      sym__match_tagged,
    STATE(537), 1,
      sym__match_user,
    STATE(538), 1,
      sym__match_localuser,
  [311] = 14,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(930), 1,
      sym__number,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(498), 1,
      sym__forward_value1,
    STATE(584), 1,
      sym_number,
    STATE(587), 1,
      sym__file_string,
    STATE(589), 1,
      sym__forward_value_inner,
    STATE(795), 1,
      sym__string,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [355] = 14,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(930), 1,
      sym__number,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(584), 1,
      sym_number,
    STATE(587), 1,
      sym__file_string,
    STATE(589), 1,
      sym__forward_value_inner,
    STATE(795), 1,
      sym__string,
    STATE(804), 1,
      sym__forward_value1,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [399] = 12,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token3,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(86), 1,
      aux_sym__file_string_repeat2,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(455), 1,
      aux_sym__string_repeat2,
    STATE(795), 1,
      sym__string,
    STATE(811), 1,
      sym__forward_value_inner,
    STATE(186), 2,
      sym__file_token,
      sym_variable,
  [437] = 12,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(936), 1,
      aux_sym__match_exec_token3,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(86), 1,
      aux_sym__file_string_repeat2,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(455), 1,
      aux_sym__string_repeat2,
    STATE(784), 1,
      sym__forward_value_inner,
    STATE(795), 1,
      sym__string,
    STATE(186), 2,
      sym__file_token,
      sym_variable,
  [475] = 12,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(686), 1,
      sym__forward_value_inner,
    STATE(687), 1,
      sym__forward_value2,
    STATE(688), 1,
      sym__file_string,
    STATE(795), 1,
      sym__string,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [513] = 12,
    ACTIONS(920), 1,
      aux_sym__match_exec_token2,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(686), 1,
      sym__forward_value_inner,
    STATE(688), 1,
      sym__file_string,
    STATE(711), 1,
      sym__forward_value2,
    STATE(795), 1,
      sym__string,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [551] = 10,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(950), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(606), 1,
      sym__var_value,
    STATE(607), 1,
      sym__file_string,
    ACTIONS(948), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [584] = 6,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    ACTIONS(956), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(958), 2,
      sym__space,
      sym__eol,
    STATE(76), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(954), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [607] = 6,
    ACTIONS(960), 1,
      aux_sym__match_exec_token2,
    ACTIONS(966), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(969), 2,
      sym__space,
      sym__eol,
    STATE(76), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(963), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [630] = 7,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    ACTIONS(956), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(654), 1,
      sym__file_pattern_vars,
    STATE(76), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(954), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [655] = 7,
    ACTIONS(952), 1,
      aux_sym__match_exec_token2,
    ACTIONS(956), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(667), 1,
      sym__file_pattern_vars,
    STATE(76), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(954), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [680] = 9,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(930), 1,
      sym__number,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(973), 1,
      anon_sym_DQUOTE,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(649), 1,
      sym_number,
    STATE(650), 1,
      sym__forward_value_inner,
    STATE(666), 1,
      sym__dynamic_forward_value,
    STATE(795), 1,
      sym__string,
  [708] = 8,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(975), 1,
      anon_sym_none,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(479), 1,
      sym__file_string,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [734] = 7,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    ACTIONS(979), 1,
      anon_sym_DOLLAR,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(630), 1,
      sym__var_value,
    ACTIONS(981), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(628), 2,
      sym__string,
      sym__boolean,
  [758] = 8,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(983), 1,
      anon_sym_none,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(718), 1,
      sym__file_string,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [784] = 6,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    ACTIONS(987), 1,
      aux_sym__match_exec_token3,
    ACTIONS(993), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(96), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(990), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [806] = 6,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    ACTIONS(998), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1002), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(96), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1000), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [828] = 9,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(930), 1,
      sym__number,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(973), 1,
      anon_sym_DQUOTE,
    STATE(365), 1,
      sym__dynamic_forward_value,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(649), 1,
      sym_number,
    STATE(650), 1,
      sym__forward_value_inner,
    STATE(795), 1,
      sym__string,
  [856] = 5,
    ACTIONS(998), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1002), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(57), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(96), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(1000), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [875] = 7,
    ACTIONS(1004), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1007), 1,
      aux_sym__file_token_token1,
    ACTIONS(1010), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1013), 1,
      sym__space,
    ACTIONS(1015), 1,
      sym__eol,
    STATE(60), 1,
      aux_sym__remote_command_repeat1,
    STATE(161), 2,
      sym__file_token,
      sym_variable,
  [898] = 7,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(604), 1,
      sym__file_string,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [921] = 7,
    ACTIONS(1017), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1019), 1,
      aux_sym__file_token_token1,
    ACTIONS(1021), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1023), 1,
      sym__space,
    ACTIONS(1025), 1,
      sym__eol,
    STATE(60), 1,
      aux_sym__remote_command_repeat1,
    STATE(161), 2,
      sym__file_token,
      sym_variable,
  [944] = 7,
    ACTIONS(1027), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1033), 1,
      anon_sym_none,
    STATE(137), 1,
      aux_sym__match_value_repeat1,
    STATE(342), 1,
      sym__cnames_map,
    STATE(343), 1,
      sym__pattern,
    ACTIONS(1031), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [967] = 6,
    ACTIONS(1035), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1038), 1,
      aux_sym__file_token_token1,
    ACTIONS(1041), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1044), 2,
      sym__space,
      sym__eol,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [988] = 7,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1046), 1,
      anon_sym_BANG,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1052), 1,
      sym__eol,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1011] = 6,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym__match_value_repeat1,
    STATE(266), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1060), 2,
      sym__space,
      sym__eol,
  [1032] = 7,
    ACTIONS(1062), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1065), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1068), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1071), 1,
      sym__space,
    ACTIONS(1073), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym__hosts_string_repeat1,
    STATE(152), 2,
      sym__hosts_token,
      sym_variable,
  [1055] = 7,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1046), 1,
      anon_sym_BANG,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1075), 1,
      sym__eol,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1078] = 7,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1046), 1,
      anon_sym_BANG,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1077), 1,
      sym__eol,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1101] = 7,
    ACTIONS(1079), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1081), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1083), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1085), 1,
      sym__space,
    ACTIONS(1087), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym__hosts_string_repeat1,
    STATE(152), 2,
      sym__hosts_token,
      sym_variable,
  [1124] = 7,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1046), 1,
      anon_sym_BANG,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1089), 1,
      sym__eol,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1147] = 6,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    STATE(64), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1091), 2,
      sym__space,
      sym__eol,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [1168] = 7,
    ACTIONS(926), 1,
      aux_sym__file_token_token1,
    ACTIONS(928), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(944), 1,
      aux_sym__match_exec_token2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__file_string_repeat1,
    STATE(501), 1,
      sym__file_string,
    STATE(148), 2,
      sym__file_token,
      sym_variable,
  [1191] = 8,
    ACTIONS(924), 1,
      anon_sym_STAR,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(1093), 1,
      aux_sym__match_exec_token3,
    STATE(367), 1,
      aux_sym__string_repeat1,
    STATE(455), 1,
      aux_sym__string_repeat2,
    STATE(795), 1,
      sym__string,
    STATE(816), 1,
      sym__forward_value_inner,
  [1216] = 4,
    ACTIONS(1097), 1,
      anon_sym_confirm,
    ACTIONS(1099), 1,
      sym__number,
    STATE(693), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1095), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1232] = 2,
    ACTIONS(1101), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1103), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1244] = 6,
    ACTIONS(1105), 1,
      anon_sym_DQUOTE,
    ACTIONS(1107), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1110), 1,
      aux_sym__file_token_token1,
    ACTIONS(1113), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(77), 1,
      aux_sym__file_string_repeat2,
    STATE(186), 2,
      sym__file_token,
      sym_variable,
  [1264] = 6,
    ACTIONS(1116), 1,
      aux_sym_time_token1,
    ACTIONS(1118), 1,
      aux_sym_time_token2,
    ACTIONS(1120), 1,
      aux_sym_time_token3,
    ACTIONS(1122), 1,
      aux_sym_time_token4,
    ACTIONS(1124), 1,
      aux_sym_time_token5,
    ACTIONS(1126), 2,
      sym__space,
      sym__eol,
  [1284] = 6,
    ACTIONS(1079), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1081), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1083), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(70), 1,
      aux_sym__hosts_string_repeat1,
    STATE(597), 1,
      sym__hosts_string,
    STATE(152), 2,
      sym__hosts_token,
      sym_variable,
  [1304] = 4,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    STATE(85), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1128), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1320] = 4,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    STATE(85), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1130), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1336] = 6,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1046), 1,
      anon_sym_BANG,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(613), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1356] = 6,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1132), 1,
      anon_sym_BANG,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(306), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1376] = 6,
    ACTIONS(1027), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      aux_sym__match_value_repeat1,
    STATE(343), 1,
      sym__pattern,
    STATE(647), 1,
      sym__cnames_map,
    ACTIONS(1031), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1396] = 4,
    ACTIONS(1134), 1,
      aux_sym__match_exec_token2,
    STATE(85), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1139), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1137), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1412] = 6,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1142), 1,
      anon_sym_DQUOTE,
    ACTIONS(1144), 1,
      aux_sym__match_exec_token3,
    STATE(77), 1,
      aux_sym__file_string_repeat2,
    STATE(186), 2,
      sym__file_token,
      sym_variable,
  [1432] = 2,
    ACTIONS(1146), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1148), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1444] = 6,
    ACTIONS(1150), 1,
      anon_sym_DQUOTE,
    ACTIONS(1152), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym__match_value_repeat3,
    STATE(415), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1156), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1464] = 6,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    ACTIONS(979), 1,
      anon_sym_DOLLAR,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(502), 1,
      sym__var_value,
    STATE(503), 1,
      sym__string,
  [1483] = 4,
    ACTIONS(1158), 1,
      anon_sym_DQUOTE,
    STATE(432), 1,
      sym__permit_remote_open_value,
    ACTIONS(1160), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1162), 2,
      anon_sym_any,
      anon_sym_none,
  [1498] = 2,
    ACTIONS(1146), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1148), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1509] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(678), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1526] = 5,
    ACTIONS(1164), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1167), 1,
      aux_sym__hostname_token_token1,
    STATE(93), 1,
      aux_sym__hostname_string_repeat1,
    STATE(220), 1,
      sym__hostname_token,
    ACTIONS(1170), 2,
      sym__space,
      sym__eol,
  [1543] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    STATE(81), 1,
      aux_sym__match_value_repeat1,
    STATE(236), 1,
      sym__pattern,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1560] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    STATE(81), 1,
      aux_sym__match_value_repeat1,
    STATE(227), 1,
      sym__pattern,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1577] = 2,
    ACTIONS(1174), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1172), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1588] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    STATE(81), 1,
      aux_sym__match_value_repeat1,
    STATE(228), 1,
      sym__pattern,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1605] = 5,
    ACTIONS(1027), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      aux_sym__match_value_repeat1,
    STATE(227), 1,
      sym__pattern,
    ACTIONS(1031), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1622] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(645), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1639] = 6,
    ACTIONS(1176), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1178), 1,
      anon_sym_DQUOTE,
    ACTIONS(1180), 1,
      aux_sym__hostname_token_token1,
    STATE(126), 1,
      aux_sym__hostname_string_repeat1,
    STATE(220), 1,
      sym__hostname_token,
    STATE(612), 1,
      sym__hostname_string,
  [1658] = 5,
    ACTIONS(1182), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1185), 1,
      aux_sym__file_token_token1,
    STATE(101), 1,
      aux_sym__match_exec_repeat1,
    STATE(173), 1,
      sym__file_token,
    ACTIONS(1188), 2,
      sym__space,
      sym__eol,
  [1675] = 5,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__match_value_repeat1,
    STATE(634), 1,
      sym__match_value,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1692] = 5,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__match_value_repeat1,
    STATE(633), 1,
      sym__match_value,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1709] = 5,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__match_value_repeat1,
    STATE(632), 1,
      sym__match_value,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1726] = 5,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__match_value_repeat1,
    STATE(631), 1,
      sym__match_value,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1743] = 5,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__match_value_repeat1,
    STATE(629), 1,
      sym__match_value,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1760] = 4,
    ACTIONS(1192), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(207), 1,
      sym__log_verbose_value,
    ACTIONS(1194), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1775] = 4,
    ACTIONS(1196), 1,
      aux_sym__match_exec_token2,
    STATE(108), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1137), 2,
      sym__space,
      sym__eol,
    ACTIONS(1199), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1790] = 4,
    ACTIONS(1204), 1,
      aux_sym__match_exec_token3,
    STATE(109), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1202), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1207), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1805] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(336), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1822] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(682), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1839] = 3,
    STATE(117), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1212), 2,
      sym__space,
      sym__eol,
    ACTIONS(1210), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1852] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(683), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1869] = 5,
    ACTIONS(1214), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1216), 1,
      aux_sym__file_token_token1,
    STATE(101), 1,
      aux_sym__match_exec_repeat1,
    STATE(173), 1,
      sym__file_token,
    ACTIONS(1218), 2,
      sym__space,
      sym__eol,
  [1886] = 6,
    ACTIONS(1220), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1222), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1224), 1,
      sym__space,
    ACTIONS(1226), 1,
      sym__eol,
    STATE(130), 1,
      aux_sym__proxy_string_repeat1,
    STATE(198), 1,
      sym__proxy_token,
  [1905] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(724), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1922] = 3,
    STATE(117), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1231), 2,
      sym__space,
      sym__eol,
    ACTIONS(1228), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1935] = 3,
    ACTIONS(1235), 1,
      anon_sym_auto,
    STATE(657), 1,
      sym__boolean,
    ACTIONS(1233), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1948] = 3,
    ACTIONS(1237), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1240), 1,
      anon_sym_COLON,
    ACTIONS(1242), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1961] = 4,
    ACTIONS(1244), 1,
      anon_sym_DASH,
    STATE(112), 1,
      aux_sym__send_env_value_repeat1,
    STATE(712), 1,
      sym__send_env_value,
    ACTIONS(1210), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1976] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(603), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1993] = 2,
    ACTIONS(1246), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1248), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2004] = 6,
    ACTIONS(1220), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1222), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1250), 1,
      anon_sym_none,
    STATE(115), 1,
      aux_sym__proxy_string_repeat1,
    STATE(198), 1,
      sym__proxy_token,
    STATE(568), 1,
      sym__proxy_string,
  [2023] = 5,
    ACTIONS(938), 1,
      aux_sym__file_token_token1,
    ACTIONS(940), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1144), 1,
      aux_sym__match_exec_token3,
    STATE(86), 1,
      aux_sym__file_string_repeat2,
    STATE(186), 2,
      sym__file_token,
      sym_variable,
  [2040] = 2,
    STATE(561), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1252), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [2051] = 5,
    ACTIONS(1176), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1180), 1,
      aux_sym__hostname_token_token1,
    STATE(93), 1,
      aux_sym__hostname_string_repeat1,
    STATE(220), 1,
      sym__hostname_token,
    ACTIONS(1254), 2,
      sym__space,
      sym__eol,
  [2068] = 4,
    ACTIONS(1158), 1,
      anon_sym_DQUOTE,
    STATE(701), 1,
      sym__permit_remote_open_value,
    ACTIONS(1160), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1256), 2,
      anon_sym_any,
      anon_sym_none,
  [2083] = 4,
    ACTIONS(1152), 1,
      aux_sym__match_exec_token3,
    STATE(109), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1156), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1258), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [2098] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(402), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2115] = 6,
    ACTIONS(1260), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1263), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1266), 1,
      sym__space,
    ACTIONS(1268), 1,
      sym__eol,
    STATE(130), 1,
      aux_sym__proxy_string_repeat1,
    STATE(198), 1,
      sym__proxy_token,
  [2134] = 5,
    ACTIONS(1017), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1019), 1,
      aux_sym__file_token_token1,
    ACTIONS(1021), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(62), 1,
      aux_sym__remote_command_repeat1,
    STATE(161), 2,
      sym__file_token,
      sym_variable,
  [2151] = 3,
    STATE(117), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1270), 2,
      sym__space,
      sym__eol,
    ACTIONS(1210), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2164] = 4,
    ACTIONS(1244), 1,
      anon_sym_DASH,
    STATE(112), 1,
      aux_sym__send_env_value_repeat1,
    STATE(460), 1,
      sym__send_env_value,
    ACTIONS(1210), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2179] = 4,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(108), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1130), 2,
      sym__space,
      sym__eol,
  [2194] = 2,
    STATE(513), 1,
      sym__boolean,
    ACTIONS(1272), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [2205] = 5,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      aux_sym__match_exec_token2,
    STATE(134), 1,
      aux_sym__match_value_repeat1,
    STATE(485), 1,
      sym__pattern,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2222] = 4,
    ACTIONS(1027), 1,
      aux_sym__match_exec_token2,
    STATE(138), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1031), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1130), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2237] = 4,
    ACTIONS(1274), 1,
      aux_sym__match_exec_token2,
    STATE(138), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1137), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1277), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2252] = 4,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    STATE(151), 1,
      aux_sym__match_value_repeat3,
    STATE(752), 1,
      sym__log_verbose_quoted,
    ACTIONS(1282), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2266] = 4,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    STATE(151), 1,
      aux_sym__match_value_repeat3,
    STATE(433), 1,
      sym__log_verbose_quoted,
    ACTIONS(1282), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2280] = 2,
    ACTIONS(1246), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1248), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2290] = 2,
    ACTIONS(1246), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1248), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2300] = 3,
    ACTIONS(1286), 1,
      anon_sym_COLON,
    STATE(150), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1284), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2312] = 5,
    ACTIONS(1288), 1,
      anon_sym_none,
    ACTIONS(1290), 1,
      aux_sym__proxy_jump_value_token1,
    ACTIONS(1292), 1,
      aux_sym__proxy_jump_value_token2,
    ACTIONS(1294), 1,
      aux_sym__proxy_jump_value_token3,
    STATE(304), 1,
      sym__proxy_jump_value,
  [2328] = 2,
    STATE(499), 1,
      sym__boolean,
    ACTIONS(1296), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2338] = 2,
    ACTIONS(1146), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1148), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2348] = 1,
    ACTIONS(1298), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2356] = 2,
    ACTIONS(1300), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1242), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2366] = 4,
    ACTIONS(1202), 1,
      anon_sym_DQUOTE,
    ACTIONS(1302), 1,
      aux_sym__match_exec_token3,
    STATE(149), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1305), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2380] = 3,
    ACTIONS(1311), 1,
      anon_sym_COLON,
    STATE(150), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1308), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2392] = 4,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1313), 1,
      anon_sym_COLON,
    STATE(156), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1282), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2406] = 2,
    ACTIONS(1315), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1317), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2416] = 3,
    STATE(159), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(328), 1,
      sym__log_verbose_value,
    ACTIONS(1194), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2428] = 5,
    ACTIONS(1319), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1321), 1,
      sym_token,
    ACTIONS(1323), 1,
      sym__space,
    ACTIONS(1325), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym__token_string_repeat1,
  [2444] = 2,
    STATE(517), 1,
      sym__boolean,
    ACTIONS(1327), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2454] = 4,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    ACTIONS(1329), 1,
      aux_sym__match_exec_token3,
    STATE(156), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1332), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2468] = 5,
    ACTIONS(1290), 1,
      aux_sym__proxy_jump_value_token1,
    ACTIONS(1292), 1,
      aux_sym__proxy_jump_value_token2,
    ACTIONS(1294), 1,
      aux_sym__proxy_jump_value_token3,
    ACTIONS(1335), 1,
      anon_sym_none,
    STATE(196), 1,
      sym__proxy_jump_value,
  [2484] = 2,
    ACTIONS(1339), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1337), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2494] = 3,
    ACTIONS(1341), 1,
      anon_sym_COLON,
    STATE(150), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1284), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2506] = 3,
    ACTIONS(1099), 1,
      sym__number,
    ACTIONS(1343), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(655), 2,
      sym__boolean,
      sym_time,
  [2518] = 2,
    ACTIONS(1345), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1347), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2528] = 1,
    ACTIONS(1349), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [2536] = 5,
    ACTIONS(1351), 1,
      anon_sym_DQUOTE,
    ACTIONS(1353), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1356), 1,
      aux_sym__file_token_token1,
    STATE(163), 1,
      aux_sym__match_exec_repeat2,
    STATE(276), 1,
      sym__file_token,
  [2552] = 4,
    ACTIONS(1359), 1,
      anon_sym_DQUOTE,
    ACTIONS(1361), 1,
      aux_sym__match_exec_token3,
    STATE(149), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1363), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2566] = 4,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1365), 1,
      anon_sym_COLON,
    STATE(156), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1282), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2580] = 5,
    ACTIONS(1214), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1216), 1,
      aux_sym__file_token_token1,
    ACTIONS(1367), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      aux_sym__match_exec_repeat1,
    STATE(173), 1,
      sym__file_token,
  [2596] = 5,
    ACTIONS(1369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1371), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1373), 1,
      aux_sym__file_token_token1,
    STATE(163), 1,
      aux_sym__match_exec_repeat2,
    STATE(276), 1,
      sym__file_token,
  [2612] = 5,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
    ACTIONS(1377), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1379), 1,
      aux_sym__hostname_token_token1,
    STATE(172), 1,
      aux_sym__hostname_string_repeat2,
    STATE(494), 1,
      sym__hostname_token,
  [2628] = 2,
    ACTIONS(1146), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1148), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2638] = 2,
    ACTIONS(1146), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1148), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2648] = 5,
    ACTIONS(1381), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1384), 1,
      sym_token,
    ACTIONS(1387), 1,
      sym__space,
    ACTIONS(1389), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym__token_string_repeat1,
  [2664] = 5,
    ACTIONS(1391), 1,
      anon_sym_DQUOTE,
    ACTIONS(1393), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1396), 1,
      aux_sym__hostname_token_token1,
    STATE(172), 1,
      aux_sym__hostname_string_repeat2,
    STATE(494), 1,
      sym__hostname_token,
  [2680] = 2,
    ACTIONS(1399), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1401), 3,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [2689] = 3,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1405), 2,
      sym__space,
      sym__eol,
  [2700] = 3,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1410), 2,
      sym__space,
      sym__eol,
  [2711] = 3,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1414), 2,
      sym__space,
      sym__eol,
  [2722] = 2,
    ACTIONS(1146), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1148), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2731] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1418), 2,
      sym__space,
      sym__eol,
  [2742] = 3,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1414), 2,
      sym__space,
      sym__eol,
  [2753] = 2,
    ACTIONS(1339), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1337), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2762] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1418), 2,
      sym__space,
      sym__eol,
  [2773] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1420), 2,
      sym__space,
      sym__eol,
  [2784] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1420), 2,
      sym__space,
      sym__eol,
  [2795] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(668), 1,
      sym__string,
  [2808] = 2,
    STATE(132), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1210), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [2817] = 2,
    ACTIONS(1424), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1422), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2826] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1428), 2,
      sym__space,
      sym__eol,
  [2837] = 3,
    ACTIONS(1430), 1,
      aux_sym__match_exec_token2,
    STATE(188), 1,
      aux_sym__string_repeat1,
    ACTIONS(1433), 2,
      sym__space,
      sym__eol,
  [2848] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1428), 2,
      sym__space,
      sym__eol,
  [2859] = 2,
    ACTIONS(1339), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1337), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2868] = 3,
    ACTIONS(1435), 1,
      aux_sym__match_exec_token2,
    STATE(188), 1,
      aux_sym__string_repeat1,
    ACTIONS(1437), 2,
      sym__space,
      sym__eol,
  [2879] = 3,
    ACTIONS(1441), 1,
      sym__number,
    STATE(680), 1,
      sym_number,
    ACTIONS(1439), 2,
      anon_sym_none,
      sym_ipqos,
  [2890] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1443), 2,
      sym__space,
      sym__eol,
  [2901] = 3,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1445), 2,
      sym__space,
      sym__eol,
  [2912] = 3,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1445), 2,
      sym__space,
      sym__eol,
  [2923] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1449), 2,
      sym__space,
      sym__eol,
  [2934] = 2,
    ACTIONS(1453), 1,
      anon_sym_COLON,
    ACTIONS(1451), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [2943] = 2,
    ACTIONS(1455), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1457), 2,
      aux_sym__proxy_token_token1,
      sym__eol,
  [2952] = 3,
    ACTIONS(1459), 1,
      anon_sym_DQUOTE,
    ACTIONS(1462), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1422), 2,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2963] = 3,
    ACTIONS(1465), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1467), 2,
      sym__space,
      sym__eol,
  [2974] = 3,
    ACTIONS(1469), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1471), 2,
      sym__space,
      sym__eol,
  [2985] = 2,
    STATE(143), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1473), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2994] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1477), 2,
      sym__space,
      sym__eol,
  [3005] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1479), 2,
      sym__space,
      sym__eol,
  [3016] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1477), 2,
      sym__space,
      sym__eol,
  [3027] = 3,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1483), 2,
      sym__space,
      sym__eol,
  [3038] = 3,
    ACTIONS(1469), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1485), 2,
      sym__space,
      sym__eol,
  [3049] = 3,
    ACTIONS(1465), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1487), 2,
      sym__space,
      sym__eol,
  [3060] = 3,
    ACTIONS(1489), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1492), 2,
      sym__space,
      sym__eol,
  [3071] = 3,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1494), 2,
      sym__space,
      sym__eol,
  [3082] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1496), 2,
      sym__space,
      sym__eol,
  [3093] = 3,
    ACTIONS(1152), 1,
      aux_sym__match_exec_token3,
    STATE(128), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1156), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3104] = 3,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1501), 2,
      sym__space,
      sym__eol,
  [3115] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1496), 2,
      sym__space,
      sym__eol,
  [3126] = 2,
    ACTIONS(1503), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1505), 2,
      sym_token,
      sym__eol,
  [3135] = 3,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1507), 2,
      sym__space,
      sym__eol,
  [3146] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(714), 1,
      sym__string,
  [3159] = 1,
    ACTIONS(1509), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3166] = 4,
    ACTIONS(1377), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1379), 1,
      aux_sym__hostname_token_token1,
    STATE(168), 1,
      aux_sym__hostname_string_repeat2,
    STATE(494), 1,
      sym__hostname_token,
  [3179] = 2,
    ACTIONS(1511), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1513), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [3188] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1515), 2,
      sym__space,
      sym__eol,
  [3199] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1517), 2,
      sym__space,
      sym__eol,
  [3210] = 4,
    ACTIONS(1371), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1373), 1,
      aux_sym__file_token_token1,
    STATE(167), 1,
      aux_sym__match_exec_repeat2,
    STATE(276), 1,
      sym__file_token,
  [3223] = 3,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1521), 2,
      sym__space,
      sym__eol,
  [3234] = 3,
    ACTIONS(1152), 1,
      aux_sym__match_exec_token3,
    STATE(88), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1156), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3245] = 4,
    ACTIONS(1523), 1,
      aux_sym_time_token2,
    ACTIONS(1525), 1,
      aux_sym_time_token3,
    ACTIONS(1527), 1,
      aux_sym_time_token4,
    ACTIONS(1529), 1,
      aux_sym_time_token5,
  [3258] = 1,
    ACTIONS(1410), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3265] = 3,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1531), 2,
      sym__space,
      sym__eol,
  [3276] = 2,
    ACTIONS(1535), 1,
      sym_cipher,
    ACTIONS(1533), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3285] = 3,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1537), 2,
      sym__space,
      sym__eol,
  [3296] = 3,
    ACTIONS(1539), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1542), 2,
      sym__space,
      sym__eol,
  [3307] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1544), 2,
      sym__space,
      sym__eol,
  [3318] = 3,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1546), 2,
      sym__space,
      sym__eol,
  [3329] = 3,
    ACTIONS(1548), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1551), 2,
      sym__space,
      sym__eol,
  [3340] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1553), 2,
      sym__space,
      sym__eol,
  [3351] = 3,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1555), 2,
      sym__space,
      sym__eol,
  [3362] = 3,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1557), 2,
      sym__space,
      sym__eol,
  [3373] = 3,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1559), 2,
      sym__space,
      sym__eol,
  [3384] = 3,
    ACTIONS(1561), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1564), 2,
      sym__space,
      sym__eol,
  [3395] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1566), 2,
      sym__space,
      sym__eol,
  [3406] = 3,
    ACTIONS(1568), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1571), 2,
      sym__space,
      sym__eol,
  [3417] = 3,
    ACTIONS(1280), 1,
      aux_sym__match_exec_token3,
    STATE(165), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1282), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3428] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(381), 1,
      sym__string,
  [3441] = 3,
    ACTIONS(1573), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1576), 2,
      sym__space,
      sym__eol,
  [3452] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1578), 2,
      sym__space,
      sym__eol,
  [3463] = 3,
    ACTIONS(1580), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1583), 2,
      sym__space,
      sym__eol,
  [3474] = 2,
    ACTIONS(1587), 1,
      sym_key_sig,
    ACTIONS(1585), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3483] = 3,
    ACTIONS(1589), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1592), 2,
      sym__space,
      sym__eol,
  [3494] = 2,
    ACTIONS(1596), 1,
      sym_key_sig,
    ACTIONS(1594), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3503] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(615), 1,
      sym__string,
  [3516] = 4,
    ACTIONS(1598), 1,
      aux_sym__sep_token1,
    ACTIONS(1600), 1,
      sym__space,
    ACTIONS(1602), 1,
      sym__eol,
    STATE(540), 1,
      sym__sep,
  [3529] = 3,
    ACTIONS(1441), 1,
      sym__number,
    STATE(602), 1,
      sym_number,
    ACTIONS(1604), 2,
      anon_sym_none,
      sym_ipqos,
  [3540] = 4,
    ACTIONS(1606), 1,
      aux_sym__sep_token1,
    ACTIONS(1608), 1,
      sym__space,
    ACTIONS(1610), 1,
      sym__eol,
    STATE(539), 1,
      sym__sep,
  [3553] = 2,
    ACTIONS(1614), 1,
      sym_kex,
    ACTIONS(1612), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3562] = 4,
    ACTIONS(1319), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1321), 1,
      sym_token,
    STATE(154), 1,
      aux_sym__token_string_repeat1,
    STATE(595), 1,
      sym__token_string,
  [3575] = 2,
    ACTIONS(1618), 1,
      anon_sym_COLON,
    ACTIONS(1616), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3584] = 2,
    ACTIONS(1622), 1,
      sym_mac,
    ACTIONS(1620), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3593] = 3,
    ACTIONS(1361), 1,
      aux_sym__match_exec_token3,
    STATE(164), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1363), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3604] = 3,
    ACTIONS(1624), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym__proxy_jump_repeat1,
    ACTIONS(1627), 2,
      sym__space,
      sym__eol,
  [3615] = 3,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1629), 2,
      sym__space,
      sym__eol,
  [3626] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(523), 1,
      sym__string,
  [3639] = 2,
    STATE(521), 1,
      sym__boolean,
    ACTIONS(1631), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3648] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(559), 1,
      sym__string,
  [3661] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(520), 1,
      sym__string,
  [3674] = 2,
    STATE(518), 1,
      sym__boolean,
    ACTIONS(1633), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3683] = 3,
    ACTIONS(1056), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1635), 2,
      sym__space,
      sym__eol,
  [3694] = 3,
    ACTIONS(1054), 1,
      aux_sym__match_exec_token2,
    STATE(80), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1058), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3705] = 4,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      aux_sym__match_exec_token2,
    STATE(191), 1,
      aux_sym__string_repeat1,
    STATE(516), 1,
      sym__string,
  [3718] = 2,
    ACTIONS(1639), 1,
      sym_key_sig,
    ACTIONS(1637), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3727] = 3,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1641), 2,
      sym__space,
      sym__eol,
  [3738] = 3,
    ACTIONS(1643), 1,
      anon_sym_none,
    ACTIONS(1645), 1,
      sym__number,
    STATE(665), 1,
      sym_bytes,
  [3748] = 3,
    ACTIONS(1647), 1,
      aux_sym__sep_token1,
    ACTIONS(1649), 1,
      sym__space,
    STATE(54), 1,
      sym__sep,
  [3758] = 3,
    ACTIONS(1651), 1,
      anon_sym_DQUOTE,
    ACTIONS(1653), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym__match_localnetwork_repeat2,
  [3768] = 3,
    ACTIONS(1655), 1,
      aux_sym__sep_token1,
    ACTIONS(1657), 1,
      sym__space,
    STATE(340), 1,
      sym__sep,
  [3778] = 3,
    ACTIONS(1659), 1,
      aux_sym__sep_token1,
    ACTIONS(1661), 1,
      sym__space,
    STATE(749), 1,
      sym__sep,
  [3788] = 2,
    ACTIONS(1665), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1663), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [3796] = 3,
    ACTIONS(1667), 1,
      aux_sym__sep_token1,
    ACTIONS(1669), 1,
      sym__space,
    STATE(329), 1,
      sym__sep,
  [3806] = 3,
    ACTIONS(1671), 1,
      aux_sym__sep_token1,
    ACTIONS(1673), 1,
      sym__space,
    STATE(243), 1,
      sym__sep,
  [3816] = 3,
    ACTIONS(1675), 1,
      aux_sym__sep_token1,
    ACTIONS(1677), 1,
      sym__space,
    STATE(327), 1,
      sym__sep,
  [3826] = 3,
    ACTIONS(1679), 1,
      aux_sym__sep_token1,
    ACTIONS(1681), 1,
      sym__space,
    STATE(325), 1,
      sym__sep,
  [3836] = 1,
    ACTIONS(1683), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [3842] = 3,
    ACTIONS(1685), 1,
      aux_sym__sep_token1,
    ACTIONS(1687), 1,
      sym__space,
    STATE(323), 1,
      sym__sep,
  [3852] = 2,
    STATE(510), 1,
      sym__boolean,
    ACTIONS(1689), 2,
      anon_sym_yes,
      anon_sym_no,
  [3860] = 3,
    ACTIONS(1691), 1,
      aux_sym__sep_token1,
    ACTIONS(1693), 1,
      sym__space,
    STATE(247), 1,
      sym__sep,
  [3870] = 2,
    STATE(512), 1,
      sym__boolean,
    ACTIONS(1695), 2,
      anon_sym_yes,
      anon_sym_no,
  [3878] = 3,
    ACTIONS(1697), 1,
      aux_sym__sep_token1,
    ACTIONS(1699), 1,
      sym__space,
    STATE(319), 1,
      sym__sep,
  [3888] = 3,
    ACTIONS(1701), 1,
      aux_sym__sep_token1,
    ACTIONS(1703), 1,
      sym__space,
    STATE(249), 1,
      sym__sep,
  [3898] = 2,
    STATE(515), 1,
      sym__boolean,
    ACTIONS(1705), 2,
      anon_sym_yes,
      anon_sym_no,
  [3906] = 2,
    STATE(564), 1,
      sym__boolean,
    ACTIONS(1707), 2,
      anon_sym_yes,
      anon_sym_no,
  [3914] = 3,
    ACTIONS(1709), 1,
      aux_sym__sep_token1,
    ACTIONS(1711), 1,
      sym__space,
    STATE(250), 1,
      sym__sep,
  [3924] = 3,
    ACTIONS(1441), 1,
      sym__number,
    ACTIONS(1713), 1,
      anon_sym_any,
    STATE(475), 1,
      sym_number,
  [3934] = 3,
    ACTIONS(1715), 1,
      aux_sym__sep_token1,
    ACTIONS(1717), 1,
      sym__space,
    STATE(341), 1,
      sym__sep,
  [3944] = 2,
    STATE(519), 1,
      sym__boolean,
    ACTIONS(1719), 2,
      anon_sym_yes,
      anon_sym_no,
  [3952] = 3,
    ACTIONS(1721), 1,
      aux_sym__sep_token1,
    ACTIONS(1723), 1,
      sym__space,
    STATE(750), 1,
      sym__sep,
  [3962] = 3,
    ACTIONS(1725), 1,
      aux_sym__sep_token1,
    ACTIONS(1727), 1,
      sym__space,
    STATE(83), 1,
      sym__sep,
  [3972] = 3,
    ACTIONS(1729), 1,
      aux_sym__sep_token1,
    ACTIONS(1731), 1,
      sym__space,
    STATE(345), 1,
      sym__sep,
  [3982] = 2,
    STATE(522), 1,
      sym__boolean,
    ACTIONS(1733), 2,
      anon_sym_yes,
      anon_sym_no,
  [3990] = 2,
    STATE(573), 1,
      sym__boolean,
    ACTIONS(1735), 2,
      anon_sym_yes,
      anon_sym_no,
  [3998] = 3,
    ACTIONS(1737), 1,
      sym__space,
    ACTIONS(1740), 1,
      sym__eol,
    STATE(299), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4008] = 3,
    ACTIONS(1742), 1,
      sym__space,
    ACTIONS(1745), 1,
      sym__eol,
    STATE(300), 1,
      aux_sym__set_env_repeat1,
  [4018] = 3,
    ACTIONS(1747), 1,
      sym__space,
    ACTIONS(1750), 1,
      sym__eol,
    STATE(301), 1,
      aux_sym__send_env_repeat1,
  [4028] = 2,
    STATE(574), 1,
      sym__boolean,
    ACTIONS(1752), 2,
      anon_sym_yes,
      anon_sym_no,
  [4036] = 2,
    ACTIONS(1754), 1,
      sym__number,
    ACTIONS(1756), 2,
      sym__space,
      sym__eol,
  [4044] = 1,
    ACTIONS(1758), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4050] = 2,
    STATE(577), 1,
      sym__boolean,
    ACTIONS(1760), 2,
      anon_sym_yes,
      anon_sym_no,
  [4058] = 3,
    ACTIONS(1762), 1,
      sym__space,
    ACTIONS(1764), 1,
      sym__eol,
    STATE(490), 1,
      aux_sym_host_declaration_repeat1,
  [4068] = 1,
    ACTIONS(1766), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4074] = 2,
    ACTIONS(1768), 1,
      sym__number,
    ACTIONS(1756), 2,
      sym__space,
      sym__eol,
  [4082] = 2,
    STATE(601), 1,
      sym__boolean,
    ACTIONS(1770), 2,
      anon_sym_yes,
      anon_sym_no,
  [4090] = 2,
    STATE(610), 1,
      sym__boolean,
    ACTIONS(1772), 2,
      anon_sym_yes,
      anon_sym_no,
  [4098] = 3,
    ACTIONS(1774), 1,
      aux_sym__sep_token1,
    ACTIONS(1776), 1,
      sym__space,
    STATE(166), 1,
      sym__sep,
  [4108] = 3,
    ACTIONS(1778), 1,
      aux_sym__sep_token1,
    ACTIONS(1780), 1,
      sym__space,
    STATE(542), 1,
      sym__sep,
  [4118] = 3,
    ACTIONS(1782), 1,
      aux_sym__sep_token1,
    ACTIONS(1784), 1,
      sym__space,
    STATE(106), 1,
      sym__sep,
  [4128] = 3,
    ACTIONS(1786), 1,
      aux_sym__sep_token1,
    ACTIONS(1788), 1,
      sym__space,
    STATE(105), 1,
      sym__sep,
  [4138] = 3,
    ACTIONS(1790), 1,
      aux_sym__sep_token1,
    ACTIONS(1792), 1,
      sym__space,
    STATE(104), 1,
      sym__sep,
  [4148] = 3,
    ACTIONS(1794), 1,
      aux_sym__sep_token1,
    ACTIONS(1796), 1,
      sym__space,
    STATE(103), 1,
      sym__sep,
  [4158] = 3,
    ACTIONS(1798), 1,
      aux_sym__sep_token1,
    ACTIONS(1800), 1,
      sym__space,
    STATE(102), 1,
      sym__sep,
  [4168] = 3,
    ACTIONS(1802), 1,
      sym__space,
    ACTIONS(1804), 1,
      sym__eol,
    STATE(469), 1,
      aux_sym_match_declaration_repeat1,
  [4178] = 2,
    STATE(617), 1,
      sym__boolean,
    ACTIONS(1806), 2,
      anon_sym_yes,
      anon_sym_no,
  [4186] = 1,
    ACTIONS(1592), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4192] = 3,
    ACTIONS(1808), 1,
      sym__space,
    ACTIONS(1811), 1,
      sym__eol,
    STATE(321), 1,
      aux_sym__permit_remote_open_repeat1,
  [4202] = 3,
    ACTIONS(1441), 1,
      sym__number,
    ACTIONS(1813), 1,
      anon_sym_STAR,
    STATE(783), 1,
      sym_number,
  [4212] = 2,
    STATE(619), 1,
      sym__boolean,
    ACTIONS(1815), 2,
      anon_sym_yes,
      anon_sym_no,
  [4220] = 1,
    ACTIONS(1583), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4226] = 2,
    STATE(620), 1,
      sym__boolean,
    ACTIONS(1817), 2,
      anon_sym_yes,
      anon_sym_no,
  [4234] = 3,
    ACTIONS(1819), 1,
      aux_sym__sep_token1,
    ACTIONS(1821), 1,
      sym__space,
    STATE(310), 1,
      sym__sep,
  [4244] = 2,
    STATE(623), 1,
      sym__boolean,
    ACTIONS(1823), 2,
      anon_sym_yes,
      anon_sym_no,
  [4252] = 1,
    ACTIONS(1825), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4258] = 2,
    STATE(624), 1,
      sym__boolean,
    ACTIONS(1827), 2,
      anon_sym_yes,
      anon_sym_no,
  [4266] = 3,
    ACTIONS(1829), 1,
      anon_sym_DQUOTE,
    ACTIONS(1831), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym__log_verbose_repeat2,
  [4276] = 3,
    ACTIONS(1833), 1,
      aux_sym__sep_token1,
    ACTIONS(1835), 1,
      sym__space,
    STATE(47), 1,
      sym__sep,
  [4286] = 3,
    ACTIONS(1837), 1,
      aux_sym__sep_token1,
    ACTIONS(1839), 1,
      sym__space,
    STATE(61), 1,
      sym__sep,
  [4296] = 2,
    ACTIONS(1841), 1,
      sym__number,
    ACTIONS(1756), 2,
      sym__space,
      sym__eol,
  [4304] = 1,
    ACTIONS(1571), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4310] = 3,
    ACTIONS(1843), 1,
      aux_sym__sep_token1,
    ACTIONS(1845), 1,
      sym__space,
    STATE(155), 1,
      sym__sep,
  [4320] = 3,
    ACTIONS(1847), 1,
      sym__space,
    ACTIONS(1849), 1,
      sym__eol,
    STATE(480), 1,
      aux_sym__canonical_domains_repeat1,
  [4330] = 3,
    ACTIONS(1851), 1,
      sym__space,
    ACTIONS(1854), 1,
      sym__eol,
    STATE(337), 1,
      aux_sym__ignore_unknown_repeat1,
  [4340] = 3,
    ACTIONS(1856), 1,
      aux_sym__sep_token1,
    ACTIONS(1858), 1,
      sym__space,
    STATE(129), 1,
      sym__sep,
  [4350] = 3,
    ACTIONS(1860), 1,
      aux_sym__sep_token1,
    ACTIONS(1862), 1,
      sym__space,
    STATE(121), 1,
      sym__sep,
  [4360] = 2,
    STATE(627), 1,
      sym__boolean,
    ACTIONS(1864), 2,
      anon_sym_yes,
      anon_sym_no,
  [4368] = 2,
    STATE(638), 1,
      sym__boolean,
    ACTIONS(1866), 2,
      anon_sym_yes,
      anon_sym_no,
  [4376] = 3,
    ACTIONS(1868), 1,
      sym__space,
    ACTIONS(1870), 1,
      sym__eol,
    STATE(482), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4386] = 3,
    ACTIONS(1872), 1,
      anon_sym_COMMA,
    ACTIONS(1874), 1,
      anon_sym_COLON,
    STATE(487), 1,
      aux_sym__cnames_map_repeat1,
  [4396] = 1,
    ACTIONS(1564), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4402] = 2,
    STATE(641), 1,
      sym__boolean,
    ACTIONS(1876), 2,
      anon_sym_yes,
      anon_sym_no,
  [4410] = 2,
    STATE(646), 1,
      sym__boolean,
    ACTIONS(1878), 2,
      anon_sym_yes,
      anon_sym_no,
  [4418] = 3,
    ACTIONS(1880), 1,
      sym__space,
    ACTIONS(1883), 1,
      sym__eol,
    STATE(347), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4428] = 3,
    ACTIONS(1885), 1,
      sym__space,
    ACTIONS(1888), 1,
      sym__eol,
    STATE(348), 1,
      aux_sym__dynamic_forward_repeat1,
  [4438] = 1,
    ACTIONS(1890), 3,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [4444] = 3,
    ACTIONS(1892), 1,
      anon_sym_DQUOTE,
    ACTIONS(1894), 1,
      aux_sym__match_exec_token3,
    STATE(350), 1,
      aux_sym__string_repeat2,
  [4454] = 1,
    ACTIONS(1897), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [4460] = 2,
    STATE(648), 1,
      sym__boolean,
    ACTIONS(1899), 2,
      anon_sym_yes,
      anon_sym_no,
  [4468] = 3,
    ACTIONS(1901), 1,
      anon_sym_DQUOTE,
    ACTIONS(1903), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym__log_verbose_repeat2,
  [4478] = 1,
    ACTIONS(1551), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4484] = 3,
    ACTIONS(1906), 1,
      aux_sym__sep_token1,
    ACTIONS(1908), 1,
      sym__space,
    STATE(754), 1,
      sym__sep,
  [4494] = 3,
    ACTIONS(1910), 1,
      aux_sym__sep_token1,
    ACTIONS(1912), 1,
      sym__space,
    STATE(252), 1,
      sym__sep,
  [4504] = 3,
    ACTIONS(1914), 1,
      aux_sym__sep_token1,
    ACTIONS(1916), 1,
      sym__space,
    STATE(309), 1,
      sym__sep,
  [4514] = 2,
    STATE(660), 1,
      sym__boolean,
    ACTIONS(1918), 2,
      anon_sym_yes,
      anon_sym_no,
  [4522] = 1,
    ACTIONS(1542), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4528] = 2,
    STATE(661), 1,
      sym__boolean,
    ACTIONS(1920), 2,
      anon_sym_yes,
      anon_sym_no,
  [4536] = 3,
    ACTIONS(1410), 1,
      anon_sym_COLON,
    ACTIONS(1922), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym__cnames_map_repeat1,
  [4546] = 3,
    ACTIONS(1925), 1,
      aux_sym__sep_token1,
    ACTIONS(1927), 1,
      sym__space,
    STATE(254), 1,
      sym__sep,
  [4556] = 2,
    STATE(664), 1,
      sym__boolean,
    ACTIONS(1929), 2,
      anon_sym_yes,
      anon_sym_no,
  [4564] = 2,
    ACTIONS(1933), 1,
      sym_sig,
    ACTIONS(1931), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4572] = 3,
    ACTIONS(1935), 1,
      sym__space,
    ACTIONS(1937), 1,
      sym__eol,
    STATE(458), 1,
      aux_sym__dynamic_forward_repeat1,
  [4582] = 3,
    ACTIONS(1939), 1,
      sym__space,
    ACTIONS(1942), 1,
      sym__eol,
    STATE(366), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4592] = 3,
    ACTIONS(932), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1437), 1,
      anon_sym_COLON,
    STATE(461), 1,
      aux_sym__string_repeat1,
  [4602] = 3,
    ACTIONS(1944), 1,
      sym__space,
    ACTIONS(1947), 1,
      sym__eol,
    STATE(368), 1,
      aux_sym__canonical_domains_repeat1,
  [4612] = 3,
    ACTIONS(1525), 1,
      aux_sym_time_token3,
    ACTIONS(1527), 1,
      aux_sym_time_token4,
    ACTIONS(1529), 1,
      aux_sym_time_token5,
  [4622] = 3,
    ACTIONS(1441), 1,
      sym__number,
    ACTIONS(1949), 1,
      anon_sym_STAR,
    STATE(425), 1,
      sym_number,
  [4632] = 3,
    ACTIONS(1951), 1,
      sym__space,
    ACTIONS(1954), 1,
      sym__eol,
    STATE(371), 1,
      aux_sym_match_declaration_repeat1,
  [4642] = 3,
    ACTIONS(1956), 1,
      aux_sym__sep_token1,
    ACTIONS(1958), 1,
      sym__space,
    STATE(79), 1,
      sym__sep,
  [4652] = 3,
    ACTIONS(1960), 1,
      aux_sym__sep_token1,
    ACTIONS(1962), 1,
      sym__space,
    STATE(255), 1,
      sym__sep,
  [4662] = 3,
    ACTIONS(1964), 1,
      aux_sym__sep_token1,
    ACTIONS(1966), 1,
      sym__space,
    STATE(42), 1,
      sym__sep,
  [4672] = 3,
    ACTIONS(1968), 1,
      aux_sym__sep_token1,
    ACTIONS(1970), 1,
      sym__space,
    STATE(785), 1,
      sym__sep,
  [4682] = 2,
    STATE(679), 1,
      sym__boolean,
    ACTIONS(1972), 2,
      anon_sym_yes,
      anon_sym_no,
  [4690] = 2,
    STATE(681), 1,
      sym__boolean,
    ACTIONS(1974), 2,
      anon_sym_yes,
      anon_sym_no,
  [4698] = 3,
    ACTIONS(1976), 1,
      aux_sym__sep_token1,
    ACTIONS(1978), 1,
      sym__space,
    STATE(107), 1,
      sym__sep,
  [4708] = 2,
    STATE(685), 1,
      sym__boolean,
    ACTIONS(1980), 2,
      anon_sym_yes,
      anon_sym_no,
  [4716] = 3,
    ACTIONS(1982), 1,
      aux_sym__sep_token1,
    ACTIONS(1984), 1,
      sym__space,
    STATE(257), 1,
      sym__sep,
  [4726] = 3,
    ACTIONS(1986), 1,
      sym__space,
    ACTIONS(1988), 1,
      sym__eol,
    STATE(464), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4736] = 3,
    ACTIONS(1990), 1,
      sym__space,
    ACTIONS(1993), 1,
      sym__eol,
    STATE(382), 1,
      aux_sym_host_declaration_repeat1,
  [4746] = 3,
    ACTIONS(1995), 1,
      aux_sym__sep_token1,
    ACTIONS(1997), 1,
      sym__space,
    STATE(305), 1,
      sym__sep,
  [4756] = 3,
    ACTIONS(1999), 1,
      aux_sym__sep_token1,
    ACTIONS(2001), 1,
      sym__space,
    STATE(746), 1,
      sym__sep,
  [4766] = 3,
    ACTIONS(2003), 1,
      aux_sym__sep_token1,
    ACTIONS(2005), 1,
      sym__space,
    STATE(302), 1,
      sym__sep,
  [4776] = 2,
    ACTIONS(2009), 1,
      anon_sym_inet,
    ACTIONS(2007), 2,
      anon_sym_any,
      anon_sym_inet6,
  [4784] = 3,
    ACTIONS(2011), 1,
      aux_sym__sep_token1,
    ACTIONS(2013), 1,
      sym__space,
    STATE(298), 1,
      sym__sep,
  [4794] = 3,
    ACTIONS(2015), 1,
      aux_sym__sep_token1,
    ACTIONS(2017), 1,
      sym__space,
    STATE(90), 1,
      sym__sep,
  [4804] = 3,
    ACTIONS(2019), 1,
      aux_sym__sep_token1,
    ACTIONS(2021), 1,
      sym__space,
    STATE(346), 1,
      sym__sep,
  [4814] = 3,
    ACTIONS(2023), 1,
      aux_sym__sep_token1,
    ACTIONS(2025), 1,
      sym__space,
    STATE(263), 1,
      sym__sep,
  [4824] = 3,
    ACTIONS(2027), 1,
      aux_sym__sep_token1,
    ACTIONS(2029), 1,
      sym__space,
    STATE(352), 1,
      sym__sep,
  [4834] = 3,
    ACTIONS(2031), 1,
      aux_sym__sep_token1,
    ACTIONS(2033), 1,
      sym__space,
    STATE(58), 1,
      sym__sep,
  [4844] = 3,
    ACTIONS(2035), 1,
      aux_sym__sep_token1,
    ACTIONS(2037), 1,
      sym__space,
    STATE(744), 1,
      sym__sep,
  [4854] = 3,
    ACTIONS(2039), 1,
      aux_sym__sep_token1,
    ACTIONS(2041), 1,
      sym__space,
    STATE(786), 1,
      sym__sep,
  [4864] = 3,
    ACTIONS(2043), 1,
      aux_sym__sep_token1,
    ACTIONS(2045), 1,
      sym__space,
    STATE(50), 1,
      sym__sep,
  [4874] = 3,
    ACTIONS(2047), 1,
      sym__space,
    ACTIONS(2049), 1,
      sym__eol,
    STATE(382), 1,
      aux_sym_host_declaration_repeat1,
  [4884] = 3,
    ACTIONS(2051), 1,
      aux_sym__sep_token1,
    ACTIONS(2053), 1,
      sym__space,
    STATE(123), 1,
      sym__sep,
  [4894] = 3,
    ACTIONS(2055), 1,
      aux_sym__sep_token1,
    ACTIONS(2057), 1,
      sym__space,
    STATE(157), 1,
      sym__sep,
  [4904] = 3,
    ACTIONS(2059), 1,
      aux_sym__sep_token1,
    ACTIONS(2061), 1,
      sym__space,
    STATE(289), 1,
      sym__sep,
  [4914] = 3,
    ACTIONS(2063), 1,
      sym__space,
    ACTIONS(2065), 1,
      sym__eol,
    STATE(299), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4924] = 3,
    ACTIONS(2067), 1,
      aux_sym__sep_token1,
    ACTIONS(2069), 1,
      sym__space,
    STATE(269), 1,
      sym__sep,
  [4934] = 3,
    ACTIONS(2071), 1,
      sym__space,
    ACTIONS(2073), 1,
      sym__eol,
    STATE(447), 1,
      aux_sym__ignore_unknown_repeat1,
  [4944] = 3,
    ACTIONS(1441), 1,
      sym__number,
    ACTIONS(2075), 1,
      anon_sym_any,
    STATE(717), 1,
      sym_number,
  [4954] = 3,
    ACTIONS(2077), 1,
      sym__space,
    ACTIONS(2079), 1,
      sym__eol,
    STATE(300), 1,
      aux_sym__set_env_repeat1,
  [4964] = 3,
    ACTIONS(2081), 1,
      aux_sym__sep_token1,
    ACTIONS(2083), 1,
      sym__space,
    STATE(160), 1,
      sym__sep,
  [4974] = 3,
    ACTIONS(2085), 1,
      aux_sym__sep_token1,
    ACTIONS(2087), 1,
      sym__space,
    STATE(125), 1,
      sym__sep,
  [4984] = 3,
    ACTIONS(2089), 1,
      aux_sym__sep_token1,
    ACTIONS(2091), 1,
      sym__space,
    STATE(118), 1,
      sym__sep,
  [4994] = 3,
    ACTIONS(2093), 1,
      sym__space,
    ACTIONS(2095), 1,
      sym__eol,
    STATE(301), 1,
      aux_sym__send_env_repeat1,
  [5004] = 3,
    ACTIONS(2097), 1,
      aux_sym__sep_token1,
    ACTIONS(2099), 1,
      sym__space,
    STATE(271), 1,
      sym__sep,
  [5014] = 3,
    ACTIONS(2101), 1,
      aux_sym__sep_token1,
    ACTIONS(2103), 1,
      sym__space,
    STATE(131), 1,
      sym__sep,
  [5024] = 3,
    ACTIONS(1653), 1,
      anon_sym_COMMA,
    ACTIONS(2105), 1,
      anon_sym_DQUOTE,
    STATE(435), 1,
      aux_sym__match_localnetwork_repeat2,
  [5034] = 3,
    ACTIONS(2107), 1,
      aux_sym__sep_token1,
    ACTIONS(2109), 1,
      sym__space,
    STATE(41), 1,
      sym__sep,
  [5044] = 3,
    ACTIONS(2111), 1,
      aux_sym__sep_token1,
    ACTIONS(2113), 1,
      sym__space,
    STATE(145), 1,
      sym__sep,
  [5054] = 1,
    ACTIONS(1501), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5060] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    ACTIONS(2115), 1,
      anon_sym_DQUOTE,
    STATE(437), 1,
      aux_sym__match_value_repeat4,
  [5070] = 3,
    ACTIONS(2117), 1,
      aux_sym__sep_token1,
    ACTIONS(2119), 1,
      sym__space,
    STATE(755), 1,
      sym__sep,
  [5080] = 3,
    ACTIONS(2121), 1,
      aux_sym__sep_token1,
    ACTIONS(2123), 1,
      sym__space,
    STATE(735), 1,
      sym__sep,
  [5090] = 3,
    ACTIONS(2125), 1,
      aux_sym__sep_token1,
    ACTIONS(2127), 1,
      sym__space,
    STATE(73), 1,
      sym__sep,
  [5100] = 3,
    ACTIONS(2129), 1,
      aux_sym__sep_token1,
    ACTIONS(2131), 1,
      sym__space,
    STATE(756), 1,
      sym__sep,
  [5110] = 3,
    ACTIONS(2133), 1,
      sym__space,
    ACTIONS(2135), 1,
      sym__eol,
    STATE(321), 1,
      aux_sym__permit_remote_open_repeat1,
  [5120] = 3,
    ACTIONS(2137), 1,
      aux_sym__sep_token1,
    ACTIONS(2139), 1,
      sym__space,
    STATE(89), 1,
      sym__sep,
  [5130] = 3,
    ACTIONS(2141), 1,
      aux_sym_time_token3,
    ACTIONS(2143), 1,
      aux_sym_time_token4,
    ACTIONS(2145), 1,
      aux_sym_time_token5,
  [5140] = 3,
    ACTIONS(1441), 1,
      sym__number,
    ACTIONS(2147), 1,
      anon_sym_STAR,
    STATE(700), 1,
      sym_number,
  [5150] = 3,
    ACTIONS(1441), 1,
      sym__number,
    ACTIONS(2149), 1,
      anon_sym_STAR,
    STATE(626), 1,
      sym_number,
  [5160] = 1,
    ACTIONS(2151), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5166] = 1,
    ACTIONS(2153), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5172] = 3,
    ACTIONS(2155), 1,
      aux_sym__sep_token1,
    ACTIONS(2157), 1,
      sym__space,
    STATE(133), 1,
      sym__sep,
  [5182] = 3,
    ACTIONS(2159), 1,
      aux_sym__sep_token1,
    ACTIONS(2161), 1,
      sym__space,
    STATE(358), 1,
      sym__sep,
  [5192] = 3,
    ACTIONS(2163), 1,
      aux_sym__sep_token1,
    ACTIONS(2165), 1,
      sym__space,
    STATE(360), 1,
      sym__sep,
  [5202] = 3,
    ACTIONS(2167), 1,
      aux_sym__sep_token1,
    ACTIONS(2169), 1,
      sym__space,
    STATE(731), 1,
      sym__sep,
  [5212] = 3,
    ACTIONS(2171), 1,
      aux_sym__sep_token1,
    ACTIONS(2173), 1,
      sym__space,
    STATE(730), 1,
      sym__sep,
  [5222] = 3,
    ACTIONS(2133), 1,
      sym__space,
    ACTIONS(2175), 1,
      sym__eol,
    STATE(420), 1,
      aux_sym__permit_remote_open_repeat1,
  [5232] = 3,
    ACTIONS(1831), 1,
      anon_sym_COMMA,
    ACTIONS(2177), 1,
      anon_sym_DQUOTE,
    STATE(330), 1,
      aux_sym__log_verbose_repeat2,
  [5242] = 3,
    ACTIONS(2179), 1,
      aux_sym__sep_token1,
    ACTIONS(2181), 1,
      sym__space,
    STATE(100), 1,
      sym__sep,
  [5252] = 3,
    ACTIONS(2183), 1,
      anon_sym_DQUOTE,
    ACTIONS(2185), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      aux_sym__match_localnetwork_repeat2,
  [5262] = 3,
    ACTIONS(2188), 1,
      aux_sym__sep_token1,
    ACTIONS(2190), 1,
      sym__space,
    STATE(229), 1,
      sym__sep,
  [5272] = 3,
    ACTIONS(2192), 1,
      anon_sym_DQUOTE,
    ACTIONS(2194), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym__match_value_repeat4,
  [5282] = 3,
    ACTIONS(2197), 1,
      aux_sym__sep_token1,
    ACTIONS(2199), 1,
      sym__space,
    STATE(729), 1,
      sym__sep,
  [5292] = 3,
    ACTIONS(2201), 1,
      aux_sym__sep_token1,
    ACTIONS(2203), 1,
      sym__space,
    STATE(283), 1,
      sym__sep,
  [5302] = 2,
    ACTIONS(2205), 1,
      sym__number,
    ACTIONS(2207), 2,
      sym__space,
      sym__eol,
  [5310] = 1,
    ACTIONS(2209), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5316] = 2,
    ACTIONS(2211), 1,
      sym__number,
    ACTIONS(2207), 2,
      sym__space,
      sym__eol,
  [5324] = 2,
    ACTIONS(2213), 1,
      sym__number,
    ACTIONS(2215), 2,
      sym__space,
      sym__eol,
  [5332] = 3,
    ACTIONS(2217), 1,
      aux_sym__sep_token1,
    ACTIONS(2219), 1,
      sym__space,
    STATE(363), 1,
      sym__sep,
  [5342] = 3,
    ACTIONS(2221), 1,
      aux_sym__sep_token1,
    ACTIONS(2223), 1,
      sym__space,
    STATE(51), 1,
      sym__sep,
  [5352] = 1,
    ACTIONS(1240), 3,
      aux_sym__match_exec_token2,
      sym__space,
      sym__eol,
  [5358] = 3,
    ACTIONS(2071), 1,
      sym__space,
    ACTIONS(2225), 1,
      sym__eol,
    STATE(337), 1,
      aux_sym__ignore_unknown_repeat1,
  [5368] = 2,
    ACTIONS(2227), 1,
      aux_sym_bytes_token1,
    ACTIONS(2229), 2,
      sym__space,
      sym__eol,
  [5376] = 3,
    ACTIONS(2231), 1,
      aux_sym__sep_token1,
    ACTIONS(2233), 1,
      sym__space,
    STATE(364), 1,
      sym__sep,
  [5386] = 3,
    ACTIONS(2235), 1,
      aux_sym__sep_token1,
    ACTIONS(2237), 1,
      sym__space,
    STATE(281), 1,
      sym__sep,
  [5396] = 3,
    ACTIONS(2239), 1,
      aux_sym__sep_token1,
    ACTIONS(2241), 1,
      sym__space,
    STATE(288), 1,
      sym__sep,
  [5406] = 3,
    ACTIONS(2243), 1,
      aux_sym__sep_token1,
    ACTIONS(2245), 1,
      sym__space,
    STATE(63), 1,
      sym__sep,
  [5416] = 3,
    ACTIONS(2247), 1,
      aux_sym__sep_token1,
    ACTIONS(2249), 1,
      sym__space,
    STATE(790), 1,
      sym__sep,
  [5426] = 3,
    ACTIONS(2251), 1,
      aux_sym__sep_token1,
    ACTIONS(2253), 1,
      sym__space,
    STATE(759), 1,
      sym__sep,
  [5436] = 3,
    ACTIONS(2255), 1,
      anon_sym_DQUOTE,
    ACTIONS(2257), 1,
      aux_sym__match_exec_token3,
    STATE(350), 1,
      aux_sym__string_repeat2,
  [5446] = 3,
    ACTIONS(2259), 1,
      aux_sym__sep_token1,
    ACTIONS(2261), 1,
      sym__space,
    STATE(135), 1,
      sym__sep,
  [5456] = 3,
    ACTIONS(2263), 1,
      aux_sym__sep_token1,
    ACTIONS(2265), 1,
      sym__space,
    STATE(268), 1,
      sym__sep,
  [5466] = 3,
    ACTIONS(1935), 1,
      sym__space,
    ACTIONS(2267), 1,
      sym__eol,
    STATE(348), 1,
      aux_sym__dynamic_forward_repeat1,
  [5476] = 3,
    ACTIONS(2269), 1,
      aux_sym__sep_token1,
    ACTIONS(2271), 1,
      sym__space,
    STATE(376), 1,
      sym__sep,
  [5486] = 3,
    ACTIONS(2093), 1,
      sym__space,
    ACTIONS(2273), 1,
      sym__eol,
    STATE(408), 1,
      aux_sym__send_env_repeat1,
  [5496] = 3,
    ACTIONS(1433), 1,
      anon_sym_COLON,
    ACTIONS(2275), 1,
      aux_sym__match_exec_token2,
    STATE(461), 1,
      aux_sym__string_repeat1,
  [5506] = 3,
    ACTIONS(2278), 1,
      aux_sym__sep_token1,
    ACTIONS(2280), 1,
      sym__space,
    STATE(285), 1,
      sym__sep,
  [5516] = 3,
    ACTIONS(2282), 1,
      aux_sym__sep_token1,
    ACTIONS(2284), 1,
      sym__space,
    STATE(377), 1,
      sym__sep,
  [5526] = 3,
    ACTIONS(1986), 1,
      sym__space,
    ACTIONS(2286), 1,
      sym__eol,
    STATE(347), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5536] = 3,
    ACTIONS(2288), 1,
      aux_sym__sep_token1,
    ACTIONS(2290), 1,
      sym__space,
    STATE(110), 1,
      sym__sep,
  [5546] = 3,
    ACTIONS(2077), 1,
      sym__space,
    ACTIONS(2292), 1,
      sym__eol,
    STATE(404), 1,
      aux_sym__set_env_repeat1,
  [5556] = 3,
    ACTIONS(2294), 1,
      aux_sym__sep_token1,
    ACTIONS(2296), 1,
      sym__space,
    STATE(261), 1,
      sym__sep,
  [5566] = 3,
    ACTIONS(2298), 1,
      aux_sym__sep_token1,
    ACTIONS(2300), 1,
      sym__space,
    STATE(297), 1,
      sym__sep,
  [5576] = 3,
    ACTIONS(916), 1,
      sym__eol,
    ACTIONS(2302), 1,
      sym__space,
    STATE(371), 1,
      aux_sym_match_declaration_repeat1,
  [5586] = 3,
    ACTIONS(2304), 1,
      aux_sym__sep_token1,
    ACTIONS(2306), 1,
      sym__space,
    STATE(788), 1,
      sym__sep,
  [5596] = 3,
    ACTIONS(2308), 1,
      aux_sym__sep_token1,
    ACTIONS(2310), 1,
      sym__space,
    STATE(111), 1,
      sym__sep,
  [5606] = 2,
    ACTIONS(2312), 1,
      sym__number,
    ACTIONS(2314), 2,
      sym__space,
      sym__eol,
  [5614] = 2,
    ACTIONS(2316), 1,
      sym__number,
    ACTIONS(2314), 2,
      sym__space,
      sym__eol,
  [5622] = 2,
    ACTIONS(2318), 1,
      sym__number,
    ACTIONS(2314), 2,
      sym__space,
      sym__eol,
  [5630] = 2,
    ACTIONS(2320), 1,
      anon_sym_COLON,
    ACTIONS(2322), 2,
      sym__space,
      sym__eol,
  [5638] = 2,
    ACTIONS(2324), 1,
      sym__number,
    ACTIONS(2314), 2,
      sym__space,
      sym__eol,
  [5646] = 3,
    ACTIONS(2326), 1,
      aux_sym__sep_token1,
    ACTIONS(2328), 1,
      sym__space,
    STATE(113), 1,
      sym__sep,
  [5656] = 3,
    ACTIONS(2330), 1,
      aux_sym__sep_token1,
    ACTIONS(2332), 1,
      sym__space,
    STATE(262), 1,
      sym__sep,
  [5666] = 3,
    ACTIONS(2063), 1,
      sym__space,
    ACTIONS(2334), 1,
      sym__eol,
    STATE(400), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5676] = 3,
    ACTIONS(1847), 1,
      sym__space,
    ACTIONS(2336), 1,
      sym__eol,
    STATE(368), 1,
      aux_sym__canonical_domains_repeat1,
  [5686] = 3,
    ACTIONS(2338), 1,
      aux_sym__sep_token1,
    ACTIONS(2340), 1,
      sym__space,
    STATE(53), 1,
      sym__sep,
  [5696] = 3,
    ACTIONS(1868), 1,
      sym__space,
    ACTIONS(2342), 1,
      sym__eol,
    STATE(366), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5706] = 3,
    ACTIONS(2344), 1,
      aux_sym__sep_token1,
    ACTIONS(2346), 1,
      sym__space,
    STATE(264), 1,
      sym__sep,
  [5716] = 3,
    ACTIONS(2348), 1,
      aux_sym__sep_token1,
    ACTIONS(2350), 1,
      sym__space,
    STATE(293), 1,
      sym__sep,
  [5726] = 3,
    ACTIONS(2352), 1,
      sym__space,
    ACTIONS(2354), 1,
      sym__eol,
    STATE(396), 1,
      aux_sym_host_declaration_repeat1,
  [5736] = 3,
    ACTIONS(2356), 1,
      aux_sym__sep_token1,
    ACTIONS(2358), 1,
      sym__space,
    STATE(379), 1,
      sym__sep,
  [5746] = 3,
    ACTIONS(1872), 1,
      anon_sym_COMMA,
    ACTIONS(2360), 1,
      anon_sym_COLON,
    STATE(361), 1,
      aux_sym__cnames_map_repeat1,
  [5756] = 3,
    ACTIONS(2362), 1,
      aux_sym__sep_token1,
    ACTIONS(2364), 1,
      sym__space,
    STATE(386), 1,
      sym__sep,
  [5766] = 3,
    ACTIONS(2366), 1,
      aux_sym__sep_token1,
    ACTIONS(2368), 1,
      sym__space,
    STATE(75), 1,
      sym__sep,
  [5776] = 3,
    ACTIONS(2370), 1,
      sym__space,
    ACTIONS(2372), 1,
      sym__eol,
    STATE(382), 1,
      aux_sym_host_declaration_repeat1,
  [5786] = 3,
    ACTIONS(2374), 1,
      aux_sym__sep_token1,
    ACTIONS(2376), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [5796] = 3,
    ACTIONS(2378), 1,
      aux_sym__sep_token1,
    ACTIONS(2380), 1,
      sym__space,
    STATE(265), 1,
      sym__sep,
  [5806] = 3,
    ACTIONS(2382), 1,
      aux_sym__sep_token1,
    ACTIONS(2384), 1,
      sym__space,
    STATE(291), 1,
      sym__sep,
  [5816] = 2,
    ACTIONS(2388), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2386), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [5824] = 1,
    ACTIONS(2390), 2,
      sym__space,
      sym__eol,
  [5829] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5834] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5839] = 2,
    ACTIONS(2394), 1,
      sym__space,
    ACTIONS(2396), 1,
      sym__eol,
  [5846] = 1,
    ACTIONS(2398), 2,
      sym__space,
      sym__eol,
  [5851] = 1,
    ACTIONS(2400), 2,
      sym__space,
      sym__eol,
  [5856] = 1,
    ACTIONS(2402), 2,
      sym__space,
      sym__eol,
  [5861] = 1,
    ACTIONS(2404), 2,
      sym__space,
      sym__eol,
  [5866] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5871] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [5876] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5881] = 1,
    ACTIONS(2410), 2,
      sym__space,
      sym__eol,
  [5886] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [5891] = 1,
    ACTIONS(2414), 2,
      sym__space,
      sym__eol,
  [5896] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5901] = 1,
    ACTIONS(2416), 2,
      sym__space,
      sym__eol,
  [5906] = 1,
    ACTIONS(2418), 2,
      sym__space,
      sym__eol,
  [5911] = 1,
    ACTIONS(2420), 2,
      sym__space,
      sym__eol,
  [5916] = 1,
    ACTIONS(2422), 2,
      sym__space,
      sym__eol,
  [5921] = 1,
    ACTIONS(2424), 2,
      sym__space,
      sym__eol,
  [5926] = 1,
    ACTIONS(2426), 2,
      sym__space,
      sym__eol,
  [5931] = 1,
    ACTIONS(2428), 2,
      sym__space,
      sym__eol,
  [5936] = 1,
    ACTIONS(2430), 2,
      sym__space,
      sym__eol,
  [5941] = 1,
    ACTIONS(2432), 2,
      sym__space,
      sym__eol,
  [5946] = 1,
    ACTIONS(2434), 2,
      sym__space,
      sym__eol,
  [5951] = 1,
    ACTIONS(2436), 2,
      sym__space,
      sym__eol,
  [5956] = 1,
    ACTIONS(2438), 2,
      sym__space,
      sym__eol,
  [5961] = 1,
    ACTIONS(2440), 2,
      sym__space,
      sym__eol,
  [5966] = 1,
    ACTIONS(2442), 2,
      sym__space,
      sym__eol,
  [5971] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5976] = 1,
    ACTIONS(2444), 2,
      sym__space,
      sym__eol,
  [5981] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5986] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5991] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5996] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6001] = 1,
    ACTIONS(2446), 2,
      sym__space,
      sym__eol,
  [6006] = 1,
    ACTIONS(2446), 2,
      sym__space,
      sym__eol,
  [6011] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6016] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6021] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6026] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6031] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6036] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6041] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6046] = 2,
    ACTIONS(2450), 1,
      aux_sym__all_token1,
    STATE(621), 1,
      sym__all,
  [6053] = 2,
    ACTIONS(2452), 1,
      aux_sym__all_token1,
    STATE(622), 1,
      sym__all,
  [6060] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6065] = 2,
    ACTIONS(2454), 1,
      anon_sym_DQUOTE,
    ACTIONS(2456), 1,
      aux_sym__match_localnetwork_token2,
  [6072] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6077] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6082] = 2,
    ACTIONS(834), 1,
      sym__space,
    ACTIONS(836), 1,
      sym__eol,
  [6089] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6094] = 1,
    ACTIONS(2458), 2,
      sym__space,
      sym__eol,
  [6099] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6104] = 2,
    ACTIONS(1099), 1,
      sym__number,
    STATE(640), 1,
      sym_time,
  [6111] = 1,
    ACTIONS(2314), 2,
      sym__space,
      sym__eol,
  [6116] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6121] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6126] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6131] = 1,
    ACTIONS(2460), 2,
      anon_sym_DQUOTE,
      aux_sym__match_exec_token3,
  [6136] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6141] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(349), 1,
      sym_number,
  [6148] = 1,
    ACTIONS(2462), 2,
      sym__space,
      sym__eol,
  [6153] = 1,
    ACTIONS(2464), 2,
      sym__space,
      sym__eol,
  [6158] = 1,
    ACTIONS(2466), 2,
      sym__space,
      sym__eol,
  [6163] = 1,
    ACTIONS(2468), 2,
      sym__space,
      sym__eol,
  [6168] = 1,
    ACTIONS(2470), 2,
      sym__space,
      sym__eol,
  [6173] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6178] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6183] = 1,
    ACTIONS(2472), 2,
      sym__space,
      sym__eol,
  [6188] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6193] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6198] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6203] = 1,
    ACTIONS(2474), 2,
      sym__space,
      sym__eol,
  [6208] = 1,
    ACTIONS(2476), 2,
      sym__space,
      sym__eol,
  [6213] = 1,
    ACTIONS(2478), 2,
      sym__space,
      sym__eol,
  [6218] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6223] = 1,
    ACTIONS(2482), 2,
      aux_sym__match_localnetwork_token3,
      anon_sym_STAR,
  [6228] = 1,
    ACTIONS(2484), 2,
      sym__space,
      sym__eol,
  [6233] = 1,
    ACTIONS(2486), 2,
      sym__space,
      sym__eol,
  [6238] = 1,
    ACTIONS(2488), 2,
      sym__space,
      sym__eol,
  [6243] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6248] = 1,
    ACTIONS(2490), 2,
      sym__space,
      sym__eol,
  [6253] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6258] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6263] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6268] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6273] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6278] = 1,
    ACTIONS(2492), 2,
      sym__space,
      sym__eol,
  [6283] = 1,
    ACTIONS(2494), 2,
      sym__space,
      sym__eol,
  [6288] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6293] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(307), 1,
      sym_number,
  [6300] = 1,
    ACTIONS(2496), 2,
      sym__space,
      sym__eol,
  [6305] = 1,
    ACTIONS(2498), 2,
      sym__space,
      sym__eol,
  [6310] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6315] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6320] = 1,
    ACTIONS(2502), 2,
      sym__space,
      sym__eol,
  [6325] = 2,
    ACTIONS(1099), 1,
      sym__number,
    STATE(710), 1,
      sym_time,
  [6332] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6337] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6342] = 1,
    ACTIONS(2504), 2,
      sym__space,
      sym__eol,
  [6347] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6352] = 1,
    ACTIONS(2506), 2,
      sym__space,
      sym__eol,
  [6357] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6362] = 1,
    ACTIONS(2215), 2,
      sym__space,
      sym__eol,
  [6367] = 2,
    ACTIONS(2508), 1,
      sym__var_name,
    STATE(715), 1,
      sym__set_env_value,
  [6374] = 1,
    ACTIONS(2510), 2,
      sym__space,
      sym__eol,
  [6379] = 2,
    ACTIONS(2512), 1,
      sym__space,
    ACTIONS(2514), 1,
      sym__eol,
  [6386] = 1,
    ACTIONS(2516), 2,
      sym__space,
      sym__eol,
  [6391] = 1,
    ACTIONS(2518), 2,
      sym__space,
      sym__eol,
  [6396] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6401] = 1,
    ACTIONS(2520), 2,
      sym__space,
      sym__eol,
  [6406] = 1,
    ACTIONS(2522), 2,
      sym__space,
      sym__eol,
  [6411] = 1,
    ACTIONS(2524), 2,
      sym__space,
      sym__eol,
  [6416] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6421] = 1,
    ACTIONS(2526), 2,
      sym__space,
      sym__eol,
  [6426] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6431] = 1,
    ACTIONS(2528), 2,
      sym__space,
      sym__eol,
  [6436] = 1,
    ACTIONS(2530), 2,
      sym__space,
      sym__eol,
  [6441] = 2,
    ACTIONS(2532), 1,
      sym__space,
    ACTIONS(2534), 1,
      sym__eol,
  [6448] = 1,
    ACTIONS(2536), 2,
      sym__space,
      sym__eol,
  [6453] = 1,
    ACTIONS(2444), 2,
      sym__space,
      sym__eol,
  [6458] = 1,
    ACTIONS(2538), 2,
      sym__space,
      sym__eol,
  [6463] = 2,
    ACTIONS(2540), 1,
      aux_sym_time_token4,
    ACTIONS(2542), 1,
      aux_sym_time_token5,
  [6470] = 1,
    ACTIONS(2544), 2,
      sym__space,
      sym__eol,
  [6475] = 1,
    ACTIONS(2546), 2,
      sym__space,
      sym__eol,
  [6480] = 1,
    ACTIONS(2548), 2,
      sym__space,
      sym__eol,
  [6485] = 1,
    ACTIONS(2550), 2,
      sym__space,
      sym__eol,
  [6490] = 1,
    ACTIONS(2552), 2,
      sym__space,
      sym__eol,
  [6495] = 1,
    ACTIONS(2554), 2,
      sym__space,
      sym__eol,
  [6500] = 1,
    ACTIONS(2556), 2,
      sym__space,
      sym__eol,
  [6505] = 1,
    ACTIONS(2558), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6510] = 1,
    ACTIONS(2560), 2,
      sym__space,
      sym__eol,
  [6515] = 1,
    ACTIONS(2562), 2,
      sym__space,
      sym__eol,
  [6520] = 1,
    ACTIONS(2564), 2,
      sym__space,
      sym__eol,
  [6525] = 1,
    ACTIONS(2566), 2,
      sym__space,
      sym__eol,
  [6530] = 1,
    ACTIONS(2568), 2,
      sym__space,
      sym__eol,
  [6535] = 1,
    ACTIONS(2570), 2,
      sym__space,
      sym__eol,
  [6540] = 1,
    ACTIONS(2572), 2,
      sym__space,
      sym__eol,
  [6545] = 1,
    ACTIONS(2574), 2,
      sym__space,
      sym__eol,
  [6550] = 1,
    ACTIONS(2207), 2,
      sym__space,
      sym__eol,
  [6555] = 1,
    ACTIONS(1954), 2,
      sym__space,
      sym__eol,
  [6560] = 2,
    ACTIONS(2257), 1,
      aux_sym__match_exec_token3,
    STATE(455), 1,
      aux_sym__string_repeat2,
  [6567] = 1,
    ACTIONS(2576), 2,
      sym__space,
      sym__eol,
  [6572] = 1,
    ACTIONS(2578), 2,
      sym__space,
      sym__eol,
  [6577] = 1,
    ACTIONS(2580), 2,
      sym__space,
      sym__eol,
  [6582] = 1,
    ACTIONS(2582), 2,
      sym__space,
      sym__eol,
  [6587] = 1,
    ACTIONS(2584), 2,
      sym__space,
      sym__eol,
  [6592] = 2,
    ACTIONS(1527), 1,
      aux_sym_time_token4,
    ACTIONS(1529), 1,
      aux_sym_time_token5,
  [6599] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6604] = 1,
    ACTIONS(2586), 2,
      sym__space,
      sym__eol,
  [6609] = 1,
    ACTIONS(2588), 2,
      sym__space,
      sym__eol,
  [6614] = 1,
    ACTIONS(2590), 2,
      sym__space,
      sym__eol,
  [6619] = 1,
    ACTIONS(2592), 2,
      sym__space,
      sym__eol,
  [6624] = 1,
    ACTIONS(2594), 2,
      sym__space,
      sym__eol,
  [6629] = 1,
    ACTIONS(2596), 2,
      sym__space,
      sym__eol,
  [6634] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6639] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6644] = 2,
    ACTIONS(1240), 1,
      anon_sym_COLON,
    ACTIONS(2598), 1,
      aux_sym__match_exec_token2,
  [6651] = 1,
    ACTIONS(2600), 2,
      sym__space,
      sym__eol,
  [6656] = 1,
    ACTIONS(2602), 2,
      sym__space,
      sym__eol,
  [6661] = 1,
    ACTIONS(2604), 2,
      sym__space,
      sym__eol,
  [6666] = 1,
    ACTIONS(2606), 2,
      sym__space,
      sym__eol,
  [6671] = 1,
    ACTIONS(2608), 2,
      sym__space,
      sym__eol,
  [6676] = 1,
    ACTIONS(2610), 2,
      sym__space,
      sym__eol,
  [6681] = 1,
    ACTIONS(2612), 2,
      sym__space,
      sym__eol,
  [6686] = 1,
    ACTIONS(2614), 2,
      sym__space,
      sym__eol,
  [6691] = 1,
    ACTIONS(2616), 2,
      sym__space,
      sym__eol,
  [6696] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6701] = 1,
    ACTIONS(2618), 2,
      sym__space,
      sym__eol,
  [6706] = 2,
    ACTIONS(2468), 1,
      sym__eol,
    ACTIONS(2620), 1,
      sym__space,
  [6713] = 1,
    ACTIONS(2622), 2,
      sym__space,
      sym__eol,
  [6718] = 1,
    ACTIONS(2624), 2,
      sym__space,
      sym__eol,
  [6723] = 1,
    ACTIONS(2626), 2,
      sym__space,
      sym__eol,
  [6728] = 1,
    ACTIONS(2628), 2,
      sym__space,
      sym__eol,
  [6733] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6738] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6743] = 1,
    ACTIONS(2390), 2,
      sym__space,
      sym__eol,
  [6748] = 1,
    ACTIONS(2630), 2,
      sym__space,
      sym__eol,
  [6753] = 1,
    ACTIONS(2632), 2,
      sym__space,
      sym__eol,
  [6758] = 1,
    ACTIONS(2634), 2,
      sym__space,
      sym__eol,
  [6763] = 1,
    ACTIONS(2636), 2,
      sym__space,
      sym__eol,
  [6768] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6773] = 1,
    ACTIONS(1854), 2,
      sym__space,
      sym__eol,
  [6778] = 1,
    ACTIONS(2638), 2,
      sym__space,
      sym__eol,
  [6783] = 1,
    ACTIONS(2640), 2,
      sym__space,
      sym__eol,
  [6788] = 1,
    ACTIONS(2642), 2,
      sym__space,
      sym__eol,
  [6793] = 1,
    ACTIONS(2644), 2,
      sym__space,
      sym__eol,
  [6798] = 1,
    ACTIONS(2646), 2,
      sym__space,
      sym__eol,
  [6803] = 1,
    ACTIONS(2648), 2,
      sym__space,
      sym__eol,
  [6808] = 1,
    ACTIONS(2650), 2,
      sym__space,
      sym__eol,
  [6813] = 1,
    ACTIONS(2652), 2,
      sym__space,
      sym__eol,
  [6818] = 1,
    ACTIONS(2654), 2,
      sym__space,
      sym__eol,
  [6823] = 1,
    ACTIONS(2656), 2,
      sym__space,
      sym__eol,
  [6828] = 1,
    ACTIONS(2658), 2,
      sym__space,
      sym__eol,
  [6833] = 1,
    ACTIONS(2660), 2,
      sym__space,
      sym__eol,
  [6838] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6843] = 2,
    ACTIONS(2662), 1,
      sym__space,
    ACTIONS(2664), 1,
      sym__eol,
  [6850] = 1,
    ACTIONS(2664), 2,
      sym__space,
      sym__eol,
  [6855] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6860] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6865] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6870] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6875] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6880] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6885] = 1,
    ACTIONS(2666), 2,
      sym__space,
      sym__eol,
  [6890] = 1,
    ACTIONS(2668), 2,
      sym__space,
      sym__eol,
  [6895] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6900] = 1,
    ACTIONS(2670), 2,
      sym__space,
      sym__eol,
  [6905] = 1,
    ACTIONS(2670), 2,
      sym__space,
      sym__eol,
  [6910] = 2,
    ACTIONS(1804), 1,
      sym__eol,
    ACTIONS(2672), 1,
      sym__space,
  [6917] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6922] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6927] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6932] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6937] = 1,
    ACTIONS(2674), 2,
      sym__space,
      sym__eol,
  [6942] = 1,
    ACTIONS(2676), 2,
      sym__space,
      sym__eol,
  [6947] = 1,
    ACTIONS(2678), 2,
      sym__space,
      sym__eol,
  [6952] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6957] = 1,
    ACTIONS(2680), 2,
      sym__space,
      sym__eol,
  [6962] = 1,
    ACTIONS(2682), 2,
      sym__space,
      sym__eol,
  [6967] = 2,
    ACTIONS(2684), 1,
      sym__space,
    ACTIONS(2686), 1,
      sym__eol,
  [6974] = 1,
    ACTIONS(2688), 2,
      sym__space,
      sym__eol,
  [6979] = 1,
    ACTIONS(2690), 2,
      sym__space,
      sym__eol,
  [6984] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6989] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6994] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [6999] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7004] = 1,
    ACTIONS(2692), 2,
      sym__space,
      sym__eol,
  [7009] = 1,
    ACTIONS(2694), 2,
      sym__space,
      sym__eol,
  [7014] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7019] = 1,
    ACTIONS(2183), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7024] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7029] = 2,
    ACTIONS(2696), 1,
      sym__space,
    ACTIONS(2698), 1,
      sym__eol,
  [7036] = 2,
    ACTIONS(2508), 1,
      sym__var_name,
    STATE(466), 1,
      sym__set_env_value,
  [7043] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(507), 1,
      sym_number,
  [7050] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(506), 1,
      sym_number,
  [7057] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7062] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7067] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7072] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(500), 1,
      sym_number,
  [7079] = 1,
    ACTIONS(2390), 2,
      sym__space,
      sym__eol,
  [7084] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7089] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7094] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7099] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7104] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7109] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7114] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7119] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(569), 1,
      sym_number,
  [7126] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7131] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(575), 1,
      sym_number,
  [7138] = 1,
    ACTIONS(2700), 2,
      sym__space,
      sym__eol,
  [7143] = 1,
    ACTIONS(1756), 2,
      sym__space,
      sym__eol,
  [7148] = 2,
    ACTIONS(1099), 1,
      sym__number,
    STATE(625), 1,
      sym_time,
  [7155] = 1,
    ACTIONS(2702), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [7160] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7165] = 1,
    ACTIONS(2704), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [7170] = 1,
    ACTIONS(2706), 2,
      sym__space,
      sym__eol,
  [7175] = 2,
    ACTIONS(2708), 1,
      anon_sym_none,
    ACTIONS(2710), 1,
      aux_sym__escape_char_token2,
  [7182] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(658), 1,
      sym_number,
  [7189] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(659), 1,
      sym_number,
  [7196] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7201] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(426), 1,
      sym_number,
  [7208] = 2,
    ACTIONS(1441), 1,
      sym__number,
    STATE(675), 1,
      sym_number,
  [7215] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7220] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7225] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7230] = 1,
    ACTIONS(2712), 2,
      sym__space,
      sym__eol,
  [7235] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7240] = 1,
    ACTIONS(2714), 2,
      sym__space,
      sym__eol,
  [7245] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7250] = 1,
    ACTIONS(2716), 2,
      sym__space,
      sym__eol,
  [7255] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7260] = 1,
    ACTIONS(2718), 2,
      sym__space,
      sym__eol,
  [7265] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7270] = 1,
    ACTIONS(2720), 2,
      sym__space,
      sym__eol,
  [7275] = 1,
    ACTIONS(2722), 2,
      sym__space,
      sym__eol,
  [7280] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7285] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7290] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7295] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7300] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7305] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [7310] = 2,
    ACTIONS(2143), 1,
      aux_sym_time_token4,
    ACTIONS(2145), 1,
      aux_sym_time_token5,
  [7317] = 1,
    ACTIONS(2724), 1,
      sym_authentication,
  [7321] = 1,
    ACTIONS(2726), 1,
      anon_sym_RBRACE,
  [7325] = 1,
    ACTIONS(2728), 1,
      sym__eol,
  [7329] = 1,
    ACTIONS(2730), 1,
      anon_sym_DQUOTE,
  [7333] = 1,
    ACTIONS(2732), 1,
      anon_sym_DQUOTE,
  [7337] = 1,
    ACTIONS(2734), 1,
      sym_verbosity,
  [7341] = 1,
    ACTIONS(2736), 1,
      sym_authentication,
  [7345] = 1,
    ACTIONS(2738), 1,
      anon_sym_COLON,
  [7349] = 1,
    ACTIONS(2740), 1,
      aux_sym__stream_local_bind_mask_token2,
  [7353] = 1,
    ACTIONS(2698), 1,
      sym__eol,
  [7357] = 1,
    ACTIONS(2742), 1,
      sym_facility,
  [7361] = 1,
    ACTIONS(2686), 1,
      sym__eol,
  [7365] = 1,
    ACTIONS(2744), 1,
      sym_sig,
  [7369] = 1,
    ACTIONS(2746), 1,
      sym__var_name,
  [7373] = 1,
    ACTIONS(2748), 1,
      sym_cipher,
  [7377] = 1,
    ACTIONS(2750), 1,
      anon_sym_COLON,
  [7381] = 1,
    ACTIONS(1529), 1,
      aux_sym_time_token5,
  [7385] = 1,
    ACTIONS(2752), 1,
      sym__var_name,
  [7389] = 1,
    ACTIONS(2754), 1,
      aux_sym__match_localnetwork_token3,
  [7393] = 1,
    ACTIONS(2756), 1,
      sym_key_sig,
  [7397] = 1,
    ACTIONS(2542), 1,
      aux_sym_time_token5,
  [7401] = 1,
    ACTIONS(2758), 1,
      sym_key_sig,
  [7405] = 1,
    ACTIONS(2760), 1,
      sym_kex,
  [7409] = 1,
    ACTIONS(2762), 1,
      aux_sym_time_token5,
  [7413] = 1,
    ACTIONS(2764), 1,
      sym__space,
  [7417] = 1,
    ACTIONS(2766), 1,
      aux_sym__proxy_jump_value_token2,
  [7421] = 1,
    ACTIONS(2768), 1,
      aux_sym__match_localnetwork_token3,
  [7425] = 1,
    ACTIONS(2145), 1,
      aux_sym_time_token5,
  [7429] = 1,
    ACTIONS(2770), 1,
      aux_sym__match_localnetwork_token2,
  [7433] = 1,
    ACTIONS(2772), 1,
      sym_mac,
  [7437] = 1,
    ACTIONS(2774), 1,
      anon_sym_COLON,
  [7441] = 1,
    ACTIONS(2776), 1,
      anon_sym_DQUOTE,
  [7445] = 1,
    ACTIONS(2778), 1,
      anon_sym_AT,
  [7449] = 1,
    ACTIONS(2780), 1,
      sym_key_sig,
  [7453] = 1,
    ACTIONS(2782), 1,
      sym_kex,
  [7457] = 1,
    ACTIONS(2784), 1,
      sym_key_sig,
  [7461] = 1,
    ACTIONS(2786), 1,
      anon_sym_DQUOTE,
  [7465] = 1,
    ACTIONS(2788), 1,
      sym_cipher,
  [7469] = 1,
    ACTIONS(2790), 1,
      anon_sym_RBRACE,
  [7473] = 1,
    ACTIONS(2792), 1,
      sym_sig,
  [7477] = 1,
    ACTIONS(916), 1,
      sym__eol,
  [7481] = 1,
    ACTIONS(836), 1,
      sym__eol,
  [7485] = 1,
    ACTIONS(2794), 1,
      ts_builtin_sym_end,
  [7489] = 1,
    ACTIONS(2796), 1,
      sym__eol,
  [7493] = 1,
    ACTIONS(2798), 1,
      anon_sym_RBRACE,
  [7497] = 1,
    ACTIONS(2800), 1,
      anon_sym_EQ,
  [7501] = 1,
    ACTIONS(2802), 1,
      sym_mac,
  [7505] = 1,
    ACTIONS(2804), 1,
      anon_sym_RBRACE,
  [7509] = 1,
    ACTIONS(2806), 1,
      anon_sym_RBRACE,
  [7513] = 1,
    ACTIONS(2808), 1,
      anon_sym_RBRACE,
  [7517] = 1,
    ACTIONS(2810), 1,
      sym__var_name,
  [7521] = 1,
    ACTIONS(2812), 1,
      sym__var_name,
  [7525] = 1,
    ACTIONS(2814), 1,
      sym__var_name,
  [7529] = 1,
    ACTIONS(2816), 1,
      sym__var_name,
  [7533] = 1,
    ACTIONS(2818), 1,
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
  [SMALL_STATE(49)] = 607,
  [SMALL_STATE(50)] = 630,
  [SMALL_STATE(51)] = 655,
  [SMALL_STATE(52)] = 680,
  [SMALL_STATE(53)] = 708,
  [SMALL_STATE(54)] = 734,
  [SMALL_STATE(55)] = 758,
  [SMALL_STATE(56)] = 784,
  [SMALL_STATE(57)] = 806,
  [SMALL_STATE(58)] = 828,
  [SMALL_STATE(59)] = 856,
  [SMALL_STATE(60)] = 875,
  [SMALL_STATE(61)] = 898,
  [SMALL_STATE(62)] = 921,
  [SMALL_STATE(63)] = 944,
  [SMALL_STATE(64)] = 967,
  [SMALL_STATE(65)] = 988,
  [SMALL_STATE(66)] = 1011,
  [SMALL_STATE(67)] = 1032,
  [SMALL_STATE(68)] = 1055,
  [SMALL_STATE(69)] = 1078,
  [SMALL_STATE(70)] = 1101,
  [SMALL_STATE(71)] = 1124,
  [SMALL_STATE(72)] = 1147,
  [SMALL_STATE(73)] = 1168,
  [SMALL_STATE(74)] = 1191,
  [SMALL_STATE(75)] = 1216,
  [SMALL_STATE(76)] = 1232,
  [SMALL_STATE(77)] = 1244,
  [SMALL_STATE(78)] = 1264,
  [SMALL_STATE(79)] = 1284,
  [SMALL_STATE(80)] = 1304,
  [SMALL_STATE(81)] = 1320,
  [SMALL_STATE(82)] = 1336,
  [SMALL_STATE(83)] = 1356,
  [SMALL_STATE(84)] = 1376,
  [SMALL_STATE(85)] = 1396,
  [SMALL_STATE(86)] = 1412,
  [SMALL_STATE(87)] = 1432,
  [SMALL_STATE(88)] = 1444,
  [SMALL_STATE(89)] = 1464,
  [SMALL_STATE(90)] = 1483,
  [SMALL_STATE(91)] = 1498,
  [SMALL_STATE(92)] = 1509,
  [SMALL_STATE(93)] = 1526,
  [SMALL_STATE(94)] = 1543,
  [SMALL_STATE(95)] = 1560,
  [SMALL_STATE(96)] = 1577,
  [SMALL_STATE(97)] = 1588,
  [SMALL_STATE(98)] = 1605,
  [SMALL_STATE(99)] = 1622,
  [SMALL_STATE(100)] = 1639,
  [SMALL_STATE(101)] = 1658,
  [SMALL_STATE(102)] = 1675,
  [SMALL_STATE(103)] = 1692,
  [SMALL_STATE(104)] = 1709,
  [SMALL_STATE(105)] = 1726,
  [SMALL_STATE(106)] = 1743,
  [SMALL_STATE(107)] = 1760,
  [SMALL_STATE(108)] = 1775,
  [SMALL_STATE(109)] = 1790,
  [SMALL_STATE(110)] = 1805,
  [SMALL_STATE(111)] = 1822,
  [SMALL_STATE(112)] = 1839,
  [SMALL_STATE(113)] = 1852,
  [SMALL_STATE(114)] = 1869,
  [SMALL_STATE(115)] = 1886,
  [SMALL_STATE(116)] = 1905,
  [SMALL_STATE(117)] = 1922,
  [SMALL_STATE(118)] = 1935,
  [SMALL_STATE(119)] = 1948,
  [SMALL_STATE(120)] = 1961,
  [SMALL_STATE(121)] = 1976,
  [SMALL_STATE(122)] = 1993,
  [SMALL_STATE(123)] = 2004,
  [SMALL_STATE(124)] = 2023,
  [SMALL_STATE(125)] = 2040,
  [SMALL_STATE(126)] = 2051,
  [SMALL_STATE(127)] = 2068,
  [SMALL_STATE(128)] = 2083,
  [SMALL_STATE(129)] = 2098,
  [SMALL_STATE(130)] = 2115,
  [SMALL_STATE(131)] = 2134,
  [SMALL_STATE(132)] = 2151,
  [SMALL_STATE(133)] = 2164,
  [SMALL_STATE(134)] = 2179,
  [SMALL_STATE(135)] = 2194,
  [SMALL_STATE(136)] = 2205,
  [SMALL_STATE(137)] = 2222,
  [SMALL_STATE(138)] = 2237,
  [SMALL_STATE(139)] = 2252,
  [SMALL_STATE(140)] = 2266,
  [SMALL_STATE(141)] = 2280,
  [SMALL_STATE(142)] = 2290,
  [SMALL_STATE(143)] = 2300,
  [SMALL_STATE(144)] = 2312,
  [SMALL_STATE(145)] = 2328,
  [SMALL_STATE(146)] = 2338,
  [SMALL_STATE(147)] = 2348,
  [SMALL_STATE(148)] = 2356,
  [SMALL_STATE(149)] = 2366,
  [SMALL_STATE(150)] = 2380,
  [SMALL_STATE(151)] = 2392,
  [SMALL_STATE(152)] = 2406,
  [SMALL_STATE(153)] = 2416,
  [SMALL_STATE(154)] = 2428,
  [SMALL_STATE(155)] = 2444,
  [SMALL_STATE(156)] = 2454,
  [SMALL_STATE(157)] = 2468,
  [SMALL_STATE(158)] = 2484,
  [SMALL_STATE(159)] = 2494,
  [SMALL_STATE(160)] = 2506,
  [SMALL_STATE(161)] = 2518,
  [SMALL_STATE(162)] = 2528,
  [SMALL_STATE(163)] = 2536,
  [SMALL_STATE(164)] = 2552,
  [SMALL_STATE(165)] = 2566,
  [SMALL_STATE(166)] = 2580,
  [SMALL_STATE(167)] = 2596,
  [SMALL_STATE(168)] = 2612,
  [SMALL_STATE(169)] = 2628,
  [SMALL_STATE(170)] = 2638,
  [SMALL_STATE(171)] = 2648,
  [SMALL_STATE(172)] = 2664,
  [SMALL_STATE(173)] = 2680,
  [SMALL_STATE(174)] = 2689,
  [SMALL_STATE(175)] = 2700,
  [SMALL_STATE(176)] = 2711,
  [SMALL_STATE(177)] = 2722,
  [SMALL_STATE(178)] = 2731,
  [SMALL_STATE(179)] = 2742,
  [SMALL_STATE(180)] = 2753,
  [SMALL_STATE(181)] = 2762,
  [SMALL_STATE(182)] = 2773,
  [SMALL_STATE(183)] = 2784,
  [SMALL_STATE(184)] = 2795,
  [SMALL_STATE(185)] = 2808,
  [SMALL_STATE(186)] = 2817,
  [SMALL_STATE(187)] = 2826,
  [SMALL_STATE(188)] = 2837,
  [SMALL_STATE(189)] = 2848,
  [SMALL_STATE(190)] = 2859,
  [SMALL_STATE(191)] = 2868,
  [SMALL_STATE(192)] = 2879,
  [SMALL_STATE(193)] = 2890,
  [SMALL_STATE(194)] = 2901,
  [SMALL_STATE(195)] = 2912,
  [SMALL_STATE(196)] = 2923,
  [SMALL_STATE(197)] = 2934,
  [SMALL_STATE(198)] = 2943,
  [SMALL_STATE(199)] = 2952,
  [SMALL_STATE(200)] = 2963,
  [SMALL_STATE(201)] = 2974,
  [SMALL_STATE(202)] = 2985,
  [SMALL_STATE(203)] = 2994,
  [SMALL_STATE(204)] = 3005,
  [SMALL_STATE(205)] = 3016,
  [SMALL_STATE(206)] = 3027,
  [SMALL_STATE(207)] = 3038,
  [SMALL_STATE(208)] = 3049,
  [SMALL_STATE(209)] = 3060,
  [SMALL_STATE(210)] = 3071,
  [SMALL_STATE(211)] = 3082,
  [SMALL_STATE(212)] = 3093,
  [SMALL_STATE(213)] = 3104,
  [SMALL_STATE(214)] = 3115,
  [SMALL_STATE(215)] = 3126,
  [SMALL_STATE(216)] = 3135,
  [SMALL_STATE(217)] = 3146,
  [SMALL_STATE(218)] = 3159,
  [SMALL_STATE(219)] = 3166,
  [SMALL_STATE(220)] = 3179,
  [SMALL_STATE(221)] = 3188,
  [SMALL_STATE(222)] = 3199,
  [SMALL_STATE(223)] = 3210,
  [SMALL_STATE(224)] = 3223,
  [SMALL_STATE(225)] = 3234,
  [SMALL_STATE(226)] = 3245,
  [SMALL_STATE(227)] = 3258,
  [SMALL_STATE(228)] = 3265,
  [SMALL_STATE(229)] = 3276,
  [SMALL_STATE(230)] = 3285,
  [SMALL_STATE(231)] = 3296,
  [SMALL_STATE(232)] = 3307,
  [SMALL_STATE(233)] = 3318,
  [SMALL_STATE(234)] = 3329,
  [SMALL_STATE(235)] = 3340,
  [SMALL_STATE(236)] = 3351,
  [SMALL_STATE(237)] = 3362,
  [SMALL_STATE(238)] = 3373,
  [SMALL_STATE(239)] = 3384,
  [SMALL_STATE(240)] = 3395,
  [SMALL_STATE(241)] = 3406,
  [SMALL_STATE(242)] = 3417,
  [SMALL_STATE(243)] = 3428,
  [SMALL_STATE(244)] = 3441,
  [SMALL_STATE(245)] = 3452,
  [SMALL_STATE(246)] = 3463,
  [SMALL_STATE(247)] = 3474,
  [SMALL_STATE(248)] = 3483,
  [SMALL_STATE(249)] = 3494,
  [SMALL_STATE(250)] = 3503,
  [SMALL_STATE(251)] = 3516,
  [SMALL_STATE(252)] = 3529,
  [SMALL_STATE(253)] = 3540,
  [SMALL_STATE(254)] = 3553,
  [SMALL_STATE(255)] = 3562,
  [SMALL_STATE(256)] = 3575,
  [SMALL_STATE(257)] = 3584,
  [SMALL_STATE(258)] = 3593,
  [SMALL_STATE(259)] = 3604,
  [SMALL_STATE(260)] = 3615,
  [SMALL_STATE(261)] = 3626,
  [SMALL_STATE(262)] = 3639,
  [SMALL_STATE(263)] = 3648,
  [SMALL_STATE(264)] = 3661,
  [SMALL_STATE(265)] = 3674,
  [SMALL_STATE(266)] = 3683,
  [SMALL_STATE(267)] = 3694,
  [SMALL_STATE(268)] = 3705,
  [SMALL_STATE(269)] = 3718,
  [SMALL_STATE(270)] = 3727,
  [SMALL_STATE(271)] = 3738,
  [SMALL_STATE(272)] = 3748,
  [SMALL_STATE(273)] = 3758,
  [SMALL_STATE(274)] = 3768,
  [SMALL_STATE(275)] = 3778,
  [SMALL_STATE(276)] = 3788,
  [SMALL_STATE(277)] = 3796,
  [SMALL_STATE(278)] = 3806,
  [SMALL_STATE(279)] = 3816,
  [SMALL_STATE(280)] = 3826,
  [SMALL_STATE(281)] = 3836,
  [SMALL_STATE(282)] = 3842,
  [SMALL_STATE(283)] = 3852,
  [SMALL_STATE(284)] = 3860,
  [SMALL_STATE(285)] = 3870,
  [SMALL_STATE(286)] = 3878,
  [SMALL_STATE(287)] = 3888,
  [SMALL_STATE(288)] = 3898,
  [SMALL_STATE(289)] = 3906,
  [SMALL_STATE(290)] = 3914,
  [SMALL_STATE(291)] = 3924,
  [SMALL_STATE(292)] = 3934,
  [SMALL_STATE(293)] = 3944,
  [SMALL_STATE(294)] = 3952,
  [SMALL_STATE(295)] = 3962,
  [SMALL_STATE(296)] = 3972,
  [SMALL_STATE(297)] = 3982,
  [SMALL_STATE(298)] = 3990,
  [SMALL_STATE(299)] = 3998,
  [SMALL_STATE(300)] = 4008,
  [SMALL_STATE(301)] = 4018,
  [SMALL_STATE(302)] = 4028,
  [SMALL_STATE(303)] = 4036,
  [SMALL_STATE(304)] = 4044,
  [SMALL_STATE(305)] = 4050,
  [SMALL_STATE(306)] = 4058,
  [SMALL_STATE(307)] = 4068,
  [SMALL_STATE(308)] = 4074,
  [SMALL_STATE(309)] = 4082,
  [SMALL_STATE(310)] = 4090,
  [SMALL_STATE(311)] = 4098,
  [SMALL_STATE(312)] = 4108,
  [SMALL_STATE(313)] = 4118,
  [SMALL_STATE(314)] = 4128,
  [SMALL_STATE(315)] = 4138,
  [SMALL_STATE(316)] = 4148,
  [SMALL_STATE(317)] = 4158,
  [SMALL_STATE(318)] = 4168,
  [SMALL_STATE(319)] = 4178,
  [SMALL_STATE(320)] = 4186,
  [SMALL_STATE(321)] = 4192,
  [SMALL_STATE(322)] = 4202,
  [SMALL_STATE(323)] = 4212,
  [SMALL_STATE(324)] = 4220,
  [SMALL_STATE(325)] = 4226,
  [SMALL_STATE(326)] = 4234,
  [SMALL_STATE(327)] = 4244,
  [SMALL_STATE(328)] = 4252,
  [SMALL_STATE(329)] = 4258,
  [SMALL_STATE(330)] = 4266,
  [SMALL_STATE(331)] = 4276,
  [SMALL_STATE(332)] = 4286,
  [SMALL_STATE(333)] = 4296,
  [SMALL_STATE(334)] = 4304,
  [SMALL_STATE(335)] = 4310,
  [SMALL_STATE(336)] = 4320,
  [SMALL_STATE(337)] = 4330,
  [SMALL_STATE(338)] = 4340,
  [SMALL_STATE(339)] = 4350,
  [SMALL_STATE(340)] = 4360,
  [SMALL_STATE(341)] = 4368,
  [SMALL_STATE(342)] = 4376,
  [SMALL_STATE(343)] = 4386,
  [SMALL_STATE(344)] = 4396,
  [SMALL_STATE(345)] = 4402,
  [SMALL_STATE(346)] = 4410,
  [SMALL_STATE(347)] = 4418,
  [SMALL_STATE(348)] = 4428,
  [SMALL_STATE(349)] = 4438,
  [SMALL_STATE(350)] = 4444,
  [SMALL_STATE(351)] = 4454,
  [SMALL_STATE(352)] = 4460,
  [SMALL_STATE(353)] = 4468,
  [SMALL_STATE(354)] = 4478,
  [SMALL_STATE(355)] = 4484,
  [SMALL_STATE(356)] = 4494,
  [SMALL_STATE(357)] = 4504,
  [SMALL_STATE(358)] = 4514,
  [SMALL_STATE(359)] = 4522,
  [SMALL_STATE(360)] = 4528,
  [SMALL_STATE(361)] = 4536,
  [SMALL_STATE(362)] = 4546,
  [SMALL_STATE(363)] = 4556,
  [SMALL_STATE(364)] = 4564,
  [SMALL_STATE(365)] = 4572,
  [SMALL_STATE(366)] = 4582,
  [SMALL_STATE(367)] = 4592,
  [SMALL_STATE(368)] = 4602,
  [SMALL_STATE(369)] = 4612,
  [SMALL_STATE(370)] = 4622,
  [SMALL_STATE(371)] = 4632,
  [SMALL_STATE(372)] = 4642,
  [SMALL_STATE(373)] = 4652,
  [SMALL_STATE(374)] = 4662,
  [SMALL_STATE(375)] = 4672,
  [SMALL_STATE(376)] = 4682,
  [SMALL_STATE(377)] = 4690,
  [SMALL_STATE(378)] = 4698,
  [SMALL_STATE(379)] = 4708,
  [SMALL_STATE(380)] = 4716,
  [SMALL_STATE(381)] = 4726,
  [SMALL_STATE(382)] = 4736,
  [SMALL_STATE(383)] = 4746,
  [SMALL_STATE(384)] = 4756,
  [SMALL_STATE(385)] = 4766,
  [SMALL_STATE(386)] = 4776,
  [SMALL_STATE(387)] = 4784,
  [SMALL_STATE(388)] = 4794,
  [SMALL_STATE(389)] = 4804,
  [SMALL_STATE(390)] = 4814,
  [SMALL_STATE(391)] = 4824,
  [SMALL_STATE(392)] = 4834,
  [SMALL_STATE(393)] = 4844,
  [SMALL_STATE(394)] = 4854,
  [SMALL_STATE(395)] = 4864,
  [SMALL_STATE(396)] = 4874,
  [SMALL_STATE(397)] = 4884,
  [SMALL_STATE(398)] = 4894,
  [SMALL_STATE(399)] = 4904,
  [SMALL_STATE(400)] = 4914,
  [SMALL_STATE(401)] = 4924,
  [SMALL_STATE(402)] = 4934,
  [SMALL_STATE(403)] = 4944,
  [SMALL_STATE(404)] = 4954,
  [SMALL_STATE(405)] = 4964,
  [SMALL_STATE(406)] = 4974,
  [SMALL_STATE(407)] = 4984,
  [SMALL_STATE(408)] = 4994,
  [SMALL_STATE(409)] = 5004,
  [SMALL_STATE(410)] = 5014,
  [SMALL_STATE(411)] = 5024,
  [SMALL_STATE(412)] = 5034,
  [SMALL_STATE(413)] = 5044,
  [SMALL_STATE(414)] = 5054,
  [SMALL_STATE(415)] = 5060,
  [SMALL_STATE(416)] = 5070,
  [SMALL_STATE(417)] = 5080,
  [SMALL_STATE(418)] = 5090,
  [SMALL_STATE(419)] = 5100,
  [SMALL_STATE(420)] = 5110,
  [SMALL_STATE(421)] = 5120,
  [SMALL_STATE(422)] = 5130,
  [SMALL_STATE(423)] = 5140,
  [SMALL_STATE(424)] = 5150,
  [SMALL_STATE(425)] = 5160,
  [SMALL_STATE(426)] = 5166,
  [SMALL_STATE(427)] = 5172,
  [SMALL_STATE(428)] = 5182,
  [SMALL_STATE(429)] = 5192,
  [SMALL_STATE(430)] = 5202,
  [SMALL_STATE(431)] = 5212,
  [SMALL_STATE(432)] = 5222,
  [SMALL_STATE(433)] = 5232,
  [SMALL_STATE(434)] = 5242,
  [SMALL_STATE(435)] = 5252,
  [SMALL_STATE(436)] = 5262,
  [SMALL_STATE(437)] = 5272,
  [SMALL_STATE(438)] = 5282,
  [SMALL_STATE(439)] = 5292,
  [SMALL_STATE(440)] = 5302,
  [SMALL_STATE(441)] = 5310,
  [SMALL_STATE(442)] = 5316,
  [SMALL_STATE(443)] = 5324,
  [SMALL_STATE(444)] = 5332,
  [SMALL_STATE(445)] = 5342,
  [SMALL_STATE(446)] = 5352,
  [SMALL_STATE(447)] = 5358,
  [SMALL_STATE(448)] = 5368,
  [SMALL_STATE(449)] = 5376,
  [SMALL_STATE(450)] = 5386,
  [SMALL_STATE(451)] = 5396,
  [SMALL_STATE(452)] = 5406,
  [SMALL_STATE(453)] = 5416,
  [SMALL_STATE(454)] = 5426,
  [SMALL_STATE(455)] = 5436,
  [SMALL_STATE(456)] = 5446,
  [SMALL_STATE(457)] = 5456,
  [SMALL_STATE(458)] = 5466,
  [SMALL_STATE(459)] = 5476,
  [SMALL_STATE(460)] = 5486,
  [SMALL_STATE(461)] = 5496,
  [SMALL_STATE(462)] = 5506,
  [SMALL_STATE(463)] = 5516,
  [SMALL_STATE(464)] = 5526,
  [SMALL_STATE(465)] = 5536,
  [SMALL_STATE(466)] = 5546,
  [SMALL_STATE(467)] = 5556,
  [SMALL_STATE(468)] = 5566,
  [SMALL_STATE(469)] = 5576,
  [SMALL_STATE(470)] = 5586,
  [SMALL_STATE(471)] = 5596,
  [SMALL_STATE(472)] = 5606,
  [SMALL_STATE(473)] = 5614,
  [SMALL_STATE(474)] = 5622,
  [SMALL_STATE(475)] = 5630,
  [SMALL_STATE(476)] = 5638,
  [SMALL_STATE(477)] = 5646,
  [SMALL_STATE(478)] = 5656,
  [SMALL_STATE(479)] = 5666,
  [SMALL_STATE(480)] = 5676,
  [SMALL_STATE(481)] = 5686,
  [SMALL_STATE(482)] = 5696,
  [SMALL_STATE(483)] = 5706,
  [SMALL_STATE(484)] = 5716,
  [SMALL_STATE(485)] = 5726,
  [SMALL_STATE(486)] = 5736,
  [SMALL_STATE(487)] = 5746,
  [SMALL_STATE(488)] = 5756,
  [SMALL_STATE(489)] = 5766,
  [SMALL_STATE(490)] = 5776,
  [SMALL_STATE(491)] = 5786,
  [SMALL_STATE(492)] = 5796,
  [SMALL_STATE(493)] = 5806,
  [SMALL_STATE(494)] = 5816,
  [SMALL_STATE(495)] = 5824,
  [SMALL_STATE(496)] = 5829,
  [SMALL_STATE(497)] = 5834,
  [SMALL_STATE(498)] = 5839,
  [SMALL_STATE(499)] = 5846,
  [SMALL_STATE(500)] = 5851,
  [SMALL_STATE(501)] = 5856,
  [SMALL_STATE(502)] = 5861,
  [SMALL_STATE(503)] = 5866,
  [SMALL_STATE(504)] = 5871,
  [SMALL_STATE(505)] = 5876,
  [SMALL_STATE(506)] = 5881,
  [SMALL_STATE(507)] = 5886,
  [SMALL_STATE(508)] = 5891,
  [SMALL_STATE(509)] = 5896,
  [SMALL_STATE(510)] = 5901,
  [SMALL_STATE(511)] = 5906,
  [SMALL_STATE(512)] = 5911,
  [SMALL_STATE(513)] = 5916,
  [SMALL_STATE(514)] = 5921,
  [SMALL_STATE(515)] = 5926,
  [SMALL_STATE(516)] = 5931,
  [SMALL_STATE(517)] = 5936,
  [SMALL_STATE(518)] = 5941,
  [SMALL_STATE(519)] = 5946,
  [SMALL_STATE(520)] = 5951,
  [SMALL_STATE(521)] = 5956,
  [SMALL_STATE(522)] = 5961,
  [SMALL_STATE(523)] = 5966,
  [SMALL_STATE(524)] = 5971,
  [SMALL_STATE(525)] = 5976,
  [SMALL_STATE(526)] = 5981,
  [SMALL_STATE(527)] = 5986,
  [SMALL_STATE(528)] = 5991,
  [SMALL_STATE(529)] = 5996,
  [SMALL_STATE(530)] = 6001,
  [SMALL_STATE(531)] = 6006,
  [SMALL_STATE(532)] = 6011,
  [SMALL_STATE(533)] = 6016,
  [SMALL_STATE(534)] = 6021,
  [SMALL_STATE(535)] = 6026,
  [SMALL_STATE(536)] = 6031,
  [SMALL_STATE(537)] = 6036,
  [SMALL_STATE(538)] = 6041,
  [SMALL_STATE(539)] = 6046,
  [SMALL_STATE(540)] = 6053,
  [SMALL_STATE(541)] = 6060,
  [SMALL_STATE(542)] = 6065,
  [SMALL_STATE(543)] = 6072,
  [SMALL_STATE(544)] = 6077,
  [SMALL_STATE(545)] = 6082,
  [SMALL_STATE(546)] = 6089,
  [SMALL_STATE(547)] = 6094,
  [SMALL_STATE(548)] = 6099,
  [SMALL_STATE(549)] = 6104,
  [SMALL_STATE(550)] = 6111,
  [SMALL_STATE(551)] = 6116,
  [SMALL_STATE(552)] = 6121,
  [SMALL_STATE(553)] = 6126,
  [SMALL_STATE(554)] = 6131,
  [SMALL_STATE(555)] = 6136,
  [SMALL_STATE(556)] = 6141,
  [SMALL_STATE(557)] = 6148,
  [SMALL_STATE(558)] = 6153,
  [SMALL_STATE(559)] = 6158,
  [SMALL_STATE(560)] = 6163,
  [SMALL_STATE(561)] = 6168,
  [SMALL_STATE(562)] = 6173,
  [SMALL_STATE(563)] = 6178,
  [SMALL_STATE(564)] = 6183,
  [SMALL_STATE(565)] = 6188,
  [SMALL_STATE(566)] = 6193,
  [SMALL_STATE(567)] = 6198,
  [SMALL_STATE(568)] = 6203,
  [SMALL_STATE(569)] = 6208,
  [SMALL_STATE(570)] = 6213,
  [SMALL_STATE(571)] = 6218,
  [SMALL_STATE(572)] = 6223,
  [SMALL_STATE(573)] = 6228,
  [SMALL_STATE(574)] = 6233,
  [SMALL_STATE(575)] = 6238,
  [SMALL_STATE(576)] = 6243,
  [SMALL_STATE(577)] = 6248,
  [SMALL_STATE(578)] = 6253,
  [SMALL_STATE(579)] = 6258,
  [SMALL_STATE(580)] = 6263,
  [SMALL_STATE(581)] = 6268,
  [SMALL_STATE(582)] = 6273,
  [SMALL_STATE(583)] = 6278,
  [SMALL_STATE(584)] = 6283,
  [SMALL_STATE(585)] = 6288,
  [SMALL_STATE(586)] = 6293,
  [SMALL_STATE(587)] = 6300,
  [SMALL_STATE(588)] = 6305,
  [SMALL_STATE(589)] = 6310,
  [SMALL_STATE(590)] = 6315,
  [SMALL_STATE(591)] = 6320,
  [SMALL_STATE(592)] = 6325,
  [SMALL_STATE(593)] = 6332,
  [SMALL_STATE(594)] = 6337,
  [SMALL_STATE(595)] = 6342,
  [SMALL_STATE(596)] = 6347,
  [SMALL_STATE(597)] = 6352,
  [SMALL_STATE(598)] = 6357,
  [SMALL_STATE(599)] = 6362,
  [SMALL_STATE(600)] = 6367,
  [SMALL_STATE(601)] = 6374,
  [SMALL_STATE(602)] = 6379,
  [SMALL_STATE(603)] = 6386,
  [SMALL_STATE(604)] = 6391,
  [SMALL_STATE(605)] = 6396,
  [SMALL_STATE(606)] = 6401,
  [SMALL_STATE(607)] = 6406,
  [SMALL_STATE(608)] = 6411,
  [SMALL_STATE(609)] = 6416,
  [SMALL_STATE(610)] = 6421,
  [SMALL_STATE(611)] = 6426,
  [SMALL_STATE(612)] = 6431,
  [SMALL_STATE(613)] = 6436,
  [SMALL_STATE(614)] = 6441,
  [SMALL_STATE(615)] = 6448,
  [SMALL_STATE(616)] = 6453,
  [SMALL_STATE(617)] = 6458,
  [SMALL_STATE(618)] = 6463,
  [SMALL_STATE(619)] = 6470,
  [SMALL_STATE(620)] = 6475,
  [SMALL_STATE(621)] = 6480,
  [SMALL_STATE(622)] = 6485,
  [SMALL_STATE(623)] = 6490,
  [SMALL_STATE(624)] = 6495,
  [SMALL_STATE(625)] = 6500,
  [SMALL_STATE(626)] = 6505,
  [SMALL_STATE(627)] = 6510,
  [SMALL_STATE(628)] = 6515,
  [SMALL_STATE(629)] = 6520,
  [SMALL_STATE(630)] = 6525,
  [SMALL_STATE(631)] = 6530,
  [SMALL_STATE(632)] = 6535,
  [SMALL_STATE(633)] = 6540,
  [SMALL_STATE(634)] = 6545,
  [SMALL_STATE(635)] = 6550,
  [SMALL_STATE(636)] = 6555,
  [SMALL_STATE(637)] = 6560,
  [SMALL_STATE(638)] = 6567,
  [SMALL_STATE(639)] = 6572,
  [SMALL_STATE(640)] = 6577,
  [SMALL_STATE(641)] = 6582,
  [SMALL_STATE(642)] = 6587,
  [SMALL_STATE(643)] = 6592,
  [SMALL_STATE(644)] = 6599,
  [SMALL_STATE(645)] = 6604,
  [SMALL_STATE(646)] = 6609,
  [SMALL_STATE(647)] = 6614,
  [SMALL_STATE(648)] = 6619,
  [SMALL_STATE(649)] = 6624,
  [SMALL_STATE(650)] = 6629,
  [SMALL_STATE(651)] = 6634,
  [SMALL_STATE(652)] = 6639,
  [SMALL_STATE(653)] = 6644,
  [SMALL_STATE(654)] = 6651,
  [SMALL_STATE(655)] = 6656,
  [SMALL_STATE(656)] = 6661,
  [SMALL_STATE(657)] = 6666,
  [SMALL_STATE(658)] = 6671,
  [SMALL_STATE(659)] = 6676,
  [SMALL_STATE(660)] = 6681,
  [SMALL_STATE(661)] = 6686,
  [SMALL_STATE(662)] = 6691,
  [SMALL_STATE(663)] = 6696,
  [SMALL_STATE(664)] = 6701,
  [SMALL_STATE(665)] = 6706,
  [SMALL_STATE(666)] = 6713,
  [SMALL_STATE(667)] = 6718,
  [SMALL_STATE(668)] = 6723,
  [SMALL_STATE(669)] = 6728,
  [SMALL_STATE(670)] = 6733,
  [SMALL_STATE(671)] = 6738,
  [SMALL_STATE(672)] = 6743,
  [SMALL_STATE(673)] = 6748,
  [SMALL_STATE(674)] = 6753,
  [SMALL_STATE(675)] = 6758,
  [SMALL_STATE(676)] = 6763,
  [SMALL_STATE(677)] = 6768,
  [SMALL_STATE(678)] = 6773,
  [SMALL_STATE(679)] = 6778,
  [SMALL_STATE(680)] = 6783,
  [SMALL_STATE(681)] = 6788,
  [SMALL_STATE(682)] = 6793,
  [SMALL_STATE(683)] = 6798,
  [SMALL_STATE(684)] = 6803,
  [SMALL_STATE(685)] = 6808,
  [SMALL_STATE(686)] = 6813,
  [SMALL_STATE(687)] = 6818,
  [SMALL_STATE(688)] = 6823,
  [SMALL_STATE(689)] = 6828,
  [SMALL_STATE(690)] = 6833,
  [SMALL_STATE(691)] = 6838,
  [SMALL_STATE(692)] = 6843,
  [SMALL_STATE(693)] = 6850,
  [SMALL_STATE(694)] = 6855,
  [SMALL_STATE(695)] = 6860,
  [SMALL_STATE(696)] = 6865,
  [SMALL_STATE(697)] = 6870,
  [SMALL_STATE(698)] = 6875,
  [SMALL_STATE(699)] = 6880,
  [SMALL_STATE(700)] = 6885,
  [SMALL_STATE(701)] = 6890,
  [SMALL_STATE(702)] = 6895,
  [SMALL_STATE(703)] = 6900,
  [SMALL_STATE(704)] = 6905,
  [SMALL_STATE(705)] = 6910,
  [SMALL_STATE(706)] = 6917,
  [SMALL_STATE(707)] = 6922,
  [SMALL_STATE(708)] = 6927,
  [SMALL_STATE(709)] = 6932,
  [SMALL_STATE(710)] = 6937,
  [SMALL_STATE(711)] = 6942,
  [SMALL_STATE(712)] = 6947,
  [SMALL_STATE(713)] = 6952,
  [SMALL_STATE(714)] = 6957,
  [SMALL_STATE(715)] = 6962,
  [SMALL_STATE(716)] = 6967,
  [SMALL_STATE(717)] = 6974,
  [SMALL_STATE(718)] = 6979,
  [SMALL_STATE(719)] = 6984,
  [SMALL_STATE(720)] = 6989,
  [SMALL_STATE(721)] = 6994,
  [SMALL_STATE(722)] = 6999,
  [SMALL_STATE(723)] = 7004,
  [SMALL_STATE(724)] = 7009,
  [SMALL_STATE(725)] = 7014,
  [SMALL_STATE(726)] = 7019,
  [SMALL_STATE(727)] = 7024,
  [SMALL_STATE(728)] = 7029,
  [SMALL_STATE(729)] = 7036,
  [SMALL_STATE(730)] = 7043,
  [SMALL_STATE(731)] = 7050,
  [SMALL_STATE(732)] = 7057,
  [SMALL_STATE(733)] = 7062,
  [SMALL_STATE(734)] = 7067,
  [SMALL_STATE(735)] = 7072,
  [SMALL_STATE(736)] = 7079,
  [SMALL_STATE(737)] = 7084,
  [SMALL_STATE(738)] = 7089,
  [SMALL_STATE(739)] = 7094,
  [SMALL_STATE(740)] = 7099,
  [SMALL_STATE(741)] = 7104,
  [SMALL_STATE(742)] = 7109,
  [SMALL_STATE(743)] = 7114,
  [SMALL_STATE(744)] = 7119,
  [SMALL_STATE(745)] = 7126,
  [SMALL_STATE(746)] = 7131,
  [SMALL_STATE(747)] = 7138,
  [SMALL_STATE(748)] = 7143,
  [SMALL_STATE(749)] = 7148,
  [SMALL_STATE(750)] = 7155,
  [SMALL_STATE(751)] = 7160,
  [SMALL_STATE(752)] = 7165,
  [SMALL_STATE(753)] = 7170,
  [SMALL_STATE(754)] = 7175,
  [SMALL_STATE(755)] = 7182,
  [SMALL_STATE(756)] = 7189,
  [SMALL_STATE(757)] = 7196,
  [SMALL_STATE(758)] = 7201,
  [SMALL_STATE(759)] = 7208,
  [SMALL_STATE(760)] = 7215,
  [SMALL_STATE(761)] = 7220,
  [SMALL_STATE(762)] = 7225,
  [SMALL_STATE(763)] = 7230,
  [SMALL_STATE(764)] = 7235,
  [SMALL_STATE(765)] = 7240,
  [SMALL_STATE(766)] = 7245,
  [SMALL_STATE(767)] = 7250,
  [SMALL_STATE(768)] = 7255,
  [SMALL_STATE(769)] = 7260,
  [SMALL_STATE(770)] = 7265,
  [SMALL_STATE(771)] = 7270,
  [SMALL_STATE(772)] = 7275,
  [SMALL_STATE(773)] = 7280,
  [SMALL_STATE(774)] = 7285,
  [SMALL_STATE(775)] = 7290,
  [SMALL_STATE(776)] = 7295,
  [SMALL_STATE(777)] = 7300,
  [SMALL_STATE(778)] = 7305,
  [SMALL_STATE(779)] = 7310,
  [SMALL_STATE(780)] = 7317,
  [SMALL_STATE(781)] = 7321,
  [SMALL_STATE(782)] = 7325,
  [SMALL_STATE(783)] = 7329,
  [SMALL_STATE(784)] = 7333,
  [SMALL_STATE(785)] = 7337,
  [SMALL_STATE(786)] = 7341,
  [SMALL_STATE(787)] = 7345,
  [SMALL_STATE(788)] = 7349,
  [SMALL_STATE(789)] = 7353,
  [SMALL_STATE(790)] = 7357,
  [SMALL_STATE(791)] = 7361,
  [SMALL_STATE(792)] = 7365,
  [SMALL_STATE(793)] = 7369,
  [SMALL_STATE(794)] = 7373,
  [SMALL_STATE(795)] = 7377,
  [SMALL_STATE(796)] = 7381,
  [SMALL_STATE(797)] = 7385,
  [SMALL_STATE(798)] = 7389,
  [SMALL_STATE(799)] = 7393,
  [SMALL_STATE(800)] = 7397,
  [SMALL_STATE(801)] = 7401,
  [SMALL_STATE(802)] = 7405,
  [SMALL_STATE(803)] = 7409,
  [SMALL_STATE(804)] = 7413,
  [SMALL_STATE(805)] = 7417,
  [SMALL_STATE(806)] = 7421,
  [SMALL_STATE(807)] = 7425,
  [SMALL_STATE(808)] = 7429,
  [SMALL_STATE(809)] = 7433,
  [SMALL_STATE(810)] = 7437,
  [SMALL_STATE(811)] = 7441,
  [SMALL_STATE(812)] = 7445,
  [SMALL_STATE(813)] = 7449,
  [SMALL_STATE(814)] = 7453,
  [SMALL_STATE(815)] = 7457,
  [SMALL_STATE(816)] = 7461,
  [SMALL_STATE(817)] = 7465,
  [SMALL_STATE(818)] = 7469,
  [SMALL_STATE(819)] = 7473,
  [SMALL_STATE(820)] = 7477,
  [SMALL_STATE(821)] = 7481,
  [SMALL_STATE(822)] = 7485,
  [SMALL_STATE(823)] = 7489,
  [SMALL_STATE(824)] = 7493,
  [SMALL_STATE(825)] = 7497,
  [SMALL_STATE(826)] = 7501,
  [SMALL_STATE(827)] = 7505,
  [SMALL_STATE(828)] = 7509,
  [SMALL_STATE(829)] = 7513,
  [SMALL_STATE(830)] = 7517,
  [SMALL_STATE(831)] = 7521,
  [SMALL_STATE(832)] = 7525,
  [SMALL_STATE(833)] = 7529,
  [SMALL_STATE(834)] = 7533,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(821),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, 0, 16),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, 0, 16),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, 0, 16),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, 0, 16),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 4, 0, 16),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 4, 0, 16),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(331),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(614),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 36),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 36),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 15),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 15),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, 0, 74),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, 0, 74),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 7, 0, 16),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 7, 0, 16),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 34),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 34),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 74),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 74),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, 0, 36),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, 0, 36),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, 0, 15),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, 0, 15),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, 0, 34),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, 0, 34),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, 0, 11),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0), SHIFT_REPEAT(793),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(96),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(96),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2, 0, 0), SHIFT_REPEAT(833),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0), SHIFT_REPEAT(832),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote_command, 3, 0, 29),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, 0, 29),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0), SHIFT_REPEAT(830),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, 0, 11),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [1065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0), SHIFT_REPEAT(831),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hosts_string, 1, 0, 21),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, 0, 21),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, 0, 21),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1, 0, 0),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2, 0, 0), SHIFT_REPEAT(834),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1, 0, 0),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 43),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 11),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 52),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 52),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1, 0, 0),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1, 0, 0),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2, 0, 0),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [1199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0),
  [1204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(158),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(158),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, 0, 31),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, 0, 46),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proxy_string, 1, 0, 21),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, 0, 21),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [1237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0), REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1, 0, 0),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, 0, 21),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 43),
  [1260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, 0, 42),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [1277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1, 0, 0),
  [1302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(180),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(180),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token_string, 1, 0, 21),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, 0, 21),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(190),
  [1332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2, 0, 0), SHIFT_REPEAT(190),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1, 0, 0),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 1, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 1, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0),
  [1353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0), SHIFT_REPEAT(276),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2, 0, 0), SHIFT_REPEAT(276),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [1384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [1387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0),
  [1393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0), SHIFT_REPEAT(494),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2, 0, 0), SHIFT_REPEAT(494),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, 0, 48),
  [1407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, 0, 36),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, 0, 36),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, 0, 36),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0),
  [1424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, 0, 36),
  [1430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1, 0, 21),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, 0, 15),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, 0, 36),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, 0, 28),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 26),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1, 0, 0),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1, 0, 0),
  [1459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0), REDUCE(aux_sym__string_repeat2, 1, 0, 0),
  [1462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1, 0, 0), REDUCE(aux_sym__string_repeat2, 1, 0, 0),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, 0, 15),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, 0, 39),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, 0, 36),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, 0, 15),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, 0, 77),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, 0, 24),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, 0, 36),
  [1489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 0), SHIFT_REPEAT(267),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, 0, 0),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 4, 0, 41),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, 0, 36),
  [1498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2, 0, 0), SHIFT_REPEAT(808),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2, 0, 0),
  [1503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1, 0, 0),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1, 0, 0),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, 0, 15),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, 0, 43),
  [1511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1, 0, 0),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1, 0, 0),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, 0, 15),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, 0, 15),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, 0, 47),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, 0, 51),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, 0, 48),
  [1539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(819),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2, 0, 0),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, 0, 48),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, 0, 15),
  [1548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2, 0, 0), SHIFT_REPEAT(817),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2, 0, 0),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, 0, 48),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, 0, 72),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, 0, 15),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, 0, 71),
  [1561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(815),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2, 0, 0),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, 0, 48),
  [1568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2, 0, 0), SHIFT_REPEAT(814),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2, 0, 0),
  [1573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 62), SHIFT_REPEAT(153),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 62),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, 0, 48),
  [1580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2, 0, 0), SHIFT_REPEAT(809),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2, 0, 0),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2, 0, 0), SHIFT_REPEAT(780),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, 0, 12),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, 0, 12),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 3, 0, 66),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 68), SHIFT_REPEAT(144),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 68),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, 0, 48),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, 0, 11),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, 0, 70),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1, 0, 0),
  [1665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 45), SHIFT_REPEAT(55),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 45),
  [1742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 45), SHIFT_REPEAT(600),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 45),
  [1747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 45), SHIFT_REPEAT(120),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 45),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4, 0, 0),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_jump_repeat1, 2, 0, 67),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 3, 0, 63),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 65), SHIFT_REPEAT(127),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 65),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, 0, 61),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, 0, 15),
  [1851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [1854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2, 0, 0),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, 0, 17),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 45), SHIFT_REPEAT(184),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 45),
  [1885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 57), SHIFT_REPEAT(52),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 57),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value_inner, 3, 0, 55),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2, 0, 0),
  [1894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2, 0, 0), SHIFT_REPEAT(554),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 54),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 62),
  [1903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 62), SHIFT_REPEAT(139),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 3, 0, 19),
  [1939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 50), SHIFT_REPEAT(84),
  [1942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 50),
  [1944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 45), SHIFT_REPEAT(99),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 45),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2, 0, 0),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, 0, 15),
  [1990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 45), SHIFT_REPEAT(82),
  [1993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 45),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [2013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [2025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, 0, 34),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [2069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, 0, 15),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, 0, 34),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, 0, 34),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, 0, 40),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, 0, 78),
  [2153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 5, 0, 80),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [2175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, 0, 25),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [2183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2, 0, 0),
  [2185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2, 0, 0), SHIFT_REPEAT(806),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [2190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 0),
  [2194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, 0, 0), SHIFT_REPEAT(212),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [2203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6, 0, 0),
  [2209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump_value, 1, 0, 27),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [2215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8, 0, 0),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [2225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, 0, 36),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [2249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [2267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward, 4, 0, 37),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [2273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, 0, 15),
  [2275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(653),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [2286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, 0, 34),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [2292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, 0, 15),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [2306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2, 0, 0),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, 0, 15),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [2334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, 0, 15),
  [2336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, 0, 34),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [2342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, 0, 35),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [2346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [2352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [2354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [2368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [2380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [2386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1, 0, 0),
  [2388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1, 0, 0),
  [2390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 4),
  [2392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 1),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 3, 0, 30),
  [2398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, 0, 15),
  [2400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, 0, 15),
  [2402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, 0, 15),
  [2404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, 0, 22),
  [2406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, 0, 15),
  [2408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 2),
  [2410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, 0, 15),
  [2412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, 0, 15),
  [2414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, 0, 15),
  [2416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, 0, 15),
  [2418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, 0, 15),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, 0, 15),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, 0, 15),
  [2424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, 0, 15),
  [2426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, 0, 15),
  [2428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, 0, 15),
  [2430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, 0, 15),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, 0, 15),
  [2434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_keychain, 3, 0, 16),
  [2436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, 0, 15),
  [2438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, 0, 15),
  [2440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, 0, 15),
  [2442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, 0, 15),
  [2444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 5),
  [2446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 32),
  [2448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 33),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [2456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 6),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 1, 0, 0),
  [2462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, 0, 38),
  [2464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 7),
  [2466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, 0, 15),
  [2468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, 0, 15),
  [2470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, 0, 15),
  [2472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, 0, 15),
  [2474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, 0, 15),
  [2476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, 0, 15),
  [2478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 8),
  [2480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 14),
  [2482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [2484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, 0, 15),
  [2486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, 0, 15),
  [2488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, 0, 15),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, 0, 15),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, 0, 15),
  [2494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 20),
  [2496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 23),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10, 0, 0),
  [2500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, 0, 18),
  [2502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2, 0, 0),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, 0, 15),
  [2506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, 0, 15),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, 0, 15),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, 0, 15),
  [2516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include, 3, 0, 15),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, 0, 15),
  [2520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, 0, 22),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, 0, 15),
  [2524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 3),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, 0, 15),
  [2528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, 0, 15),
  [2530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, 0, 44),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, 0, 15),
  [2538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, 0, 15),
  [2540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [2544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_known_hosts, 3, 0, 15),
  [2546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, 0, 15),
  [2548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, 0, 12),
  [2550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, 0, 12),
  [2552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, 0, 15),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, 0, 15),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, 0, 15),
  [2558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, 0, 78),
  [2560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, 0, 15),
  [2562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, 0, 15),
  [2564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, 0, 47),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, 0, 22),
  [2568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, 0, 47),
  [2570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, 0, 47),
  [2572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, 0, 47),
  [2574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, 0, 47),
  [2576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, 0, 15),
  [2578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, 0, 15),
  [2580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, 0, 48),
  [2582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, 0, 15),
  [2584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, 0, 15),
  [2586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, 0, 44),
  [2588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, 0, 15),
  [2590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, 0, 49),
  [2592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, 0, 15),
  [2594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, 0, 20),
  [2596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 1, 0, 18),
  [2598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1, 0, 0),
  [2600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, 0, 15),
  [2602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, 0, 15),
  [2604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, 0, 43),
  [2606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, 0, 15),
  [2608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, 0, 15),
  [2610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, 0, 15),
  [2612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, 0, 15),
  [2614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, 0, 15),
  [2616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dynamic_forward_value, 3, 0, 53),
  [2618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, 0, 15),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dynamic_forward_repeat1, 2, 0, 56),
  [2624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, 0, 15),
  [2626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, 0, 44),
  [2628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, 0, 43),
  [2630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, 0, 16),
  [2632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, 0, 54),
  [2634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, 0, 15),
  [2636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, 0, 54),
  [2638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, 0, 15),
  [2640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, 0, 58),
  [2642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, 0, 15),
  [2644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, 0, 15),
  [2646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, 0, 15),
  [2648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, 0, 53),
  [2650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, 0, 15),
  [2652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, 0, 18),
  [2654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, 0, 59),
  [2656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 1, 0, 23),
  [2658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, 0, 60),
  [2660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, 0, 15),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [2664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, 0, 15),
  [2666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, 0, 63),
  [2668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, 0, 64),
  [2670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 13),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, 0, 58),
  [2676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, 0, 59),
  [2678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, 0, 44),
  [2680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, 0, 31),
  [2682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, 0, 44),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, 0, 48),
  [2690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, 0, 44),
  [2692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, 0, 81),
  [2694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, 0, 69),
  [2696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, 0, 79),
  [2702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, 0, 61),
  [2706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, 0, 73),
  [2708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [2712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, 0, 53),
  [2714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, 0, 75),
  [2716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, 0, 76),
  [2718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 10),
  [2720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 9),
  [2722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, 0, 43),
  [2724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [2760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [2772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [2776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [2792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2794] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [2816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ssh_config(void) {
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
