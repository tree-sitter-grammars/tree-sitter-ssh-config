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
#define STATE_COUNT 794
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 355
#define ALIAS_COUNT 3
#define TOKEN_COUNT 177
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 67

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
  aux_sym__enable_escape_command_line_token1 = 54,
  aux_sym__enable_ssh_keysign_token1 = 55,
  aux_sym__escape_char_token1 = 56,
  aux_sym__escape_char_token2 = 57,
  aux_sym__exit_on_forward_failure_token1 = 58,
  aux_sym__fingerprint_hash_token1 = 59,
  anon_sym_md5 = 60,
  anon_sym_sha256 = 61,
  aux_sym__fork_after_authentication_token1 = 62,
  aux_sym__forward_agent_token1 = 63,
  aux_sym__forward_x11_token1 = 64,
  aux_sym__forward_x11_timeout_token1 = 65,
  aux_sym__forward_x11_trusted_token1 = 66,
  aux_sym__global_known_hosts_file_token1 = 67,
  aux_sym__gssapi_authentication_token1 = 68,
  aux_sym__gssapi_delegate_credentials_token1 = 69,
  aux_sym__hostbased_accepted_algorithms_token1 = 70,
  aux_sym__hostbased_accepted_algorithms_token2 = 71,
  aux_sym__hostbased_authentication_token1 = 72,
  aux_sym__host_key_algorithms_token1 = 73,
  aux_sym__host_key_alias_token1 = 74,
  aux_sym__hostname_token1 = 75,
  aux_sym__identities_only_token1 = 76,
  aux_sym__identity_agent_token1 = 77,
  anon_sym_SSH_AUTH_SOCK = 78,
  aux_sym__identity_file_token1 = 79,
  aux_sym__ignore_unknown_token1 = 80,
  aux_sym__ipqos_token1 = 81,
  aux_sym__kbd_interactive_authentication_token1 = 82,
  aux_sym__kbd_interactive_authentication_token2 = 83,
  aux_sym__kex_algorithms_token1 = 84,
  aux_sym__known_hosts_command_token1 = 85,
  aux_sym__local_command_token1 = 86,
  aux_sym__local_forward_token1 = 87,
  aux_sym__log_level_token1 = 88,
  aux_sym__log_verbose_token1 = 89,
  aux_sym__log_verbose_value_token1 = 90,
  aux_sym__macs_token1 = 91,
  aux_sym__no_host_authentication_for_localhost_token1 = 92,
  aux_sym__number_of_password_prompts_token1 = 93,
  aux_sym__password_authentication_token1 = 94,
  aux_sym__permit_local_command_token1 = 95,
  aux_sym__permit_remote_open_token1 = 96,
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
  aux_sym__remote_command_token2 = 112,
  aux_sym__remote_forward_token1 = 113,
  aux_sym__request_tty_token1 = 114,
  anon_sym_force = 115,
  aux_sym__required_rsa_size_token1 = 116,
  aux_sym__revoked_host_keys_token1 = 117,
  aux_sym__security_key_provider_token1 = 118,
  aux_sym__send_env_token1 = 119,
  aux_sym__send_env_value_token1 = 120,
  aux_sym__server_alive_count_max_token1 = 121,
  aux_sym__server_alive_interval_token1 = 122,
  aux_sym__session_type_token1 = 123,
  anon_sym_subsystem = 124,
  anon_sym_default = 125,
  anon_sym_EQ = 126,
  aux_sym__stdin_null_token1 = 127,
  aux_sym__stream_local_bind_mask_token1 = 128,
  aux_sym__stream_local_bind_mask_token2 = 129,
  aux_sym__stream_local_bind_unlink_token1 = 130,
  aux_sym__strict_host_key_checking_token1 = 131,
  anon_sym_accept_DASHnew = 132,
  anon_sym_off = 133,
  aux_sym__syslog_facility_token1 = 134,
  aux_sym__tcp_keep_alive_token1 = 135,
  aux_sym__tag_token1 = 136,
  aux_sym__tunnel_token1 = 137,
  anon_sym_point_DASHto_DASHpoint = 138,
  anon_sym_ethernet = 139,
  aux_sym__tunnel_device_token1 = 140,
  aux_sym__update_host_keys_token1 = 141,
  aux_sym__user_known_hosts_file_token1 = 142,
  aux_sym__verify_host_key_dns_token1 = 143,
  aux_sym__visual_host_key_token1 = 144,
  aux_sym__xauth_location_token1 = 145,
  sym_ipqos = 146,
  sym_verbosity = 147,
  sym_facility = 148,
  sym_authentication = 149,
  sym_cipher = 150,
  sym_kex = 151,
  sym_key_sig = 152,
  sym_mac = 153,
  sym_sig = 154,
  aux_sym__file_token_token1 = 155,
  aux_sym__hosts_token_token1 = 156,
  aux_sym__hostname_token_token1 = 157,
  aux_sym__proxy_token_token1 = 158,
  sym_token = 159,
  anon_sym_DOLLAR = 160,
  sym__var_name = 161,
  anon_sym_DOLLAR_LBRACE = 162,
  anon_sym_RBRACE = 163,
  anon_sym_yes = 164,
  anon_sym_no = 165,
  sym__number = 166,
  aux_sym_bytes_token1 = 167,
  aux_sym_time_token1 = 168,
  aux_sym_time_token2 = 169,
  aux_sym_time_token3 = 170,
  aux_sym_time_token4 = 171,
  aux_sym_time_token5 = 172,
  sym_comment = 173,
  aux_sym__sep_token1 = 174,
  sym__space = 175,
  sym__eol = 176,
  sym_config = 177,
  sym_host_declaration = 178,
  sym_match_declaration = 179,
  sym_condition = 180,
  sym__all = 181,
  sym__match_canonical = 182,
  sym__match_final = 183,
  sym__match_exec = 184,
  sym__match_localnetwork = 185,
  sym__match_host = 186,
  sym__match_originalhost = 187,
  sym__match_tagged = 188,
  sym__match_user = 189,
  sym__match_localuser = 190,
  sym__match_value = 191,
  sym__declarations = 192,
  sym_parameter = 193,
  sym__add_keys_to_agent = 194,
  sym__address_family = 195,
  sym__batch_mode = 196,
  sym__bind_address = 197,
  sym__bind_interface = 198,
  sym__canonical_domains = 199,
  sym__canonicalize_fallback_local = 200,
  sym__canonicalize_hostname = 201,
  sym__canonicalize_max_dots = 202,
  sym__canonicalize_permitted_cnames = 203,
  sym__cnames_map = 204,
  sym__ca_signature_algorithms = 205,
  sym__certificate_file = 206,
  sym__check_host_ip = 207,
  sym__ciphers = 208,
  sym__clear_all_forwardings = 209,
  sym__compression = 210,
  sym__connection_attempts = 211,
  sym__connect_timeout = 212,
  sym__control_master = 213,
  sym__control_persist = 214,
  sym__control_path = 215,
  sym__enable_escape_command_line = 216,
  sym__enable_ssh_keysign = 217,
  sym__escape_char = 218,
  sym__exit_on_forward_failure = 219,
  sym__fingerprint_hash = 220,
  sym__fork_after_authentication = 221,
  sym__forward_agent = 222,
  sym__forward_x11 = 223,
  sym__forward_x11_timeout = 224,
  sym__forward_x11_trusted = 225,
  sym__global_known_hosts_file = 226,
  sym__gssapi_authentication = 227,
  sym__gssapi_delegate_credentials = 228,
  sym__hostbased_accepted_algorithms = 229,
  sym__hostbased_authentication = 230,
  sym__host_key_algorithms = 231,
  sym__host_key_alias = 232,
  sym__hostname = 233,
  sym__identities_only = 234,
  sym__identity_agent = 235,
  sym__identity_file = 236,
  sym__ignore_unknown = 237,
  sym__ipqos = 238,
  sym__kbd_interactive_authentication = 239,
  sym__kex_algorithms = 240,
  sym__known_hosts_command = 241,
  sym__local_command = 242,
  sym__local_forward = 243,
  sym__forward_value1 = 244,
  sym__forward_value2 = 245,
  sym__log_level = 246,
  sym__log_verbose = 247,
  sym__log_verbose_value = 248,
  sym__log_verbose_quoted = 249,
  sym__macs = 250,
  sym__no_host_authentication_for_localhost = 251,
  sym__number_of_password_prompts = 252,
  sym__password_authentication = 253,
  sym__permit_local_command = 254,
  sym__permit_remote_open = 255,
  sym__permit_remote_open_value = 256,
  sym__pkcs11_provider = 257,
  sym__port = 258,
  sym__preferred_authentications = 259,
  sym__proxy_command = 260,
  sym__proxy_jump = 261,
  sym__proxy_use_fdpass = 262,
  sym__pubkey_accepted_algorithms = 263,
  sym__pubkey_authentication = 264,
  sym__pubkey_authentication_arg = 265,
  sym__rekey_limit = 266,
  sym__remote_command = 267,
  sym__remote_forward = 268,
  sym__request_tty = 269,
  sym__required_rsa_size = 270,
  sym__revoked_host_keys = 271,
  sym__security_key_provider = 272,
  sym__send_env = 273,
  sym__send_env_value = 274,
  sym__server_alive_count_max = 275,
  sym__server_alive_interval = 276,
  sym__session_type = 277,
  sym__set_env = 278,
  sym__set_env_value = 279,
  sym__stdin_null = 280,
  sym__stream_local_bind_mask = 281,
  sym__stream_local_bind_unlink = 282,
  sym__strict_host_key_checking = 283,
  sym__syslog_facility = 284,
  sym__tcp_keep_alive = 285,
  sym__tag = 286,
  sym__tunnel = 287,
  sym__tunnel_device = 288,
  sym__update_host_keys = 289,
  sym__user = 290,
  sym__user_known_hosts_file = 291,
  sym__verify_host_key_dns = 292,
  sym__visual_host_key = 293,
  sym__xauth_location = 294,
  sym__file_token = 295,
  sym__hosts_token = 296,
  sym__hostname_token = 297,
  sym__proxy_token = 298,
  sym__var_value = 299,
  sym_variable = 300,
  sym__file_string = 301,
  sym__hosts_string = 302,
  sym__hostname_string = 303,
  sym__proxy_string = 304,
  sym__token_string = 305,
  sym__string = 306,
  sym__file_pattern_vars = 307,
  sym__pattern = 308,
  sym__boolean = 309,
  sym_number = 310,
  sym_bytes = 311,
  sym_time = 312,
  sym__sep = 313,
  aux_sym_config_repeat1 = 314,
  aux_sym_host_declaration_repeat1 = 315,
  aux_sym_match_declaration_repeat1 = 316,
  aux_sym__match_exec_repeat1 = 317,
  aux_sym__match_exec_repeat2 = 318,
  aux_sym__match_localnetwork_repeat1 = 319,
  aux_sym__match_localnetwork_repeat2 = 320,
  aux_sym__match_value_repeat1 = 321,
  aux_sym__match_value_repeat2 = 322,
  aux_sym__match_value_repeat3 = 323,
  aux_sym__match_value_repeat4 = 324,
  aux_sym__declarations_repeat1 = 325,
  aux_sym__canonical_domains_repeat1 = 326,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 327,
  aux_sym__cnames_map_repeat1 = 328,
  aux_sym__ca_signature_algorithms_repeat1 = 329,
  aux_sym__ciphers_repeat1 = 330,
  aux_sym__global_known_hosts_file_repeat1 = 331,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 332,
  aux_sym__ignore_unknown_repeat1 = 333,
  aux_sym__kex_algorithms_repeat1 = 334,
  aux_sym__log_verbose_repeat1 = 335,
  aux_sym__log_verbose_repeat2 = 336,
  aux_sym__log_verbose_value_repeat1 = 337,
  aux_sym__macs_repeat1 = 338,
  aux_sym__permit_remote_open_repeat1 = 339,
  aux_sym__preferred_authentications_repeat1 = 340,
  aux_sym__remote_command_repeat1 = 341,
  aux_sym__send_env_repeat1 = 342,
  aux_sym__send_env_value_repeat1 = 343,
  aux_sym__set_env_repeat1 = 344,
  aux_sym__user_known_hosts_file_repeat1 = 345,
  aux_sym__file_string_repeat1 = 346,
  aux_sym__file_string_repeat2 = 347,
  aux_sym__hosts_string_repeat1 = 348,
  aux_sym__hostname_string_repeat1 = 349,
  aux_sym__hostname_string_repeat2 = 350,
  aux_sym__proxy_string_repeat1 = 351,
  aux_sym__token_string_repeat1 = 352,
  aux_sym__file_pattern_vars_repeat1 = 353,
  aux_sym__file_pattern_vars_repeat2 = 354,
  anon_alias_sym_User = 355,
  anon_alias_sym_host = 356,
  alias_sym_pattern = 357,
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
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 5},
  [5] = {.index = 14, .length = 5},
  [6] = {.index = 19, .length = 4},
  [7] = {.index = 23, .length = 6},
  [8] = {.index = 29, .length = 4},
  [10] = {.index = 33, .length = 1},
  [11] = {.index = 34, .length = 1},
  [12] = {.index = 35, .length = 2},
  [13] = {.index = 37, .length = 2},
  [14] = {.index = 37, .length = 2},
  [15] = {.index = 39, .length = 1},
  [16] = {.index = 40, .length = 4},
  [17] = {.index = 44, .length = 3},
  [19] = {.index = 47, .length = 1},
  [20] = {.index = 48, .length = 5},
  [21] = {.index = 53, .length = 4},
  [22] = {.index = 37, .length = 2},
  [24] = {.index = 57, .length = 3},
  [25] = {.index = 60, .length = 7},
  [26] = {.index = 67, .length = 3},
  [27] = {.index = 70, .length = 1},
  [28] = {.index = 71, .length = 9},
  [29] = {.index = 80, .length = 7},
  [32] = {.index = 87, .length = 1},
  [33] = {.index = 88, .length = 2},
  [34] = {.index = 90, .length = 2},
  [35] = {.index = 90, .length = 2},
  [36] = {.index = 90, .length = 2},
  [37] = {.index = 92, .length = 4},
  [38] = {.index = 96, .length = 3},
  [39] = {.index = 99, .length = 6},
  [40] = {.index = 105, .length = 2},
  [41] = {.index = 70, .length = 1},
  [43] = {.index = 107, .length = 3},
  [44] = {.index = 110, .length = 2},
  [45] = {.index = 112, .length = 7},
  [46] = {.index = 119, .length = 7},
  [47] = {.index = 126, .length = 3},
  [48] = {.index = 129, .length = 6},
  [49] = {.index = 135, .length = 2},
  [50] = {.index = 137, .length = 2},
  [51] = {.index = 139, .length = 4},
  [52] = {.index = 143, .length = 2},
  [54] = {.index = 145, .length = 3},
  [55] = {.index = 148, .length = 3},
  [56] = {.index = 151, .length = 3},
  [57] = {.index = 154, .length = 11},
  [58] = {.index = 165, .length = 4},
  [59] = {.index = 169, .length = 4},
  [60] = {.index = 169, .length = 4},
  [61] = {.index = 173, .length = 4},
  [62] = {.index = 177, .length = 3},
  [63] = {.index = 180, .length = 2},
  [64] = {.index = 182, .length = 6},
  [66] = {.index = 188, .length = 5},
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
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
  [60] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_keyword, 0},
    {field_source_domain_list, 2, .inherited = true},
    {field_source_domain_list, 3, .inherited = true},
    {field_target_domain_list, 2, .inherited = true},
    {field_target_domain_list, 3, .inherited = true},
  [67] =
    {field_argument, 2},
    {field_argument, 3},
    {field_keyword, 0},
  [70] =
    {field_name, 1},
  [71] =
    {field_argument, 2},
    {field_argument, 3},
    {field_file, 2, .inherited = true},
    {field_file, 3, .inherited = true},
    {field_function, 2, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 2, .inherited = true},
    {field_line, 3, .inherited = true},
  [80] =
    {field_argument, 2},
    {field_argument, 3},
    {field_host, 2, .inherited = true},
    {field_host, 3, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 3, .inherited = true},
  [87] =
    {field_argument, 1},
  [88] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [90] =
    {field_argument, 2},
    {field_criteria, 0},
  [92] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_keyword, 0},
  [96] =
    {field_argument, 1},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [99] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_source_domain_list, 0, .inherited = true},
    {field_source_domain_list, 1, .inherited = true},
    {field_target_domain_list, 0, .inherited = true},
    {field_target_domain_list, 1, .inherited = true},
  [105] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
  [107] =
    {field_argument, 2},
    {field_argument, 4},
    {field_keyword, 0},
  [110] =
    {field_bind_address, 0},
    {field_port, 2},
  [112] =
    {field_argument, 2},
    {field_argument, 4},
    {field_bind_address, 2, .inherited = true},
    {field_host, 4, .inherited = true},
    {field_keyword, 0},
    {field_port, 2, .inherited = true},
    {field_port, 4, .inherited = true},
  [119] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_file, 3, .inherited = true},
    {field_function, 3, .inherited = true},
    {field_keyword, 0},
    {field_line, 3, .inherited = true},
  [126] =
    {field_file, 1, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 1, .inherited = true},
  [129] =
    {field_file, 0, .inherited = true},
    {field_file, 1, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
    {field_line, 0, .inherited = true},
    {field_line, 1, .inherited = true},
  [135] =
    {field_host, 0},
    {field_port, 2},
  [137] =
    {field_host, 1, .inherited = true},
    {field_port, 1, .inherited = true},
  [139] =
    {field_host, 0, .inherited = true},
    {field_host, 1, .inherited = true},
    {field_port, 0, .inherited = true},
    {field_port, 1, .inherited = true},
  [143] =
    {field_argument, 1},
    {field_argument, 2},
  [145] =
    {field_argument, 2},
    {field_argument, 3},
    {field_criteria, 0},
  [148] =
    {field_source_domain_list, 0},
    {field_target_domain_list, 2},
    {field_target_domain_list, 3},
  [151] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
  [154] =
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
  [165] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_keyword, 0},
  [169] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_criteria, 0},
  [173] =
    {field_source_domain_list, 0},
    {field_source_domain_list, 1},
    {field_target_domain_list, 3},
    {field_target_domain_list, 4},
  [177] =
    {field_file, 0},
    {field_function, 2},
    {field_line, 4},
  [180] =
    {field_host, 1},
    {field_port, 3},
  [182] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_argument, 5},
    {field_argument, 6},
    {field_keyword, 0},
  [188] =
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
  [18] = {
    [0] = aux_sym__match_localnetwork_token2,
  },
  [22] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [23] = {
    [0] = sym_variable,
  },
  [27] = {
    [1] = sym_variable,
  },
  [30] = {
    [1] = sym_variable,
  },
  [31] = {
    [1] = alias_sym_pattern,
  },
  [34] = {
    [0] = anon_alias_sym_host,
  },
  [35] = {
    [2] = aux_sym__match_localnetwork_token2,
  },
  [42] = {
    [1] = aux_sym__match_localnetwork_token2,
  },
  [53] = {
    [0] = alias_sym_pattern,
    [1] = alias_sym_pattern,
  },
  [59] = {
    [3] = aux_sym__match_localnetwork_token2,
  },
  [65] = {
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
  [95] = 71,
  [96] = 91,
  [97] = 97,
  [98] = 98,
  [99] = 84,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 71,
  [110] = 110,
  [111] = 91,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 97,
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
  [151] = 106,
  [152] = 152,
  [153] = 102,
  [154] = 102,
  [155] = 155,
  [156] = 156,
  [157] = 84,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 84,
  [163] = 163,
  [164] = 164,
  [165] = 84,
  [166] = 166,
  [167] = 167,
  [168] = 106,
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
  [251] = 159,
  [252] = 159,
  [253] = 253,
  [254] = 84,
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
  [314] = 176,
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
  [783] = 778,
  [784] = 784,
  [785] = 778,
  [786] = 778,
  [787] = 778,
  [788] = 778,
  [789] = 752,
  [790] = 752,
  [791] = 752,
  [792] = 752,
  [793] = 752,
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
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '$') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '+') ADVANCE(1872);
      if (lookahead == ',') ADVANCE(1840);
      if (lookahead == '-') ADVANCE(1873);
      if (lookahead == ':') ADVANCE(1870);
      if (lookahead == '=') ADVANCE(1967);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead == '@') ADVANCE(1937);
      if (lookahead == 'S') ADVANCE(1804);
      if (lookahead == '^') ADVANCE(1877);
      if (lookahead == 's') ADVANCE(1804);
      if (lookahead == '}') ADVANCE(2030);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1816);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1816);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1804);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2047);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1797);
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '+') ADVANCE(1872);
      if (lookahead == '-') ADVANCE(1873);
      if (lookahead == '0') ADVANCE(2035);
      if (lookahead == ':') ADVANCE(1870);
      if (lookahead == '=') ADVANCE(2044);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead == 'A') ADVANCE(1195);
      if (lookahead == 'C') ADVANCE(771);
      if (lookahead == 'E') ADVANCE(1759);
      if (lookahead == 'F') ADVANCE(1119);
      if (lookahead == 'O') ADVANCE(1516);
      if (lookahead == 'S') ADVANCE(1925);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead == 'w') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2045);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1422);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1597);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2036);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1807);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1807);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1948);
      if (lookahead == '%') ADVANCE(1951);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1949);
      if (lookahead != 0) ADVANCE(1946);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1948);
      if (lookahead == '%') ADVANCE(1952);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1949);
      if (lookahead != 0) ADVANCE(1946);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1950);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1949);
      if (lookahead != 0) ADVANCE(1946);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1809);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1953);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1949);
      if (lookahead != 0) ADVANCE(1946);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == ',') ADVANCE(1840);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '-') ADVANCE(1873);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1961);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead != 0) ADVANCE(1804);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(1872);
      if (lookahead == '-') ADVANCE(1873);
      if (lookahead == '0') ADVANCE(1788);
      if (lookahead == '3') ADVANCE(375);
      if (lookahead == '^') ADVANCE(1877);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2039);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2040);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2041);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2042);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2038);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1789);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == 'D') ADVANCE(237);
      if (lookahead == 'L') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(1938);
      if (lookahead == 'U') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead == 'y') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead == 'G' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm') ADVANCE(2037);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(1797);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(1797);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1816);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(1798);
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '$') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead == 'S') ADVANCE(1805);
      if (lookahead == 'n') ADVANCE(1806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '$') ADVANCE(1807);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '$') ADVANCE(1807);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead == 'n') ADVANCE(1806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '$') ADVANCE(1807);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '$') ADVANCE(1817);
      if (lookahead == '%') ADVANCE(1820);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0) ADVANCE(1816);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '$') ADVANCE(1817);
      if (lookahead == '%') ADVANCE(1820);
      if (lookahead != 0) ADVANCE(1816);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '%') ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '%') ADVANCE(1820);
      if (lookahead != 0) ADVANCE(1816);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '%') ADVANCE(1809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '%') ADVANCE(1819);
      if (lookahead != 0) ADVANCE(1816);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == ',') ADVANCE(1840);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0) ADVANCE(1816);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead == 'n') ADVANCE(1806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0) ADVANCE(1816);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1812);
      if (lookahead == '*') ADVANCE(1848);
      if (lookahead == '0') ADVANCE(1813);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1813);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead == '$') ADVANCE(1808);
      if (lookahead == '%') ADVANCE(1812);
      if (lookahead == '*') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1813);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead == '$') ADVANCE(2008);
      if (lookahead == 'n') ADVANCE(1833);
      if (lookahead == 'y') ADVANCE(1828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead == '$') ADVANCE(2008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead == '*') ADVANCE(1848);
      if (lookahead == 'a') ADVANCE(1831);
      if (lookahead == 'n') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(1948);
      if (lookahead == '%') ADVANCE(1951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1946);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(1948);
      if (lookahead == '%') ADVANCE(1952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1946);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(1818);
      if (lookahead == '%') ADVANCE(1821);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1822);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(1950);
      if (lookahead == 'n') ADVANCE(1947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1946);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(1953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1946);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == ',') ADVANCE(1840);
      if (lookahead == ':') ADVANCE(1870);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1804);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == ':') ADVANCE(1870);
      if (lookahead == '?') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1816);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(392);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(511);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(145);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(692);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(430);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(350);
      if (lookahead == '@') ADVANCE(566);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(697);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(441);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(410);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(513);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(670);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '1') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '@') ADVANCE(546);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(485);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(630);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(632);
      if (lookahead == '4') ADVANCE(84);
      if (lookahead == '6') ADVANCE(85);
      if (lookahead == '8') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(634);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(536);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(650);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(647);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(419);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 100:
      if (lookahead == '.') ADVANCE(345);
      END_STATE();
    case 101:
      if (lookahead == '.') ADVANCE(549);
      END_STATE();
    case 102:
      if (lookahead == '.') ADVANCE(355);
      END_STATE();
    case 103:
      if (lookahead == '.') ADVANCE(356);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(357);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(358);
      END_STATE();
    case 106:
      if (lookahead == '0') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == '0') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == '0') ADVANCE(68);
      END_STATE();
    case 109:
      if (lookahead == '1') ADVANCE(1783);
      if (lookahead == '2') ADVANCE(1783);
      if (lookahead == '3') ADVANCE(1783);
      if (lookahead == '4') ADVANCE(1783);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(1997);
      END_STATE();
    case 111:
      if (lookahead == '1') ADVANCE(1999);
      if (lookahead == '2') ADVANCE(73);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(225);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(700);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(1899);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(1994);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(1994);
      if (lookahead == '2') ADVANCE(187);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(2001);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(143);
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(172);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '6') ADVANCE(174);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(221);
      END_STATE();
    case 123:
      if (lookahead == '1') ADVANCE(223);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(222);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(114);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(227);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(169);
      END_STATE();
    case 130:
      if (lookahead == '1') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == '1') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == '1') ADVANCE(1468);
      END_STATE();
    case 133:
      if (lookahead == '1') ADVANCE(226);
      END_STATE();
    case 134:
      if (lookahead == '1') ADVANCE(229);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(1997);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(216);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(1994);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(2001);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(178);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(2000);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(108);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(220);
      if (lookahead == '9') ADVANCE(158);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(183);
      if (lookahead == '3') ADVANCE(218);
      if (lookahead == '5') ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(183);
      if (lookahead == '5') ADVANCE(124);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(181);
      if (lookahead == '5') ADVANCE(126);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == '3') ADVANCE(217);
      if (lookahead == '5') ADVANCE(152);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(110);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(191);
      if (lookahead == '3') ADVANCE(219);
      if (lookahead == '5') ADVANCE(157);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(191);
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(117);
      END_STATE();
    case 158:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 159:
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 161:
      if (lookahead == '2') ADVANCE(75);
      END_STATE();
    case 162:
      if (lookahead == '2') ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 164:
      if (lookahead == '2') ADVANCE(199);
      END_STATE();
    case 165:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 167:
      if (lookahead == '2') ADVANCE(90);
      END_STATE();
    case 168:
      if (lookahead == '2') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 170:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 171:
      if (lookahead == '2') ADVANCE(96);
      END_STATE();
    case 172:
      if (lookahead == '3') ADVANCE(107);
      END_STATE();
    case 173:
      if (lookahead == '4') ADVANCE(1997);
      END_STATE();
    case 174:
      if (lookahead == '4') ADVANCE(74);
      END_STATE();
    case 175:
      if (lookahead == '4') ADVANCE(1994);
      END_STATE();
    case 176:
      if (lookahead == '4') ADVANCE(2001);
      END_STATE();
    case 177:
      if (lookahead == '5') ADVANCE(1895);
      END_STATE();
    case 178:
      if (lookahead == '5') ADVANCE(204);
      END_STATE();
    case 179:
      if (lookahead == '5') ADVANCE(1999);
      END_STATE();
    case 180:
      if (lookahead == '5') ADVANCE(112);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(210);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(205);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(206);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(122);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(207);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(209);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(213);
      END_STATE();
    case 190:
      if (lookahead == '5') ADVANCE(123);
      END_STATE();
    case 191:
      if (lookahead == '5') ADVANCE(208);
      END_STATE();
    case 192:
      if (lookahead == '5') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == '5') ADVANCE(129);
      END_STATE();
    case 194:
      if (lookahead == '5') ADVANCE(130);
      END_STATE();
    case 195:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 196:
      if (lookahead == '5') ADVANCE(128);
      END_STATE();
    case 197:
      if (lookahead == '5') ADVANCE(190);
      END_STATE();
    case 198:
      if (lookahead == '5') ADVANCE(195);
      END_STATE();
    case 199:
      if (lookahead == '5') ADVANCE(196);
      END_STATE();
    case 200:
      if (lookahead == '5') ADVANCE(133);
      END_STATE();
    case 201:
      if (lookahead == '5') ADVANCE(200);
      END_STATE();
    case 202:
      if (lookahead == '5') ADVANCE(232);
      END_STATE();
    case 203:
      if (lookahead == '5') ADVANCE(214);
      END_STATE();
    case 204:
      if (lookahead == '6') ADVANCE(1896);
      END_STATE();
    case 205:
      if (lookahead == '6') ADVANCE(1997);
      END_STATE();
    case 206:
      if (lookahead == '6') ADVANCE(1995);
      END_STATE();
    case 207:
      if (lookahead == '6') ADVANCE(1994);
      END_STATE();
    case 208:
      if (lookahead == '6') ADVANCE(2001);
      END_STATE();
    case 209:
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 210:
      if (lookahead == '6') ADVANCE(2000);
      END_STATE();
    case 211:
      if (lookahead == '6') ADVANCE(113);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(229);
      END_STATE();
    case 214:
      if (lookahead == '6') ADVANCE(231);
      END_STATE();
    case 215:
      if (lookahead == '7') ADVANCE(211);
      END_STATE();
    case 216:
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 217:
      if (lookahead == '8') ADVANCE(175);
      END_STATE();
    case 218:
      if (lookahead == '8') ADVANCE(173);
      END_STATE();
    case 219:
      if (lookahead == '8') ADVANCE(176);
      END_STATE();
    case 220:
      if (lookahead == '8') ADVANCE(55);
      END_STATE();
    case 221:
      if (lookahead == '9') ADVANCE(1997);
      END_STATE();
    case 222:
      if (lookahead == '9') ADVANCE(2001);
      END_STATE();
    case 223:
      if (lookahead == '9') ADVANCE(59);
      END_STATE();
    case 224:
      if (lookahead == '9') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 225:
      if (lookahead == '9') ADVANCE(77);
      END_STATE();
    case 226:
      if (lookahead == '9') ADVANCE(81);
      END_STATE();
    case 227:
      if (lookahead == '9') ADVANCE(231);
      END_STATE();
    case 228:
      if (lookahead == '@') ADVANCE(546);
      END_STATE();
    case 229:
      if (lookahead == '@') ADVANCE(566);
      END_STATE();
    case 230:
      if (lookahead == '@') ADVANCE(567);
      END_STATE();
    case 231:
      if (lookahead == '@') ADVANCE(568);
      END_STATE();
    case 232:
      if (lookahead == '@') ADVANCE(569);
      END_STATE();
    case 233:
      if (lookahead == 'A') ADVANCE(278);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1477);
      END_STATE();
    case 234:
      if (lookahead == 'A') ADVANCE(256);
      END_STATE();
    case 235:
      if (lookahead == 'A') ADVANCE(257);
      END_STATE();
    case 236:
      if (lookahead == 'A') ADVANCE(284);
      END_STATE();
    case 237:
      if (lookahead == 'A') ADVANCE(246);
      END_STATE();
    case 238:
      if (lookahead == 'B') ADVANCE(283);
      END_STATE();
    case 239:
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1025);
      END_STATE();
    case 240:
      if (lookahead == 'C') ADVANCE(255);
      END_STATE();
    case 241:
      if (lookahead == 'C') ADVANCE(235);
      END_STATE();
    case 242:
      if (lookahead == 'E') ADVANCE(238);
      END_STATE();
    case 243:
      if (lookahead == 'E') ADVANCE(1177);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 244:
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(1488);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1564);
      END_STATE();
    case 245:
      if (lookahead == 'E') ADVANCE(1989);
      END_STATE();
    case 246:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 247:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(273);
      END_STATE();
    case 249:
      if (lookahead == 'F') ADVANCE(263);
      END_STATE();
    case 250:
      if (lookahead == 'G') ADVANCE(1990);
      END_STATE();
    case 251:
      if (lookahead == 'H') ADVANCE(287);
      END_STATE();
    case 252:
      if (lookahead == 'H') ADVANCE(1991);
      END_STATE();
    case 253:
      if (lookahead == 'H') ADVANCE(288);
      END_STATE();
    case 254:
      if (lookahead == 'I') ADVANCE(247);
      END_STATE();
    case 255:
      if (lookahead == 'K') ADVANCE(1913);
      END_STATE();
    case 256:
      if (lookahead == 'L') ADVANCE(1989);
      END_STATE();
    case 257:
      if (lookahead == 'L') ADVANCE(1787);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(266);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(932);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1476);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(1991);
      END_STATE();
    case 261:
      if (lookahead == 'O') ADVANCE(821);
      if (lookahead == 'e') ADVANCE(1988);
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 262:
      if (lookahead == 'O') ADVANCE(1078);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1251);
      END_STATE();
    case 263:
      if (lookahead == 'O') ADVANCE(1989);
      END_STATE();
    case 264:
      if (lookahead == 'O') ADVANCE(275);
      END_STATE();
    case 265:
      if (lookahead == 'O') ADVANCE(240);
      END_STATE();
    case 266:
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(272);
      END_STATE();
    case 268:
      if (lookahead == 'O') ADVANCE(241);
      END_STATE();
    case 269:
      if (lookahead == 'R') ADVANCE(270);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1102);
      END_STATE();
    case 270:
      if (lookahead == 'R') ADVANCE(267);
      END_STATE();
    case 271:
      if (lookahead == 'R') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(1100);
      END_STATE();
    case 272:
      if (lookahead == 'R') ADVANCE(1989);
      END_STATE();
    case 273:
      if (lookahead == 'R') ADVANCE(1991);
      END_STATE();
    case 274:
      if (lookahead == 'S') ADVANCE(1827);
      if (lookahead == 'n') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 275:
      if (lookahead == 'S') ADVANCE(245);
      END_STATE();
    case 276:
      if (lookahead == 'S') ADVANCE(265);
      END_STATE();
    case 277:
      if (lookahead == 'S') ADVANCE(248);
      END_STATE();
    case 278:
      if (lookahead == 'T') ADVANCE(234);
      END_STATE();
    case 279:
      if (lookahead == 'T') ADVANCE(1989);
      END_STATE();
    case 280:
      if (lookahead == 'T') ADVANCE(252);
      END_STATE();
    case 281:
      if (lookahead == 'T') ADVANCE(253);
      END_STATE();
    case 282:
      if (lookahead == 'U') ADVANCE(254);
      END_STATE();
    case 283:
      if (lookahead == 'U') ADVANCE(250);
      END_STATE();
    case 284:
      if (lookahead == 'U') ADVANCE(281);
      END_STATE();
    case 285:
      if (lookahead == 'U') ADVANCE(280);
      END_STATE();
    case 286:
      if (lookahead == '^') ADVANCE(1892);
      if (lookahead == 'n') ADVANCE(1891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1890);
      END_STATE();
    case 287:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 288:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 290:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 291:
      if (lookahead == 'a') ADVANCE(1997);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(2001);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 328:
      if (lookahead == 'b') ADVANCE(469);
      END_STATE();
    case 329:
      if (lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 330:
      if (lookahead == 'b') ADVANCE(340);
      END_STATE();
    case 331:
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 332:
      if (lookahead == 'b') ADVANCE(562);
      END_STATE();
    case 333:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(550);
      END_STATE();
    case 335:
      if (lookahead == 'b') ADVANCE(502);
      END_STATE();
    case 336:
      if (lookahead == 'b') ADVANCE(564);
      END_STATE();
    case 337:
      if (lookahead == 'b') ADVANCE(626);
      END_STATE();
    case 338:
      if (lookahead == 'b') ADVANCE(327);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(1988);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1102);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(1993);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(331);
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(1992);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(672);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(553);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(515);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(1942);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(1943);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(2011);
      if (lookahead == 'n') ADVANCE(2018);
      if (lookahead == 's') ADVANCE(2023);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(1992);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(611);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1786);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(652);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(653);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(657);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(1956);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(1992);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 's') ADVANCE(648);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 421:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(866);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 422:
      if (lookahead == 'f') ADVANCE(1975);
      END_STATE();
    case 423:
      if (lookahead == 'f') ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'f') ADVANCE(473);
      END_STATE();
    case 425:
      if (lookahead == 'f') ADVANCE(422);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      END_STATE();
    case 426:
      if (lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 427:
      if (lookahead == 'g') ADVANCE(1994);
      END_STATE();
    case 428:
      if (lookahead == 'g') ADVANCE(435);
      END_STATE();
    case 429:
      if (lookahead == 'g') ADVANCE(411);
      END_STATE();
    case 430:
      if (lookahead == 'g') ADVANCE(598);
      END_STATE();
    case 431:
      if (lookahead == 'g') ADVANCE(628);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == 'k') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(524);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 434:
      if (lookahead == 'h') ADVANCE(589);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1042);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1452);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1306);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(665);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1562);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 446:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 447:
      if (lookahead == 'h') ADVANCE(401);
      END_STATE();
    case 448:
      if (lookahead == 'h') ADVANCE(302);
      END_STATE();
    case 449:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 450:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 451:
      if (lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(318);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(320);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(542);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 489:
      if (lookahead == 'k') ADVANCE(1852);
      END_STATE();
    case 490:
      if (lookahead == 'k') ADVANCE(1884);
      END_STATE();
    case 491:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 492:
      if (lookahead == 'k') ADVANCE(398);
      END_STATE();
    case 493:
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(98);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(908);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1376);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1714);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1407);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1563);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(1994);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(1998);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(1996);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(1853);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(2001);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(1993);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(881);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(931);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(932);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1476);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1402);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(641);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(2033);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(1883);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(600);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1335);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(583);
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
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(687);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(551);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(674);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(565);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(413);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(415);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(1993);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(1784);
      if (lookahead == 'u') ADVANCE(588);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1302);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1486);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1456);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 602:
      if (lookahead == 's') ADVANCE(1997);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(2031);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(2001);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(667);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(678);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(455);
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
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(682);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(1988);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(1857);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(1981);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(1980);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 684:
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 685:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 686:
      if (lookahead == 'u') ADVANCE(666);
      END_STATE();
    case 687:
      if (lookahead == 'u') ADVANCE(659);
      END_STATE();
    case 688:
      if (lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 689:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 692:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 693:
      if (lookahead == 'v') ADVANCE(409);
      END_STATE();
    case 694:
      if (lookahead == 'v') ADVANCE(390);
      END_STATE();
    case 695:
      if (lookahead == 'w') ADVANCE(1974);
      END_STATE();
    case 696:
      if (lookahead == 'w') ADVANCE(372);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(719);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1215);
      END_STATE();
    case 697:
      if (lookahead == 'w') ADVANCE(480);
      END_STATE();
    case 698:
      if (lookahead == 'w') ADVANCE(558);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(359);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 701:
      if (lookahead == 'y') ADVANCE(1988);
      END_STATE();
    case 702:
      if (lookahead == 'y') ADVANCE(1855);
      END_STATE();
    case 703:
      if (lookahead == 'y') ADVANCE(1992);
      END_STATE();
    case 704:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 705:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 706:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1302);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1486);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1456);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 707:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 708:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1042);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1452);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1306);
      END_STATE();
    case 709:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1629);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1303);
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
          lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1758);
      END_STATE();
    case 716:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1459);
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
          lookahead == 'a') ADVANCE(1197);
      END_STATE();
    case 720:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1458);
      END_STATE();
    case 721:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1485);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(826);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1490);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(907);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(809);
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
          lookahead == 'a') ADVANCE(1212);
      END_STATE();
    case 725:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1499);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1243);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      END_STATE();
    case 729:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1049);
      END_STATE();
    case 730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1210);
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
          lookahead == 'a') ADVANCE(824);
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
          lookahead == 'a') ADVANCE(1507);
      END_STATE();
    case 748:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1571);
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
      END_STATE();
    case 758:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1218);
      END_STATE();
    case 759:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1054);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
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
          lookahead == 'a') ADVANCE(1464);
      END_STATE();
    case 765:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1318);
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
          lookahead == 'a') ADVANCE(1582);
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
          lookahead == 'a') ADVANCE(1246);
      END_STATE();
    case 795:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1244);
      END_STATE();
    case 796:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1247);
      END_STATE();
    case 797:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1245);
      END_STATE();
    case 798:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 799:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(864);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(948);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1728);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(994);
      END_STATE();
    case 801:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1729);
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
          lookahead == 'b') ADVANCE(889);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1757);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1370);
      END_STATE();
    case 807:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(730);
      END_STATE();
    case 808:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(736);
      END_STATE();
    case 809:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1181);
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
          lookahead == 'b') ADVANCE(1141);
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
          lookahead == 'c') ADVANCE(719);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1215);
      END_STATE();
    case 822:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1537);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      END_STATE();
    case 823:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1073);
      END_STATE();
    case 824:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1192);
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
          lookahead == 'c') ADVANCE(764);
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
          lookahead == 'u') ADVANCE(1583);
      END_STATE();
    case 849:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
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
          lookahead == 'c') ADVANCE(1013);
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
          lookahead == 'd') ADVANCE(799);
      END_STATE();
    case 869:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1921);
      END_STATE();
    case 870:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1922);
      END_STATE();
    case 871:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1935);
      END_STATE();
    case 872:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1945);
      END_STATE();
    case 873:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1954);
      END_STATE();
    case 874:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1262);
      END_STATE();
    case 875:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1901);
      END_STATE();
    case 876:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1920);
      END_STATE();
    case 877:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1930);
      END_STATE();
    case 878:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1843);
      END_STATE();
    case 879:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 880:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1125);
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
          lookahead == 'd') ADVANCE(796);
      END_STATE();
    case 902:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(798);
      END_STATE();
    case 903:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
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
          lookahead == 'e') ADVANCE(1910);
      END_STATE();
    case 911:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1859);
      END_STATE();
    case 912:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1924);
      END_STATE();
    case 913:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 914:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1964);
      END_STATE();
    case 915:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1914);
      END_STATE();
    case 917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1977);
      END_STATE();
    case 918:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1982);
      END_STATE();
    case 919:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1861);
      END_STATE();
    case 920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1874);
      END_STATE();
    case 921:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1957);
      END_STATE();
    case 922:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1984);
      END_STATE();
    case 923:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1864);
      END_STATE();
    case 924:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1893);
      END_STATE();
    case 925:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1902);
      END_STATE();
    case 926:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1887);
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
          lookahead == 'e') ADVANCE(1310);
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
          lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 938:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 941:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1780);
      END_STATE();
    case 942:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
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
          lookahead == 'e') ADVANCE(714);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 946:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1498);
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
          lookahead == 's') ADVANCE(1567);
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
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 967:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1572);
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
          lookahead == 'e') ADVANCE(1574);
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
          lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1772);
      END_STATE();
    case 993:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1508);
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
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 1011:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 1012:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 1013:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1475);
      END_STATE();
    case 1014:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1359);
      END_STATE();
    case 1015:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1360);
      END_STATE();
    case 1016:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1361);
      END_STATE();
    case 1017:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 1018:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 1019:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 1020:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1365);
      END_STATE();
    case 1021:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1366);
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
          lookahead == 'f') ADVANCE(726);
      END_STATE();
    case 1028:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(728);
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
          lookahead == 'f') ADVANCE(1460);
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
          lookahead == 'f') ADVANCE(1140);
      END_STATE();
    case 1037:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(770);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1424);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(715);
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
          lookahead == 'g') ADVANCE(1978);
      END_STATE();
    case 1043:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1973);
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
          lookahead == 'h') ADVANCE(1886);
      END_STATE();
    case 1064:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1894);
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
          lookahead == 'h') ADVANCE(1014);
      END_STATE();
    case 1091:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1015);
      END_STATE();
    case 1092:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1016);
      END_STATE();
    case 1093:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1017);
      END_STATE();
    case 1094:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1018);
      END_STATE();
    case 1095:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1019);
      END_STATE();
    case 1096:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1020);
      END_STATE();
    case 1097:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1021);
      END_STATE();
    case 1098:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1477);
      END_STATE();
    case 1099:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 1100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1025);
      END_STATE();
    case 1101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1045);
      END_STATE();
    case 1102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1034);
      END_STATE();
    case 1104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1454);
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
          lookahead == 'i') ADVANCE(1309);
      END_STATE();
    case 1124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1782);
      END_STATE();
    case 1125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1316);
      END_STATE();
    case 1126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 1127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1315);
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
          lookahead == 'i') ADVANCE(1229);
      END_STATE();
    case 1141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1322);
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
          lookahead == 'k') ADVANCE(1969);
      END_STATE();
    case 1175:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1972);
      END_STATE();
    case 1176:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1823);
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
          lookahead == 'k') ADVANCE(965);
      END_STATE();
    case 1181:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(934);
      END_STATE();
    case 1182:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(938);
      END_STATE();
    case 1183:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(941);
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
          lookahead == 'l') ADVANCE(1979);
      END_STATE();
    case 1199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1256);
      END_STATE();
    case 1200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1923);
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
          lookahead == 'l') ADVANCE(1968);
      END_STATE();
    case 1204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1963);
      END_STATE();
    case 1205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1863);
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
          lookahead == 'l') ADVANCE(1372);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1568);
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
          lookahead == 'l') ADVANCE(1371);
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
          lookahead == 'l') ADVANCE(808);
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
          lookahead == 'm') ADVANCE(1457);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1312);
      END_STATE();
    case 1251:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(813);
      END_STATE();
    case 1252:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1453);
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
          lookahead == 'm') ADVANCE(1461);
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
          lookahead == 'm') ADVANCE(1462);
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
          lookahead == 'm') ADVANCE(765);
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
          lookahead == 'n') ADVANCE(1879);
      END_STATE();
    case 1289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1915);
      END_STATE();
    case 1290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1987);
      END_STATE();
    case 1291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1888);
      END_STATE();
    case 1292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1931);
      END_STATE();
    case 1293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1903);
      END_STATE();
    case 1294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1941);
      END_STATE();
    case 1295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1929);
      END_STATE();
    case 1296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1897);
      END_STATE();
    case 1297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1907);
      END_STATE();
    case 1298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1917);
      END_STATE();
    case 1299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1918);
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
          lookahead == 's') ADVANCE(1101);
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
          lookahead == 'n') ADVANCE(1314);
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
          lookahead == 'n') ADVANCE(1047);
      END_STATE();
    case 1310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1663);
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
          lookahead == 'n') ADVANCE(939);
      END_STATE();
    case 1315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1673);
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
          lookahead == 'n') ADVANCE(1643);
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
          lookahead == 'n') ADVANCE(797);
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
          lookahead == 'o') ADVANCE(821);
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
          lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 1372:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(807);
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
          lookahead == 'o') ADVANCE(1497);
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
          lookahead == 'o') ADVANCE(1570);
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
          lookahead == 'p') ADVANCE(1180);
      END_STATE();
    case 1453:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1936);
      END_STATE();
    case 1454:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1875);
      END_STATE();
    case 1455:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(881);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(931);
      END_STATE();
    case 1456:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1070);
      END_STATE();
    case 1457:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1524);
      END_STATE();
    case 1458:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1099);
      END_STATE();
    case 1459:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 1460:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(782);
      END_STATE();
    case 1461:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1647);
      END_STATE();
    case 1462:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1650);
      END_STATE();
    case 1463:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(914);
      END_STATE();
    case 1464:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1012);
      END_STATE();
    case 1465:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(977);
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
          lookahead == 'r') ADVANCE(1845);
      END_STATE();
    case 1479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1889);
      END_STATE();
    case 1480:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1882);
      END_STATE();
    case 1481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1932);
      END_STATE();
    case 1482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1959);
      END_STATE();
    case 1483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1844);
      END_STATE();
    case 1484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1846);
      END_STATE();
    case 1485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1270);
      END_STATE();
    case 1486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1630);
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
          lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 1497:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 1498:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1540);
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
          lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 1508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(942);
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
          lookahead == 's') ADVANCE(1926);
      END_STATE();
    case 1538:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 1539:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1916);
      END_STATE();
    case 1540:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1876);
      END_STATE();
    case 1541:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1860);
      END_STATE();
    case 1542:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1909);
      END_STATE();
    case 1543:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 1544:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1983);
      END_STATE();
    case 1545:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1939);
      END_STATE();
    case 1546:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1958);
      END_STATE();
    case 1547:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1862);
      END_STATE();
    case 1548:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1985);
      END_STATE();
    case 1549:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1906);
      END_STATE();
    case 1550:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1908);
      END_STATE();
    case 1551:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1880);
      END_STATE();
    case 1552:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1865);
      END_STATE();
    case 1553:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1878);
      END_STATE();
    case 1554:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1871);
      END_STATE();
    case 1555:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1928);
      END_STATE();
    case 1556:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1934);
      END_STATE();
    case 1557:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1940);
      END_STATE();
    case 1558:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1904);
      END_STATE();
    case 1559:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1866);
      END_STATE();
    case 1560:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1905);
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
          lookahead == 's') ADVANCE(1076);
      END_STATE();
    case 1568:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      END_STATE();
    case 1569:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1561);
      END_STATE();
    case 1570:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1571:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1064);
      END_STATE();
    case 1572:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1472);
      END_STATE();
    case 1573:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
      END_STATE();
    case 1574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1594);
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
          lookahead == 's') ADVANCE(1545);
      END_STATE();
    case 1583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(940);
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
          lookahead == 's') ADVANCE(1126);
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
          lookahead == 't') ADVANCE(1933);
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
          lookahead == 't') ADVANCE(1944);
      END_STATE();
    case 1620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1898);
      END_STATE();
    case 1621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1912);
      END_STATE();
    case 1622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1851);
      END_STATE();
    case 1623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1881);
      END_STATE();
    case 1624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1885);
      END_STATE();
    case 1625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1900);
      END_STATE();
    case 1626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1927);
      END_STATE();
    case 1627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1795);
      END_STATE();
    case 1628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1842);
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
          lookahead == 't') ADVANCE(1573);
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
          lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 1644:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1635);
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
          lookahead == 't') ADVANCE(966);
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
          lookahead == 't') ADVANCE(757);
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
          lookahead == 't') ADVANCE(1644);
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
          lookahead == 't') ADVANCE(1160);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1146);
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
          lookahead == 't') ADVANCE(1011);
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
          lookahead == 'u') ADVANCE(727);
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
          lookahead == 'v') ADVANCE(1960);
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
          lookahead == 'x') ADVANCE(1962);
      END_STATE();
    case 1756:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1760);
      END_STATE();
    case 1757:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(724);
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
          lookahead == 'y') ADVANCE(1955);
      END_STATE();
    case 1762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1854);
      END_STATE();
    case 1763:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1986);
      END_STATE();
    case 1764:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1911);
      END_STATE();
    case 1765:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1976);
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
          lookahead == 'y') ADVANCE(1463);
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
          lookahead == 'y') ADVANCE(1465);
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
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1988);
      END_STATE();
    case 1784:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1988);
      END_STATE();
    case 1785:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1971);
      END_STATE();
    case 1786:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1970);
      END_STATE();
    case 1787:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1991);
      END_STATE();
    case 1788:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1785);
      END_STATE();
    case 1789:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1786);
      END_STATE();
    case 1790:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 1791:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1792:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 1793:
      if (eof) ADVANCE(1794);
      if (lookahead == '\n') ADVANCE(2047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '#') ADVANCE(2043);
      if (lookahead == '*') ADVANCE(1847);
      if (lookahead == '+') ADVANCE(1872);
      if (lookahead == ',') ADVANCE(1840);
      if (lookahead == '-') ADVANCE(1873);
      if (lookahead == '0') ADVANCE(2035);
      if (lookahead == ':') ADVANCE(1870);
      if (lookahead == '=') ADVANCE(1967);
      if (lookahead == '@') ADVANCE(1937);
      if (lookahead == 'A') ADVANCE(865);
      if (lookahead == 'C') ADVANCE(706);
      if (lookahead == 'D') ADVANCE(242);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == 'H') ADVANCE(1367);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(1368);
      if (lookahead == 'M') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(1369);
      if (lookahead == 'Q') ADVANCE(282);
      if (lookahead == 'R') ADVANCE(905);
      if (lookahead == 'S') ADVANCE(906);
      if (lookahead == 'T') ADVANCE(708);
      if (lookahead == 'U') ADVANCE(1455);
      if (lookahead == 'V') ADVANCE(244);
      if (lookahead == '^') ADVANCE(1877);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == 'd') ADVANCE(468);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(1098);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(514);
      if (lookahead == 'v') ADVANCE(927);
      if (lookahead == 'w') ADVANCE(385);
      if (lookahead == '}') ADVANCE(2030);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(709);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1209);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(806);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(710);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2036);
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
          lookahead != ' ') ADVANCE(1839);
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
      if (lookahead == 'S') ADVANCE(251);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2027);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '{') ADVANCE(2028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2004);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2002);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__match_exec_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2027);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '{') ADVANCE(2029);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(2004);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2002);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__match_exec_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token1);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == '/') ADVANCE(1824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == ':') ADVANCE(1825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'S') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'e') ADVANCE(1869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'h') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'n') ADVANCE(1829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(2034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'o') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 's') ADVANCE(2032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 's') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead == 'y') ADVANCE(1856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__match_localnetwork_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__match_originalhost_token1);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__match_tagged_token1);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__match_user_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1357);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__match_localuser_token1);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1858);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1890);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1161);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__proxy_jump_arg_token1);
      if (lookahead == 'S') ADVANCE(1938);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__pubkey_authentication_token1);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym__rekey_limit_token1);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym__remote_command_token1);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '{') ADVANCE(2027);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(2005);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(2002);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(2003);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym__remote_command_token2);
      if (sym_token_character_set_1(lookahead)) ADVANCE(2006);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym__remote_forward_token1);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__request_tty_token1);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym__required_rsa_size_token1);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym__revoked_host_keys_token1);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym__security_key_provider_token1);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__send_env_token1);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__send_env_value_token1);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym__server_alive_count_max_token1);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym__server_alive_interval_token1);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__session_type_token1);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_subsystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__stdin_null_token1);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token1);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_mask_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1970);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym__stream_local_bind_unlink_token1);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym__strict_host_key_checking_token1);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_accept_DASHnew);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__syslog_facility_token1);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__tcp_keep_alive_token1);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__tag_token1);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__tunnel_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(928);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_point_DASHto_DASHpoint);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_ethernet);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym__tunnel_device_token1);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__update_host_keys_token1);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__user_known_hosts_file_token1);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__verify_host_key_dns_token1);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__visual_host_key_token1);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__xauth_location_token1);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1989);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym_facility);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(501);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(224);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(2027);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'a') ADVANCE(2024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'b') ADVANCE(2019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(1868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'e') ADVANCE(2016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'f') ADVANCE(2009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'l') ADVANCE(2021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'm') ADVANCE(1965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'n') ADVANCE(2012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'o') ADVANCE(2017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 's') ADVANCE(2022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(1966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 't') ADVANCE(2013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'u') ADVANCE(2015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym__var_name);
      if (lookahead == 'y') ADVANCE(2020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2026);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1841);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1839);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2036);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2043);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2044);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(2044);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2045);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2046);
      END_STATE();
    case 2047:
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
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 25},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 42},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 26},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 46},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 46},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 44},
  [131] = {.lex_state = 33},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 33},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 34},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 30},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 38},
  [146] = {.lex_state = 369},
  [147] = {.lex_state = 1793},
  [148] = {.lex_state = 30},
  [149] = {.lex_state = 47},
  [150] = {.lex_state = 18},
  [151] = {.lex_state = 46},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 34},
  [154] = {.lex_state = 47},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 47},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 31},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 34},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 27},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 1793},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 1793},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 1793},
  [177] = {.lex_state = 1793},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 1793},
  [180] = {.lex_state = 1793},
  [181] = {.lex_state = 1793},
  [182] = {.lex_state = 1793},
  [183] = {.lex_state = 1793},
  [184] = {.lex_state = 34},
  [185] = {.lex_state = 1793},
  [186] = {.lex_state = 1793},
  [187] = {.lex_state = 1793},
  [188] = {.lex_state = 30},
  [189] = {.lex_state = 1793},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 1793},
  [192] = {.lex_state = 1793},
  [193] = {.lex_state = 1793},
  [194] = {.lex_state = 1793},
  [195] = {.lex_state = 1793},
  [196] = {.lex_state = 1793},
  [197] = {.lex_state = 1793},
  [198] = {.lex_state = 1793},
  [199] = {.lex_state = 1793},
  [200] = {.lex_state = 1793},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 1793},
  [203] = {.lex_state = 1793},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 28},
  [206] = {.lex_state = 1793},
  [207] = {.lex_state = 1793},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 1793},
  [210] = {.lex_state = 1793},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 1793},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 1793},
  [215] = {.lex_state = 1793},
  [216] = {.lex_state = 1793},
  [217] = {.lex_state = 1793},
  [218] = {.lex_state = 1793},
  [219] = {.lex_state = 1793},
  [220] = {.lex_state = 34},
  [221] = {.lex_state = 1793},
  [222] = {.lex_state = 1793},
  [223] = {.lex_state = 1793},
  [224] = {.lex_state = 14},
  [225] = {.lex_state = 1793},
  [226] = {.lex_state = 1793},
  [227] = {.lex_state = 1793},
  [228] = {.lex_state = 45},
  [229] = {.lex_state = 1793},
  [230] = {.lex_state = 1793},
  [231] = {.lex_state = 1793},
  [232] = {.lex_state = 1793},
  [233] = {.lex_state = 1793},
  [234] = {.lex_state = 1793},
  [235] = {.lex_state = 1793},
  [236] = {.lex_state = 274},
  [237] = {.lex_state = 1793},
  [238] = {.lex_state = 1793},
  [239] = {.lex_state = 1793},
  [240] = {.lex_state = 1793},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 1793},
  [243] = {.lex_state = 1793},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 1793},
  [246] = {.lex_state = 1793},
  [247] = {.lex_state = 1793},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 1793},
  [251] = {.lex_state = 47},
  [252] = {.lex_state = 34},
  [253] = {.lex_state = 34},
  [254] = {.lex_state = 26},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 1793},
  [258] = {.lex_state = 1793},
  [259] = {.lex_state = 1793},
  [260] = {.lex_state = 40},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 1793},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 40},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 1793},
  [280] = {.lex_state = 40},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 40},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 1793},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 1793},
  [290] = {.lex_state = 40},
  [291] = {.lex_state = 1793},
  [292] = {.lex_state = 1793},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 1793},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 1793},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 1793},
  [308] = {.lex_state = 40},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 3},
  [311] = {.lex_state = 3},
  [312] = {.lex_state = 1793},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 1793},
  [315] = {.lex_state = 3},
  [316] = {.lex_state = 1793},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 3},
  [319] = {.lex_state = 1793},
  [320] = {.lex_state = 1793},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 1793},
  [324] = {.lex_state = 1793},
  [325] = {.lex_state = 1793},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 3},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 1793},
  [330] = {.lex_state = 1793},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 3},
  [334] = {.lex_state = 3},
  [335] = {.lex_state = 3},
  [336] = {.lex_state = 3},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 3},
  [340] = {.lex_state = 3},
  [341] = {.lex_state = 3},
  [342] = {.lex_state = 3},
  [343] = {.lex_state = 1793},
  [344] = {.lex_state = 3},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 3},
  [347] = {.lex_state = 3},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 3},
  [350] = {.lex_state = 3},
  [351] = {.lex_state = 3},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 1793},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 3},
  [356] = {.lex_state = 3},
  [357] = {.lex_state = 1793},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 1793},
  [360] = {.lex_state = 1793},
  [361] = {.lex_state = 1793},
  [362] = {.lex_state = 40},
  [363] = {.lex_state = 1793},
  [364] = {.lex_state = 3},
  [365] = {.lex_state = 1793},
  [366] = {.lex_state = 1793},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 3},
  [369] = {.lex_state = 3},
  [370] = {.lex_state = 1793},
  [371] = {.lex_state = 3},
  [372] = {.lex_state = 1793},
  [373] = {.lex_state = 3},
  [374] = {.lex_state = 1793},
  [375] = {.lex_state = 1793},
  [376] = {.lex_state = 1793},
  [377] = {.lex_state = 1793},
  [378] = {.lex_state = 3},
  [379] = {.lex_state = 1793},
  [380] = {.lex_state = 1793},
  [381] = {.lex_state = 1793},
  [382] = {.lex_state = 1793},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 1793},
  [387] = {.lex_state = 3},
  [388] = {.lex_state = 3},
  [389] = {.lex_state = 3},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 3},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 3},
  [398] = {.lex_state = 28},
  [399] = {.lex_state = 1793},
  [400] = {.lex_state = 3},
  [401] = {.lex_state = 3},
  [402] = {.lex_state = 1793},
  [403] = {.lex_state = 3},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 3},
  [406] = {.lex_state = 1793},
  [407] = {.lex_state = 1793},
  [408] = {.lex_state = 1793},
  [409] = {.lex_state = 1793},
  [410] = {.lex_state = 1793},
  [411] = {.lex_state = 1793},
  [412] = {.lex_state = 1793},
  [413] = {.lex_state = 3},
  [414] = {.lex_state = 3},
  [415] = {.lex_state = 3},
  [416] = {.lex_state = 1793},
  [417] = {.lex_state = 3},
  [418] = {.lex_state = 3},
  [419] = {.lex_state = 3},
  [420] = {.lex_state = 3},
  [421] = {.lex_state = 3},
  [422] = {.lex_state = 16},
  [423] = {.lex_state = 30},
  [424] = {.lex_state = 1793},
  [425] = {.lex_state = 3},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 1793},
  [428] = {.lex_state = 1793},
  [429] = {.lex_state = 3},
  [430] = {.lex_state = 1793},
  [431] = {.lex_state = 40},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 1793},
  [434] = {.lex_state = 1793},
  [435] = {.lex_state = 1793},
  [436] = {.lex_state = 3},
  [437] = {.lex_state = 3},
  [438] = {.lex_state = 3},
  [439] = {.lex_state = 3},
  [440] = {.lex_state = 1793},
  [441] = {.lex_state = 1793},
  [442] = {.lex_state = 1793},
  [443] = {.lex_state = 3},
  [444] = {.lex_state = 1793},
  [445] = {.lex_state = 1793},
  [446] = {.lex_state = 1793},
  [447] = {.lex_state = 1793},
  [448] = {.lex_state = 1793},
  [449] = {.lex_state = 1793},
  [450] = {.lex_state = 3},
  [451] = {.lex_state = 1793},
  [452] = {.lex_state = 1793},
  [453] = {.lex_state = 1793},
  [454] = {.lex_state = 1793},
  [455] = {.lex_state = 3},
  [456] = {.lex_state = 1793},
  [457] = {.lex_state = 1793},
  [458] = {.lex_state = 1793},
  [459] = {.lex_state = 3},
  [460] = {.lex_state = 3},
  [461] = {.lex_state = 3},
  [462] = {.lex_state = 1793},
  [463] = {.lex_state = 3},
  [464] = {.lex_state = 3},
  [465] = {.lex_state = 1793},
  [466] = {.lex_state = 1793},
  [467] = {.lex_state = 3},
  [468] = {.lex_state = 19},
  [469] = {.lex_state = 3},
  [470] = {.lex_state = 3},
  [471] = {.lex_state = 3},
  [472] = {.lex_state = 3},
  [473] = {.lex_state = 3},
  [474] = {.lex_state = 3},
  [475] = {.lex_state = 1793},
  [476] = {.lex_state = 1793},
  [477] = {.lex_state = 1793},
  [478] = {.lex_state = 1793},
  [479] = {.lex_state = 1793},
  [480] = {.lex_state = 1793},
  [481] = {.lex_state = 1793},
  [482] = {.lex_state = 1793},
  [483] = {.lex_state = 1793},
  [484] = {.lex_state = 1793},
  [485] = {.lex_state = 1793},
  [486] = {.lex_state = 1793},
  [487] = {.lex_state = 1793},
  [488] = {.lex_state = 1793},
  [489] = {.lex_state = 1793},
  [490] = {.lex_state = 1793},
  [491] = {.lex_state = 1793},
  [492] = {.lex_state = 1793},
  [493] = {.lex_state = 1793},
  [494] = {.lex_state = 1793},
  [495] = {.lex_state = 1793},
  [496] = {.lex_state = 1793},
  [497] = {.lex_state = 1793},
  [498] = {.lex_state = 1793},
  [499] = {.lex_state = 1793},
  [500] = {.lex_state = 1793},
  [501] = {.lex_state = 1793},
  [502] = {.lex_state = 1793},
  [503] = {.lex_state = 1793},
  [504] = {.lex_state = 1793},
  [505] = {.lex_state = 1793},
  [506] = {.lex_state = 1793},
  [507] = {.lex_state = 1793},
  [508] = {.lex_state = 1793},
  [509] = {.lex_state = 1793},
  [510] = {.lex_state = 1793},
  [511] = {.lex_state = 1793},
  [512] = {.lex_state = 1793},
  [513] = {.lex_state = 1793},
  [514] = {.lex_state = 1793},
  [515] = {.lex_state = 1793},
  [516] = {.lex_state = 1793},
  [517] = {.lex_state = 1793},
  [518] = {.lex_state = 1793},
  [519] = {.lex_state = 1793},
  [520] = {.lex_state = 1793},
  [521] = {.lex_state = 1793},
  [522] = {.lex_state = 48},
  [523] = {.lex_state = 1793},
  [524] = {.lex_state = 1793},
  [525] = {.lex_state = 1793},
  [526] = {.lex_state = 1793},
  [527] = {.lex_state = 1793},
  [528] = {.lex_state = 1793},
  [529] = {.lex_state = 1793},
  [530] = {.lex_state = 1793},
  [531] = {.lex_state = 1793},
  [532] = {.lex_state = 1793},
  [533] = {.lex_state = 1793},
  [534] = {.lex_state = 1793},
  [535] = {.lex_state = 1793},
  [536] = {.lex_state = 1793},
  [537] = {.lex_state = 15},
  [538] = {.lex_state = 1793},
  [539] = {.lex_state = 1793},
  [540] = {.lex_state = 1793},
  [541] = {.lex_state = 1793},
  [542] = {.lex_state = 1793},
  [543] = {.lex_state = 1793},
  [544] = {.lex_state = 1793},
  [545] = {.lex_state = 1793},
  [546] = {.lex_state = 1793},
  [547] = {.lex_state = 1793},
  [548] = {.lex_state = 1793},
  [549] = {.lex_state = 1793},
  [550] = {.lex_state = 1793},
  [551] = {.lex_state = 1793},
  [552] = {.lex_state = 1793},
  [553] = {.lex_state = 1793},
  [554] = {.lex_state = 1790},
  [555] = {.lex_state = 1793},
  [556] = {.lex_state = 1793},
  [557] = {.lex_state = 1793},
  [558] = {.lex_state = 1793},
  [559] = {.lex_state = 1793},
  [560] = {.lex_state = 1793},
  [561] = {.lex_state = 1793},
  [562] = {.lex_state = 1793},
  [563] = {.lex_state = 1793},
  [564] = {.lex_state = 1793},
  [565] = {.lex_state = 1793},
  [566] = {.lex_state = 1793},
  [567] = {.lex_state = 1793},
  [568] = {.lex_state = 1793},
  [569] = {.lex_state = 1793},
  [570] = {.lex_state = 1793},
  [571] = {.lex_state = 1793},
  [572] = {.lex_state = 1793},
  [573] = {.lex_state = 1793},
  [574] = {.lex_state = 1793},
  [575] = {.lex_state = 1793},
  [576] = {.lex_state = 1793},
  [577] = {.lex_state = 1793},
  [578] = {.lex_state = 1793},
  [579] = {.lex_state = 1793},
  [580] = {.lex_state = 1793},
  [581] = {.lex_state = 1793},
  [582] = {.lex_state = 1793},
  [583] = {.lex_state = 1793},
  [584] = {.lex_state = 1793},
  [585] = {.lex_state = 1793},
  [586] = {.lex_state = 1793},
  [587] = {.lex_state = 1793},
  [588] = {.lex_state = 1793},
  [589] = {.lex_state = 1793},
  [590] = {.lex_state = 1793},
  [591] = {.lex_state = 1793},
  [592] = {.lex_state = 1793},
  [593] = {.lex_state = 1793},
  [594] = {.lex_state = 1793},
  [595] = {.lex_state = 1793},
  [596] = {.lex_state = 1793},
  [597] = {.lex_state = 1793},
  [598] = {.lex_state = 1793},
  [599] = {.lex_state = 1793},
  [600] = {.lex_state = 15},
  [601] = {.lex_state = 1793},
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
  [618] = {.lex_state = 1793},
  [619] = {.lex_state = 1793},
  [620] = {.lex_state = 1793},
  [621] = {.lex_state = 1793},
  [622] = {.lex_state = 1793},
  [623] = {.lex_state = 1793},
  [624] = {.lex_state = 1793},
  [625] = {.lex_state = 1793},
  [626] = {.lex_state = 1793},
  [627] = {.lex_state = 1793},
  [628] = {.lex_state = 1793},
  [629] = {.lex_state = 1793},
  [630] = {.lex_state = 1793},
  [631] = {.lex_state = 1793},
  [632] = {.lex_state = 1793},
  [633] = {.lex_state = 1793},
  [634] = {.lex_state = 1793},
  [635] = {.lex_state = 1793},
  [636] = {.lex_state = 1793},
  [637] = {.lex_state = 1793},
  [638] = {.lex_state = 1793},
  [639] = {.lex_state = 1793},
  [640] = {.lex_state = 1793},
  [641] = {.lex_state = 1793},
  [642] = {.lex_state = 1793},
  [643] = {.lex_state = 286},
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
  [659] = {.lex_state = 1793},
  [660] = {.lex_state = 1793},
  [661] = {.lex_state = 1793},
  [662] = {.lex_state = 1793},
  [663] = {.lex_state = 1793},
  [664] = {.lex_state = 1793},
  [665] = {.lex_state = 1793},
  [666] = {.lex_state = 1793},
  [667] = {.lex_state = 1793},
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
  [684] = {.lex_state = 1793},
  [685] = {.lex_state = 1793},
  [686] = {.lex_state = 1793},
  [687] = {.lex_state = 1793},
  [688] = {.lex_state = 1793},
  [689] = {.lex_state = 1793},
  [690] = {.lex_state = 20},
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
  [722] = {.lex_state = 1793},
  [723] = {.lex_state = 1793},
  [724] = {.lex_state = 1793},
  [725] = {.lex_state = 1793},
  [726] = {.lex_state = 1793},
  [727] = {.lex_state = 1793},
  [728] = {.lex_state = 1793},
  [729] = {.lex_state = 1793},
  [730] = {.lex_state = 1793},
  [731] = {.lex_state = 1793},
  [732] = {.lex_state = 1793},
  [733] = {.lex_state = 1793},
  [734] = {.lex_state = 15},
  [735] = {.lex_state = 15},
  [736] = {.lex_state = 1791},
  [737] = {.lex_state = 1792},
  [738] = {.lex_state = 1793},
  [739] = {.lex_state = 1793},
  [740] = {.lex_state = 1793},
  [741] = {.lex_state = 1793},
  [742] = {.lex_state = 1793},
  [743] = {.lex_state = 1793},
  [744] = {.lex_state = 1793},
  [745] = {.lex_state = 431},
  [746] = {.lex_state = 15},
  [747] = {.lex_state = 16},
  [748] = {.lex_state = 1793},
  [749] = {.lex_state = 1792},
  [750] = {.lex_state = 15},
  [751] = {.lex_state = 3},
  [752] = {.lex_state = 1790},
  [753] = {.lex_state = 1792},
  [754] = {.lex_state = 1791},
  [755] = {.lex_state = 15},
  [756] = {.lex_state = 1790},
  [757] = {.lex_state = 1793},
  [758] = {.lex_state = 1793},
  [759] = {.lex_state = 16},
  [760] = {.lex_state = 431},
  [761] = {.lex_state = 1793},
  [762] = {.lex_state = 15},
  [763] = {.lex_state = 1793},
  [764] = {.lex_state = 1793},
  [765] = {.lex_state = 15},
  [766] = {.lex_state = 1793},
  [767] = {.lex_state = 1793},
  [768] = {.lex_state = 1793},
  [769] = {.lex_state = 1793},
  [770] = {.lex_state = 1793},
  [771] = {.lex_state = 1793},
  [772] = {.lex_state = 1793},
  [773] = {.lex_state = 1793},
  [774] = {.lex_state = 1793},
  [775] = {.lex_state = 1793},
  [776] = {.lex_state = 15},
  [777] = {.lex_state = 1793},
  [778] = {.lex_state = 1793},
  [779] = {.lex_state = 3},
  [780] = {.lex_state = 1793},
  [781] = {.lex_state = 1793},
  [782] = {.lex_state = 1793},
  [783] = {.lex_state = 1793},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 1793},
  [786] = {.lex_state = 1793},
  [787] = {.lex_state = 1793},
  [788] = {.lex_state = 1793},
  [789] = {.lex_state = 1790},
  [790] = {.lex_state = 1790},
  [791] = {.lex_state = 1790},
  [792] = {.lex_state = 1790},
  [793] = {.lex_state = 1790},
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
    [sym_config] = STATE(784),
    [sym_host_declaration] = STATE(3),
    [sym_match_declaration] = STATE(3),
    [sym_parameter] = STATE(477),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
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
    [sym_parameter] = STATE(477),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
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
    [sym_parameter] = STATE(477),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
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
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_host_declaration_token1] = ACTIONS(493),
    [aux_sym_match_declaration_token1] = ACTIONS(491),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
    [sym__eol] = ACTIONS(491),
  },
  [5] = {
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_host_declaration_token1] = ACTIONS(501),
    [aux_sym_match_declaration_token1] = ACTIONS(499),
    [aux_sym__match_user_token1] = ACTIONS(503),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(506),
    [aux_sym__address_family_token1] = ACTIONS(509),
    [aux_sym__batch_mode_token1] = ACTIONS(512),
    [aux_sym__bind_address_token1] = ACTIONS(515),
    [aux_sym__bind_interface_token1] = ACTIONS(518),
    [aux_sym__canonical_domains_token1] = ACTIONS(521),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(524),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(527),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(530),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(533),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(536),
    [aux_sym__certificate_file_token1] = ACTIONS(539),
    [aux_sym__check_host_ip_token1] = ACTIONS(542),
    [aux_sym__ciphers_token1] = ACTIONS(545),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(548),
    [aux_sym__compression_token1] = ACTIONS(551),
    [aux_sym__connection_attempts_token1] = ACTIONS(554),
    [aux_sym__connect_timeout_token1] = ACTIONS(557),
    [aux_sym__control_master_token1] = ACTIONS(560),
    [aux_sym__control_persist_token1] = ACTIONS(563),
    [aux_sym__control_path_token1] = ACTIONS(566),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(569),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(572),
    [aux_sym__escape_char_token1] = ACTIONS(575),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(578),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(581),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(584),
    [aux_sym__forward_agent_token1] = ACTIONS(587),
    [aux_sym__forward_x11_token1] = ACTIONS(590),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(593),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(596),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(599),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(602),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(605),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(608),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(608),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(611),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(614),
    [aux_sym__host_key_alias_token1] = ACTIONS(617),
    [aux_sym__hostname_token1] = ACTIONS(620),
    [aux_sym__identities_only_token1] = ACTIONS(623),
    [aux_sym__identity_agent_token1] = ACTIONS(626),
    [aux_sym__identity_file_token1] = ACTIONS(629),
    [aux_sym__ignore_unknown_token1] = ACTIONS(632),
    [aux_sym__ipqos_token1] = ACTIONS(635),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(638),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(638),
    [aux_sym__kex_algorithms_token1] = ACTIONS(641),
    [aux_sym__known_hosts_command_token1] = ACTIONS(644),
    [aux_sym__local_command_token1] = ACTIONS(647),
    [aux_sym__local_forward_token1] = ACTIONS(650),
    [aux_sym__log_level_token1] = ACTIONS(653),
    [aux_sym__log_verbose_token1] = ACTIONS(656),
    [aux_sym__macs_token1] = ACTIONS(659),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(662),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(665),
    [aux_sym__password_authentication_token1] = ACTIONS(668),
    [aux_sym__permit_local_command_token1] = ACTIONS(671),
    [aux_sym__permit_remote_open_token1] = ACTIONS(674),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(677),
    [aux_sym__port_token1] = ACTIONS(680),
    [aux_sym__preferred_authentications_token1] = ACTIONS(683),
    [aux_sym__proxy_command_token1] = ACTIONS(686),
    [aux_sym__proxy_jump_token1] = ACTIONS(689),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(692),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(695),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(698),
    [aux_sym__rekey_limit_token1] = ACTIONS(701),
    [aux_sym__remote_command_token1] = ACTIONS(704),
    [aux_sym__remote_forward_token1] = ACTIONS(707),
    [aux_sym__request_tty_token1] = ACTIONS(710),
    [aux_sym__required_rsa_size_token1] = ACTIONS(713),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(716),
    [aux_sym__security_key_provider_token1] = ACTIONS(719),
    [aux_sym__send_env_token1] = ACTIONS(722),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(725),
    [aux_sym__server_alive_interval_token1] = ACTIONS(728),
    [aux_sym__session_type_token1] = ACTIONS(731),
    [aux_sym__stdin_null_token1] = ACTIONS(734),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(737),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(740),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(743),
    [aux_sym__syslog_facility_token1] = ACTIONS(746),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(749),
    [aux_sym__tag_token1] = ACTIONS(752),
    [aux_sym__tunnel_token1] = ACTIONS(755),
    [aux_sym__tunnel_device_token1] = ACTIONS(758),
    [aux_sym__update_host_keys_token1] = ACTIONS(761),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(764),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(767),
    [aux_sym__visual_host_key_token1] = ACTIONS(770),
    [aux_sym__xauth_location_token1] = ACTIONS(773),
    [sym_comment] = ACTIONS(776),
    [sym__space] = ACTIONS(779),
    [sym__eol] = ACTIONS(499),
  },
  [6] = {
    [sym_host_declaration] = STATE(29),
    [sym_match_declaration] = STATE(29),
    [sym_parameter] = STATE(623),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
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
    [sym__declarations] = STATE(21),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [8] = {
    [sym__declarations] = STATE(27),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [9] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [10] = {
    [sym__declarations] = STATE(33),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [11] = {
    [sym__declarations] = STATE(26),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [12] = {
    [sym__declarations] = STATE(32),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [13] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [14] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [15] = {
    [sym__declarations] = STATE(34),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [16] = {
    [sym__declarations] = STATE(31),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [17] = {
    [sym__declarations] = STATE(24),
    [sym_parameter] = STATE(568),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
    [aux_sym__declarations_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(495),
    [sym__space] = ACTIONS(497),
  },
  [18] = {
    [sym_parameter] = STATE(675),
    [sym__add_keys_to_agent] = STATE(478),
    [sym__address_family] = STATE(482),
    [sym__batch_mode] = STATE(492),
    [sym__bind_address] = STATE(496),
    [sym__bind_interface] = STATE(497),
    [sym__canonical_domains] = STATE(499),
    [sym__canonicalize_fallback_local] = STATE(505),
    [sym__canonicalize_hostname] = STATE(509),
    [sym__canonicalize_max_dots] = STATE(513),
    [sym__canonicalize_permitted_cnames] = STATE(516),
    [sym__ca_signature_algorithms] = STATE(519),
    [sym__certificate_file] = STATE(521),
    [sym__check_host_ip] = STATE(528),
    [sym__ciphers] = STATE(530),
    [sym__clear_all_forwardings] = STATE(531),
    [sym__compression] = STATE(534),
    [sym__connection_attempts] = STATE(538),
    [sym__connect_timeout] = STATE(562),
    [sym__control_master] = STATE(582),
    [sym__control_persist] = STATE(584),
    [sym__control_path] = STATE(585),
    [sym__enable_escape_command_line] = STATE(601),
    [sym__enable_ssh_keysign] = STATE(610),
    [sym__escape_char] = STATE(626),
    [sym__exit_on_forward_failure] = STATE(628),
    [sym__fingerprint_hash] = STATE(633),
    [sym__fork_after_authentication] = STATE(636),
    [sym__forward_agent] = STATE(640),
    [sym__forward_x11] = STATE(707),
    [sym__forward_x11_timeout] = STATE(713),
    [sym__forward_x11_trusted] = STATE(729),
    [sym__global_known_hosts_file] = STATE(733),
    [sym__gssapi_authentication] = STATE(732),
    [sym__gssapi_delegate_credentials] = STATE(731),
    [sym__hostbased_accepted_algorithms] = STATE(730),
    [sym__hostbased_authentication] = STATE(728),
    [sym__host_key_algorithms] = STATE(725),
    [sym__host_key_alias] = STATE(724),
    [sym__hostname] = STATE(722),
    [sym__identities_only] = STATE(721),
    [sym__identity_agent] = STATE(720),
    [sym__identity_file] = STATE(719),
    [sym__ignore_unknown] = STATE(718),
    [sym__ipqos] = STATE(716),
    [sym__kbd_interactive_authentication] = STATE(715),
    [sym__kex_algorithms] = STATE(476),
    [sym__known_hosts_command] = STATE(712),
    [sym__local_command] = STATE(711),
    [sym__local_forward] = STATE(710),
    [sym__log_level] = STATE(709),
    [sym__log_verbose] = STATE(706),
    [sym__macs] = STATE(705),
    [sym__no_host_authentication_for_localhost] = STATE(704),
    [sym__number_of_password_prompts] = STATE(700),
    [sym__password_authentication] = STATE(699),
    [sym__permit_local_command] = STATE(697),
    [sym__permit_remote_open] = STATE(696),
    [sym__pkcs11_provider] = STATE(695),
    [sym__port] = STATE(694),
    [sym__preferred_authentications] = STATE(693),
    [sym__proxy_command] = STATE(692),
    [sym__proxy_jump] = STATE(691),
    [sym__proxy_use_fdpass] = STATE(689),
    [sym__pubkey_accepted_algorithms] = STATE(688),
    [sym__pubkey_authentication] = STATE(687),
    [sym__rekey_limit] = STATE(686),
    [sym__remote_command] = STATE(685),
    [sym__remote_forward] = STATE(684),
    [sym__request_tty] = STATE(683),
    [sym__required_rsa_size] = STATE(682),
    [sym__revoked_host_keys] = STATE(681),
    [sym__security_key_provider] = STATE(680),
    [sym__send_env] = STATE(679),
    [sym__server_alive_count_max] = STATE(678),
    [sym__server_alive_interval] = STATE(677),
    [sym__session_type] = STATE(676),
    [sym__set_env] = STATE(674),
    [sym__stdin_null] = STATE(672),
    [sym__stream_local_bind_mask] = STATE(670),
    [sym__stream_local_bind_unlink] = STATE(669),
    [sym__strict_host_key_checking] = STATE(668),
    [sym__syslog_facility] = STATE(667),
    [sym__tcp_keep_alive] = STATE(666),
    [sym__tag] = STATE(663),
    [sym__tunnel] = STATE(641),
    [sym__tunnel_device] = STATE(656),
    [sym__update_host_keys] = STATE(654),
    [sym__user] = STATE(653),
    [sym__user_known_hosts_file] = STATE(652),
    [sym__verify_host_key_dns] = STATE(651),
    [sym__visual_host_key] = STATE(648),
    [sym__xauth_location] = STATE(647),
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
  [19] = {
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
  [20] = {
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
  [21] = {
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(800),
    [aux_sym_host_declaration_token1] = ACTIONS(802),
    [aux_sym_match_declaration_token1] = ACTIONS(800),
    [aux_sym__match_user_token1] = ACTIONS(802),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(800),
    [aux_sym__address_family_token1] = ACTIONS(800),
    [aux_sym__batch_mode_token1] = ACTIONS(800),
    [aux_sym__bind_address_token1] = ACTIONS(800),
    [aux_sym__bind_interface_token1] = ACTIONS(800),
    [aux_sym__canonical_domains_token1] = ACTIONS(800),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(800),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(800),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(800),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(800),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(800),
    [aux_sym__certificate_file_token1] = ACTIONS(800),
    [aux_sym__check_host_ip_token1] = ACTIONS(800),
    [aux_sym__ciphers_token1] = ACTIONS(800),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(800),
    [aux_sym__compression_token1] = ACTIONS(800),
    [aux_sym__connection_attempts_token1] = ACTIONS(800),
    [aux_sym__connect_timeout_token1] = ACTIONS(800),
    [aux_sym__control_master_token1] = ACTIONS(800),
    [aux_sym__control_persist_token1] = ACTIONS(800),
    [aux_sym__control_path_token1] = ACTIONS(800),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(800),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(800),
    [aux_sym__escape_char_token1] = ACTIONS(800),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(800),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(800),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(800),
    [aux_sym__forward_agent_token1] = ACTIONS(800),
    [aux_sym__forward_x11_token1] = ACTIONS(802),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(800),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(800),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(800),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(800),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(800),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(800),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(800),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(800),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(800),
    [aux_sym__host_key_alias_token1] = ACTIONS(800),
    [aux_sym__hostname_token1] = ACTIONS(800),
    [aux_sym__identities_only_token1] = ACTIONS(800),
    [aux_sym__identity_agent_token1] = ACTIONS(800),
    [aux_sym__identity_file_token1] = ACTIONS(800),
    [aux_sym__ignore_unknown_token1] = ACTIONS(800),
    [aux_sym__ipqos_token1] = ACTIONS(800),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(800),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(800),
    [aux_sym__kex_algorithms_token1] = ACTIONS(800),
    [aux_sym__known_hosts_command_token1] = ACTIONS(800),
    [aux_sym__local_command_token1] = ACTIONS(800),
    [aux_sym__local_forward_token1] = ACTIONS(800),
    [aux_sym__log_level_token1] = ACTIONS(800),
    [aux_sym__log_verbose_token1] = ACTIONS(800),
    [aux_sym__macs_token1] = ACTIONS(800),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(800),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(800),
    [aux_sym__password_authentication_token1] = ACTIONS(800),
    [aux_sym__permit_local_command_token1] = ACTIONS(800),
    [aux_sym__permit_remote_open_token1] = ACTIONS(800),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(800),
    [aux_sym__port_token1] = ACTIONS(800),
    [aux_sym__preferred_authentications_token1] = ACTIONS(800),
    [aux_sym__proxy_command_token1] = ACTIONS(800),
    [aux_sym__proxy_jump_token1] = ACTIONS(800),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(800),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(800),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(800),
    [aux_sym__rekey_limit_token1] = ACTIONS(800),
    [aux_sym__remote_command_token1] = ACTIONS(800),
    [aux_sym__remote_forward_token1] = ACTIONS(800),
    [aux_sym__request_tty_token1] = ACTIONS(800),
    [aux_sym__required_rsa_size_token1] = ACTIONS(800),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(800),
    [aux_sym__security_key_provider_token1] = ACTIONS(800),
    [aux_sym__send_env_token1] = ACTIONS(800),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(800),
    [aux_sym__server_alive_interval_token1] = ACTIONS(800),
    [aux_sym__session_type_token1] = ACTIONS(800),
    [aux_sym__stdin_null_token1] = ACTIONS(800),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(800),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(800),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(800),
    [aux_sym__syslog_facility_token1] = ACTIONS(800),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(800),
    [aux_sym__tag_token1] = ACTIONS(800),
    [aux_sym__tunnel_token1] = ACTIONS(802),
    [aux_sym__tunnel_device_token1] = ACTIONS(800),
    [aux_sym__update_host_keys_token1] = ACTIONS(800),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(800),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(800),
    [aux_sym__visual_host_key_token1] = ACTIONS(800),
    [aux_sym__xauth_location_token1] = ACTIONS(800),
    [sym_comment] = ACTIONS(800),
    [sym__space] = ACTIONS(800),
    [sym__eol] = ACTIONS(800),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym_host_declaration_token1] = ACTIONS(501),
    [aux_sym_match_declaration_token1] = ACTIONS(499),
    [aux_sym__match_user_token1] = ACTIONS(501),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(499),
    [aux_sym__address_family_token1] = ACTIONS(499),
    [aux_sym__batch_mode_token1] = ACTIONS(499),
    [aux_sym__bind_address_token1] = ACTIONS(499),
    [aux_sym__bind_interface_token1] = ACTIONS(499),
    [aux_sym__canonical_domains_token1] = ACTIONS(499),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(499),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(499),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(499),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(499),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(499),
    [aux_sym__certificate_file_token1] = ACTIONS(499),
    [aux_sym__check_host_ip_token1] = ACTIONS(499),
    [aux_sym__ciphers_token1] = ACTIONS(499),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(499),
    [aux_sym__compression_token1] = ACTIONS(499),
    [aux_sym__connection_attempts_token1] = ACTIONS(499),
    [aux_sym__connect_timeout_token1] = ACTIONS(499),
    [aux_sym__control_master_token1] = ACTIONS(499),
    [aux_sym__control_persist_token1] = ACTIONS(499),
    [aux_sym__control_path_token1] = ACTIONS(499),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(499),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(499),
    [aux_sym__escape_char_token1] = ACTIONS(499),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(499),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(499),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(499),
    [aux_sym__forward_agent_token1] = ACTIONS(499),
    [aux_sym__forward_x11_token1] = ACTIONS(501),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(499),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(499),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(499),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(499),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(499),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(499),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(499),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(499),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(499),
    [aux_sym__host_key_alias_token1] = ACTIONS(499),
    [aux_sym__hostname_token1] = ACTIONS(499),
    [aux_sym__identities_only_token1] = ACTIONS(499),
    [aux_sym__identity_agent_token1] = ACTIONS(499),
    [aux_sym__identity_file_token1] = ACTIONS(499),
    [aux_sym__ignore_unknown_token1] = ACTIONS(499),
    [aux_sym__ipqos_token1] = ACTIONS(499),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(499),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(499),
    [aux_sym__kex_algorithms_token1] = ACTIONS(499),
    [aux_sym__known_hosts_command_token1] = ACTIONS(499),
    [aux_sym__local_command_token1] = ACTIONS(499),
    [aux_sym__local_forward_token1] = ACTIONS(499),
    [aux_sym__log_level_token1] = ACTIONS(499),
    [aux_sym__log_verbose_token1] = ACTIONS(499),
    [aux_sym__macs_token1] = ACTIONS(499),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(499),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(499),
    [aux_sym__password_authentication_token1] = ACTIONS(499),
    [aux_sym__permit_local_command_token1] = ACTIONS(499),
    [aux_sym__permit_remote_open_token1] = ACTIONS(499),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(499),
    [aux_sym__port_token1] = ACTIONS(499),
    [aux_sym__preferred_authentications_token1] = ACTIONS(499),
    [aux_sym__proxy_command_token1] = ACTIONS(499),
    [aux_sym__proxy_jump_token1] = ACTIONS(499),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(499),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(499),
    [aux_sym__pubkey_authentication_token1] = ACTIONS(499),
    [aux_sym__rekey_limit_token1] = ACTIONS(499),
    [aux_sym__remote_command_token1] = ACTIONS(499),
    [aux_sym__remote_forward_token1] = ACTIONS(499),
    [aux_sym__request_tty_token1] = ACTIONS(499),
    [aux_sym__required_rsa_size_token1] = ACTIONS(499),
    [aux_sym__revoked_host_keys_token1] = ACTIONS(499),
    [aux_sym__security_key_provider_token1] = ACTIONS(499),
    [aux_sym__send_env_token1] = ACTIONS(499),
    [aux_sym__server_alive_count_max_token1] = ACTIONS(499),
    [aux_sym__server_alive_interval_token1] = ACTIONS(499),
    [aux_sym__session_type_token1] = ACTIONS(499),
    [aux_sym__stdin_null_token1] = ACTIONS(499),
    [aux_sym__stream_local_bind_mask_token1] = ACTIONS(499),
    [aux_sym__stream_local_bind_unlink_token1] = ACTIONS(499),
    [aux_sym__strict_host_key_checking_token1] = ACTIONS(499),
    [aux_sym__syslog_facility_token1] = ACTIONS(499),
    [aux_sym__tcp_keep_alive_token1] = ACTIONS(499),
    [aux_sym__tag_token1] = ACTIONS(499),
    [aux_sym__tunnel_token1] = ACTIONS(501),
    [aux_sym__tunnel_device_token1] = ACTIONS(499),
    [aux_sym__update_host_keys_token1] = ACTIONS(499),
    [aux_sym__user_known_hosts_file_token1] = ACTIONS(499),
    [aux_sym__verify_host_key_dns_token1] = ACTIONS(499),
    [aux_sym__visual_host_key_token1] = ACTIONS(499),
    [aux_sym__xauth_location_token1] = ACTIONS(499),
    [sym_comment] = ACTIONS(499),
    [sym__space] = ACTIONS(499),
    [sym__eol] = ACTIONS(499),
  },
  [24] = {
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
  [25] = {
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
  [26] = {
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
  [27] = {
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
  [28] = {
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_host_declaration_token1] = ACTIONS(824),
    [aux_sym_match_declaration_token1] = ACTIONS(197),
    [aux_sym__match_user_token1] = ACTIONS(824),
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
    [aux_sym__forward_x11_token1] = ACTIONS(824),
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
    [aux_sym__tunnel_token1] = ACTIONS(824),
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
  [30] = {
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
  [31] = {
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
  [32] = {
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
  [33] = {
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
  [34] = {
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
  [35] = {
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(850), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(852), 1,
      aux_sym__all_token1,
    ACTIONS(854), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(856), 1,
      aux_sym__match_final_token1,
    ACTIONS(858), 1,
      aux_sym__match_exec_token1,
    ACTIONS(860), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(862), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(864), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(866), 1,
      aux_sym__match_user_token1,
    ACTIONS(868), 1,
      aux_sym__match_localuser_token1,
    STATE(303), 1,
      sym_condition,
    STATE(611), 1,
      sym__match_localuser,
    STATE(612), 1,
      sym__match_user,
    STATE(614), 1,
      sym__match_tagged,
    STATE(615), 1,
      sym__match_originalhost,
    STATE(616), 1,
      sym__match_host,
    STATE(617), 1,
      sym__match_localnetwork,
    STATE(618), 1,
      sym__match_exec,
    STATE(620), 1,
      sym__match_final,
    STATE(621), 1,
      sym__match_canonical,
    STATE(622), 1,
      sym__all,
  [64] = 20,
    ACTIONS(850), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(854), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(856), 1,
      aux_sym__match_final_token1,
    ACTIONS(858), 1,
      aux_sym__match_exec_token1,
    ACTIONS(860), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(862), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(864), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(866), 1,
      aux_sym__match_user_token1,
    ACTIONS(868), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(870), 1,
      sym__eol,
    STATE(592), 1,
      sym_condition,
    STATE(611), 1,
      sym__match_localuser,
    STATE(612), 1,
      sym__match_user,
    STATE(614), 1,
      sym__match_tagged,
    STATE(615), 1,
      sym__match_originalhost,
    STATE(616), 1,
      sym__match_host,
    STATE(617), 1,
      sym__match_localnetwork,
    STATE(618), 1,
      sym__match_exec,
    STATE(620), 1,
      sym__match_final,
    STATE(621), 1,
      sym__match_canonical,
  [125] = 20,
    ACTIONS(850), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(854), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(856), 1,
      aux_sym__match_final_token1,
    ACTIONS(858), 1,
      aux_sym__match_exec_token1,
    ACTIONS(860), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(862), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(864), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(866), 1,
      aux_sym__match_user_token1,
    ACTIONS(868), 1,
      aux_sym__match_localuser_token1,
    ACTIONS(872), 1,
      sym__eol,
    STATE(592), 1,
      sym_condition,
    STATE(611), 1,
      sym__match_localuser,
    STATE(612), 1,
      sym__match_user,
    STATE(614), 1,
      sym__match_tagged,
    STATE(615), 1,
      sym__match_originalhost,
    STATE(616), 1,
      sym__match_host,
    STATE(617), 1,
      sym__match_localnetwork,
    STATE(618), 1,
      sym__match_exec,
    STATE(620), 1,
      sym__match_final,
    STATE(621), 1,
      sym__match_canonical,
  [186] = 19,
    ACTIONS(850), 1,
      aux_sym_host_declaration_token1,
    ACTIONS(854), 1,
      aux_sym__match_canonical_token1,
    ACTIONS(856), 1,
      aux_sym__match_final_token1,
    ACTIONS(858), 1,
      aux_sym__match_exec_token1,
    ACTIONS(860), 1,
      aux_sym__match_localnetwork_token1,
    ACTIONS(862), 1,
      aux_sym__match_originalhost_token1,
    ACTIONS(864), 1,
      aux_sym__match_tagged_token1,
    ACTIONS(866), 1,
      aux_sym__match_user_token1,
    ACTIONS(868), 1,
      aux_sym__match_localuser_token1,
    STATE(592), 1,
      sym_condition,
    STATE(611), 1,
      sym__match_localuser,
    STATE(612), 1,
      sym__match_user,
    STATE(614), 1,
      sym__match_tagged,
    STATE(615), 1,
      sym__match_originalhost,
    STATE(616), 1,
      sym__match_host,
    STATE(617), 1,
      sym__match_localnetwork,
    STATE(618), 1,
      sym__match_exec,
    STATE(620), 1,
      sym__match_final,
    STATE(621), 1,
      sym__match_canonical,
  [244] = 10,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(882), 1,
      sym__number,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(764), 1,
      sym__string,
    STATE(768), 1,
      sym_number,
    ACTIONS(874), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    ACTIONS(878), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(767), 2,
      sym__forward_value1,
      sym__file_string,
  [279] = 10,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(882), 1,
      sym__number,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(764), 1,
      sym__string,
    STATE(768), 1,
      sym_number,
    ACTIONS(874), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    ACTIONS(878), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(774), 2,
      sym__forward_value1,
      sym__file_string,
  [314] = 8,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(743), 1,
      sym__string,
    ACTIONS(874), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    ACTIONS(884), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(658), 2,
      sym__forward_value2,
      sym__file_string,
  [343] = 8,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(743), 1,
      sym__string,
    ACTIONS(874), 2,
      aux_sym__match_exec_token2,
      aux_sym__file_token_token1,
    ACTIONS(884), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
    STATE(637), 2,
      sym__forward_value2,
      sym__file_string,
  [372] = 10,
    ACTIONS(874), 1,
      aux_sym__match_exec_token2,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      aux_sym__file_token_token1,
    ACTIONS(892), 1,
      anon_sym_DOLLAR,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(544), 1,
      sym__var_value,
    STATE(547), 1,
      sym__file_string,
    ACTIONS(888), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [405] = 7,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(47), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(571), 1,
      sym__file_pattern_vars,
    STATE(72), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(900), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [430] = 6,
    ACTIONS(904), 1,
      aux_sym__match_exec_token2,
    ACTIONS(910), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(46), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(913), 2,
      sym__space,
      sym__eol,
    STATE(72), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(907), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [453] = 6,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(902), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(46), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(915), 2,
      sym__space,
      sym__eol,
    STATE(72), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(900), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [476] = 7,
    ACTIONS(896), 1,
      aux_sym__match_exec_token2,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(47), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(586), 1,
      sym__file_pattern_vars,
    STATE(72), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(900), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [501] = 8,
    ACTIONS(874), 1,
      aux_sym__match_exec_token2,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      aux_sym__file_token_token1,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(917), 1,
      anon_sym_none,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(665), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [527] = 8,
    ACTIONS(874), 1,
      aux_sym__match_exec_token2,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      aux_sym__file_token_token1,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(919), 1,
      anon_sym_none,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(451), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [553] = 6,
    ACTIONS(921), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      aux_sym__match_exec_token3,
    ACTIONS(929), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(51), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(926), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [575] = 6,
    ACTIONS(932), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 1,
      aux_sym__match_exec_token3,
    ACTIONS(938), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(51), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(936), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [597] = 7,
    ACTIONS(940), 1,
      aux_sym__remote_command_token2,
    ACTIONS(942), 1,
      aux_sym__file_token_token1,
    ACTIONS(944), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(946), 1,
      sym__space,
    ACTIONS(948), 1,
      sym__eol,
    STATE(61), 1,
      aux_sym__remote_command_repeat1,
    STATE(137), 2,
      sym__file_token,
      sym_variable,
  [620] = 6,
    ACTIONS(950), 1,
      aux_sym__match_exec_token2,
    ACTIONS(953), 1,
      aux_sym__file_token_token1,
    ACTIONS(956), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(54), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(959), 2,
      sym__space,
      sym__eol,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [641] = 7,
    ACTIONS(961), 1,
      aux_sym__match_exec_token2,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(967), 1,
      anon_sym_none,
    STATE(111), 1,
      aux_sym__match_value_repeat1,
    STATE(329), 1,
      sym__cnames_map,
    STATE(330), 1,
      sym__pattern,
    ACTIONS(965), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [664] = 7,
    ACTIONS(969), 1,
      aux_sym__remote_command_token2,
    ACTIONS(972), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(975), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(978), 1,
      sym__space,
    ACTIONS(980), 1,
      sym__eol,
    STATE(56), 1,
      aux_sym__hosts_string_repeat1,
    STATE(170), 2,
      sym__hosts_token,
      sym_variable,
  [687] = 7,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(982), 1,
      anon_sym_BANG,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    ACTIONS(988), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(567), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [710] = 7,
    ACTIONS(874), 1,
      aux_sym__match_exec_token2,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      aux_sym__file_token_token1,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(543), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [733] = 5,
    ACTIONS(892), 1,
      anon_sym_DOLLAR,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    STATE(561), 1,
      sym__var_value,
    STATE(560), 2,
      sym__string,
      sym__boolean,
    ACTIONS(992), 3,
      aux_sym__match_localnetwork_token2,
      anon_sym_yes,
      anon_sym_no,
  [752] = 7,
    ACTIONS(874), 1,
      aux_sym__match_exec_token2,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      aux_sym__file_token_token1,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(69), 1,
      aux_sym__file_string_repeat1,
    STATE(506), 1,
      sym__file_string,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [775] = 7,
    ACTIONS(994), 1,
      aux_sym__remote_command_token2,
    ACTIONS(997), 1,
      aux_sym__file_token_token1,
    ACTIONS(1000), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1003), 1,
      sym__space,
    ACTIONS(1005), 1,
      sym__eol,
    STATE(61), 1,
      aux_sym__remote_command_repeat1,
    STATE(137), 2,
      sym__file_token,
      sym_variable,
  [798] = 6,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    STATE(218), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1013), 2,
      sym__space,
      sym__eol,
  [819] = 5,
    ACTIONS(934), 1,
      aux_sym__match_exec_token3,
    ACTIONS(938), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(52), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(120), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(936), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [838] = 7,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(982), 1,
      anon_sym_BANG,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1015), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(567), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [861] = 7,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(982), 1,
      anon_sym_BANG,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1017), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(567), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [884] = 7,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(982), 1,
      anon_sym_BANG,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1019), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(567), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [907] = 6,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    STATE(186), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1021), 2,
      sym__space,
      sym__eol,
  [928] = 7,
    ACTIONS(1023), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1025), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1027), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(1029), 1,
      sym__space,
    ACTIONS(1031), 1,
      sym__eol,
    STATE(56), 1,
      aux_sym__hosts_string_repeat1,
    STATE(170), 2,
      sym__hosts_token,
      sym_variable,
  [951] = 6,
    ACTIONS(874), 1,
      aux_sym__match_exec_token2,
    ACTIONS(890), 1,
      aux_sym__file_token_token1,
    ACTIONS(894), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(54), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(1033), 2,
      sym__space,
      sym__eol,
    STATE(164), 2,
      sym__file_token,
      sym_variable,
  [972] = 5,
    ACTIONS(1037), 1,
      aux_sym__match_localnetwork_token3,
    ACTIONS(1039), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(86), 1,
      aux_sym__file_string_repeat2,
    ACTIONS(1035), 2,
      aux_sym__match_exec_token3,
      aux_sym__file_token_token1,
    STATE(213), 2,
      sym__file_token,
      sym_variable,
  [990] = 4,
    ACTIONS(1041), 1,
      aux_sym__match_exec_token2,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1046), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1044), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1006] = 2,
    ACTIONS(1049), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1051), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1018] = 6,
    ACTIONS(1053), 1,
      aux_sym_time_token1,
    ACTIONS(1055), 1,
      aux_sym_time_token2,
    ACTIONS(1057), 1,
      aux_sym_time_token3,
    ACTIONS(1059), 1,
      aux_sym_time_token4,
    ACTIONS(1061), 1,
      aux_sym_time_token5,
    ACTIONS(1063), 2,
      sym__space,
      sym__eol,
  [1038] = 6,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(982), 1,
      anon_sym_BANG,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(567), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1058] = 6,
    ACTIONS(1065), 1,
      anon_sym_DQUOTE,
    ACTIONS(1067), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1070), 1,
      aux_sym__file_token_token1,
    ACTIONS(1073), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(75), 1,
      aux_sym__file_string_repeat2,
    STATE(213), 2,
      sym__file_token,
      sym_variable,
  [1078] = 6,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1076), 1,
      anon_sym_BANG,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__match_value_repeat1,
    STATE(577), 1,
      sym__match_value,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1098] = 6,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1076), 1,
      anon_sym_BANG,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__match_value_repeat1,
    STATE(587), 1,
      sym__match_value,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1118] = 6,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym__match_value_repeat3,
    STATE(424), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1138] = 6,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym__match_value_repeat3,
    STATE(441), 1,
      aux_sym__match_value_repeat4,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1158] = 6,
    ACTIONS(1023), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1025), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(1027), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(68), 1,
      aux_sym__hosts_string_repeat1,
    STATE(536), 1,
      sym__hosts_string,
    STATE(170), 2,
      sym__hosts_token,
      sym_variable,
  [1178] = 6,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1076), 1,
      anon_sym_BANG,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__match_value_repeat1,
    STATE(588), 1,
      sym__match_value,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1198] = 6,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1076), 1,
      anon_sym_BANG,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__match_value_repeat1,
    STATE(589), 1,
      sym__match_value,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1218] = 6,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1076), 1,
      anon_sym_BANG,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__match_value_repeat1,
    STATE(590), 1,
      sym__match_value,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1238] = 2,
    ACTIONS(1090), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1092), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1250] = 6,
    ACTIONS(961), 1,
      aux_sym__match_exec_token2,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      aux_sym__match_value_repeat1,
    STATE(330), 1,
      sym__pattern,
    STATE(604), 1,
      sym__cnames_map,
    ACTIONS(965), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1270] = 6,
    ACTIONS(1035), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1094), 1,
      anon_sym_DQUOTE,
    ACTIONS(1096), 1,
      aux_sym__file_token_token1,
    ACTIONS(1098), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(75), 1,
      aux_sym__file_string_repeat2,
    STATE(213), 2,
      sym__file_token,
      sym_variable,
  [1290] = 4,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1100), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1306] = 4,
    ACTIONS(1104), 1,
      anon_sym_confirm,
    ACTIONS(1106), 1,
      sym__number,
    STATE(608), 2,
      sym__boolean,
      sym_time,
    ACTIONS(1102), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [1322] = 4,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1108), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1338] = 6,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1110), 1,
      anon_sym_BANG,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(292), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1358] = 4,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(71), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1112), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [1374] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1391] = 4,
    ACTIONS(1114), 1,
      anon_sym_DQUOTE,
    STATE(407), 1,
      sym__permit_remote_open_value,
    ACTIONS(1116), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1118), 2,
      anon_sym_any,
      anon_sym_none,
  [1406] = 4,
    ACTIONS(1114), 1,
      anon_sym_DQUOTE,
    STATE(650), 1,
      sym__permit_remote_open_value,
    ACTIONS(1116), 2,
      aux_sym__match_localnetwork_token2,
      anon_sym_STAR,
    ACTIONS(1120), 2,
      anon_sym_any,
      anon_sym_none,
  [1421] = 4,
    ACTIONS(1122), 1,
      aux_sym__match_exec_token2,
    STATE(95), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1044), 2,
      sym__space,
      sym__eol,
    ACTIONS(1125), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1436] = 4,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(95), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1112), 2,
      sym__space,
      sym__eol,
  [1451] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(91), 1,
      aux_sym__match_value_repeat1,
    STATE(216), 1,
      sym__pattern,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1468] = 6,
    ACTIONS(1128), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1131), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1134), 1,
      sym__space,
    ACTIONS(1136), 1,
      sym__eol,
    STATE(98), 1,
      aux_sym__proxy_string_repeat1,
    STATE(211), 1,
      sym__proxy_token,
  [1487] = 2,
    ACTIONS(1090), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1092), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1498] = 5,
    ACTIONS(1035), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1096), 1,
      aux_sym__file_token_token1,
    ACTIONS(1098), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(86), 1,
      aux_sym__file_string_repeat2,
    STATE(213), 2,
      sym__file_token,
      sym_variable,
  [1515] = 5,
    ACTIONS(1138), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1141), 1,
      aux_sym__file_token_token1,
    STATE(101), 1,
      aux_sym__match_exec_repeat1,
    STATE(204), 1,
      sym__file_token,
    ACTIONS(1144), 2,
      sym__space,
      sym__eol,
  [1532] = 4,
    ACTIONS(1148), 1,
      aux_sym__match_exec_token3,
    STATE(102), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1146), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(1151), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1547] = 5,
    ACTIONS(1154), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1156), 1,
      aux_sym__hostname_token_token1,
    STATE(127), 1,
      aux_sym__hostname_string_repeat1,
    STATE(190), 1,
      sym__hostname_token,
    ACTIONS(1158), 2,
      sym__space,
      sym__eol,
  [1564] = 3,
    STATE(108), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1162), 2,
      sym__space,
      sym__eol,
    ACTIONS(1160), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1577] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(457), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1594] = 2,
    ACTIONS(1164), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1166), 5,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [1605] = 4,
    ACTIONS(1168), 1,
      anon_sym_DASH,
    STATE(125), 1,
      aux_sym__send_env_value_repeat1,
    STATE(659), 1,
      sym__send_env_value,
    ACTIONS(1160), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1620] = 3,
    STATE(108), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1173), 2,
      sym__space,
      sym__eol,
    ACTIONS(1170), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1633] = 4,
    ACTIONS(1175), 1,
      aux_sym__match_exec_token2,
    STATE(109), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1044), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(1178), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1648] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(603), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1665] = 4,
    ACTIONS(961), 1,
      aux_sym__match_exec_token2,
    STATE(109), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(965), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1112), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1680] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(671), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1697] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(602), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1714] = 4,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    STATE(102), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1181), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1729] = 5,
    ACTIONS(961), 1,
      aux_sym__match_exec_token2,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      aux_sym__match_value_repeat1,
    STATE(216), 1,
      sym__pattern,
    ACTIONS(965), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1746] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(91), 1,
      aux_sym__match_value_repeat1,
    STATE(217), 1,
      sym__pattern,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1763] = 2,
    STATE(500), 1,
      sym__boolean,
    ACTIONS(1183), 5,
      anon_sym_ask,
      anon_sym_accept_DASHnew,
      anon_sym_off,
      anon_sym_yes,
      anon_sym_no,
  [1774] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(323), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1791] = 5,
    ACTIONS(1185), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1187), 1,
      aux_sym__file_token_token1,
    STATE(101), 1,
      aux_sym__match_exec_repeat1,
    STATE(204), 1,
      sym__file_token,
    ACTIONS(1189), 2,
      sym__space,
      sym__eol,
  [1808] = 2,
    ACTIONS(1193), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1191), 5,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1819] = 4,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    STATE(102), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(1195), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [1834] = 6,
    ACTIONS(1197), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1199), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1201), 1,
      sym__space,
    ACTIONS(1203), 1,
      sym__eol,
    STATE(98), 1,
      aux_sym__proxy_string_repeat1,
    STATE(211), 1,
      sym__proxy_token,
  [1853] = 4,
    ACTIONS(1168), 1,
      anon_sym_DASH,
    STATE(125), 1,
      aux_sym__send_env_value_repeat1,
    STATE(434), 1,
      sym__send_env_value,
    ACTIONS(1160), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1868] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(629), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1885] = 3,
    STATE(108), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1205), 2,
      sym__space,
      sym__eol,
    ACTIONS(1160), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [1898] = 3,
    ACTIONS(1209), 1,
      anon_sym_auto,
    STATE(573), 1,
      sym__boolean,
    ACTIONS(1207), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1911] = 5,
    ACTIONS(1211), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1214), 1,
      aux_sym__hostname_token_token1,
    STATE(127), 1,
      aux_sym__hostname_string_repeat1,
    STATE(190), 1,
      sym__hostname_token,
    ACTIONS(1217), 2,
      sym__space,
      sym__eol,
  [1928] = 5,
    ACTIONS(940), 1,
      aux_sym__remote_command_token2,
    ACTIONS(942), 1,
      aux_sym__file_token_token1,
    ACTIONS(944), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__remote_command_repeat1,
    STATE(137), 2,
      sym__file_token,
      sym_variable,
  [1945] = 2,
    STATE(512), 2,
      sym__pubkey_authentication_arg,
      sym__boolean,
    ACTIONS(1219), 4,
      anon_sym_unbound,
      anon_sym_host_DASHbound,
      anon_sym_yes,
      anon_sym_no,
  [1956] = 6,
    ACTIONS(1197), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1199), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(1221), 1,
      anon_sym_none,
    STATE(122), 1,
      aux_sym__proxy_string_repeat1,
    STATE(211), 1,
      sym__proxy_token,
    STATE(517), 1,
      sym__proxy_string,
  [1975] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(91), 1,
      aux_sym__match_value_repeat1,
    STATE(200), 1,
      sym__pattern,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1992] = 4,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(187), 1,
      sym__log_verbose_value,
    ACTIONS(1225), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2007] = 6,
    ACTIONS(1154), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1156), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(1227), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym__hostname_string_repeat1,
    STATE(190), 1,
      sym__hostname_token,
    STATE(549), 1,
      sym__hostname_string,
  [2026] = 5,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      aux_sym__match_exec_token2,
    STATE(96), 1,
      aux_sym__match_value_repeat1,
    STATE(380), 1,
      sym__pattern,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2043] = 5,
    ACTIONS(1229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1231), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1234), 1,
      aux_sym__file_token_token1,
    STATE(135), 1,
      aux_sym__match_exec_repeat2,
    STATE(398), 1,
      sym__file_token,
  [2059] = 4,
    ACTIONS(1237), 1,
      aux_sym__match_exec_token3,
    STATE(156), 1,
      aux_sym__match_value_repeat3,
    STATE(702), 1,
      sym__log_verbose_quoted,
    ACTIONS(1239), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2073] = 2,
    ACTIONS(1241), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1243), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2083] = 5,
    ACTIONS(1245), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1247), 1,
      sym_token,
    ACTIONS(1249), 1,
      sym__space,
    ACTIONS(1251), 1,
      sym__eol,
    STATE(155), 1,
      aux_sym__token_string_repeat1,
  [2099] = 5,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE,
    ACTIONS(1255), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1257), 1,
      aux_sym__hostname_token_token1,
    STATE(148), 1,
      aux_sym__hostname_string_repeat2,
    STATE(423), 1,
      sym__hostname_token,
  [2115] = 4,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1259), 1,
      anon_sym_BANG,
    STATE(121), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2129] = 1,
    ACTIONS(1261), 5,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
      sym__space,
      sym__eol,
  [2137] = 3,
    ACTIONS(1106), 1,
      sym__number,
    ACTIONS(1263), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(572), 2,
      sym__boolean,
      sym_time,
  [2149] = 2,
    STATE(508), 1,
      sym__boolean,
    ACTIONS(1265), 4,
      anon_sym_auto,
      anon_sym_force,
      anon_sym_yes,
      anon_sym_no,
  [2159] = 3,
    ACTIONS(1269), 1,
      anon_sym_COLON,
    STATE(171), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1267), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2171] = 5,
    ACTIONS(892), 1,
      anon_sym_DOLLAR,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1271), 1,
      aux_sym__match_localnetwork_token2,
    STATE(503), 1,
      sym__string,
    STATE(504), 1,
      sym__var_value,
  [2187] = 3,
    ACTIONS(1275), 1,
      sym__var_name,
    STATE(440), 1,
      sym__set_env_value,
    ACTIONS(1273), 3,
      anon_sym_none,
      anon_sym_subsystem,
      anon_sym_default,
  [2199] = 1,
    ACTIONS(1277), 5,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2207] = 5,
    ACTIONS(1279), 1,
      anon_sym_DQUOTE,
    ACTIONS(1281), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1284), 1,
      aux_sym__hostname_token_token1,
    STATE(148), 1,
      aux_sym__hostname_string_repeat2,
    STATE(423), 1,
      sym__hostname_token,
  [2223] = 4,
    ACTIONS(1237), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1287), 1,
      anon_sym_COLON,
    STATE(154), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1239), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2237] = 4,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1289), 1,
      anon_sym_BANG,
    STATE(78), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2251] = 2,
    ACTIONS(1164), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1166), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2261] = 2,
    STATE(488), 1,
      sym__boolean,
    ACTIONS(1291), 4,
      anon_sym_point_DASHto_DASHpoint,
      anon_sym_ethernet,
      anon_sym_yes,
      anon_sym_no,
  [2271] = 4,
    ACTIONS(1146), 1,
      anon_sym_DQUOTE,
    ACTIONS(1293), 1,
      aux_sym__match_exec_token3,
    STATE(153), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1296), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2285] = 4,
    ACTIONS(1146), 1,
      anon_sym_COLON,
    ACTIONS(1299), 1,
      aux_sym__match_exec_token3,
    STATE(154), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1302), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2299] = 5,
    ACTIONS(1305), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1308), 1,
      sym_token,
    ACTIONS(1311), 1,
      sym__space,
    ACTIONS(1313), 1,
      sym__eol,
    STATE(155), 1,
      aux_sym__token_string_repeat1,
  [2315] = 4,
    ACTIONS(1237), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1315), 1,
      anon_sym_COLON,
    STATE(154), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1239), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2329] = 2,
    ACTIONS(1090), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1092), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2339] = 3,
    STATE(160), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(316), 1,
      sym__log_verbose_value,
    ACTIONS(1225), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2351] = 2,
    ACTIONS(1319), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1317), 4,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2361] = 3,
    ACTIONS(1321), 1,
      anon_sym_COLON,
    STATE(171), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1267), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2373] = 4,
    ACTIONS(1323), 1,
      anon_sym_DQUOTE,
    ACTIONS(1325), 1,
      aux_sym__match_exec_token3,
    STATE(153), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1327), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2387] = 2,
    ACTIONS(1090), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1092), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2397] = 5,
    ACTIONS(1329), 1,
      anon_sym_DQUOTE,
    ACTIONS(1331), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1333), 1,
      aux_sym__file_token_token1,
    STATE(135), 1,
      aux_sym__match_exec_repeat2,
    STATE(398), 1,
      sym__file_token,
  [2413] = 2,
    ACTIONS(1335), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1337), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [2423] = 2,
    ACTIONS(1090), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1092), 3,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2433] = 4,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1339), 1,
      anon_sym_BANG,
    STATE(87), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2447] = 4,
    ACTIONS(1237), 1,
      aux_sym__match_exec_token3,
    STATE(156), 1,
      aux_sym__match_value_repeat3,
    STATE(402), 1,
      sym__log_verbose_quoted,
    ACTIONS(1239), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2461] = 2,
    ACTIONS(1164), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1166), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym__space,
      sym__eol,
  [2471] = 5,
    ACTIONS(1185), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1187), 1,
      aux_sym__file_token_token1,
    ACTIONS(1341), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym__match_exec_repeat1,
    STATE(204), 1,
      sym__file_token,
  [2487] = 2,
    ACTIONS(1343), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1345), 3,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__eol,
  [2497] = 3,
    ACTIONS(1350), 1,
      anon_sym_COLON,
    STATE(171), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1347), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2509] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1354), 2,
      sym__space,
      sym__eol,
  [2520] = 4,
    ACTIONS(1356), 1,
      aux_sym_time_token2,
    ACTIONS(1358), 1,
      aux_sym_time_token3,
    ACTIONS(1360), 1,
      aux_sym_time_token4,
    ACTIONS(1362), 1,
      aux_sym_time_token5,
  [2533] = 3,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1366), 2,
      sym__space,
      sym__eol,
  [2544] = 2,
    ACTIONS(1368), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1370), 2,
      sym_token,
      sym__eol,
  [2553] = 3,
    ACTIONS(1372), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1375), 2,
      sym__space,
      sym__eol,
  [2564] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1379), 2,
      sym__space,
      sym__eol,
  [2575] = 2,
    STATE(144), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1381), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2584] = 3,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1385), 2,
      sym__space,
      sym__eol,
  [2595] = 3,
    ACTIONS(1387), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1389), 2,
      sym__space,
      sym__eol,
  [2606] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1393), 2,
      sym__space,
      sym__eol,
  [2617] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1393), 2,
      sym__space,
      sym__eol,
  [2628] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1395), 2,
      sym__space,
      sym__eol,
  [2639] = 3,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    STATE(79), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2650] = 3,
    ACTIONS(1397), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1400), 2,
      sym__space,
      sym__eol,
  [2661] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1402), 2,
      sym__space,
      sym__eol,
  [2672] = 3,
    ACTIONS(1387), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1404), 2,
      sym__space,
      sym__eol,
  [2683] = 4,
    ACTIONS(1255), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1257), 1,
      aux_sym__hostname_token_token1,
    STATE(139), 1,
      aux_sym__hostname_string_repeat2,
    STATE(423), 1,
      sym__hostname_token,
  [2696] = 3,
    ACTIONS(1406), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1409), 2,
      sym__space,
      sym__eol,
  [2707] = 2,
    ACTIONS(1411), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1413), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [2716] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1417), 2,
      sym__space,
      sym__eol,
  [2727] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1419), 2,
      sym__space,
      sym__eol,
  [2738] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1417), 2,
      sym__space,
      sym__eol,
  [2749] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1421), 2,
      sym__space,
      sym__eol,
  [2760] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1423), 2,
      sym__space,
      sym__eol,
  [2771] = 1,
    ACTIONS(1425), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2778] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1427), 2,
      sym__space,
      sym__eol,
  [2789] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1427), 2,
      sym__space,
      sym__eol,
  [2800] = 3,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1431), 2,
      sym__space,
      sym__eol,
  [2811] = 3,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1433), 2,
      sym__space,
      sym__eol,
  [2822] = 3,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(62), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [2833] = 3,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1435), 2,
      sym__space,
      sym__eol,
  [2844] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1437), 2,
      sym__space,
      sym__eol,
  [2855] = 2,
    ACTIONS(1439), 1,
      aux_sym__match_exec_token2,
    ACTIONS(1441), 3,
      aux_sym__file_token_token1,
      sym__space,
      sym__eol,
  [2864] = 4,
    ACTIONS(1331), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1333), 1,
      aux_sym__file_token_token1,
    STATE(163), 1,
      aux_sym__match_exec_repeat2,
    STATE(398), 1,
      sym__file_token,
  [2877] = 3,
    ACTIONS(1445), 1,
      sym__number,
    STATE(631), 1,
      sym_number,
    ACTIONS(1443), 2,
      anon_sym_none,
      sym_ipqos,
  [2888] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1447), 2,
      sym__space,
      sym__eol,
  [2899] = 2,
    ACTIONS(1451), 1,
      sym_cipher,
    ACTIONS(1449), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2908] = 3,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1455), 2,
      sym__space,
      sym__eol,
  [2919] = 3,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1457), 2,
      sym__space,
      sym__eol,
  [2930] = 2,
    ACTIONS(1459), 2,
      aux_sym__remote_command_token2,
      sym__space,
    ACTIONS(1461), 2,
      aux_sym__proxy_token_token1,
      sym__eol,
  [2939] = 3,
    ACTIONS(1463), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1466), 2,
      sym__space,
      sym__eol,
  [2950] = 2,
    ACTIONS(1470), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1468), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2959] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1472), 2,
      sym__space,
      sym__eol,
  [2970] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1354), 2,
      sym__space,
      sym__eol,
  [2981] = 1,
    ACTIONS(1375), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2988] = 3,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1474), 2,
      sym__space,
      sym__eol,
  [2999] = 3,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1476), 2,
      sym__space,
      sym__eol,
  [3010] = 3,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1478), 2,
      sym__space,
      sym__eol,
  [3021] = 3,
    ACTIONS(1237), 1,
      aux_sym__match_exec_token3,
    STATE(149), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1239), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3032] = 3,
    ACTIONS(1480), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1483), 2,
      sym__space,
      sym__eol,
  [3043] = 2,
    ACTIONS(1487), 1,
      sym_key_sig,
    ACTIONS(1485), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3052] = 2,
    ACTIONS(1491), 1,
      sym_key_sig,
    ACTIONS(1489), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3061] = 3,
    ACTIONS(1007), 1,
      aux_sym__match_exec_token2,
    STATE(89), 1,
      aux_sym__match_value_repeat1,
    ACTIONS(1011), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3072] = 3,
    ACTIONS(1493), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym__match_value_repeat2,
    ACTIONS(1496), 2,
      sym__space,
      sym__eol,
  [3083] = 3,
    ACTIONS(1445), 1,
      sym__number,
    STATE(540), 1,
      sym_number,
    ACTIONS(1498), 2,
      anon_sym_none,
      sym_ipqos,
  [3094] = 2,
    ACTIONS(1502), 1,
      sym_kex,
    ACTIONS(1500), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3103] = 4,
    ACTIONS(1245), 1,
      aux_sym__remote_command_token2,
    ACTIONS(1247), 1,
      sym_token,
    STATE(138), 1,
      aux_sym__token_string_repeat1,
    STATE(535), 1,
      sym__token_string,
  [3116] = 3,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1504), 2,
      sym__space,
      sym__eol,
  [3127] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1506), 2,
      sym__space,
      sym__eol,
  [3138] = 2,
    ACTIONS(1510), 1,
      sym_mac,
    ACTIONS(1508), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3147] = 3,
    ACTIONS(1512), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1515), 2,
      sym__space,
      sym__eol,
  [3158] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1506), 2,
      sym__space,
      sym__eol,
  [3169] = 3,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1517), 2,
      sym__space,
      sym__eol,
  [3180] = 3,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym__match_localnetwork_repeat1,
    ACTIONS(1522), 2,
      sym__space,
      sym__eol,
  [3191] = 3,
    ACTIONS(1524), 1,
      aux_sym__match_localnetwork_token2,
    ACTIONS(1528), 1,
      aux_sym__proxy_jump_arg_token1,
    ACTIONS(1526), 2,
      anon_sym_none,
      aux_sym__proxy_jump_arg_token2,
  [3202] = 2,
    ACTIONS(1532), 1,
      sym_key_sig,
    ACTIONS(1530), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3211] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1534), 2,
      sym__space,
      sym__eol,
  [3222] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1534), 2,
      sym__space,
      sym__eol,
  [3233] = 3,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1536), 2,
      sym__space,
      sym__eol,
  [3244] = 2,
    STATE(104), 1,
      aux_sym__send_env_value_repeat1,
    ACTIONS(1160), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__send_env_value_token1,
  [3253] = 3,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1538), 2,
      sym__space,
      sym__eol,
  [3264] = 3,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1538), 2,
      sym__space,
      sym__eol,
  [3275] = 3,
    ACTIONS(1082), 1,
      aux_sym__match_exec_token3,
    STATE(114), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1086), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3286] = 3,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1540), 2,
      sym__space,
      sym__eol,
  [3297] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1542), 2,
      sym__space,
      sym__eol,
  [3308] = 3,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1540), 2,
      sym__space,
      sym__eol,
  [3319] = 2,
    STATE(487), 1,
      sym__boolean,
    ACTIONS(1544), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3328] = 2,
    STATE(486), 1,
      sym__boolean,
    ACTIONS(1546), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [3337] = 3,
    ACTIONS(1548), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1551), 2,
      sym__space,
      sym__eol,
  [3348] = 2,
    ACTIONS(1319), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1317), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3357] = 2,
    ACTIONS(1319), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1317), 3,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3366] = 3,
    ACTIONS(1325), 1,
      aux_sym__match_exec_token3,
    STATE(161), 1,
      aux_sym__match_value_repeat3,
    ACTIONS(1327), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [3377] = 2,
    ACTIONS(1090), 1,
      aux_sym__match_exec_token3,
    ACTIONS(1092), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [3386] = 4,
    ACTIONS(1553), 1,
      aux_sym__sep_token1,
    ACTIONS(1555), 1,
      sym__space,
    ACTIONS(1557), 1,
      sym__eol,
    STATE(481), 1,
      sym__sep,
  [3399] = 4,
    ACTIONS(1559), 1,
      aux_sym__sep_token1,
    ACTIONS(1561), 1,
      sym__space,
    ACTIONS(1563), 1,
      sym__eol,
    STATE(714), 1,
      sym__sep,
  [3412] = 3,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1565), 2,
      sym__space,
      sym__eol,
  [3423] = 3,
    ACTIONS(1567), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1570), 2,
      sym__space,
      sym__eol,
  [3434] = 3,
    ACTIONS(1572), 1,
      sym__space,
    ACTIONS(1575), 1,
      sym__eol,
    STATE(259), 1,
      aux_sym__permit_remote_open_repeat1,
  [3444] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1577), 1,
      aux_sym__match_localnetwork_token2,
    STATE(609), 1,
      sym__string,
  [3454] = 2,
    STATE(539), 1,
      sym__boolean,
    ACTIONS(1579), 2,
      anon_sym_yes,
      anon_sym_no,
  [3462] = 3,
    ACTIONS(1581), 1,
      aux_sym__sep_token1,
    ACTIONS(1583), 1,
      sym__space,
    STATE(630), 1,
      sym__sep,
  [3472] = 2,
    STATE(556), 1,
      sym__boolean,
    ACTIONS(1585), 2,
      anon_sym_yes,
      anon_sym_no,
  [3480] = 3,
    ACTIONS(1587), 1,
      sym__space,
    ACTIONS(1590), 1,
      sym__eol,
    STATE(264), 1,
      aux_sym__ignore_unknown_repeat1,
  [3490] = 3,
    ACTIONS(1592), 1,
      aux_sym__sep_token1,
    ACTIONS(1594), 1,
      sym__space,
    STATE(304), 1,
      sym__sep,
  [3500] = 3,
    ACTIONS(1596), 1,
      aux_sym__sep_token1,
    ACTIONS(1598), 1,
      sym__space,
    STATE(271), 1,
      sym__sep,
  [3510] = 2,
    STATE(555), 1,
      sym__boolean,
    ACTIONS(1600), 2,
      anon_sym_yes,
      anon_sym_no,
  [3518] = 3,
    ACTIONS(1602), 1,
      aux_sym__sep_token1,
    ACTIONS(1604), 1,
      sym__space,
    STATE(249), 1,
      sym__sep,
  [3528] = 3,
    ACTIONS(1606), 1,
      aux_sym__sep_token1,
    ACTIONS(1608), 1,
      sym__space,
    STATE(313), 1,
      sym__sep,
  [3538] = 3,
    ACTIONS(1610), 1,
      aux_sym__sep_token1,
    ACTIONS(1612), 1,
      sym__space,
    STATE(146), 1,
      sym__sep,
  [3548] = 2,
    STATE(495), 1,
      sym__boolean,
    ACTIONS(1614), 2,
      anon_sym_yes,
      anon_sym_no,
  [3556] = 3,
    ACTIONS(1616), 1,
      aux_sym__sep_token1,
    ACTIONS(1618), 1,
      sym__space,
    STATE(117), 1,
      sym__sep,
  [3566] = 2,
    STATE(576), 1,
      sym__boolean,
    ACTIONS(1620), 2,
      anon_sym_yes,
      anon_sym_no,
  [3574] = 2,
    STATE(552), 1,
      sym__boolean,
    ACTIONS(1622), 2,
      anon_sym_yes,
      anon_sym_no,
  [3582] = 2,
    STATE(559), 1,
      sym__boolean,
    ACTIONS(1624), 2,
      anon_sym_yes,
      anon_sym_no,
  [3590] = 2,
    STATE(490), 1,
      sym__boolean,
    ACTIONS(1626), 2,
      anon_sym_yes,
      anon_sym_no,
  [3598] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1628), 1,
      aux_sym__match_localnetwork_token2,
    STATE(489), 1,
      sym__string,
  [3608] = 2,
    STATE(527), 1,
      sym__boolean,
    ACTIONS(1630), 2,
      anon_sym_yes,
      anon_sym_no,
  [3616] = 3,
    ACTIONS(1445), 1,
      sym__number,
    ACTIONS(1632), 1,
      anon_sym_any,
    STATE(449), 1,
      sym_number,
  [3626] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1634), 1,
      aux_sym__match_localnetwork_token2,
    STATE(550), 1,
      sym__string,
  [3636] = 3,
    ACTIONS(1636), 1,
      aux_sym__sep_token1,
    ACTIONS(1638), 1,
      sym__space,
    STATE(123), 1,
      sym__sep,
  [3646] = 2,
    STATE(525), 1,
      sym__boolean,
    ACTIONS(1640), 2,
      anon_sym_yes,
      anon_sym_no,
  [3654] = 2,
    STATE(485), 1,
      sym__boolean,
    ACTIONS(1642), 2,
      anon_sym_yes,
      anon_sym_no,
  [3662] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1644), 1,
      aux_sym__match_localnetwork_token2,
    STATE(484), 1,
      sym__string,
  [3672] = 3,
    ACTIONS(1646), 1,
      aux_sym__sep_token1,
    ACTIONS(1648), 1,
      sym__space,
    STATE(145), 1,
      sym__sep,
  [3682] = 2,
    STATE(524), 1,
      sym__boolean,
    ACTIONS(1650), 2,
      anon_sym_yes,
      anon_sym_no,
  [3690] = 1,
    ACTIONS(1551), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3696] = 3,
    ACTIONS(1652), 1,
      aux_sym__sep_token1,
    ACTIONS(1654), 1,
      sym__space,
    STATE(60), 1,
      sym__sep,
  [3706] = 3,
    ACTIONS(1656), 1,
      anon_sym_DQUOTE,
    ACTIONS(1658), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym__log_verbose_repeat2,
  [3716] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1660), 1,
      aux_sym__match_localnetwork_token2,
    STATE(520), 1,
      sym__string,
  [3726] = 1,
    ACTIONS(1515), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3732] = 3,
    ACTIONS(1662), 1,
      sym__space,
    ACTIONS(1664), 1,
      sym__eol,
    STATE(462), 1,
      aux_sym_host_declaration_repeat1,
  [3742] = 2,
    STATE(548), 1,
      sym__boolean,
    ACTIONS(1666), 2,
      anon_sym_yes,
      anon_sym_no,
  [3750] = 3,
    ACTIONS(1668), 1,
      aux_sym__sep_token1,
    ACTIONS(1670), 1,
      sym__space,
    STATE(76), 1,
      sym__sep,
  [3760] = 3,
    ACTIONS(1672), 1,
      aux_sym__sep_token1,
    ACTIONS(1674), 1,
      sym__space,
    STATE(273), 1,
      sym__sep,
  [3770] = 3,
    ACTIONS(1676), 1,
      aux_sym__sep_token1,
    ACTIONS(1678), 1,
      sym__space,
    STATE(746), 1,
      sym__sep,
  [3780] = 3,
    ACTIONS(1680), 1,
      aux_sym__sep_token1,
    ACTIONS(1682), 1,
      sym__space,
    STATE(169), 1,
      sym__sep,
  [3790] = 3,
    ACTIONS(1684), 1,
      aux_sym__sep_token1,
    ACTIONS(1686), 1,
      sym__space,
    STATE(468), 1,
      sym__sep,
  [3800] = 3,
    ACTIONS(1688), 1,
      aux_sym__sep_token1,
    ACTIONS(1690), 1,
      sym__space,
    STATE(77), 1,
      sym__sep,
  [3810] = 3,
    ACTIONS(1692), 1,
      aux_sym__sep_token1,
    ACTIONS(1694), 1,
      sym__space,
    STATE(81), 1,
      sym__sep,
  [3820] = 3,
    ACTIONS(1696), 1,
      aux_sym__sep_token1,
    ACTIONS(1698), 1,
      sym__space,
    STATE(82), 1,
      sym__sep,
  [3830] = 3,
    ACTIONS(1700), 1,
      aux_sym__sep_token1,
    ACTIONS(1702), 1,
      sym__space,
    STATE(83), 1,
      sym__sep,
  [3840] = 3,
    ACTIONS(1704), 1,
      sym__space,
    ACTIONS(1706), 1,
      sym__eol,
    STATE(374), 1,
      aux_sym_match_declaration_repeat1,
  [3850] = 2,
    STATE(514), 1,
      sym__boolean,
    ACTIONS(1708), 2,
      anon_sym_yes,
      anon_sym_no,
  [3858] = 3,
    ACTIONS(1710), 1,
      sym__space,
    ACTIONS(1713), 1,
      sym__eol,
    STATE(305), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3868] = 2,
    STATE(557), 1,
      sym__boolean,
    ACTIONS(1715), 2,
      anon_sym_yes,
      anon_sym_no,
  [3876] = 1,
    ACTIONS(1570), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3882] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1717), 1,
      aux_sym__match_localnetwork_token2,
    STATE(360), 1,
      sym__string,
  [3892] = 3,
    ACTIONS(1719), 1,
      aux_sym__sep_token1,
    ACTIONS(1721), 1,
      sym__space,
    STATE(59), 1,
      sym__sep,
  [3902] = 3,
    ACTIONS(1723), 1,
      aux_sym__sep_token1,
    ACTIONS(1725), 1,
      sym__space,
    STATE(275), 1,
      sym__sep,
  [3912] = 3,
    ACTIONS(1727), 1,
      aux_sym__sep_token1,
    ACTIONS(1729), 1,
      sym__space,
    STATE(277), 1,
      sym__sep,
  [3922] = 1,
    ACTIONS(1483), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3928] = 2,
    STATE(563), 1,
      sym__boolean,
    ACTIONS(1731), 2,
      anon_sym_yes,
      anon_sym_no,
  [3936] = 3,
    ACTIONS(1375), 1,
      anon_sym_COLON,
    ACTIONS(1733), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__cnames_map_repeat1,
  [3946] = 2,
    STATE(565), 1,
      sym__boolean,
    ACTIONS(1736), 2,
      anon_sym_yes,
      anon_sym_no,
  [3954] = 1,
    ACTIONS(1738), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3960] = 2,
    STATE(569), 1,
      sym__boolean,
    ACTIONS(1740), 2,
      anon_sym_yes,
      anon_sym_no,
  [3968] = 3,
    ACTIONS(1742), 1,
      aux_sym__sep_token1,
    ACTIONS(1744), 1,
      sym__space,
    STATE(632), 1,
      sym__sep,
  [3978] = 3,
    ACTIONS(1746), 1,
      sym__space,
    ACTIONS(1749), 1,
      sym__eol,
    STATE(319), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3988] = 3,
    ACTIONS(1751), 1,
      sym__space,
    ACTIONS(1754), 1,
      sym__eol,
    STATE(320), 1,
      aux_sym__canonical_domains_repeat1,
  [3998] = 3,
    ACTIONS(1358), 1,
      aux_sym_time_token3,
    ACTIONS(1360), 1,
      aux_sym_time_token4,
    ACTIONS(1362), 1,
      aux_sym_time_token5,
  [4008] = 2,
    STATE(570), 1,
      sym__boolean,
    ACTIONS(1756), 2,
      anon_sym_yes,
      anon_sym_no,
  [4016] = 3,
    ACTIONS(1758), 1,
      sym__space,
    ACTIONS(1760), 1,
      sym__eol,
    STATE(452), 1,
      aux_sym__canonical_domains_repeat1,
  [4026] = 1,
    ACTIONS(1762), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [4032] = 3,
    ACTIONS(1764), 1,
      sym__space,
    ACTIONS(1767), 1,
      sym__eol,
    STATE(325), 1,
      aux_sym_match_declaration_repeat1,
  [4042] = 3,
    ACTIONS(1769), 1,
      aux_sym__sep_token1,
    ACTIONS(1771), 1,
      sym__space,
    STATE(747), 1,
      sym__sep,
  [4052] = 3,
    ACTIONS(1773), 1,
      aux_sym__sep_token1,
    ACTIONS(1775), 1,
      sym__space,
    STATE(564), 1,
      sym__sep,
  [4062] = 3,
    ACTIONS(1777), 1,
      aux_sym__sep_token1,
    ACTIONS(1779), 1,
      sym__space,
    STATE(306), 1,
      sym__sep,
  [4072] = 3,
    ACTIONS(1781), 1,
      sym__space,
    ACTIONS(1783), 1,
      sym__eol,
    STATE(448), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [4082] = 3,
    ACTIONS(1785), 1,
      anon_sym_COMMA,
    ACTIONS(1787), 1,
      anon_sym_COLON,
    STATE(445), 1,
      aux_sym__cnames_map_repeat1,
  [4092] = 3,
    ACTIONS(1789), 1,
      aux_sym__sep_token1,
    ACTIONS(1791), 1,
      sym__space,
    STATE(308), 1,
      sym__sep,
  [4102] = 2,
    STATE(578), 1,
      sym__boolean,
    ACTIONS(1793), 2,
      anon_sym_yes,
      anon_sym_no,
  [4110] = 3,
    ACTIONS(1795), 1,
      aux_sym__sep_token1,
    ACTIONS(1797), 1,
      sym__space,
    STATE(143), 1,
      sym__sep,
  [4120] = 3,
    ACTIONS(1799), 1,
      aux_sym__sep_token1,
    ACTIONS(1801), 1,
      sym__space,
    STATE(41), 1,
      sym__sep,
  [4130] = 2,
    STATE(581), 1,
      sym__boolean,
    ACTIONS(1803), 2,
      anon_sym_yes,
      anon_sym_no,
  [4138] = 2,
    STATE(583), 1,
      sym__boolean,
    ACTIONS(1805), 2,
      anon_sym_yes,
      anon_sym_no,
  [4146] = 3,
    ACTIONS(1807), 1,
      aux_sym__sep_token1,
    ACTIONS(1809), 1,
      sym__space,
    STATE(128), 1,
      sym__sep,
  [4156] = 3,
    ACTIONS(1811), 1,
      aux_sym__sep_token1,
    ACTIONS(1813), 1,
      sym__space,
    STATE(276), 1,
      sym__sep,
  [4166] = 2,
    ACTIONS(1817), 1,
      sym_sig,
    ACTIONS(1815), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4174] = 3,
    ACTIONS(1819), 1,
      aux_sym__sep_token1,
    ACTIONS(1821), 1,
      sym__space,
    STATE(283), 1,
      sym__sep,
  [4184] = 3,
    ACTIONS(1823), 1,
      aux_sym__sep_token1,
    ACTIONS(1825), 1,
      sym__space,
    STATE(263), 1,
      sym__sep,
  [4194] = 2,
    STATE(596), 1,
      sym__boolean,
    ACTIONS(1827), 2,
      anon_sym_yes,
      anon_sym_no,
  [4202] = 3,
    ACTIONS(1829), 1,
      sym__space,
    ACTIONS(1832), 1,
      sym__eol,
    STATE(343), 1,
      aux_sym_host_declaration_repeat1,
  [4212] = 3,
    ACTIONS(1834), 1,
      aux_sym__sep_token1,
    ACTIONS(1836), 1,
      sym__space,
    STATE(267), 1,
      sym__sep,
  [4222] = 3,
    ACTIONS(1838), 1,
      aux_sym__sep_token1,
    ACTIONS(1840), 1,
      sym__space,
    STATE(222), 1,
      sym__sep,
  [4232] = 3,
    ACTIONS(1842), 1,
      aux_sym__sep_token1,
    ACTIONS(1844), 1,
      sym__space,
    STATE(274), 1,
      sym__sep,
  [4242] = 3,
    ACTIONS(1846), 1,
      aux_sym__sep_token1,
    ACTIONS(1848), 1,
      sym__space,
    STATE(223), 1,
      sym__sep,
  [4252] = 3,
    ACTIONS(1850), 1,
      aux_sym__sep_token1,
    ACTIONS(1852), 1,
      sym__space,
    STATE(280), 1,
      sym__sep,
  [4262] = 3,
    ACTIONS(1854), 1,
      aux_sym__sep_token1,
    ACTIONS(1856), 1,
      sym__space,
    STATE(133), 1,
      sym__sep,
  [4272] = 2,
    STATE(598), 1,
      sym__boolean,
    ACTIONS(1858), 2,
      anon_sym_yes,
      anon_sym_no,
  [4280] = 3,
    ACTIONS(1860), 1,
      aux_sym__sep_token1,
    ACTIONS(1862), 1,
      sym__space,
    STATE(152), 1,
      sym__sep,
  [4290] = 2,
    STATE(605), 1,
      sym__boolean,
    ACTIONS(1864), 2,
      anon_sym_yes,
      anon_sym_no,
  [4298] = 3,
    ACTIONS(1866), 1,
      sym__space,
    ACTIONS(1868), 1,
      sym__eol,
    STATE(343), 1,
      aux_sym_host_declaration_repeat1,
  [4308] = 3,
    ACTIONS(1870), 1,
      aux_sym__sep_token1,
    ACTIONS(1872), 1,
      sym__space,
    STATE(293), 1,
      sym__sep,
  [4318] = 3,
    ACTIONS(1874), 1,
      aux_sym__sep_token1,
    ACTIONS(1876), 1,
      sym__space,
    STATE(44), 1,
      sym__sep,
  [4328] = 3,
    ACTIONS(1878), 1,
      aux_sym__sep_token1,
    ACTIONS(1880), 1,
      sym__space,
    STATE(58), 1,
      sym__sep,
  [4338] = 3,
    ACTIONS(1882), 1,
      sym__space,
    ACTIONS(1884), 1,
      sym__eol,
    STATE(381), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4348] = 3,
    ACTIONS(1886), 1,
      aux_sym__sep_token1,
    ACTIONS(1888), 1,
      sym__space,
    STATE(134), 1,
      sym__sep,
  [4358] = 3,
    ACTIONS(1445), 1,
      sym__number,
    ACTIONS(1890), 1,
      anon_sym_any,
    STATE(664), 1,
      sym_number,
  [4368] = 3,
    ACTIONS(1892), 1,
      sym__space,
    ACTIONS(1894), 1,
      sym__eol,
    STATE(430), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [4378] = 3,
    ACTIONS(1896), 1,
      sym__space,
    ACTIONS(1898), 1,
      sym__eol,
    STATE(379), 1,
      aux_sym__set_env_repeat1,
  [4388] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(1900), 1,
      aux_sym__match_localnetwork_token2,
    STATE(661), 1,
      sym__string,
  [4398] = 2,
    ACTIONS(1904), 1,
      anon_sym_inet,
    ACTIONS(1902), 2,
      anon_sym_any,
      anon_sym_inet6,
  [4406] = 3,
    ACTIONS(1906), 1,
      aux_sym__sep_token1,
    ACTIONS(1908), 1,
      sym__space,
    STATE(279), 1,
      sym__sep,
  [4416] = 3,
    ACTIONS(1910), 1,
      sym__space,
    ACTIONS(1912), 1,
      sym__eol,
    STATE(377), 1,
      aux_sym__send_env_repeat1,
  [4426] = 3,
    ACTIONS(1914), 1,
      anon_sym_none,
    ACTIONS(1916), 1,
      sym__number,
    STATE(510), 1,
      sym_bytes,
  [4436] = 3,
    ACTIONS(1918), 1,
      aux_sym__sep_token1,
    ACTIONS(1920), 1,
      sym__space,
    STATE(248), 1,
      sym__sep,
  [4446] = 3,
    ACTIONS(1922), 1,
      aux_sym__sep_token1,
    ACTIONS(1924), 1,
      sym__space,
    STATE(50), 1,
      sym__sep,
  [4456] = 3,
    ACTIONS(1926), 1,
      aux_sym__sep_token1,
    ACTIONS(1928), 1,
      sym__space,
    STATE(475), 1,
      sym__sep,
  [4466] = 1,
    ACTIONS(1409), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4472] = 3,
    ACTIONS(1930), 1,
      aux_sym__sep_token1,
    ACTIONS(1932), 1,
      sym__space,
    STATE(226), 1,
      sym__sep,
  [4482] = 3,
    ACTIONS(1445), 1,
      sym__number,
    ACTIONS(1934), 1,
      anon_sym_STAR,
    STATE(739), 1,
      sym_number,
  [4492] = 3,
    ACTIONS(1936), 1,
      aux_sym__sep_token1,
    ACTIONS(1938), 1,
      sym__space,
    STATE(261), 1,
      sym__sep,
  [4502] = 3,
    ACTIONS(870), 1,
      sym__eol,
    ACTIONS(1940), 1,
      sym__space,
    STATE(325), 1,
      aux_sym_match_declaration_repeat1,
  [4512] = 1,
    ACTIONS(1400), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [4518] = 2,
    ACTIONS(1942), 1,
      anon_sym_COLON,
    ACTIONS(1944), 2,
      sym__space,
      sym__eol,
  [4526] = 3,
    ACTIONS(1946), 1,
      sym__space,
    ACTIONS(1949), 1,
      sym__eol,
    STATE(377), 1,
      aux_sym__send_env_repeat1,
  [4536] = 3,
    ACTIONS(1951), 1,
      aux_sym__sep_token1,
    ACTIONS(1953), 1,
      sym__space,
    STATE(366), 1,
      sym__sep,
  [4546] = 3,
    ACTIONS(1955), 1,
      sym__space,
    ACTIONS(1958), 1,
      sym__eol,
    STATE(379), 1,
      aux_sym__set_env_repeat1,
  [4556] = 3,
    ACTIONS(1960), 1,
      sym__space,
    ACTIONS(1962), 1,
      sym__eol,
    STATE(411), 1,
      aux_sym__ignore_unknown_repeat1,
  [4566] = 3,
    ACTIONS(1964), 1,
      sym__space,
    ACTIONS(1967), 1,
      sym__eol,
    STATE(381), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [4576] = 3,
    ACTIONS(1969), 1,
      sym__space,
    ACTIONS(1971), 1,
      sym__eol,
    STATE(259), 1,
      aux_sym__permit_remote_open_repeat1,
  [4586] = 3,
    ACTIONS(1973), 1,
      aux_sym__sep_token1,
    ACTIONS(1975), 1,
      sym__space,
    STATE(90), 1,
      sym__sep,
  [4596] = 3,
    ACTIONS(1977), 1,
      aux_sym__sep_token1,
    ACTIONS(1979), 1,
      sym__space,
    STATE(315), 1,
      sym__sep,
  [4606] = 3,
    ACTIONS(1981), 1,
      aux_sym__sep_token1,
    ACTIONS(1983), 1,
      sym__space,
    STATE(643), 1,
      sym__sep,
  [4616] = 3,
    ACTIONS(1445), 1,
      sym__number,
    ACTIONS(1985), 1,
      anon_sym_STAR,
    STATE(649), 1,
      sym_number,
  [4626] = 3,
    ACTIONS(1987), 1,
      aux_sym__sep_token1,
    ACTIONS(1989), 1,
      sym__space,
    STATE(129), 1,
      sym__sep,
  [4636] = 3,
    ACTIONS(1991), 1,
      aux_sym__sep_token1,
    ACTIONS(1993), 1,
      sym__space,
    STATE(317), 1,
      sym__sep,
  [4646] = 3,
    ACTIONS(1995), 1,
      aux_sym__sep_token1,
    ACTIONS(1997), 1,
      sym__space,
    STATE(322), 1,
      sym__sep,
  [4656] = 3,
    ACTIONS(1999), 1,
      aux_sym__sep_token1,
    ACTIONS(2001), 1,
      sym__space,
    STATE(45), 1,
      sym__sep,
  [4666] = 3,
    ACTIONS(2003), 1,
      aux_sym__sep_token1,
    ACTIONS(2005), 1,
      sym__space,
    STATE(237), 1,
      sym__sep,
  [4676] = 3,
    ACTIONS(2007), 1,
      aux_sym__sep_token1,
    ACTIONS(2009), 1,
      sym__space,
    STATE(142), 1,
      sym__sep,
  [4686] = 3,
    ACTIONS(2011), 1,
      aux_sym__sep_token1,
    ACTIONS(2013), 1,
      sym__space,
    STATE(126), 1,
      sym__sep,
  [4696] = 3,
    ACTIONS(2015), 1,
      aux_sym__sep_token1,
    ACTIONS(2017), 1,
      sym__space,
    STATE(644), 1,
      sym__sep,
  [4706] = 3,
    ACTIONS(2019), 1,
      aux_sym__sep_token1,
    ACTIONS(2021), 1,
      sym__space,
    STATE(645), 1,
      sym__sep,
  [4716] = 3,
    ACTIONS(2023), 1,
      aux_sym__sep_token1,
    ACTIONS(2025), 1,
      sym__space,
    STATE(332), 1,
      sym__sep,
  [4726] = 3,
    ACTIONS(2027), 1,
      aux_sym__sep_token1,
    ACTIONS(2029), 1,
      sym__space,
    STATE(335), 1,
      sym__sep,
  [4736] = 2,
    ACTIONS(2033), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2031), 2,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
  [4744] = 3,
    ACTIONS(2035), 1,
      anon_sym_DQUOTE,
    ACTIONS(2037), 1,
      anon_sym_COMMA,
    STATE(427), 1,
      aux_sym__match_localnetwork_repeat2,
  [4754] = 3,
    ACTIONS(2039), 1,
      aux_sym__sep_token1,
    ACTIONS(2041), 1,
      sym__space,
    STATE(208), 1,
      sym__sep,
  [4764] = 3,
    ACTIONS(2043), 1,
      aux_sym__sep_token1,
    ACTIONS(2045), 1,
      sym__space,
    STATE(336), 1,
      sym__sep,
  [4774] = 3,
    ACTIONS(1658), 1,
      anon_sym_COMMA,
    ACTIONS(2047), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym__log_verbose_repeat2,
  [4784] = 3,
    ACTIONS(2049), 1,
      aux_sym__sep_token1,
    ACTIONS(2051), 1,
      sym__space,
    STATE(227), 1,
      sym__sep,
  [4794] = 3,
    ACTIONS(2053), 1,
      aux_sym__sep_token1,
    ACTIONS(2055), 1,
      sym__space,
    STATE(48), 1,
      sym__sep,
  [4804] = 3,
    ACTIONS(2057), 1,
      aux_sym__sep_token1,
    ACTIONS(2059), 1,
      sym__space,
    STATE(642), 1,
      sym__sep,
  [4814] = 2,
    ACTIONS(2061), 1,
      sym__number,
    ACTIONS(2063), 2,
      sym__space,
      sym__eol,
  [4822] = 3,
    ACTIONS(1969), 1,
      sym__space,
    ACTIONS(2065), 1,
      sym__eol,
    STATE(382), 1,
      aux_sym__permit_remote_open_repeat1,
  [4832] = 2,
    ACTIONS(2067), 1,
      sym__number,
    ACTIONS(2063), 2,
      sym__space,
      sym__eol,
  [4840] = 2,
    ACTIONS(2069), 1,
      sym__number,
    ACTIONS(2063), 2,
      sym__space,
      sym__eol,
  [4848] = 3,
    ACTIONS(2071), 1,
      anon_sym_DQUOTE,
    ACTIONS(2073), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym__log_verbose_repeat2,
  [4858] = 3,
    ACTIONS(1960), 1,
      sym__space,
    ACTIONS(2076), 1,
      sym__eol,
    STATE(264), 1,
      aux_sym__ignore_unknown_repeat1,
  [4868] = 3,
    ACTIONS(1445), 1,
      sym__number,
    ACTIONS(2078), 1,
      anon_sym_STAR,
    STATE(435), 1,
      sym_number,
  [4878] = 3,
    ACTIONS(2080), 1,
      aux_sym__sep_token1,
    ACTIONS(2082), 1,
      sym__space,
    STATE(339), 1,
      sym__sep,
  [4888] = 3,
    ACTIONS(2084), 1,
      aux_sym__sep_token1,
    ACTIONS(2086), 1,
      sym__space,
    STATE(55), 1,
      sym__sep,
  [4898] = 3,
    ACTIONS(2088), 1,
      aux_sym__sep_token1,
    ACTIONS(2090), 1,
      sym__space,
    STATE(228), 1,
      sym__sep,
  [4908] = 2,
    ACTIONS(2092), 1,
      anon_sym_COLON,
    ACTIONS(2094), 2,
      sym__space,
      sym__eol,
  [4916] = 3,
    ACTIONS(2096), 1,
      aux_sym__sep_token1,
    ACTIONS(2098), 1,
      sym__space,
    STATE(40), 1,
      sym__sep,
  [4926] = 3,
    ACTIONS(2100), 1,
      aux_sym__sep_token1,
    ACTIONS(2102), 1,
      sym__space,
    STATE(646), 1,
      sym__sep,
  [4936] = 3,
    ACTIONS(2104), 1,
      aux_sym__sep_token1,
    ACTIONS(2106), 1,
      sym__space,
    STATE(342), 1,
      sym__sep,
  [4946] = 3,
    ACTIONS(2108), 1,
      aux_sym__sep_token1,
    ACTIONS(2110), 1,
      sym__space,
    STATE(350), 1,
      sym__sep,
  [4956] = 3,
    ACTIONS(2112), 1,
      aux_sym__sep_token1,
    ACTIONS(2114), 1,
      sym__space,
    STATE(118), 1,
      sym__sep,
  [4966] = 2,
    ACTIONS(2116), 1,
      aux_sym_bytes_token1,
    ACTIONS(2118), 2,
      sym__space,
      sym__eol,
  [4974] = 2,
    ACTIONS(2122), 1,
      aux_sym__match_exec_token3,
    ACTIONS(2120), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [4982] = 3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(2124), 1,
      anon_sym_DQUOTE,
    STATE(442), 1,
      aux_sym__match_value_repeat4,
  [4992] = 3,
    ACTIONS(2126), 1,
      aux_sym__sep_token1,
    ACTIONS(2128), 1,
      sym__space,
    STATE(80), 1,
      sym__sep,
  [5002] = 3,
    ACTIONS(2130), 1,
      aux_sym__sep_token1,
    ACTIONS(2132), 1,
      sym__space,
    STATE(92), 1,
      sym__sep,
  [5012] = 3,
    ACTIONS(2037), 1,
      anon_sym_COMMA,
    ACTIONS(2134), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      aux_sym__match_localnetwork_repeat2,
  [5022] = 1,
    ACTIONS(1522), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5028] = 3,
    ACTIONS(2136), 1,
      aux_sym__sep_token1,
    ACTIONS(2138), 1,
      sym__space,
    STATE(110), 1,
      sym__sep,
  [5038] = 3,
    ACTIONS(1892), 1,
      sym__space,
    ACTIONS(2140), 1,
      sym__eol,
    STATE(305), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [5048] = 3,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(2142), 1,
      aux_sym__match_localnetwork_token2,
    STATE(619), 1,
      sym__string,
  [5058] = 3,
    ACTIONS(2144), 1,
      aux_sym_time_token3,
    ACTIONS(2146), 1,
      aux_sym_time_token4,
    ACTIONS(2148), 1,
      aux_sym_time_token5,
  [5068] = 3,
    ACTIONS(1445), 1,
      sym__number,
    ACTIONS(2150), 1,
      anon_sym_STAR,
    STATE(551), 1,
      sym_number,
  [5078] = 3,
    ACTIONS(1910), 1,
      sym__space,
    ACTIONS(2152), 1,
      sym__eol,
    STATE(365), 1,
      aux_sym__send_env_repeat1,
  [5088] = 1,
    ACTIONS(2154), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5094] = 3,
    ACTIONS(2156), 1,
      aux_sym__sep_token1,
    ACTIONS(2158), 1,
      sym__space,
    STATE(352), 1,
      sym__sep,
  [5104] = 3,
    ACTIONS(2160), 1,
      aux_sym__sep_token1,
    ACTIONS(2162), 1,
      sym__space,
    STATE(363), 1,
      sym__sep,
  [5114] = 3,
    ACTIONS(2164), 1,
      aux_sym__sep_token1,
    ACTIONS(2166), 1,
      sym__space,
    STATE(742), 1,
      sym__sep,
  [5124] = 3,
    ACTIONS(2168), 1,
      aux_sym__sep_token1,
    ACTIONS(2170), 1,
      sym__space,
    STATE(132), 1,
      sym__sep,
  [5134] = 3,
    ACTIONS(1896), 1,
      sym__space,
    ACTIONS(2172), 1,
      sym__eol,
    STATE(361), 1,
      aux_sym__set_env_repeat1,
  [5144] = 3,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(2174), 1,
      anon_sym_DQUOTE,
    STATE(442), 1,
      aux_sym__match_value_repeat4,
  [5154] = 3,
    ACTIONS(2176), 1,
      anon_sym_DQUOTE,
    ACTIONS(2178), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym__match_value_repeat4,
  [5164] = 3,
    ACTIONS(2181), 1,
      aux_sym__sep_token1,
    ACTIONS(2183), 1,
      sym__space,
    STATE(88), 1,
      sym__sep,
  [5174] = 3,
    ACTIONS(2185), 1,
      anon_sym_DQUOTE,
    ACTIONS(2187), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym__match_localnetwork_repeat2,
  [5184] = 3,
    ACTIONS(1785), 1,
      anon_sym_COMMA,
    ACTIONS(2190), 1,
      anon_sym_COLON,
    STATE(314), 1,
      aux_sym__cnames_map_repeat1,
  [5194] = 1,
    ACTIONS(2192), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [5200] = 2,
    ACTIONS(2194), 1,
      sym__number,
    ACTIONS(2196), 2,
      sym__space,
      sym__eol,
  [5208] = 3,
    ACTIONS(1781), 1,
      sym__space,
    ACTIONS(2198), 1,
      sym__eol,
    STATE(319), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [5218] = 2,
    ACTIONS(2200), 1,
      anon_sym_COLON,
    ACTIONS(2202), 2,
      sym__space,
      sym__eol,
  [5226] = 3,
    ACTIONS(2204), 1,
      aux_sym__sep_token1,
    ACTIONS(2206), 1,
      sym__space,
    STATE(231), 1,
      sym__sep,
  [5236] = 3,
    ACTIONS(1882), 1,
      sym__space,
    ACTIONS(2208), 1,
      sym__eol,
    STATE(357), 1,
      aux_sym__user_known_hosts_file_repeat1,
  [5246] = 3,
    ACTIONS(1758), 1,
      sym__space,
    ACTIONS(2210), 1,
      sym__eol,
    STATE(320), 1,
      aux_sym__canonical_domains_repeat1,
  [5256] = 2,
    ACTIONS(2212), 1,
      sym__number,
    ACTIONS(2196), 2,
      sym__space,
      sym__eol,
  [5264] = 2,
    ACTIONS(2214), 1,
      sym__number,
    ACTIONS(2216), 2,
      sym__space,
      sym__eol,
  [5272] = 3,
    ACTIONS(2218), 1,
      aux_sym__sep_token1,
    ACTIONS(2220), 1,
      sym__space,
    STATE(236), 1,
      sym__sep,
  [5282] = 2,
    ACTIONS(2222), 1,
      sym__number,
    ACTIONS(2216), 2,
      sym__space,
      sym__eol,
  [5290] = 3,
    ACTIONS(2224), 1,
      sym__space,
    ACTIONS(2226), 1,
      sym__eol,
    STATE(353), 1,
      aux_sym_host_declaration_repeat1,
  [5300] = 2,
    ACTIONS(2228), 1,
      sym__number,
    ACTIONS(2230), 2,
      sym__space,
      sym__eol,
  [5308] = 3,
    ACTIONS(2232), 1,
      aux_sym__sep_token1,
    ACTIONS(2234), 1,
      sym__space,
    STATE(260), 1,
      sym__sep,
  [5318] = 3,
    ACTIONS(2236), 1,
      aux_sym__sep_token1,
    ACTIONS(2238), 1,
      sym__space,
    STATE(130), 1,
      sym__sep,
  [5328] = 3,
    ACTIONS(2240), 1,
      aux_sym__sep_token1,
    ACTIONS(2242), 1,
      sym__space,
    STATE(745), 1,
      sym__sep,
  [5338] = 3,
    ACTIONS(2244), 1,
      sym__space,
    ACTIONS(2246), 1,
      sym__eol,
    STATE(343), 1,
      aux_sym_host_declaration_repeat1,
  [5348] = 3,
    ACTIONS(2248), 1,
      aux_sym__sep_token1,
    ACTIONS(2250), 1,
      sym__space,
    STATE(36), 1,
      sym__sep,
  [5358] = 3,
    ACTIONS(2252), 1,
      aux_sym__sep_token1,
    ACTIONS(2254), 1,
      sym__space,
    STATE(634), 1,
      sym__sep,
  [5368] = 2,
    ACTIONS(2256), 1,
      sym__number,
    ACTIONS(2216), 2,
      sym__space,
      sym__eol,
  [5376] = 2,
    ACTIONS(2258), 1,
      sym__number,
    ACTIONS(2216), 2,
      sym__space,
      sym__eol,
  [5384] = 3,
    ACTIONS(2260), 1,
      aux_sym__sep_token1,
    ACTIONS(2262), 1,
      sym__space,
    STATE(284), 1,
      sym__sep,
  [5394] = 3,
    ACTIONS(2264), 1,
      anon_sym_BANG,
    ACTIONS(2266), 1,
      anon_sym_DQUOTE,
    ACTIONS(2268), 1,
      aux_sym__match_localnetwork_token2,
  [5404] = 3,
    ACTIONS(2270), 1,
      aux_sym__sep_token1,
    ACTIONS(2272), 1,
      sym__space,
    STATE(290), 1,
      sym__sep,
  [5414] = 3,
    ACTIONS(2274), 1,
      aux_sym__sep_token1,
    ACTIONS(2276), 1,
      sym__space,
    STATE(93), 1,
      sym__sep,
  [5424] = 3,
    ACTIONS(2278), 1,
      aux_sym__sep_token1,
    ACTIONS(2280), 1,
      sym__space,
    STATE(286), 1,
      sym__sep,
  [5434] = 3,
    ACTIONS(2282), 1,
      aux_sym__sep_token1,
    ACTIONS(2284), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [5444] = 3,
    ACTIONS(2286), 1,
      aux_sym__sep_token1,
    ACTIONS(2288), 1,
      sym__space,
    STATE(639), 1,
      sym__sep,
  [5454] = 3,
    ACTIONS(2290), 1,
      aux_sym__sep_token1,
    ACTIONS(2292), 1,
      sym__space,
    STATE(278), 1,
      sym__sep,
  [5464] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(502), 1,
      sym_number,
  [5471] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5476] = 2,
    ACTIONS(782), 1,
      sym__space,
    ACTIONS(784), 1,
      sym__eol,
  [5483] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5488] = 2,
    ACTIONS(1106), 1,
      sym__number,
    STATE(494), 1,
      sym_time,
  [5495] = 1,
    ACTIONS(2296), 2,
      sym__space,
      sym__eol,
  [5500] = 2,
    ACTIONS(2298), 1,
      aux_sym__all_token1,
    STATE(579), 1,
      sym__all,
  [5507] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5512] = 1,
    ACTIONS(2216), 2,
      sym__space,
      sym__eol,
  [5517] = 1,
    ACTIONS(2300), 2,
      sym__space,
      sym__eol,
  [5522] = 1,
    ACTIONS(2302), 2,
      sym__space,
      sym__eol,
  [5527] = 1,
    ACTIONS(2304), 2,
      sym__space,
      sym__eol,
  [5532] = 1,
    ACTIONS(2306), 2,
      sym__space,
      sym__eol,
  [5537] = 1,
    ACTIONS(2308), 2,
      sym__space,
      sym__eol,
  [5542] = 1,
    ACTIONS(2310), 2,
      sym__space,
      sym__eol,
  [5547] = 1,
    ACTIONS(2312), 2,
      sym__space,
      sym__eol,
  [5552] = 1,
    ACTIONS(2314), 2,
      sym__space,
      sym__eol,
  [5557] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5562] = 1,
    ACTIONS(2316), 2,
      sym__space,
      sym__eol,
  [5567] = 1,
    ACTIONS(2318), 2,
      sym__space,
      sym__eol,
  [5572] = 1,
    ACTIONS(2320), 2,
      sym__space,
      sym__eol,
  [5577] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5582] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5587] = 1,
    ACTIONS(2322), 2,
      sym__space,
      sym__eol,
  [5592] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5597] = 1,
    ACTIONS(2324), 2,
      sym__space,
      sym__eol,
  [5602] = 1,
    ACTIONS(2326), 2,
      sym__space,
      sym__eol,
  [5607] = 1,
    ACTIONS(2328), 2,
      sym__space,
      sym__eol,
  [5612] = 1,
    ACTIONS(2330), 2,
      sym__space,
      sym__eol,
  [5617] = 1,
    ACTIONS(2332), 2,
      sym__space,
      sym__eol,
  [5622] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5627] = 1,
    ACTIONS(2334), 2,
      sym__space,
      sym__eol,
  [5632] = 1,
    ACTIONS(2336), 2,
      sym__space,
      sym__eol,
  [5637] = 1,
    ACTIONS(2338), 2,
      sym__space,
      sym__eol,
  [5642] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5647] = 2,
    ACTIONS(2340), 1,
      sym__space,
    ACTIONS(2342), 1,
      sym__eol,
  [5654] = 1,
    ACTIONS(2342), 2,
      sym__space,
      sym__eol,
  [5659] = 1,
    ACTIONS(2344), 2,
      sym__space,
      sym__eol,
  [5664] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5669] = 1,
    ACTIONS(2346), 2,
      sym__space,
      sym__eol,
  [5674] = 1,
    ACTIONS(2094), 2,
      sym__space,
      sym__eol,
  [5679] = 1,
    ACTIONS(2348), 2,
      sym__space,
      sym__eol,
  [5684] = 1,
    ACTIONS(2350), 2,
      sym__space,
      sym__eol,
  [5689] = 1,
    ACTIONS(2352), 2,
      sym__space,
      sym__eol,
  [5694] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5699] = 1,
    ACTIONS(2354), 2,
      sym__space,
      sym__eol,
  [5704] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5709] = 1,
    ACTIONS(2356), 2,
      aux_sym__match_localnetwork_token3,
      anon_sym_STAR,
  [5714] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(744), 1,
      sym_number,
  [5721] = 1,
    ACTIONS(2358), 2,
      sym__space,
      sym__eol,
  [5726] = 1,
    ACTIONS(2360), 2,
      sym__space,
      sym__eol,
  [5731] = 1,
    ACTIONS(2362), 2,
      sym__space,
      sym__eol,
  [5736] = 1,
    ACTIONS(2364), 2,
      sym__space,
      sym__eol,
  [5741] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5746] = 1,
    ACTIONS(2366), 2,
      sym__space,
      sym__eol,
  [5751] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5756] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5761] = 1,
    ACTIONS(2368), 2,
      sym__space,
      sym__eol,
  [5766] = 1,
    ACTIONS(2230), 2,
      sym__space,
      sym__eol,
  [5771] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5776] = 1,
    ACTIONS(2370), 2,
      sym__space,
      sym__eol,
  [5781] = 1,
    ACTIONS(2372), 2,
      sym__space,
      sym__eol,
  [5786] = 2,
    ACTIONS(2374), 1,
      aux_sym_time_token4,
    ACTIONS(2376), 1,
      aux_sym_time_token5,
  [5793] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5798] = 1,
    ACTIONS(2378), 2,
      sym__space,
      sym__eol,
  [5803] = 2,
    ACTIONS(2380), 1,
      sym__space,
    ACTIONS(2382), 1,
      sym__eol,
  [5810] = 1,
    ACTIONS(2384), 2,
      sym__space,
      sym__eol,
  [5815] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(655), 1,
      sym_number,
  [5822] = 1,
    ACTIONS(2386), 2,
      sym__space,
      sym__eol,
  [5827] = 1,
    ACTIONS(2388), 2,
      sym__space,
      sym__eol,
  [5832] = 1,
    ACTIONS(2390), 2,
      sym__space,
      sym__eol,
  [5837] = 2,
    ACTIONS(1106), 1,
      sym__number,
    STATE(657), 1,
      sym_time,
  [5844] = 1,
    ACTIONS(2392), 2,
      sym__space,
      sym__eol,
  [5849] = 1,
    ACTIONS(2394), 2,
      sym__space,
      sym__eol,
  [5854] = 1,
    ACTIONS(2396), 2,
      sym__space,
      sym__eol,
  [5859] = 1,
    ACTIONS(2398), 2,
      sym__space,
      sym__eol,
  [5864] = 1,
    ACTIONS(2400), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [5869] = 1,
    ACTIONS(2402), 2,
      sym__space,
      sym__eol,
  [5874] = 1,
    ACTIONS(2196), 2,
      sym__space,
      sym__eol,
  [5879] = 2,
    ACTIONS(2404), 1,
      sym__var_name,
    STATE(662), 1,
      sym__set_env_value,
  [5886] = 1,
    ACTIONS(2406), 2,
      sym__space,
      sym__eol,
  [5891] = 1,
    ACTIONS(2408), 2,
      sym__space,
      sym__eol,
  [5896] = 1,
    ACTIONS(2410), 2,
      sym__space,
      sym__eol,
  [5901] = 1,
    ACTIONS(2412), 2,
      sym__space,
      sym__eol,
  [5906] = 1,
    ACTIONS(2414), 2,
      sym__space,
      sym__eol,
  [5911] = 1,
    ACTIONS(2416), 2,
      sym__space,
      sym__eol,
  [5916] = 1,
    ACTIONS(2418), 2,
      sym__space,
      sym__eol,
  [5921] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [5926] = 1,
    ACTIONS(2420), 2,
      sym__space,
      sym__eol,
  [5931] = 2,
    ACTIONS(1106), 1,
      sym__number,
    STATE(558), 1,
      sym_time,
  [5938] = 1,
    ACTIONS(2422), 2,
      sym__space,
      sym__eol,
  [5943] = 1,
    ACTIONS(2424), 2,
      sym__space,
      sym__eol,
  [5948] = 1,
    ACTIONS(2426), 2,
      sym__space,
      sym__eol,
  [5953] = 2,
    ACTIONS(2428), 1,
      sym__space,
    ACTIONS(2430), 1,
      sym__eol,
  [5960] = 1,
    ACTIONS(2432), 2,
      sym__space,
      sym__eol,
  [5965] = 1,
    ACTIONS(2434), 2,
      sym__space,
      sym__eol,
  [5970] = 1,
    ACTIONS(2436), 2,
      sym__space,
      sym__eol,
  [5975] = 1,
    ACTIONS(2438), 2,
      sym__space,
      sym__eol,
  [5980] = 1,
    ACTIONS(2440), 2,
      sym__space,
      sym__eol,
  [5985] = 1,
    ACTIONS(2442), 2,
      sym__space,
      sym__eol,
  [5990] = 1,
    ACTIONS(2444), 2,
      sym__space,
      sym__eol,
  [5995] = 1,
    ACTIONS(2446), 2,
      sym__space,
      sym__eol,
  [6000] = 1,
    ACTIONS(2448), 2,
      sym__space,
      sym__eol,
  [6005] = 1,
    ACTIONS(2450), 2,
      sym__space,
      sym__eol,
  [6010] = 1,
    ACTIONS(2452), 2,
      sym__space,
      sym__eol,
  [6015] = 1,
    ACTIONS(2454), 2,
      sym__space,
      sym__eol,
  [6020] = 1,
    ACTIONS(2456), 2,
      sym__space,
      sym__eol,
  [6025] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6030] = 1,
    ACTIONS(2458), 2,
      sym__space,
      sym__eol,
  [6035] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6040] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6045] = 1,
    ACTIONS(2460), 2,
      sym__space,
      sym__eol,
  [6050] = 1,
    ACTIONS(2462), 2,
      sym__space,
      sym__eol,
  [6055] = 1,
    ACTIONS(2464), 2,
      sym__space,
      sym__eol,
  [6060] = 1,
    ACTIONS(2466), 2,
      sym__space,
      sym__eol,
  [6065] = 1,
    ACTIONS(2468), 2,
      sym__space,
      sym__eol,
  [6070] = 1,
    ACTIONS(2470), 2,
      sym__space,
      sym__eol,
  [6075] = 1,
    ACTIONS(1767), 2,
      sym__space,
      sym__eol,
  [6080] = 1,
    ACTIONS(2185), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6085] = 1,
    ACTIONS(2472), 2,
      sym__space,
      sym__eol,
  [6090] = 1,
    ACTIONS(2474), 2,
      sym__space,
      sym__eol,
  [6095] = 1,
    ACTIONS(2476), 2,
      sym__space,
      sym__eol,
  [6100] = 1,
    ACTIONS(2478), 2,
      sym__space,
      sym__eol,
  [6105] = 1,
    ACTIONS(2480), 2,
      sym__space,
      sym__eol,
  [6110] = 1,
    ACTIONS(2482), 2,
      sym__space,
      sym__eol,
  [6115] = 2,
    ACTIONS(1360), 1,
      aux_sym_time_token4,
    ACTIONS(1362), 1,
      aux_sym_time_token5,
  [6122] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6127] = 1,
    ACTIONS(2484), 2,
      sym__space,
      sym__eol,
  [6132] = 1,
    ACTIONS(2486), 2,
      sym__space,
      sym__eol,
  [6137] = 1,
    ACTIONS(2488), 2,
      sym__space,
      sym__eol,
  [6142] = 1,
    ACTIONS(2490), 2,
      sym__space,
      sym__eol,
  [6147] = 1,
    ACTIONS(2492), 2,
      sym__space,
      sym__eol,
  [6152] = 2,
    ACTIONS(2494), 1,
      sym__space,
    ACTIONS(2496), 1,
      sym__eol,
  [6159] = 1,
    ACTIONS(2496), 2,
      sym__space,
      sym__eol,
  [6164] = 1,
    ACTIONS(2498), 2,
      sym__space,
      sym__eol,
  [6169] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6174] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6179] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6184] = 1,
    ACTIONS(2502), 2,
      sym__space,
      sym__eol,
  [6189] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6194] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6199] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6204] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6209] = 1,
    ACTIONS(2500), 2,
      sym__space,
      sym__eol,
  [6214] = 1,
    ACTIONS(2504), 2,
      sym__space,
      sym__eol,
  [6219] = 1,
    ACTIONS(2506), 2,
      sym__space,
      sym__eol,
  [6224] = 1,
    ACTIONS(2506), 2,
      sym__space,
      sym__eol,
  [6229] = 2,
    ACTIONS(1706), 1,
      sym__eol,
    ACTIONS(2508), 1,
      sym__space,
  [6236] = 2,
    ACTIONS(2510), 1,
      sym__space,
    ACTIONS(2512), 1,
      sym__eol,
  [6243] = 1,
    ACTIONS(2514), 2,
      sym__space,
      sym__eol,
  [6248] = 1,
    ACTIONS(2516), 2,
      sym__space,
      sym__eol,
  [6253] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6258] = 1,
    ACTIONS(2518), 2,
      sym__space,
      sym__eol,
  [6263] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6268] = 1,
    ACTIONS(1590), 2,
      sym__space,
      sym__eol,
  [6273] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(493), 1,
      sym_number,
  [6280] = 1,
    ACTIONS(2520), 2,
      sym__space,
      sym__eol,
  [6285] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(507), 1,
      sym_number,
  [6292] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6297] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(518), 1,
      sym_number,
  [6304] = 1,
    ACTIONS(2522), 2,
      sym__space,
      sym__eol,
  [6309] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6314] = 1,
    ACTIONS(2524), 2,
      sym__space,
      sym__eol,
  [6319] = 1,
    ACTIONS(2526), 2,
      sym__space,
      sym__eol,
  [6324] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(526), 1,
      sym_number,
  [6331] = 1,
    ACTIONS(2528), 2,
      sym__space,
      sym__eol,
  [6336] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6341] = 1,
    ACTIONS(2530), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [6346] = 2,
    ACTIONS(2532), 1,
      anon_sym_none,
    ACTIONS(2534), 1,
      aux_sym__escape_char_token2,
  [6353] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(574), 1,
      sym_number,
  [6360] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(575), 1,
      sym_number,
  [6367] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(595), 1,
      sym_number,
  [6374] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6379] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6384] = 1,
    ACTIONS(2536), 2,
      sym__space,
      sym__eol,
  [6389] = 1,
    ACTIONS(2538), 2,
      sym__space,
      sym__eol,
  [6394] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6399] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6404] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6409] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6414] = 1,
    ACTIONS(1944), 2,
      sym__space,
      sym__eol,
  [6419] = 1,
    ACTIONS(2540), 2,
      sym__space,
      sym__eol,
  [6424] = 1,
    ACTIONS(2542), 2,
      sym__space,
      sym__eol,
  [6429] = 1,
    ACTIONS(2544), 2,
      sym__space,
      sym__eol,
  [6434] = 1,
    ACTIONS(2546), 2,
      sym__space,
      sym__eol,
  [6439] = 1,
    ACTIONS(2548), 2,
      sym__space,
      sym__eol,
  [6444] = 1,
    ACTIONS(2550), 2,
      sym__space,
      sym__eol,
  [6449] = 1,
    ACTIONS(2552), 2,
      sym__space,
      sym__eol,
  [6454] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6459] = 1,
    ACTIONS(2554), 2,
      sym__space,
      sym__eol,
  [6464] = 1,
    ACTIONS(2556), 2,
      sym__space,
      sym__eol,
  [6469] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6474] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6479] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6484] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6489] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6494] = 1,
    ACTIONS(2558), 2,
      sym__space,
      sym__eol,
  [6499] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6504] = 1,
    ACTIONS(2560), 2,
      sym__space,
      sym__eol,
  [6509] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6514] = 2,
    ACTIONS(2562), 1,
      sym__space,
    ACTIONS(2564), 1,
      sym__eol,
  [6521] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6526] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6531] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6536] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6541] = 1,
    ACTIONS(2528), 2,
      sym__space,
      sym__eol,
  [6546] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6551] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6556] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6561] = 1,
    ACTIONS(2566), 2,
      sym__space,
      sym__eol,
  [6566] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6571] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6576] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6581] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6586] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6591] = 2,
    ACTIONS(2568), 1,
      anon_sym_BANG,
    ACTIONS(2570), 1,
      aux_sym__match_localnetwork_token2,
  [6598] = 1,
    ACTIONS(2572), 2,
      sym__space,
      sym__eol,
  [6603] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6608] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6613] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6618] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6623] = 1,
    ACTIONS(2574), 2,
      sym__space,
      sym__eol,
  [6628] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6633] = 1,
    ACTIONS(2063), 2,
      sym__space,
      sym__eol,
  [6638] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6643] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6648] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(727), 1,
      sym_number,
  [6655] = 1,
    ACTIONS(2576), 2,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [6660] = 1,
    ACTIONS(2578), 2,
      sym__space,
      sym__eol,
  [6665] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6670] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6675] = 1,
    ACTIONS(2580), 2,
      sym__space,
      sym__eol,
  [6680] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6685] = 2,
    ACTIONS(1445), 1,
      sym__number,
    STATE(660), 1,
      sym_number,
  [6692] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6697] = 1,
    ACTIONS(2566), 2,
      sym__space,
      sym__eol,
  [6702] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6707] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6712] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6717] = 2,
    ACTIONS(2582), 1,
      aux_sym__all_token1,
    STATE(580), 1,
      sym__all,
  [6724] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6729] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6734] = 1,
    ACTIONS(2584), 2,
      sym__space,
      sym__eol,
  [6739] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6744] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6749] = 1,
    ACTIONS(2528), 2,
      sym__space,
      sym__eol,
  [6754] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6759] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6764] = 1,
    ACTIONS(2586), 2,
      sym__space,
      sym__eol,
  [6769] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6774] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6779] = 1,
    ACTIONS(1504), 2,
      sym__space,
      sym__eol,
  [6784] = 1,
    ACTIONS(2588), 2,
      sym__space,
      sym__eol,
  [6789] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6794] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6799] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6804] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6809] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6814] = 1,
    ACTIONS(2294), 2,
      sym__space,
      sym__eol,
  [6819] = 2,
    ACTIONS(2146), 1,
      aux_sym_time_token4,
    ACTIONS(2148), 1,
      aux_sym_time_token5,
  [6826] = 1,
    ACTIONS(2148), 1,
      aux_sym_time_token5,
  [6830] = 1,
    ACTIONS(2590), 1,
      aux_sym__match_localnetwork_token2,
  [6834] = 1,
    ACTIONS(2592), 1,
      aux_sym__match_localnetwork_token3,
  [6838] = 1,
    ACTIONS(2594), 1,
      sym__eol,
  [6842] = 1,
    ACTIONS(2596), 1,
      anon_sym_DQUOTE,
  [6846] = 1,
    ACTIONS(2564), 1,
      sym__eol,
  [6850] = 1,
    ACTIONS(784), 1,
      sym__eol,
  [6854] = 1,
    ACTIONS(2598), 1,
      sym_verbosity,
  [6858] = 1,
    ACTIONS(2600), 1,
      anon_sym_COLON,
  [6862] = 1,
    ACTIONS(2602), 1,
      sym__space,
  [6866] = 1,
    ACTIONS(2604), 1,
      sym_authentication,
  [6870] = 1,
    ACTIONS(2606), 1,
      aux_sym__stream_local_bind_mask_token2,
  [6874] = 1,
    ACTIONS(2608), 1,
      sym_facility,
  [6878] = 1,
    ACTIONS(2512), 1,
      sym__eol,
  [6882] = 1,
    ACTIONS(2610), 1,
      aux_sym__match_localnetwork_token3,
  [6886] = 1,
    ACTIONS(1362), 1,
      aux_sym_time_token5,
  [6890] = 1,
    ACTIONS(2612), 1,
      sym_sig,
  [6894] = 1,
    ACTIONS(2614), 1,
      sym__var_name,
  [6898] = 1,
    ACTIONS(2616), 1,
      aux_sym__match_localnetwork_token3,
  [6902] = 1,
    ACTIONS(2618), 1,
      aux_sym__match_localnetwork_token2,
  [6906] = 1,
    ACTIONS(2620), 1,
      sym_cipher,
  [6910] = 1,
    ACTIONS(2622), 1,
      sym__var_name,
  [6914] = 1,
    ACTIONS(2624), 1,
      sym_key_sig,
  [6918] = 1,
    ACTIONS(2626), 1,
      sym_key_sig,
  [6922] = 1,
    ACTIONS(2628), 1,
      aux_sym__proxy_jump_arg_token1,
  [6926] = 1,
    ACTIONS(2630), 1,
      sym_authentication,
  [6930] = 1,
    ACTIONS(2632), 1,
      sym_kex,
  [6934] = 1,
    ACTIONS(2376), 1,
      aux_sym_time_token5,
  [6938] = 1,
    ACTIONS(2634), 1,
      anon_sym_COLON,
  [6942] = 1,
    ACTIONS(2636), 1,
      anon_sym_COLON,
  [6946] = 1,
    ACTIONS(2638), 1,
      aux_sym_time_token5,
  [6950] = 1,
    ACTIONS(2640), 1,
      sym_mac,
  [6954] = 1,
    ACTIONS(2642), 1,
      sym__space,
  [6958] = 1,
    ACTIONS(2644), 1,
      sym__space,
  [6962] = 1,
    ACTIONS(2646), 1,
      sym_mac,
  [6966] = 1,
    ACTIONS(2648), 1,
      anon_sym_COLON,
  [6970] = 1,
    ACTIONS(2650), 1,
      sym_kex,
  [6974] = 1,
    ACTIONS(2652), 1,
      anon_sym_AT,
  [6978] = 1,
    ACTIONS(2654), 1,
      sym_key_sig,
  [6982] = 1,
    ACTIONS(2656), 1,
      sym__space,
  [6986] = 1,
    ACTIONS(2658), 1,
      sym_key_sig,
  [6990] = 1,
    ACTIONS(2660), 1,
      sym_cipher,
  [6994] = 1,
    ACTIONS(2662), 1,
      anon_sym_EQ,
  [6998] = 1,
    ACTIONS(2664), 1,
      anon_sym_RBRACE,
  [7002] = 1,
    ACTIONS(2666), 1,
      sym_sig,
  [7006] = 1,
    ACTIONS(2668), 1,
      sym__eol,
  [7010] = 1,
    ACTIONS(2670), 1,
      anon_sym_DQUOTE,
  [7014] = 1,
    ACTIONS(870), 1,
      sym__eol,
  [7018] = 1,
    ACTIONS(2672), 1,
      anon_sym_RBRACE,
  [7022] = 1,
    ACTIONS(2674), 1,
      ts_builtin_sym_end,
  [7026] = 1,
    ACTIONS(2676), 1,
      anon_sym_RBRACE,
  [7030] = 1,
    ACTIONS(2678), 1,
      anon_sym_RBRACE,
  [7034] = 1,
    ACTIONS(2680), 1,
      anon_sym_RBRACE,
  [7038] = 1,
    ACTIONS(2682), 1,
      anon_sym_RBRACE,
  [7042] = 1,
    ACTIONS(2684), 1,
      sym__var_name,
  [7046] = 1,
    ACTIONS(2686), 1,
      sym__var_name,
  [7050] = 1,
    ACTIONS(2688), 1,
      sym__var_name,
  [7054] = 1,
    ACTIONS(2690), 1,
      sym__var_name,
  [7058] = 1,
    ACTIONS(2692), 1,
      sym__var_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 64,
  [SMALL_STATE(38)] = 125,
  [SMALL_STATE(39)] = 186,
  [SMALL_STATE(40)] = 244,
  [SMALL_STATE(41)] = 279,
  [SMALL_STATE(42)] = 314,
  [SMALL_STATE(43)] = 343,
  [SMALL_STATE(44)] = 372,
  [SMALL_STATE(45)] = 405,
  [SMALL_STATE(46)] = 430,
  [SMALL_STATE(47)] = 453,
  [SMALL_STATE(48)] = 476,
  [SMALL_STATE(49)] = 501,
  [SMALL_STATE(50)] = 527,
  [SMALL_STATE(51)] = 553,
  [SMALL_STATE(52)] = 575,
  [SMALL_STATE(53)] = 597,
  [SMALL_STATE(54)] = 620,
  [SMALL_STATE(55)] = 641,
  [SMALL_STATE(56)] = 664,
  [SMALL_STATE(57)] = 687,
  [SMALL_STATE(58)] = 710,
  [SMALL_STATE(59)] = 733,
  [SMALL_STATE(60)] = 752,
  [SMALL_STATE(61)] = 775,
  [SMALL_STATE(62)] = 798,
  [SMALL_STATE(63)] = 819,
  [SMALL_STATE(64)] = 838,
  [SMALL_STATE(65)] = 861,
  [SMALL_STATE(66)] = 884,
  [SMALL_STATE(67)] = 907,
  [SMALL_STATE(68)] = 928,
  [SMALL_STATE(69)] = 951,
  [SMALL_STATE(70)] = 972,
  [SMALL_STATE(71)] = 990,
  [SMALL_STATE(72)] = 1006,
  [SMALL_STATE(73)] = 1018,
  [SMALL_STATE(74)] = 1038,
  [SMALL_STATE(75)] = 1058,
  [SMALL_STATE(76)] = 1078,
  [SMALL_STATE(77)] = 1098,
  [SMALL_STATE(78)] = 1118,
  [SMALL_STATE(79)] = 1138,
  [SMALL_STATE(80)] = 1158,
  [SMALL_STATE(81)] = 1178,
  [SMALL_STATE(82)] = 1198,
  [SMALL_STATE(83)] = 1218,
  [SMALL_STATE(84)] = 1238,
  [SMALL_STATE(85)] = 1250,
  [SMALL_STATE(86)] = 1270,
  [SMALL_STATE(87)] = 1290,
  [SMALL_STATE(88)] = 1306,
  [SMALL_STATE(89)] = 1322,
  [SMALL_STATE(90)] = 1338,
  [SMALL_STATE(91)] = 1358,
  [SMALL_STATE(92)] = 1374,
  [SMALL_STATE(93)] = 1391,
  [SMALL_STATE(94)] = 1406,
  [SMALL_STATE(95)] = 1421,
  [SMALL_STATE(96)] = 1436,
  [SMALL_STATE(97)] = 1451,
  [SMALL_STATE(98)] = 1468,
  [SMALL_STATE(99)] = 1487,
  [SMALL_STATE(100)] = 1498,
  [SMALL_STATE(101)] = 1515,
  [SMALL_STATE(102)] = 1532,
  [SMALL_STATE(103)] = 1547,
  [SMALL_STATE(104)] = 1564,
  [SMALL_STATE(105)] = 1577,
  [SMALL_STATE(106)] = 1594,
  [SMALL_STATE(107)] = 1605,
  [SMALL_STATE(108)] = 1620,
  [SMALL_STATE(109)] = 1633,
  [SMALL_STATE(110)] = 1648,
  [SMALL_STATE(111)] = 1665,
  [SMALL_STATE(112)] = 1680,
  [SMALL_STATE(113)] = 1697,
  [SMALL_STATE(114)] = 1714,
  [SMALL_STATE(115)] = 1729,
  [SMALL_STATE(116)] = 1746,
  [SMALL_STATE(117)] = 1763,
  [SMALL_STATE(118)] = 1774,
  [SMALL_STATE(119)] = 1791,
  [SMALL_STATE(120)] = 1808,
  [SMALL_STATE(121)] = 1819,
  [SMALL_STATE(122)] = 1834,
  [SMALL_STATE(123)] = 1853,
  [SMALL_STATE(124)] = 1868,
  [SMALL_STATE(125)] = 1885,
  [SMALL_STATE(126)] = 1898,
  [SMALL_STATE(127)] = 1911,
  [SMALL_STATE(128)] = 1928,
  [SMALL_STATE(129)] = 1945,
  [SMALL_STATE(130)] = 1956,
  [SMALL_STATE(131)] = 1975,
  [SMALL_STATE(132)] = 1992,
  [SMALL_STATE(133)] = 2007,
  [SMALL_STATE(134)] = 2026,
  [SMALL_STATE(135)] = 2043,
  [SMALL_STATE(136)] = 2059,
  [SMALL_STATE(137)] = 2073,
  [SMALL_STATE(138)] = 2083,
  [SMALL_STATE(139)] = 2099,
  [SMALL_STATE(140)] = 2115,
  [SMALL_STATE(141)] = 2129,
  [SMALL_STATE(142)] = 2137,
  [SMALL_STATE(143)] = 2149,
  [SMALL_STATE(144)] = 2159,
  [SMALL_STATE(145)] = 2171,
  [SMALL_STATE(146)] = 2187,
  [SMALL_STATE(147)] = 2199,
  [SMALL_STATE(148)] = 2207,
  [SMALL_STATE(149)] = 2223,
  [SMALL_STATE(150)] = 2237,
  [SMALL_STATE(151)] = 2251,
  [SMALL_STATE(152)] = 2261,
  [SMALL_STATE(153)] = 2271,
  [SMALL_STATE(154)] = 2285,
  [SMALL_STATE(155)] = 2299,
  [SMALL_STATE(156)] = 2315,
  [SMALL_STATE(157)] = 2329,
  [SMALL_STATE(158)] = 2339,
  [SMALL_STATE(159)] = 2351,
  [SMALL_STATE(160)] = 2361,
  [SMALL_STATE(161)] = 2373,
  [SMALL_STATE(162)] = 2387,
  [SMALL_STATE(163)] = 2397,
  [SMALL_STATE(164)] = 2413,
  [SMALL_STATE(165)] = 2423,
  [SMALL_STATE(166)] = 2433,
  [SMALL_STATE(167)] = 2447,
  [SMALL_STATE(168)] = 2461,
  [SMALL_STATE(169)] = 2471,
  [SMALL_STATE(170)] = 2487,
  [SMALL_STATE(171)] = 2497,
  [SMALL_STATE(172)] = 2509,
  [SMALL_STATE(173)] = 2520,
  [SMALL_STATE(174)] = 2533,
  [SMALL_STATE(175)] = 2544,
  [SMALL_STATE(176)] = 2553,
  [SMALL_STATE(177)] = 2564,
  [SMALL_STATE(178)] = 2575,
  [SMALL_STATE(179)] = 2584,
  [SMALL_STATE(180)] = 2595,
  [SMALL_STATE(181)] = 2606,
  [SMALL_STATE(182)] = 2617,
  [SMALL_STATE(183)] = 2628,
  [SMALL_STATE(184)] = 2639,
  [SMALL_STATE(185)] = 2650,
  [SMALL_STATE(186)] = 2661,
  [SMALL_STATE(187)] = 2672,
  [SMALL_STATE(188)] = 2683,
  [SMALL_STATE(189)] = 2696,
  [SMALL_STATE(190)] = 2707,
  [SMALL_STATE(191)] = 2716,
  [SMALL_STATE(192)] = 2727,
  [SMALL_STATE(193)] = 2738,
  [SMALL_STATE(194)] = 2749,
  [SMALL_STATE(195)] = 2760,
  [SMALL_STATE(196)] = 2771,
  [SMALL_STATE(197)] = 2778,
  [SMALL_STATE(198)] = 2789,
  [SMALL_STATE(199)] = 2800,
  [SMALL_STATE(200)] = 2811,
  [SMALL_STATE(201)] = 2822,
  [SMALL_STATE(202)] = 2833,
  [SMALL_STATE(203)] = 2844,
  [SMALL_STATE(204)] = 2855,
  [SMALL_STATE(205)] = 2864,
  [SMALL_STATE(206)] = 2877,
  [SMALL_STATE(207)] = 2888,
  [SMALL_STATE(208)] = 2899,
  [SMALL_STATE(209)] = 2908,
  [SMALL_STATE(210)] = 2919,
  [SMALL_STATE(211)] = 2930,
  [SMALL_STATE(212)] = 2939,
  [SMALL_STATE(213)] = 2950,
  [SMALL_STATE(214)] = 2959,
  [SMALL_STATE(215)] = 2970,
  [SMALL_STATE(216)] = 2981,
  [SMALL_STATE(217)] = 2988,
  [SMALL_STATE(218)] = 2999,
  [SMALL_STATE(219)] = 3010,
  [SMALL_STATE(220)] = 3021,
  [SMALL_STATE(221)] = 3032,
  [SMALL_STATE(222)] = 3043,
  [SMALL_STATE(223)] = 3052,
  [SMALL_STATE(224)] = 3061,
  [SMALL_STATE(225)] = 3072,
  [SMALL_STATE(226)] = 3083,
  [SMALL_STATE(227)] = 3094,
  [SMALL_STATE(228)] = 3103,
  [SMALL_STATE(229)] = 3116,
  [SMALL_STATE(230)] = 3127,
  [SMALL_STATE(231)] = 3138,
  [SMALL_STATE(232)] = 3147,
  [SMALL_STATE(233)] = 3158,
  [SMALL_STATE(234)] = 3169,
  [SMALL_STATE(235)] = 3180,
  [SMALL_STATE(236)] = 3191,
  [SMALL_STATE(237)] = 3202,
  [SMALL_STATE(238)] = 3211,
  [SMALL_STATE(239)] = 3222,
  [SMALL_STATE(240)] = 3233,
  [SMALL_STATE(241)] = 3244,
  [SMALL_STATE(242)] = 3253,
  [SMALL_STATE(243)] = 3264,
  [SMALL_STATE(244)] = 3275,
  [SMALL_STATE(245)] = 3286,
  [SMALL_STATE(246)] = 3297,
  [SMALL_STATE(247)] = 3308,
  [SMALL_STATE(248)] = 3319,
  [SMALL_STATE(249)] = 3328,
  [SMALL_STATE(250)] = 3337,
  [SMALL_STATE(251)] = 3348,
  [SMALL_STATE(252)] = 3357,
  [SMALL_STATE(253)] = 3366,
  [SMALL_STATE(254)] = 3377,
  [SMALL_STATE(255)] = 3386,
  [SMALL_STATE(256)] = 3399,
  [SMALL_STATE(257)] = 3412,
  [SMALL_STATE(258)] = 3423,
  [SMALL_STATE(259)] = 3434,
  [SMALL_STATE(260)] = 3444,
  [SMALL_STATE(261)] = 3454,
  [SMALL_STATE(262)] = 3462,
  [SMALL_STATE(263)] = 3472,
  [SMALL_STATE(264)] = 3480,
  [SMALL_STATE(265)] = 3490,
  [SMALL_STATE(266)] = 3500,
  [SMALL_STATE(267)] = 3510,
  [SMALL_STATE(268)] = 3518,
  [SMALL_STATE(269)] = 3528,
  [SMALL_STATE(270)] = 3538,
  [SMALL_STATE(271)] = 3548,
  [SMALL_STATE(272)] = 3556,
  [SMALL_STATE(273)] = 3566,
  [SMALL_STATE(274)] = 3574,
  [SMALL_STATE(275)] = 3582,
  [SMALL_STATE(276)] = 3590,
  [SMALL_STATE(277)] = 3598,
  [SMALL_STATE(278)] = 3608,
  [SMALL_STATE(279)] = 3616,
  [SMALL_STATE(280)] = 3626,
  [SMALL_STATE(281)] = 3636,
  [SMALL_STATE(282)] = 3646,
  [SMALL_STATE(283)] = 3654,
  [SMALL_STATE(284)] = 3662,
  [SMALL_STATE(285)] = 3672,
  [SMALL_STATE(286)] = 3682,
  [SMALL_STATE(287)] = 3690,
  [SMALL_STATE(288)] = 3696,
  [SMALL_STATE(289)] = 3706,
  [SMALL_STATE(290)] = 3716,
  [SMALL_STATE(291)] = 3726,
  [SMALL_STATE(292)] = 3732,
  [SMALL_STATE(293)] = 3742,
  [SMALL_STATE(294)] = 3750,
  [SMALL_STATE(295)] = 3760,
  [SMALL_STATE(296)] = 3770,
  [SMALL_STATE(297)] = 3780,
  [SMALL_STATE(298)] = 3790,
  [SMALL_STATE(299)] = 3800,
  [SMALL_STATE(300)] = 3810,
  [SMALL_STATE(301)] = 3820,
  [SMALL_STATE(302)] = 3830,
  [SMALL_STATE(303)] = 3840,
  [SMALL_STATE(304)] = 3850,
  [SMALL_STATE(305)] = 3858,
  [SMALL_STATE(306)] = 3868,
  [SMALL_STATE(307)] = 3876,
  [SMALL_STATE(308)] = 3882,
  [SMALL_STATE(309)] = 3892,
  [SMALL_STATE(310)] = 3902,
  [SMALL_STATE(311)] = 3912,
  [SMALL_STATE(312)] = 3922,
  [SMALL_STATE(313)] = 3928,
  [SMALL_STATE(314)] = 3936,
  [SMALL_STATE(315)] = 3946,
  [SMALL_STATE(316)] = 3954,
  [SMALL_STATE(317)] = 3960,
  [SMALL_STATE(318)] = 3968,
  [SMALL_STATE(319)] = 3978,
  [SMALL_STATE(320)] = 3988,
  [SMALL_STATE(321)] = 3998,
  [SMALL_STATE(322)] = 4008,
  [SMALL_STATE(323)] = 4016,
  [SMALL_STATE(324)] = 4026,
  [SMALL_STATE(325)] = 4032,
  [SMALL_STATE(326)] = 4042,
  [SMALL_STATE(327)] = 4052,
  [SMALL_STATE(328)] = 4062,
  [SMALL_STATE(329)] = 4072,
  [SMALL_STATE(330)] = 4082,
  [SMALL_STATE(331)] = 4092,
  [SMALL_STATE(332)] = 4102,
  [SMALL_STATE(333)] = 4110,
  [SMALL_STATE(334)] = 4120,
  [SMALL_STATE(335)] = 4130,
  [SMALL_STATE(336)] = 4138,
  [SMALL_STATE(337)] = 4146,
  [SMALL_STATE(338)] = 4156,
  [SMALL_STATE(339)] = 4166,
  [SMALL_STATE(340)] = 4174,
  [SMALL_STATE(341)] = 4184,
  [SMALL_STATE(342)] = 4194,
  [SMALL_STATE(343)] = 4202,
  [SMALL_STATE(344)] = 4212,
  [SMALL_STATE(345)] = 4222,
  [SMALL_STATE(346)] = 4232,
  [SMALL_STATE(347)] = 4242,
  [SMALL_STATE(348)] = 4252,
  [SMALL_STATE(349)] = 4262,
  [SMALL_STATE(350)] = 4272,
  [SMALL_STATE(351)] = 4280,
  [SMALL_STATE(352)] = 4290,
  [SMALL_STATE(353)] = 4298,
  [SMALL_STATE(354)] = 4308,
  [SMALL_STATE(355)] = 4318,
  [SMALL_STATE(356)] = 4328,
  [SMALL_STATE(357)] = 4338,
  [SMALL_STATE(358)] = 4348,
  [SMALL_STATE(359)] = 4358,
  [SMALL_STATE(360)] = 4368,
  [SMALL_STATE(361)] = 4378,
  [SMALL_STATE(362)] = 4388,
  [SMALL_STATE(363)] = 4398,
  [SMALL_STATE(364)] = 4406,
  [SMALL_STATE(365)] = 4416,
  [SMALL_STATE(366)] = 4426,
  [SMALL_STATE(367)] = 4436,
  [SMALL_STATE(368)] = 4446,
  [SMALL_STATE(369)] = 4456,
  [SMALL_STATE(370)] = 4466,
  [SMALL_STATE(371)] = 4472,
  [SMALL_STATE(372)] = 4482,
  [SMALL_STATE(373)] = 4492,
  [SMALL_STATE(374)] = 4502,
  [SMALL_STATE(375)] = 4512,
  [SMALL_STATE(376)] = 4518,
  [SMALL_STATE(377)] = 4526,
  [SMALL_STATE(378)] = 4536,
  [SMALL_STATE(379)] = 4546,
  [SMALL_STATE(380)] = 4556,
  [SMALL_STATE(381)] = 4566,
  [SMALL_STATE(382)] = 4576,
  [SMALL_STATE(383)] = 4586,
  [SMALL_STATE(384)] = 4596,
  [SMALL_STATE(385)] = 4606,
  [SMALL_STATE(386)] = 4616,
  [SMALL_STATE(387)] = 4626,
  [SMALL_STATE(388)] = 4636,
  [SMALL_STATE(389)] = 4646,
  [SMALL_STATE(390)] = 4656,
  [SMALL_STATE(391)] = 4666,
  [SMALL_STATE(392)] = 4676,
  [SMALL_STATE(393)] = 4686,
  [SMALL_STATE(394)] = 4696,
  [SMALL_STATE(395)] = 4706,
  [SMALL_STATE(396)] = 4716,
  [SMALL_STATE(397)] = 4726,
  [SMALL_STATE(398)] = 4736,
  [SMALL_STATE(399)] = 4744,
  [SMALL_STATE(400)] = 4754,
  [SMALL_STATE(401)] = 4764,
  [SMALL_STATE(402)] = 4774,
  [SMALL_STATE(403)] = 4784,
  [SMALL_STATE(404)] = 4794,
  [SMALL_STATE(405)] = 4804,
  [SMALL_STATE(406)] = 4814,
  [SMALL_STATE(407)] = 4822,
  [SMALL_STATE(408)] = 4832,
  [SMALL_STATE(409)] = 4840,
  [SMALL_STATE(410)] = 4848,
  [SMALL_STATE(411)] = 4858,
  [SMALL_STATE(412)] = 4868,
  [SMALL_STATE(413)] = 4878,
  [SMALL_STATE(414)] = 4888,
  [SMALL_STATE(415)] = 4898,
  [SMALL_STATE(416)] = 4908,
  [SMALL_STATE(417)] = 4916,
  [SMALL_STATE(418)] = 4926,
  [SMALL_STATE(419)] = 4936,
  [SMALL_STATE(420)] = 4946,
  [SMALL_STATE(421)] = 4956,
  [SMALL_STATE(422)] = 4966,
  [SMALL_STATE(423)] = 4974,
  [SMALL_STATE(424)] = 4982,
  [SMALL_STATE(425)] = 4992,
  [SMALL_STATE(426)] = 5002,
  [SMALL_STATE(427)] = 5012,
  [SMALL_STATE(428)] = 5022,
  [SMALL_STATE(429)] = 5028,
  [SMALL_STATE(430)] = 5038,
  [SMALL_STATE(431)] = 5048,
  [SMALL_STATE(432)] = 5058,
  [SMALL_STATE(433)] = 5068,
  [SMALL_STATE(434)] = 5078,
  [SMALL_STATE(435)] = 5088,
  [SMALL_STATE(436)] = 5094,
  [SMALL_STATE(437)] = 5104,
  [SMALL_STATE(438)] = 5114,
  [SMALL_STATE(439)] = 5124,
  [SMALL_STATE(440)] = 5134,
  [SMALL_STATE(441)] = 5144,
  [SMALL_STATE(442)] = 5154,
  [SMALL_STATE(443)] = 5164,
  [SMALL_STATE(444)] = 5174,
  [SMALL_STATE(445)] = 5184,
  [SMALL_STATE(446)] = 5194,
  [SMALL_STATE(447)] = 5200,
  [SMALL_STATE(448)] = 5208,
  [SMALL_STATE(449)] = 5218,
  [SMALL_STATE(450)] = 5226,
  [SMALL_STATE(451)] = 5236,
  [SMALL_STATE(452)] = 5246,
  [SMALL_STATE(453)] = 5256,
  [SMALL_STATE(454)] = 5264,
  [SMALL_STATE(455)] = 5272,
  [SMALL_STATE(456)] = 5282,
  [SMALL_STATE(457)] = 5290,
  [SMALL_STATE(458)] = 5300,
  [SMALL_STATE(459)] = 5308,
  [SMALL_STATE(460)] = 5318,
  [SMALL_STATE(461)] = 5328,
  [SMALL_STATE(462)] = 5338,
  [SMALL_STATE(463)] = 5348,
  [SMALL_STATE(464)] = 5358,
  [SMALL_STATE(465)] = 5368,
  [SMALL_STATE(466)] = 5376,
  [SMALL_STATE(467)] = 5384,
  [SMALL_STATE(468)] = 5394,
  [SMALL_STATE(469)] = 5404,
  [SMALL_STATE(470)] = 5414,
  [SMALL_STATE(471)] = 5424,
  [SMALL_STATE(472)] = 5434,
  [SMALL_STATE(473)] = 5444,
  [SMALL_STATE(474)] = 5454,
  [SMALL_STATE(475)] = 5464,
  [SMALL_STATE(476)] = 5471,
  [SMALL_STATE(477)] = 5476,
  [SMALL_STATE(478)] = 5483,
  [SMALL_STATE(479)] = 5488,
  [SMALL_STATE(480)] = 5495,
  [SMALL_STATE(481)] = 5500,
  [SMALL_STATE(482)] = 5507,
  [SMALL_STATE(483)] = 5512,
  [SMALL_STATE(484)] = 5517,
  [SMALL_STATE(485)] = 5522,
  [SMALL_STATE(486)] = 5527,
  [SMALL_STATE(487)] = 5532,
  [SMALL_STATE(488)] = 5537,
  [SMALL_STATE(489)] = 5542,
  [SMALL_STATE(490)] = 5547,
  [SMALL_STATE(491)] = 5552,
  [SMALL_STATE(492)] = 5557,
  [SMALL_STATE(493)] = 5562,
  [SMALL_STATE(494)] = 5567,
  [SMALL_STATE(495)] = 5572,
  [SMALL_STATE(496)] = 5577,
  [SMALL_STATE(497)] = 5582,
  [SMALL_STATE(498)] = 5587,
  [SMALL_STATE(499)] = 5592,
  [SMALL_STATE(500)] = 5597,
  [SMALL_STATE(501)] = 5602,
  [SMALL_STATE(502)] = 5607,
  [SMALL_STATE(503)] = 5612,
  [SMALL_STATE(504)] = 5617,
  [SMALL_STATE(505)] = 5622,
  [SMALL_STATE(506)] = 5627,
  [SMALL_STATE(507)] = 5632,
  [SMALL_STATE(508)] = 5637,
  [SMALL_STATE(509)] = 5642,
  [SMALL_STATE(510)] = 5647,
  [SMALL_STATE(511)] = 5654,
  [SMALL_STATE(512)] = 5659,
  [SMALL_STATE(513)] = 5664,
  [SMALL_STATE(514)] = 5669,
  [SMALL_STATE(515)] = 5674,
  [SMALL_STATE(516)] = 5679,
  [SMALL_STATE(517)] = 5684,
  [SMALL_STATE(518)] = 5689,
  [SMALL_STATE(519)] = 5694,
  [SMALL_STATE(520)] = 5699,
  [SMALL_STATE(521)] = 5704,
  [SMALL_STATE(522)] = 5709,
  [SMALL_STATE(523)] = 5714,
  [SMALL_STATE(524)] = 5721,
  [SMALL_STATE(525)] = 5726,
  [SMALL_STATE(526)] = 5731,
  [SMALL_STATE(527)] = 5736,
  [SMALL_STATE(528)] = 5741,
  [SMALL_STATE(529)] = 5746,
  [SMALL_STATE(530)] = 5751,
  [SMALL_STATE(531)] = 5756,
  [SMALL_STATE(532)] = 5761,
  [SMALL_STATE(533)] = 5766,
  [SMALL_STATE(534)] = 5771,
  [SMALL_STATE(535)] = 5776,
  [SMALL_STATE(536)] = 5781,
  [SMALL_STATE(537)] = 5786,
  [SMALL_STATE(538)] = 5793,
  [SMALL_STATE(539)] = 5798,
  [SMALL_STATE(540)] = 5803,
  [SMALL_STATE(541)] = 5810,
  [SMALL_STATE(542)] = 5815,
  [SMALL_STATE(543)] = 5822,
  [SMALL_STATE(544)] = 5827,
  [SMALL_STATE(545)] = 5832,
  [SMALL_STATE(546)] = 5837,
  [SMALL_STATE(547)] = 5844,
  [SMALL_STATE(548)] = 5849,
  [SMALL_STATE(549)] = 5854,
  [SMALL_STATE(550)] = 5859,
  [SMALL_STATE(551)] = 5864,
  [SMALL_STATE(552)] = 5869,
  [SMALL_STATE(553)] = 5874,
  [SMALL_STATE(554)] = 5879,
  [SMALL_STATE(555)] = 5886,
  [SMALL_STATE(556)] = 5891,
  [SMALL_STATE(557)] = 5896,
  [SMALL_STATE(558)] = 5901,
  [SMALL_STATE(559)] = 5906,
  [SMALL_STATE(560)] = 5911,
  [SMALL_STATE(561)] = 5916,
  [SMALL_STATE(562)] = 5921,
  [SMALL_STATE(563)] = 5926,
  [SMALL_STATE(564)] = 5931,
  [SMALL_STATE(565)] = 5938,
  [SMALL_STATE(566)] = 5943,
  [SMALL_STATE(567)] = 5948,
  [SMALL_STATE(568)] = 5953,
  [SMALL_STATE(569)] = 5960,
  [SMALL_STATE(570)] = 5965,
  [SMALL_STATE(571)] = 5970,
  [SMALL_STATE(572)] = 5975,
  [SMALL_STATE(573)] = 5980,
  [SMALL_STATE(574)] = 5985,
  [SMALL_STATE(575)] = 5990,
  [SMALL_STATE(576)] = 5995,
  [SMALL_STATE(577)] = 6000,
  [SMALL_STATE(578)] = 6005,
  [SMALL_STATE(579)] = 6010,
  [SMALL_STATE(580)] = 6015,
  [SMALL_STATE(581)] = 6020,
  [SMALL_STATE(582)] = 6025,
  [SMALL_STATE(583)] = 6030,
  [SMALL_STATE(584)] = 6035,
  [SMALL_STATE(585)] = 6040,
  [SMALL_STATE(586)] = 6045,
  [SMALL_STATE(587)] = 6050,
  [SMALL_STATE(588)] = 6055,
  [SMALL_STATE(589)] = 6060,
  [SMALL_STATE(590)] = 6065,
  [SMALL_STATE(591)] = 6070,
  [SMALL_STATE(592)] = 6075,
  [SMALL_STATE(593)] = 6080,
  [SMALL_STATE(594)] = 6085,
  [SMALL_STATE(595)] = 6090,
  [SMALL_STATE(596)] = 6095,
  [SMALL_STATE(597)] = 6100,
  [SMALL_STATE(598)] = 6105,
  [SMALL_STATE(599)] = 6110,
  [SMALL_STATE(600)] = 6115,
  [SMALL_STATE(601)] = 6122,
  [SMALL_STATE(602)] = 6127,
  [SMALL_STATE(603)] = 6132,
  [SMALL_STATE(604)] = 6137,
  [SMALL_STATE(605)] = 6142,
  [SMALL_STATE(606)] = 6147,
  [SMALL_STATE(607)] = 6152,
  [SMALL_STATE(608)] = 6159,
  [SMALL_STATE(609)] = 6164,
  [SMALL_STATE(610)] = 6169,
  [SMALL_STATE(611)] = 6174,
  [SMALL_STATE(612)] = 6179,
  [SMALL_STATE(613)] = 6184,
  [SMALL_STATE(614)] = 6189,
  [SMALL_STATE(615)] = 6194,
  [SMALL_STATE(616)] = 6199,
  [SMALL_STATE(617)] = 6204,
  [SMALL_STATE(618)] = 6209,
  [SMALL_STATE(619)] = 6214,
  [SMALL_STATE(620)] = 6219,
  [SMALL_STATE(621)] = 6224,
  [SMALL_STATE(622)] = 6229,
  [SMALL_STATE(623)] = 6236,
  [SMALL_STATE(624)] = 6243,
  [SMALL_STATE(625)] = 6248,
  [SMALL_STATE(626)] = 6253,
  [SMALL_STATE(627)] = 6258,
  [SMALL_STATE(628)] = 6263,
  [SMALL_STATE(629)] = 6268,
  [SMALL_STATE(630)] = 6273,
  [SMALL_STATE(631)] = 6280,
  [SMALL_STATE(632)] = 6285,
  [SMALL_STATE(633)] = 6292,
  [SMALL_STATE(634)] = 6297,
  [SMALL_STATE(635)] = 6304,
  [SMALL_STATE(636)] = 6309,
  [SMALL_STATE(637)] = 6314,
  [SMALL_STATE(638)] = 6319,
  [SMALL_STATE(639)] = 6324,
  [SMALL_STATE(640)] = 6331,
  [SMALL_STATE(641)] = 6336,
  [SMALL_STATE(642)] = 6341,
  [SMALL_STATE(643)] = 6346,
  [SMALL_STATE(644)] = 6353,
  [SMALL_STATE(645)] = 6360,
  [SMALL_STATE(646)] = 6367,
  [SMALL_STATE(647)] = 6374,
  [SMALL_STATE(648)] = 6379,
  [SMALL_STATE(649)] = 6384,
  [SMALL_STATE(650)] = 6389,
  [SMALL_STATE(651)] = 6394,
  [SMALL_STATE(652)] = 6399,
  [SMALL_STATE(653)] = 6404,
  [SMALL_STATE(654)] = 6409,
  [SMALL_STATE(655)] = 6414,
  [SMALL_STATE(656)] = 6419,
  [SMALL_STATE(657)] = 6424,
  [SMALL_STATE(658)] = 6429,
  [SMALL_STATE(659)] = 6434,
  [SMALL_STATE(660)] = 6439,
  [SMALL_STATE(661)] = 6444,
  [SMALL_STATE(662)] = 6449,
  [SMALL_STATE(663)] = 6454,
  [SMALL_STATE(664)] = 6459,
  [SMALL_STATE(665)] = 6464,
  [SMALL_STATE(666)] = 6469,
  [SMALL_STATE(667)] = 6474,
  [SMALL_STATE(668)] = 6479,
  [SMALL_STATE(669)] = 6484,
  [SMALL_STATE(670)] = 6489,
  [SMALL_STATE(671)] = 6494,
  [SMALL_STATE(672)] = 6499,
  [SMALL_STATE(673)] = 6504,
  [SMALL_STATE(674)] = 6509,
  [SMALL_STATE(675)] = 6514,
  [SMALL_STATE(676)] = 6521,
  [SMALL_STATE(677)] = 6526,
  [SMALL_STATE(678)] = 6531,
  [SMALL_STATE(679)] = 6536,
  [SMALL_STATE(680)] = 6541,
  [SMALL_STATE(681)] = 6546,
  [SMALL_STATE(682)] = 6551,
  [SMALL_STATE(683)] = 6556,
  [SMALL_STATE(684)] = 6561,
  [SMALL_STATE(685)] = 6566,
  [SMALL_STATE(686)] = 6571,
  [SMALL_STATE(687)] = 6576,
  [SMALL_STATE(688)] = 6581,
  [SMALL_STATE(689)] = 6586,
  [SMALL_STATE(690)] = 6591,
  [SMALL_STATE(691)] = 6598,
  [SMALL_STATE(692)] = 6603,
  [SMALL_STATE(693)] = 6608,
  [SMALL_STATE(694)] = 6613,
  [SMALL_STATE(695)] = 6618,
  [SMALL_STATE(696)] = 6623,
  [SMALL_STATE(697)] = 6628,
  [SMALL_STATE(698)] = 6633,
  [SMALL_STATE(699)] = 6638,
  [SMALL_STATE(700)] = 6643,
  [SMALL_STATE(701)] = 6648,
  [SMALL_STATE(702)] = 6655,
  [SMALL_STATE(703)] = 6660,
  [SMALL_STATE(704)] = 6665,
  [SMALL_STATE(705)] = 6670,
  [SMALL_STATE(706)] = 6675,
  [SMALL_STATE(707)] = 6680,
  [SMALL_STATE(708)] = 6685,
  [SMALL_STATE(709)] = 6692,
  [SMALL_STATE(710)] = 6697,
  [SMALL_STATE(711)] = 6702,
  [SMALL_STATE(712)] = 6707,
  [SMALL_STATE(713)] = 6712,
  [SMALL_STATE(714)] = 6717,
  [SMALL_STATE(715)] = 6724,
  [SMALL_STATE(716)] = 6729,
  [SMALL_STATE(717)] = 6734,
  [SMALL_STATE(718)] = 6739,
  [SMALL_STATE(719)] = 6744,
  [SMALL_STATE(720)] = 6749,
  [SMALL_STATE(721)] = 6754,
  [SMALL_STATE(722)] = 6759,
  [SMALL_STATE(723)] = 6764,
  [SMALL_STATE(724)] = 6769,
  [SMALL_STATE(725)] = 6774,
  [SMALL_STATE(726)] = 6779,
  [SMALL_STATE(727)] = 6784,
  [SMALL_STATE(728)] = 6789,
  [SMALL_STATE(729)] = 6794,
  [SMALL_STATE(730)] = 6799,
  [SMALL_STATE(731)] = 6804,
  [SMALL_STATE(732)] = 6809,
  [SMALL_STATE(733)] = 6814,
  [SMALL_STATE(734)] = 6819,
  [SMALL_STATE(735)] = 6826,
  [SMALL_STATE(736)] = 6830,
  [SMALL_STATE(737)] = 6834,
  [SMALL_STATE(738)] = 6838,
  [SMALL_STATE(739)] = 6842,
  [SMALL_STATE(740)] = 6846,
  [SMALL_STATE(741)] = 6850,
  [SMALL_STATE(742)] = 6854,
  [SMALL_STATE(743)] = 6858,
  [SMALL_STATE(744)] = 6862,
  [SMALL_STATE(745)] = 6866,
  [SMALL_STATE(746)] = 6870,
  [SMALL_STATE(747)] = 6874,
  [SMALL_STATE(748)] = 6878,
  [SMALL_STATE(749)] = 6882,
  [SMALL_STATE(750)] = 6886,
  [SMALL_STATE(751)] = 6890,
  [SMALL_STATE(752)] = 6894,
  [SMALL_STATE(753)] = 6898,
  [SMALL_STATE(754)] = 6902,
  [SMALL_STATE(755)] = 6906,
  [SMALL_STATE(756)] = 6910,
  [SMALL_STATE(757)] = 6914,
  [SMALL_STATE(758)] = 6918,
  [SMALL_STATE(759)] = 6922,
  [SMALL_STATE(760)] = 6926,
  [SMALL_STATE(761)] = 6930,
  [SMALL_STATE(762)] = 6934,
  [SMALL_STATE(763)] = 6938,
  [SMALL_STATE(764)] = 6942,
  [SMALL_STATE(765)] = 6946,
  [SMALL_STATE(766)] = 6950,
  [SMALL_STATE(767)] = 6954,
  [SMALL_STATE(768)] = 6958,
  [SMALL_STATE(769)] = 6962,
  [SMALL_STATE(770)] = 6966,
  [SMALL_STATE(771)] = 6970,
  [SMALL_STATE(772)] = 6974,
  [SMALL_STATE(773)] = 6978,
  [SMALL_STATE(774)] = 6982,
  [SMALL_STATE(775)] = 6986,
  [SMALL_STATE(776)] = 6990,
  [SMALL_STATE(777)] = 6994,
  [SMALL_STATE(778)] = 6998,
  [SMALL_STATE(779)] = 7002,
  [SMALL_STATE(780)] = 7006,
  [SMALL_STATE(781)] = 7010,
  [SMALL_STATE(782)] = 7014,
  [SMALL_STATE(783)] = 7018,
  [SMALL_STATE(784)] = 7022,
  [SMALL_STATE(785)] = 7026,
  [SMALL_STATE(786)] = 7030,
  [SMALL_STATE(787)] = 7034,
  [SMALL_STATE(788)] = 7038,
  [SMALL_STATE(789)] = 7042,
  [SMALL_STATE(790)] = 7046,
  [SMALL_STATE(791)] = 7050,
  [SMALL_STATE(792)] = 7054,
  [SMALL_STATE(793)] = 7058,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(463),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(459),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(443),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(437),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(436),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(429),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(426),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(421),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(419),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(418),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(414),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(413),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(404),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(401),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(400),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(397),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(395),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(394),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(392),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(390),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(389),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(388),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(385),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(384),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(405),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(269),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(309),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(310),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(327),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(328),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(331),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(344),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(345),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(348),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(355),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(356),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(371),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(373),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(403),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(425),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(415),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(417),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(438),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(439),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(450),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(474),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(473),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(472),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(471),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(470),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(469),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(464),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(461),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(460),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(455),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(265),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(391),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(387),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(337),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(334),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(333),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(318),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(288),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(285),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(281),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(369),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(262),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(270),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(266),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(295),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(272),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(326),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(338),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(311),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(351),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(364),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(367),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(368),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(268),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(340),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(467),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(741),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(6),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(459),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(443),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(437),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(436),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(429),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(426),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(421),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(420),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(419),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(418),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(414),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(413),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(404),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(401),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(400),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(397),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(396),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(395),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(394),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(393),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(392),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(390),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(389),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(388),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(385),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(384),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(405),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(269),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(309),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(310),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(327),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(328),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(331),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(341),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(344),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(345),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(346),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(347),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(348),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(349),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(354),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(355),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(356),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(358),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(371),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(373),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(403),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(425),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(415),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(417),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(438),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(439),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(450),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(474),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(473),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(472),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(471),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(470),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(469),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(464),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(461),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(460),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(455),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(265),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(391),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(387),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(378),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(337),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(334),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(333),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(318),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(288),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(285),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(281),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(369),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(262),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(270),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(266),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(296),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(295),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(272),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(326),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(338),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(311),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(351),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(364),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(367),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(368),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(268),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(340),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(467),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(568),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(18),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 58),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 58),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 24),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 24),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 6, .production_id = 15),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 6, .production_id = 15),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 14),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 14),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 26),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 26),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 26),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 26),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 58),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 58),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 24),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 24),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 14),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 14),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 5, .production_id = 15),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 5, .production_id = 15),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_declaration, 7, .production_id = 15),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_declaration, 7, .production_id = 15),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(72),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(72),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(752),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 9),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [923] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(120),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(120),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(792),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote_command, 3, .production_id = 22),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_command, 3, .production_id = 22),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(164),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(164),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(789),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(170),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(170),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(790),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(137),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(137),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2), SHIFT_REPEAT(791),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 2),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 53),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 1, .production_id = 9),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hosts_string, 1, .production_id = 18),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 18),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 18),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(106),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(106),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(213),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(213),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(793),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 41),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 41),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2, .production_id = 31),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 3, .production_id = 65),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 9),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(168),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(168),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(211),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(211),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(204),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2), SHIFT_REPEAT(204),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 2),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2),
  [1148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(159),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(159),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 18),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 2, .production_id = 30),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2), SHIFT_REPEAT(141),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 2),
  [1175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(151),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat1, 2), SHIFT_REPEAT(151),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 3, .production_id = 65),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 3, .production_id = 35),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2, .production_id = 31),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proxy_string, 1, .production_id = 18),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 18),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env_value, 1, .production_id = 23),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(190),
  [1214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(190),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2),
  [1231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(398),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 2), SHIFT_REPEAT(398),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__remote_command_repeat1, 1),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__token_string, 1, .production_id = 18),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 18),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_value_repeat1, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(423),
  [1284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(423),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(252),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(252),
  [1299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(251),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 2), SHIFT_REPEAT(251),
  [1305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(175),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(175),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_value_repeat3, 1),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [1347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(171),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 26),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 37),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(97),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 14),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 26),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 28),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 26),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 37),
  [1397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(760),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 2, .production_id = 9),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 20),
  [1406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(766),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 4, .production_id = 54),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 14),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 14),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 14),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, .production_id = 31),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 26),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 55),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 56),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 14),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 37),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat1, 1),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 3, .production_id = 36),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 14),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 14),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 48), SHIFT_REPEAT(158),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 48),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 14),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 40),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 53),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 37),
  [1480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(779),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2), SHIFT_REPEAT(166),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat2, 2),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 5, .production_id = 60),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 26),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(771),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 37),
  [1519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2), SHIFT_REPEAT(690),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 2),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 26),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 61),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 26),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 26),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 37),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(775),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 1, .production_id = 10),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 1, .production_id = 10),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 37),
  [1567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(776),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 51), SHIFT_REPEAT(94),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 51),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(124),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 33), SHIFT_REPEAT(431),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 33),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(115),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 47),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 39), SHIFT_REPEAT(85),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 39),
  [1751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 33), SHIFT_REPEAT(113),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 33),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 14),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [1764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2), SHIFT_REPEAT(39),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_declaration_repeat1, 2),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 16),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 33), SHIFT_REPEAT(74),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 33),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 4, .production_id = 24),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 14),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 4, .production_id = 24),
  [1900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 4, .production_id = 24),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 37),
  [1946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 33), SHIFT_REPEAT(107),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 33),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 33), SHIFT_REPEAT(554),
  [1958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 33),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 14),
  [1964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 33), SHIFT_REPEAT(49),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 33),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 29),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [2017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [2021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [2031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [2033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__match_exec_repeat2, 1),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [2051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 21),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 48),
  [2073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 48), SHIFT_REPEAT(136),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 26),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [2094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 14),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [2128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [2140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 24),
  [2142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [2152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__send_env, 3, .production_id = 14),
  [2154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 62),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [2172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env, 3, .production_id = 14),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2),
  [2178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_value_repeat4, 2), SHIFT_REPEAT(140),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [2185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2),
  [2187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat2, 2), SHIFT_REPEAT(737),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_localnetwork_repeat1, 3),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [2198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 25),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 3, .production_id = 14),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [2208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_known_hosts_file, 3, .production_id = 14),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 24),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [2254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [2264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [2266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [2268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [2292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [2294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [2296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 14),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xauth_location, 3, .production_id = 14),
  [2302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__visual_host_key, 3, .production_id = 14),
  [2304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_host_key_dns, 3, .production_id = 14),
  [2306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_host_keys, 3, .production_id = 14),
  [2308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel, 3, .production_id = 14),
  [2310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag, 3, .production_id = 14),
  [2312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tcp_keep_alive, 3, .production_id = 14),
  [2314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__syslog_facility, 3, .production_id = 14),
  [2316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_interval, 3, .production_id = 14),
  [2318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 37),
  [2320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stdin_null, 3, .production_id = 14),
  [2322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__session_type, 3, .production_id = 14),
  [2324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__strict_host_key_checking, 3, .production_id = 14),
  [2326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 27),
  [2328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__server_alive_count_max, 3, .production_id = 14),
  [2330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 14),
  [2332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__security_key_provider, 3, .production_id = 17),
  [2334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__revoked_host_keys, 3, .production_id = 14),
  [2336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_rsa_size, 3, .production_id = 14),
  [2338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_tty, 3, .production_id = 14),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 3, .production_id = 14),
  [2344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_authentication, 3, .production_id = 14),
  [2346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 14),
  [2348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [2350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 14),
  [2352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 14),
  [2354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 14),
  [2356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [2358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 14),
  [2360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 14),
  [2362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 14),
  [2364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 14),
  [2366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 14),
  [2368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [2370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 14),
  [2372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 14),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 14),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 14),
  [2384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 5, .production_id = 65),
  [2386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 14),
  [2388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 17),
  [2390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2),
  [2392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 14),
  [2394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 14),
  [2396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 14),
  [2398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 14),
  [2400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 62),
  [2402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 14),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 14),
  [2408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 14),
  [2410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 14),
  [2412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 14),
  [2414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 14),
  [2416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 14),
  [2418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 17),
  [2420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 14),
  [2422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 14),
  [2424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 14),
  [2426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 32),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 14),
  [2434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 14),
  [2436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 14),
  [2438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 14),
  [2440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 14),
  [2442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 14),
  [2444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 14),
  [2446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_unlink, 3, .production_id = 14),
  [2448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_host, 3, .production_id = 34),
  [2450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 14),
  [2452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_canonical, 3, .production_id = 10),
  [2454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_final, 3, .production_id = 10),
  [2456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 14),
  [2458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 14),
  [2460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 14),
  [2462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_originalhost, 3, .production_id = 36),
  [2464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_tagged, 3, .production_id = 36),
  [2466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_user, 3, .production_id = 36),
  [2468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localuser, 3, .production_id = 36),
  [2470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_localnetwork, 6, .production_id = 66),
  [2472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 15),
  [2474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 14),
  [2476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 14),
  [2478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stream_local_bind_mask, 3, .production_id = 14),
  [2480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 14),
  [2482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 14),
  [2484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 32),
  [2486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 14),
  [2488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 38),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 14),
  [2492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 14),
  [2494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [2496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 14),
  [2498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3, .production_id = 13),
  [2500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 12),
  [2502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 31),
  [2504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 32),
  [2506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 11),
  [2508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 31),
  [2516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 42),
  [2518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 42),
  [2520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 43),
  [2522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 4, .production_id = 65),
  [2524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 45),
  [2526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 46),
  [2528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [2530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [2534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [2536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 49),
  [2538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 50),
  [2540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 8),
  [2542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rekey_limit, 5, .production_id = 43),
  [2544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote_forward, 5, .production_id = 45),
  [2546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__send_env_repeat1, 2, .production_id = 32),
  [2548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 64),
  [2550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_env_value, 3, .production_id = 23),
  [2552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__set_env_repeat1, 2, .production_id = 32),
  [2554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tunnel_device, 5, .production_id = 37),
  [2556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_known_hosts_file_repeat1, 2, .production_id = 32),
  [2558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 52),
  [2560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 63),
  [2562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [2568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [2570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [2572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [2574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [2576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 47),
  [2578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 57),
  [2580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [2582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_value, 3, .production_id = 31),
  [2586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_exec, 5, .production_id = 59),
  [2588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value2, 3, .production_id = 49),
  [2590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 3, .production_id = 44),
  [2604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [2606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [2610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [2612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [2618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [2622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [2624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_value1, 1, .production_id = 19),
  [2646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [2656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [2662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2674] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
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
