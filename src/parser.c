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
#define STATE_COUNT 576
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 255
#define ALIAS_COUNT 0
#define TOKEN_COUNT 128
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 54

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
  anon_sym_unbound = 95,
  anon_sym_host_DASHbound = 96,
  sym_ipqos = 97,
  sym_verbosity = 98,
  sym_authentication = 99,
  sym_cipher = 100,
  sym_kex = 101,
  sym_key_sig = 102,
  sym_mac = 103,
  sym_protocol_version = 104,
  sym_sig = 105,
  aux_sym__file_token_token1 = 106,
  aux_sym__hosts_token_token1 = 107,
  aux_sym__hostname_token_token1 = 108,
  aux_sym__proxy_token_token1 = 109,
  sym_token = 110,
  anon_sym_DOLLAR = 111,
  sym__var_name = 112,
  anon_sym_DOLLAR_LBRACE = 113,
  anon_sym_RBRACE = 114,
  aux_sym__file_string_token1 = 115,
  anon_sym_yes = 116,
  anon_sym_no = 117,
  sym__number = 118,
  aux_sym_time_token1 = 119,
  aux_sym_time_token2 = 120,
  aux_sym_time_token3 = 121,
  aux_sym_time_token4 = 122,
  aux_sym_time_token5 = 123,
  sym_comment = 124,
  aux_sym__sep_token1 = 125,
  sym__space = 126,
  sym__eol = 127,
  sym_config = 128,
  sym_host_declaration = 129,
  sym__declarations = 130,
  sym_parameter = 131,
  sym__add_keys_to_agent = 132,
  sym__address_family = 133,
  sym__batch_mode = 134,
  sym__bind_address = 135,
  sym__bind_interface = 136,
  sym__canonical_domains = 137,
  sym__canonicalize_fallback_local = 138,
  sym__canonicalize_hostname = 139,
  sym__canonicalize_max_dots = 140,
  sym__canonicalize_permitted_cnames = 141,
  sym__cnames_map = 142,
  sym__ca_signature_algorithms = 143,
  sym__certificate_file = 144,
  sym__check_host_ip = 145,
  sym__ciphers = 146,
  sym__clear_all_forwardings = 147,
  sym__compression = 148,
  sym__connection_attempts = 149,
  sym__connect_timeout = 150,
  sym__control_master = 151,
  sym__control_persist = 152,
  sym__control_path = 153,
  sym__enable_escape_command_line = 154,
  sym__enable_ssh_keysign = 155,
  sym__escape_char = 156,
  sym__exit_on_forward_failure = 157,
  sym__fingerprint_hash = 158,
  sym__fork_after_authentication = 159,
  sym__forward_agent = 160,
  sym__forward_x11 = 161,
  sym__forward_x11_timeout = 162,
  sym__forward_x11_trusted = 163,
  sym__global_known_hosts_file = 164,
  sym__gssapi_authentication = 165,
  sym__gssapi_delegate_credentials = 166,
  sym__hostbased_accepted_algorithms = 167,
  sym__hostbased_authentication = 168,
  sym__host_key_algorithms = 169,
  sym__host_key_alias = 170,
  sym__hostname = 171,
  sym__identities_only = 172,
  sym__identity_agent = 173,
  sym__identity_file = 174,
  sym__ignore_unknown = 175,
  sym__ipqos = 176,
  sym__kbd_interactive_authentication = 177,
  sym__kex_algorithms = 178,
  sym__known_hosts_command = 179,
  sym__local_command = 180,
  sym__local_forward = 181,
  sym__local_forward_value1 = 182,
  sym__local_forward_value2 = 183,
  sym__log_level = 184,
  sym__log_verbose = 185,
  sym__log_verbose_value = 186,
  sym__log_verbose_quoted = 187,
  sym__macs = 188,
  sym__no_host_authentication_for_localhost = 189,
  sym__number_of_password_prompts = 190,
  sym__password_authentication = 191,
  sym__permit_local_command = 192,
  sym__permit_remote_open = 193,
  sym__permit_remote_open_value = 194,
  sym__pkcs11_provider = 195,
  sym__port = 196,
  sym__preferred_authentications = 197,
  sym__proxy_command = 198,
  sym__proxy_jump = 199,
  sym__proxy_use_fdpass = 200,
  sym__pubkey_accepted_algorithms = 201,
  sym__pubkey_authentication_arg = 202,
  sym__file_token = 203,
  sym__hosts_token = 204,
  sym__hostname_token = 205,
  sym__proxy_token = 206,
  sym__var_value = 207,
  sym_variable = 208,
  sym__file_string = 209,
  sym__hosts_string = 210,
  sym__hostname_string = 211,
  aux_sym__proxy_string_content = 212,
  sym__proxy_string = 213,
  sym__token_string = 214,
  sym_string = 215,
  sym__file_pattern_vars = 216,
  sym_pattern = 217,
  sym__boolean = 218,
  sym_number = 219,
  sym_time = 220,
  sym__sep = 221,
  aux_sym_config_repeat1 = 222,
  aux_sym_host_declaration_repeat1 = 223,
  aux_sym__declarations_repeat1 = 224,
  aux_sym__canonical_domains_repeat1 = 225,
  aux_sym__canonicalize_permitted_cnames_repeat1 = 226,
  aux_sym__cnames_map_repeat1 = 227,
  aux_sym__ca_signature_algorithms_repeat1 = 228,
  aux_sym__ciphers_repeat1 = 229,
  aux_sym__global_known_hosts_file_repeat1 = 230,
  aux_sym__hostbased_accepted_algorithms_repeat1 = 231,
  aux_sym__ignore_unknown_repeat1 = 232,
  aux_sym__kex_algorithms_repeat1 = 233,
  aux_sym__local_command_repeat1 = 234,
  aux_sym__log_verbose_repeat1 = 235,
  aux_sym__log_verbose_repeat2 = 236,
  aux_sym__log_verbose_value_repeat1 = 237,
  aux_sym__log_verbose_quoted_repeat1 = 238,
  aux_sym__macs_repeat1 = 239,
  aux_sym__permit_remote_open_repeat1 = 240,
  aux_sym__preferred_authentications_repeat1 = 241,
  aux_sym__proxy_command_arg_repeat1 = 242,
  aux_sym__file_string_repeat1 = 243,
  aux_sym__file_string_repeat2 = 244,
  aux_sym__hosts_string_repeat1 = 245,
  aux_sym__hosts_string_repeat2 = 246,
  aux_sym__hostname_string_repeat1 = 247,
  aux_sym__hostname_string_repeat2 = 248,
  aux_sym__proxy_string_repeat1 = 249,
  aux_sym__token_string_repeat1 = 250,
  aux_sym__token_string_repeat2 = 251,
  aux_sym__file_pattern_vars_repeat1 = 252,
  aux_sym__file_pattern_vars_repeat2 = 253,
  aux_sym_pattern_repeat1 = 254,
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
  [anon_sym_unbound] = "unbound",
  [anon_sym_host_DASHbound] = "host-bound",
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
  [sym__local_forward_value1] = "_local_forward_value1",
  [sym__local_forward_value2] = "_local_forward_value2",
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
  [sym__pubkey_authentication_arg] = "_pubkey_authentication_arg",
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
  [anon_sym_unbound] = anon_sym_unbound,
  [anon_sym_host_DASHbound] = anon_sym_host_DASHbound,
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
  [aux_sym_time_token1] = aux_sym_time_token1,
  [aux_sym_time_token2] = aux_sym_time_token2,
  [aux_sym_time_token3] = aux_sym_time_token3,
  [aux_sym_time_token4] = aux_sym_time_token4,
  [aux_sym_time_token5] = aux_sym_time_token5,
  [sym_comment] = sym_comment,
  [aux_sym__sep_token1] = aux_sym__sep_token1,
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
  [sym__local_forward_value1] = sym__local_forward_value1,
  [sym__local_forward_value2] = sym__local_forward_value2,
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
  [sym__pubkey_authentication_arg] = sym__pubkey_authentication_arg,
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
  [anon_sym_unbound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host_DASHbound] = {
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
  [sym__local_forward_value1] = {
    .visible = false,
    .named = true,
  },
  [sym__local_forward_value2] = {
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
  [sym__pubkey_authentication_arg] = {
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
  [18] = {.index = 48, .length = 3},
  [19] = {.index = 51, .length = 7},
  [20] = {.index = 58, .length = 3},
  [21] = {.index = 61, .length = 1},
  [22] = {.index = 62, .length = 9},
  [23] = {.index = 71, .length = 7},
  [24] = {.index = 78, .length = 1},
  [25] = {.index = 79, .length = 2},
  [26] = {.index = 81, .length = 4},
  [27] = {.index = 85, .length = 3},
  [28] = {.index = 88, .length = 6},
  [29] = {.index = 94, .length = 2},
  [31] = {.index = 61, .length = 1},
  [33] = {.index = 96, .length = 3},
  [34] = {.index = 99, .length = 2},
  [35] = {.index = 101, .length = 7},
  [36] = {.index = 108, .length = 7},
  [37] = {.index = 115, .length = 3},
  [38] = {.index = 118, .length = 6},
  [39] = {.index = 124, .length = 2},
  [40] = {.index = 124, .length = 2},
  [41] = {.index = 126, .length = 2},
  [42] = {.index = 128, .length = 4},
  [43] = {.index = 81, .length = 4},
  [44] = {.index = 132, .length = 2},
  [45] = {.index = 134, .length = 3},
  [46] = {.index = 137, .length = 3},
  [47] = {.index = 140, .length = 11},
  [48] = {.index = 151, .length = 4},
  [49] = {.index = 155, .length = 4},
  [50] = {.index = 159, .length = 3},
  [51] = {.index = 162, .length = 2},
  [52] = {.index = 162, .length = 2},
  [53] = {.index = 164, .length = 6},
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
  [21] = {
    [1] = sym_variable,
  },
  [30] = {
    [0] = sym_pattern,
    [1] = sym_pattern,
    [2] = sym_pattern,
  },
  [32] = {
    [0] = sym_string,
    [1] = sym_string,
    [2] = sym_string,
  },
  [40] = {
    [0] = sym_string,
  },
  [43] = {
    [2] = sym_string,
  },
  [52] = {
    [1] = sym_string,
  },
  [53] = {
    [2] = sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__proxy_string_content, 2,
    aux_sym__proxy_string_content,
    sym_string,
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
  [74] = 55,
  [75] = 75,
  [76] = 72,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 60,
  [84] = 84,
  [85] = 85,
  [86] = 54,
  [87] = 87,
  [88] = 88,
  [89] = 54,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 60,
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
  [116] = 55,
  [117] = 55,
  [118] = 108,
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
  [184] = 55,
  [185] = 185,
  [186] = 55,
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
  [313] = 167,
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
  [540] = 535,
  [541] = 535,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 535,
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
  [566] = 564,
  [567] = 564,
  [568] = 564,
  [569] = 564,
  [570] = 564,
  [571] = 571,
  [572] = 535,
  [573] = 573,
  [574] = 535,
  [575] = 575,
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
      if (eof) ADVANCE(1405);
      if (lookahead == '!') ADVANCE(1408);
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1549);
      if (lookahead == '%') ADVANCE(1489);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == ',') ADVANCE(1425);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '2') ADVANCE(1488);
      if (lookahead == ':') ADVANCE(1426);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead == '@') ADVANCE(1525);
      if (lookahead == 'S') ADVANCE(1487);
      if (lookahead == '^') ADVANCE(1433);
      if (lookahead == 's') ADVANCE(1488);
      if (lookahead == '}') ADVANCE(1555);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1488);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1488);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1488);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1488);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1580);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1408);
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1559);
      if (lookahead == '%') ADVANCE(1562);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1559);
      if (lookahead == '%') ADVANCE(1562);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(1559);
      if (lookahead == '%') ADVANCE(1563);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1561);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1560);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1564);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == ',') ADVANCE(1425);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead != 0) ADVANCE(1556);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '3') ADVANCE(343);
      if (lookahead == '^') ADVANCE(1433);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1572);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1573);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1574);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1575);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1571);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1549);
      if (lookahead == '%') ADVANCE(1562);
      if (lookahead == 'S') ADVANCE(1557);
      if (lookahead == 'n') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1559);
      if (lookahead == '%') ADVANCE(1562);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1559);
      if (lookahead == '%') ADVANCE(1562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1559);
      if (lookahead == '%') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1490);
      if (lookahead == '%') ADVANCE(1494);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1490);
      if (lookahead == '%') ADVANCE(1494);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '$') ADVANCE(1490);
      if (lookahead == '%') ADVANCE(1496);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '%') ADVANCE(1561);
      if (lookahead == 'n') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '%') ADVANCE(1561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '%') ADVANCE(1560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '%') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '%') ADVANCE(1493);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '%') ADVANCE(1492);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '%') ADVANCE(1497);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead == 'n') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead != 0) ADVANCE(1488);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1485);
      if (lookahead == '$') ADVANCE(1515);
      if (lookahead == '%') ADVANCE(1517);
      if (lookahead == '*') ADVANCE(1444);
      if (lookahead == '0') ADVANCE(1518);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1485);
      if (lookahead == '$') ADVANCE(1515);
      if (lookahead == '%') ADVANCE(1517);
      if (lookahead == '*') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1485);
      if (lookahead == '$') ADVANCE(1550);
      if (lookahead == 'n') ADVANCE(1511);
      if (lookahead == 'y') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1485);
      if (lookahead == '*') ADVANCE(1444);
      if (lookahead == 'a') ADVANCE(1509);
      if (lookahead == 'n') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(1491);
      if (lookahead == '%') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1498);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == ',') ADVANCE(1425);
      if (lookahead == ':') ADVANCE(1426);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1556);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == ':') ADVANCE(1426);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1488);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 38:
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '0') ADVANCE(1569);
      if (lookahead == '=') ADVANCE(1577);
      if (lookahead == 'S') ADVANCE(1526);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(572);
      if (lookahead == 'h') ADVANCE(509);
      if (lookahead == 'k') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1578);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1570);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(471);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(393);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '@') ADVANCE(513);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(632);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(522);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(553);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(315);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(473);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(435);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '1') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '@') ADVANCE(498);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(578);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(485);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(488);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(576);
      if (lookahead == '4') ADVANCE(73);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(582);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(487);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(490);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(494);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 86:
      if (lookahead == '.') ADVANCE(323);
      END_STATE();
    case 87:
      if (lookahead == '.') ADVANCE(503);
      END_STATE();
    case 88:
      if (lookahead == '.') ADVANCE(324);
      END_STATE();
    case 89:
      if (lookahead == '.') ADVANCE(326);
      END_STATE();
    case 90:
      if (lookahead == '.') ADVANCE(327);
      END_STATE();
    case 91:
      if (lookahead == '.') ADVANCE(329);
      END_STATE();
    case 92:
      if (lookahead == '0') ADVANCE(120);
      END_STATE();
    case 93:
      if (lookahead == '0') ADVANCE(188);
      END_STATE();
    case 94:
      if (lookahead == '0') ADVANCE(54);
      END_STATE();
    case 95:
      if (lookahead == '1') ADVANCE(1539);
      END_STATE();
    case 96:
      if (lookahead == '1') ADVANCE(1541);
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == '1') ADVANCE(211);
      END_STATE();
    case 98:
      if (lookahead == '1') ADVANCE(636);
      END_STATE();
    case 99:
      if (lookahead == '1') ADVANCE(1458);
      END_STATE();
    case 100:
      if (lookahead == '1') ADVANCE(1536);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(1536);
      if (lookahead == '2') ADVANCE(173);
      END_STATE();
    case 102:
      if (lookahead == '1') ADVANCE(129);
      if (lookahead == '2') ADVANCE(177);
      END_STATE();
    case 103:
      if (lookahead == '1') ADVANCE(158);
      END_STATE();
    case 104:
      if (lookahead == '1') ADVANCE(1400);
      if (lookahead == '2') ADVANCE(1400);
      if (lookahead == '3') ADVANCE(1400);
      if (lookahead == '4') ADVANCE(1400);
      END_STATE();
    case 105:
      if (lookahead == '1') ADVANCE(1543);
      END_STATE();
    case 106:
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '6') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == '1') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == '1') ADVANCE(207);
      END_STATE();
    case 109:
      if (lookahead == '1') ADVANCE(209);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == '1') ADVANCE(208);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(126);
      END_STATE();
    case 113:
      if (lookahead == '1') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == '1') ADVANCE(213);
      END_STATE();
    case 115:
      if (lookahead == '1') ADVANCE(155);
      END_STATE();
    case 116:
      if (lookahead == '1') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == '1') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == '1') ADVANCE(1180);
      END_STATE();
    case 119:
      if (lookahead == '1') ADVANCE(212);
      END_STATE();
    case 120:
      if (lookahead == '1') ADVANCE(215);
      END_STATE();
    case 121:
      if (lookahead == '2') ADVANCE(1539);
      END_STATE();
    case 122:
      if (lookahead == '2') ADVANCE(202);
      END_STATE();
    case 123:
      if (lookahead == '2') ADVANCE(1536);
      END_STATE();
    case 124:
      if (lookahead == '2') ADVANCE(1543);
      END_STATE();
    case 125:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 126:
      if (lookahead == '2') ADVANCE(1542);
      END_STATE();
    case 127:
      if (lookahead == '2') ADVANCE(94);
      END_STATE();
    case 128:
      if (lookahead == '2') ADVANCE(168);
      END_STATE();
    case 129:
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '9') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == '2') ADVANCE(169);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '5') ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == '2') ADVANCE(169);
      if (lookahead == '5') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '5') ADVANCE(112);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 134:
      if (lookahead == '2') ADVANCE(170);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(173);
      if (lookahead == '3') ADVANCE(203);
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(100);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(95);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == '3') ADVANCE(205);
      if (lookahead == '5') ADVANCE(144);
      END_STATE();
    case 142:
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == '5') ADVANCE(117);
      END_STATE();
    case 143:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 144:
      if (lookahead == '2') ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == '2') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == '2') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 148:
      if (lookahead == '2') ADVANCE(184);
      END_STATE();
    case 149:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 150:
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 151:
      if (lookahead == '2') ADVANCE(70);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(187);
      END_STATE();
    case 155:
      if (lookahead == '2') ADVANCE(216);
      END_STATE();
    case 156:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 158:
      if (lookahead == '3') ADVANCE(93);
      END_STATE();
    case 159:
      if (lookahead == '4') ADVANCE(1539);
      END_STATE();
    case 160:
      if (lookahead == '4') ADVANCE(63);
      END_STATE();
    case 161:
      if (lookahead == '4') ADVANCE(1536);
      END_STATE();
    case 162:
      if (lookahead == '4') ADVANCE(1543);
      END_STATE();
    case 163:
      if (lookahead == '5') ADVANCE(1454);
      END_STATE();
    case 164:
      if (lookahead == '5') ADVANCE(190);
      END_STATE();
    case 165:
      if (lookahead == '5') ADVANCE(1541);
      END_STATE();
    case 166:
      if (lookahead == '5') ADVANCE(97);
      END_STATE();
    case 167:
      if (lookahead == '5') ADVANCE(196);
      END_STATE();
    case 168:
      if (lookahead == '5') ADVANCE(166);
      END_STATE();
    case 169:
      if (lookahead == '5') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == '5') ADVANCE(192);
      END_STATE();
    case 171:
      if (lookahead == '5') ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == '5') ADVANCE(108);
      END_STATE();
    case 173:
      if (lookahead == '5') ADVANCE(193);
      END_STATE();
    case 174:
      if (lookahead == '5') ADVANCE(195);
      END_STATE();
    case 175:
      if (lookahead == '5') ADVANCE(199);
      END_STATE();
    case 176:
      if (lookahead == '5') ADVANCE(109);
      END_STATE();
    case 177:
      if (lookahead == '5') ADVANCE(198);
      END_STATE();
    case 178:
      if (lookahead == '5') ADVANCE(194);
      END_STATE();
    case 179:
      if (lookahead == '5') ADVANCE(115);
      END_STATE();
    case 180:
      if (lookahead == '5') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == '5') ADVANCE(111);
      END_STATE();
    case 182:
      if (lookahead == '5') ADVANCE(114);
      END_STATE();
    case 183:
      if (lookahead == '5') ADVANCE(176);
      END_STATE();
    case 184:
      if (lookahead == '5') ADVANCE(181);
      END_STATE();
    case 185:
      if (lookahead == '5') ADVANCE(182);
      END_STATE();
    case 186:
      if (lookahead == '5') ADVANCE(119);
      END_STATE();
    case 187:
      if (lookahead == '5') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == '5') ADVANCE(217);
      END_STATE();
    case 189:
      if (lookahead == '5') ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == '6') ADVANCE(1455);
      END_STATE();
    case 191:
      if (lookahead == '6') ADVANCE(1539);
      END_STATE();
    case 192:
      if (lookahead == '6') ADVANCE(1537);
      END_STATE();
    case 193:
      if (lookahead == '6') ADVANCE(1536);
      END_STATE();
    case 194:
      if (lookahead == '6') ADVANCE(1543);
      END_STATE();
    case 195:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 196:
      if (lookahead == '6') ADVANCE(1542);
      END_STATE();
    case 197:
      if (lookahead == '6') ADVANCE(98);
      END_STATE();
    case 198:
      if (lookahead == '6') ADVANCE(45);
      END_STATE();
    case 199:
      if (lookahead == '6') ADVANCE(215);
      END_STATE();
    case 200:
      if (lookahead == '6') ADVANCE(218);
      END_STATE();
    case 201:
      if (lookahead == '7') ADVANCE(197);
      END_STATE();
    case 202:
      if (lookahead == '8') ADVANCE(63);
      END_STATE();
    case 203:
      if (lookahead == '8') ADVANCE(161);
      END_STATE();
    case 204:
      if (lookahead == '8') ADVANCE(159);
      END_STATE();
    case 205:
      if (lookahead == '8') ADVANCE(162);
      END_STATE();
    case 206:
      if (lookahead == '8') ADVANCE(45);
      END_STATE();
    case 207:
      if (lookahead == '9') ADVANCE(1539);
      END_STATE();
    case 208:
      if (lookahead == '9') ADVANCE(1543);
      END_STATE();
    case 209:
      if (lookahead == '9') ADVANCE(48);
      END_STATE();
    case 210:
      if (lookahead == '9') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 211:
      if (lookahead == '9') ADVANCE(62);
      END_STATE();
    case 212:
      if (lookahead == '9') ADVANCE(68);
      END_STATE();
    case 213:
      if (lookahead == '9') ADVANCE(218);
      END_STATE();
    case 214:
      if (lookahead == '@') ADVANCE(498);
      END_STATE();
    case 215:
      if (lookahead == '@') ADVANCE(513);
      END_STATE();
    case 216:
      if (lookahead == '@') ADVANCE(514);
      END_STATE();
    case 217:
      if (lookahead == '@') ADVANCE(515);
      END_STATE();
    case 218:
      if (lookahead == '@') ADVANCE(516);
      END_STATE();
    case 219:
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1051);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1187);
      END_STATE();
    case 220:
      if (lookahead == 'A') ADVANCE(235);
      END_STATE();
    case 221:
      if (lookahead == 'A') ADVANCE(259);
      END_STATE();
    case 222:
      if (lookahead == 'B') ADVANCE(258);
      END_STATE();
    case 223:
      if (lookahead == 'B') ADVANCE(242);
      END_STATE();
    case 224:
      if (lookahead == 'C') ADVANCE(234);
      END_STATE();
    case 225:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 226:
      if (lookahead == 'E') ADVANCE(1532);
      END_STATE();
    case 227:
      if (lookahead == 'E') ADVANCE(248);
      END_STATE();
    case 228:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 229:
      if (lookahead == 'F') ADVANCE(241);
      END_STATE();
    case 230:
      if (lookahead == 'G') ADVANCE(1533);
      END_STATE();
    case 231:
      if (lookahead == 'H') ADVANCE(261);
      END_STATE();
    case 232:
      if (lookahead == 'H') ADVANCE(262);
      END_STATE();
    case 233:
      if (lookahead == 'I') ADVANCE(228);
      END_STATE();
    case 234:
      if (lookahead == 'K') ADVANCE(1472);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(1532);
      END_STATE();
    case 236:
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1067);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1186);
      END_STATE();
    case 237:
      if (lookahead == 'N') ADVANCE(1068);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1170);
      END_STATE();
    case 238:
      if (lookahead == 'O') ADVANCE(1019);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(533);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1192);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(643);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1169);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(806);
      END_STATE();
    case 239:
      if (lookahead == 'O') ADVANCE(1254);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 240:
      if (lookahead == 'O') ADVANCE(913);
      if (lookahead == 'o') ADVANCE(1567);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1020);
      END_STATE();
    case 241:
      if (lookahead == 'O') ADVANCE(1532);
      END_STATE();
    case 242:
      if (lookahead == 'O') ADVANCE(250);
      END_STATE();
    case 243:
      if (lookahead == 'O') ADVANCE(224);
      END_STATE();
    case 244:
      if (lookahead == 'O') ADVANCE(247);
      END_STATE();
    case 245:
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(727);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(929);
      END_STATE();
    case 246:
      if (lookahead == 'R') ADVANCE(244);
      END_STATE();
    case 247:
      if (lookahead == 'R') ADVANCE(1532);
      END_STATE();
    case 248:
      if (lookahead == 'R') ADVANCE(223);
      END_STATE();
    case 249:
      if (lookahead == 'S') ADVANCE(1506);
      if (lookahead == 'n') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 250:
      if (lookahead == 'S') ADVANCE(226);
      END_STATE();
    case 251:
      if (lookahead == 'S') ADVANCE(1288);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 252:
      if (lookahead == 'S') ADVANCE(243);
      END_STATE();
    case 253:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 254:
      if (lookahead == 'T') ADVANCE(1407);
      if (lookahead == 't') ADVANCE(1406);
      END_STATE();
    case 255:
      if (lookahead == 'T') ADVANCE(1532);
      END_STATE();
    case 256:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 257:
      if (lookahead == 'U') ADVANCE(233);
      END_STATE();
    case 258:
      if (lookahead == 'U') ADVANCE(230);
      END_STATE();
    case 259:
      if (lookahead == 'U') ADVANCE(256);
      END_STATE();
    case 260:
      if (lookahead == '^') ADVANCE(1451);
      if (lookahead == 'n') ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1449);
      END_STATE();
    case 261:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 262:
      if (lookahead == '_') ADVANCE(252);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(1539);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(1543);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 284:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 286:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 288:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 290:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 291:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 302:
      if (lookahead == 'b') ADVANCE(497);
      END_STATE();
    case 303:
      if (lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 304:
      if (lookahead == 'b') ADVANCE(314);
      END_STATE();
    case 305:
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 306:
      if (lookahead == 'b') ADVANCE(447);
      END_STATE();
    case 307:
      if (lookahead == 'b') ADVANCE(510);
      END_STATE();
    case 308:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 309:
      if (lookahead == 'b') ADVANCE(461);
      END_STATE();
    case 310:
      if (lookahead == 'b') ADVANCE(563);
      END_STATE();
    case 311:
      if (lookahead == 'b') ADVANCE(512);
      END_STATE();
    case 312:
      if (lookahead == 'b') ADVANCE(301);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(727);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(929);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(1535);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(1534);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(502);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(504);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(1531);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 336:
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 337:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 338:
      if (lookahead == 'd') ADVANCE(1529);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(1530);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(1534);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(597);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(600);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(1531);
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(1534);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 388:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 389:
      if (lookahead == 'f') ADVANCE(432);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 390:
      if (lookahead == 'f') ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'f') ADVANCE(434);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(1536);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(538);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(406);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 396:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 397:
      if (lookahead == 'h') ADVANCE(484);
      END_STATE();
    case 398:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 399:
      if (lookahead == 'h') ADVANCE(264);
      if (lookahead == 'k') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(270);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(542);
      END_STATE();
    case 406:
      if (lookahead == 'h') ADVANCE(524);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(275);
      END_STATE();
    case 410:
      if (lookahead == 'h') ADVANCE(269);
      END_STATE();
    case 411:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(283);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(286);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(495);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 450:
      if (lookahead == 'k') ADVANCE(1410);
      END_STATE();
    case 451:
      if (lookahead == 'k') ADVANCE(1440);
      END_STATE();
    case 452:
      if (lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 453:
      if (lookahead == 'k') ADVANCE(367);
      END_STATE();
    case 454:
      if (lookahead == 'k') ADVANCE(81);
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 455:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(639);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 464:
      if (lookahead == 'm') ADVANCE(1411);
      END_STATE();
    case 465:
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 466:
      if (lookahead == 'm') ADVANCE(1536);
      END_STATE();
    case 467:
      if (lookahead == 'm') ADVANCE(1540);
      END_STATE();
    case 468:
      if (lookahead == 'm') ADVANCE(1538);
      END_STATE();
    case 469:
      if (lookahead == 'm') ADVANCE(1535);
      END_STATE();
    case 470:
      if (lookahead == 'm') ADVANCE(1543);
      END_STATE();
    case 471:
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 472:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 473:
      if (lookahead == 'm') ADVANCE(441);
      END_STATE();
    case 474:
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 475:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1067);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1186);
      END_STATE();
    case 477:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 478:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 479:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 480:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 481:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 482:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 483:
      if (lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 484:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 486:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 487:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 488:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(1439);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 517:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 518:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 519:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 520:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 521:
      if (lookahead == 'p') ADVANCE(366);
      END_STATE();
    case 522:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 523:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 524:
      if (lookahead == 'p') ADVANCE(626);
      END_STATE();
    case 525:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 526:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 527:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 528:
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 529:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 530:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 531:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 532:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(1535);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(602);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(761);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(1565);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(1539);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(1401);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(1543);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 583:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 585:
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 586:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(589);
      END_STATE();
    case 591:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 594:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 595:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 596:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 597:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 598:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 599:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 600:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(1413);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(1531);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 621:
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 622:
      if (lookahead == 'u') ADVANCE(479);
      END_STATE();
    case 623:
      if (lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 624:
      if (lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 625:
      if (lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 626:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 627:
      if (lookahead == 'u') ADVANCE(480);
      END_STATE();
    case 628:
      if (lookahead == 'u') ADVANCE(620);
      END_STATE();
    case 629:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 630:
      if (lookahead == 'v') ADVANCE(375);
      END_STATE();
    case 631:
      if (lookahead == 'v') ADVANCE(358);
      END_STATE();
    case 632:
      if (lookahead == 'w') ADVANCE(437);
      END_STATE();
    case 633:
      if (lookahead == 'w') ADVANCE(508);
      END_STATE();
    case 634:
      if (lookahead == 'w') ADVANCE(344);
      END_STATE();
    case 635:
      if (lookahead == 'x') ADVANCE(330);
      END_STATE();
    case 636:
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 637:
      if (lookahead == 'y') ADVANCE(1531);
      END_STATE();
    case 638:
      if (lookahead == 'y') ADVANCE(1534);
      END_STATE();
    case 639:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 640:
      if (lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 641:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1192);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(643);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1169);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(806);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1019);
      END_STATE();
    case 642:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1300);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1062);
      END_STATE();
    case 643:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(991);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 644:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(760);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(814);
      END_STATE();
    case 645:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 646:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 647:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1172);
      END_STATE();
    case 648:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1256);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1191);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(731);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(790);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(718);
      END_STATE();
    case 649:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1389);
      END_STATE();
    case 650:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(993);
      END_STATE();
    case 651:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      END_STATE();
    case 652:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1364);
      END_STATE();
    case 653:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1202);
      END_STATE();
    case 654:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1171);
      END_STATE();
    case 655:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1026);
      END_STATE();
    case 656:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(985);
      END_STATE();
    case 657:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(994);
      END_STATE();
    case 658:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 659:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1024);
      END_STATE();
    case 660:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 661:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(988);
      END_STATE();
    case 662:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1194);
      END_STATE();
    case 663:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1268);
      END_STATE();
    case 664:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(989);
      END_STATE();
    case 665:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1018);
      END_STATE();
    case 666:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 667:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1302);
      END_STATE();
    case 668:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1304);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1207);
      END_STATE();
    case 669:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1006);
      END_STATE();
    case 670:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1237);
      END_STATE();
    case 671:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1332);
      END_STATE();
    case 672:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(990);
      END_STATE();
    case 673:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1188);
      END_STATE();
    case 674:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 675:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1203);
      END_STATE();
    case 676:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 677:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1263);
      END_STATE();
    case 678:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1216);
      END_STATE();
    case 679:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1094);
      END_STATE();
    case 680:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(997);
      END_STATE();
    case 681:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 682:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1176);
      END_STATE();
    case 683:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(936);
      END_STATE();
    case 684:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1071);
      END_STATE();
    case 685:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 686:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(937);
      END_STATE();
    case 687:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1315);
      END_STATE();
    case 688:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1003);
      END_STATE();
    case 689:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1074);
      END_STATE();
    case 690:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1036);
      END_STATE();
    case 691:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1076);
      END_STATE();
    case 692:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1037);
      END_STATE();
    case 693:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1338);
      END_STATE();
    case 694:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1078);
      END_STATE();
    case 695:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1271);
      END_STATE();
    case 696:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1285);
      END_STATE();
    case 697:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1080);
      END_STATE();
    case 698:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1322);
      END_STATE();
    case 699:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1284);
      END_STATE();
    case 700:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(950);
      END_STATE();
    case 701:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1340);
      END_STATE();
    case 702:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(895);
      END_STATE();
    case 703:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1341);
      END_STATE();
    case 704:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1342);
      END_STATE();
    case 705:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1343);
      END_STATE();
    case 706:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1344);
      END_STATE();
    case 707:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1345);
      END_STATE();
    case 708:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1346);
      END_STATE();
    case 709:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1015);
      END_STATE();
    case 710:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1016);
      END_STATE();
    case 711:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1017);
      END_STATE();
    case 712:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1370);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(847);
      END_STATE();
    case 713:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1371);
      END_STATE();
    case 714:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1372);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1373);
      END_STATE();
    case 716:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1374);
      END_STATE();
    case 717:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1375);
      END_STATE();
    case 718:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(979);
      END_STATE();
    case 719:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(772);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1388);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1109);
      END_STATE();
    case 720:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(657);
      END_STATE();
    case 721:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1001);
      END_STATE();
    case 722:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1142);
      END_STATE();
    case 723:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(846);
      END_STATE();
    case 724:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(666);
      END_STATE();
    case 725:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(984);
      END_STATE();
    case 726:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(902);
      END_STATE();
    case 727:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 728:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1232);
      END_STATE();
    case 729:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(909);
      END_STATE();
    case 730:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(980);
      END_STATE();
    case 731:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1233);
      END_STATE();
    case 732:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(656);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(996);
      END_STATE();
    case 733:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 734:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1125);
      END_STATE();
    case 735:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1291);
      END_STATE();
    case 736:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(661);
      END_STATE();
    case 737:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      END_STATE();
    case 738:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
      END_STATE();
    case 739:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(817);
      END_STATE();
    case 740:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(693);
      END_STATE();
    case 741:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
      END_STATE();
    case 742:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(674);
      END_STATE();
    case 743:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 744:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 745:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1310);
      END_STATE();
    case 746:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1212);
      END_STATE();
    case 747:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1095);
      END_STATE();
    case 748:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1162);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(1362);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1270);
      END_STATE();
    case 749:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(701);
      END_STATE();
    case 750:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1163);
      END_STATE();
    case 751:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(703);
      END_STATE();
    case 752:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1164);
      END_STATE();
    case 753:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(704);
      END_STATE();
    case 754:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1165);
      END_STATE();
    case 755:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      END_STATE();
    case 756:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(706);
      END_STATE();
    case 757:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 758:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 759:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(868);
      END_STATE();
    case 760:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(759);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1358);
      END_STATE();
    case 761:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(977);
      END_STATE();
    case 762:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(681);
      END_STATE();
    case 763:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(644);
      END_STATE();
    case 764:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1480);
      END_STATE();
    case 765:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1481);
      END_STATE();
    case 766:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1523);
      END_STATE();
    case 767:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1460);
      END_STATE();
    case 768:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1479);
      END_STATE();
    case 769:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1503);
      END_STATE();
    case 770:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(761);
      END_STATE();
    case 771:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(679);
      END_STATE();
    case 772:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(945);
      END_STATE();
    case 773:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(785);
      END_STATE();
    case 774:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 775:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1399);
      END_STATE();
    case 776:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(943);
      END_STATE();
    case 777:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1010);
      END_STATE();
    case 778:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1140);
      END_STATE();
    case 779:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(795);
      END_STATE();
    case 780:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(876);
      END_STATE();
    case 781:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(839);
      END_STATE();
    case 782:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1178);
      END_STATE();
    case 783:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 784:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1182);
      END_STATE();
    case 785:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1226);
      END_STATE();
    case 786:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(710);
      END_STATE();
    case 787:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 788:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(713);
      END_STATE();
    case 789:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 790:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1387);
      END_STATE();
    case 791:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 792:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 793:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 794:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1469);
      END_STATE();
    case 795:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1415);
      END_STATE();
    case 796:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1483);
      END_STATE();
    case 797:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 798:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1473);
      END_STATE();
    case 799:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1417);
      END_STATE();
    case 800:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1430);
      END_STATE();
    case 801:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1420);
      END_STATE();
    case 802:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1452);
      END_STATE();
    case 803:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1461);
      END_STATE();
    case 804:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1446);
      END_STATE();
    case 805:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1397);
      END_STATE();
    case 806:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 807:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 808:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 809:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 810:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1393);
      END_STATE();
    case 811:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 812:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1394);
      END_STATE();
    case 813:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 814:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1395);
      END_STATE();
    case 815:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 816:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 817:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      END_STATE();
    case 818:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(987);
      END_STATE();
    case 819:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 820:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1215);
      END_STATE();
    case 821:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1039);
      END_STATE();
    case 822:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 823:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 824:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 825:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1089);
      END_STATE();
    case 826:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1281);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1257);
      END_STATE();
    case 827:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1279);
      END_STATE();
    case 828:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1218);
      END_STATE();
    case 829:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 830:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1137);
      END_STATE();
    case 831:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 832:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1120);
      END_STATE();
    case 833:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 834:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1262);
      END_STATE();
    case 835:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 836:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 837:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 838:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 839:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 840:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1241);
      END_STATE();
    case 841:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1251);
      END_STATE();
    case 842:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 843:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1261);
      END_STATE();
    case 844:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1025);
      END_STATE();
    case 845:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1231);
      END_STATE();
    case 846:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1199);
      END_STATE();
    case 847:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1004);
      END_STATE();
    case 848:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1265);
      END_STATE();
    case 849:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 850:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1269);
      END_STATE();
    case 851:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      END_STATE();
    case 852:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 853:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 854:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1220);
      END_STATE();
    case 855:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 856:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1141);
      END_STATE();
    case 857:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 858:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 859:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 860:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1099);
      END_STATE();
    case 861:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 862:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 863:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 864:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 865:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1103);
      END_STATE();
    case 866:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1104);
      END_STATE();
    case 867:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 868:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 869:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 870:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 871:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 872:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1174);
      END_STATE();
    case 873:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(782);
      END_STATE();
    case 874:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1311);
      END_STATE();
    case 875:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(659);
      END_STATE();
    case 876:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(686);
      END_STATE();
    case 877:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(685);
      END_STATE();
    case 878:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(824);
      END_STATE();
    case 879:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1134);
      END_STATE();
    case 880:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(947);
      END_STATE();
    case 881:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(688);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1151);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(649);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(854);
      END_STATE();
    case 882:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(953);
      END_STATE();
    case 883:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1156);
      END_STATE();
    case 884:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(954);
      END_STATE();
    case 885:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1157);
      END_STATE();
    case 886:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1072);
      END_STATE();
    case 887:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1054);
      END_STATE();
    case 888:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1245);
      END_STATE();
    case 889:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(820);
      END_STATE();
    case 890:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1124);
      END_STATE();
    case 891:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(849);
      END_STATE();
    case 892:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(851);
      END_STATE();
    case 893:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(698);
      END_STATE();
    case 894:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(852);
      END_STATE();
    case 895:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(853);
      END_STATE();
    case 896:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 897:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1159);
      END_STATE();
    case 898:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1160);
      END_STATE();
    case 899:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1161);
      END_STATE();
    case 900:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1442);
      END_STATE();
    case 901:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1453);
      END_STATE();
    case 902:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1023);
      END_STATE();
    case 903:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(816);
      END_STATE();
    case 904:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1028);
      END_STATE();
    case 905:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(677);
      END_STATE();
    case 906:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(981);
      END_STATE();
    case 907:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(825);
      END_STATE();
    case 908:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1031);
      END_STATE();
    case 909:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(673);
      END_STATE();
    case 910:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1033);
      END_STATE();
    case 911:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1034);
      END_STATE();
    case 912:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1035);
      END_STATE();
    case 913:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1135);
      END_STATE();
    case 914:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1146);
      END_STATE();
    case 915:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1147);
      END_STATE();
    case 916:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1150);
      END_STATE();
    case 917:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1152);
      END_STATE();
    case 918:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(860);
      END_STATE();
    case 919:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(862);
      END_STATE();
    case 920:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(863);
      END_STATE();
    case 921:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(864);
      END_STATE();
    case 922:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(865);
      END_STATE();
    case 923:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(866);
      END_STATE();
    case 924:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(867);
      END_STATE();
    case 925:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1051);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1187);
      END_STATE();
    case 926:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 927:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 928:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      END_STATE();
    case 929:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1326);
      END_STATE();
    case 930:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1378);
      END_STATE();
    case 931:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1168);
      END_STATE();
    case 932:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1290);
      END_STATE();
    case 933:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1292);
      END_STATE();
    case 934:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(998);
      END_STATE();
    case 935:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 936:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1082);
      END_STATE();
    case 937:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1009);
      END_STATE();
    case 938:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1325);
      END_STATE();
    case 939:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1085);
      END_STATE();
    case 940:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(827);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(700);
      END_STATE();
    case 941:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 942:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 943:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1066);
      END_STATE();
    case 944:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      END_STATE();
    case 945:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1070);
      END_STATE();
    case 946:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1032);
      END_STATE();
    case 947:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 948:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1075);
      END_STATE();
    case 949:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1153);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(946);
      END_STATE();
    case 950:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 951:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1121);
      END_STATE();
    case 952:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 953:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1007);
      END_STATE();
    case 954:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1008);
      END_STATE();
    case 955:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1273);
      END_STATE();
    case 956:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1126);
      END_STATE();
    case 957:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1127);
      END_STATE();
    case 958:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1129);
      END_STATE();
    case 959:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1130);
      END_STATE();
    case 960:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1144);
      END_STATE();
    case 961:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1131);
      END_STATE();
    case 962:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1132);
      END_STATE();
    case 963:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1329);
      END_STATE();
    case 964:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1336);
      END_STATE();
    case 965:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1369);
      END_STATE();
    case 966:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1154);
      END_STATE();
    case 967:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1330);
      END_STATE();
    case 968:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1331);
      END_STATE();
    case 969:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1333);
      END_STATE();
    case 970:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 971:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 972:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(753);
      END_STATE();
    case 973:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      END_STATE();
    case 974:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      END_STATE();
    case 975:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 976:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 977:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(805);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 978:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(651);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(662);
      END_STATE();
    case 979:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(807);
      END_STATE();
    case 980:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1011);
      END_STATE();
    case 981:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(812);
      END_STATE();
    case 982:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1098);
      END_STATE();
    case 983:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1086);
      END_STATE();
    case 984:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(914);
      END_STATE();
    case 985:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 986:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1027);
      END_STATE();
    case 987:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1482);
      END_STATE();
    case 988:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 989:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(896);
      END_STATE();
    case 990:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1419);
      END_STATE();
    case 991:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      END_STATE();
    case 992:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1255);
      END_STATE();
    case 993:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(890);
      END_STATE();
    case 994:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(982);
      END_STATE();
    case 995:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(724);
      END_STATE();
    case 996:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(822);
      END_STATE();
    case 997:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1013);
      END_STATE();
    case 998:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1391);
      END_STATE();
    case 999:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 1000:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1392);
      END_STATE();
    case 1001:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 1002:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 1003:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(995);
      END_STATE();
    case 1004:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 1005:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 1006:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1250);
      END_STATE();
    case 1007:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(800);
      END_STATE();
    case 1008:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 1009:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1368);
      END_STATE();
    case 1010:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(939);
      END_STATE();
    case 1011:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1148);
      END_STATE();
    case 1012:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1149);
      END_STATE();
    case 1013:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      END_STATE();
    case 1014:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(917);
      END_STATE();
    case 1015:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 1016:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 1017:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(899);
      END_STATE();
    case 1018:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 1019:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1170);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1068);
      END_STATE();
    case 1020:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 1021:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1167);
      END_STATE();
    case 1022:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1029);
      END_STATE();
    case 1023:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1116);
      END_STATE();
    case 1024:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(934);
      END_STATE();
    case 1025:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1143);
      END_STATE();
    case 1026:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(794);
      END_STATE();
    case 1027:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(668);
      END_STATE();
    case 1028:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1238);
      END_STATE();
    case 1029:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(684);
      END_STATE();
    case 1030:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(683);
      END_STATE();
    case 1031:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1242);
      END_STATE();
    case 1032:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(830);
      END_STATE();
    case 1033:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1246);
      END_STATE();
    case 1034:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1249);
      END_STATE();
    case 1035:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1252);
      END_STATE();
    case 1036:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(801);
      END_STATE();
    case 1037:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(841);
      END_STATE();
    case 1038:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(932);
      END_STATE();
    case 1039:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1175);
      END_STATE();
    case 1040:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1181);
      END_STATE();
    case 1041:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(964);
      END_STATE();
    case 1042:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(689);
      END_STATE();
    case 1043:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(856);
      END_STATE();
    case 1044:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(691);
      END_STATE();
    case 1045:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 1046:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(697);
      END_STATE();
    case 1047:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1042);
      END_STATE();
    case 1048:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1044);
      END_STATE();
    case 1049:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1045);
      END_STATE();
    case 1050:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1046);
      END_STATE();
    case 1051:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 1052:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1435);
      END_STATE();
    case 1053:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1474);
      END_STATE();
    case 1054:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1447);
      END_STATE();
    case 1055:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1504);
      END_STATE();
    case 1056:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1462);
      END_STATE();
    case 1057:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1502);
      END_STATE();
    case 1058:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1456);
      END_STATE();
    case 1059:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1466);
      END_STATE();
    case 1060:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1476);
      END_STATE();
    case 1061:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1477);
      END_STATE();
    case 1062:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 1063:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 1064:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(927);
      END_STATE();
    case 1065:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(942);
      END_STATE();
    case 1066:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      END_STATE();
    case 1067:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1117);
      END_STATE();
    case 1068:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 1069:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1328);
      END_STATE();
    case 1070:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1334);
      END_STATE();
    case 1071:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 1072:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 1073:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1000);
      END_STATE();
    case 1074:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 1075:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1305);
      END_STATE();
    case 1076:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(768);
      END_STATE();
    case 1077:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1293);
      END_STATE();
    case 1078:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 1079:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1294);
      END_STATE();
    case 1080:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 1081:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1295);
      END_STATE();
    case 1082:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1240);
      END_STATE();
    case 1083:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1287);
      END_STATE();
    case 1084:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 1085:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 1086:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1136);
      END_STATE();
    case 1087:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 1088:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 1089:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1339);
      END_STATE();
    case 1090:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1313);
      END_STATE();
    case 1091:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 1092:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(983);
      END_STATE();
    case 1093:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(879);
      END_STATE();
    case 1094:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1335);
      END_STATE();
    case 1095:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(692);
      END_STATE();
    case 1096:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      END_STATE();
    case 1097:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 1098:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1166);
      END_STATE();
    case 1099:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1347);
      END_STATE();
    case 1100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1348);
      END_STATE();
    case 1101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1349);
      END_STATE();
    case 1102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1350);
      END_STATE();
    case 1103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1351);
      END_STATE();
    case 1104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1352);
      END_STATE();
    case 1105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1353);
      END_STATE();
    case 1106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1254);
      END_STATE();
    case 1107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(913);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1020);
      END_STATE();
    case 1108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 1109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1379);
      END_STATE();
    case 1110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1376);
      END_STATE();
    case 1111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 1112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1065);
      END_STATE();
    case 1113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1022);
      END_STATE();
    case 1114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(986);
      END_STATE();
    case 1115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(872);
      END_STATE();
    case 1116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(779);
      END_STATE();
    case 1117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1205);
      END_STATE();
    case 1118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1234);
      END_STATE();
    case 1119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 1120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1179);
      END_STATE();
    case 1121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1052);
      END_STATE();
    case 1122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 1123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1198);
      END_STATE();
    case 1124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1219);
      END_STATE();
    case 1125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1193);
      END_STATE();
    case 1126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1056);
      END_STATE();
    case 1127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1057);
      END_STATE();
    case 1128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 1129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 1130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 1131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1060);
      END_STATE();
    case 1132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1061);
      END_STATE();
    case 1133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1208);
      END_STATE();
    case 1134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1230);
      END_STATE();
    case 1135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1260);
      END_STATE();
    case 1136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1380);
      END_STATE();
    case 1137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1030);
      END_STATE();
    case 1139:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1083);
      END_STATE();
    case 1140:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1317);
      END_STATE();
    case 1141:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 1142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1272);
      END_STATE();
    case 1143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1319);
      END_STATE();
    case 1144:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 1145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 1146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1277);
      END_STATE();
    case 1147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1267);
      END_STATE();
    case 1148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 1149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 1150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1274);
      END_STATE();
    case 1151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1275);
      END_STATE();
    case 1152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1276);
      END_STATE();
    case 1153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1088);
      END_STATE();
    case 1154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 1155:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1040);
      END_STATE();
    case 1156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1222);
      END_STATE();
    case 1157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1225);
      END_STATE();
    case 1158:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1224);
      END_STATE();
    case 1159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1227);
      END_STATE();
    case 1160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1228);
      END_STATE();
    case 1161:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1229);
      END_STATE();
    case 1162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1047);
      END_STATE();
    case 1163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1048);
      END_STATE();
    case 1164:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1049);
      END_STATE();
    case 1165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1050);
      END_STATE();
    case 1166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1386);
      END_STATE();
    case 1167:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1524);
      END_STATE();
    case 1168:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1431);
      END_STATE();
    case 1169:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(903);
      END_STATE();
    case 1170:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1223);
      END_STATE();
    case 1171:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(926);
      END_STATE();
    case 1172:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(813);
      END_STATE();
    case 1173:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1221);
      END_STATE();
    case 1174:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      END_STATE();
    case 1175:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1316);
      END_STATE();
    case 1176:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(859);
      END_STATE();
    case 1177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 1178:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 1179:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(831);
      END_STATE();
    case 1180:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1204);
      END_STATE();
    case 1181:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1318);
      END_STATE();
    case 1182:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1209);
      END_STATE();
    case 1183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1320);
      END_STATE();
    case 1184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1139);
      END_STATE();
    case 1185:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1354);
      END_STATE();
    case 1186:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1118);
      END_STATE();
    case 1187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 1188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1448);
      END_STATE();
    case 1189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1438);
      END_STATE();
    case 1190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1520);
      END_STATE();
    case 1191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 1192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1301);
      END_STATE();
    case 1193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1382);
      END_STATE();
    case 1194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 1195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1289);
      END_STATE();
    case 1196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 1197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1114);
      END_STATE();
    case 1198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 1199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1115);
      END_STATE();
    case 1200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(877);
      END_STATE();
    case 1201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1235);
      END_STATE();
    case 1202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 1203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 1204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 1205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 1206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 1207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1266);
      END_STATE();
    case 1208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 1209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1155);
      END_STATE();
    case 1210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 1211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 1212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 1213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 1214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 1215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1173);
      END_STATE();
    case 1216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 1217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1210);
      END_STATE();
    case 1218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 1219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 1220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 1221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 1222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1383);
      END_STATE();
    case 1223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(848);
      END_STATE();
    case 1224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 1225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1385);
      END_STATE();
    case 1226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 1227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 1228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(968);
      END_STATE();
    case 1229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 1230:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1012);
      END_STATE();
    case 1231:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 1232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1499);
      END_STATE();
    case 1233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      END_STATE();
    case 1234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1475);
      END_STATE();
    case 1235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1432);
      END_STATE();
    case 1236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1416);
      END_STATE();
    case 1237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1468);
      END_STATE();
    case 1238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1478);
      END_STATE();
    case 1239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1527);
      END_STATE();
    case 1240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1418);
      END_STATE();
    case 1241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1465);
      END_STATE();
    case 1242:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1467);
      END_STATE();
    case 1243:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1436);
      END_STATE();
    case 1244:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1421);
      END_STATE();
    case 1245:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1434);
      END_STATE();
    case 1246:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1427);
      END_STATE();
    case 1247:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1501);
      END_STATE();
    case 1248:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1522);
      END_STATE();
    case 1249:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1528);
      END_STATE();
    case 1250:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1463);
      END_STATE();
    case 1251:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1422);
      END_STATE();
    case 1252:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1464);
      END_STATE();
    case 1253:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1381);
      END_STATE();
    case 1254:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1288);
      END_STATE();
    case 1255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      END_STATE();
    case 1256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1253);
      END_STATE();
    case 1257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(906);
      END_STATE();
    case 1258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(875);
      END_STATE();
    case 1259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(951);
      END_STATE();
    case 1260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1309);
      END_STATE();
    case 1261:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1258);
      END_STATE();
    case 1262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1184);
      END_STATE();
    case 1263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(901);
      END_STATE();
    case 1264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      END_STATE();
    case 1265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 1266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(955);
      END_STATE();
    case 1267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1312);
      END_STATE();
    case 1268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      END_STATE();
    case 1269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1236);
      END_STATE();
    case 1270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(815);
      END_STATE();
    case 1271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1239);
      END_STATE();
    case 1272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(796);
      END_STATE();
    case 1273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1297);
      END_STATE();
    case 1274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1314);
      END_STATE();
    case 1275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1327);
      END_STATE();
    case 1276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1299);
      END_STATE();
    case 1277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1307);
      END_STATE();
    case 1278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1308);
      END_STATE();
    case 1279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1122);
      END_STATE();
    case 1280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1323);
      END_STATE();
    case 1281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      END_STATE();
    case 1282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(944);
      END_STATE();
    case 1283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1384);
      END_STATE();
    case 1284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1283);
      END_STATE();
    case 1285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1337);
      END_STATE();
    case 1286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(884);
      END_STATE();
    case 1287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(870);
      END_STATE();
    case 1288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1407);
      END_STATE();
    case 1289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1521);
      END_STATE();
    case 1290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 1291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(949);
      END_STATE();
    case 1292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(940);
      END_STATE();
    case 1293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1457);
      END_STATE();
    case 1294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1471);
      END_STATE();
    case 1295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1409);
      END_STATE();
    case 1296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1437);
      END_STATE();
    case 1297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1441);
      END_STATE();
    case 1298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1459);
      END_STATE();
    case 1299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1500);
      END_STATE();
    case 1300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      END_STATE();
    case 1301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      END_STATE();
    case 1302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1365);
      END_STATE();
    case 1303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(907);
      END_STATE();
    case 1304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(900);
      END_STATE();
    case 1305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(905);
      END_STATE();
    case 1306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1398);
      END_STATE();
    case 1307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(931);
      END_STATE();
    case 1308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      END_STATE();
    case 1310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(930);
      END_STATE();
    case 1311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(845);
      END_STATE();
    case 1312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1264);
      END_STATE();
    case 1313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(941);
      END_STATE();
    case 1314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1286);
      END_STATE();
    case 1315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(842);
      END_STATE();
    case 1316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1243);
      END_STATE();
    case 1317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1244);
      END_STATE();
    case 1318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1247);
      END_STATE();
    case 1319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      END_STATE();
    case 1320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(829);
      END_STATE();
    case 1321:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      END_STATE();
    case 1322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(823);
      END_STATE();
    case 1323:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(835);
      END_STATE();
    case 1324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(838);
      END_STATE();
    case 1325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(904);
      END_STATE();
    case 1326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      END_STATE();
    case 1327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1087);
      END_STATE();
    case 1328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      END_STATE();
    case 1329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(908);
      END_STATE();
    case 1330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(910);
      END_STATE();
    case 1331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(911);
      END_STATE();
    case 1332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1321);
      END_STATE();
    case 1333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(912);
      END_STATE();
    case 1334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(828);
      END_STATE();
    case 1335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(833);
      END_STATE();
    case 1336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1324);
      END_STATE();
    case 1337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(837);
      END_STATE();
    case 1338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(966);
      END_STATE();
    case 1339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(952);
      END_STATE();
    case 1340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(956);
      END_STATE();
    case 1341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(957);
      END_STATE();
    case 1342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(958);
      END_STATE();
    case 1343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(959);
      END_STATE();
    case 1344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(960);
      END_STATE();
    case 1345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(961);
      END_STATE();
    case 1346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(962);
      END_STATE();
    case 1347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(970);
      END_STATE();
    case 1348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(971);
      END_STATE();
    case 1349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(972);
      END_STATE();
    case 1350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(973);
      END_STATE();
    case 1351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(974);
      END_STATE();
    case 1352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(975);
      END_STATE();
    case 1353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(976);
      END_STATE();
    case 1354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(861);
      END_STATE();
    case 1355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(918);
      END_STATE();
    case 1356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(919);
      END_STATE();
    case 1357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(920);
      END_STATE();
    case 1358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(921);
      END_STATE();
    case 1359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(922);
      END_STATE();
    case 1360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(923);
      END_STATE();
    case 1361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(924);
      END_STATE();
    case 1362:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1021);
      END_STATE();
    case 1363:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1092);
      END_STATE();
    case 1364:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1303);
      END_STATE();
    case 1365:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1214);
      END_STATE();
    case 1366:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1296);
      END_STATE();
    case 1367:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1298);
      END_STATE();
    case 1368:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1213);
      END_STATE();
    case 1369:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1370:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1355);
      END_STATE();
    case 1371:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1356);
      END_STATE();
    case 1372:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1357);
      END_STATE();
    case 1373:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1359);
      END_STATE();
    case 1374:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1360);
      END_STATE();
    case 1375:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1361);
      END_STATE();
    case 1376:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(935);
      END_STATE();
    case 1377:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(818);
      END_STATE();
    case 1378:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(869);
      END_STATE();
    case 1379:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1096);
      END_STATE();
    case 1380:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1053);
      END_STATE();
    case 1381:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1123);
      END_STATE();
    case 1382:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(675);
      END_STATE();
    case 1383:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(676);
      END_STATE();
    case 1384:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1133);
      END_STATE();
    case 1385:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(678);
      END_STATE();
    case 1386:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1097);
      END_STATE();
    case 1387:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1390);
      END_STATE();
    case 1388:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(650);
      END_STATE();
    case 1389:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(778);
      END_STATE();
    case 1390:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(748);
      END_STATE();
    case 1391:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1412);
      END_STATE();
    case 1392:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1470);
      END_STATE();
    case 1393:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(664);
      END_STATE();
    case 1394:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1282);
      END_STATE();
    case 1395:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1306);
      END_STATE();
    case 1396:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(658);
      END_STATE();
    case 1397:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1278);
      END_STATE();
    case 1398:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1177);
      END_STATE();
    case 1399:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(797);
      END_STATE();
    case 1400:
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1531);
      END_STATE();
    case 1401:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1531);
      END_STATE();
    case 1402:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1551);
      END_STATE();
    case 1403:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 1404:
      if (eof) ADVANCE(1405);
      if (lookahead == '\n') ADVANCE(1580);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1484);
      if (lookahead == '#') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1443);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == ',') ADVANCE(1425);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '0') ADVANCE(1569);
      if (lookahead == ':') ADVANCE(1426);
      if (lookahead == '?') ADVANCE(1486);
      if (lookahead == '@') ADVANCE(1525);
      if (lookahead == 'A') ADVANCE(770);
      if (lookahead == 'C') ADVANCE(641);
      if (lookahead == 'D') ADVANCE(225);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == 'F') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(1106);
      if (lookahead == 'I') ADVANCE(236);
      if (lookahead == 'M') ADVANCE(645);
      if (lookahead == 'N') ADVANCE(1107);
      if (lookahead == 'Q') ADVANCE(257);
      if (lookahead == 'S') ADVANCE(1487);
      if (lookahead == 'V') ADVANCE(227);
      if (lookahead == '^') ADVANCE(1433);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'f') ADVANCE(925);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead == 'm') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == 'w') ADVANCE(360);
      if (lookahead == 'y') ADVANCE(359);
      if (lookahead == '}') ADVANCE(1555);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(642);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(992);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(719);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(648);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1570);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(663);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_host_declaration_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(663);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(810);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__add_keys_to_agent_token1);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__address_family_token1);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_inet);
      if (lookahead == '6') ADVANCE(1414);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_inet6);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__batch_mode_token1);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__bind_address_token1);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__bind_interface_token1);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__canonical_domains_token1);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__canonicalize_fallback_local_token1);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__canonicalize_hostname_token1);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__canonicalize_max_dots_token1);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__canonicalize_permitted_cnames_token1);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__ca_signature_algorithms_token1);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__certificate_file_token1);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__check_host_ip_token1);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__ciphers_token1);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__clear_all_forwardings_token1);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__compression_token1);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__connection_attempts_token1);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__connect_timeout_token1);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__control_master_token1);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_autoask);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__control_persist_token1);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__control_path_token1);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__enable_escape_command_line_token1);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__enable_ssh_keysign_token1);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__escape_char_token1);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__escape_char_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1449);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__exit_on_forward_failure_token1);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__fingerprint_hash_token1);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__fork_after_authentication_token1);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__forward_agent_token1);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__forward_x11_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__forward_x11_timeout_token1);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__forward_x11_trusted_token1);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__global_known_hosts_file_token1);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__gssapi_authentication_token1);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__gssapi_delegate_credentials_token1);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token1);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__hostbased_accepted_algorithms_token2);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__hostbased_authentication_token1);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__host_key_algorithms_token1);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__host_key_alias_token1);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__hostname_token1);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__identities_only_token1);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__identity_agent_token1);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_SSH_AUTH_SOCK);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__identity_file_token1);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__ignore_unknown_token1);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__ipqos_token1);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token1);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__kbd_interactive_authentication_token2);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__kex_algorithms_token1);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__known_hosts_command_token1);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__local_command_token1);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__local_forward_token1);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__log_level_token1);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__log_verbose_token1);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__log_verbose_value_token1);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == 'T') ADVANCE(1548);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1544);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1544);
      if (lookahead == 'H' ||
          lookahead == 'I' ||
          lookahead == 'K' ||
          lookahead == 'f' ||
          lookahead == 't') ADVANCE(1545);
      if (lookahead == 'C' ||
          lookahead == 'L' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'k' ||
          lookahead == 'l' ||
          lookahead == 'u') ADVANCE(1544);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1552);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '{') ADVANCE(1554);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1546);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1547);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1519);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1545);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1548);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__log_verbose_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__macs_token1);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__no_host_authentication_for_localhost_token1);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__number_of_password_prompts_token1);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__password_authentication_token1);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__permit_local_command_token1);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_token1);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'S') ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'e') ADVANCE(1513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'e') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'n') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'n') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'o') ADVANCE(1568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'o') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 's') ADVANCE(1566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == 'y') ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead == '{') ADVANCE(1553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__permit_remote_open_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__pkcs11_provider_token1);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__port_token1);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__preferred_authentications_token1);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__proxy_command_token1);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__proxy_jump_token1);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__proxy_jump_arg_token1);
      if (lookahead == 'S') ADVANCE(1526);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__proxy_use_fdpass_token1);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__pubkey_accepted_algorithms_token1);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_unbound);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_host_DASHbound);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym_ipqos);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym_verbosity);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_verbosity);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1532);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_authentication);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_cipher);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_kex);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_kex);
      if (lookahead == '@') ADVANCE(459);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_key_sig);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_key_sig);
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_mac);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(210);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_mac);
      if (lookahead == '-') ADVANCE(368);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_sig);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym__file_token_token1);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym__hosts_token_token1);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym__hostname_token_token1);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym__proxy_token_token1);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_token);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(1552);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym__var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1551);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1519);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'S') ADVANCE(231);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '{') ADVANCE(1552);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h') ADVANCE(1546);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'r') ADVANCE(1547);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__file_token_token1_character_set_1(lookahead)) ADVANCE(1544);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (aux_sym__hosts_token_token1_character_set_1(lookahead)) ADVANCE(1545);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym__file_string_token1);
      if (sym_token_character_set_1(lookahead)) ADVANCE(1548);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1135);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1518);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym__number);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1570);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_time_token5);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1576);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym__sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1577);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(1577);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1578);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1579);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1404},
  [2] = {.lex_state = 1404},
  [3] = {.lex_state = 1404},
  [4] = {.lex_state = 1404},
  [5] = {.lex_state = 1404},
  [6] = {.lex_state = 1404},
  [7] = {.lex_state = 1404},
  [8] = {.lex_state = 1404},
  [9] = {.lex_state = 1404},
  [10] = {.lex_state = 1404},
  [11] = {.lex_state = 1404},
  [12] = {.lex_state = 1404},
  [13] = {.lex_state = 1404},
  [14] = {.lex_state = 1404},
  [15] = {.lex_state = 1404},
  [16] = {.lex_state = 1404},
  [17] = {.lex_state = 1404},
  [18] = {.lex_state = 1404},
  [19] = {.lex_state = 1404},
  [20] = {.lex_state = 1404},
  [21] = {.lex_state = 1404},
  [22] = {.lex_state = 1404},
  [23] = {.lex_state = 1404},
  [24] = {.lex_state = 1404},
  [25] = {.lex_state = 1404},
  [26] = {.lex_state = 1404},
  [27] = {.lex_state = 1404},
  [28] = {.lex_state = 1404},
  [29] = {.lex_state = 1404},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 1404},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 1404},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 1404},
  [97] = {.lex_state = 1404},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 1404},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 1404},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 1404},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 28},
  [113] = {.lex_state = 1404},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 28},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 1404},
  [123] = {.lex_state = 1404},
  [124] = {.lex_state = 1404},
  [125] = {.lex_state = 1404},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 1404},
  [128] = {.lex_state = 1404},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 1404},
  [131] = {.lex_state = 1404},
  [132] = {.lex_state = 1404},
  [133] = {.lex_state = 1404},
  [134] = {.lex_state = 1404},
  [135] = {.lex_state = 1404},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 1404},
  [138] = {.lex_state = 1404},
  [139] = {.lex_state = 1404},
  [140] = {.lex_state = 1404},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 1404},
  [143] = {.lex_state = 1404},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 1404},
  [146] = {.lex_state = 1404},
  [147] = {.lex_state = 1404},
  [148] = {.lex_state = 1404},
  [149] = {.lex_state = 17},
  [150] = {.lex_state = 1404},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 1404},
  [153] = {.lex_state = 1404},
  [154] = {.lex_state = 1404},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 1404},
  [157] = {.lex_state = 1404},
  [158] = {.lex_state = 1404},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 1404},
  [162] = {.lex_state = 1404},
  [163] = {.lex_state = 1404},
  [164] = {.lex_state = 1404},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 1404},
  [167] = {.lex_state = 1404},
  [168] = {.lex_state = 1404},
  [169] = {.lex_state = 1404},
  [170] = {.lex_state = 1404},
  [171] = {.lex_state = 25},
  [172] = {.lex_state = 1404},
  [173] = {.lex_state = 1404},
  [174] = {.lex_state = 1404},
  [175] = {.lex_state = 1404},
  [176] = {.lex_state = 1404},
  [177] = {.lex_state = 1404},
  [178] = {.lex_state = 1404},
  [179] = {.lex_state = 1404},
  [180] = {.lex_state = 1404},
  [181] = {.lex_state = 38},
  [182] = {.lex_state = 1404},
  [183] = {.lex_state = 1404},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 1404},
  [188] = {.lex_state = 1404},
  [189] = {.lex_state = 1404},
  [190] = {.lex_state = 1404},
  [191] = {.lex_state = 1404},
  [192] = {.lex_state = 38},
  [193] = {.lex_state = 1404},
  [194] = {.lex_state = 1404},
  [195] = {.lex_state = 33},
  [196] = {.lex_state = 1404},
  [197] = {.lex_state = 1404},
  [198] = {.lex_state = 38},
  [199] = {.lex_state = 1404},
  [200] = {.lex_state = 38},
  [201] = {.lex_state = 1404},
  [202] = {.lex_state = 1404},
  [203] = {.lex_state = 33},
  [204] = {.lex_state = 38},
  [205] = {.lex_state = 38},
  [206] = {.lex_state = 249},
  [207] = {.lex_state = 1404},
  [208] = {.lex_state = 38},
  [209] = {.lex_state = 38},
  [210] = {.lex_state = 1404},
  [211] = {.lex_state = 38},
  [212] = {.lex_state = 38},
  [213] = {.lex_state = 38},
  [214] = {.lex_state = 38},
  [215] = {.lex_state = 38},
  [216] = {.lex_state = 38},
  [217] = {.lex_state = 1404},
  [218] = {.lex_state = 1404},
  [219] = {.lex_state = 1404},
  [220] = {.lex_state = 1404},
  [221] = {.lex_state = 38},
  [222] = {.lex_state = 38},
  [223] = {.lex_state = 1404},
  [224] = {.lex_state = 1404},
  [225] = {.lex_state = 1404},
  [226] = {.lex_state = 33},
  [227] = {.lex_state = 1404},
  [228] = {.lex_state = 1404},
  [229] = {.lex_state = 38},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 1404},
  [232] = {.lex_state = 38},
  [233] = {.lex_state = 38},
  [234] = {.lex_state = 1404},
  [235] = {.lex_state = 38},
  [236] = {.lex_state = 38},
  [237] = {.lex_state = 38},
  [238] = {.lex_state = 1404},
  [239] = {.lex_state = 38},
  [240] = {.lex_state = 1404},
  [241] = {.lex_state = 38},
  [242] = {.lex_state = 38},
  [243] = {.lex_state = 1404},
  [244] = {.lex_state = 1404},
  [245] = {.lex_state = 1404},
  [246] = {.lex_state = 38},
  [247] = {.lex_state = 38},
  [248] = {.lex_state = 38},
  [249] = {.lex_state = 1404},
  [250] = {.lex_state = 38},
  [251] = {.lex_state = 38},
  [252] = {.lex_state = 38},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 38},
  [255] = {.lex_state = 38},
  [256] = {.lex_state = 1404},
  [257] = {.lex_state = 38},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 1404},
  [260] = {.lex_state = 1404},
  [261] = {.lex_state = 38},
  [262] = {.lex_state = 38},
  [263] = {.lex_state = 1404},
  [264] = {.lex_state = 1404},
  [265] = {.lex_state = 1404},
  [266] = {.lex_state = 1404},
  [267] = {.lex_state = 1404},
  [268] = {.lex_state = 1404},
  [269] = {.lex_state = 1404},
  [270] = {.lex_state = 38},
  [271] = {.lex_state = 1404},
  [272] = {.lex_state = 1404},
  [273] = {.lex_state = 38},
  [274] = {.lex_state = 1404},
  [275] = {.lex_state = 38},
  [276] = {.lex_state = 1404},
  [277] = {.lex_state = 1404},
  [278] = {.lex_state = 38},
  [279] = {.lex_state = 1404},
  [280] = {.lex_state = 1404},
  [281] = {.lex_state = 1404},
  [282] = {.lex_state = 38},
  [283] = {.lex_state = 38},
  [284] = {.lex_state = 1404},
  [285] = {.lex_state = 25},
  [286] = {.lex_state = 1404},
  [287] = {.lex_state = 1404},
  [288] = {.lex_state = 1404},
  [289] = {.lex_state = 38},
  [290] = {.lex_state = 38},
  [291] = {.lex_state = 38},
  [292] = {.lex_state = 1404},
  [293] = {.lex_state = 38},
  [294] = {.lex_state = 1404},
  [295] = {.lex_state = 38},
  [296] = {.lex_state = 38},
  [297] = {.lex_state = 38},
  [298] = {.lex_state = 38},
  [299] = {.lex_state = 1404},
  [300] = {.lex_state = 38},
  [301] = {.lex_state = 1404},
  [302] = {.lex_state = 1404},
  [303] = {.lex_state = 38},
  [304] = {.lex_state = 1404},
  [305] = {.lex_state = 38},
  [306] = {.lex_state = 1404},
  [307] = {.lex_state = 38},
  [308] = {.lex_state = 38},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 1404},
  [311] = {.lex_state = 38},
  [312] = {.lex_state = 38},
  [313] = {.lex_state = 1404},
  [314] = {.lex_state = 1404},
  [315] = {.lex_state = 38},
  [316] = {.lex_state = 38},
  [317] = {.lex_state = 1404},
  [318] = {.lex_state = 38},
  [319] = {.lex_state = 1404},
  [320] = {.lex_state = 1404},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 38},
  [323] = {.lex_state = 1404},
  [324] = {.lex_state = 1404},
  [325] = {.lex_state = 38},
  [326] = {.lex_state = 38},
  [327] = {.lex_state = 1404},
  [328] = {.lex_state = 38},
  [329] = {.lex_state = 1404},
  [330] = {.lex_state = 1404},
  [331] = {.lex_state = 1404},
  [332] = {.lex_state = 1404},
  [333] = {.lex_state = 1404},
  [334] = {.lex_state = 1404},
  [335] = {.lex_state = 23},
  [336] = {.lex_state = 1404},
  [337] = {.lex_state = 1404},
  [338] = {.lex_state = 1404},
  [339] = {.lex_state = 1404},
  [340] = {.lex_state = 1404},
  [341] = {.lex_state = 1404},
  [342] = {.lex_state = 1404},
  [343] = {.lex_state = 1404},
  [344] = {.lex_state = 25},
  [345] = {.lex_state = 1404},
  [346] = {.lex_state = 24},
  [347] = {.lex_state = 1404},
  [348] = {.lex_state = 33},
  [349] = {.lex_state = 1404},
  [350] = {.lex_state = 1404},
  [351] = {.lex_state = 1404},
  [352] = {.lex_state = 1404},
  [353] = {.lex_state = 1404},
  [354] = {.lex_state = 1404},
  [355] = {.lex_state = 1404},
  [356] = {.lex_state = 1404},
  [357] = {.lex_state = 1404},
  [358] = {.lex_state = 1404},
  [359] = {.lex_state = 1404},
  [360] = {.lex_state = 1404},
  [361] = {.lex_state = 1404},
  [362] = {.lex_state = 1404},
  [363] = {.lex_state = 1404},
  [364] = {.lex_state = 1404},
  [365] = {.lex_state = 1404},
  [366] = {.lex_state = 1404},
  [367] = {.lex_state = 1404},
  [368] = {.lex_state = 1404},
  [369] = {.lex_state = 1404},
  [370] = {.lex_state = 1404},
  [371] = {.lex_state = 1404},
  [372] = {.lex_state = 1404},
  [373] = {.lex_state = 1404},
  [374] = {.lex_state = 1404},
  [375] = {.lex_state = 1404},
  [376] = {.lex_state = 1404},
  [377] = {.lex_state = 1404},
  [378] = {.lex_state = 1404},
  [379] = {.lex_state = 1404},
  [380] = {.lex_state = 1404},
  [381] = {.lex_state = 1404},
  [382] = {.lex_state = 1404},
  [383] = {.lex_state = 1404},
  [384] = {.lex_state = 1404},
  [385] = {.lex_state = 1404},
  [386] = {.lex_state = 1404},
  [387] = {.lex_state = 1404},
  [388] = {.lex_state = 1404},
  [389] = {.lex_state = 1404},
  [390] = {.lex_state = 1404},
  [391] = {.lex_state = 1404},
  [392] = {.lex_state = 1404},
  [393] = {.lex_state = 1404},
  [394] = {.lex_state = 1404},
  [395] = {.lex_state = 1404},
  [396] = {.lex_state = 1404},
  [397] = {.lex_state = 1404},
  [398] = {.lex_state = 1404},
  [399] = {.lex_state = 1404},
  [400] = {.lex_state = 1404},
  [401] = {.lex_state = 1404},
  [402] = {.lex_state = 1404},
  [403] = {.lex_state = 1404},
  [404] = {.lex_state = 1404},
  [405] = {.lex_state = 1404},
  [406] = {.lex_state = 1404},
  [407] = {.lex_state = 1404},
  [408] = {.lex_state = 1404},
  [409] = {.lex_state = 1404},
  [410] = {.lex_state = 1404},
  [411] = {.lex_state = 1404},
  [412] = {.lex_state = 1404},
  [413] = {.lex_state = 1404},
  [414] = {.lex_state = 1404},
  [415] = {.lex_state = 1404},
  [416] = {.lex_state = 1404},
  [417] = {.lex_state = 1404},
  [418] = {.lex_state = 1404},
  [419] = {.lex_state = 1404},
  [420] = {.lex_state = 1404},
  [421] = {.lex_state = 1404},
  [422] = {.lex_state = 1404},
  [423] = {.lex_state = 1404},
  [424] = {.lex_state = 1404},
  [425] = {.lex_state = 1404},
  [426] = {.lex_state = 1404},
  [427] = {.lex_state = 1404},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 11},
  [430] = {.lex_state = 1404},
  [431] = {.lex_state = 1404},
  [432] = {.lex_state = 1404},
  [433] = {.lex_state = 1404},
  [434] = {.lex_state = 1404},
  [435] = {.lex_state = 1404},
  [436] = {.lex_state = 1404},
  [437] = {.lex_state = 1404},
  [438] = {.lex_state = 1404},
  [439] = {.lex_state = 1404},
  [440] = {.lex_state = 1404},
  [441] = {.lex_state = 1404},
  [442] = {.lex_state = 1404},
  [443] = {.lex_state = 1404},
  [444] = {.lex_state = 1404},
  [445] = {.lex_state = 37},
  [446] = {.lex_state = 1404},
  [447] = {.lex_state = 1404},
  [448] = {.lex_state = 1404},
  [449] = {.lex_state = 1404},
  [450] = {.lex_state = 1404},
  [451] = {.lex_state = 1404},
  [452] = {.lex_state = 1404},
  [453] = {.lex_state = 1404},
  [454] = {.lex_state = 1404},
  [455] = {.lex_state = 1404},
  [456] = {.lex_state = 1404},
  [457] = {.lex_state = 1404},
  [458] = {.lex_state = 1404},
  [459] = {.lex_state = 1404},
  [460] = {.lex_state = 1404},
  [461] = {.lex_state = 1404},
  [462] = {.lex_state = 1404},
  [463] = {.lex_state = 1404},
  [464] = {.lex_state = 1404},
  [465] = {.lex_state = 1404},
  [466] = {.lex_state = 1404},
  [467] = {.lex_state = 1404},
  [468] = {.lex_state = 1404},
  [469] = {.lex_state = 1404},
  [470] = {.lex_state = 1404},
  [471] = {.lex_state = 1404},
  [472] = {.lex_state = 1404},
  [473] = {.lex_state = 1404},
  [474] = {.lex_state = 1404},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 1404},
  [477] = {.lex_state = 1404},
  [478] = {.lex_state = 1404},
  [479] = {.lex_state = 1404},
  [480] = {.lex_state = 1404},
  [481] = {.lex_state = 1404},
  [482] = {.lex_state = 1404},
  [483] = {.lex_state = 1404},
  [484] = {.lex_state = 1404},
  [485] = {.lex_state = 1404},
  [486] = {.lex_state = 1404},
  [487] = {.lex_state = 1404},
  [488] = {.lex_state = 260},
  [489] = {.lex_state = 1404},
  [490] = {.lex_state = 1404},
  [491] = {.lex_state = 1404},
  [492] = {.lex_state = 1404},
  [493] = {.lex_state = 1404},
  [494] = {.lex_state = 1404},
  [495] = {.lex_state = 1404},
  [496] = {.lex_state = 1404},
  [497] = {.lex_state = 1404},
  [498] = {.lex_state = 1404},
  [499] = {.lex_state = 1404},
  [500] = {.lex_state = 1404},
  [501] = {.lex_state = 1404},
  [502] = {.lex_state = 1404},
  [503] = {.lex_state = 1404},
  [504] = {.lex_state = 1404},
  [505] = {.lex_state = 1404},
  [506] = {.lex_state = 1404},
  [507] = {.lex_state = 1404},
  [508] = {.lex_state = 1404},
  [509] = {.lex_state = 1404},
  [510] = {.lex_state = 1404},
  [511] = {.lex_state = 1404},
  [512] = {.lex_state = 1404},
  [513] = {.lex_state = 1404},
  [514] = {.lex_state = 1404},
  [515] = {.lex_state = 1404},
  [516] = {.lex_state = 1404},
  [517] = {.lex_state = 1404},
  [518] = {.lex_state = 1404},
  [519] = {.lex_state = 1404},
  [520] = {.lex_state = 1404},
  [521] = {.lex_state = 1404},
  [522] = {.lex_state = 1404},
  [523] = {.lex_state = 1404},
  [524] = {.lex_state = 1404},
  [525] = {.lex_state = 11},
  [526] = {.lex_state = 1403},
  [527] = {.lex_state = 1402},
  [528] = {.lex_state = 1404},
  [529] = {.lex_state = 11},
  [530] = {.lex_state = 1404},
  [531] = {.lex_state = 1404},
  [532] = {.lex_state = 1404},
  [533] = {.lex_state = 1404},
  [534] = {.lex_state = 11},
  [535] = {.lex_state = 1402},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 1404},
  [538] = {.lex_state = 38},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 1402},
  [541] = {.lex_state = 1402},
  [542] = {.lex_state = 1404},
  [543] = {.lex_state = 1404},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 1404},
  [547] = {.lex_state = 1404},
  [548] = {.lex_state = 1402},
  [549] = {.lex_state = 1404},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 1404},
  [552] = {.lex_state = 11},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 38},
  [555] = {.lex_state = 38},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 1404},
  [559] = {.lex_state = 38},
  [560] = {.lex_state = 11},
  [561] = {.lex_state = 1404},
  [562] = {.lex_state = 38},
  [563] = {.lex_state = 1404},
  [564] = {.lex_state = 1404},
  [565] = {.lex_state = 1404},
  [566] = {.lex_state = 1404},
  [567] = {.lex_state = 1404},
  [568] = {.lex_state = 1404},
  [569] = {.lex_state = 1404},
  [570] = {.lex_state = 1404},
  [571] = {.lex_state = 11},
  [572] = {.lex_state = 1402},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 1402},
  [575] = {.lex_state = 0},
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
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(553),
    [sym_host_declaration] = STATE(3),
    [sym_parameter] = STATE(416),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(139),
    [sym__space] = ACTIONS(141),
    [sym__eol] = ACTIONS(143),
  },
  [2] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(416),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_host_declaration_token1] = ACTIONS(147),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(150),
    [aux_sym__address_family_token1] = ACTIONS(153),
    [aux_sym__batch_mode_token1] = ACTIONS(156),
    [aux_sym__bind_address_token1] = ACTIONS(159),
    [aux_sym__bind_interface_token1] = ACTIONS(162),
    [aux_sym__canonical_domains_token1] = ACTIONS(165),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(168),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(171),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(174),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(177),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(180),
    [aux_sym__certificate_file_token1] = ACTIONS(183),
    [aux_sym__check_host_ip_token1] = ACTIONS(186),
    [aux_sym__ciphers_token1] = ACTIONS(189),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(192),
    [aux_sym__compression_token1] = ACTIONS(195),
    [aux_sym__connection_attempts_token1] = ACTIONS(198),
    [aux_sym__connect_timeout_token1] = ACTIONS(201),
    [aux_sym__control_master_token1] = ACTIONS(204),
    [aux_sym__control_persist_token1] = ACTIONS(207),
    [aux_sym__control_path_token1] = ACTIONS(210),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(213),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(216),
    [aux_sym__escape_char_token1] = ACTIONS(219),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(222),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(225),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(228),
    [aux_sym__forward_agent_token1] = ACTIONS(231),
    [aux_sym__forward_x11_token1] = ACTIONS(234),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(237),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(240),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(243),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(246),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(249),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(252),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(252),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(255),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(258),
    [aux_sym__host_key_alias_token1] = ACTIONS(261),
    [aux_sym__hostname_token1] = ACTIONS(264),
    [aux_sym__identities_only_token1] = ACTIONS(267),
    [aux_sym__identity_agent_token1] = ACTIONS(270),
    [aux_sym__identity_file_token1] = ACTIONS(273),
    [aux_sym__ignore_unknown_token1] = ACTIONS(276),
    [aux_sym__ipqos_token1] = ACTIONS(279),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(282),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(282),
    [aux_sym__kex_algorithms_token1] = ACTIONS(285),
    [aux_sym__known_hosts_command_token1] = ACTIONS(288),
    [aux_sym__local_command_token1] = ACTIONS(291),
    [aux_sym__local_forward_token1] = ACTIONS(294),
    [aux_sym__log_level_token1] = ACTIONS(297),
    [aux_sym__log_verbose_token1] = ACTIONS(300),
    [aux_sym__macs_token1] = ACTIONS(303),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(306),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(309),
    [aux_sym__password_authentication_token1] = ACTIONS(312),
    [aux_sym__permit_local_command_token1] = ACTIONS(315),
    [aux_sym__permit_remote_open_token1] = ACTIONS(318),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(321),
    [aux_sym__port_token1] = ACTIONS(324),
    [aux_sym__preferred_authentications_token1] = ACTIONS(327),
    [aux_sym__proxy_command_token1] = ACTIONS(330),
    [aux_sym__proxy_jump_token1] = ACTIONS(333),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(336),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(339),
    [anon_sym_unbound] = ACTIONS(342),
    [anon_sym_host_DASHbound] = ACTIONS(342),
    [anon_sym_yes] = ACTIONS(342),
    [anon_sym_no] = ACTIONS(345),
    [sym_comment] = ACTIONS(348),
    [sym__space] = ACTIONS(351),
    [sym__eol] = ACTIONS(354),
  },
  [3] = {
    [sym_host_declaration] = STATE(2),
    [sym_parameter] = STATE(416),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(357),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(139),
    [sym__space] = ACTIONS(141),
    [sym__eol] = ACTIONS(359),
  },
  [4] = {
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_host_declaration_token1] = ACTIONS(363),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
    [sym__eol] = ACTIONS(361),
  },
  [5] = {
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
    [aux_sym__declarations_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym_host_declaration_token1] = ACTIONS(371),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(373),
    [aux_sym__address_family_token1] = ACTIONS(376),
    [aux_sym__batch_mode_token1] = ACTIONS(379),
    [aux_sym__bind_address_token1] = ACTIONS(382),
    [aux_sym__bind_interface_token1] = ACTIONS(385),
    [aux_sym__canonical_domains_token1] = ACTIONS(388),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(391),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(394),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(397),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(400),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(403),
    [aux_sym__certificate_file_token1] = ACTIONS(406),
    [aux_sym__check_host_ip_token1] = ACTIONS(409),
    [aux_sym__ciphers_token1] = ACTIONS(412),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(415),
    [aux_sym__compression_token1] = ACTIONS(418),
    [aux_sym__connection_attempts_token1] = ACTIONS(421),
    [aux_sym__connect_timeout_token1] = ACTIONS(424),
    [aux_sym__control_master_token1] = ACTIONS(427),
    [aux_sym__control_persist_token1] = ACTIONS(430),
    [aux_sym__control_path_token1] = ACTIONS(433),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(436),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(439),
    [aux_sym__escape_char_token1] = ACTIONS(442),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(445),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(448),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(451),
    [aux_sym__forward_agent_token1] = ACTIONS(454),
    [aux_sym__forward_x11_token1] = ACTIONS(457),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(460),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(463),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(466),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(469),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(472),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(475),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(475),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(478),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(481),
    [aux_sym__host_key_alias_token1] = ACTIONS(484),
    [aux_sym__hostname_token1] = ACTIONS(487),
    [aux_sym__identities_only_token1] = ACTIONS(490),
    [aux_sym__identity_agent_token1] = ACTIONS(493),
    [aux_sym__identity_file_token1] = ACTIONS(496),
    [aux_sym__ignore_unknown_token1] = ACTIONS(499),
    [aux_sym__ipqos_token1] = ACTIONS(502),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(505),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(505),
    [aux_sym__kex_algorithms_token1] = ACTIONS(508),
    [aux_sym__known_hosts_command_token1] = ACTIONS(511),
    [aux_sym__local_command_token1] = ACTIONS(514),
    [aux_sym__local_forward_token1] = ACTIONS(517),
    [aux_sym__log_level_token1] = ACTIONS(520),
    [aux_sym__log_verbose_token1] = ACTIONS(523),
    [aux_sym__macs_token1] = ACTIONS(526),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(529),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(532),
    [aux_sym__password_authentication_token1] = ACTIONS(535),
    [aux_sym__permit_local_command_token1] = ACTIONS(538),
    [aux_sym__permit_remote_open_token1] = ACTIONS(541),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(544),
    [aux_sym__port_token1] = ACTIONS(547),
    [aux_sym__preferred_authentications_token1] = ACTIONS(550),
    [aux_sym__proxy_command_token1] = ACTIONS(553),
    [aux_sym__proxy_jump_token1] = ACTIONS(556),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(559),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(562),
    [anon_sym_unbound] = ACTIONS(565),
    [anon_sym_host_DASHbound] = ACTIONS(565),
    [anon_sym_yes] = ACTIONS(565),
    [anon_sym_no] = ACTIONS(568),
    [sym_comment] = ACTIONS(571),
    [sym__space] = ACTIONS(574),
    [sym__eol] = ACTIONS(369),
  },
  [6] = {
    [sym__declarations] = STATE(24),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [7] = {
    [sym__declarations] = STATE(28),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [8] = {
    [sym__declarations] = STATE(16),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [9] = {
    [sym__declarations] = STATE(17),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [10] = {
    [sym_host_declaration] = STATE(21),
    [sym_parameter] = STATE(371),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(577),
    [sym__eol] = ACTIONS(579),
  },
  [11] = {
    [sym__declarations] = STATE(29),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [12] = {
    [sym__declarations] = STATE(25),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [13] = {
    [sym__declarations] = STATE(22),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [14] = {
    [sym__declarations] = STATE(20),
    [sym_parameter] = STATE(418),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(365),
    [sym__space] = ACTIONS(367),
  },
  [15] = {
    [sym_parameter] = STATE(506),
    [sym__add_keys_to_agent] = STATE(415),
    [sym__address_family] = STATE(414),
    [sym__batch_mode] = STATE(413),
    [sym__bind_address] = STATE(411),
    [sym__bind_interface] = STATE(410),
    [sym__canonical_domains] = STATE(409),
    [sym__canonicalize_fallback_local] = STATE(408),
    [sym__canonicalize_hostname] = STATE(407),
    [sym__canonicalize_max_dots] = STATE(403),
    [sym__canonicalize_permitted_cnames] = STATE(402),
    [sym__ca_signature_algorithms] = STATE(401),
    [sym__certificate_file] = STATE(399),
    [sym__check_host_ip] = STATE(396),
    [sym__ciphers] = STATE(391),
    [sym__clear_all_forwardings] = STATE(389),
    [sym__compression] = STATE(388),
    [sym__connection_attempts] = STATE(387),
    [sym__connect_timeout] = STATE(386),
    [sym__control_master] = STATE(385),
    [sym__control_persist] = STATE(384),
    [sym__control_path] = STATE(382),
    [sym__enable_escape_command_line] = STATE(380),
    [sym__enable_ssh_keysign] = STATE(378),
    [sym__escape_char] = STATE(377),
    [sym__exit_on_forward_failure] = STATE(375),
    [sym__fingerprint_hash] = STATE(374),
    [sym__fork_after_authentication] = STATE(373),
    [sym__forward_agent] = STATE(372),
    [sym__forward_x11] = STATE(370),
    [sym__forward_x11_timeout] = STATE(369),
    [sym__forward_x11_trusted] = STATE(367),
    [sym__global_known_hosts_file] = STATE(366),
    [sym__gssapi_authentication] = STATE(365),
    [sym__gssapi_delegate_credentials] = STATE(364),
    [sym__hostbased_accepted_algorithms] = STATE(363),
    [sym__hostbased_authentication] = STATE(362),
    [sym__host_key_algorithms] = STATE(360),
    [sym__host_key_alias] = STATE(359),
    [sym__hostname] = STATE(358),
    [sym__identities_only] = STATE(356),
    [sym__identity_agent] = STATE(351),
    [sym__identity_file] = STATE(352),
    [sym__ignore_unknown] = STATE(354),
    [sym__ipqos] = STATE(361),
    [sym__kbd_interactive_authentication] = STATE(368),
    [sym__kex_algorithms] = STATE(376),
    [sym__known_hosts_command] = STATE(383),
    [sym__local_command] = STATE(392),
    [sym__local_forward] = STATE(395),
    [sym__log_level] = STATE(397),
    [sym__log_verbose] = STATE(400),
    [sym__macs] = STATE(421),
    [sym__no_host_authentication_for_localhost] = STATE(422),
    [sym__number_of_password_prompts] = STATE(423),
    [sym__password_authentication] = STATE(424),
    [sym__permit_local_command] = STATE(427),
    [sym__permit_remote_open] = STATE(431),
    [sym__pkcs11_provider] = STATE(437),
    [sym__port] = STATE(438),
    [sym__preferred_authentications] = STATE(446),
    [sym__proxy_command] = STATE(440),
    [sym__proxy_jump] = STATE(452),
    [sym__proxy_use_fdpass] = STATE(455),
    [sym__pubkey_accepted_algorithms] = STATE(457),
    [sym__pubkey_authentication_arg] = STATE(459),
    [sym__boolean] = STATE(459),
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
    [anon_sym_unbound] = ACTIONS(135),
    [anon_sym_host_DASHbound] = ACTIONS(135),
    [anon_sym_yes] = ACTIONS(135),
    [anon_sym_no] = ACTIONS(137),
    [sym_comment] = ACTIONS(581),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [aux_sym_host_declaration_token1] = ACTIONS(585),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(583),
    [aux_sym__address_family_token1] = ACTIONS(583),
    [aux_sym__batch_mode_token1] = ACTIONS(583),
    [aux_sym__bind_address_token1] = ACTIONS(583),
    [aux_sym__bind_interface_token1] = ACTIONS(583),
    [aux_sym__canonical_domains_token1] = ACTIONS(583),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(583),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(583),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(583),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(583),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(583),
    [aux_sym__certificate_file_token1] = ACTIONS(583),
    [aux_sym__check_host_ip_token1] = ACTIONS(583),
    [aux_sym__ciphers_token1] = ACTIONS(583),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(583),
    [aux_sym__compression_token1] = ACTIONS(583),
    [aux_sym__connection_attempts_token1] = ACTIONS(583),
    [aux_sym__connect_timeout_token1] = ACTIONS(583),
    [aux_sym__control_master_token1] = ACTIONS(583),
    [aux_sym__control_persist_token1] = ACTIONS(583),
    [aux_sym__control_path_token1] = ACTIONS(583),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(583),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(583),
    [aux_sym__escape_char_token1] = ACTIONS(583),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(583),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(583),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(583),
    [aux_sym__forward_agent_token1] = ACTIONS(583),
    [aux_sym__forward_x11_token1] = ACTIONS(585),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(583),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(583),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(583),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(583),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(583),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(583),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(583),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(583),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(583),
    [aux_sym__host_key_alias_token1] = ACTIONS(583),
    [aux_sym__hostname_token1] = ACTIONS(583),
    [aux_sym__identities_only_token1] = ACTIONS(583),
    [aux_sym__identity_agent_token1] = ACTIONS(583),
    [aux_sym__identity_file_token1] = ACTIONS(583),
    [aux_sym__ignore_unknown_token1] = ACTIONS(583),
    [aux_sym__ipqos_token1] = ACTIONS(583),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(583),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(583),
    [aux_sym__kex_algorithms_token1] = ACTIONS(583),
    [aux_sym__known_hosts_command_token1] = ACTIONS(583),
    [aux_sym__local_command_token1] = ACTIONS(583),
    [aux_sym__local_forward_token1] = ACTIONS(583),
    [aux_sym__log_level_token1] = ACTIONS(583),
    [aux_sym__log_verbose_token1] = ACTIONS(583),
    [aux_sym__macs_token1] = ACTIONS(583),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(583),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(583),
    [aux_sym__password_authentication_token1] = ACTIONS(583),
    [aux_sym__permit_local_command_token1] = ACTIONS(583),
    [aux_sym__permit_remote_open_token1] = ACTIONS(583),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(583),
    [aux_sym__port_token1] = ACTIONS(583),
    [aux_sym__preferred_authentications_token1] = ACTIONS(583),
    [aux_sym__proxy_command_token1] = ACTIONS(583),
    [aux_sym__proxy_jump_token1] = ACTIONS(583),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(583),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(583),
    [anon_sym_unbound] = ACTIONS(583),
    [anon_sym_host_DASHbound] = ACTIONS(583),
    [anon_sym_yes] = ACTIONS(583),
    [anon_sym_no] = ACTIONS(585),
    [sym_comment] = ACTIONS(583),
    [sym__space] = ACTIONS(583),
    [sym__eol] = ACTIONS(583),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(587),
    [aux_sym_host_declaration_token1] = ACTIONS(589),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(587),
    [aux_sym__address_family_token1] = ACTIONS(587),
    [aux_sym__batch_mode_token1] = ACTIONS(587),
    [aux_sym__bind_address_token1] = ACTIONS(587),
    [aux_sym__bind_interface_token1] = ACTIONS(587),
    [aux_sym__canonical_domains_token1] = ACTIONS(587),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(587),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(587),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(587),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(587),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(587),
    [aux_sym__certificate_file_token1] = ACTIONS(587),
    [aux_sym__check_host_ip_token1] = ACTIONS(587),
    [aux_sym__ciphers_token1] = ACTIONS(587),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(587),
    [aux_sym__compression_token1] = ACTIONS(587),
    [aux_sym__connection_attempts_token1] = ACTIONS(587),
    [aux_sym__connect_timeout_token1] = ACTIONS(587),
    [aux_sym__control_master_token1] = ACTIONS(587),
    [aux_sym__control_persist_token1] = ACTIONS(587),
    [aux_sym__control_path_token1] = ACTIONS(587),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(587),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(587),
    [aux_sym__escape_char_token1] = ACTIONS(587),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(587),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(587),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(587),
    [aux_sym__forward_agent_token1] = ACTIONS(587),
    [aux_sym__forward_x11_token1] = ACTIONS(589),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(587),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(587),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(587),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(587),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(587),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(587),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(587),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(587),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(587),
    [aux_sym__host_key_alias_token1] = ACTIONS(587),
    [aux_sym__hostname_token1] = ACTIONS(587),
    [aux_sym__identities_only_token1] = ACTIONS(587),
    [aux_sym__identity_agent_token1] = ACTIONS(587),
    [aux_sym__identity_file_token1] = ACTIONS(587),
    [aux_sym__ignore_unknown_token1] = ACTIONS(587),
    [aux_sym__ipqos_token1] = ACTIONS(587),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(587),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(587),
    [aux_sym__kex_algorithms_token1] = ACTIONS(587),
    [aux_sym__known_hosts_command_token1] = ACTIONS(587),
    [aux_sym__local_command_token1] = ACTIONS(587),
    [aux_sym__local_forward_token1] = ACTIONS(587),
    [aux_sym__log_level_token1] = ACTIONS(587),
    [aux_sym__log_verbose_token1] = ACTIONS(587),
    [aux_sym__macs_token1] = ACTIONS(587),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(587),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(587),
    [aux_sym__password_authentication_token1] = ACTIONS(587),
    [aux_sym__permit_local_command_token1] = ACTIONS(587),
    [aux_sym__permit_remote_open_token1] = ACTIONS(587),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(587),
    [aux_sym__port_token1] = ACTIONS(587),
    [aux_sym__preferred_authentications_token1] = ACTIONS(587),
    [aux_sym__proxy_command_token1] = ACTIONS(587),
    [aux_sym__proxy_jump_token1] = ACTIONS(587),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(587),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(587),
    [anon_sym_unbound] = ACTIONS(587),
    [anon_sym_host_DASHbound] = ACTIONS(587),
    [anon_sym_yes] = ACTIONS(587),
    [anon_sym_no] = ACTIONS(589),
    [sym_comment] = ACTIONS(587),
    [sym__space] = ACTIONS(587),
    [sym__eol] = ACTIONS(587),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(591),
    [aux_sym_host_declaration_token1] = ACTIONS(593),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(591),
    [aux_sym__address_family_token1] = ACTIONS(591),
    [aux_sym__batch_mode_token1] = ACTIONS(591),
    [aux_sym__bind_address_token1] = ACTIONS(591),
    [aux_sym__bind_interface_token1] = ACTIONS(591),
    [aux_sym__canonical_domains_token1] = ACTIONS(591),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(591),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(591),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(591),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(591),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(591),
    [aux_sym__certificate_file_token1] = ACTIONS(591),
    [aux_sym__check_host_ip_token1] = ACTIONS(591),
    [aux_sym__ciphers_token1] = ACTIONS(591),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(591),
    [aux_sym__compression_token1] = ACTIONS(591),
    [aux_sym__connection_attempts_token1] = ACTIONS(591),
    [aux_sym__connect_timeout_token1] = ACTIONS(591),
    [aux_sym__control_master_token1] = ACTIONS(591),
    [aux_sym__control_persist_token1] = ACTIONS(591),
    [aux_sym__control_path_token1] = ACTIONS(591),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(591),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(591),
    [aux_sym__escape_char_token1] = ACTIONS(591),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(591),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(591),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(591),
    [aux_sym__forward_agent_token1] = ACTIONS(591),
    [aux_sym__forward_x11_token1] = ACTIONS(593),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(591),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(591),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(591),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(591),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(591),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(591),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(591),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(591),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(591),
    [aux_sym__host_key_alias_token1] = ACTIONS(591),
    [aux_sym__hostname_token1] = ACTIONS(591),
    [aux_sym__identities_only_token1] = ACTIONS(591),
    [aux_sym__identity_agent_token1] = ACTIONS(591),
    [aux_sym__identity_file_token1] = ACTIONS(591),
    [aux_sym__ignore_unknown_token1] = ACTIONS(591),
    [aux_sym__ipqos_token1] = ACTIONS(591),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(591),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(591),
    [aux_sym__kex_algorithms_token1] = ACTIONS(591),
    [aux_sym__known_hosts_command_token1] = ACTIONS(591),
    [aux_sym__local_command_token1] = ACTIONS(591),
    [aux_sym__local_forward_token1] = ACTIONS(591),
    [aux_sym__log_level_token1] = ACTIONS(591),
    [aux_sym__log_verbose_token1] = ACTIONS(591),
    [aux_sym__macs_token1] = ACTIONS(591),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(591),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(591),
    [aux_sym__password_authentication_token1] = ACTIONS(591),
    [aux_sym__permit_local_command_token1] = ACTIONS(591),
    [aux_sym__permit_remote_open_token1] = ACTIONS(591),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(591),
    [aux_sym__port_token1] = ACTIONS(591),
    [aux_sym__preferred_authentications_token1] = ACTIONS(591),
    [aux_sym__proxy_command_token1] = ACTIONS(591),
    [aux_sym__proxy_jump_token1] = ACTIONS(591),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(591),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(591),
    [anon_sym_unbound] = ACTIONS(591),
    [anon_sym_host_DASHbound] = ACTIONS(591),
    [anon_sym_yes] = ACTIONS(591),
    [anon_sym_no] = ACTIONS(593),
    [sym_comment] = ACTIONS(591),
    [sym__space] = ACTIONS(591),
    [sym__eol] = ACTIONS(591),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [aux_sym_host_declaration_token1] = ACTIONS(597),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(595),
    [aux_sym__address_family_token1] = ACTIONS(595),
    [aux_sym__batch_mode_token1] = ACTIONS(595),
    [aux_sym__bind_address_token1] = ACTIONS(595),
    [aux_sym__bind_interface_token1] = ACTIONS(595),
    [aux_sym__canonical_domains_token1] = ACTIONS(595),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(595),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(595),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(595),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(595),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(595),
    [aux_sym__certificate_file_token1] = ACTIONS(595),
    [aux_sym__check_host_ip_token1] = ACTIONS(595),
    [aux_sym__ciphers_token1] = ACTIONS(595),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(595),
    [aux_sym__compression_token1] = ACTIONS(595),
    [aux_sym__connection_attempts_token1] = ACTIONS(595),
    [aux_sym__connect_timeout_token1] = ACTIONS(595),
    [aux_sym__control_master_token1] = ACTIONS(595),
    [aux_sym__control_persist_token1] = ACTIONS(595),
    [aux_sym__control_path_token1] = ACTIONS(595),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(595),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(595),
    [aux_sym__escape_char_token1] = ACTIONS(595),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(595),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(595),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(595),
    [aux_sym__forward_agent_token1] = ACTIONS(595),
    [aux_sym__forward_x11_token1] = ACTIONS(597),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(595),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(595),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(595),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(595),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(595),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(595),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(595),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(595),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(595),
    [aux_sym__host_key_alias_token1] = ACTIONS(595),
    [aux_sym__hostname_token1] = ACTIONS(595),
    [aux_sym__identities_only_token1] = ACTIONS(595),
    [aux_sym__identity_agent_token1] = ACTIONS(595),
    [aux_sym__identity_file_token1] = ACTIONS(595),
    [aux_sym__ignore_unknown_token1] = ACTIONS(595),
    [aux_sym__ipqos_token1] = ACTIONS(595),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(595),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(595),
    [aux_sym__kex_algorithms_token1] = ACTIONS(595),
    [aux_sym__known_hosts_command_token1] = ACTIONS(595),
    [aux_sym__local_command_token1] = ACTIONS(595),
    [aux_sym__local_forward_token1] = ACTIONS(595),
    [aux_sym__log_level_token1] = ACTIONS(595),
    [aux_sym__log_verbose_token1] = ACTIONS(595),
    [aux_sym__macs_token1] = ACTIONS(595),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(595),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(595),
    [aux_sym__password_authentication_token1] = ACTIONS(595),
    [aux_sym__permit_local_command_token1] = ACTIONS(595),
    [aux_sym__permit_remote_open_token1] = ACTIONS(595),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(595),
    [aux_sym__port_token1] = ACTIONS(595),
    [aux_sym__preferred_authentications_token1] = ACTIONS(595),
    [aux_sym__proxy_command_token1] = ACTIONS(595),
    [aux_sym__proxy_jump_token1] = ACTIONS(595),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(595),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(595),
    [anon_sym_unbound] = ACTIONS(595),
    [anon_sym_host_DASHbound] = ACTIONS(595),
    [anon_sym_yes] = ACTIONS(595),
    [anon_sym_no] = ACTIONS(597),
    [sym_comment] = ACTIONS(595),
    [sym__space] = ACTIONS(595),
    [sym__eol] = ACTIONS(595),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [aux_sym_host_declaration_token1] = ACTIONS(601),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(599),
    [aux_sym__address_family_token1] = ACTIONS(599),
    [aux_sym__batch_mode_token1] = ACTIONS(599),
    [aux_sym__bind_address_token1] = ACTIONS(599),
    [aux_sym__bind_interface_token1] = ACTIONS(599),
    [aux_sym__canonical_domains_token1] = ACTIONS(599),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(599),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(599),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(599),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(599),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(599),
    [aux_sym__certificate_file_token1] = ACTIONS(599),
    [aux_sym__check_host_ip_token1] = ACTIONS(599),
    [aux_sym__ciphers_token1] = ACTIONS(599),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(599),
    [aux_sym__compression_token1] = ACTIONS(599),
    [aux_sym__connection_attempts_token1] = ACTIONS(599),
    [aux_sym__connect_timeout_token1] = ACTIONS(599),
    [aux_sym__control_master_token1] = ACTIONS(599),
    [aux_sym__control_persist_token1] = ACTIONS(599),
    [aux_sym__control_path_token1] = ACTIONS(599),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(599),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(599),
    [aux_sym__escape_char_token1] = ACTIONS(599),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(599),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(599),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(599),
    [aux_sym__forward_agent_token1] = ACTIONS(599),
    [aux_sym__forward_x11_token1] = ACTIONS(601),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(599),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(599),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(599),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(599),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(599),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(599),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(599),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(599),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(599),
    [aux_sym__host_key_alias_token1] = ACTIONS(599),
    [aux_sym__hostname_token1] = ACTIONS(599),
    [aux_sym__identities_only_token1] = ACTIONS(599),
    [aux_sym__identity_agent_token1] = ACTIONS(599),
    [aux_sym__identity_file_token1] = ACTIONS(599),
    [aux_sym__ignore_unknown_token1] = ACTIONS(599),
    [aux_sym__ipqos_token1] = ACTIONS(599),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(599),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(599),
    [aux_sym__kex_algorithms_token1] = ACTIONS(599),
    [aux_sym__known_hosts_command_token1] = ACTIONS(599),
    [aux_sym__local_command_token1] = ACTIONS(599),
    [aux_sym__local_forward_token1] = ACTIONS(599),
    [aux_sym__log_level_token1] = ACTIONS(599),
    [aux_sym__log_verbose_token1] = ACTIONS(599),
    [aux_sym__macs_token1] = ACTIONS(599),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(599),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(599),
    [aux_sym__password_authentication_token1] = ACTIONS(599),
    [aux_sym__permit_local_command_token1] = ACTIONS(599),
    [aux_sym__permit_remote_open_token1] = ACTIONS(599),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(599),
    [aux_sym__port_token1] = ACTIONS(599),
    [aux_sym__preferred_authentications_token1] = ACTIONS(599),
    [aux_sym__proxy_command_token1] = ACTIONS(599),
    [aux_sym__proxy_jump_token1] = ACTIONS(599),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(599),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(599),
    [anon_sym_unbound] = ACTIONS(599),
    [anon_sym_host_DASHbound] = ACTIONS(599),
    [anon_sym_yes] = ACTIONS(599),
    [anon_sym_no] = ACTIONS(601),
    [sym_comment] = ACTIONS(599),
    [sym__space] = ACTIONS(599),
    [sym__eol] = ACTIONS(599),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_host_declaration_token1] = ACTIONS(603),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(145),
    [aux_sym__address_family_token1] = ACTIONS(145),
    [aux_sym__batch_mode_token1] = ACTIONS(145),
    [aux_sym__bind_address_token1] = ACTIONS(145),
    [aux_sym__bind_interface_token1] = ACTIONS(145),
    [aux_sym__canonical_domains_token1] = ACTIONS(145),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(145),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(145),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(145),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(145),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(145),
    [aux_sym__certificate_file_token1] = ACTIONS(145),
    [aux_sym__check_host_ip_token1] = ACTIONS(145),
    [aux_sym__ciphers_token1] = ACTIONS(145),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(145),
    [aux_sym__compression_token1] = ACTIONS(145),
    [aux_sym__connection_attempts_token1] = ACTIONS(145),
    [aux_sym__connect_timeout_token1] = ACTIONS(145),
    [aux_sym__control_master_token1] = ACTIONS(145),
    [aux_sym__control_persist_token1] = ACTIONS(145),
    [aux_sym__control_path_token1] = ACTIONS(145),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(145),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(145),
    [aux_sym__escape_char_token1] = ACTIONS(145),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(145),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(145),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(145),
    [aux_sym__forward_agent_token1] = ACTIONS(145),
    [aux_sym__forward_x11_token1] = ACTIONS(603),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(145),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(145),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(145),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(145),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(145),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(145),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(145),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(145),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(145),
    [aux_sym__host_key_alias_token1] = ACTIONS(145),
    [aux_sym__hostname_token1] = ACTIONS(145),
    [aux_sym__identities_only_token1] = ACTIONS(145),
    [aux_sym__identity_agent_token1] = ACTIONS(145),
    [aux_sym__identity_file_token1] = ACTIONS(145),
    [aux_sym__ignore_unknown_token1] = ACTIONS(145),
    [aux_sym__ipqos_token1] = ACTIONS(145),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(145),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(145),
    [aux_sym__kex_algorithms_token1] = ACTIONS(145),
    [aux_sym__known_hosts_command_token1] = ACTIONS(145),
    [aux_sym__local_command_token1] = ACTIONS(145),
    [aux_sym__local_forward_token1] = ACTIONS(145),
    [aux_sym__log_level_token1] = ACTIONS(145),
    [aux_sym__log_verbose_token1] = ACTIONS(145),
    [aux_sym__macs_token1] = ACTIONS(145),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(145),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(145),
    [aux_sym__password_authentication_token1] = ACTIONS(145),
    [aux_sym__permit_local_command_token1] = ACTIONS(145),
    [aux_sym__permit_remote_open_token1] = ACTIONS(145),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(145),
    [aux_sym__port_token1] = ACTIONS(145),
    [aux_sym__preferred_authentications_token1] = ACTIONS(145),
    [aux_sym__proxy_command_token1] = ACTIONS(145),
    [aux_sym__proxy_jump_token1] = ACTIONS(145),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(145),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(145),
    [anon_sym_unbound] = ACTIONS(145),
    [anon_sym_host_DASHbound] = ACTIONS(145),
    [anon_sym_yes] = ACTIONS(145),
    [anon_sym_no] = ACTIONS(603),
    [sym_comment] = ACTIONS(145),
    [sym__space] = ACTIONS(145),
    [sym__eol] = ACTIONS(145),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [aux_sym_host_declaration_token1] = ACTIONS(607),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(605),
    [aux_sym__address_family_token1] = ACTIONS(605),
    [aux_sym__batch_mode_token1] = ACTIONS(605),
    [aux_sym__bind_address_token1] = ACTIONS(605),
    [aux_sym__bind_interface_token1] = ACTIONS(605),
    [aux_sym__canonical_domains_token1] = ACTIONS(605),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(605),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(605),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(605),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(605),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(605),
    [aux_sym__certificate_file_token1] = ACTIONS(605),
    [aux_sym__check_host_ip_token1] = ACTIONS(605),
    [aux_sym__ciphers_token1] = ACTIONS(605),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(605),
    [aux_sym__compression_token1] = ACTIONS(605),
    [aux_sym__connection_attempts_token1] = ACTIONS(605),
    [aux_sym__connect_timeout_token1] = ACTIONS(605),
    [aux_sym__control_master_token1] = ACTIONS(605),
    [aux_sym__control_persist_token1] = ACTIONS(605),
    [aux_sym__control_path_token1] = ACTIONS(605),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(605),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(605),
    [aux_sym__escape_char_token1] = ACTIONS(605),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(605),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(605),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(605),
    [aux_sym__forward_agent_token1] = ACTIONS(605),
    [aux_sym__forward_x11_token1] = ACTIONS(607),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(605),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(605),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(605),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(605),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(605),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(605),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(605),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(605),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(605),
    [aux_sym__host_key_alias_token1] = ACTIONS(605),
    [aux_sym__hostname_token1] = ACTIONS(605),
    [aux_sym__identities_only_token1] = ACTIONS(605),
    [aux_sym__identity_agent_token1] = ACTIONS(605),
    [aux_sym__identity_file_token1] = ACTIONS(605),
    [aux_sym__ignore_unknown_token1] = ACTIONS(605),
    [aux_sym__ipqos_token1] = ACTIONS(605),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(605),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(605),
    [aux_sym__kex_algorithms_token1] = ACTIONS(605),
    [aux_sym__known_hosts_command_token1] = ACTIONS(605),
    [aux_sym__local_command_token1] = ACTIONS(605),
    [aux_sym__local_forward_token1] = ACTIONS(605),
    [aux_sym__log_level_token1] = ACTIONS(605),
    [aux_sym__log_verbose_token1] = ACTIONS(605),
    [aux_sym__macs_token1] = ACTIONS(605),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(605),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(605),
    [aux_sym__password_authentication_token1] = ACTIONS(605),
    [aux_sym__permit_local_command_token1] = ACTIONS(605),
    [aux_sym__permit_remote_open_token1] = ACTIONS(605),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(605),
    [aux_sym__port_token1] = ACTIONS(605),
    [aux_sym__preferred_authentications_token1] = ACTIONS(605),
    [aux_sym__proxy_command_token1] = ACTIONS(605),
    [aux_sym__proxy_jump_token1] = ACTIONS(605),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(605),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(605),
    [anon_sym_unbound] = ACTIONS(605),
    [anon_sym_host_DASHbound] = ACTIONS(605),
    [anon_sym_yes] = ACTIONS(605),
    [anon_sym_no] = ACTIONS(607),
    [sym_comment] = ACTIONS(605),
    [sym__space] = ACTIONS(605),
    [sym__eol] = ACTIONS(605),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [aux_sym_host_declaration_token1] = ACTIONS(611),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(609),
    [aux_sym__address_family_token1] = ACTIONS(609),
    [aux_sym__batch_mode_token1] = ACTIONS(609),
    [aux_sym__bind_address_token1] = ACTIONS(609),
    [aux_sym__bind_interface_token1] = ACTIONS(609),
    [aux_sym__canonical_domains_token1] = ACTIONS(609),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(609),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(609),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(609),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(609),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(609),
    [aux_sym__certificate_file_token1] = ACTIONS(609),
    [aux_sym__check_host_ip_token1] = ACTIONS(609),
    [aux_sym__ciphers_token1] = ACTIONS(609),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(609),
    [aux_sym__compression_token1] = ACTIONS(609),
    [aux_sym__connection_attempts_token1] = ACTIONS(609),
    [aux_sym__connect_timeout_token1] = ACTIONS(609),
    [aux_sym__control_master_token1] = ACTIONS(609),
    [aux_sym__control_persist_token1] = ACTIONS(609),
    [aux_sym__control_path_token1] = ACTIONS(609),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(609),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(609),
    [aux_sym__escape_char_token1] = ACTIONS(609),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(609),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(609),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(609),
    [aux_sym__forward_agent_token1] = ACTIONS(609),
    [aux_sym__forward_x11_token1] = ACTIONS(611),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(609),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(609),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(609),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(609),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(609),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(609),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(609),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(609),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(609),
    [aux_sym__host_key_alias_token1] = ACTIONS(609),
    [aux_sym__hostname_token1] = ACTIONS(609),
    [aux_sym__identities_only_token1] = ACTIONS(609),
    [aux_sym__identity_agent_token1] = ACTIONS(609),
    [aux_sym__identity_file_token1] = ACTIONS(609),
    [aux_sym__ignore_unknown_token1] = ACTIONS(609),
    [aux_sym__ipqos_token1] = ACTIONS(609),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(609),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(609),
    [aux_sym__kex_algorithms_token1] = ACTIONS(609),
    [aux_sym__known_hosts_command_token1] = ACTIONS(609),
    [aux_sym__local_command_token1] = ACTIONS(609),
    [aux_sym__local_forward_token1] = ACTIONS(609),
    [aux_sym__log_level_token1] = ACTIONS(609),
    [aux_sym__log_verbose_token1] = ACTIONS(609),
    [aux_sym__macs_token1] = ACTIONS(609),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(609),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(609),
    [aux_sym__password_authentication_token1] = ACTIONS(609),
    [aux_sym__permit_local_command_token1] = ACTIONS(609),
    [aux_sym__permit_remote_open_token1] = ACTIONS(609),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(609),
    [aux_sym__port_token1] = ACTIONS(609),
    [aux_sym__preferred_authentications_token1] = ACTIONS(609),
    [aux_sym__proxy_command_token1] = ACTIONS(609),
    [aux_sym__proxy_jump_token1] = ACTIONS(609),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(609),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(609),
    [anon_sym_unbound] = ACTIONS(609),
    [anon_sym_host_DASHbound] = ACTIONS(609),
    [anon_sym_yes] = ACTIONS(609),
    [anon_sym_no] = ACTIONS(611),
    [sym_comment] = ACTIONS(609),
    [sym__space] = ACTIONS(609),
    [sym__eol] = ACTIONS(609),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(613),
    [aux_sym_host_declaration_token1] = ACTIONS(615),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(613),
    [aux_sym__address_family_token1] = ACTIONS(613),
    [aux_sym__batch_mode_token1] = ACTIONS(613),
    [aux_sym__bind_address_token1] = ACTIONS(613),
    [aux_sym__bind_interface_token1] = ACTIONS(613),
    [aux_sym__canonical_domains_token1] = ACTIONS(613),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(613),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(613),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(613),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(613),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(613),
    [aux_sym__certificate_file_token1] = ACTIONS(613),
    [aux_sym__check_host_ip_token1] = ACTIONS(613),
    [aux_sym__ciphers_token1] = ACTIONS(613),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(613),
    [aux_sym__compression_token1] = ACTIONS(613),
    [aux_sym__connection_attempts_token1] = ACTIONS(613),
    [aux_sym__connect_timeout_token1] = ACTIONS(613),
    [aux_sym__control_master_token1] = ACTIONS(613),
    [aux_sym__control_persist_token1] = ACTIONS(613),
    [aux_sym__control_path_token1] = ACTIONS(613),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(613),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(613),
    [aux_sym__escape_char_token1] = ACTIONS(613),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(613),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(613),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(613),
    [aux_sym__forward_agent_token1] = ACTIONS(613),
    [aux_sym__forward_x11_token1] = ACTIONS(615),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(613),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(613),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(613),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(613),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(613),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(613),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(613),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(613),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(613),
    [aux_sym__host_key_alias_token1] = ACTIONS(613),
    [aux_sym__hostname_token1] = ACTIONS(613),
    [aux_sym__identities_only_token1] = ACTIONS(613),
    [aux_sym__identity_agent_token1] = ACTIONS(613),
    [aux_sym__identity_file_token1] = ACTIONS(613),
    [aux_sym__ignore_unknown_token1] = ACTIONS(613),
    [aux_sym__ipqos_token1] = ACTIONS(613),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(613),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(613),
    [aux_sym__kex_algorithms_token1] = ACTIONS(613),
    [aux_sym__known_hosts_command_token1] = ACTIONS(613),
    [aux_sym__local_command_token1] = ACTIONS(613),
    [aux_sym__local_forward_token1] = ACTIONS(613),
    [aux_sym__log_level_token1] = ACTIONS(613),
    [aux_sym__log_verbose_token1] = ACTIONS(613),
    [aux_sym__macs_token1] = ACTIONS(613),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(613),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(613),
    [aux_sym__password_authentication_token1] = ACTIONS(613),
    [aux_sym__permit_local_command_token1] = ACTIONS(613),
    [aux_sym__permit_remote_open_token1] = ACTIONS(613),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(613),
    [aux_sym__port_token1] = ACTIONS(613),
    [aux_sym__preferred_authentications_token1] = ACTIONS(613),
    [aux_sym__proxy_command_token1] = ACTIONS(613),
    [aux_sym__proxy_jump_token1] = ACTIONS(613),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(613),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(613),
    [anon_sym_unbound] = ACTIONS(613),
    [anon_sym_host_DASHbound] = ACTIONS(613),
    [anon_sym_yes] = ACTIONS(613),
    [anon_sym_no] = ACTIONS(615),
    [sym_comment] = ACTIONS(613),
    [sym__space] = ACTIONS(613),
    [sym__eol] = ACTIONS(613),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(617),
    [aux_sym_host_declaration_token1] = ACTIONS(619),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(617),
    [aux_sym__address_family_token1] = ACTIONS(617),
    [aux_sym__batch_mode_token1] = ACTIONS(617),
    [aux_sym__bind_address_token1] = ACTIONS(617),
    [aux_sym__bind_interface_token1] = ACTIONS(617),
    [aux_sym__canonical_domains_token1] = ACTIONS(617),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(617),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(617),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(617),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(617),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(617),
    [aux_sym__certificate_file_token1] = ACTIONS(617),
    [aux_sym__check_host_ip_token1] = ACTIONS(617),
    [aux_sym__ciphers_token1] = ACTIONS(617),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(617),
    [aux_sym__compression_token1] = ACTIONS(617),
    [aux_sym__connection_attempts_token1] = ACTIONS(617),
    [aux_sym__connect_timeout_token1] = ACTIONS(617),
    [aux_sym__control_master_token1] = ACTIONS(617),
    [aux_sym__control_persist_token1] = ACTIONS(617),
    [aux_sym__control_path_token1] = ACTIONS(617),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(617),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(617),
    [aux_sym__escape_char_token1] = ACTIONS(617),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(617),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(617),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(617),
    [aux_sym__forward_agent_token1] = ACTIONS(617),
    [aux_sym__forward_x11_token1] = ACTIONS(619),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(617),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(617),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(617),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(617),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(617),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(617),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(617),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(617),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(617),
    [aux_sym__host_key_alias_token1] = ACTIONS(617),
    [aux_sym__hostname_token1] = ACTIONS(617),
    [aux_sym__identities_only_token1] = ACTIONS(617),
    [aux_sym__identity_agent_token1] = ACTIONS(617),
    [aux_sym__identity_file_token1] = ACTIONS(617),
    [aux_sym__ignore_unknown_token1] = ACTIONS(617),
    [aux_sym__ipqos_token1] = ACTIONS(617),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(617),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(617),
    [aux_sym__kex_algorithms_token1] = ACTIONS(617),
    [aux_sym__known_hosts_command_token1] = ACTIONS(617),
    [aux_sym__local_command_token1] = ACTIONS(617),
    [aux_sym__local_forward_token1] = ACTIONS(617),
    [aux_sym__log_level_token1] = ACTIONS(617),
    [aux_sym__log_verbose_token1] = ACTIONS(617),
    [aux_sym__macs_token1] = ACTIONS(617),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(617),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(617),
    [aux_sym__password_authentication_token1] = ACTIONS(617),
    [aux_sym__permit_local_command_token1] = ACTIONS(617),
    [aux_sym__permit_remote_open_token1] = ACTIONS(617),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(617),
    [aux_sym__port_token1] = ACTIONS(617),
    [aux_sym__preferred_authentications_token1] = ACTIONS(617),
    [aux_sym__proxy_command_token1] = ACTIONS(617),
    [aux_sym__proxy_jump_token1] = ACTIONS(617),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(617),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(617),
    [anon_sym_unbound] = ACTIONS(617),
    [anon_sym_host_DASHbound] = ACTIONS(617),
    [anon_sym_yes] = ACTIONS(617),
    [anon_sym_no] = ACTIONS(619),
    [sym_comment] = ACTIONS(617),
    [sym__space] = ACTIONS(617),
    [sym__eol] = ACTIONS(617),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [aux_sym_host_declaration_token1] = ACTIONS(623),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(621),
    [aux_sym__address_family_token1] = ACTIONS(621),
    [aux_sym__batch_mode_token1] = ACTIONS(621),
    [aux_sym__bind_address_token1] = ACTIONS(621),
    [aux_sym__bind_interface_token1] = ACTIONS(621),
    [aux_sym__canonical_domains_token1] = ACTIONS(621),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(621),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(621),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(621),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(621),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(621),
    [aux_sym__certificate_file_token1] = ACTIONS(621),
    [aux_sym__check_host_ip_token1] = ACTIONS(621),
    [aux_sym__ciphers_token1] = ACTIONS(621),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(621),
    [aux_sym__compression_token1] = ACTIONS(621),
    [aux_sym__connection_attempts_token1] = ACTIONS(621),
    [aux_sym__connect_timeout_token1] = ACTIONS(621),
    [aux_sym__control_master_token1] = ACTIONS(621),
    [aux_sym__control_persist_token1] = ACTIONS(621),
    [aux_sym__control_path_token1] = ACTIONS(621),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(621),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(621),
    [aux_sym__escape_char_token1] = ACTIONS(621),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(621),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(621),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(621),
    [aux_sym__forward_agent_token1] = ACTIONS(621),
    [aux_sym__forward_x11_token1] = ACTIONS(623),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(621),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(621),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(621),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(621),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(621),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(621),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(621),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(621),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(621),
    [aux_sym__host_key_alias_token1] = ACTIONS(621),
    [aux_sym__hostname_token1] = ACTIONS(621),
    [aux_sym__identities_only_token1] = ACTIONS(621),
    [aux_sym__identity_agent_token1] = ACTIONS(621),
    [aux_sym__identity_file_token1] = ACTIONS(621),
    [aux_sym__ignore_unknown_token1] = ACTIONS(621),
    [aux_sym__ipqos_token1] = ACTIONS(621),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(621),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(621),
    [aux_sym__kex_algorithms_token1] = ACTIONS(621),
    [aux_sym__known_hosts_command_token1] = ACTIONS(621),
    [aux_sym__local_command_token1] = ACTIONS(621),
    [aux_sym__local_forward_token1] = ACTIONS(621),
    [aux_sym__log_level_token1] = ACTIONS(621),
    [aux_sym__log_verbose_token1] = ACTIONS(621),
    [aux_sym__macs_token1] = ACTIONS(621),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(621),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(621),
    [aux_sym__password_authentication_token1] = ACTIONS(621),
    [aux_sym__permit_local_command_token1] = ACTIONS(621),
    [aux_sym__permit_remote_open_token1] = ACTIONS(621),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(621),
    [aux_sym__port_token1] = ACTIONS(621),
    [aux_sym__preferred_authentications_token1] = ACTIONS(621),
    [aux_sym__proxy_command_token1] = ACTIONS(621),
    [aux_sym__proxy_jump_token1] = ACTIONS(621),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(621),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(621),
    [anon_sym_unbound] = ACTIONS(621),
    [anon_sym_host_DASHbound] = ACTIONS(621),
    [anon_sym_yes] = ACTIONS(621),
    [anon_sym_no] = ACTIONS(623),
    [sym_comment] = ACTIONS(621),
    [sym__space] = ACTIONS(621),
    [sym__eol] = ACTIONS(621),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym_host_declaration_token1] = ACTIONS(371),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(369),
    [aux_sym__address_family_token1] = ACTIONS(369),
    [aux_sym__batch_mode_token1] = ACTIONS(369),
    [aux_sym__bind_address_token1] = ACTIONS(369),
    [aux_sym__bind_interface_token1] = ACTIONS(369),
    [aux_sym__canonical_domains_token1] = ACTIONS(369),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(369),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(369),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(369),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(369),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(369),
    [aux_sym__certificate_file_token1] = ACTIONS(369),
    [aux_sym__check_host_ip_token1] = ACTIONS(369),
    [aux_sym__ciphers_token1] = ACTIONS(369),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(369),
    [aux_sym__compression_token1] = ACTIONS(369),
    [aux_sym__connection_attempts_token1] = ACTIONS(369),
    [aux_sym__connect_timeout_token1] = ACTIONS(369),
    [aux_sym__control_master_token1] = ACTIONS(369),
    [aux_sym__control_persist_token1] = ACTIONS(369),
    [aux_sym__control_path_token1] = ACTIONS(369),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(369),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(369),
    [aux_sym__escape_char_token1] = ACTIONS(369),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(369),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(369),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(369),
    [aux_sym__forward_agent_token1] = ACTIONS(369),
    [aux_sym__forward_x11_token1] = ACTIONS(371),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(369),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(369),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(369),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(369),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(369),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(369),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(369),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(369),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(369),
    [aux_sym__host_key_alias_token1] = ACTIONS(369),
    [aux_sym__hostname_token1] = ACTIONS(369),
    [aux_sym__identities_only_token1] = ACTIONS(369),
    [aux_sym__identity_agent_token1] = ACTIONS(369),
    [aux_sym__identity_file_token1] = ACTIONS(369),
    [aux_sym__ignore_unknown_token1] = ACTIONS(369),
    [aux_sym__ipqos_token1] = ACTIONS(369),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(369),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(369),
    [aux_sym__kex_algorithms_token1] = ACTIONS(369),
    [aux_sym__known_hosts_command_token1] = ACTIONS(369),
    [aux_sym__local_command_token1] = ACTIONS(369),
    [aux_sym__local_forward_token1] = ACTIONS(369),
    [aux_sym__log_level_token1] = ACTIONS(369),
    [aux_sym__log_verbose_token1] = ACTIONS(369),
    [aux_sym__macs_token1] = ACTIONS(369),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(369),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(369),
    [aux_sym__password_authentication_token1] = ACTIONS(369),
    [aux_sym__permit_local_command_token1] = ACTIONS(369),
    [aux_sym__permit_remote_open_token1] = ACTIONS(369),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(369),
    [aux_sym__port_token1] = ACTIONS(369),
    [aux_sym__preferred_authentications_token1] = ACTIONS(369),
    [aux_sym__proxy_command_token1] = ACTIONS(369),
    [aux_sym__proxy_jump_token1] = ACTIONS(369),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(369),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(369),
    [anon_sym_unbound] = ACTIONS(369),
    [anon_sym_host_DASHbound] = ACTIONS(369),
    [anon_sym_yes] = ACTIONS(369),
    [anon_sym_no] = ACTIONS(371),
    [sym_comment] = ACTIONS(369),
    [sym__space] = ACTIONS(369),
    [sym__eol] = ACTIONS(369),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(625),
    [aux_sym_host_declaration_token1] = ACTIONS(627),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(625),
    [aux_sym__address_family_token1] = ACTIONS(625),
    [aux_sym__batch_mode_token1] = ACTIONS(625),
    [aux_sym__bind_address_token1] = ACTIONS(625),
    [aux_sym__bind_interface_token1] = ACTIONS(625),
    [aux_sym__canonical_domains_token1] = ACTIONS(625),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(625),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(625),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(625),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(625),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(625),
    [aux_sym__certificate_file_token1] = ACTIONS(625),
    [aux_sym__check_host_ip_token1] = ACTIONS(625),
    [aux_sym__ciphers_token1] = ACTIONS(625),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(625),
    [aux_sym__compression_token1] = ACTIONS(625),
    [aux_sym__connection_attempts_token1] = ACTIONS(625),
    [aux_sym__connect_timeout_token1] = ACTIONS(625),
    [aux_sym__control_master_token1] = ACTIONS(625),
    [aux_sym__control_persist_token1] = ACTIONS(625),
    [aux_sym__control_path_token1] = ACTIONS(625),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(625),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(625),
    [aux_sym__escape_char_token1] = ACTIONS(625),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(625),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(625),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(625),
    [aux_sym__forward_agent_token1] = ACTIONS(625),
    [aux_sym__forward_x11_token1] = ACTIONS(627),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(625),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(625),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(625),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(625),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(625),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(625),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(625),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(625),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(625),
    [aux_sym__host_key_alias_token1] = ACTIONS(625),
    [aux_sym__hostname_token1] = ACTIONS(625),
    [aux_sym__identities_only_token1] = ACTIONS(625),
    [aux_sym__identity_agent_token1] = ACTIONS(625),
    [aux_sym__identity_file_token1] = ACTIONS(625),
    [aux_sym__ignore_unknown_token1] = ACTIONS(625),
    [aux_sym__ipqos_token1] = ACTIONS(625),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(625),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(625),
    [aux_sym__kex_algorithms_token1] = ACTIONS(625),
    [aux_sym__known_hosts_command_token1] = ACTIONS(625),
    [aux_sym__local_command_token1] = ACTIONS(625),
    [aux_sym__local_forward_token1] = ACTIONS(625),
    [aux_sym__log_level_token1] = ACTIONS(625),
    [aux_sym__log_verbose_token1] = ACTIONS(625),
    [aux_sym__macs_token1] = ACTIONS(625),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(625),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(625),
    [aux_sym__password_authentication_token1] = ACTIONS(625),
    [aux_sym__permit_local_command_token1] = ACTIONS(625),
    [aux_sym__permit_remote_open_token1] = ACTIONS(625),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(625),
    [aux_sym__port_token1] = ACTIONS(625),
    [aux_sym__preferred_authentications_token1] = ACTIONS(625),
    [aux_sym__proxy_command_token1] = ACTIONS(625),
    [aux_sym__proxy_jump_token1] = ACTIONS(625),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(625),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(625),
    [anon_sym_unbound] = ACTIONS(625),
    [anon_sym_host_DASHbound] = ACTIONS(625),
    [anon_sym_yes] = ACTIONS(625),
    [anon_sym_no] = ACTIONS(627),
    [sym_comment] = ACTIONS(625),
    [sym__space] = ACTIONS(625),
    [sym__eol] = ACTIONS(625),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [aux_sym_host_declaration_token1] = ACTIONS(631),
    [aux_sym__add_keys_to_agent_token1] = ACTIONS(629),
    [aux_sym__address_family_token1] = ACTIONS(629),
    [aux_sym__batch_mode_token1] = ACTIONS(629),
    [aux_sym__bind_address_token1] = ACTIONS(629),
    [aux_sym__bind_interface_token1] = ACTIONS(629),
    [aux_sym__canonical_domains_token1] = ACTIONS(629),
    [aux_sym__canonicalize_fallback_local_token1] = ACTIONS(629),
    [aux_sym__canonicalize_hostname_token1] = ACTIONS(629),
    [aux_sym__canonicalize_max_dots_token1] = ACTIONS(629),
    [aux_sym__canonicalize_permitted_cnames_token1] = ACTIONS(629),
    [aux_sym__ca_signature_algorithms_token1] = ACTIONS(629),
    [aux_sym__certificate_file_token1] = ACTIONS(629),
    [aux_sym__check_host_ip_token1] = ACTIONS(629),
    [aux_sym__ciphers_token1] = ACTIONS(629),
    [aux_sym__clear_all_forwardings_token1] = ACTIONS(629),
    [aux_sym__compression_token1] = ACTIONS(629),
    [aux_sym__connection_attempts_token1] = ACTIONS(629),
    [aux_sym__connect_timeout_token1] = ACTIONS(629),
    [aux_sym__control_master_token1] = ACTIONS(629),
    [aux_sym__control_persist_token1] = ACTIONS(629),
    [aux_sym__control_path_token1] = ACTIONS(629),
    [aux_sym__enable_escape_command_line_token1] = ACTIONS(629),
    [aux_sym__enable_ssh_keysign_token1] = ACTIONS(629),
    [aux_sym__escape_char_token1] = ACTIONS(629),
    [aux_sym__exit_on_forward_failure_token1] = ACTIONS(629),
    [aux_sym__fingerprint_hash_token1] = ACTIONS(629),
    [aux_sym__fork_after_authentication_token1] = ACTIONS(629),
    [aux_sym__forward_agent_token1] = ACTIONS(629),
    [aux_sym__forward_x11_token1] = ACTIONS(631),
    [aux_sym__forward_x11_timeout_token1] = ACTIONS(629),
    [aux_sym__forward_x11_trusted_token1] = ACTIONS(629),
    [aux_sym__global_known_hosts_file_token1] = ACTIONS(629),
    [aux_sym__gssapi_authentication_token1] = ACTIONS(629),
    [aux_sym__gssapi_delegate_credentials_token1] = ACTIONS(629),
    [aux_sym__hostbased_accepted_algorithms_token1] = ACTIONS(629),
    [aux_sym__hostbased_accepted_algorithms_token2] = ACTIONS(629),
    [aux_sym__hostbased_authentication_token1] = ACTIONS(629),
    [aux_sym__host_key_algorithms_token1] = ACTIONS(629),
    [aux_sym__host_key_alias_token1] = ACTIONS(629),
    [aux_sym__hostname_token1] = ACTIONS(629),
    [aux_sym__identities_only_token1] = ACTIONS(629),
    [aux_sym__identity_agent_token1] = ACTIONS(629),
    [aux_sym__identity_file_token1] = ACTIONS(629),
    [aux_sym__ignore_unknown_token1] = ACTIONS(629),
    [aux_sym__ipqos_token1] = ACTIONS(629),
    [aux_sym__kbd_interactive_authentication_token1] = ACTIONS(629),
    [aux_sym__kbd_interactive_authentication_token2] = ACTIONS(629),
    [aux_sym__kex_algorithms_token1] = ACTIONS(629),
    [aux_sym__known_hosts_command_token1] = ACTIONS(629),
    [aux_sym__local_command_token1] = ACTIONS(629),
    [aux_sym__local_forward_token1] = ACTIONS(629),
    [aux_sym__log_level_token1] = ACTIONS(629),
    [aux_sym__log_verbose_token1] = ACTIONS(629),
    [aux_sym__macs_token1] = ACTIONS(629),
    [aux_sym__no_host_authentication_for_localhost_token1] = ACTIONS(629),
    [aux_sym__number_of_password_prompts_token1] = ACTIONS(629),
    [aux_sym__password_authentication_token1] = ACTIONS(629),
    [aux_sym__permit_local_command_token1] = ACTIONS(629),
    [aux_sym__permit_remote_open_token1] = ACTIONS(629),
    [aux_sym__pkcs11_provider_token1] = ACTIONS(629),
    [aux_sym__port_token1] = ACTIONS(629),
    [aux_sym__preferred_authentications_token1] = ACTIONS(629),
    [aux_sym__proxy_command_token1] = ACTIONS(629),
    [aux_sym__proxy_jump_token1] = ACTIONS(629),
    [aux_sym__proxy_use_fdpass_token1] = ACTIONS(629),
    [aux_sym__pubkey_accepted_algorithms_token1] = ACTIONS(629),
    [anon_sym_unbound] = ACTIONS(629),
    [anon_sym_host_DASHbound] = ACTIONS(629),
    [anon_sym_yes] = ACTIONS(629),
    [anon_sym_no] = ACTIONS(631),
    [sym_comment] = ACTIONS(629),
    [sym__space] = ACTIONS(629),
    [sym__eol] = ACTIONS(629),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(633), 1,
      anon_sym_STAR,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(641), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(643), 1,
      sym__number,
    STATE(49), 1,
      aux_sym__file_string_repeat1,
    STATE(539), 1,
      sym_string,
    STATE(542), 1,
      sym_number,
    ACTIONS(639), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(101), 2,
      sym__file_token,
      sym_variable,
    STATE(549), 2,
      sym__local_forward_value1,
      sym__file_string,
  [37] = 10,
    ACTIONS(639), 1,
      aux_sym__file_string_token1,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    ACTIONS(649), 1,
      aux_sym__file_token_token1,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    ACTIONS(653), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_string_repeat1,
    STATE(479), 1,
      sym__var_value,
    STATE(482), 1,
      sym__file_string,
    ACTIONS(645), 2,
      anon_sym_none,
      anon_sym_SSH_AUTH_SOCK,
    STATE(101), 2,
      sym__file_token,
      sym_variable,
  [70] = 9,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(641), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(655), 1,
      anon_sym_STAR,
    STATE(49), 1,
      aux_sym__file_string_repeat1,
    STATE(536), 1,
      sym_string,
    ACTIONS(639), 2,
      aux_sym__file_token_token1,
      aux_sym__file_string_token1,
    STATE(101), 2,
      sym__file_token,
      sym_variable,
    STATE(472), 2,
      sym__local_forward_value2,
      sym__file_string,
  [101] = 7,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    ACTIONS(661), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(663), 1,
      aux_sym__file_string_token1,
    STATE(34), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(516), 1,
      sym__file_pattern_vars,
    STATE(63), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [126] = 6,
    ACTIONS(661), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(663), 1,
      aux_sym__file_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(665), 2,
      sym__space,
      sym__eol,
    STATE(63), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [149] = 7,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    ACTIONS(661), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(663), 1,
      aux_sym__file_string_token1,
    STATE(34), 1,
      aux_sym__file_pattern_vars_repeat1,
    STATE(490), 1,
      sym__file_pattern_vars,
    STATE(63), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [174] = 6,
    ACTIONS(670), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(673), 1,
      aux_sym__file_string_token1,
    STATE(36), 1,
      aux_sym__file_pattern_vars_repeat1,
    ACTIONS(676), 2,
      sym__space,
      sym__eol,
    STATE(63), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(667), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [197] = 6,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(684), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(38), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(82), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(678), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [219] = 6,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(694), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(38), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(82), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(686), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [241] = 7,
    ACTIONS(697), 1,
      anon_sym_BANG,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    ACTIONS(705), 1,
      sym__eol,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(417), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [264] = 7,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(711), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(713), 1,
      aux_sym__file_string_token1,
    STATE(43), 1,
      aux_sym__hosts_string_repeat1,
    STATE(473), 1,
      sym__hosts_string,
    STATE(106), 2,
      sym__hosts_token,
      sym_variable,
  [287] = 7,
    ACTIONS(697), 1,
      anon_sym_BANG,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    ACTIONS(715), 1,
      sym__eol,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(417), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [310] = 7,
    ACTIONS(639), 1,
      aux_sym__file_string_token1,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    ACTIONS(649), 1,
      aux_sym__file_token_token1,
    ACTIONS(653), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym__file_string_repeat1,
    STATE(478), 1,
      sym__file_string,
    STATE(101), 2,
      sym__file_token,
      sym_variable,
  [333] = 6,
    ACTIONS(709), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(711), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(713), 1,
      aux_sym__file_string_token1,
    STATE(45), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(717), 2,
      sym__space,
      sym__eol,
    STATE(106), 2,
      sym__hosts_token,
      sym_variable,
  [354] = 7,
    ACTIONS(697), 1,
      anon_sym_BANG,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    ACTIONS(719), 1,
      sym__eol,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(417), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [377] = 6,
    ACTIONS(721), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(724), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(727), 1,
      aux_sym__file_string_token1,
    STATE(45), 1,
      aux_sym__hosts_string_repeat1,
    ACTIONS(730), 2,
      sym__space,
      sym__eol,
    STATE(106), 2,
      sym__hosts_token,
      sym_variable,
  [398] = 7,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      anon_sym_none,
    ACTIONS(736), 1,
      aux_sym__file_string_token1,
    STATE(94), 1,
      aux_sym_pattern_repeat1,
    STATE(223), 1,
      sym__cnames_map,
    STATE(224), 1,
      sym_pattern,
    ACTIONS(734), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [421] = 7,
    ACTIONS(697), 1,
      anon_sym_BANG,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    ACTIONS(738), 1,
      sym__eol,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(417), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [444] = 5,
    ACTIONS(682), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(684), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(37), 1,
      aux_sym__file_pattern_vars_repeat2,
    STATE(82), 2,
      sym__file_token,
      sym_variable,
    ACTIONS(678), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
  [463] = 6,
    ACTIONS(639), 1,
      aux_sym__file_string_token1,
    ACTIONS(649), 1,
      aux_sym__file_token_token1,
    ACTIONS(653), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(740), 2,
      sym__space,
      sym__eol,
    STATE(101), 2,
      sym__file_token,
      sym_variable,
  [484] = 6,
    ACTIONS(742), 1,
      aux_sym__file_token_token1,
    ACTIONS(745), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(748), 1,
      aux_sym__file_string_token1,
    STATE(50), 1,
      aux_sym__file_string_repeat1,
    ACTIONS(751), 2,
      sym__space,
      sym__eol,
    STATE(101), 2,
      sym__file_token,
      sym_variable,
  [505] = 6,
    ACTIONS(637), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym__var_value,
    ACTIONS(755), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(503), 2,
      sym_string,
      sym__boolean,
  [526] = 6,
    ACTIONS(757), 1,
      aux_sym_time_token1,
    ACTIONS(759), 1,
      aux_sym_time_token2,
    ACTIONS(761), 1,
      aux_sym_time_token3,
    ACTIONS(763), 1,
      aux_sym_time_token4,
    ACTIONS(765), 1,
      aux_sym_time_token5,
    ACTIONS(767), 2,
      sym__space,
      sym__eol,
  [546] = 6,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(773), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(775), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(61), 1,
      aux_sym__hosts_string_repeat2,
    STATE(165), 2,
      sym__hosts_token,
      sym_variable,
  [566] = 4,
    ACTIONS(782), 1,
      aux_sym__file_string_token1,
    STATE(54), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(779), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(777), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [582] = 2,
    ACTIONS(787), 1,
      aux_sym__file_string_token1,
    ACTIONS(785), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [594] = 6,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(793), 1,
      aux_sym__file_token_token1,
    ACTIONS(795), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(57), 1,
      aux_sym__file_string_repeat2,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [614] = 6,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    ACTIONS(799), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(802), 1,
      aux_sym__file_token_token1,
    ACTIONS(805), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(57), 1,
      aux_sym__file_string_repeat2,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [634] = 6,
    ACTIONS(697), 1,
      anon_sym_BANG,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(417), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [654] = 6,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      aux_sym__file_string_token1,
    STATE(94), 1,
      aux_sym_pattern_repeat1,
    STATE(224), 1,
      sym_pattern,
    STATE(432), 1,
      sym__cnames_map,
    ACTIONS(734), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [674] = 4,
    ACTIONS(812), 1,
      aux_sym__file_string_token1,
    STATE(54), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(810), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(808), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [690] = 6,
    ACTIONS(814), 1,
      anon_sym_DQUOTE,
    ACTIONS(816), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(819), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(822), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(61), 1,
      aux_sym__hosts_string_repeat2,
    STATE(165), 2,
      sym__hosts_token,
      sym_variable,
  [710] = 5,
    ACTIONS(825), 1,
      aux_sym__permit_remote_open_value_token2,
    ACTIONS(827), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_string_repeat2,
    ACTIONS(791), 2,
      aux_sym__log_verbose_quoted_token1,
      aux_sym__file_token_token1,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [728] = 2,
    ACTIONS(831), 1,
      aux_sym__file_string_token1,
    ACTIONS(829), 6,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [740] = 6,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    ACTIONS(833), 1,
      anon_sym_BANG,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(210), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [760] = 4,
    ACTIONS(837), 1,
      anon_sym_confirm,
    ACTIONS(839), 1,
      sym__number,
    STATE(379), 2,
      sym__boolean,
      sym_time,
    ACTIONS(835), 3,
      anon_sym_ask,
      anon_sym_yes,
      anon_sym_no,
  [776] = 7,
    ACTIONS(841), 1,
      anon_sym_none,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    ACTIONS(845), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(847), 1,
      aux_sym__file_string_token1,
    STATE(79), 1,
      aux_sym__proxy_string_content,
    STATE(121), 1,
      sym__proxy_token,
    STATE(314), 1,
      sym__proxy_string,
  [798] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(398), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [815] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(405), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [832] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(323), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [849] = 4,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(133), 1,
      sym__log_verbose_value,
    ACTIONS(849), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [864] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      aux_sym__file_string_token1,
    STATE(60), 1,
      aux_sym_pattern_repeat1,
    STATE(164), 1,
      sym_pattern,
    ACTIONS(853), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [881] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      aux_sym__file_string_token1,
    STATE(60), 1,
      aux_sym_pattern_repeat1,
    STATE(187), 1,
      sym_pattern,
    ACTIONS(853), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [898] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(430), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [915] = 2,
    ACTIONS(787), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(785), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [926] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(502), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [943] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      aux_sym__file_string_token1,
    STATE(94), 1,
      aux_sym_pattern_repeat1,
    STATE(187), 1,
      sym_pattern,
    ACTIONS(734), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [960] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(276), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [977] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      aux_sym__file_string_token1,
    STATE(60), 1,
      aux_sym_pattern_repeat1,
    STATE(188), 1,
      sym_pattern,
    ACTIONS(853), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [994] = 5,
    ACTIONS(845), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(847), 1,
      aux_sym__file_string_token1,
    STATE(81), 1,
      aux_sym__proxy_string_content,
    STATE(121), 1,
      sym__proxy_token,
    ACTIONS(857), 2,
      sym__space,
      sym__eol,
  [1011] = 6,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    ACTIONS(845), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(847), 1,
      aux_sym__file_string_token1,
    STATE(79), 1,
      aux_sym__proxy_string_content,
    STATE(121), 1,
      sym__proxy_token,
    STATE(493), 1,
      sym__proxy_string,
  [1030] = 5,
    ACTIONS(859), 1,
      aux_sym__proxy_token_token1,
    ACTIONS(862), 1,
      aux_sym__file_string_token1,
    STATE(81), 1,
      aux_sym__proxy_string_content,
    STATE(121), 1,
      sym__proxy_token,
    ACTIONS(865), 2,
      sym__space,
      sym__eol,
  [1047] = 2,
    ACTIONS(869), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(867), 5,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1058] = 4,
    ACTIONS(873), 1,
      aux_sym__file_string_token1,
    STATE(86), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(808), 2,
      sym__space,
      sym__eol,
    ACTIONS(871), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1073] = 5,
    ACTIONS(877), 1,
      anon_sym_STAR,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      aux_sym__permit_remote_open_value_token1,
    STATE(487), 1,
      sym__permit_remote_open_value,
    ACTIONS(875), 2,
      anon_sym_none,
      anon_sym_any,
  [1090] = 6,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    ACTIONS(885), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(887), 1,
      aux_sym__file_string_token1,
    STATE(95), 1,
      aux_sym__hostname_string_repeat1,
    STATE(159), 1,
      sym__hostname_token,
    STATE(485), 1,
      sym__hostname_string,
  [1109] = 4,
    ACTIONS(892), 1,
      aux_sym__file_string_token1,
    STATE(86), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(777), 2,
      sym__space,
      sym__eol,
    ACTIONS(889), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1124] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(217), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1141] = 5,
    ACTIONS(877), 1,
      anon_sym_STAR,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      aux_sym__permit_remote_open_value_token1,
    STATE(306), 1,
      sym__permit_remote_open_value,
    ACTIONS(895), 2,
      anon_sym_none,
      anon_sym_any,
  [1158] = 4,
    ACTIONS(900), 1,
      aux_sym__file_string_token1,
    STATE(89), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(777), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(897), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1173] = 5,
    ACTIONS(903), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(906), 1,
      aux_sym__file_string_token1,
    STATE(90), 1,
      aux_sym__hostname_string_repeat1,
    STATE(159), 1,
      sym__hostname_token,
    ACTIONS(909), 2,
      sym__space,
      sym__eol,
  [1190] = 5,
    ACTIONS(771), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(773), 1,
      aux_sym__hosts_token_token1,
    ACTIONS(775), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(53), 1,
      aux_sym__hosts_string_repeat2,
    STATE(165), 2,
      sym__hosts_token,
      sym_variable,
  [1207] = 5,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      aux_sym__file_string_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    STATE(458), 1,
      sym_pattern,
    ACTIONS(699), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1224] = 5,
    ACTIONS(791), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(793), 1,
      aux_sym__file_token_token1,
    ACTIONS(795), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(56), 1,
      aux_sym__file_string_repeat2,
    STATE(149), 2,
      sym__file_token,
      sym_variable,
  [1241] = 4,
    ACTIONS(913), 1,
      aux_sym__file_string_token1,
    STATE(89), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(808), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(911), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1256] = 5,
    ACTIONS(885), 1,
      aux_sym__hostname_token_token1,
    ACTIONS(887), 1,
      aux_sym__file_string_token1,
    STATE(90), 1,
      aux_sym__hostname_string_repeat1,
    STATE(159), 1,
      sym__hostname_token,
    ACTIONS(915), 2,
      sym__space,
      sym__eol,
  [1273] = 3,
    ACTIONS(919), 1,
      anon_sym_auto,
    STATE(521), 1,
      sym__boolean,
    ACTIONS(917), 4,
      anon_sym_ask,
      anon_sym_autoask,
      anon_sym_yes,
      anon_sym_no,
  [1286] = 3,
    ACTIONS(839), 1,
      sym__number,
    ACTIONS(921), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(520), 2,
      sym__boolean,
      sym_time,
  [1298] = 4,
    ACTIONS(923), 1,
      anon_sym_COLON,
    ACTIONS(927), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(108), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(925), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1312] = 5,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      sym_token,
    ACTIONS(933), 1,
      aux_sym__file_string_token1,
    STATE(109), 1,
      aux_sym__token_string_repeat1,
    STATE(468), 1,
      sym__token_string,
  [1328] = 4,
    ACTIONS(935), 1,
      sym_token,
    ACTIONS(938), 1,
      aux_sym__file_string_token1,
    STATE(100), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(941), 2,
      sym__space,
      sym__eol,
  [1342] = 2,
    ACTIONS(945), 1,
      aux_sym__file_string_token1,
    ACTIONS(943), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1352] = 5,
    ACTIONS(947), 1,
      anon_sym_DQUOTE,
    ACTIONS(949), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(952), 1,
      aux_sym__proxy_token_token1,
    STATE(102), 1,
      aux_sym__proxy_string_repeat1,
    STATE(335), 1,
      sym__proxy_token,
  [1368] = 4,
    ACTIONS(927), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(955), 1,
      anon_sym_COLON,
    STATE(108), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(925), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1382] = 3,
    STATE(113), 1,
      aux_sym__log_verbose_value_repeat1,
    STATE(277), 1,
      sym__log_verbose_value,
    ACTIONS(849), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1394] = 5,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
    ACTIONS(959), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(961), 1,
      aux_sym__hostname_token_token1,
    STATE(119), 1,
      aux_sym__hostname_string_repeat2,
    STATE(346), 1,
      sym__hostname_token,
  [1410] = 2,
    ACTIONS(965), 1,
      aux_sym__file_string_token1,
    ACTIONS(963), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1420] = 3,
    ACTIONS(967), 1,
      anon_sym_COLON,
    STATE(107), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(969), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1432] = 4,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(977), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(108), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(974), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1446] = 4,
    ACTIONS(931), 1,
      sym_token,
    ACTIONS(933), 1,
      aux_sym__file_string_token1,
    STATE(100), 1,
      aux_sym__token_string_repeat1,
    ACTIONS(980), 2,
      sym__space,
      sym__eol,
  [1460] = 3,
    ACTIONS(982), 1,
      anon_sym_COLON,
    STATE(107), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(984), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1472] = 4,
    ACTIONS(988), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(103), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(350), 1,
      sym__log_verbose_quoted,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1486] = 4,
    ACTIONS(988), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(103), 1,
      aux_sym__log_verbose_quoted_repeat1,
    STATE(342), 1,
      sym__log_verbose_quoted,
    ACTIONS(986), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1500] = 3,
    ACTIONS(990), 1,
      anon_sym_COLON,
    STATE(107), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(984), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [1512] = 5,
    ACTIONS(992), 1,
      anon_sym_DQUOTE,
    ACTIONS(994), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(996), 1,
      aux_sym__proxy_token_token1,
    STATE(102), 1,
      aux_sym__proxy_string_repeat1,
    STATE(335), 1,
      sym__proxy_token,
  [1528] = 4,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(118), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(998), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1542] = 2,
    ACTIONS(787), 1,
      aux_sym__file_string_token1,
    ACTIONS(785), 4,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1552] = 2,
    ACTIONS(787), 1,
      aux_sym__file_string_token1,
    ACTIONS(785), 4,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
      sym__eol,
  [1562] = 4,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    ACTIONS(1007), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(118), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1004), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1576] = 5,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1012), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1015), 1,
      aux_sym__hostname_token_token1,
    STATE(119), 1,
      aux_sym__hostname_string_repeat2,
    STATE(346), 1,
      sym__hostname_token,
  [1592] = 5,
    ACTIONS(929), 1,
      anon_sym_DQUOTE,
    ACTIONS(931), 1,
      sym_token,
    ACTIONS(933), 1,
      aux_sym__file_string_token1,
    STATE(109), 1,
      aux_sym__token_string_repeat1,
    STATE(191), 1,
      sym__token_string,
  [1608] = 2,
    ACTIONS(1020), 1,
      aux_sym__file_string_token1,
    ACTIONS(1018), 3,
      aux_sym__proxy_token_token1,
      sym__space,
      sym__eol,
  [1617] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1024), 2,
      sym__space,
      sym__eol,
  [1628] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1028), 2,
      sym__space,
      sym__eol,
  [1639] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1030), 2,
      sym__space,
      sym__eol,
  [1650] = 3,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1035), 2,
      sym__space,
      sym__eol,
  [1661] = 4,
    ACTIONS(1037), 1,
      anon_sym_DQUOTE,
    ACTIONS(1039), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1042), 1,
      sym_token,
    STATE(126), 1,
      aux_sym__token_string_repeat2,
  [1674] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1047), 2,
      sym__space,
      sym__eol,
  [1685] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1051), 2,
      sym__space,
      sym__eol,
  [1696] = 4,
    ACTIONS(994), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(996), 1,
      aux_sym__proxy_token_token1,
    STATE(114), 1,
      aux_sym__proxy_string_repeat1,
    STATE(335), 1,
      sym__proxy_token,
  [1709] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1055), 2,
      sym__space,
      sym__eol,
  [1720] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1059), 2,
      sym__space,
      sym__eol,
  [1731] = 3,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1064), 2,
      sym__space,
      sym__eol,
  [1742] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1068), 2,
      sym__space,
      sym__eol,
  [1753] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1070), 2,
      sym__space,
      sym__eol,
  [1764] = 3,
    ACTIONS(1072), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1075), 2,
      sym__space,
      sym__eol,
  [1775] = 3,
    ACTIONS(1079), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(98), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1077), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1786] = 3,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1084), 2,
      sym__space,
      sym__eol,
  [1797] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1086), 2,
      sym__space,
      sym__eol,
  [1808] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1086), 2,
      sym__space,
      sym__eol,
  [1819] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1088), 2,
      sym__space,
      sym__eol,
  [1830] = 3,
    ACTIONS(1092), 1,
      aux_sym__log_verbose_quoted_token1,
    STATE(115), 1,
      aux_sym__log_verbose_quoted_repeat1,
    ACTIONS(1090), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
  [1841] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1094), 2,
      sym__space,
      sym__eol,
  [1852] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1094), 2,
      sym__space,
      sym__eol,
  [1863] = 2,
    ACTIONS(1098), 1,
      aux_sym__file_string_token1,
    ACTIONS(1096), 3,
      sym_token,
      sym__space,
      sym__eol,
  [1872] = 3,
    ACTIONS(1100), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1103), 2,
      sym__space,
      sym__eol,
  [1883] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1105), 2,
      sym__space,
      sym__eol,
  [1894] = 3,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1110), 2,
      sym__space,
      sym__eol,
  [1905] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1105), 2,
      sym__space,
      sym__eol,
  [1916] = 2,
    ACTIONS(1114), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1112), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [1925] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1116), 2,
      sym__space,
      sym__eol,
  [1936] = 2,
    ACTIONS(1120), 1,
      sym_cipher,
    ACTIONS(1118), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [1945] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1122), 2,
      sym__space,
      sym__eol,
  [1956] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1124), 2,
      sym__space,
      sym__eol,
  [1967] = 3,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1129), 2,
      sym__space,
      sym__eol,
  [1978] = 3,
    ACTIONS(1133), 1,
      sym__number,
    STATE(460), 1,
      sym_number,
    ACTIONS(1131), 2,
      anon_sym_none,
      sym_ipqos,
  [1989] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1028), 2,
      sym__space,
      sym__eol,
  [2000] = 3,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__kex_algorithms_repeat1,
    ACTIONS(1024), 2,
      sym__space,
      sym__eol,
  [2011] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1137), 2,
      sym__space,
      sym__eol,
  [2022] = 2,
    ACTIONS(1141), 1,
      aux_sym__file_string_token1,
    ACTIONS(1139), 3,
      aux_sym__hostname_token_token1,
      sym__space,
      sym__eol,
  [2031] = 4,
    ACTIONS(959), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(961), 1,
      aux_sym__hostname_token_token1,
    STATE(105), 1,
      aux_sym__hostname_string_repeat2,
    STATE(346), 1,
      sym__hostname_token,
  [2044] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1143), 2,
      sym__space,
      sym__eol,
  [2055] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1145), 2,
      sym__space,
      sym__eol,
  [2066] = 3,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__ciphers_repeat1,
    ACTIONS(1147), 2,
      sym__space,
      sym__eol,
  [2077] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1149), 2,
      sym__space,
      sym__eol,
  [2088] = 2,
    ACTIONS(1153), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1151), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2097] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1155), 2,
      sym__space,
      sym__eol,
  [2108] = 3,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1160), 2,
      sym__space,
      sym__eol,
  [2119] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1162), 2,
      sym__space,
      sym__eol,
  [2130] = 1,
    ACTIONS(1164), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__space,
      sym__eol,
  [2137] = 2,
    ACTIONS(1168), 1,
      sym_key_sig,
    ACTIONS(1166), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2146] = 4,
    ACTIONS(1170), 1,
      anon_sym_DQUOTE,
    ACTIONS(1172), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1174), 1,
      sym_token,
    STATE(126), 1,
      aux_sym__token_string_repeat2,
  [2159] = 2,
    ACTIONS(1178), 1,
      sym_key_sig,
    ACTIONS(1176), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2168] = 3,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym__log_verbose_repeat1,
    ACTIONS(1180), 2,
      sym__space,
      sym__eol,
  [2179] = 2,
    ACTIONS(1184), 1,
      sym_key_sig,
    ACTIONS(1182), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2188] = 2,
    STATE(110), 1,
      aux_sym__log_verbose_value_repeat1,
    ACTIONS(1186), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym__log_verbose_value_token1,
  [2197] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1188), 2,
      sym__space,
      sym__eol,
  [2208] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym__macs_repeat1,
    ACTIONS(1188), 2,
      sym__space,
      sym__eol,
  [2219] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym__preferred_authentications_repeat1,
    ACTIONS(1190), 2,
      sym__space,
      sym__eol,
  [2230] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1192), 2,
      sym__space,
      sym__eol,
  [2241] = 3,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__hostbased_accepted_algorithms_repeat1,
    ACTIONS(1192), 2,
      sym__space,
      sym__eol,
  [2252] = 3,
    ACTIONS(1133), 1,
      sym__number,
    STATE(477), 1,
      sym_number,
    ACTIONS(1194), 2,
      anon_sym_none,
      sym_ipqos,
  [2263] = 1,
    ACTIONS(1196), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2270] = 2,
    ACTIONS(1200), 1,
      sym_kex,
    ACTIONS(1198), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2279] = 2,
    ACTIONS(787), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(785), 3,
      anon_sym_DQUOTE,
      aux_sym__file_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2288] = 4,
    ACTIONS(1202), 1,
      aux_sym_time_token2,
    ACTIONS(1204), 1,
      aux_sym_time_token3,
    ACTIONS(1206), 1,
      aux_sym_time_token4,
    ACTIONS(1208), 1,
      aux_sym_time_token5,
  [2301] = 2,
    ACTIONS(787), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(785), 3,
      anon_sym_DQUOTE,
      aux_sym__hosts_token_token1,
      anon_sym_DOLLAR_LBRACE,
  [2310] = 1,
    ACTIONS(1160), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2317] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__cnames_map_repeat1,
    ACTIONS(1210), 2,
      sym__space,
      sym__eol,
  [2328] = 2,
    ACTIONS(1214), 1,
      sym_mac,
    ACTIONS(1212), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2337] = 3,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym__ca_signature_algorithms_repeat1,
    ACTIONS(1216), 2,
      sym__space,
      sym__eol,
  [2348] = 3,
    ACTIONS(1218), 1,
      sym__space,
    ACTIONS(1220), 1,
      sym__eol,
    STATE(343), 1,
      aux_sym__local_command_repeat1,
  [2358] = 3,
    ACTIONS(1222), 1,
      aux_sym__sep_token1,
    ACTIONS(1224), 1,
      sym__space,
    STATE(195), 1,
      sym__sep,
  [2368] = 2,
    STATE(497), 1,
      sym__boolean,
    ACTIONS(1226), 2,
      anon_sym_yes,
      anon_sym_no,
  [2376] = 2,
    STATE(492), 1,
      sym__boolean,
    ACTIONS(1228), 2,
      anon_sym_yes,
      anon_sym_no,
  [2384] = 3,
    ACTIONS(637), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    STATE(489), 1,
      sym_string,
  [2394] = 2,
    STATE(484), 1,
      sym__boolean,
    ACTIONS(1230), 2,
      anon_sym_yes,
      anon_sym_no,
  [2402] = 2,
    STATE(476), 1,
      sym__boolean,
    ACTIONS(1232), 2,
      anon_sym_yes,
      anon_sym_no,
  [2410] = 3,
    ACTIONS(1234), 1,
      aux_sym__sep_token1,
    ACTIONS(1236), 1,
      sym__space,
    STATE(65), 1,
      sym__sep,
  [2420] = 2,
    STATE(451), 1,
      sym__boolean,
    ACTIONS(1238), 2,
      anon_sym_yes,
      anon_sym_no,
  [2428] = 3,
    ACTIONS(1240), 1,
      aux_sym__sep_token1,
    ACTIONS(1242), 1,
      sym__space,
    STATE(465), 1,
      sym__sep,
  [2438] = 2,
    STATE(449), 1,
      sym__boolean,
    ACTIONS(1244), 2,
      anon_sym_yes,
      anon_sym_no,
  [2446] = 2,
    STATE(447), 1,
      sym__boolean,
    ACTIONS(1246), 2,
      anon_sym_yes,
      anon_sym_no,
  [2454] = 3,
    ACTIONS(637), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym_string,
  [2464] = 3,
    ACTIONS(1248), 1,
      aux_sym__sep_token1,
    ACTIONS(1250), 1,
      sym__space,
    STATE(288), 1,
      sym__sep,
  [2474] = 3,
    ACTIONS(1252), 1,
      aux_sym__sep_token1,
    ACTIONS(1254), 1,
      sym__space,
    STATE(67), 1,
      sym__sep,
  [2484] = 3,
    ACTIONS(1256), 1,
      anon_sym_none,
    ACTIONS(1258), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(1260), 1,
      aux_sym__proxy_jump_arg_token1,
  [2494] = 2,
    STATE(434), 1,
      sym__boolean,
    ACTIONS(1262), 2,
      anon_sym_yes,
      anon_sym_no,
  [2502] = 3,
    ACTIONS(1264), 1,
      aux_sym__sep_token1,
    ACTIONS(1266), 1,
      sym__space,
    STATE(68), 1,
      sym__sep,
  [2512] = 3,
    ACTIONS(1268), 1,
      aux_sym__sep_token1,
    ACTIONS(1270), 1,
      sym__space,
    STATE(87), 1,
      sym__sep,
  [2522] = 3,
    ACTIONS(1272), 1,
      sym__space,
    ACTIONS(1274), 1,
      sym__eol,
    STATE(327), 1,
      aux_sym_host_declaration_repeat1,
  [2532] = 3,
    ACTIONS(1276), 1,
      aux_sym__sep_token1,
    ACTIONS(1278), 1,
      sym__space,
    STATE(287), 1,
      sym__sep,
  [2542] = 3,
    ACTIONS(1280), 1,
      aux_sym__sep_token1,
    ACTIONS(1282), 1,
      sym__space,
    STATE(286), 1,
      sym__sep,
  [2552] = 3,
    ACTIONS(1284), 1,
      aux_sym__sep_token1,
    ACTIONS(1286), 1,
      sym__space,
    STATE(469), 1,
      sym__sep,
  [2562] = 3,
    ACTIONS(1288), 1,
      aux_sym__sep_token1,
    ACTIONS(1290), 1,
      sym__space,
    STATE(46), 1,
      sym__sep,
  [2572] = 3,
    ACTIONS(1292), 1,
      aux_sym__sep_token1,
    ACTIONS(1294), 1,
      sym__space,
    STATE(282), 1,
      sym__sep,
  [2582] = 3,
    ACTIONS(1296), 1,
      aux_sym__sep_token1,
    ACTIONS(1298), 1,
      sym__space,
    STATE(35), 1,
      sym__sep,
  [2592] = 3,
    ACTIONS(1300), 1,
      sym__space,
    ACTIONS(1302), 1,
      sym__eol,
    STATE(336), 1,
      aux_sym__canonical_domains_repeat1,
  [2602] = 2,
    ACTIONS(1304), 1,
      sym__number,
    ACTIONS(1306), 2,
      sym__space,
      sym__eol,
  [2610] = 2,
    ACTIONS(1308), 1,
      sym__number,
    ACTIONS(1310), 2,
      sym__space,
      sym__eol,
  [2618] = 2,
    ACTIONS(1312), 1,
      sym__number,
    ACTIONS(1310), 2,
      sym__space,
      sym__eol,
  [2626] = 3,
    ACTIONS(1314), 1,
      aux_sym__sep_token1,
    ACTIONS(1316), 1,
      sym__space,
    STATE(281), 1,
      sym__sep,
  [2636] = 3,
    ACTIONS(1318), 1,
      aux_sym__sep_token1,
    ACTIONS(1320), 1,
      sym__space,
    STATE(151), 1,
      sym__sep,
  [2646] = 3,
    ACTIONS(1322), 1,
      sym__space,
    ACTIONS(1324), 1,
      sym__eol,
    STATE(338), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [2656] = 3,
    ACTIONS(1326), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_COLON,
    STATE(341), 1,
      aux_sym__cnames_map_repeat1,
  [2666] = 1,
    ACTIONS(1330), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [2672] = 3,
    ACTIONS(637), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_string,
  [2682] = 2,
    STATE(499), 1,
      sym__boolean,
    ACTIONS(1332), 2,
      anon_sym_yes,
      anon_sym_no,
  [2690] = 3,
    ACTIONS(1133), 1,
      sym__number,
    ACTIONS(1334), 1,
      anon_sym_STAR,
    STATE(433), 1,
      sym_number,
  [2700] = 3,
    ACTIONS(1336), 1,
      aux_sym__sep_token1,
    ACTIONS(1338), 1,
      sym__space,
    STATE(280), 1,
      sym__sep,
  [2710] = 3,
    ACTIONS(1340), 1,
      aux_sym_time_token3,
    ACTIONS(1342), 1,
      aux_sym_time_token4,
    ACTIONS(1344), 1,
      aux_sym_time_token5,
  [2720] = 2,
    STATE(501), 1,
      sym__boolean,
    ACTIONS(1346), 2,
      anon_sym_yes,
      anon_sym_no,
  [2728] = 3,
    ACTIONS(1348), 1,
      aux_sym__sep_token1,
    ACTIONS(1350), 1,
      sym__space,
    STATE(274), 1,
      sym__sep,
  [2738] = 3,
    ACTIONS(1352), 1,
      aux_sym__sep_token1,
    ACTIONS(1354), 1,
      sym__space,
    STATE(480), 1,
      sym__sep,
  [2748] = 2,
    STATE(509), 1,
      sym__boolean,
    ACTIONS(1356), 2,
      anon_sym_yes,
      anon_sym_no,
  [2756] = 3,
    ACTIONS(1358), 1,
      aux_sym__sep_token1,
    ACTIONS(1360), 1,
      sym__space,
    STATE(481), 1,
      sym__sep,
  [2766] = 3,
    ACTIONS(1362), 1,
      aux_sym__sep_token1,
    ACTIONS(1364), 1,
      sym__space,
    STATE(96), 1,
      sym__sep,
  [2776] = 3,
    ACTIONS(1366), 1,
      aux_sym__sep_token1,
    ACTIONS(1368), 1,
      sym__space,
    STATE(97), 1,
      sym__sep,
  [2786] = 3,
    ACTIONS(1133), 1,
      sym__number,
    ACTIONS(1370), 1,
      anon_sym_STAR,
    STATE(225), 1,
      sym_number,
  [2796] = 3,
    ACTIONS(1372), 1,
      aux_sym__sep_token1,
    ACTIONS(1374), 1,
      sym__space,
    STATE(33), 1,
      sym__sep,
  [2806] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      aux_sym__log_verbose_repeat2,
  [2816] = 3,
    ACTIONS(1381), 1,
      aux_sym__sep_token1,
    ACTIONS(1383), 1,
      sym__space,
    STATE(268), 1,
      sym__sep,
  [2826] = 3,
    ACTIONS(1385), 1,
      aux_sym__sep_token1,
    ACTIONS(1387), 1,
      sym__space,
    STATE(266), 1,
      sym__sep,
  [2836] = 2,
    ACTIONS(1389), 1,
      sym__number,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2844] = 2,
    ACTIONS(1393), 1,
      sym__number,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2852] = 2,
    ACTIONS(1395), 1,
      sym__number,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [2860] = 3,
    ACTIONS(1397), 1,
      aux_sym__sep_token1,
    ACTIONS(1399), 1,
      sym__space,
    STATE(488), 1,
      sym__sep,
  [2870] = 3,
    ACTIONS(1401), 1,
      aux_sym__sep_token1,
    ACTIONS(1403), 1,
      sym__space,
    STATE(263), 1,
      sym__sep,
  [2880] = 3,
    ACTIONS(1405), 1,
      aux_sym__sep_token1,
    ACTIONS(1407), 1,
      sym__space,
    STATE(494), 1,
      sym__sep,
  [2890] = 1,
    ACTIONS(1409), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [2896] = 3,
    ACTIONS(1411), 1,
      aux_sym__sep_token1,
    ACTIONS(1413), 1,
      sym__space,
    STATE(234), 1,
      sym__sep,
  [2906] = 3,
    ACTIONS(1415), 1,
      aux_sym__sep_token1,
    ACTIONS(1417), 1,
      sym__space,
    STATE(51), 1,
      sym__sep,
  [2916] = 3,
    ACTIONS(1419), 1,
      aux_sym__sep_token1,
    ACTIONS(1421), 1,
      sym__space,
    STATE(231), 1,
      sym__sep,
  [2926] = 3,
    ACTIONS(1423), 1,
      aux_sym__sep_token1,
    ACTIONS(1425), 1,
      sym__space,
    STATE(470), 1,
      sym__sep,
  [2936] = 3,
    ACTIONS(1427), 1,
      aux_sym__sep_token1,
    ACTIONS(1429), 1,
      sym__space,
    STATE(227), 1,
      sym__sep,
  [2946] = 3,
    ACTIONS(1431), 1,
      aux_sym__sep_token1,
    ACTIONS(1433), 1,
      sym__space,
    STATE(226), 1,
      sym__sep,
  [2956] = 3,
    ACTIONS(1435), 1,
      sym__space,
    ACTIONS(1437), 1,
      sym__eol,
    STATE(347), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [2966] = 3,
    ACTIONS(1439), 1,
      aux_sym__sep_token1,
    ACTIONS(1441), 1,
      sym__space,
    STATE(272), 1,
      sym__sep,
  [2976] = 3,
    ACTIONS(1443), 1,
      aux_sym__sep_token1,
    ACTIONS(1445), 1,
      sym__space,
    STATE(193), 1,
      sym__sep,
  [2986] = 2,
    ACTIONS(1447), 1,
      anon_sym_COLON,
    ACTIONS(1449), 2,
      sym__space,
      sym__eol,
  [2994] = 3,
    ACTIONS(1451), 1,
      sym__space,
    ACTIONS(1454), 1,
      sym__eol,
    STATE(260), 1,
      aux_sym__proxy_command_arg_repeat1,
  [3004] = 3,
    ACTIONS(1456), 1,
      aux_sym__sep_token1,
    ACTIONS(1458), 1,
      sym__space,
    STATE(172), 1,
      sym__sep,
  [3014] = 3,
    ACTIONS(1460), 1,
      aux_sym__sep_token1,
    ACTIONS(1462), 1,
      sym__space,
    STATE(194), 1,
      sym__sep,
  [3024] = 2,
    STATE(511), 1,
      sym__boolean,
    ACTIONS(1464), 2,
      anon_sym_yes,
      anon_sym_no,
  [3032] = 1,
    ACTIONS(1110), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3038] = 3,
    ACTIONS(1466), 1,
      sym__space,
    ACTIONS(1469), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym__permit_remote_open_repeat1,
  [3048] = 2,
    STATE(513), 1,
      sym__boolean,
    ACTIONS(1471), 2,
      anon_sym_yes,
      anon_sym_no,
  [3056] = 3,
    ACTIONS(1133), 1,
      sym__number,
    ACTIONS(1473), 1,
      anon_sym_STAR,
    STATE(550), 1,
      sym_number,
  [3066] = 2,
    STATE(515), 1,
      sym__boolean,
    ACTIONS(1475), 2,
      anon_sym_yes,
      anon_sym_no,
  [3074] = 3,
    ACTIONS(1133), 1,
      sym__number,
    ACTIONS(1477), 1,
      anon_sym_STAR,
    STATE(573), 1,
      sym_number,
  [3084] = 3,
    ACTIONS(1479), 1,
      aux_sym__sep_token1,
    ACTIONS(1481), 1,
      sym__space,
    STATE(174), 1,
      sym__sep,
  [3094] = 1,
    ACTIONS(1103), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3100] = 2,
    STATE(498), 1,
      sym__boolean,
    ACTIONS(1483), 2,
      anon_sym_yes,
      anon_sym_no,
  [3108] = 3,
    ACTIONS(1485), 1,
      aux_sym__sep_token1,
    ACTIONS(1487), 1,
      sym__space,
    STATE(85), 1,
      sym__sep,
  [3118] = 2,
    STATE(507), 1,
      sym__boolean,
    ACTIONS(1489), 2,
      anon_sym_yes,
      anon_sym_no,
  [3126] = 3,
    ACTIONS(1491), 1,
      aux_sym__sep_token1,
    ACTIONS(1493), 1,
      sym__space,
    STATE(196), 1,
      sym__sep,
  [3136] = 3,
    ACTIONS(1495), 1,
      sym__space,
    ACTIONS(1497), 1,
      sym__eol,
    STATE(345), 1,
      aux_sym__ignore_unknown_repeat1,
  [3146] = 1,
    ACTIONS(1499), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3152] = 3,
    ACTIONS(1501), 1,
      aux_sym__sep_token1,
    ACTIONS(1503), 1,
      sym__space,
    STATE(31), 1,
      sym__sep,
  [3162] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      aux_sym__log_verbose_repeat2,
  [3172] = 2,
    STATE(504), 1,
      sym__boolean,
    ACTIONS(1509), 2,
      anon_sym_yes,
      anon_sym_no,
  [3180] = 2,
    STATE(495), 1,
      sym__boolean,
    ACTIONS(1511), 2,
      anon_sym_yes,
      anon_sym_no,
  [3188] = 2,
    ACTIONS(1515), 1,
      sym_sig,
    ACTIONS(1513), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3196] = 3,
    ACTIONS(1517), 1,
      aux_sym__sep_token1,
    ACTIONS(1519), 1,
      sym__space,
    STATE(42), 1,
      sym__sep,
  [3206] = 3,
    ACTIONS(1521), 1,
      sym__space,
    ACTIONS(1524), 1,
      sym__eol,
    STATE(284), 1,
      aux_sym__local_command_repeat1,
  [3216] = 3,
    ACTIONS(1172), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1174), 1,
      sym_token,
    STATE(171), 1,
      aux_sym__token_string_repeat2,
  [3226] = 2,
    STATE(444), 1,
      sym__boolean,
    ACTIONS(1526), 2,
      anon_sym_yes,
      anon_sym_no,
  [3234] = 2,
    STATE(426), 1,
      sym__boolean,
    ACTIONS(1528), 2,
      anon_sym_yes,
      anon_sym_no,
  [3242] = 2,
    STATE(394), 1,
      sym__boolean,
    ACTIONS(1530), 2,
      anon_sym_yes,
      anon_sym_no,
  [3250] = 3,
    ACTIONS(1532), 1,
      aux_sym__sep_token1,
    ACTIONS(1534), 1,
      sym__space,
    STATE(77), 1,
      sym__sep,
  [3260] = 3,
    ACTIONS(1536), 1,
      aux_sym__sep_token1,
    ACTIONS(1538), 1,
      sym__space,
    STATE(181), 1,
      sym__sep,
  [3270] = 3,
    ACTIONS(1540), 1,
      aux_sym__sep_token1,
    ACTIONS(1542), 1,
      sym__space,
    STATE(197), 1,
      sym__sep,
  [3280] = 1,
    ACTIONS(1035), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3286] = 3,
    ACTIONS(1544), 1,
      aux_sym__sep_token1,
    ACTIONS(1546), 1,
      sym__space,
    STATE(183), 1,
      sym__sep,
  [3296] = 3,
    ACTIONS(1548), 1,
      sym__space,
    ACTIONS(1551), 1,
      sym__eol,
    STATE(294), 1,
      aux_sym__ignore_unknown_repeat1,
  [3306] = 3,
    ACTIONS(1553), 1,
      aux_sym__sep_token1,
    ACTIONS(1555), 1,
      sym__space,
    STATE(40), 1,
      sym__sep,
  [3316] = 3,
    ACTIONS(1557), 1,
      aux_sym__sep_token1,
    ACTIONS(1559), 1,
      sym__space,
    STATE(120), 1,
      sym__sep,
  [3326] = 3,
    ACTIONS(1561), 1,
      aux_sym__sep_token1,
    ACTIONS(1563), 1,
      sym__space,
    STATE(30), 1,
      sym__sep,
  [3336] = 3,
    ACTIONS(1565), 1,
      aux_sym__sep_token1,
    ACTIONS(1567), 1,
      sym__space,
    STATE(524), 1,
      sym__sep,
  [3346] = 1,
    ACTIONS(1075), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3352] = 3,
    ACTIONS(1569), 1,
      aux_sym__sep_token1,
    ACTIONS(1571), 1,
      sym__space,
    STATE(70), 1,
      sym__sep,
  [3362] = 3,
    ACTIONS(1573), 1,
      sym__space,
    ACTIONS(1576), 1,
      sym__eol,
    STATE(301), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3372] = 1,
    ACTIONS(1578), 3,
      anon_sym_COLON,
      sym__space,
      sym__eol,
  [3378] = 3,
    ACTIONS(1580), 1,
      aux_sym__sep_token1,
    ACTIONS(1582), 1,
      sym__space,
    STATE(189), 1,
      sym__sep,
  [3388] = 1,
    ACTIONS(1129), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3394] = 3,
    ACTIONS(1584), 1,
      aux_sym__sep_token1,
    ACTIONS(1586), 1,
      sym__space,
    STATE(199), 1,
      sym__sep,
  [3404] = 3,
    ACTIONS(1588), 1,
      sym__space,
    ACTIONS(1590), 1,
      sym__eol,
    STATE(337), 1,
      aux_sym__permit_remote_open_repeat1,
  [3414] = 3,
    ACTIONS(1592), 1,
      aux_sym__sep_token1,
    ACTIONS(1594), 1,
      sym__space,
    STATE(355), 1,
      sym__sep,
  [3424] = 3,
    ACTIONS(1596), 1,
      aux_sym__sep_token1,
    ACTIONS(1598), 1,
      sym__space,
    STATE(201), 1,
      sym__sep,
  [3434] = 3,
    ACTIONS(1600), 1,
      aux_sym__sep_token1,
    ACTIONS(1602), 1,
      sym__space,
    STATE(64), 1,
      sym__sep,
  [3444] = 1,
    ACTIONS(1064), 3,
      anon_sym_COMMA,
      sym__space,
      sym__eol,
  [3450] = 3,
    ACTIONS(1604), 1,
      aux_sym__sep_token1,
    ACTIONS(1606), 1,
      sym__space,
    STATE(202), 1,
      sym__sep,
  [3460] = 3,
    ACTIONS(1608), 1,
      aux_sym__sep_token1,
    ACTIONS(1610), 1,
      sym__space,
    STATE(88), 1,
      sym__sep,
  [3470] = 3,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym__cnames_map_repeat1,
  [3480] = 3,
    ACTIONS(1615), 1,
      sym__space,
    ACTIONS(1617), 1,
      sym__eol,
    STATE(334), 1,
      aux_sym__proxy_command_arg_repeat1,
  [3490] = 3,
    ACTIONS(1619), 1,
      aux_sym__sep_token1,
    ACTIONS(1621), 1,
      sym__space,
    STATE(203), 1,
      sym__sep,
  [3500] = 3,
    ACTIONS(1623), 1,
      aux_sym__sep_token1,
    ACTIONS(1625), 1,
      sym__space,
    STATE(357), 1,
      sym__sep,
  [3510] = 2,
    ACTIONS(1627), 1,
      anon_sym_COLON,
    ACTIONS(1629), 2,
      sym__space,
      sym__eol,
  [3518] = 3,
    ACTIONS(1631), 1,
      aux_sym__sep_token1,
    ACTIONS(1633), 1,
      sym__space,
    STATE(562), 1,
      sym__sep,
  [3528] = 3,
    ACTIONS(1635), 1,
      sym__space,
    ACTIONS(1638), 1,
      sym__eol,
    STATE(319), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3538] = 3,
    ACTIONS(1640), 1,
      sym__space,
    ACTIONS(1643), 1,
      sym__eol,
    STATE(320), 1,
      aux_sym__canonical_domains_repeat1,
  [3548] = 3,
    ACTIONS(1204), 1,
      aux_sym_time_token3,
    ACTIONS(1206), 1,
      aux_sym_time_token4,
    ACTIONS(1208), 1,
      aux_sym_time_token5,
  [3558] = 3,
    ACTIONS(1645), 1,
      aux_sym__sep_token1,
    ACTIONS(1647), 1,
      sym__space,
    STATE(66), 1,
      sym__sep,
  [3568] = 3,
    ACTIONS(1649), 1,
      sym__space,
    ACTIONS(1651), 1,
      sym__eol,
    STATE(329), 1,
      aux_sym_host_declaration_repeat1,
  [3578] = 3,
    ACTIONS(1653), 1,
      sym__space,
    ACTIONS(1656), 1,
      sym__eol,
    STATE(324), 1,
      aux_sym_host_declaration_repeat1,
  [3588] = 3,
    ACTIONS(1658), 1,
      aux_sym__sep_token1,
    ACTIONS(1660), 1,
      sym__space,
    STATE(206), 1,
      sym__sep,
  [3598] = 3,
    ACTIONS(1662), 1,
      aux_sym__sep_token1,
    ACTIONS(1664), 1,
      sym__space,
    STATE(207), 1,
      sym__sep,
  [3608] = 3,
    ACTIONS(1666), 1,
      sym__space,
    ACTIONS(1668), 1,
      sym__eol,
    STATE(324), 1,
      aux_sym_host_declaration_repeat1,
  [3618] = 3,
    ACTIONS(1670), 1,
      aux_sym__sep_token1,
    ACTIONS(1672), 1,
      sym__space,
    STATE(170), 1,
      sym__sep,
  [3628] = 3,
    ACTIONS(1674), 1,
      sym__space,
    ACTIONS(1676), 1,
      sym__eol,
    STATE(324), 1,
      aux_sym_host_declaration_repeat1,
  [3638] = 2,
    ACTIONS(1678), 1,
      sym__number,
    ACTIONS(1680), 2,
      sym__space,
      sym__eol,
  [3646] = 2,
    ACTIONS(1682), 1,
      sym__number,
    ACTIONS(1680), 2,
      sym__space,
      sym__eol,
  [3654] = 2,
    ACTIONS(1684), 1,
      sym__number,
    ACTIONS(1680), 2,
      sym__space,
      sym__eol,
  [3662] = 2,
    ACTIONS(1686), 1,
      sym__number,
    ACTIONS(1680), 2,
      sym__space,
      sym__eol,
  [3670] = 3,
    ACTIONS(1615), 1,
      sym__space,
    ACTIONS(1688), 1,
      sym__eol,
    STATE(260), 1,
      aux_sym__proxy_command_arg_repeat1,
  [3680] = 2,
    ACTIONS(1692), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1690), 2,
      anon_sym_DQUOTE,
      aux_sym__proxy_token_token1,
  [3688] = 3,
    ACTIONS(1300), 1,
      sym__space,
    ACTIONS(1694), 1,
      sym__eol,
    STATE(320), 1,
      aux_sym__canonical_domains_repeat1,
  [3698] = 3,
    ACTIONS(1588), 1,
      sym__space,
    ACTIONS(1696), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym__permit_remote_open_repeat1,
  [3708] = 3,
    ACTIONS(1322), 1,
      sym__space,
    ACTIONS(1698), 1,
      sym__eol,
    STATE(319), 1,
      aux_sym__canonicalize_permitted_cnames_repeat1,
  [3718] = 3,
    ACTIONS(1133), 1,
      sym__number,
    ACTIONS(1700), 1,
      anon_sym_STAR,
    STATE(486), 1,
      sym_number,
  [3728] = 3,
    ACTIONS(1133), 1,
      sym__number,
    ACTIONS(1702), 1,
      anon_sym_STAR,
    STATE(483), 1,
      sym_number,
  [3738] = 3,
    ACTIONS(1326), 1,
      anon_sym_COMMA,
    ACTIONS(1704), 1,
      anon_sym_COLON,
    STATE(313), 1,
      aux_sym__cnames_map_repeat1,
  [3748] = 3,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1706), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      aux_sym__log_verbose_repeat2,
  [3758] = 3,
    ACTIONS(1218), 1,
      sym__space,
    ACTIONS(1708), 1,
      sym__eol,
    STATE(284), 1,
      aux_sym__local_command_repeat1,
  [3768] = 2,
    ACTIONS(1712), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1710), 2,
      anon_sym_DQUOTE,
      sym_token,
  [3776] = 3,
    ACTIONS(1495), 1,
      sym__space,
    ACTIONS(1714), 1,
      sym__eol,
    STATE(294), 1,
      aux_sym__ignore_unknown_repeat1,
  [3786] = 2,
    ACTIONS(1718), 1,
      aux_sym__log_verbose_quoted_token1,
    ACTIONS(1716), 2,
      anon_sym_DQUOTE,
      aux_sym__hostname_token_token1,
  [3794] = 3,
    ACTIONS(1435), 1,
      sym__space,
    ACTIONS(1720), 1,
      sym__eol,
    STATE(301), 1,
      aux_sym__global_known_hosts_file_repeat1,
  [3804] = 3,
    ACTIONS(637), 1,
      aux_sym__permit_remote_open_value_token1,
    ACTIONS(753), 1,
      anon_sym_DQUOTE,
    STATE(448), 1,
      sym_string,
  [3814] = 1,
    ACTIONS(1722), 2,
      sym__space,
      sym__eol,
  [3819] = 1,
    ACTIONS(1724), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [3824] = 1,
    ACTIONS(1726), 2,
      sym__space,
      sym__eol,
  [3829] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3834] = 1,
    ACTIONS(1730), 2,
      sym__space,
      sym__eol,
  [3839] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3844] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(450), 1,
      sym_number,
  [3851] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3856] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(442), 1,
      sym_number,
  [3863] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3868] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3873] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3878] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3883] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3888] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3893] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3898] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3903] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3908] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3913] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3918] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3923] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3928] = 2,
    ACTIONS(1732), 1,
      sym__space,
    ACTIONS(1734), 1,
      sym__eol,
  [3935] = 1,
    ACTIONS(1726), 2,
      sym__space,
      sym__eol,
  [3940] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3945] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3950] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3955] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3960] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3965] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3970] = 1,
    ACTIONS(1736), 2,
      sym__space,
      sym__eol,
  [3975] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3980] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(537), 1,
      sym_number,
  [3987] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3992] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [3997] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4002] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4007] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4012] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4017] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4022] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4027] = 2,
    ACTIONS(1736), 1,
      sym__eol,
    ACTIONS(1738), 1,
      sym__space,
  [4034] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4039] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4044] = 1,
    ACTIONS(1740), 2,
      sym__space,
      sym__eol,
  [4049] = 1,
    ACTIONS(1742), 2,
      sym__space,
      sym__eol,
  [4054] = 1,
    ACTIONS(1744), 2,
      sym__space,
      sym__eol,
  [4059] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4064] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4069] = 1,
    ACTIONS(1746), 2,
      sym__space,
      sym__eol,
  [4074] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4079] = 1,
    ACTIONS(1748), 2,
      sym__space,
      sym__eol,
  [4084] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4089] = 1,
    ACTIONS(1750), 2,
      sym__space,
      sym__eol,
  [4094] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4099] = 1,
    ACTIONS(1680), 2,
      sym__space,
      sym__eol,
  [4104] = 1,
    ACTIONS(1752), 2,
      sym__space,
      sym__eol,
  [4109] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(496), 1,
      sym_number,
  [4116] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4121] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4126] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4131] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4136] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4141] = 2,
    ACTIONS(839), 1,
      sym__number,
    STATE(425), 1,
      sym_time,
  [4148] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4153] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4158] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4163] = 2,
    ACTIONS(577), 1,
      sym__space,
    ACTIONS(579), 1,
      sym__eol,
  [4170] = 1,
    ACTIONS(1754), 2,
      sym__space,
      sym__eol,
  [4175] = 2,
    ACTIONS(1756), 1,
      sym__space,
    ACTIONS(1758), 1,
      sym__eol,
  [4182] = 1,
    ACTIONS(1760), 2,
      sym__space,
      sym__eol,
  [4187] = 1,
    ACTIONS(1306), 2,
      sym__space,
      sym__eol,
  [4192] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4197] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4202] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4207] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4212] = 1,
    ACTIONS(1762), 2,
      sym__space,
      sym__eol,
  [4217] = 1,
    ACTIONS(1764), 2,
      sym__space,
      sym__eol,
  [4222] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4227] = 2,
    ACTIONS(1206), 1,
      aux_sym_time_token4,
    ACTIONS(1208), 1,
      aux_sym_time_token5,
  [4234] = 2,
    ACTIONS(1766), 1,
      aux_sym_time_token4,
    ACTIONS(1768), 1,
      aux_sym_time_token5,
  [4241] = 1,
    ACTIONS(1770), 2,
      sym__space,
      sym__eol,
  [4246] = 1,
    ACTIONS(1772), 2,
      sym__space,
      sym__eol,
  [4251] = 1,
    ACTIONS(1774), 2,
      sym__space,
      sym__eol,
  [4256] = 1,
    ACTIONS(1776), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [4261] = 1,
    ACTIONS(1778), 2,
      sym__space,
      sym__eol,
  [4266] = 1,
    ACTIONS(1310), 2,
      sym__space,
      sym__eol,
  [4271] = 1,
    ACTIONS(1780), 2,
      sym__space,
      sym__eol,
  [4276] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4281] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4286] = 1,
    ACTIONS(1617), 2,
      sym__space,
      sym__eol,
  [4291] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4296] = 1,
    ACTIONS(1782), 2,
      sym__space,
      sym__eol,
  [4301] = 1,
    ACTIONS(1784), 2,
      sym__space,
      sym__eol,
  [4306] = 1,
    ACTIONS(1786), 2,
      sym__space,
      sym__eol,
  [4311] = 1,
    ACTIONS(1788), 2,
      sym__space,
      sym__eol,
  [4316] = 2,
    ACTIONS(1790), 1,
      anon_sym_STAR,
    ACTIONS(1792), 1,
      aux_sym__permit_remote_open_value_token2,
  [4323] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4328] = 1,
    ACTIONS(1794), 2,
      sym__space,
      sym__eol,
  [4333] = 1,
    ACTIONS(1796), 2,
      sym__space,
      sym__eol,
  [4338] = 1,
    ACTIONS(1798), 2,
      sym__space,
      sym__eol,
  [4343] = 1,
    ACTIONS(1800), 2,
      sym__space,
      sym__eol,
  [4348] = 1,
    ACTIONS(1802), 2,
      sym__space,
      sym__eol,
  [4353] = 1,
    ACTIONS(1804), 2,
      sym__space,
      sym__eol,
  [4358] = 1,
    ACTIONS(1806), 2,
      sym__space,
      sym__eol,
  [4363] = 1,
    ACTIONS(1808), 2,
      sym__space,
      sym__eol,
  [4368] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4373] = 1,
    ACTIONS(1810), 2,
      sym__space,
      sym__eol,
  [4378] = 1,
    ACTIONS(1728), 2,
      sym__space,
      sym__eol,
  [4383] = 1,
    ACTIONS(1551), 2,
      sym__space,
      sym__eol,
  [4388] = 1,
    ACTIONS(1812), 2,
      sym__space,
      sym__eol,
  [4393] = 1,
    ACTIONS(1814), 2,
      sym__space,
      sym__eol,
  [4398] = 1,
    ACTIONS(1816), 2,
      sym__space,
      sym__eol,
  [4403] = 1,
    ACTIONS(1818), 2,
      sym__space,
      sym__eol,
  [4408] = 1,
    ACTIONS(1820), 2,
      sym__space,
      sym__eol,
  [4413] = 1,
    ACTIONS(1822), 2,
      sym__space,
      sym__eol,
  [4418] = 2,
    ACTIONS(1824), 1,
      anon_sym_inet,
    ACTIONS(1826), 1,
      anon_sym_inet6,
  [4425] = 1,
    ACTIONS(1828), 2,
      sym__space,
      sym__eol,
  [4430] = 1,
    ACTIONS(1830), 2,
      sym__space,
      sym__eol,
  [4435] = 1,
    ACTIONS(1524), 2,
      sym__space,
      sym__eol,
  [4440] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(453), 1,
      sym_number,
  [4447] = 2,
    ACTIONS(839), 1,
      sym__number,
    STATE(500), 1,
      sym_time,
  [4454] = 1,
    ACTIONS(1832), 2,
      sym__space,
      sym__eol,
  [4459] = 1,
    ACTIONS(1834), 2,
      sym__space,
      sym__eol,
  [4464] = 1,
    ACTIONS(1836), 2,
      sym__space,
      sym__eol,
  [4469] = 1,
    ACTIONS(1838), 2,
      sym__space,
      sym__eol,
  [4474] = 2,
    ACTIONS(1342), 1,
      aux_sym_time_token4,
    ACTIONS(1344), 1,
      aux_sym_time_token5,
  [4481] = 1,
    ACTIONS(1840), 2,
      sym__space,
      sym__eol,
  [4486] = 2,
    ACTIONS(1842), 1,
      sym__space,
    ACTIONS(1844), 1,
      sym__eol,
  [4493] = 1,
    ACTIONS(1846), 2,
      sym__space,
      sym__eol,
  [4498] = 1,
    ACTIONS(1848), 2,
      sym__space,
      sym__eol,
  [4503] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(508), 1,
      sym_number,
  [4510] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(522), 1,
      sym_number,
  [4517] = 1,
    ACTIONS(1850), 2,
      sym__space,
      sym__eol,
  [4522] = 1,
    ACTIONS(1852), 2,
      sym__space,
      sym__eol,
  [4527] = 1,
    ACTIONS(1854), 2,
      sym__space,
      sym__eol,
  [4532] = 1,
    ACTIONS(1856), 2,
      sym__space,
      sym__eol,
  [4537] = 1,
    ACTIONS(1858), 2,
      sym__space,
      sym__eol,
  [4542] = 1,
    ACTIONS(1860), 2,
      sym__space,
      sym__eol,
  [4547] = 2,
    ACTIONS(1862), 1,
      anon_sym_none,
    ACTIONS(1864), 1,
      aux_sym__escape_char_token2,
  [4554] = 1,
    ACTIONS(1866), 2,
      sym__space,
      sym__eol,
  [4559] = 1,
    ACTIONS(1868), 2,
      sym__space,
      sym__eol,
  [4564] = 1,
    ACTIONS(1870), 2,
      sym__space,
      sym__eol,
  [4569] = 1,
    ACTIONS(1872), 2,
      sym__space,
      sym__eol,
  [4574] = 1,
    ACTIONS(1454), 2,
      sym__space,
      sym__eol,
  [4579] = 1,
    ACTIONS(1874), 2,
      anon_sym_md5,
      anon_sym_sha256,
  [4584] = 1,
    ACTIONS(1876), 2,
      sym__space,
      sym__eol,
  [4589] = 1,
    ACTIONS(1449), 2,
      sym__space,
      sym__eol,
  [4594] = 1,
    ACTIONS(1878), 2,
      sym__space,
      sym__eol,
  [4599] = 1,
    ACTIONS(1880), 2,
      sym__space,
      sym__eol,
  [4604] = 1,
    ACTIONS(1882), 2,
      sym__space,
      sym__eol,
  [4609] = 1,
    ACTIONS(1884), 2,
      sym__space,
      sym__eol,
  [4614] = 1,
    ACTIONS(1886), 2,
      sym__space,
      sym__eol,
  [4619] = 1,
    ACTIONS(1888), 2,
      sym__space,
      sym__eol,
  [4624] = 1,
    ACTIONS(1890), 2,
      sym__space,
      sym__eol,
  [4629] = 1,
    ACTIONS(1892), 2,
      sym__space,
      sym__eol,
  [4634] = 1,
    ACTIONS(1894), 2,
      sym__space,
      sym__eol,
  [4639] = 2,
    ACTIONS(1896), 1,
      sym__space,
    ACTIONS(1898), 1,
      sym__eol,
  [4646] = 1,
    ACTIONS(1900), 2,
      sym__space,
      sym__eol,
  [4651] = 1,
    ACTIONS(1902), 2,
      sym__space,
      sym__eol,
  [4656] = 1,
    ACTIONS(1904), 2,
      sym__space,
      sym__eol,
  [4661] = 1,
    ACTIONS(1906), 2,
      sym__space,
      sym__eol,
  [4666] = 1,
    ACTIONS(1908), 2,
      sym__space,
      sym__eol,
  [4671] = 1,
    ACTIONS(1910), 2,
      sym__space,
      sym__eol,
  [4676] = 1,
    ACTIONS(1912), 2,
      sym__space,
      sym__eol,
  [4681] = 1,
    ACTIONS(1391), 2,
      sym__space,
      sym__eol,
  [4686] = 1,
    ACTIONS(1914), 2,
      sym__space,
      sym__eol,
  [4691] = 1,
    ACTIONS(1916), 2,
      sym__space,
      sym__eol,
  [4696] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(471), 1,
      sym_number,
  [4703] = 2,
    ACTIONS(1133), 1,
      sym__number,
    STATE(462), 1,
      sym_number,
  [4710] = 1,
    ACTIONS(1918), 2,
      sym__space,
      sym__eol,
  [4715] = 1,
    ACTIONS(1920), 2,
      sym__space,
      sym__eol,
  [4720] = 1,
    ACTIONS(1922), 2,
      sym__space,
      sym__eol,
  [4725] = 1,
    ACTIONS(1924), 2,
      sym__space,
      sym__eol,
  [4730] = 1,
    ACTIONS(1926), 1,
      sym_kex,
  [4734] = 1,
    ACTIONS(1928), 1,
      sym_verbosity,
  [4738] = 1,
    ACTIONS(1930), 1,
      sym_cipher,
  [4742] = 1,
    ACTIONS(1932), 1,
      aux_sym__permit_remote_open_value_token2,
  [4746] = 1,
    ACTIONS(1934), 1,
      sym__var_name,
  [4750] = 1,
    ACTIONS(1898), 1,
      sym__eol,
  [4754] = 1,
    ACTIONS(1936), 1,
      sym_cipher,
  [4758] = 1,
    ACTIONS(579), 1,
      sym__eol,
  [4762] = 1,
    ACTIONS(1938), 1,
      sym_key_sig,
  [4766] = 1,
    ACTIONS(1940), 1,
      sym_key_sig,
  [4770] = 1,
    ACTIONS(1942), 1,
      sym_kex,
  [4774] = 1,
    ACTIONS(1344), 1,
      aux_sym_time_token5,
  [4778] = 1,
    ACTIONS(1944), 1,
      sym__var_name,
  [4782] = 1,
    ACTIONS(1946), 1,
      anon_sym_COLON,
  [4786] = 1,
    ACTIONS(1948), 1,
      sym__space,
  [4790] = 1,
    ACTIONS(1950), 1,
      sym_sig,
  [4794] = 1,
    ACTIONS(1952), 1,
      anon_sym_COLON,
  [4798] = 1,
    ACTIONS(1954), 1,
      sym__var_name,
  [4802] = 1,
    ACTIONS(1956), 1,
      sym__var_name,
  [4806] = 1,
    ACTIONS(1958), 1,
      sym__space,
  [4810] = 1,
    ACTIONS(1960), 1,
      sym_mac,
  [4814] = 1,
    ACTIONS(1962), 1,
      anon_sym_COLON,
  [4818] = 1,
    ACTIONS(1964), 1,
      anon_sym_COLON,
  [4822] = 1,
    ACTIONS(1966), 1,
      anon_sym_AT,
  [4826] = 1,
    ACTIONS(1968), 1,
      sym_key_sig,
  [4830] = 1,
    ACTIONS(1970), 1,
      sym__var_name,
  [4834] = 1,
    ACTIONS(1972), 1,
      sym__space,
  [4838] = 1,
    ACTIONS(1974), 1,
      anon_sym_DQUOTE,
  [4842] = 1,
    ACTIONS(1976), 1,
      sym__eol,
  [4846] = 1,
    ACTIONS(1978), 1,
      aux_sym_time_token5,
  [4850] = 1,
    ACTIONS(1980), 1,
      ts_builtin_sym_end,
  [4854] = 1,
    ACTIONS(1982), 1,
      aux_sym__proxy_jump_arg_token1,
  [4858] = 1,
    ACTIONS(1984), 1,
      sym_authentication,
  [4862] = 1,
    ACTIONS(1986), 1,
      anon_sym_COLON,
  [4866] = 1,
    ACTIONS(1988), 1,
      anon_sym_COLON,
  [4870] = 1,
    ACTIONS(1990), 1,
      sym_mac,
  [4874] = 1,
    ACTIONS(1992), 1,
      sym_sig,
  [4878] = 1,
    ACTIONS(1768), 1,
      aux_sym_time_token5,
  [4882] = 1,
    ACTIONS(1734), 1,
      sym__eol,
  [4886] = 1,
    ACTIONS(1994), 1,
      sym_authentication,
  [4890] = 1,
    ACTIONS(1996), 1,
      sym_key_sig,
  [4894] = 1,
    ACTIONS(1998), 1,
      anon_sym_RBRACE,
  [4898] = 1,
    ACTIONS(2000), 1,
      sym__eol,
  [4902] = 1,
    ACTIONS(2002), 1,
      anon_sym_RBRACE,
  [4906] = 1,
    ACTIONS(2004), 1,
      anon_sym_RBRACE,
  [4910] = 1,
    ACTIONS(2006), 1,
      anon_sym_RBRACE,
  [4914] = 1,
    ACTIONS(2008), 1,
      anon_sym_RBRACE,
  [4918] = 1,
    ACTIONS(2010), 1,
      anon_sym_RBRACE,
  [4922] = 1,
    ACTIONS(1208), 1,
      aux_sym_time_token5,
  [4926] = 1,
    ACTIONS(2012), 1,
      sym__var_name,
  [4930] = 1,
    ACTIONS(2014), 1,
      anon_sym_DQUOTE,
  [4934] = 1,
    ACTIONS(2016), 1,
      sym__var_name,
  [4938] = 1,
    ACTIONS(2018), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 37,
  [SMALL_STATE(32)] = 70,
  [SMALL_STATE(33)] = 101,
  [SMALL_STATE(34)] = 126,
  [SMALL_STATE(35)] = 149,
  [SMALL_STATE(36)] = 174,
  [SMALL_STATE(37)] = 197,
  [SMALL_STATE(38)] = 219,
  [SMALL_STATE(39)] = 241,
  [SMALL_STATE(40)] = 264,
  [SMALL_STATE(41)] = 287,
  [SMALL_STATE(42)] = 310,
  [SMALL_STATE(43)] = 333,
  [SMALL_STATE(44)] = 354,
  [SMALL_STATE(45)] = 377,
  [SMALL_STATE(46)] = 398,
  [SMALL_STATE(47)] = 421,
  [SMALL_STATE(48)] = 444,
  [SMALL_STATE(49)] = 463,
  [SMALL_STATE(50)] = 484,
  [SMALL_STATE(51)] = 505,
  [SMALL_STATE(52)] = 526,
  [SMALL_STATE(53)] = 546,
  [SMALL_STATE(54)] = 566,
  [SMALL_STATE(55)] = 582,
  [SMALL_STATE(56)] = 594,
  [SMALL_STATE(57)] = 614,
  [SMALL_STATE(58)] = 634,
  [SMALL_STATE(59)] = 654,
  [SMALL_STATE(60)] = 674,
  [SMALL_STATE(61)] = 690,
  [SMALL_STATE(62)] = 710,
  [SMALL_STATE(63)] = 728,
  [SMALL_STATE(64)] = 740,
  [SMALL_STATE(65)] = 760,
  [SMALL_STATE(66)] = 776,
  [SMALL_STATE(67)] = 798,
  [SMALL_STATE(68)] = 815,
  [SMALL_STATE(69)] = 832,
  [SMALL_STATE(70)] = 849,
  [SMALL_STATE(71)] = 864,
  [SMALL_STATE(72)] = 881,
  [SMALL_STATE(73)] = 898,
  [SMALL_STATE(74)] = 915,
  [SMALL_STATE(75)] = 926,
  [SMALL_STATE(76)] = 943,
  [SMALL_STATE(77)] = 960,
  [SMALL_STATE(78)] = 977,
  [SMALL_STATE(79)] = 994,
  [SMALL_STATE(80)] = 1011,
  [SMALL_STATE(81)] = 1030,
  [SMALL_STATE(82)] = 1047,
  [SMALL_STATE(83)] = 1058,
  [SMALL_STATE(84)] = 1073,
  [SMALL_STATE(85)] = 1090,
  [SMALL_STATE(86)] = 1109,
  [SMALL_STATE(87)] = 1124,
  [SMALL_STATE(88)] = 1141,
  [SMALL_STATE(89)] = 1158,
  [SMALL_STATE(90)] = 1173,
  [SMALL_STATE(91)] = 1190,
  [SMALL_STATE(92)] = 1207,
  [SMALL_STATE(93)] = 1224,
  [SMALL_STATE(94)] = 1241,
  [SMALL_STATE(95)] = 1256,
  [SMALL_STATE(96)] = 1273,
  [SMALL_STATE(97)] = 1286,
  [SMALL_STATE(98)] = 1298,
  [SMALL_STATE(99)] = 1312,
  [SMALL_STATE(100)] = 1328,
  [SMALL_STATE(101)] = 1342,
  [SMALL_STATE(102)] = 1352,
  [SMALL_STATE(103)] = 1368,
  [SMALL_STATE(104)] = 1382,
  [SMALL_STATE(105)] = 1394,
  [SMALL_STATE(106)] = 1410,
  [SMALL_STATE(107)] = 1420,
  [SMALL_STATE(108)] = 1432,
  [SMALL_STATE(109)] = 1446,
  [SMALL_STATE(110)] = 1460,
  [SMALL_STATE(111)] = 1472,
  [SMALL_STATE(112)] = 1486,
  [SMALL_STATE(113)] = 1500,
  [SMALL_STATE(114)] = 1512,
  [SMALL_STATE(115)] = 1528,
  [SMALL_STATE(116)] = 1542,
  [SMALL_STATE(117)] = 1552,
  [SMALL_STATE(118)] = 1562,
  [SMALL_STATE(119)] = 1576,
  [SMALL_STATE(120)] = 1592,
  [SMALL_STATE(121)] = 1608,
  [SMALL_STATE(122)] = 1617,
  [SMALL_STATE(123)] = 1628,
  [SMALL_STATE(124)] = 1639,
  [SMALL_STATE(125)] = 1650,
  [SMALL_STATE(126)] = 1661,
  [SMALL_STATE(127)] = 1674,
  [SMALL_STATE(128)] = 1685,
  [SMALL_STATE(129)] = 1696,
  [SMALL_STATE(130)] = 1709,
  [SMALL_STATE(131)] = 1720,
  [SMALL_STATE(132)] = 1731,
  [SMALL_STATE(133)] = 1742,
  [SMALL_STATE(134)] = 1753,
  [SMALL_STATE(135)] = 1764,
  [SMALL_STATE(136)] = 1775,
  [SMALL_STATE(137)] = 1786,
  [SMALL_STATE(138)] = 1797,
  [SMALL_STATE(139)] = 1808,
  [SMALL_STATE(140)] = 1819,
  [SMALL_STATE(141)] = 1830,
  [SMALL_STATE(142)] = 1841,
  [SMALL_STATE(143)] = 1852,
  [SMALL_STATE(144)] = 1863,
  [SMALL_STATE(145)] = 1872,
  [SMALL_STATE(146)] = 1883,
  [SMALL_STATE(147)] = 1894,
  [SMALL_STATE(148)] = 1905,
  [SMALL_STATE(149)] = 1916,
  [SMALL_STATE(150)] = 1925,
  [SMALL_STATE(151)] = 1936,
  [SMALL_STATE(152)] = 1945,
  [SMALL_STATE(153)] = 1956,
  [SMALL_STATE(154)] = 1967,
  [SMALL_STATE(155)] = 1978,
  [SMALL_STATE(156)] = 1989,
  [SMALL_STATE(157)] = 2000,
  [SMALL_STATE(158)] = 2011,
  [SMALL_STATE(159)] = 2022,
  [SMALL_STATE(160)] = 2031,
  [SMALL_STATE(161)] = 2044,
  [SMALL_STATE(162)] = 2055,
  [SMALL_STATE(163)] = 2066,
  [SMALL_STATE(164)] = 2077,
  [SMALL_STATE(165)] = 2088,
  [SMALL_STATE(166)] = 2097,
  [SMALL_STATE(167)] = 2108,
  [SMALL_STATE(168)] = 2119,
  [SMALL_STATE(169)] = 2130,
  [SMALL_STATE(170)] = 2137,
  [SMALL_STATE(171)] = 2146,
  [SMALL_STATE(172)] = 2159,
  [SMALL_STATE(173)] = 2168,
  [SMALL_STATE(174)] = 2179,
  [SMALL_STATE(175)] = 2188,
  [SMALL_STATE(176)] = 2197,
  [SMALL_STATE(177)] = 2208,
  [SMALL_STATE(178)] = 2219,
  [SMALL_STATE(179)] = 2230,
  [SMALL_STATE(180)] = 2241,
  [SMALL_STATE(181)] = 2252,
  [SMALL_STATE(182)] = 2263,
  [SMALL_STATE(183)] = 2270,
  [SMALL_STATE(184)] = 2279,
  [SMALL_STATE(185)] = 2288,
  [SMALL_STATE(186)] = 2301,
  [SMALL_STATE(187)] = 2310,
  [SMALL_STATE(188)] = 2317,
  [SMALL_STATE(189)] = 2328,
  [SMALL_STATE(190)] = 2337,
  [SMALL_STATE(191)] = 2348,
  [SMALL_STATE(192)] = 2358,
  [SMALL_STATE(193)] = 2368,
  [SMALL_STATE(194)] = 2376,
  [SMALL_STATE(195)] = 2384,
  [SMALL_STATE(196)] = 2394,
  [SMALL_STATE(197)] = 2402,
  [SMALL_STATE(198)] = 2410,
  [SMALL_STATE(199)] = 2420,
  [SMALL_STATE(200)] = 2428,
  [SMALL_STATE(201)] = 2438,
  [SMALL_STATE(202)] = 2446,
  [SMALL_STATE(203)] = 2454,
  [SMALL_STATE(204)] = 2464,
  [SMALL_STATE(205)] = 2474,
  [SMALL_STATE(206)] = 2484,
  [SMALL_STATE(207)] = 2494,
  [SMALL_STATE(208)] = 2502,
  [SMALL_STATE(209)] = 2512,
  [SMALL_STATE(210)] = 2522,
  [SMALL_STATE(211)] = 2532,
  [SMALL_STATE(212)] = 2542,
  [SMALL_STATE(213)] = 2552,
  [SMALL_STATE(214)] = 2562,
  [SMALL_STATE(215)] = 2572,
  [SMALL_STATE(216)] = 2582,
  [SMALL_STATE(217)] = 2592,
  [SMALL_STATE(218)] = 2602,
  [SMALL_STATE(219)] = 2610,
  [SMALL_STATE(220)] = 2618,
  [SMALL_STATE(221)] = 2626,
  [SMALL_STATE(222)] = 2636,
  [SMALL_STATE(223)] = 2646,
  [SMALL_STATE(224)] = 2656,
  [SMALL_STATE(225)] = 2666,
  [SMALL_STATE(226)] = 2672,
  [SMALL_STATE(227)] = 2682,
  [SMALL_STATE(228)] = 2690,
  [SMALL_STATE(229)] = 2700,
  [SMALL_STATE(230)] = 2710,
  [SMALL_STATE(231)] = 2720,
  [SMALL_STATE(232)] = 2728,
  [SMALL_STATE(233)] = 2738,
  [SMALL_STATE(234)] = 2748,
  [SMALL_STATE(235)] = 2756,
  [SMALL_STATE(236)] = 2766,
  [SMALL_STATE(237)] = 2776,
  [SMALL_STATE(238)] = 2786,
  [SMALL_STATE(239)] = 2796,
  [SMALL_STATE(240)] = 2806,
  [SMALL_STATE(241)] = 2816,
  [SMALL_STATE(242)] = 2826,
  [SMALL_STATE(243)] = 2836,
  [SMALL_STATE(244)] = 2844,
  [SMALL_STATE(245)] = 2852,
  [SMALL_STATE(246)] = 2860,
  [SMALL_STATE(247)] = 2870,
  [SMALL_STATE(248)] = 2880,
  [SMALL_STATE(249)] = 2890,
  [SMALL_STATE(250)] = 2896,
  [SMALL_STATE(251)] = 2906,
  [SMALL_STATE(252)] = 2916,
  [SMALL_STATE(253)] = 2926,
  [SMALL_STATE(254)] = 2936,
  [SMALL_STATE(255)] = 2946,
  [SMALL_STATE(256)] = 2956,
  [SMALL_STATE(257)] = 2966,
  [SMALL_STATE(258)] = 2976,
  [SMALL_STATE(259)] = 2986,
  [SMALL_STATE(260)] = 2994,
  [SMALL_STATE(261)] = 3004,
  [SMALL_STATE(262)] = 3014,
  [SMALL_STATE(263)] = 3024,
  [SMALL_STATE(264)] = 3032,
  [SMALL_STATE(265)] = 3038,
  [SMALL_STATE(266)] = 3048,
  [SMALL_STATE(267)] = 3056,
  [SMALL_STATE(268)] = 3066,
  [SMALL_STATE(269)] = 3074,
  [SMALL_STATE(270)] = 3084,
  [SMALL_STATE(271)] = 3094,
  [SMALL_STATE(272)] = 3100,
  [SMALL_STATE(273)] = 3108,
  [SMALL_STATE(274)] = 3118,
  [SMALL_STATE(275)] = 3126,
  [SMALL_STATE(276)] = 3136,
  [SMALL_STATE(277)] = 3146,
  [SMALL_STATE(278)] = 3152,
  [SMALL_STATE(279)] = 3162,
  [SMALL_STATE(280)] = 3172,
  [SMALL_STATE(281)] = 3180,
  [SMALL_STATE(282)] = 3188,
  [SMALL_STATE(283)] = 3196,
  [SMALL_STATE(284)] = 3206,
  [SMALL_STATE(285)] = 3216,
  [SMALL_STATE(286)] = 3226,
  [SMALL_STATE(287)] = 3234,
  [SMALL_STATE(288)] = 3242,
  [SMALL_STATE(289)] = 3250,
  [SMALL_STATE(290)] = 3260,
  [SMALL_STATE(291)] = 3270,
  [SMALL_STATE(292)] = 3280,
  [SMALL_STATE(293)] = 3286,
  [SMALL_STATE(294)] = 3296,
  [SMALL_STATE(295)] = 3306,
  [SMALL_STATE(296)] = 3316,
  [SMALL_STATE(297)] = 3326,
  [SMALL_STATE(298)] = 3336,
  [SMALL_STATE(299)] = 3346,
  [SMALL_STATE(300)] = 3352,
  [SMALL_STATE(301)] = 3362,
  [SMALL_STATE(302)] = 3372,
  [SMALL_STATE(303)] = 3378,
  [SMALL_STATE(304)] = 3388,
  [SMALL_STATE(305)] = 3394,
  [SMALL_STATE(306)] = 3404,
  [SMALL_STATE(307)] = 3414,
  [SMALL_STATE(308)] = 3424,
  [SMALL_STATE(309)] = 3434,
  [SMALL_STATE(310)] = 3444,
  [SMALL_STATE(311)] = 3450,
  [SMALL_STATE(312)] = 3460,
  [SMALL_STATE(313)] = 3470,
  [SMALL_STATE(314)] = 3480,
  [SMALL_STATE(315)] = 3490,
  [SMALL_STATE(316)] = 3500,
  [SMALL_STATE(317)] = 3510,
  [SMALL_STATE(318)] = 3518,
  [SMALL_STATE(319)] = 3528,
  [SMALL_STATE(320)] = 3538,
  [SMALL_STATE(321)] = 3548,
  [SMALL_STATE(322)] = 3558,
  [SMALL_STATE(323)] = 3568,
  [SMALL_STATE(324)] = 3578,
  [SMALL_STATE(325)] = 3588,
  [SMALL_STATE(326)] = 3598,
  [SMALL_STATE(327)] = 3608,
  [SMALL_STATE(328)] = 3618,
  [SMALL_STATE(329)] = 3628,
  [SMALL_STATE(330)] = 3638,
  [SMALL_STATE(331)] = 3646,
  [SMALL_STATE(332)] = 3654,
  [SMALL_STATE(333)] = 3662,
  [SMALL_STATE(334)] = 3670,
  [SMALL_STATE(335)] = 3680,
  [SMALL_STATE(336)] = 3688,
  [SMALL_STATE(337)] = 3698,
  [SMALL_STATE(338)] = 3708,
  [SMALL_STATE(339)] = 3718,
  [SMALL_STATE(340)] = 3728,
  [SMALL_STATE(341)] = 3738,
  [SMALL_STATE(342)] = 3748,
  [SMALL_STATE(343)] = 3758,
  [SMALL_STATE(344)] = 3768,
  [SMALL_STATE(345)] = 3776,
  [SMALL_STATE(346)] = 3786,
  [SMALL_STATE(347)] = 3794,
  [SMALL_STATE(348)] = 3804,
  [SMALL_STATE(349)] = 3814,
  [SMALL_STATE(350)] = 3819,
  [SMALL_STATE(351)] = 3824,
  [SMALL_STATE(352)] = 3829,
  [SMALL_STATE(353)] = 3834,
  [SMALL_STATE(354)] = 3839,
  [SMALL_STATE(355)] = 3844,
  [SMALL_STATE(356)] = 3851,
  [SMALL_STATE(357)] = 3856,
  [SMALL_STATE(358)] = 3863,
  [SMALL_STATE(359)] = 3868,
  [SMALL_STATE(360)] = 3873,
  [SMALL_STATE(361)] = 3878,
  [SMALL_STATE(362)] = 3883,
  [SMALL_STATE(363)] = 3888,
  [SMALL_STATE(364)] = 3893,
  [SMALL_STATE(365)] = 3898,
  [SMALL_STATE(366)] = 3903,
  [SMALL_STATE(367)] = 3908,
  [SMALL_STATE(368)] = 3913,
  [SMALL_STATE(369)] = 3918,
  [SMALL_STATE(370)] = 3923,
  [SMALL_STATE(371)] = 3928,
  [SMALL_STATE(372)] = 3935,
  [SMALL_STATE(373)] = 3940,
  [SMALL_STATE(374)] = 3945,
  [SMALL_STATE(375)] = 3950,
  [SMALL_STATE(376)] = 3955,
  [SMALL_STATE(377)] = 3960,
  [SMALL_STATE(378)] = 3965,
  [SMALL_STATE(379)] = 3970,
  [SMALL_STATE(380)] = 3975,
  [SMALL_STATE(381)] = 3980,
  [SMALL_STATE(382)] = 3987,
  [SMALL_STATE(383)] = 3992,
  [SMALL_STATE(384)] = 3997,
  [SMALL_STATE(385)] = 4002,
  [SMALL_STATE(386)] = 4007,
  [SMALL_STATE(387)] = 4012,
  [SMALL_STATE(388)] = 4017,
  [SMALL_STATE(389)] = 4022,
  [SMALL_STATE(390)] = 4027,
  [SMALL_STATE(391)] = 4034,
  [SMALL_STATE(392)] = 4039,
  [SMALL_STATE(393)] = 4044,
  [SMALL_STATE(394)] = 4049,
  [SMALL_STATE(395)] = 4054,
  [SMALL_STATE(396)] = 4059,
  [SMALL_STATE(397)] = 4064,
  [SMALL_STATE(398)] = 4069,
  [SMALL_STATE(399)] = 4074,
  [SMALL_STATE(400)] = 4079,
  [SMALL_STATE(401)] = 4084,
  [SMALL_STATE(402)] = 4089,
  [SMALL_STATE(403)] = 4094,
  [SMALL_STATE(404)] = 4099,
  [SMALL_STATE(405)] = 4104,
  [SMALL_STATE(406)] = 4109,
  [SMALL_STATE(407)] = 4116,
  [SMALL_STATE(408)] = 4121,
  [SMALL_STATE(409)] = 4126,
  [SMALL_STATE(410)] = 4131,
  [SMALL_STATE(411)] = 4136,
  [SMALL_STATE(412)] = 4141,
  [SMALL_STATE(413)] = 4148,
  [SMALL_STATE(414)] = 4153,
  [SMALL_STATE(415)] = 4158,
  [SMALL_STATE(416)] = 4163,
  [SMALL_STATE(417)] = 4170,
  [SMALL_STATE(418)] = 4175,
  [SMALL_STATE(419)] = 4182,
  [SMALL_STATE(420)] = 4187,
  [SMALL_STATE(421)] = 4192,
  [SMALL_STATE(422)] = 4197,
  [SMALL_STATE(423)] = 4202,
  [SMALL_STATE(424)] = 4207,
  [SMALL_STATE(425)] = 4212,
  [SMALL_STATE(426)] = 4217,
  [SMALL_STATE(427)] = 4222,
  [SMALL_STATE(428)] = 4227,
  [SMALL_STATE(429)] = 4234,
  [SMALL_STATE(430)] = 4241,
  [SMALL_STATE(431)] = 4246,
  [SMALL_STATE(432)] = 4251,
  [SMALL_STATE(433)] = 4256,
  [SMALL_STATE(434)] = 4261,
  [SMALL_STATE(435)] = 4266,
  [SMALL_STATE(436)] = 4271,
  [SMALL_STATE(437)] = 4276,
  [SMALL_STATE(438)] = 4281,
  [SMALL_STATE(439)] = 4286,
  [SMALL_STATE(440)] = 4291,
  [SMALL_STATE(441)] = 4296,
  [SMALL_STATE(442)] = 4301,
  [SMALL_STATE(443)] = 4306,
  [SMALL_STATE(444)] = 4311,
  [SMALL_STATE(445)] = 4316,
  [SMALL_STATE(446)] = 4323,
  [SMALL_STATE(447)] = 4328,
  [SMALL_STATE(448)] = 4333,
  [SMALL_STATE(449)] = 4338,
  [SMALL_STATE(450)] = 4343,
  [SMALL_STATE(451)] = 4348,
  [SMALL_STATE(452)] = 4353,
  [SMALL_STATE(453)] = 4358,
  [SMALL_STATE(454)] = 4363,
  [SMALL_STATE(455)] = 4368,
  [SMALL_STATE(456)] = 4373,
  [SMALL_STATE(457)] = 4378,
  [SMALL_STATE(458)] = 4383,
  [SMALL_STATE(459)] = 4388,
  [SMALL_STATE(460)] = 4393,
  [SMALL_STATE(461)] = 4398,
  [SMALL_STATE(462)] = 4403,
  [SMALL_STATE(463)] = 4408,
  [SMALL_STATE(464)] = 4413,
  [SMALL_STATE(465)] = 4418,
  [SMALL_STATE(466)] = 4425,
  [SMALL_STATE(467)] = 4430,
  [SMALL_STATE(468)] = 4435,
  [SMALL_STATE(469)] = 4440,
  [SMALL_STATE(470)] = 4447,
  [SMALL_STATE(471)] = 4454,
  [SMALL_STATE(472)] = 4459,
  [SMALL_STATE(473)] = 4464,
  [SMALL_STATE(474)] = 4469,
  [SMALL_STATE(475)] = 4474,
  [SMALL_STATE(476)] = 4481,
  [SMALL_STATE(477)] = 4486,
  [SMALL_STATE(478)] = 4493,
  [SMALL_STATE(479)] = 4498,
  [SMALL_STATE(480)] = 4503,
  [SMALL_STATE(481)] = 4510,
  [SMALL_STATE(482)] = 4517,
  [SMALL_STATE(483)] = 4522,
  [SMALL_STATE(484)] = 4527,
  [SMALL_STATE(485)] = 4532,
  [SMALL_STATE(486)] = 4537,
  [SMALL_STATE(487)] = 4542,
  [SMALL_STATE(488)] = 4547,
  [SMALL_STATE(489)] = 4554,
  [SMALL_STATE(490)] = 4559,
  [SMALL_STATE(491)] = 4564,
  [SMALL_STATE(492)] = 4569,
  [SMALL_STATE(493)] = 4574,
  [SMALL_STATE(494)] = 4579,
  [SMALL_STATE(495)] = 4584,
  [SMALL_STATE(496)] = 4589,
  [SMALL_STATE(497)] = 4594,
  [SMALL_STATE(498)] = 4599,
  [SMALL_STATE(499)] = 4604,
  [SMALL_STATE(500)] = 4609,
  [SMALL_STATE(501)] = 4614,
  [SMALL_STATE(502)] = 4619,
  [SMALL_STATE(503)] = 4624,
  [SMALL_STATE(504)] = 4629,
  [SMALL_STATE(505)] = 4634,
  [SMALL_STATE(506)] = 4639,
  [SMALL_STATE(507)] = 4646,
  [SMALL_STATE(508)] = 4651,
  [SMALL_STATE(509)] = 4656,
  [SMALL_STATE(510)] = 4661,
  [SMALL_STATE(511)] = 4666,
  [SMALL_STATE(512)] = 4671,
  [SMALL_STATE(513)] = 4676,
  [SMALL_STATE(514)] = 4681,
  [SMALL_STATE(515)] = 4686,
  [SMALL_STATE(516)] = 4691,
  [SMALL_STATE(517)] = 4696,
  [SMALL_STATE(518)] = 4703,
  [SMALL_STATE(519)] = 4710,
  [SMALL_STATE(520)] = 4715,
  [SMALL_STATE(521)] = 4720,
  [SMALL_STATE(522)] = 4725,
  [SMALL_STATE(523)] = 4730,
  [SMALL_STATE(524)] = 4734,
  [SMALL_STATE(525)] = 4738,
  [SMALL_STATE(526)] = 4742,
  [SMALL_STATE(527)] = 4746,
  [SMALL_STATE(528)] = 4750,
  [SMALL_STATE(529)] = 4754,
  [SMALL_STATE(530)] = 4758,
  [SMALL_STATE(531)] = 4762,
  [SMALL_STATE(532)] = 4766,
  [SMALL_STATE(533)] = 4770,
  [SMALL_STATE(534)] = 4774,
  [SMALL_STATE(535)] = 4778,
  [SMALL_STATE(536)] = 4782,
  [SMALL_STATE(537)] = 4786,
  [SMALL_STATE(538)] = 4790,
  [SMALL_STATE(539)] = 4794,
  [SMALL_STATE(540)] = 4798,
  [SMALL_STATE(541)] = 4802,
  [SMALL_STATE(542)] = 4806,
  [SMALL_STATE(543)] = 4810,
  [SMALL_STATE(544)] = 4814,
  [SMALL_STATE(545)] = 4818,
  [SMALL_STATE(546)] = 4822,
  [SMALL_STATE(547)] = 4826,
  [SMALL_STATE(548)] = 4830,
  [SMALL_STATE(549)] = 4834,
  [SMALL_STATE(550)] = 4838,
  [SMALL_STATE(551)] = 4842,
  [SMALL_STATE(552)] = 4846,
  [SMALL_STATE(553)] = 4850,
  [SMALL_STATE(554)] = 4854,
  [SMALL_STATE(555)] = 4858,
  [SMALL_STATE(556)] = 4862,
  [SMALL_STATE(557)] = 4866,
  [SMALL_STATE(558)] = 4870,
  [SMALL_STATE(559)] = 4874,
  [SMALL_STATE(560)] = 4878,
  [SMALL_STATE(561)] = 4882,
  [SMALL_STATE(562)] = 4886,
  [SMALL_STATE(563)] = 4890,
  [SMALL_STATE(564)] = 4894,
  [SMALL_STATE(565)] = 4898,
  [SMALL_STATE(566)] = 4902,
  [SMALL_STATE(567)] = 4906,
  [SMALL_STATE(568)] = 4910,
  [SMALL_STATE(569)] = 4914,
  [SMALL_STATE(570)] = 4918,
  [SMALL_STATE(571)] = 4922,
  [SMALL_STATE(572)] = 4926,
  [SMALL_STATE(573)] = 4930,
  [SMALL_STATE(574)] = 4934,
  [SMALL_STATE(575)] = 4938,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(309),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(198),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(200),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(204),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(205),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(208),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(209),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(211),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(212),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(213),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(214),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(215),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(222),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(229),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(232),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(233),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(235),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(236),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(237),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(239),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(241),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(242),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(246),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(247),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(248),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(250),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(251),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(252),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(253),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(254),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(255),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(257),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(258),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(261),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(262),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(270),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(192),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(273),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(275),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(283),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(289),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(293),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(295),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(297),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(298),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(300),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(303),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(305),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(307),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(308),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(311),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(312),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(315),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(316),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(318),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(322),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(326),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(328),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(459),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(459),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(530),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(10),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declarations, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(198),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(200),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(204),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(205),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(208),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(209),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(211),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(212),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(213),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(214),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(215),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(216),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(221),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(222),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(229),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(232),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(233),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(235),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(236),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(237),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(239),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(241),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(242),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(246),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(247),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(248),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(250),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(251),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(252),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(253),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(254),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(255),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(257),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(258),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(261),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(262),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(270),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(192),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(273),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(275),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(278),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(283),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(289),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(290),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(291),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(293),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(295),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(296),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(297),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(298),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(300),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(303),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(305),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(307),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(308),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(311),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(312),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(315),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(316),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(318),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(322),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(325),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(326),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(328),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(459),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(459),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(418),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(15),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 20),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 20),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 8),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 8),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 8, .production_id = 48),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 8, .production_id = 48),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 18),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 18),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 48),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 48),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 7, .production_id = 20),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 7, .production_id = 20),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 6, .production_id = 18),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 6, .production_id = 18),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_declaration, 5, .production_id = 8),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_declaration, 5, .production_id = 8),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 1, .production_id = 11),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(63),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(535),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2), SHIFT_REPEAT(63),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(82),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(82),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 2), SHIFT_REPEAT(540),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 1, .production_id = 13),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(106),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(572),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 2), SHIFT_REPEAT(106),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 1, .production_id = 13),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(101),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(548),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 2), SHIFT_REPEAT(101),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 2),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(54),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(54),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 31),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 31),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(149),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(149),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 2), SHIFT_REPEAT(574),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2),
  [816] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(165),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(165),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 2), SHIFT_REPEAT(541),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat1, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 1, .production_id = 13),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(121),
  [862] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 2), SHIFT_REPEAT(121),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_pattern_vars_repeat2, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(86),
  [892] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(86),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(89),
  [900] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(89),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(159),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 2), SHIFT_REPEAT(159),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 1, .production_id = 13),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(144),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 2), SHIFT_REPEAT(144),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat1, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(335),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 2), SHIFT_REPEAT(335),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat1, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_value_repeat1, 2), SHIFT_REPEAT(107),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(108),
  [977] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(108),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 1, .production_id = 13),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(118),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_verbose_quoted_repeat1, 2), SHIFT_REPEAT(118),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2),
  [1012] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(346),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 2), SHIFT_REPEAT(346),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_content, 1),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 4, .production_id = 20),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 4, .production_id = 20),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 5, .production_id = 26),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2), SHIFT_REPEAT(523),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__kex_algorithms_repeat1, 2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2),
  [1039] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(344),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 2), SHIFT_REPEAT(344),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 3, .production_id = 8),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 5, .production_id = 26),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 3, .production_id = 8),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 3, .production_id = 8),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2), SHIFT_REPEAT(559),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ca_signature_algorithms_repeat1, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 3, .production_id = 15),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 5, .production_id = 26),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2), SHIFT_REPEAT(563),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostbased_accepted_algorithms_repeat1, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 38), SHIFT_REPEAT(104),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 38),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 4, .production_id = 20),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 5, .production_id = 26),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 4, .production_id = 20),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat1, 1),
  [1100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2), SHIFT_REPEAT(558),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macs_repeat1, 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 4, .production_id = 20),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2), SHIFT_REPEAT(555),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__preferred_authentications_repeat1, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__file_string_repeat2, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kex_algorithms, 3, .production_id = 8),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 5, .production_id = 26),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 5, .production_id = 26),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2), SHIFT_REPEAT(525),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ciphers_repeat1, 2),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 45),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat1, 1),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_algorithms, 3, .production_id = 8),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_accepted_algorithms, 3, .production_id = 8),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ciphers, 3, .production_id = 8),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 4, .production_id = 46),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hosts_string_repeat2, 1),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 5, .production_id = 49),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(72),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 3, .production_id = 8),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 4, .production_id = 22),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macs, 4, .production_id = 20),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preferred_authentications, 4, .production_id = 20),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pubkey_accepted_algorithms, 4, .production_id = 20),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cnames_map, 3, .production_id = 29),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ca_signature_algorithms, 5, .production_id = 26),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 3, .production_id = 8),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 3, .production_id = 8),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 8),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 6),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 10),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_value, 5, .production_id = 50),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 38), SHIFT_REPEAT(111),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 38),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 3, .production_id = 8),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 5, .production_id = 43),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2), SHIFT_REPEAT(80),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_command_arg_repeat1, 2),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 42), SHIFT_REPEAT(84),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 42),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 3, .production_id = 8),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat1, 2, .production_id = 37),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2), SHIFT_REPEAT(99),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__local_command_repeat1, 2),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2), SHIFT_REPEAT(92),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ignore_unknown_repeat1, 2),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 25), SHIFT_REPEAT(348),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 25),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 3, .production_id = 16),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cnames_map_repeat1, 2), SHIFT_REPEAT(76),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 3, .production_id = 8),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 17),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 28), SHIFT_REPEAT(59),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 28),
  [1640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 25), SHIFT_REPEAT(73),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 25),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 25), SHIFT_REPEAT(58),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 25),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_command, 4, .production_id = 20),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__proxy_string_repeat1, 1),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonical_domains, 4, .production_id = 18),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open, 4, .production_id = 23),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 4, .production_id = 19),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_command, 4, .production_id = 20),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__token_string_repeat2, 1),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ignore_unknown, 4, .production_id = 20),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hostname_string_repeat2, 1),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_known_hosts_file, 4, .production_id = 18),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_level, 3, .production_id = 8),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_verbose_repeat2, 2, .production_id = 37),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 1),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_value, 2, .production_id = 21),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 3, .production_id = 8),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address_family, 3, .production_id = 8),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__batch_mode, 3, .production_id = 8),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_address, 3, .production_id = 8),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 5),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 2),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bind_interface, 3, .production_id = 8),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 2, .production_id = 24),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 10),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_keys_to_agent, 5, .production_id = 26),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_fallback_local, 3, .production_id = 8),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonical_domains_repeat1, 2, .production_id = 24),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 6),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__canonicalize_permitted_cnames_repeat1, 2, .production_id = 27),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose_quoted, 5, .production_id = 50),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_use_fdpass, 3, .production_id = 8),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 3, .production_id = 8),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_pattern_vars, 3, .production_id = 30),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port, 3, .production_id = 8),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pkcs11_provider, 3, .production_id = 8),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_hostname, 3, .production_id = 8),
  [1790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_local_command, 3, .production_id = 8),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__global_known_hosts_file_repeat1, 2, .production_id = 24),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__password_authentication, 3, .production_id = 8),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_of_password_prompts, 3, .production_id = 8),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_host_authentication_for_localhost, 3, .production_id = 8),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 7),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_max_dots, 3, .production_id = 8),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname_string, 3, .production_id = 32),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_string, 3, .production_id = 32),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 5, .production_id = 33),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__canonicalize_permitted_cnames, 3, .production_id = 9),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_jump, 7, .production_id = 53),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 52),
  [1822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hosts_string, 3, .production_id = 32),
  [1824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token_string, 3, .production_id = 32),
  [1830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 5, .production_id = 51),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value2, 3, .production_id = 39),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward, 5, .production_id = 35),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_hosts_command, 3, .production_id = 8),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 5, .production_id = 36),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kbd_interactive_authentication, 3, .production_id = 8),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipqos, 3, .production_id = 8),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_file, 3, .production_id = 8),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 12),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identity_agent, 3, .production_id = 8),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 39),
  [1854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identities_only, 3, .production_id = 8),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostname, 3, .production_id = 8),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__permit_remote_open_value, 3, .production_id = 40),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__permit_remote_open_repeat1, 2, .production_id = 41),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__host_key_alias, 3, .production_id = 8),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__certificate_file, 3, .production_id = 8),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proxy_string, 3, .production_id = 32),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hostbased_authentication, 3, .production_id = 8),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__check_host_ip, 3, .production_id = 8),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_delegate_credentials, 3, .production_id = 8),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gssapi_authentication, 3, .production_id = 8),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_trusted, 3, .production_id = 8),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11_timeout, 3, .production_id = 8),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_x11, 3, .production_id = 8),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_host_declaration_repeat1, 3, .production_id = 44),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 8),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__clear_all_forwardings, 3, .production_id = 8),
  [1894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forward_agent, 3, .production_id = 12),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compression, 3, .production_id = 8),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attempts, 3, .production_id = 8),
  [1904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fork_after_authentication, 3, .production_id = 8),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fingerprint_hash, 3, .production_id = 8),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exit_on_forward_failure, 3, .production_id = 8),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_char, 3, .production_id = 8),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_ssh_keysign, 3, .production_id = 8),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enable_escape_command_line, 3, .production_id = 8),
  [1916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_path, 3, .production_id = 8),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_verbose, 6, .production_id = 47),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_persist, 3, .production_id = 8),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_master, 3, .production_id = 8),
  [1924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connect_timeout, 3, .production_id = 8),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value1, 3, .production_id = 34),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_forward_value1, 1, .production_id = 14),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1980] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
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
